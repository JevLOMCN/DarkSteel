// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 26

// operator() @ 143370050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __thiscall
`UE::Geometry::FConvexDecomposition3::ConvexPartVsSphereOverlap'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar56;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined4 uVar57;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  uint local_190;
  double local_168;
  undefined1 auStack_160 [16];
  double dStack_150;
  TVector<double>_u_0 local_128;
  undefined1 local_110 [16];
  double local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  double dStack_e8;
  undefined1 local_e0 [16];
  double local_d0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  lVar4 = *(longlong *)this;
  lVar18 = (longlong)param_1;
  iVar3 = *(int *)(lVar4 + 0x238);
  uVar16 = 0;
  if (param_1 < iVar3) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if (uVar16 == 0) {
    local_1a8 = lVar18;
    local_1a0 = (longlong)iVar3;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar6 = (code *)swi(3);
      dVar19 = (double)(*pcVar6)();
      return dVar19;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x230);
  local_198 = *(ulonglong *)(lVar4 + lVar18 * 0xc);
  local_190 = *(uint *)(lVar4 + 8 + lVar18 * 0xc);
  lVar4 = *(longlong *)(*(longlong *)this + 0x10);
  uVar17 = (ulonglong)((uint)local_198 & 0x1ff);
  lVar18 = *(longlong *)(lVar4 + ((local_198 & 0xffffffff) >> 9) * 8);
  local_168 = *(double *)(lVar18 + 0x10 + uVar17 * 0x18);
  pdVar1 = (double *)(lVar18 + uVar17 * 0x18);
  dVar49 = *pdVar1;
  dVar56 = pdVar1[1];
  uVar17 = (ulonglong)((uint)(local_198 >> 0x20) & 0x1ff);
  lVar18 = *(longlong *)(lVar4 + (local_198 >> 0x29) * 8);
  pauVar2 = (undefined1 (*) [16])(lVar18 + uVar17 * 0x18);
  auStack_160 = *pauVar2;
  dStack_150 = *(double *)(lVar18 + 0x10 + uVar17 * 0x18);
  lVar4 = *(longlong *)(lVar4 + (ulonglong)(local_190 >> 9) * 8);
  pdVar1 = (double *)(lVar4 + (ulonglong)(local_190 & 0x1ff) * 0x18);
  dVar19 = *pdVar1;
  dVar10 = pdVar1[1];
  local_d0 = *(double *)(lVar4 + 0x10 + (ulonglong)(local_190 & 0x1ff) * 0x18);
  if (*(char *)((longlong)this + 8) != '\0') {
    pauVar5 = *(undefined1 (**) [16])((longlong)this + 0x28);
    auVar32 = pauVar5[1];
    local_168 = local_168 * *(double *)pauVar5[5];
    dVar9 = *(double *)(pauVar5[5] + 8) * 0.0;
    auVar21 = *pauVar5;
    dVar12 = *(double *)*pauVar2 * *(double *)pauVar5[4];
    dVar13 = *(double *)(*pauVar2 + 8) * *(double *)(pauVar5[4] + 8);
    uVar57 = (undefined4)((ulonglong)dVar13 >> 0x20);
    dVar14 = *(double *)(pauVar5[1] + 8);
    dVar49 = *(double *)pauVar5[4] * dVar49;
    dVar56 = *(double *)(pauVar5[4] + 8) * dVar56;
    auVar30 = blendpd(auVar21,auVar32,2);
    auVar46._8_4_ = SUB84(dVar56,0);
    auVar46._0_8_ = dVar49;
    uVar45 = (undefined4)((ulonglong)dVar56 >> 0x20);
    auVar46._12_4_ = uVar45;
    dVar7 = auVar32._0_8_;
    auVar47._0_8_ = auVar46._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar49;
    auVar47._8_8_ = local_168 * auVar21._8_8_ - dVar7 * dVar56;
    auVar20._8_4_ = SUB84(dVar56,0);
    auVar20._0_8_ = dVar49;
    auVar20._12_4_ = uVar45;
    auVar21._8_4_ = SUB84(dVar9,0);
    auVar21._0_8_ = local_168;
    auVar21._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar21 = blendpd(auVar20,auVar21,2);
    dVar8 = auVar32._8_8_;
    auVar22._0_8_ = auVar21._0_8_ * dVar7 - auVar30._0_8_ * local_168;
    auVar22._8_8_ = auVar21._8_8_ * dVar8 - auVar30._8_8_ * dVar9;
    auVar21 = *pauVar5;
    auVar30 = blendpd(auVar47,auVar22,2);
    auVar48._0_8_ = auVar30._0_8_ + auVar30._0_8_;
    auVar48._8_8_ = auVar30._8_8_ + auVar30._8_8_;
    dVar9 = auVar47._8_8_ + auVar47._8_8_;
    dVar11 = auVar22._0_8_ + auVar22._0_8_;
    uVar45 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar39._8_4_ = SUB84(dVar11,0);
    auVar39._0_8_ = dVar9;
    auVar39._12_4_ = uVar45;
    auVar33._8_4_ = SUB84(dVar11,0);
    auVar33._0_8_ = dVar9;
    auVar33._12_4_ = uVar45;
    auVar30 = blendpd(auVar33,auVar48,2);
    auVar40._0_8_ = auVar39._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar9;
    auVar40._8_8_ = auVar48._0_8_ * auVar21._8_8_ - dVar7 * dVar11;
    auVar21 = blendpd(auVar21,auVar32,2);
    auVar23._8_4_ = SUB84(auVar40._8_8_,0);
    auVar23._0_8_ = auVar40._0_8_;
    auVar23._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
    auVar50._8_4_ = SUB84(dVar13,0);
    auVar50._0_8_ = dVar12;
    auVar50._12_4_ = uVar57;
    auVar34._0_8_ = auVar30._0_8_ * dVar7 - auVar21._0_8_ * auVar48._0_8_;
    auVar34._8_8_ = auVar30._8_8_ * dVar8 - auVar21._8_8_ * auVar48._8_8_;
    dVar49 = dVar9 * dVar14 + dVar49 + auVar23._8_8_ + *(double *)pauVar5[2];
    dVar56 = dVar11 * dVar14 + dVar56 + auVar34._0_8_ + *(double *)(pauVar5[2] + 8);
    auVar21 = *pauVar5;
    dStack_150 = dStack_150 * *(double *)pauVar5[5];
    dVar9 = *(double *)(pauVar5[5] + 8) * 0.0;
    auVar31 = blendpd(auVar21,auVar32,2);
    auVar51._0_8_ = auVar50._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar12;
    auVar51._8_8_ = dStack_150 * auVar21._8_8_ - dVar7 * dVar13;
    auVar24._8_4_ = SUB84(dVar13,0);
    auVar24._0_8_ = dVar12;
    auVar24._12_4_ = uVar57;
    auVar30._8_4_ = SUB84(dVar9,0);
    auVar30._0_8_ = dStack_150;
    auVar30._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar21 = blendpd(auVar24,auVar30,2);
    auVar30 = blendpd(auVar40,auVar34,2);
    local_168 = auVar48._0_8_ * dVar14 + local_168 + auVar30._0_8_ + *(double *)pauVar5[3];
    auVar25._0_8_ = auVar21._0_8_ * dVar7 - auVar31._0_8_ * dStack_150;
    auVar25._8_8_ = auVar21._8_8_ * dVar8 - auVar31._8_8_ * dVar9;
    auVar21 = blendpd(auVar51,auVar25,2);
    dVar9 = auVar51._8_8_ + auVar51._8_8_;
    dVar11 = auVar25._0_8_ + auVar25._0_8_;
    uVar45 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar52._0_8_ = auVar21._0_8_ + auVar21._0_8_;
    auVar52._8_8_ = auVar21._8_8_ + auVar21._8_8_;
    dVar19 = dVar19 * *(double *)pauVar5[4];
    dVar10 = dVar10 * *(double *)(pauVar5[4] + 8);
    uVar57 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar21 = *pauVar5;
    auVar41._8_4_ = SUB84(dVar11,0);
    auVar41._0_8_ = dVar9;
    auVar41._12_4_ = uVar45;
    auVar35._8_4_ = SUB84(dVar11,0);
    auVar35._0_8_ = dVar9;
    auVar35._12_4_ = uVar45;
    auVar31 = blendpd(auVar35,auVar52,2);
    auVar30 = blendpd(auVar21,auVar32,2);
    auVar42._0_8_ = auVar41._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar9;
    auVar42._8_8_ = auVar52._0_8_ * auVar21._8_8_ - dVar7 * dVar11;
    auVar26._8_4_ = SUB84(auVar42._8_8_,0);
    auVar26._0_8_ = auVar42._0_8_;
    auVar26._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
    auVar36._0_8_ = auVar31._0_8_ * dVar7 - auVar30._0_8_ * auVar52._0_8_;
    auVar36._8_8_ = auVar31._8_8_ * dVar8 - auVar30._8_8_ * auVar52._8_8_;
    auVar21 = blendpd(auVar42,auVar36,2);
    dVar11 = dVar11 * dVar8 + dVar13 + auVar36._0_8_ + *(double *)(pauVar5[2] + 8);
    dStack_150 = auVar52._0_8_ * dVar8 + dStack_150 + auVar21._0_8_ + *(double *)pauVar5[3];
    auVar21 = *pauVar5;
    local_d0 = local_d0 * *(double *)pauVar5[5];
    dVar13 = *(double *)(pauVar5[5] + 8) * 0.0;
    auVar30 = blendpd(auVar21,auVar32,2);
    auStack_160._8_4_ = SUB84(dVar11,0);
    auStack_160._0_8_ = dVar9 * dVar8 + dVar12 + auVar26._8_8_ + *(double *)pauVar5[2];
    auStack_160._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar53._8_4_ = SUB84(dVar10,0);
    auVar53._0_8_ = dVar19;
    auVar53._12_4_ = uVar57;
    auVar54._0_8_ = auVar53._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar19;
    auVar54._8_8_ = local_d0 * auVar21._8_8_ - dVar7 * dVar10;
    auVar27._8_4_ = SUB84(dVar10,0);
    auVar27._0_8_ = dVar19;
    auVar27._12_4_ = uVar57;
    auVar31._8_4_ = SUB84(dVar13,0);
    auVar31._0_8_ = local_d0;
    auVar31._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar21 = blendpd(auVar27,auVar31,2);
    auVar28._0_8_ = auVar21._0_8_ * dVar7 - auVar30._0_8_ * local_d0;
    auVar28._8_8_ = auVar21._8_8_ * dVar8 - auVar30._8_8_ * dVar13;
    auVar21 = *pauVar5;
    auVar30 = blendpd(auVar54,auVar28,2);
    auVar55._0_8_ = auVar30._0_8_ + auVar30._0_8_;
    auVar55._8_8_ = auVar30._8_8_ + auVar30._8_8_;
    dVar9 = auVar54._8_8_ + auVar54._8_8_;
    dVar11 = auVar28._0_8_ + auVar28._0_8_;
    uVar45 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar43._8_4_ = SUB84(dVar11,0);
    auVar43._0_8_ = dVar9;
    auVar43._12_4_ = uVar45;
    auVar37._8_4_ = SUB84(dVar11,0);
    auVar37._0_8_ = dVar9;
    auVar37._12_4_ = uVar45;
    auVar30 = blendpd(auVar37,auVar55,2);
    auVar44._0_8_ = auVar43._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar9;
    auVar44._8_8_ = auVar55._0_8_ * auVar21._8_8_ - dVar7 * dVar11;
    auVar29._8_4_ = SUB84(auVar44._8_8_,0);
    auVar29._0_8_ = auVar44._0_8_;
    auVar29._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
    auVar32 = blendpd(auVar21,auVar32,2);
    auVar38._0_8_ = auVar30._0_8_ * dVar7 - auVar32._0_8_ * auVar55._0_8_;
    auVar38._8_8_ = auVar30._8_8_ * dVar8 - auVar32._8_8_ * auVar55._8_8_;
    auVar32 = blendpd(auVar44,auVar38,2);
    local_d0 = auVar55._0_8_ * dVar8 + local_d0 + auVar32._0_8_ + *(double *)pauVar5[3];
    dVar19 = dVar9 * dVar8 + dVar19 + auVar29._8_8_ + *(double *)pauVar5[2];
    dVar10 = dVar11 * dVar8 + dVar10 + auVar38._0_8_ + *(double *)(pauVar5[2] + 8);
  }
  local_128._s_0.X = *(double *)((longlong)this + 0x10);
  local_128._s_0.Y = *(double *)((longlong)this + 0x18);
  local_128._s_0.Z = *(double *)((longlong)this + 0x20);
  local_100 = local_168;
  uStack_f8 = auStack_160._0_8_;
  local_110._8_4_ = SUB84(dVar56,0);
  local_110._0_8_ = dVar49;
  local_110._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
  local_f0 = auStack_160._8_8_;
  dStack_e8 = dStack_150;
  local_e0._8_4_ = SUB84(dVar10,0);
  local_e0._0_8_ = dVar19;
  local_e0._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  dVar19 = UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
                     ((TDistPoint3Triangle3<double> *)&local_128._s_0);
  return dVar19;
}

// operator() @ 143370860

void __thiscall
`UE::Geometry::FConvexDecomposition3::InitNegativeSpaceConvexPartMapping'::__l2::<lambda_1>::
operator()(void *this,
          TFunctionRef<void___cdecl(UE::Geometry::FConvexDecomposition3::FConvexPart_&,int,bool)>
          *param_1)

{
  double *pdVar1;
  double dVar2;
  FConvexPart *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint local_res18;
  uint local_res20 [2];
  longlong local_88;
  TVector<double>_u_0 local_78 [2];
  
  lVar9 = *(longlong *)this;
  local_res18 = 0;
  if (0 < *(int *)(lVar9 + 0x58)) {
    local_88 = 0;
    do {
      uVar10 = 0;
      if ((int)local_res18 < *(int *)(lVar9 + 0x58)) {
        uVar10 = ~local_res18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = *(FConvexPart **)(local_88 + *(longlong *)(lVar9 + 0x50));
      if ((pFVar3->OverlapsNegativeSpace).ArrayNum != 0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4359859441479185539>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexDecomposition3.cpp"
                           ,0xb7d,"Part.OverlapsNegativeSpace.IsEmpty()");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (pFVar3->OverlapsNegativeSpace).ArrayNum = 0;
        if ((pFVar3->OverlapsNegativeSpace).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(pFVar3->OverlapsNegativeSpace).AllocatorInstance,0,
                     &(pFVar3->OverlapsNegativeSpace).ArrayMax);
        }
      }
      lVar9 = *(longlong *)this;
      uVar10 = 0;
      if (0 < *(int *)(lVar9 + 0x118)) {
        lVar11 = 0;
        lVar8 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar10 < *(int *)(lVar9 + 0x128)) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar4 = *(longlong *)this;
          dVar2 = *(double *)(*(longlong *)(lVar9 + 0x120) + lVar8);
          uVar7 = 0;
          if ((int)uVar10 < *(int *)(lVar4 + 0x118)) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar9 = *(longlong *)(lVar4 + 0x110);
          pdVar1 = (double *)(lVar9 + lVar11);
          local_78[0]._0_8_ = *pdVar1;
          local_78[0]._8_8_ = pdVar1[1];
          local_78[0]._16_8_ = *(double *)(lVar9 + 0x10 + lVar11);
          UE::Geometry::FConvexDecomposition3::ConvexPartVsSphereOverlap
                    (pFVar3,(TVector<double> *)&local_78[0]._s_0,dVar2,(TTransform<double> *)0x0,
                     (double *)0x0);
          local_res20[0] = uVar10;
          (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar3,local_res20);
          lVar9 = *(longlong *)this;
          uVar10 = uVar10 + 1;
          lVar8 = lVar8 + 8;
          lVar11 = lVar11 + 0x18;
        } while ((int)uVar10 < *(int *)(lVar9 + 0x118));
      }
      local_res18 = local_res18 + 1;
      local_88 = local_88 + 8;
    } while ((int)local_res18 < *(int *)(lVar9 + 0x58));
  }
  return;
}

// operator() @ 143370b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::FConvexDecomposition3::MergeBest'::__l2::<lambda_1>::operator()
          (void *this,FConvexPart *param_1)

{
  double *pdVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStackY_1f8 [32];
  FConvexPart *local_1c8;
  undefined1 local_1c0 [16];
  double local_1b0;
  FConvexPart *local_1a8;
  int iStack_1a0;
  int iStack_19c;
  code *local_198;
  FConvexPart **local_190;
  TExtremePoints3<double> local_188;
  undefined1 local_108 [32];
  longlong local_e8 [3];
  longlong *local_d0;
  int *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [40];
  longlong *local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (*(double *)this <= 0.0) {
LAB_143370f3c:
    bVar11 = false;
  }
  else {
    dVar17 = (param_1->Bounds).Max.field0_0x0._s_0.Z - (param_1->Bounds).Min.field0_0x0._s_0.Z;
    dVar4 = (param_1->Bounds).Max.field0_0x0._s_0.Y - (param_1->Bounds).Min.field0_0x0._s_0.Y;
    dVar18 = (param_1->Bounds).Max.field0_0x0._s_0.X - (param_1->Bounds).Min.field0_0x0._s_0.X;
    if (dVar17 <= 0.0) {
      dVar17 = 0.0;
    }
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    if (dVar18 <= 0.0) {
      dVar18 = 0.0;
    }
    if (dVar4 <= dVar17) {
      dVar17 = dVar4;
    }
    if (dVar18 <= dVar17) {
      dVar17 = dVar18;
    }
    if (*(double *)this <= dVar17) {
      local_198 = UE::Core::Private::Function::
                  TFunctionRefCaller<``UE::Geometry::FConvexDecomposition3::MergeBest'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,bool,int>
                  ::Call;
      local_188.Dimension = 0;
      local_188.Extreme[0] = 0;
      local_188.Extreme[1] = 0;
      local_188.Extreme[2] = 0;
      local_190 = &local_1c8;
      local_188.Origin.field0_0x0._s_0.Y = 0.0;
      local_188.Origin.field0_0x0._s_0.Z = 0.0;
      local_188.Basis[0].field0_0x0._s_0.Z = 0.0;
      local_188.Basis[1].field0_0x0._s_0.X = 0.0;
      local_1c0._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<``UE::Geometry::FConvexDecomposition3::MergeBest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
           ::Call;
      local_1c0._8_8_ = &local_1a8;
      local_188.Basis[2].field0_0x0._s_0.X = 0.0;
      local_188.Basis[2].field0_0x0._s_0.Y = 0.0;
      local_188.Origin.field0_0x0._s_0.X = 0.0;
      local_188.Basis[2].field0_0x0._s_0.Z = 0.0;
      local_188.Extreme[3] = 0;
      local_188.Basis[0].field0_0x0._s_0.X = 0.0;
      local_188.Basis[0].field0_0x0._s_0.Y = 0.0;
      local_188.Basis[1].field0_0x0._s_0.Y = 0.0;
      local_188.Basis[1].field0_0x0._s_0.Z = 0.0;
      local_1c8 = param_1;
      local_1a8 = param_1;
      UE::Geometry::TExtremePoints3<double>::Init
                (&local_188,
                 (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200 +
                 (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed,
                 (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)local_1c0,
                 (TFunctionRef<bool___cdecl(int)> *)&local_198,__real_3cb0000000000000);
      uVar9 = local_188.Basis[2].field0_0x0._s_0.Z;
      uVar8 = local_188.Basis[2].field0_0x0._s_0.Y;
      uVar14 = local_188.Basis[2].field0_0x0._s_0.X;
      dVar4 = __real_7fefffffffffffff;
      if (2 < local_188.Dimension) {
        pFVar3 = (param_1->InternalGeo).Vertices.Blocks.AllocatorInstance.Data;
        pdVar1 = (double *)
                 (*(longlong *)(pFVar3 + (ulonglong)((uint)local_188.Extreme[0] >> 9) * 8) +
                 (ulonglong)(local_188.Extreme[0] & 0x1ff) * 0x18);
        dVar6 = *pdVar1;
        dVar7 = pdVar1[1];
        dVar18 = *(double *)
                  (*(longlong *)(pFVar3 + (ulonglong)((uint)local_188.Extreme[0] >> 9) * 8) + 0x10 +
                  (ulonglong)(local_188.Extreme[0] & 0x1ff) * 0x18);
        pdVar1 = (double *)
                 (*(longlong *)(pFVar3 + (ulonglong)((uint)local_188.Extreme[2] >> 9) * 8) +
                 (ulonglong)(local_188.Extreme[2] & 0x1ff) * 0x18);
        local_1b0 = *(double *)
                     (*(longlong *)(pFVar3 + (ulonglong)((uint)local_188.Extreme[2] >> 9) * 8) +
                      0x10 + (ulonglong)(local_188.Extreme[2] & 0x1ff) * 0x18);
        pdVar2 = (double *)
                 (*(longlong *)(pFVar3 + (ulonglong)((uint)local_188.Extreme[3] >> 9) * 8) +
                 (ulonglong)(local_188.Extreme[3] & 0x1ff) * 0x18);
        dVar17 = *(double *)this;
        dVar5 = (dVar7 - pdVar2[1]) * local_188.Basis[2].field0_0x0._s_0.Y +
                (dVar6 - *pdVar2) * local_188.Basis[2].field0_0x0._s_0.X +
                (dVar18 - *(double *)
                           (*(longlong *)(pFVar3 + (ulonglong)((uint)local_188.Extreme[3] >> 9) * 8)
                            + 0x10 + (ulonglong)(local_188.Extreme[3] & 0x1ff) * 0x18)) *
                local_188.Basis[2].field0_0x0._s_0.Z;
        uVar21 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar22 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        dVar18 = (dVar7 - pdVar1[1]) * local_188.Basis[2].field0_0x0._s_0.Y +
                 (dVar6 - *pdVar1) * local_188.Basis[2].field0_0x0._s_0.X +
                 (dVar18 - local_1b0) * local_188.Basis[2].field0_0x0._s_0.Z;
        uVar15 = SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar19 = (uint)((ulonglong)dVar18 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((double)CONCAT44(uVar22,uVar21) <= (double)CONCAT44(uVar19,uVar15)) {
          uVar21 = uVar15;
          uVar22 = uVar19;
        }
        if (dVar17 <= (double)CONCAT44(uVar22,uVar21) && (double)CONCAT44(uVar22,uVar21) != dVar17)
        goto LAB_143370f3c;
        if (dVar17 <= (double)CONCAT44(uVar22,uVar21) + (double)CONCAT44(uVar22,uVar21)) {
          uVar16 = (undefined4)__real_ffefffffffffffff;
          uVar20 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
          UE::Geometry::FDynamicMesh3::VerticesItr
                    (&param_1->InternalGeo,
                     (MappedEnumerable<UE::Math::TVector<double>_> *)&local_188);
          UE::Geometry::FRefCountVector::MappedEnumerable<UE::Math::TVector<double>_>::begin
                    ((MappedEnumerable<UE::Math::TVector<double>_> *)&local_188,
                     (MappedIterator<int,UE::Math::TVector<double>,UE::Geometry::FRefCountVector::IndexIterator>
                      *)local_108);
          local_1a8 = (FConvexPart *)local_188.Basis[0].field0_0x0._s_0.X;
          iStack_1a0 = *(int *)local_188.Basis[0].field0_0x0._s_0.X * 0x200 +
                       *(int *)((longlong)local_188.Basis[0].field0_0x0._s_0.X + 4);
          uStack_c0 = CONCAT44(iStack_1a0,iStack_1a0);
          local_b8._0_8_ = 0;
          local_90 = (longlong *)0x0;
          local_c8 = (int *)local_188.Basis[0].field0_0x0._s_0.X;
          iStack_19c = iStack_1a0;
          TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
                    ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_b8,
                     (TFunction<UE::Math::TVector<double>___cdecl(int)> *)&local_188);
          dVar18 = dVar4;
          if ((int)local_108._8_8_ != (int)uStack_c0) {
            do {
              local_1c8 = (FConvexPart *)CONCAT44(local_1c8._4_4_,(int)local_108._8_8_);
              UE::Core::Private::Function::CheckCallable((void *)local_108._16_8_);
              uVar10 = local_108._16_8_;
              plVar13 = local_e8;
              if (local_d0 != (longlong *)0x0) {
                plVar13 = local_d0;
              }
              uVar12 = (**(code **)(*plVar13 + 8))();
              (*(code *)uVar10)(local_1c0,uVar12,&local_1c8);
              dVar18 = (double)uVar8 * (double)local_1c0._8_8_ +
                       (double)uVar14 * (double)local_1c0._0_8_ + (double)uVar9 * local_1b0;
              dVar17 = dVar18;
              if (dVar18 <= (double)CONCAT44(uVar20,uVar16)) {
                dVar17 = (double)CONCAT44(uVar20,uVar16);
              }
              if (dVar4 <= dVar18) {
                dVar18 = dVar4;
              }
              uVar16 = SUB84(dVar17,0);
              uVar20 = (undefined4)((ulonglong)dVar17 >> 0x20);
              UE::Geometry::FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_108);
              dVar4 = dVar18;
            } while ((int)local_108._8_8_ != (int)uStack_c0);
          }
          if (local_b8._0_8_ != 0) {
            plVar13 = (longlong *)(local_b8 + 0x10);
            if (local_90 != (longlong *)0x0) {
              plVar13 = local_90;
            }
            (**(code **)(*plVar13 + 0x10))();
          }
          if ((code *)local_108._16_8_ != (code *)0x0) {
            plVar13 = local_e8;
            if (local_d0 != (longlong *)0x0) {
              plVar13 = local_d0;
            }
            (**(code **)(*plVar13 + 0x10))();
          }
          if (local_188._0_8_ != 0) {
            uVar14 = local_188.Extreme + 3;
            if ((int *)local_188.Origin.field0_0x0._s_0.Z != (int *)0x0) {
              uVar14 = local_188.Origin.field0_0x0._s_0.Z;
            }
            (**(code **)(*(longlong *)uVar14 + 0x10))();
          }
          return ((double)CONCAT44(uVar20,uVar16) - dVar18) * __real_3fe0000000000000 <
                 *(double *)this;
        }
      }
    }
    bVar11 = true;
  }
  return bVar11;
}

// operator() @ 143371270

bool __thiscall
`UE::Geometry::FConvexDecomposition3::UpdateProximitiesAfterSplit'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TPlane3<double> *param_2)

{
  double *pdVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  undefined1 local_res10 [8];
  
  lVar4 = *(longlong *)this;
  uVar12 = 0;
  if (param_1 < *(int *)(lVar4 + 0x58)) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  lVar5 = *(longlong *)this;
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + (longlong)param_1 * 8);
  uVar12 = 0;
  if (param_1 < *(int *)(lVar5 + 0x58)) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + (longlong)param_1 * 8);
  iVar2 = *(int *)(lVar6 + 0x238);
  lVar15 = *(longlong *)(lVar6 + 0x230);
  lVar5 = lVar15 + (longlong)iVar2 * 0xc;
  while( true ) {
    if (*(int *)(lVar6 + 0x238) != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (lVar15 == lVar5) break;
    lVar14 = 0;
    do {
      uVar3 = *(uint *)(lVar15 + lVar14 * 4);
      uVar13 = (ulonglong)(uVar3 & 0x1ff);
      lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
      pdVar1 = (double *)(lVar7 + uVar13 * 0x18);
      dVar16 = ((param_2->Normal).field0_0x0._s_0.Y * pdVar1[1] +
                (param_2->Normal).field0_0x0._s_0.X * *pdVar1 +
               (param_2->Normal).field0_0x0._s_0.Z * *(double *)(lVar7 + 0x10 + uVar13 * 0x18)) -
               param_2->Constant;
      if ((double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & uVar9,SUB84(dVar16,0) & uVar12) <
          **(double **)this) {
        return true;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < 3);
    lVar15 = lVar15 + 0xc;
  }
  return false;
}

// operator() @ 143375600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>
 __thiscall
`UE::Geometry::FConvexDecomposition3::MergeBest'::__l2::<lambda_2>::operator()
          (void *this,FProximity *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  FIndex2i_u_0 FVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int *piVar18;
  bool bVar19;
  undefined1 uVar20;
  uint uVar21;
  FConvexPart *this_00;
  FConvexPart *pFVar22;
  TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>
  TVar23;
  undefined8 uVar24;
  TAxisAlignedBox3<double> *pTVar25;
  FFunctionStorage *pFVar26;
  undefined ***pppuVar27;
  longlong *plVar28;
  longlong *plVar29;
  FConvexPart *pFVar30;
  uint *in_R8;
  ulonglong uVar31;
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  longlong local_2b0;
  uint local_2a8;
  undefined8 local_2a0;
  uint uStack_298;
  int iStack_294;
  FIndex2i_u_0 local_290;
  undefined8 local_288;
  uint uStack_280;
  uint uStack_27c;
  TVector<double>_u_0 local_278;
  undefined8 local_260;
  float local_258;
  undefined8 local_254;
  float local_24c;
  TVector2<float>_u_0 local_248;
  undefined2 local_240;
  undefined1 local_23e;
  code *local_238;
  undefined **local_228;
  longlong local_220;
  undefined ***local_210;
  code *local_208 [2];
  FFunctionStorage local_1f8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  TVector<double>_u_0 local_1b8;
  TAxisAlignedBox3<double> local_198;
  BaseIterator local_168;
  code *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  longlong *plStack_130;
  code *local_128 [2];
  longlong local_118 [3];
  longlong *local_100;
  int *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  code *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong *plStack_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *plStack_80;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  this_00 = ::operator_new(0x2e0);
  pFVar30 = (FConvexPart *)0x0;
  pFVar22 = pFVar30;
  if (this_00 != (FConvexPart *)0x0) {
    pFVar22 = UE::Geometry::FConvexDecomposition3::FConvexPart::FConvexPart(this_00);
  }
  *(FConvexPart **)(param_1->Link).field0_0x0.AB = pFVar22;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (pFVar22->GeoCenter).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (pFVar22->GeoCenter).field0_0x0._s_0.Y = (double)uVar24;
  (pFVar22->GeoCenter).field0_0x0._s_0.Z = (double)uVar13;
  *(undefined8 *)((longlong)(param_1->Link).field0_0x0 + 0x278) = 0;
  do {
    uVar2 = in_R8[(longlong)pFVar30];
    lVar4 = *(longlong *)this;
    iVar3 = *(int *)(lVar4 + 0x58);
    uVar21 = 0;
    if ((int)uVar2 < iVar3) {
      uVar21 = ~uVar2 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (local_2b8 = (longlong)(int)uVar2, local_2b0 = (longlong)iVar3,
       bVar19 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar7 = (code *)swi(3);
      TVar23.Ptr = (FConvexPart *)(*pcVar7)();
      return (TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>
              )TVar23.Ptr;
    }
    local_210 = (undefined ***)0x0;
    local_1f8.HeapAllocation = (FFunctionStorage *)0x0;
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + (longlong)(int)uVar2 * 8);
    local_228 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1__VerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__MappedEnumerable_U__TVector_N_Math_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_238 = UE::Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                ::Call;
    local_208[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                   ::Call;
    local_220 = lVar4;
    UE::Core::Private::Function::
    TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,0,0>::
    CloneToEmptyStorage(&local_228,&local_1f8);
    local_f8 = (int *)(lVar4 + 0x20);
    local_128[0] = (code *)0x0;
    local_100 = (longlong *)0x0;
    TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
              ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_128,
               (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_208);
    if (local_208[0] != (code *)0x0) {
      pFVar26 = &local_1f8;
      if (local_1f8.HeapAllocation != (FFunctionStorage *)0x0) {
        pFVar26 = local_1f8.HeapAllocation;
      }
      (**(code **)(*(longlong *)pFVar26->InlineAllocation + 0x10))();
    }
    if (local_238 != (code *)0x0) {
      pppuVar27 = &local_228;
      if (local_210 != (undefined ***)0x0) {
        pppuVar27 = local_210;
      }
      (*(code *)(*pppuVar27)[2])();
    }
    local_2a0 = local_f8;
    piVar18 = local_2a0;
    uStack_298 = 0;
    iStack_294 = *local_f8 * 0x200 + local_f8[1];
    if ((iStack_294 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(local_f8 + 2) - 1U))) {
      uVar31 = 1;
      uStack_298 = 1;
      if (1 < iStack_294) {
        do {
          sVar1 = *(short *)((*(undefined8 **)(local_f8 + 2))[uVar31 >> 9] +
                            (ulonglong)(uStack_298 & 0x1ff) * 2);
          if ((sVar1 != 0) && (sVar1 != -1)) break;
          uStack_298 = (int)uVar31 + 1;
          uVar31 = (ulonglong)uStack_298;
        } while ((int)uStack_298 < iStack_294);
      }
    }
    local_158 = (code *)0x0;
    plStack_130 = (longlong *)0x0;
    local_a8 = local_128[0];
    plStack_80 = (longlong *)0x0;
    local_2a0._0_4_ = SUB84(local_f8,0);
    uVar14 = (undefined4)local_2a0;
    local_2a0._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
    local_168.Vector._0_4_ = (undefined4)local_2a0;
    local_168.Vector._4_4_ = local_2a0._4_4_;
    local_168.Index = uStack_298;
    local_168.LastIndex = iStack_294;
    local_2a0 = piVar18;
    if (local_128[0] != (code *)0x0) {
      plVar29 = local_118;
      if (local_100 != (longlong *)0x0) {
        plVar29 = local_100;
      }
      (**(code **)*plVar29)(uVar14,&local_98);
    }
    plVar29 = plStack_130;
    uVar13 = uStack_150;
    pcVar7 = local_158;
    uVar14 = (undefined4)local_148;
    uVar15 = local_148._4_4_;
    uVar16 = (undefined4)uStack_140;
    uVar17 = uStack_140._4_4_;
    uVar24 = CONCAT44(uStack_134,local_138);
    local_158 = local_a8;
    uStack_150 = uStack_a0;
    local_138 = (undefined4)local_88;
    uStack_134 = local_88._4_4_;
    plStack_130 = plStack_80;
    local_148 = CONCAT44(uStack_94,local_98);
    uStack_140 = CONCAT44(uStack_8c,uStack_90);
    local_a8 = pcVar7;
    uStack_a0 = uVar13;
    local_98 = uVar14;
    uStack_94 = uVar15;
    uStack_90 = uVar16;
    uStack_8c = uVar17;
    local_88 = uVar24;
    plStack_80 = plVar29;
    if (pcVar7 != (code *)0x0) {
      plVar28 = (longlong *)&local_98;
      if (plVar29 != (longlong *)0x0) {
        plVar28 = plVar29;
      }
      (**(code **)(*plVar28 + 0x10))();
    }
    uStack_280 = local_f8[1] + *local_f8 * 0x200;
    local_d8 = (code *)0x0;
    plStack_b0 = (longlong *)0x0;
    local_78 = local_128[0];
    plStack_50 = (longlong *)0x0;
    local_288._0_4_ = SUB84(local_f8,0);
    local_288._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
    local_e8 = (undefined4)local_288;
    uStack_e4 = local_288._4_4_;
    uStack_e0 = uStack_280;
    uStack_dc = uStack_280;
    piVar18 = local_f8;
    uStack_27c = uStack_280;
    if (local_128[0] != (code *)0x0) {
      plVar29 = local_118;
      if (local_100 != (longlong *)0x0) {
        plVar29 = local_100;
      }
      uVar14 = (undefined4)local_288;
      local_288 = local_f8;
      (**(code **)*plVar29)(uVar14,&local_68);
      piVar18 = local_288;
    }
    local_288 = piVar18;
    plVar29 = plStack_b0;
    uVar13 = uStack_d0;
    pcVar7 = local_d8;
    uVar14 = (undefined4)local_c8;
    uVar15 = local_c8._4_4_;
    uVar16 = (undefined4)uStack_c0;
    uVar17 = uStack_c0._4_4_;
    uVar24 = CONCAT44(uStack_b4,local_b8);
    local_d8 = local_78;
    uStack_d0 = uStack_70;
    local_b8 = (undefined4)local_58;
    uStack_b4 = local_58._4_4_;
    plStack_b0 = plStack_50;
    local_c8 = CONCAT44(uStack_64,local_68);
    uStack_c0 = CONCAT44(uStack_5c,uStack_60);
    local_78 = pcVar7;
    uStack_70 = uVar13;
    local_68 = uVar14;
    uStack_64 = uVar15;
    uStack_60 = uVar16;
    uStack_5c = uVar17;
    local_58 = uVar24;
    plStack_50 = plVar29;
    if (pcVar7 != (code *)0x0) {
      plVar28 = (longlong *)&local_68;
      if (plVar29 != (longlong *)0x0) {
        plVar28 = plVar29;
      }
      (**(code **)(*plVar28 + 0x10))();
    }
    if (local_168.Index != uStack_e0) {
      do {
        local_2a8 = local_168.Index;
        UE::Core::Private::Function::CheckCallable(local_158);
        pcVar7 = local_158;
        plVar29 = &local_148;
        if (plStack_130 != (longlong *)0x0) {
          plVar29 = plStack_130;
        }
        uVar24 = (**(code **)(*plVar29 + 8))();
        (*pcVar7)(&local_1d8,uVar24);
        local_278._s_0.X = local_1d8;
        local_278._s_0.Y = dStack_1d0;
        local_258 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_24c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_260 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_254 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_278._s_0.Z = local_1c8;
        local_248 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_240 = 0;
        local_23e = 0;
        UE::Geometry::FDynamicMesh3::AppendVertex
                  ((FDynamicMesh3 *)(param_1->Link).field0_0x0,(FVertexInfo *)&local_278._s_0);
        UE::Geometry::FRefCountVector::BaseIterator::goto_next(&local_168);
      } while (local_168.Index != uStack_e0);
    }
    if (local_d8 != (code *)0x0) {
      plVar29 = &local_c8;
      if (plStack_b0 != (longlong *)0x0) {
        plVar29 = plStack_b0;
      }
      (**(code **)(*plVar29 + 0x10))();
    }
    if (local_158 != (code *)0x0) {
      plVar29 = &local_148;
      if (plStack_130 != (longlong *)0x0) {
        plVar29 = plStack_130;
      }
      (**(code **)(*plVar29 + 0x10))();
    }
    if (local_128[0] != (code *)0x0) {
      plVar29 = local_118;
      if (local_100 != (longlong *)0x0) {
        plVar29 = local_100;
      }
      (**(code **)(*plVar29 + 0x10))();
    }
    lVar5 = *(longlong *)(param_1->Link).field0_0x0.AB;
    pFVar30 = (FConvexPart *)((longlong)&(pFVar30->InternalGeo)._padding_ + 1);
    *(double *)(lVar5 + 0x280) = *(double *)(lVar4 + 0x280) + *(double *)(lVar5 + 0x280);
    *(double *)(lVar5 + 0x288) = *(double *)(lVar4 + 0x288) + *(double *)(lVar5 + 0x288);
    *(double *)(lVar5 + 0x290) = *(double *)(lVar4 + 0x290) + *(double *)(lVar5 + 0x290);
    FVar6 = (param_1->Link).field0_0x0;
    *(double *)((longlong)FVar6 + 0x270) =
         *(double *)(lVar4 + 0x270) + *(double *)((longlong)FVar6 + 0x270);
    FVar6 = (param_1->Link).field0_0x0;
    *(double *)((longlong)FVar6 + 0x278) =
         *(double *)(lVar4 + 0x278) + *(double *)((longlong)FVar6 + 0x278);
    dVar9 = _UNK_150689678;
    dVar8 = ___xmm_3fe00000000000003fe0000000000000;
  } while ((longlong)pFVar30 < 2);
  lVar4 = *(longlong *)(param_1->Link).field0_0x0.AB;
  *(double *)(lVar4 + 0x280) = *(double *)(lVar4 + 0x280) * __real_3fe0000000000000;
  *(double *)(lVar4 + 0x288) = dVar8 * *(double *)(lVar4 + 0x288);
  *(double *)(lVar4 + 0x290) = dVar9 * *(double *)(lVar4 + 0x290);
  UE::Geometry::FConvexDecomposition3::FConvexPart::ComputeHull
            ((FConvexPart *)(param_1->Link).field0_0x0,true,0.0);
                    /* WARNING: Load size is inaccurate */
  local_290 = *(FIndex2i_u_0 *)(param_1->Link).field0_0x0.AB;
  local_1b8._s_0.X = (double)*(undefined8 *)((longlong)local_290 + 0x280);
  local_1b8._s_0.Y = (double)*(undefined8 *)((longlong)local_290 + 0x288);
  local_1b8._s_0.Z = (double)*(undefined8 *)((longlong)local_290 + 0x290);
  dVar8 = UE::Geometry::`anonymous_namespace'::
          GetVolumeUsingReferencePoint<UE::Geometry::FConvexPartHullMeshAdapter>
                    ((FConvexPartHullMeshAdapter *)&local_290._s_0,
                     (TVector<double> *)&local_1b8._s_0,__real_3ff0000000000000);
  *(double *)((longlong)(param_1->Link).field0_0x0 + 0x268) = dVar8;
  pTVar25 = UE::Geometry::FDynamicMesh3::GetBounds
                      ((FDynamicMesh3 *)(param_1->Link).field0_0x0,&local_198,false);
  dVar8 = (pTVar25->Min).field0_0x0._s_0.Y;
  dVar9 = (pTVar25->Min).field0_0x0._s_0.Z;
  dVar10 = (pTVar25->Max).field0_0x0._s_0.X;
  dVar11 = (pTVar25->Max).field0_0x0._s_0.Y;
  dVar12 = (pTVar25->Max).field0_0x0._s_0.Z;
  lVar4 = *(longlong *)(param_1->Link).field0_0x0.AB;
  *(double *)(lVar4 + 0x298) = (pTVar25->Min).field0_0x0._s_0.X;
  *(double *)(lVar4 + 0x2a0) = dVar8;
  *(double *)(lVar4 + 0x2a8) = dVar9;
  *(double *)(lVar4 + 0x2b0) = dVar10;
  *(double *)(lVar4 + 0x2b8) = dVar11;
  *(double *)(lVar4 + 0x2c0) = dVar12;
  lVar4 = *(longlong *)(param_1->Link).field0_0x0.AB;
  *(double *)(lVar4 + 0x2d0) = *(double *)(lVar4 + 0x268) - *(double *)(lVar4 + 0x270);
  uVar2 = *in_R8;
  lVar4 = *(longlong *)this;
  iVar3 = *(int *)(lVar4 + 0x58);
  uVar21 = 0;
  if ((int)uVar2 < iVar3) {
    uVar21 = ~uVar2 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (local_2b8 = (longlong)(int)uVar2, local_2b0 = (longlong)iVar3,
     bVar19 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar7 = (code *)swi(3);
    TVar23.Ptr = (FConvexPart *)(*pcVar7)();
    return (TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>
            )TVar23.Ptr;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(lVar4 + 0x50) + (longlong)(int)uVar2 * 8) + 0x2ca) !=
      '\0') {
    uVar2 = in_R8[1];
    lVar4 = *(longlong *)this;
    iVar3 = *(int *)(lVar4 + 0x58);
    uVar21 = 0;
    if ((int)uVar2 < iVar3) {
      uVar21 = ~uVar2 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (local_2b8 = (longlong)(int)uVar2, local_2b0 = (longlong)iVar3,
       bVar19 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar7 = (code *)swi(3);
      TVar23.Ptr = (FConvexPart *)(*pcVar7)();
      return (TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>
              )TVar23.Ptr;
    }
    if ((*(char *)(*(longlong *)(*(longlong *)(lVar4 + 0x50) + (longlong)(int)uVar2 * 8) + 0x2ca) !=
         '\0') &&
       (bVar19 = __l2::<lambda_1>::operator()
                           (*(void **)((longlong)this + 8),(FConvexPart *)(param_1->Link).field0_0x0
                           ), bVar19)) {
      uVar20 = 1;
      goto LAB_143375d2e;
    }
  }
  uVar20 = 0;
LAB_143375d2e:
  *(undefined1 *)((longlong)(param_1->Link).field0_0x0 + 0x2ca) = uVar20;
  UE::Geometry::FConvexDecomposition3::FConvexPart::Compact
            ((FConvexPart *)(param_1->Link).field0_0x0);
  return (TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>
          )(FConvexPart *)param_1;
}

// operator() @ 143375d80

void __thiscall
`UE::Geometry::FConvexDecomposition3::UpdateProximitiesAfterSplit'::__l2::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double *pdVar3;
  undefined8 *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int local_res8 [2];
  int local_res10 [2];
  uint local_res18 [4];
  TPairInitializer<int_const_&,int_const_&> local_e8;
  int *local_d8;
  int *local_d0;
  uint *local_c8;
  int *local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  
  lVar16 = *(longlong *)this;
  uVar14 = 0;
  if (param_1 < *(int *)(lVar16 + 0x58)) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pdVar3 = *(double **)this;
  lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x50) + (longlong)param_1 * 8);
  dVar2 = *pdVar3;
  lVar15 = (longlong)(int)local_res18[0];
  local_a8 = *(double *)(lVar16 + 0x2a8);
  dStack_a0 = *(double *)(lVar16 + 0x2b0);
  local_98 = *(double *)(lVar16 + 0x2b8);
  local_b8 = *(double *)(lVar16 + 0x298);
  dStack_b0 = *(double *)(lVar16 + 0x2a0);
  uVar14 = 0;
  if ((int)local_res18[0] < *(int *)(pdVar3 + 0xb)) {
    uVar14 = ~local_res18[0] >> 0x1f;
  }
  dVar9 = dVar2 + local_98;
  dVar6 = *(double *)(lVar16 + 0x2c0) + dVar2;
  dVar10 = local_b8 - dVar2;
  dVar8 = dVar2 + dStack_a0;
  dVar7 = dStack_b0 - dVar2;
  dVar2 = local_a8 - dVar2;
  dStack_90 = dVar6;
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar16 = *(longlong *)((longlong)pdVar3[10] + lVar15 * 8);
  if ((((dVar10 < *(double *)(lVar16 + 0x2b0)) && (*(double *)(lVar16 + 0x298) < dVar8)) &&
      (dVar7 < *(double *)(lVar16 + 0x2b8))) &&
     (((*(double *)(lVar16 + 0x2a0) < dVar9 && (dVar2 < *(double *)(lVar16 + 0x2c0))) &&
      (*(double *)(lVar16 + 0x2a8) < dVar6)))) {
    lVar16 = *(longlong *)this;
    puVar4 = *(undefined8 **)((longlong)this + 8);
    local_e8.Key._4_4_ = local_res10[0];
    local_e8.Value._0_4_ = local_res18[0];
    local_res8[0] = *(int *)(lVar16 + 0xb8);
    if (local_res8[0] == *(int *)(lVar16 + 0xbc)) {
      local_res8[0] =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x838,(ForAnyElementType *)(lVar16 + 0xb0),(int *)(lVar16 + 0xbc));
    }
    lVar15 = *(longlong *)(lVar16 + 0xb0);
    *(int *)(lVar16 + 0xb8) = local_res8[0] + 1;
    lVar16 = (longlong)local_res8[0] * 0x38;
    *(ulonglong *)(lVar16 + lVar15) = CONCAT44((uint)local_e8.Value,local_e8.Key._4_4_);
    uVar11 = puVar4[1];
    puVar1 = (undefined8 *)(lVar16 + 8 + lVar15);
    *puVar1 = *puVar4;
    puVar1[1] = uVar11;
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    *(undefined8 *)(lVar16 + 0x30 + lVar15) = 0x7fefffffffffffff;
    *(undefined2 *)(lVar16 + 0x28 + lVar15) = 0x101;
    puVar4 = (undefined8 *)(lVar16 + 0x18 + lVar15);
    *puVar4 = uVar11;
    puVar4[1] = uVar12;
    local_d8 = local_res10;
    local_d0 = local_res8;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
               (*(longlong *)this + 0xc0),
               (TPairInitializer<int_const_&,int_const_&> *)(local_res18 + 2),(bool *)&local_d8);
    local_c8 = local_res18;
    local_c0 = local_res8;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
               (*(longlong *)this + 0xc0),&local_e8,(bool *)&local_c8);
  }
  return;
}

// operator() @ 143379b10

void __thiscall
`UE::Geometry::FConvexDecomposition3::InitNegativeSpaceConvexPartMapping'::__l9::<lambda_3>::
operator()(void *this,FConvexPart *param_1,int param_2,bool param_3)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_res18 [4];
  
  if (param_3) {
    pTVar2 = &param_1->OverlapsNegativeSpace;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    local_res18[0] = param_2;
    if ((pFVar3 <= (FScriptContainerElement *)local_res18) &&
       ((FScriptContainerElement *)local_res18 <
        pFVar3 + (longlong)(param_1->OverlapsNegativeSpace).ArrayMax * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (param_1->OverlapsNegativeSpace).ArrayNum;
    piVar1 = &(param_1->OverlapsNegativeSpace).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_1->OverlapsNegativeSpace).ArrayNum = iVar6 + 1;
    *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_res18[0];
  }
  return;
}

// operator() @ 14337aac0

void __thiscall
`UE::Geometry::FConvexDecomposition3::MergeBest'::__l145::<lambda_4>::operator()
          (void *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  TPairInitializer<int_const_&,int_const_&> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  int *local_58;
  uint *local_50;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_res18[0] = param_2;
  TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>::
  MultiFind<TSizedDefaultAllocator<32>_>
            ((TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_> *)
             (*(longlong *)this + 0xc0),param_1,&local_68,false);
  lVar1 = *(longlong *)this;
  local_res20[0] = param_1;
  if (*(int *)(lVar1 + 200) != *(int *)(lVar1 + 0xf4)) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
    RemoveImpl<int>((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                     *)(lVar1 + 0xc0),param_1,local_res20);
  }
  iVar5 = local_68.ArrayNum;
  uVar8 = (ulonglong)local_68.ArrayNum;
  local_78.Value = (int *)(local_68.AllocatorInstance.Data + uVar8 * 4);
  FVar11.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    piVar4 = local_78.Value;
    if ((int)uVar8 != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar11.Data == (FScriptContainerElement *)piVar4) break;
    local_res8[0] = *(uint *)FVar11.Data;
    lVar10 = (longlong)(int)local_res8[0];
    lVar1 = *(longlong *)this;
    uVar7 = 0;
    if ((int)local_res8[0] < *(int *)(lVar1 + 0xb8)) {
      uVar7 = ~local_res8[0] >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar3 = local_res18[0];
    lVar1 = *(longlong *)(lVar1 + 0xb0);
    if (*(int *)(lVar10 * 0x38 + lVar1) == param_1) {
      iVar9 = 0;
    }
    else {
      iVar9 = -1;
      if (*(int *)(lVar10 * 0x38 + 4 + lVar1) == param_1) {
        iVar9 = 1;
      }
    }
    lVar10 = (longlong)(int)local_res8[0];
    lVar1 = *(longlong *)this;
    uVar7 = 0;
    if ((int)local_res8[0] < *(int *)(lVar1 + 0xb8)) {
      uVar7 = ~local_res8[0] >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(int *)(*(longlong *)(lVar1 + 0xb0) + (lVar10 * 0xe + (longlong)iVar9) * 4) = iVar3;
    local_58 = local_res18;
    local_50 = local_res8;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
               (*(longlong *)this + 0xc0),&local_78,(bool *)&local_58);
    uVar8 = local_68._8_8_ & 0xffffffff;
    FVar11.Data = FVar11.Data + 4;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// Compute @ 14338f340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FConvexDecomposition3::Compute
          (FConvexDecomposition3 *this,int param_1,int param_2,double param_3,double param_4,
          int param_5,bool param_6)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  double dVar5;
  bool bVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined1 auStackY_148 [32];
  undefined1 local_108 [104];
  longlong *local_a0;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  ulonglong local_68;
  
  dVar5 = __real_bff0000000000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_148;
  iVar10 = param_1;
  if ((0 < param_5) && (iVar10 = param_5, param_1 < param_5)) {
    iVar10 = param_1;
  }
  iVar1 = (this->NegativeSpace).Position.ArrayNum;
  iVar9 = 0;
  if (0 < iVar10 + param_2) {
    do {
      iVar2 = (this->Decomposition).Array.ArrayNum;
      bVar8 = (bool)((byte)iVar9 & 1);
      bVar6 = SplitWorstHelper(this,bVar8,param_3,param_6,dVar5);
      iVar4 = iVar2 + 1;
      while (!bVar6) {
        if (iVar4 < 1) {
          bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4359859441479186600>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexDecomposition3.cpp"
                             ,0x758,"NumAttempts-- > 0");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        bVar6 = SplitWorstHelper(this,bVar8,param_3,param_6,dVar5);
        iVar4 = iVar4 + -1;
      }
    } while (((this->Decomposition).Array.ArrayNum != iVar2) &&
            (iVar9 = iVar9 + 1, iVar9 < iVar10 + param_2));
  }
  if (0 < iVar1) {
    FixHullOverlapsInNegativeSpace(this,__real_3f1a36e2eb1c432d,__real_3f1a36e2eb1c432d);
  }
  local_108._24_8_ = param_4;
  local_108[0x10] = true;
  local_108._64_8_ = 0;
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  local_70 = (longlong *)0x0;
  local_108[0x20] = true;
  local_108[0x21] = false;
  local_108._20_4_ = param_5;
  local_108._40_8_ = (FSphereCovering *)0x0;
  local_108._48_8_ = (TTransform<double> *)0x0;
  local_108._0_4_ = iVar10;
  local_108._8_8_ = param_3;
  MergeBest(this,(FMergeSettings *)local_108);
  if (local_98 != 0) {
    plVar7 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar7 = local_70;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_108._64_8_ != 0) {
    plVar7 = (longlong *)(local_108 + 0x50);
    if (local_a0 != (longlong *)0x0) {
      plVar7 = local_a0;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// ConvertDistanceToleranceToLocalSpace @ 143393b60

double __thiscall
UE::Geometry::FConvexDecomposition3::ConvertDistanceToleranceToLocalSpace
          (FConvexDecomposition3 *this,double param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  
  dVar3 = __real_3cb0000000000000;
  dVar5 = (this->ResultTransform).Scale3D.field0_0x0._s_0.Y;
  dVar1 = (this->ResultTransform).Scale3D.field0_0x0._s_0.X;
  if (dVar5 <= dVar1) {
    dVar5 = dVar1;
  }
  dVar1 = (this->ResultTransform).Scale3D.field0_0x0._s_0.Z;
  if (dVar5 <= dVar1) {
    dVar5 = dVar1;
  }
  if ((dVar5 < __real_3cb0000000000000) &&
     (bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5631276314938835472>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\CompGeom\\ConvexDecomposition3.h"
                         ,0x210,"ScaleFactor >= FMathd::Epsilon"), dVar5 = dVar3, bVar4)) {
    pcVar2 = (code *)swi(3);
    dVar5 = (double)(*pcVar2)();
    return dVar5;
  }
  return param_1 / dVar5;
}

// ConvexPartVsSphereOverlap @ 143393eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Geometry::FConvexDecomposition3::ConvexPartVsSphereOverlap
          (FConvexPart *param_1,TVector<double> *param_2,double param_3,TTransform<double> *param_4,
          double *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  uint uVar12;
  TVector<double> *pTVar13;
  int iVar14;
  uint uVar15;
  char cVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined8 in_XMM1_Qb;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 in_XMM2_Qb;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar43;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar52 [16];
  undefined8 uVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar57;
  double dVar62;
  undefined4 uVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined4 uVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined4 uVar79;
  undefined4 uVar80;
  undefined8 uVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined4 uVar85;
  undefined4 uVar86;
  undefined1 local_228 [16];
  TVector<double>_u_0 local_218;
  double dStack_200;
  TVector<double>_u_0 local_1f8;
  double dStack_1e0;
  FConvexPart *local_1d8;
  char local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  TTransform<double> *local_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined1 local_190 [16];
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined1 local_160 [16];
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_130 [16];
  double local_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8 [5];
  
  uVar15 = (uint)((ulonglong)in_XMM2_Qb >> 0x20);
  local_228._8_4_ = (uint)in_XMM2_Qb;
  local_228._0_8_ = param_3;
  local_228._12_4_ = uVar15;
  if (param_5 != (double *)0x0) {
    *param_5 = 0.0;
  }
  cVar16 = '\0';
  if (param_4 == (TTransform<double> *)0x0) {
LAB_14339418f:
    if (param_5 == (double *)0x0) {
      dVar20 = (param_1->Bounds).Max.field0_0x0._s_0.X;
      dVar37 = (param_1->Bounds).Max.field0_0x0._s_0.Y;
      dVar65 = (param_1->Bounds).Min.field0_0x0._s_0.X;
      in_XMM3._8_8_ = 0;
      in_XMM3._0_8_ = dVar65;
      dVar43 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
      dVar21 = dVar20 - dVar65;
      dVar66 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
      dVar36 = dVar37 - dVar43;
      dVar67 = (param_1->Bounds).Min.field0_0x0._s_0.Z;
      dVar57 = dVar66 - dVar67;
      auVar42._0_8_ = dVar36 * dVar36 + dVar21 * dVar21 + dVar57 * dVar57;
      auVar42._8_8_ = 0;
      dVar43 = (param_2->field0_0x0)._s_0.Y - (dVar37 + dVar43) * __real_3fe0000000000000;
      auVar39 = sqrtpd(unaff_XMM7,auVar42);
      dVar37 = (param_2->field0_0x0)._s_0.X - (dVar20 + dVar65) * __real_3fe0000000000000;
      dVar20 = (param_2->field0_0x0)._s_0.Z - (dVar66 + dVar67) * __real_3fe0000000000000;
      dVar65 = auVar39._0_8_ * __real_3fe0000000000000 + param_3;
      if (dVar65 * dVar65 < dVar43 * dVar43 + dVar37 * dVar37 + dVar20 * dVar20) goto LAB_143394861;
    }
    local_1c8 = (param_2->field0_0x0)._s_0.X;
    dStack_1c0 = (param_2->field0_0x0)._s_0.Y;
    bVar11 = false;
    uVar15 = 0;
    local_1b8 = (param_2->field0_0x0)._s_0.Z;
    iVar14 = (param_1->HullPlanes).ArrayNum;
    dVar37 = 0.0;
    dVar20 = param_3 * param_3;
    if (0 < iVar14) {
      uVar63 = (undefined4)__real_3e45798ee2308c3a;
      uVar64 = (undefined4)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
      lVar17 = 0;
      uVar79 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar80 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar85 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
      uVar86 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      auVar39 = ZEXT816(0);
      uVar81 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1d8 = param_1;
      local_1d0 = cVar16;
      local_1b0 = param_4;
      bVar11 = false;
      do {
        uVar56 = in_XMM3._8_8_;
        uVar12 = 0;
        if ((int)uVar15 < iVar14) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if (uVar12 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar56 = in_XMM3._8_8_;
          if (bVar9) {
            pcVar2 = (code *)swi(3);
            uVar10 = (*pcVar2)();
            return (bool)uVar10;
          }
          uVar85 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
          uVar86 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
          uVar79 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar80 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar81 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
        pFVar1 = (param_1->HullPlanes).AllocatorInstance.Data;
        local_218._0_16_ = *(undefined1 (*) [16])(pFVar1 + lVar17);
        dVar65 = local_218._0_8_;
        pFVar1 = pFVar1 + lVar17 + 0x10;
        local_218._s_0.Z = (double)*(undefined8 *)pFVar1;
        dVar37 = *(double *)(pFVar1 + 8);
        auVar4._4_8_ = uVar56;
        auVar4._0_4_ = local_218._4_4_;
        auVar53._0_8_ = auVar4._0_8_ << 0x20;
        auVar53._8_4_ = local_218._8_4_;
        auVar53._12_4_ = local_218._12_4_;
        dVar43 = auVar53._8_8_;
        in_XMM3._8_8_ = local_218._8_8_;
        in_XMM3._0_8_ = dVar43;
        dStack_200 = dVar37;
        if (((dVar65 == (double)CONCAT44(uVar86,uVar85)) && (dVar43 == (double)uVar81)) &&
           (auVar30 = auVar39, local_218._s_0.Z == (double)CONCAT44(uVar80,uVar79))) {
LAB_143394532:
          dVar37 = `UE::Geometry::FConvexDecomposition3::ConvexPartVsSphereOverlap'::__l2::
                   <lambda_1>::operator()(&local_1d8,uVar15);
          if (dVar37 < dVar20) {
            if (param_5 == (double *)0x0) goto LAB_14339485d;
            bVar11 = true;
            dVar20 = dVar37;
          }
          uVar79 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar80 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar85 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
          uVar86 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
          uVar81 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
        else {
          auVar54 = in_XMM3;
          if (cVar16 != '\0') {
            dVar67 = (param_4->Rotation).ZW.m128d_f64[1];
            local_178 = dVar37 * dVar65;
            local_168 = dVar37 * local_218._s_0.Z;
            dStack_170 = dVar37 * dVar43;
            auVar41 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
            auVar77._0_8_ = local_168 * (param_4->Scale3D).ZW.m128d_f64[0];
            auVar77._8_8_ = (param_4->Scale3D).ZW.m128d_f64[1] * 0.0;
            auVar32 = *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64;
            dVar21 = auVar32._0_8_;
            dVar43 = (param_4->Scale3D).XY.m128d_f64[0] * local_178;
            dVar66 = (param_4->Scale3D).XY.m128d_f64[1] * dStack_170;
            uVar63 = (undefined4)((ulonglong)dVar66 >> 0x20);
            local_118._0_16_ = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
            auVar69._8_4_ = SUB84(dVar66,0);
            auVar69._0_8_ = dVar43;
            auVar69._12_4_ = uVar63;
            auVar47 = blendpd(local_118._0_16_,auVar32,2);
            auVar70._0_8_ = auVar69._8_8_ * local_118._0_8_ - local_118._8_8_ * dVar43;
            auVar70._8_8_ = auVar77._0_8_ * local_118._8_8_ - dVar21 * dVar66;
            auVar25._8_4_ = SUB84(dVar66,0);
            auVar25._0_8_ = dVar43;
            auVar25._12_4_ = uVar63;
            auVar26 = blendpd(auVar25,auVar77,2);
            auVar27._0_8_ = auVar26._0_8_ * dVar21 - auVar47._0_8_ * auVar77._0_8_;
            auVar27._8_8_ = auVar26._8_8_ * auVar32._8_8_ - auVar47._8_8_ * auVar77._8_8_;
            auVar26 = blendpd(auVar70,auVar27,2);
            dVar37 = auVar70._8_8_ + auVar70._8_8_;
            dVar65 = auVar27._0_8_ + auVar27._0_8_;
            uVar63 = (undefined4)((ulonglong)dVar65 >> 0x20);
            auVar71._0_8_ = auVar26._0_8_ + auVar26._0_8_;
            auVar71._8_8_ = auVar26._8_8_ + auVar26._8_8_;
            auVar58._8_4_ = SUB84(dVar65,0);
            auVar58._0_8_ = dVar37;
            auVar58._12_4_ = uVar63;
            auVar48._8_4_ = SUB84(dVar65,0);
            auVar48._0_8_ = dVar37;
            auVar48._12_4_ = uVar63;
            auVar26 = blendpd(auVar48,auVar71,2);
            auVar59._0_8_ = auVar58._8_8_ * auVar41._0_8_ - auVar41._8_8_ * dVar37;
            auVar59._8_8_ = auVar71._0_8_ * auVar41._8_8_ - dVar21 * dVar65;
            auVar28._8_4_ = SUB84(auVar59._8_8_,0);
            auVar28._0_8_ = auVar59._0_8_;
            auVar28._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
            auVar41 = blendpd(auVar41,auVar32,2);
            auVar49._0_8_ = auVar26._0_8_ * dVar21 - auVar41._0_8_ * auVar71._0_8_;
            auVar49._8_8_ = auVar26._8_8_ * auVar32._8_8_ - auVar41._8_8_ * auVar71._8_8_;
            auVar41 = blendpd(auVar59,auVar49,2);
            dVar37 = dVar37 * dVar67 + dVar43 + auVar28._8_8_ +
                     (param_4->Translation).XY.m128d_f64[0];
            dVar43 = dVar65 * dVar67 + dVar66 + auVar49._0_8_ +
                     (param_4->Translation).XY.m128d_f64[1];
            local_160._8_4_ = SUB84(dVar43,0);
            local_160._0_8_ = dVar37;
            local_160._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
            dVar66 = auVar71._0_8_ * dVar67 + auVar77._0_8_ + auVar41._0_8_ +
                     (param_4->Translation).ZW.m128d_f64[0];
            pTVar13 = VectorUtil::TransformNormal<double>
                                ((TVector<double> *)&local_118._s_0,param_4,
                                 (TVector<double> *)&local_218._s_0);
            auVar41 = *(undefined1 (*) [16])&pTVar13->field0_0x0;
            dVar65 = auVar41._0_8_;
            local_218._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
            auVar5._4_8_ = extraout_XMM0_Qb;
            auVar5._0_4_ = auVar41._4_4_;
            auVar29._0_8_ = auVar5._0_8_ << 0x20;
            auVar29._8_4_ = auVar41._8_4_;
            auVar29._12_4_ = auVar41._12_4_;
            auVar54._8_4_ = auVar41._8_4_;
            auVar54._0_8_ = auVar29._8_8_;
            auVar54._12_4_ = auVar41._12_4_;
            dVar37 = dVar43 * auVar29._8_8_ + dVar37 * dVar65 + dVar66 * local_218._s_0.Z;
            uVar63 = (undefined4)__real_3e45798ee2308c3a;
            uVar64 = (undefined4)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
            local_150 = dVar66;
          }
          in_XMM3._8_8_ = auVar54._8_8_;
          in_XMM3._0_8_ =
               (auVar54._0_8_ * (param_2->field0_0x0)._s_0.Y + dVar65 * (param_2->field0_0x0)._s_0.X
               + local_218._s_0.Z * (param_2->field0_0x0)._s_0.Z) - dVar37;
          auVar30._8_4_ = auVar54._8_4_;
          auVar30._0_8_ = in_XMM3._0_8_;
          auVar30._12_4_ = auVar54._12_4_;
          if (in_XMM3._0_8_ <= auVar39._0_8_) {
            auVar30._0_8_ = auVar39._0_8_;
          }
          if (local_228._0_8_ < in_XMM3._0_8_) goto LAB_143394861;
          if (0.0 < local_228._0_8_) {
            dVar37 = auVar30._0_8_ - (double)CONCAT44(uVar64,uVar63);
            if (dVar37 <= 0.0) {
              dVar37 = 0.0;
            }
            if (dVar37 < in_XMM3._0_8_) goto LAB_143394532;
          }
        }
        dVar37 = auVar30._0_8_;
        iVar14 = (param_1->HullPlanes).ArrayNum;
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 0x20;
        auVar39 = auVar30;
      } while ((int)uVar15 < iVar14);
      if (0.0 < dVar37) {
        uVar15 = 0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = local_228._8_8_;
        local_228 = auVar8 << 0x40;
        if (0 < iVar14) {
          lVar17 = 0;
          do {
            uVar56 = in_XMM3._8_8_;
            uVar12 = 0;
            if ((int)uVar15 < iVar14) {
              uVar12 = ~uVar15 >> 0x1f;
            }
            if (uVar12 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              uVar56 = in_XMM3._8_8_;
              if (bVar9) {
                pcVar2 = (code *)swi(3);
                uVar10 = (*pcVar2)();
                return (bool)uVar10;
              }
              uVar85 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
              uVar86 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
              uVar79 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar80 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              uVar81 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            }
            pFVar1 = (param_1->HullPlanes).AllocatorInstance.Data;
            local_1f8._0_16_ = *(undefined1 (*) [16])(pFVar1 + lVar17);
            dVar43 = local_1f8._0_8_;
            pFVar1 = pFVar1 + lVar17 + 0x10;
            local_1f8._s_0.Z = (double)*(undefined8 *)pFVar1;
            dVar65 = *(double *)(pFVar1 + 8);
            auVar6._4_8_ = uVar56;
            auVar6._0_4_ = local_1f8._4_4_;
            auVar55._0_8_ = auVar6._0_8_ << 0x20;
            auVar55._8_4_ = local_1f8._8_4_;
            auVar55._12_4_ = local_1f8._12_4_;
            dVar66 = auVar55._8_8_;
            in_XMM3._8_8_ = local_1f8._8_8_;
            in_XMM3._0_8_ = dVar66;
            dStack_1e0 = dVar65;
            if (((dVar43 != (double)CONCAT44(uVar86,uVar85)) || (dVar66 != (double)uVar81)) ||
               (local_1f8._s_0.Z != (double)CONCAT44(uVar80,uVar79))) {
              if (cVar16 != '\0') {
                local_148 = dVar65 * dVar43;
                dVar21 = (param_4->Rotation).ZW.m128d_f64[1];
                local_138 = dVar65 * local_1f8._s_0.Z;
                dStack_140 = dVar65 * dVar66;
                auVar39 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
                auVar78._0_8_ = local_138 * (param_4->Scale3D).ZW.m128d_f64[0];
                auVar78._8_8_ = (param_4->Scale3D).ZW.m128d_f64[1] * 0.0;
                auVar41 = *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64;
                dVar36 = auVar41._0_8_;
                dVar66 = (param_4->Scale3D).XY.m128d_f64[0] * local_148;
                dVar67 = (param_4->Scale3D).XY.m128d_f64[1] * dStack_140;
                uVar63 = (undefined4)((ulonglong)dVar67 >> 0x20);
                local_f8[0]._0_16_ = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
                auVar72._8_4_ = SUB84(dVar67,0);
                auVar72._0_8_ = dVar66;
                auVar72._12_4_ = uVar63;
                auVar26 = blendpd(local_f8[0]._0_16_,auVar41,2);
                auVar73._0_8_ = auVar72._8_8_ * local_f8[0]._0_8_ - local_f8[0]._8_8_ * dVar66;
                auVar73._8_8_ = auVar78._0_8_ * local_f8[0]._8_8_ - dVar36 * dVar67;
                auVar31._8_4_ = SUB84(dVar67,0);
                auVar31._0_8_ = dVar66;
                auVar31._12_4_ = uVar63;
                auVar32 = blendpd(auVar31,auVar78,2);
                auVar33._0_8_ = auVar32._0_8_ * dVar36 - auVar26._0_8_ * auVar78._0_8_;
                auVar33._8_8_ = auVar32._8_8_ * auVar41._8_8_ - auVar26._8_8_ * auVar78._8_8_;
                auVar32 = blendpd(auVar73,auVar33,2);
                dVar65 = auVar73._8_8_ + auVar73._8_8_;
                dVar43 = auVar33._0_8_ + auVar33._0_8_;
                uVar63 = (undefined4)((ulonglong)dVar43 >> 0x20);
                auVar74._0_8_ = auVar32._0_8_ + auVar32._0_8_;
                auVar74._8_8_ = auVar32._8_8_ + auVar32._8_8_;
                auVar60._8_4_ = SUB84(dVar43,0);
                auVar60._0_8_ = dVar65;
                auVar60._12_4_ = uVar63;
                auVar50._8_4_ = SUB84(dVar43,0);
                auVar50._0_8_ = dVar65;
                auVar50._12_4_ = uVar63;
                auVar32 = blendpd(auVar50,auVar74,2);
                auVar61._0_8_ = auVar60._8_8_ * auVar39._0_8_ - auVar39._8_8_ * dVar65;
                auVar61._8_8_ = auVar74._0_8_ * auVar39._8_8_ - dVar36 * dVar43;
                auVar34._8_4_ = SUB84(auVar61._8_8_,0);
                auVar34._0_8_ = auVar61._0_8_;
                auVar34._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
                auVar39 = blendpd(auVar39,auVar41,2);
                auVar51._0_8_ = auVar32._0_8_ * dVar36 - auVar39._0_8_ * auVar74._0_8_;
                auVar51._8_8_ = auVar32._8_8_ * auVar41._8_8_ - auVar39._8_8_ * auVar74._8_8_;
                auVar39 = blendpd(auVar61,auVar51,2);
                dVar65 = dVar65 * dVar21 + dVar66 + auVar34._8_8_ +
                         (param_4->Translation).XY.m128d_f64[0];
                dVar66 = dVar43 * dVar21 + dVar67 + auVar51._0_8_ +
                         (param_4->Translation).XY.m128d_f64[1];
                local_130._8_4_ = SUB84(dVar66,0);
                local_130._0_8_ = dVar65;
                local_130._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
                dVar67 = auVar74._0_8_ * dVar21 + auVar78._0_8_ + auVar39._0_8_ +
                         (param_4->Translation).ZW.m128d_f64[0];
                pTVar13 = VectorUtil::TransformNormal<double>
                                    ((TVector<double> *)&local_f8[0]._s_0,param_4,
                                     (TVector<double> *)&local_1f8._s_0);
                auVar39 = *(undefined1 (*) [16])&pTVar13->field0_0x0;
                dVar43 = auVar39._0_8_;
                local_1f8._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
                auVar7._4_8_ = extraout_XMM0_Qb_00;
                auVar7._0_4_ = auVar39._4_4_;
                auVar35._0_8_ = auVar7._0_8_ << 0x20;
                auVar35._8_4_ = auVar39._8_4_;
                auVar35._12_4_ = auVar39._12_4_;
                in_XMM3._8_4_ = auVar39._8_4_;
                in_XMM3._0_8_ = auVar35._8_8_;
                in_XMM3._12_4_ = auVar39._12_4_;
                uVar63 = (undefined4)__real_3e45798ee2308c3a;
                uVar64 = (undefined4)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
                dVar65 = dVar66 * auVar35._8_8_ + dVar65 * dVar43 + dVar67 * local_1f8._s_0.Z;
                local_120 = dVar67;
              }
              in_XMM3._0_8_ =
                   (in_XMM3._0_8_ * (param_2->field0_0x0)._s_0.Y +
                    dVar43 * (param_2->field0_0x0)._s_0.X +
                   local_1f8._s_0.Z * (param_2->field0_0x0)._s_0.Z) - dVar65;
              dVar65 = in_XMM3._0_8_;
              if (in_XMM3._0_8_ <= (double)local_228._0_8_) {
                dVar65 = (double)local_228._0_8_;
              }
              local_228._0_8_ = dVar65;
              dVar65 = dVar65 - (double)CONCAT44(uVar64,uVar63);
              if (dVar65 <= 0.0) {
                dVar65 = 0.0;
              }
              if (in_XMM3._0_8_ <= dVar65) {
                dVar65 = `UE::Geometry::FConvexDecomposition3::ConvexPartVsSphereOverlap'::__l2::
                         <lambda_1>::operator()(&local_1d8,uVar15);
                if (dVar65 < dVar20) {
                  if (param_5 == (double *)0x0) goto LAB_14339485d;
                  bVar11 = true;
                  dVar20 = dVar65;
                }
                uVar85 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
                uVar86 = (undefined4)
                         ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20)
                ;
                uVar79 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                uVar80 = (undefined4)
                         ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20
                         );
                uVar81 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              }
            }
            iVar14 = (param_1->HullPlanes).ArrayNum;
            uVar15 = uVar15 + 1;
            lVar17 = lVar17 + 0x20;
          } while ((int)uVar15 < iVar14);
        }
      }
    }
    if ((param_5 == (double *)0x0) || (!bVar11)) {
      bVar11 = dVar37 <= 0.0;
    }
    else {
      *param_5 = dVar20;
LAB_14339485d:
      bVar11 = true;
    }
  }
  else {
    local_1a8 = *(undefined1 (*) [16])(param_4->Scale3D).XY.m128d_f64;
    dVar37 = local_1a8._0_8_;
    local_198 = (param_4->Scale3D).ZW.m128d_f64[0];
    auVar3._4_8_ = in_XMM1_Qb;
    auVar3._0_4_ = local_1a8._4_4_;
    auVar39._0_8_ = auVar3._0_8_ << 0x20;
    auVar39._8_4_ = local_1a8._8_4_;
    auVar39._12_4_ = local_1a8._12_4_;
    in_XMM3._8_8_ = 0;
    in_XMM3._0_8_ = __real_3f1a36e2e0000000;
    dVar20 = dVar37 - auVar39._8_8_;
    if (((__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
        (__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)(dVar37 - local_198) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar37 - local_198,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                         ))) ||
       (dVar20 = auVar39._8_8_ - local_198,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      cVar16 = '\x01';
      goto LAB_14339418f;
    }
    if (dVar37 != 0.0) {
      dVar57 = (param_4->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar62 = (param_4->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar20 = (param_4->Rotation).ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar65 = (param_4->Rotation).ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar52._8_4_ = SUB84(dVar62,0);
      auVar52._0_8_ = dVar57;
      uVar63 = (undefined4)((ulonglong)dVar62 >> 0x20);
      auVar52._12_4_ = uVar63;
      dVar21 = (param_2->field0_0x0)._s_0.Z - (param_4->Translation).ZW.m128d_f64[0];
      dVar66 = (param_2->field0_0x0)._s_0.X - (param_4->Translation).XY.m128d_f64[0];
      dVar67 = (param_2->field0_0x0)._s_0.Y - (param_4->Translation).XY.m128d_f64[1];
      uVar64 = (undefined4)((ulonglong)dVar67 >> 0x20);
      auVar41._8_4_ = SUB84(dVar65,0);
      auVar41._0_8_ = dVar20;
      auVar41._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
      in_XMM3 = blendpd(auVar52,auVar41,2);
      auVar44._8_4_ = SUB84(dVar62,0);
      auVar44._0_8_ = dVar57;
      auVar44._12_4_ = uVar63;
      auVar82._8_4_ = SUB84(dVar67,0);
      auVar82._0_8_ = dVar66;
      auVar82._12_4_ = uVar64;
      dVar36 = auVar44._8_8_;
      auVar47._8_4_ = SUB84(dVar20,0);
      auVar47._0_8_ = dVar36;
      auVar47._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      auVar38._8_4_ = SUB84(dVar67,0);
      auVar38._0_8_ = dVar66;
      auVar38._12_4_ = uVar64;
      local_228._4_4_ =
           (uint)((ulonglong)(param_3 / dVar37) >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      local_228._0_4_ = SUB84(param_3 / dVar37,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      local_228._8_4_ = (uint)in_XMM2_Qb & _UNK_15061cc88;
      local_228._12_4_ = uVar15 & _UNK_15061cc8c;
      auVar83._0_8_ = auVar82._8_8_ * dVar57 - dVar36 * dVar66;
      auVar83._8_8_ = dVar21 * dVar62 - auVar47._8_8_ * dVar67;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = dVar21;
      auVar39 = blendpd(auVar38,auVar26,2);
      auVar40._0_8_ = auVar39._0_8_ * dVar20 - in_XMM3._0_8_ * dVar21;
      auVar40._8_8_ = auVar39._8_8_ * dVar65 - in_XMM3._8_8_ * 0.0;
      auVar39 = blendpd(auVar83,auVar40,2);
      dVar37 = auVar83._8_8_ + auVar83._8_8_;
      dVar43 = auVar40._0_8_ + auVar40._0_8_;
      uVar63 = SUB84(dVar43,0);
      uVar64 = (undefined4)((ulonglong)dVar43 >> 0x20);
      auVar84._0_8_ = auVar39._0_8_ + auVar39._0_8_;
      auVar84._8_8_ = auVar39._8_8_ + auVar39._8_8_;
      auVar75._8_4_ = uVar63;
      auVar75._0_8_ = dVar37;
      auVar75._12_4_ = uVar64;
      auVar22._8_4_ = uVar63;
      auVar22._0_8_ = dVar37;
      auVar22._12_4_ = uVar64;
      auVar68._8_4_ = uVar63;
      auVar68._0_8_ = dVar37;
      auVar68._12_4_ = uVar64;
      auVar39 = blendpd(auVar68,auVar84,2);
      auVar76._0_8_ = auVar75._8_8_ * dVar57 - dVar37 * dVar36;
      auVar76._8_8_ = auVar84._0_8_ * dVar62 - auVar22._8_8_ * dVar20;
      auVar23._8_4_ = SUB84(auVar84._8_8_,0);
      auVar23._0_8_ = auVar84._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
      unaff_XMM7._0_8_ = auVar39._0_8_ * dVar20 - auVar84._0_8_ * in_XMM3._0_8_;
      unaff_XMM7._8_8_ = auVar39._8_8_ * dVar65 - auVar23._8_8_ * in_XMM3._8_8_;
      auVar39 = *(undefined1 (*) [16])(param_4->Scale3D).ZW.m128d_f64;
      lVar17 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar39._4_4_,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar39._0_4_) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar45._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)(param_4->Scale3D).XY.m128d_f64 + 4) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            *(uint *)(param_4->Scale3D).XY.m128d_f64 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar45._8_4_ = *(uint *)((param_4->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88;
      auVar45._12_4_ = *(uint *)((longlong)(param_4->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
      auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(param_4->Scale3D).XY.m128d_f64);
      lVar18 = -(ulonglong)(auVar45._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar19 = -(ulonglong)(auVar45._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar24._8_4_ = SUB84(auVar76._8_8_,0);
      auVar24._0_8_ = auVar76._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar76._8_8_ >> 0x20);
      auVar46._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar41._4_4_,
                            ~(uint)lVar18 & auVar41._0_4_);
      auVar46._8_4_ = ~(uint)lVar19 & auVar41._8_4_;
      auVar46._12_4_ = ~(uint)((ulonglong)lVar19 >> 0x20) & auVar41._12_4_;
      auVar32._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar32._0_8_ = auVar39._0_8_;
      auVar32._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
      local_190._0_8_ = auVar46._0_8_ * (dVar37 * dVar65 + dVar66 + auVar24._8_8_);
      local_190._8_8_ = auVar46._8_8_ * (dVar43 * dVar65 + dVar67 + unaff_XMM7._0_8_);
      auVar41 = blendpd(auVar76,unaff_XMM7,2);
      *(undefined1 (*) [16])&param_2->field0_0x0 = local_190;
      local_180 = (double)CONCAT44(~(uint)((ulonglong)lVar17 >> 0x20) & auVar39._4_4_,
                                   ~(uint)lVar17 & auVar39._0_4_) *
                  (auVar84._0_8_ * dVar65 + dVar21 + auVar41._0_8_);
      (param_2->field0_0x0)._s_0.Z = local_180;
      param_3 = (double)local_228._0_8_;
      goto LAB_14339418f;
    }
LAB_143394861:
    bVar11 = false;
  }
  return bVar11;
}

// DeleteProximity @ 1433955a0

void __thiscall
UE::Geometry::FConvexDecomposition3::DeleteProximity
          (FConvexDecomposition3 *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2
          )

{
  TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_> *this_00;
  undefined1 *puVar1;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *this_01;
  uint local_res10 [2];
  char local_res18;
  uint local_res20;
  undefined1 local_88 [8];
  int *local_80;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *local_78;
  FScriptContainerElement *local_70;
  uint *local_68;
  FScriptContainerElement *local_60;
  uint *local_58;
  
  iVar7 = param_1->ArrayNum;
  local_res20 = 0;
  if (0 < iVar7) {
    this_01 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
              &this->DecompositionToProximity;
    local_80 = (int *)0x0;
    local_res18 = param_2;
    local_78 = this_01;
    do {
      piVar15 = local_80;
      uVar5 = 0;
      if ((int)local_res20 < iVar7) {
        uVar5 = ~local_res20 >> 0x1f;
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
      piVar17 = &(this->Proximities).ArrayNum;
      local_res10[0] = *(uint *)((param_1->AllocatorInstance).Data + (longlong)piVar15 * 4);
      lVar12 = (longlong)(int)local_res10[0];
      uVar5 = 0;
      if (local_res18 != '\0') {
        uVar11 = uVar5;
        if ((int)local_res10[0] < *piVar17) {
          uVar11 = ~local_res10[0] >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = &this->DecompositionToProximity;
        pFVar13 = (this->Proximities).AllocatorInstance.Data + lVar12 * 0x38;
        iVar7 = *(int *)&(this->DecompositionToProximity).field_0x48;
        iVar16 = *(int *)pFVar13;
        if (iVar7 != 0) {
          puVar1 = *(undefined1 **)&(this->DecompositionToProximity).field_0x40;
          puVar8 = &(this->DecompositionToProximity).field_0x38;
          if (puVar1 != (undefined1 *)0x0) {
            puVar8 = puVar1;
          }
          iVar7 = *(int *)(puVar8 + ((longlong)iVar7 - 1U & (longlong)iVar16) * 4);
          iVar6 = iVar7;
          if (iVar7 != -1) {
            do {
              iVar7 = *(int *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)iVar6 * 0x10);
              if (*(int *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x10) == iVar16)
              break;
              iVar6 = iVar7;
            } while (iVar7 != -1);
          }
          if (iVar6 != -1) {
            lVar12 = *(longlong *)&this_00->field_0x0;
            while (*(uint *)(lVar12 + 4 + (longlong)iVar6 * 0x10) != local_res10[0]) {
              do {
                iVar6 = iVar7;
                if (iVar6 == -1) goto LAB_14339578b;
                iVar7 = *(int *)(lVar12 + 8 + (longlong)iVar6 * 0x10);
              } while (*(int *)(lVar12 + (longlong)iVar6 * 0x10) != iVar16);
            }
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
            RemoveByIndex((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                           *)this_00,iVar6);
          }
        }
LAB_14339578b:
        iVar7 = *(int *)&(this->DecompositionToProximity).field_0x48;
        iVar16 = *(int *)(pFVar13 + 4);
        if (iVar7 != 0) {
          puVar1 = *(undefined1 **)&(this->DecompositionToProximity).field_0x40;
          puVar8 = &(this->DecompositionToProximity).field_0x38;
          if (puVar1 != (undefined1 *)0x0) {
            puVar8 = puVar1;
          }
          iVar7 = *(int *)(puVar8 + ((longlong)iVar7 - 1U & (longlong)iVar16) * 4);
          iVar6 = iVar7;
          if (iVar7 != -1) {
            do {
              iVar7 = *(int *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)iVar6 * 0x10);
              if (*(int *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x10) == iVar16)
              break;
              iVar6 = iVar7;
            } while (iVar7 != -1);
          }
          if (iVar6 != -1) {
            lVar12 = *(longlong *)&this_00->field_0x0;
            while (*(uint *)(lVar12 + 4 + (longlong)iVar6 * 0x10) != local_res10[0]) {
              do {
                iVar6 = iVar7;
                if (iVar6 == -1) goto LAB_143395829;
                iVar7 = *(int *)(lVar12 + 8 + (longlong)iVar6 * 0x10);
              } while (*(int *)(lVar12 + (longlong)iVar6 * 0x10) != iVar16);
            }
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
            RemoveByIndex((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                           *)this_00,iVar6);
          }
        }
      }
LAB_143395829:
      uVar11 = local_res10[0];
      iVar7 = (this->Proximities).ArrayNum;
      uVar14 = iVar7 - 1;
      if (local_res10[0] == uVar14) {
        uVar14 = ~local_res10[0];
        if ((int)local_res10[0] < *piVar17) {
          uVar5 = uVar14 >> 0x1f;
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
        pFVar13 = (this->Proximities).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x38;
        iVar7 = *piVar17 + uVar14;
        if (iVar7 != 0) {
          memmove(pFVar13,pFVar13 + 0x38,(longlong)iVar7 * 0x38);
        }
        *piVar17 = *piVar17 + -1;
        return;
      }
      lVar12 = (longlong)(int)local_res10[0];
      uVar10 = ~local_res10[0];
      uVar11 = uVar5;
      if ((int)local_res10[0] < iVar7) {
        uVar11 = uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *piVar17 + uVar10;
      pFVar13 = (this->Proximities).AllocatorInstance.Data;
      if (1 < iVar7) {
        iVar7 = 1;
      }
      if (iVar7 != 0) {
        memmove(pFVar13 + lVar12 * 0x38,pFVar13 + (longlong)(*piVar17 - iVar7) * 0x38,
                (longlong)iVar7 * 0x38);
      }
      uVar11 = local_res10[0];
      iVar7 = *piVar17;
      *piVar17 = iVar7 + -1;
      uVar10 = uVar5;
      if ((int)local_res10[0] < iVar7 + -1) {
        uVar10 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (this->Proximities).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x38;
      iVar7 = *(int *)pFVar13;
      if (this_01->HashSize != 0) {
        FVar2 = (this_01->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this_01->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        iVar16 = *(int *)((longlong)FVar9 + ((longlong)this_01->HashSize - 1U & (longlong)iVar7) * 4
                         );
        iVar6 = iVar16;
        if (iVar16 != -1) {
          do {
            iVar16 = *(int *)(*(longlong *)&this_01->Elements + 8 + (longlong)iVar6 * 0x10);
            if (*(int *)(*(longlong *)&this_01->Elements + (longlong)iVar6 * 0x10) == iVar7) break;
            iVar6 = iVar16;
          } while (iVar16 != -1);
        }
        if (iVar6 != -1) {
          lVar12 = *(longlong *)&this_01->Elements;
          while (*(uint *)(lVar12 + 4 + (longlong)iVar6 * 0x10) != uVar14) {
            do {
              iVar6 = iVar16;
              if (iVar6 == -1) goto LAB_1433959e4;
              iVar16 = *(int *)(lVar12 + 8 + (longlong)iVar6 * 0x10);
            } while (*(int *)(lVar12 + (longlong)iVar6 * 0x10) != iVar7);
          }
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          RemoveByIndex(this_01,iVar6);
        }
      }
LAB_1433959e4:
      iVar7 = *(int *)(pFVar13 + 4);
      if (this_01->HashSize != 0) {
        FVar2 = (this_01->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this_01->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        iVar16 = *(int *)((longlong)FVar9 + ((longlong)this_01->HashSize - 1U & (longlong)iVar7) * 4
                         );
        iVar6 = iVar16;
        if (iVar16 != -1) {
          do {
            iVar16 = *(int *)(*(longlong *)&this_01->Elements + 8 + (longlong)iVar6 * 0x10);
            if (*(int *)(*(longlong *)&this_01->Elements + (longlong)iVar6 * 0x10) == iVar7) break;
            iVar6 = iVar16;
          } while (iVar16 != -1);
        }
        if (iVar6 != -1) {
          lVar12 = *(longlong *)&this_01->Elements;
          while (*(uint *)(lVar12 + 4 + (longlong)iVar6 * 0x10) != uVar14) {
            do {
              iVar6 = iVar16;
              if (iVar6 == -1) goto LAB_143395a84;
              iVar16 = *(int *)(lVar12 + 8 + (longlong)iVar6 * 0x10);
            } while (*(int *)(lVar12 + (longlong)iVar6 * 0x10) != iVar7);
          }
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          RemoveByIndex(this_01,iVar6);
        }
      }
LAB_143395a84:
      local_68 = local_res10;
      local_70 = pFVar13;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                (this_01,(TPairInitializer<int_const_&,int_const_&> *)local_88,(bool *)&local_70);
      local_58 = local_res10;
      local_60 = pFVar13 + 4;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                (this_01,(TPairInitializer<int_const_&,int_const_&> *)(local_88 + 4),
                 (bool *)&local_60);
      uVar11 = local_res20 + 1;
      iVar7 = param_1->ArrayNum;
      piVar15 = (int *)((longlong)local_80 + 1);
      local_res20 = uVar11;
      local_80 = piVar15;
      if ((int)uVar11 < iVar7) {
        do {
          uVar10 = uVar5;
          if ((int)uVar11 < iVar7) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar10 = local_res10[0];
          iVar7 = param_1->ArrayNum;
          if (uVar14 == *(uint *)((param_1->AllocatorInstance).Data + (longlong)piVar15 * 4)) {
            if ((int)uVar11 < iVar7) {
              uVar5 = ~uVar11 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(uint *)((param_1->AllocatorInstance).Data + (longlong)piVar15 * 4) = uVar10;
            this_01 = local_78;
            break;
          }
          uVar11 = uVar11 + 1;
          piVar15 = (int *)((longlong)piVar15 + 1);
          this_01 = local_78;
        } while ((int)uVar11 < iVar7);
      }
      iVar7 = param_1->ArrayNum;
    } while ((int)local_res20 < iVar7);
  }
  return;
}

// FixHullOverlapsInNegativeSpace @ 1433a1550

void __thiscall
UE::Geometry::FConvexDecomposition3::FixHullOverlapsInNegativeSpace
          (FConvexDecomposition3 *this,double param_1,double param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  uint *puVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 local_res8 [8];
  longlong local_d8;
  double local_d0;
  uint *local_c8;
  FSphereCovering *local_c0;
  TVector<double>_u_0 local_b8 [5];
  
  local_c0 = &this->NegativeSpace;
  if ((this->NegativeSpace).Position.ArrayNum != 0) {
    uVar19 = 0;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    if (0 < (this->Decomposition).Array.ArrayNum) {
      local_d8 = 0;
      do {
        uVar17 = ~uVar19 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar19 < (this->Decomposition).Array.ArrayNum) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + local_d8);
        uVar12 = *(uint *)(lVar5 + 0x260);
        uVar14 = (ulonglong)(int)uVar12;
        puVar18 = *(uint **)(lVar5 + 600);
        local_c8 = puVar18 + uVar14;
        while( true ) {
          puVar10 = local_c8;
          if (*(int *)(lVar5 + 0x260) != (int)uVar14) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (puVar18 == puVar10) break;
          uVar4 = *puVar18;
          lVar16 = (longlong)(int)uVar4;
          local_d0 = 0.0;
          uVar15 = ~uVar4 >> 0x1f;
          uVar13 = 0;
          if ((int)uVar4 < (this->NegativeSpace).Radius.ArrayNum) {
            uVar13 = uVar15;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          dVar2 = *(double *)((this->NegativeSpace).Radius.AllocatorInstance.Data + lVar16 * 8);
          if (param_2 < dVar2) {
            uVar13 = 0;
            if ((int)uVar4 < (this->NegativeSpace).Position.ArrayNum) {
              uVar13 = uVar15;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar6 = (this->NegativeSpace).Position.AllocatorInstance.Data;
            pFVar1 = pFVar6 + lVar16 * 0x18;
            dVar8 = *(double *)pFVar1;
            dVar9 = *(double *)(pFVar1 + 8);
            dVar3 = *(double *)(pFVar6 + lVar16 * 0x18 + 0x10);
            uVar13 = 0;
            if ((int)uVar19 < (this->Decomposition).Array.ArrayNum) {
              uVar13 = uVar17;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_b8[0]._0_8_ = dVar8;
            local_b8[0]._8_8_ = dVar9;
            local_b8[0]._16_8_ = dVar3;
            bVar11 = ConvexPartVsSphereOverlap
                               (*(FConvexPart **)
                                 ((this->Decomposition).Array.AllocatorInstance.Data + local_d8),
                                (TVector<double> *)&local_b8[0]._s_0,dVar2,(TTransform<double> *)0x0
                                ,&local_d0);
            if (bVar11) {
              auVar20._8_8_ = 0;
              auVar20._0_8_ = local_d0;
              auVar20 = sqrtpd(auVar20,auVar20);
              if ((dVar2 < auVar20._0_8_) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Dist <= Radius",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexDecomposition3.cpp"
                                      ,0x6e7,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar13 = 0;
              if ((int)uVar4 < (this->NegativeSpace).Radius.ArrayNum) {
                uVar13 = uVar15;
              }
              if ((uVar13 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(double *)((this->NegativeSpace).Radius.AllocatorInstance.Data + lVar16 * 8) =
                   auVar20._0_8_ - param_1;
            }
          }
          uVar14 = (ulonglong)uVar12;
          puVar18 = puVar18 + 1;
        }
        uVar12 = 0;
        if ((int)uVar19 < (this->Decomposition).Array.ArrayNum) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + local_d8);
        *(undefined4 *)(lVar5 + 0x260) = 0;
        if (*(int *)(lVar5 + 0x264) < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)(lVar5 + 600),0,(int *)(lVar5 + 0x264));
        }
        local_d8 = local_d8 + 8;
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (this->Decomposition).Array.ArrayNum);
    }
    FSphereCovering::RemoveSmaller(local_c0,param_2);
  }
  return;
}

// InitNegativeSpaceConvexPartMapping @ 1433b62a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FConvexDecomposition3::InitNegativeSpaceConvexPartMapping(FConvexDecomposition3 *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  FConvexDecomposition3 *local_res10;
  FConvexDecomposition3 *local_res18 [2];
  code *local_48;
  FConvexDecomposition3 **local_40;
  code *local_38;
  undefined1 *local_30;
  
  local_res10 = this;
  if ((this->Decomposition).Array.ArrayNum != 1) {
    local_30 = local_res8;
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FConvexDecomposition3::InitNegativeSpaceConvexPartMapping'::__l9::<lambda_3>,void,UE::Geometry::FConvexDecomposition3::FConvexPart_&,int,bool>
               ::Call;
    `UE::Geometry::FConvexDecomposition3::InitNegativeSpaceConvexPartMapping'::__l2::<lambda_1>::
    operator()(&local_res10,
               (TFunctionRef<void___cdecl(UE::Geometry::FConvexDecomposition3::FConvexPart_&,int,bool)>
                *)&local_38);
    return;
  }
  local_40 = local_res18;
  local_48 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FConvexDecomposition3::InitNegativeSpaceConvexPartMapping'::__l5::<lambda_2>,void,UE::Geometry::FConvexDecomposition3::FConvexPart_&,int,bool>
             ::Call;
  local_res18[0] = this;
  `UE::Geometry::FConvexDecomposition3::InitNegativeSpaceConvexPartMapping'::__l2::<lambda_1>::
  operator()(&local_res10,
             (TFunctionRef<void___cdecl(UE::Geometry::FConvexDecomposition3::FConvexPart_&,int,bool)>
              *)&local_48);
  FSphereCovering::RemoveSmaller(&this->NegativeSpace,0.0);
  uVar6 = 0;
  if (((this->Decomposition).Array.ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)(this->Decomposition).Array.AllocatorInstance.Data + 600),
             (this->NegativeSpace).Position.ArrayNum,Default);
  uVar7 = uVar6;
  if (0 < (this->NegativeSpace).Position.ArrayNum) {
    do {
      if (((this->Decomposition).Array.ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = (uint)uVar6;
      lVar1 = *(longlong *)(this->Decomposition).Array.AllocatorInstance.Data;
      uVar4 = 0;
      if ((int)uVar5 < *(int *)(lVar1 + 0x260)) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(uint *)(uVar7 + *(longlong *)(lVar1 + 600)) = uVar5;
      uVar6 = (ulonglong)(uVar5 + 1);
      uVar7 = uVar7 + 4;
    } while ((int)(uVar5 + 1) < (this->NegativeSpace).Position.ArrayNum);
  }
  return;
}

// InitializeFromHulls @ 1433b7930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FConvexDecomposition3::InitializeFromHulls
          (FConvexDecomposition3 *this,int param_1,TFunctionRef<double___cdecl(int)> *param_2,
          TFunctionRef<int___cdecl(int)> *param_3,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int,int)> *param_4,
          TArrayView<TTuple<int,int>_const_,int> *param_5)

{
  TTuple<int,int> *pTVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  FDynamicMesh3 *this_00;
  TTuple<int,int> *pTVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  undefined4 uVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  int local_res10 [2];
  TFunctionRef<double___cdecl(int)> *local_res18;
  TFunctionRef<int___cdecl(int)> *local_res20;
  FDynamicMesh3 *local_1e8;
  uint local_1e0 [2];
  uint local_1d8;
  int local_1d0 [2];
  uint local_1c8 [2];
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  FScriptContainerElement *pFStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined1 local_170 [8];
  TTuple<int,int> *local_168;
  int *local_160;
  int *local_158;
  int *local_150;
  TVector<double>_u_0 local_148;
  undefined8 local_130;
  float local_128;
  undefined8 local_124;
  float local_11c;
  TVector2<float>_u_0 local_118;
  undefined2 local_110;
  undefined1 local_10e;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  local_res18 = param_2;
  local_res20 = param_3;
  TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>::
  Empty(&this->Decomposition,param_1);
  pFVar3 = _UNK_150a9e6d8;
  uVar11 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uVar10 = _UNK_150a9e648;
  uVar9 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar8 = _UNK_1508ffb58;
  uVar7 = ___xmm_ffefffffffffffffffefffffffffffff;
  dVar6 = __real_3ff0000000000000;
  uVar19 = 0;
  if (0 < param_1) {
    do {
      this_00 = ::operator_new(0x2e0);
      if (this_00 == (FDynamicMesh3 *)0x0) {
        this_00 = (FDynamicMesh3 *)0x0;
      }
      else {
        FDynamicMesh3::FDynamicMesh3(this_00);
        this_00[1].VertexRefCounts.RefCounts.CurBlock = 0xffffffff;
        this_00[1]._padding_ = 0;
        this_00[1].Vertices.CurBlock = 0;
        this_00[1].Vertices.CurBlockUsed = 0;
        this_00[1].Vertices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        this_00[1].Vertices.Blocks.ArrayNum = 0;
        this_00[1].Vertices.Blocks.ArrayMax = 0;
        this_00[1].VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        this_00[1].VertexRefCounts.RefCounts.Blocks.ArrayNum = 0;
        this_00[1].VertexRefCounts.RefCounts.Blocks.ArrayMax = 0;
        this_00[1].VertexRefCounts.FreeIndices.CurBlock = 0;
        this_00[1].VertexRefCounts.FreeIndices.CurBlockUsed = 0;
        this_00[1].VertexRefCounts.FreeIndices.Blocks.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        this_00[1].VertexRefCounts.FreeIndices.Blocks.ArrayNum = -1;
        uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        this_00[1].VertexRefCounts.FreeIndices.Blocks.ArrayMax = -0x100001;
        *(double *)&this_00[1].VertexRefCounts.UsedCount =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        *(undefined8 *)&this_00[1].VertexNormals.TypedValue = uVar12;
        this_00[1].VertexNormals.TypedValue.Blocks.AllocatorInstance.Data =
             (FScriptContainerElement *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        this_00[1].VertexNormals.TypedValue.Blocks.ArrayNum = -1;
        this_00[1].VertexNormals.TypedValue.Blocks.ArrayMax = 0x7fefffff;
        *(undefined8 *)&this_00[1].VertexNormals.bIsSet = 0x7fefffffffffffff;
        this_00[1].VertexColors.TypedValue.CurBlock = 0xffffffff;
        this_00[1].VertexColors.TypedValue.CurBlockUsed = 0x7fefffff;
        this_00[1].VertexColors.TypedValue.Blocks.AllocatorInstance.Data =
             (FScriptContainerElement *)0xffefffffffffffff;
        this_00[1].VertexColors.TypedValue.Blocks.ArrayNum = -1;
        this_00[1].VertexColors.TypedValue.Blocks.ArrayMax = -0x100001;
        *(undefined8 *)&this_00[1].VertexColors.bIsSet = 0xffefffffffffffff;
        *(undefined1 *)((longlong)&this_00[1].VertexUVs.TypedValue.CurBlock + 1) = 0;
        this_00[1].VertexUVs.TypedValue.Blocks.AllocatorInstance.Data =
             (FScriptContainerElement *)0x7fefffffffffffff;
        *(undefined2 *)&this_00[1].VertexUVs.TypedValue.Blocks.ArrayNum = 1;
      }
      this_00[1].VertexRefCounts.RefCounts.CurBlock = uVar19;
      *(undefined1 *)&this_00[1].VertexUVs.TypedValue.CurBlock = 0;
      *(undefined1 *)((longlong)&this_00[1].VertexUVs.TypedValue.CurBlock + 2) = 0;
      local_1e0[0] = uVar19;
      pFVar20 = (FScriptContainerElement *)
                (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_1e0);
      *(FScriptContainerElement **)&this_00[1].VertexRefCounts.FreeIndices = pFVar20;
      this_00[1].VertexRefCounts.FreeIndices.Blocks.AllocatorInstance.Data = pFVar20;
      *(undefined8 *)&this_00[1].VertexRefCounts.UsedCount = 0;
      this_00[1].VertexNormals.TypedValue.CurBlock = 0;
      this_00[1].VertexNormals.TypedValue.CurBlockUsed = 0;
      this_00[1].VertexNormals.TypedValue.Blocks.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_1b8 = uVar9;
      uStack_1b0 = uVar10;
      local_1a8 = uVar11;
      pFStack_1a0 = pFVar3;
      local_198 = uVar7;
      uStack_190 = uVar8;
      local_1d8 = uVar19;
      iVar14 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8);
      iVar16 = 0;
      if (iVar14 < 1) {
        bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4359859441479186159>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexDecomposition3.cpp"
                            ,0x911,"NumVertices > 0");
        if (bVar13) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        uVar23 = (undefined4)uStack_190;
        uVar24 = (undefined4)((ulonglong)uStack_190 >> 0x20);
        uVar25 = (undefined4)local_198;
        uVar26 = (undefined4)((ulonglong)local_198 >> 0x20);
        uVar27 = SUB84(pFStack_1a0,0);
        uVar28 = (undefined4)((ulonglong)pFStack_1a0 >> 0x20);
        uVar29 = (undefined4)local_1a8;
        uVar30 = (undefined4)((ulonglong)local_1a8 >> 0x20);
        uVar31 = (undefined4)uStack_1b0;
        uVar32 = (undefined4)((ulonglong)uStack_1b0 >> 0x20);
        uVar33 = (undefined4)local_1b8;
        uVar34 = (undefined4)((ulonglong)local_1b8 >> 0x20);
        do {
          local_1d0[0] = iVar16;
          local_1c8[0] = uVar19;
          (**(code **)param_4)(&local_188,*(undefined8 *)&param_4->field_0x8,local_1c8,local_1d0);
          dVar2 = *(double *)&this_00[1].VertexNormals.TypedValue;
          local_148._s_0.Z = local_178;
          *(double *)&this_00[1].VertexRefCounts.UsedCount =
               (double)CONCAT44(uStack_184,local_188) +
               *(double *)&this_00[1].VertexRefCounts.UsedCount;
          pFVar20 = this_00[1].VertexNormals.TypedValue.Blocks.AllocatorInstance.Data;
          local_110 = 0;
          *(double *)&this_00[1].VertexNormals.TypedValue =
               (double)CONCAT44(uStack_17c,uStack_180) + dVar2;
          this_00[1].VertexNormals.TypedValue.Blocks.AllocatorInstance.Data =
               (FScriptContainerElement *)(local_178 + (double)pFVar20);
          local_128 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_11c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_118 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_10e = 0;
          local_148._0_4_ = local_188;
          local_148._4_4_ = uStack_184;
          local_148._8_4_ = uStack_180;
          local_148._12_4_ = uStack_17c;
          local_130 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_124 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          FDynamicMesh3::AppendVertex(this_00,(FVertexInfo *)&local_148._s_0);
          dVar2 = (double)CONCAT44(uStack_184,local_188);
          if (dVar2 < (double)CONCAT44(uVar34,uVar33)) {
            uVar33 = local_188;
            uVar34 = uStack_184;
          }
          if ((double)CONCAT44(uVar28,uVar27) <= dVar2 && dVar2 != (double)CONCAT44(uVar28,uVar27))
          {
            uVar27 = local_188;
            uVar28 = uStack_184;
          }
          dVar2 = (double)CONCAT44(uStack_17c,uStack_180);
          if (dVar2 < (double)CONCAT44(uVar32,uVar31)) {
            uVar31 = uStack_180;
            uVar32 = uStack_17c;
          }
          if ((double)CONCAT44(uVar26,uVar25) <= dVar2 && dVar2 != (double)CONCAT44(uVar26,uVar25))
          {
            uVar25 = uStack_180;
            uVar26 = uStack_17c;
          }
          uVar21 = (undefined4)((ulonglong)local_178 >> 0x20);
          if (local_178 < (double)CONCAT44(uVar30,uVar29)) {
            uVar29 = SUB84(local_178,0);
            uVar30 = uVar21;
          }
          if ((double)CONCAT44(uVar24,uVar23) <= local_178 &&
              local_178 != (double)CONCAT44(uVar24,uVar23)) {
            uVar23 = SUB84(local_178,0);
            uVar24 = uVar21;
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar14);
        uStack_190 = CONCAT44(uVar24,uVar23);
        dVar22 = dVar6 / (double)iVar14;
        local_198 = CONCAT44(uVar26,uVar25);
        dVar2 = *(double *)&this_00[1].VertexNormals.TypedValue * dVar22;
        pFVar20 = this_00[1].VertexNormals.TypedValue.Blocks.AllocatorInstance.Data;
        auVar5._8_4_ = SUB84(dVar2,0);
        auVar5._0_8_ = *(double *)&this_00[1].VertexRefCounts.UsedCount * dVar22;
        auVar5._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        *(undefined1 (*) [16])&this_00[1].VertexRefCounts.UsedCount = auVar5;
        pFStack_1a0 = (FScriptContainerElement *)CONCAT44(uVar28,uVar27);
        local_1a8 = CONCAT44(uVar30,uVar29);
        uStack_1b0 = CONCAT44(uVar32,uVar31);
        local_1b8 = CONCAT44(uVar34,uVar33);
        this_00[1].VertexNormals.TypedValue.Blocks.AllocatorInstance.Data =
             (FScriptContainerElement *)(dVar22 * (double)pFVar20);
      }
      piVar18 = &(this->Decomposition).Array.ArrayMax;
      this_00[1].VertexNormals.TypedValue.Blocks.ArrayNum = (undefined4)local_1b8;
      this_00[1].VertexNormals.TypedValue.Blocks.ArrayMax = local_1b8._4_4_;
      *(undefined8 *)&this_00[1].VertexNormals.bIsSet = uStack_1b0;
      this_00[1].VertexColors.TypedValue.CurBlock = (undefined4)local_1a8;
      this_00[1].VertexColors.TypedValue.CurBlockUsed = local_1a8._4_4_;
      this_00[1].VertexColors.TypedValue.Blocks.AllocatorInstance.Data = pFStack_1a0;
      this_00[1].VertexColors.TypedValue.Blocks.ArrayNum = (undefined4)local_198;
      this_00[1].VertexColors.TypedValue.Blocks.ArrayMax = local_198._4_4_;
      *(undefined8 *)&this_00[1].VertexColors.bIsSet = uStack_190;
      pFVar20 = (this->Decomposition).Array.AllocatorInstance.Data;
      local_1e8 = this_00;
      if (((pFVar20 <= (FScriptContainerElement *)&local_1e8) &&
          ((FScriptContainerElement *)&local_1e8 < pFVar20 + (longlong)*piVar18 * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar14 = (this->Decomposition).Array.ArrayNum;
      if (iVar14 == *piVar18) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&this->Decomposition,piVar18);
      }
      uVar19 = uVar19 + 1;
      (this->Decomposition).Array.ArrayNum = iVar14 + 1;
      *(FDynamicMesh3 **)((this->Decomposition).Array.AllocatorInstance.Data + (longlong)iVar14 * 8)
           = local_1e8;
      param_3 = local_res20;
      param_2 = local_res18;
    } while ((int)uVar19 < param_1);
  }
  pTVar15 = param_5->DataPtr;
  pTVar1 = pTVar15 + param_5->ArrayNum;
  if (pTVar15 != pTVar1) {
    local_160 = local_res10;
    local_150 = local_res10;
    do {
      local_1c0 = *(undefined4 *)pTVar15;
      uStack_1bc = *(undefined4 *)&pTVar15->field_0x4;
      iVar14 = (this->Proximities).ArrayNum;
      if (iVar14 == (this->Proximities).ArrayMax) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&(this->Proximities).AllocatorInstance,
                            &(this->Proximities).ArrayMax);
      }
      pFVar3 = (this->Proximities).AllocatorInstance.Data;
      (this->Proximities).ArrayNum = iVar14 + 1;
      lVar17 = (longlong)iVar14 * 0x38;
      *(undefined8 *)(pFVar3 + lVar17 + 8) = local_108;
      *(undefined8 *)(pFVar3 + lVar17 + 8 + 8) = uStack_100;
      *(ulonglong *)(pFVar3 + lVar17) = CONCAT44(uStack_1bc,local_1c0);
      *(undefined8 *)(pFVar3 + lVar17 + 0x18) = local_f8;
      *(undefined8 *)(pFVar3 + lVar17 + 0x18 + 8) = uStack_f0;
      *(undefined2 *)(pFVar3 + lVar17 + 0x28) = 0x100;
      *(undefined8 *)(pFVar3 + lVar17 + 0x30) = 0x7fefffffffffffff;
      local_res10[0] = iVar14;
      local_168 = pTVar15;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                  *)&this->DecompositionToProximity,
                 (TPairInitializer<int_const_&,int_const_&> *)local_170,(bool *)&local_168);
      local_158 = (int *)&pTVar15->field_0x4;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                  *)&this->DecompositionToProximity,
                 (TPairInitializer<int_const_&,int_const_&> *)(local_170 + 4),(bool *)&local_158);
      pTVar15 = pTVar15 + 1;
    } while (pTVar15 != pTVar1);
  }
  return;
}

// InitializeFromIndexMesh @ 1433b7f70

void __thiscall
UE::Geometry::FConvexDecomposition3::InitializeFromIndexMesh
          (FConvexDecomposition3 *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          TArrayView<UE::Math::TIntVector3<int>_const_,int> *param_2,FPreprocessMeshOptions *param_3
          ,int param_4)

{
  TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar1;
  TVector<float> *pTVar2;
  TIntVector3<int> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FConvexPart *this_01;
  TVector<float> *pTVar10;
  TIntVector3<int> *pTVar11;
  FConvexPart *local_b8;
  FIndex3i_u_0 local_b0;
  undefined8 local_a0;
  TVector<float> *local_88;
  undefined8 uStack_80;
  TIntVector3<int> *local_78;
  undefined8 uStack_70;
  TVector<double>_u_0 local_68;
  undefined8 local_50;
  float local_48;
  undefined8 local_44;
  float local_3c;
  TVector2<float>_u_0 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  
  this_00 = &this->Decomposition;
  TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>::
  Empty(this_00,0);
  this_01 = ::operator_new(0x2e0);
  if (this_01 != (FConvexPart *)0x0) {
    local_78 = param_2->DataPtr;
    uStack_70 = *(undefined8 *)&param_2->ArrayNum;
    local_88 = param_1->DataPtr;
    uStack_80 = *(undefined8 *)&param_1->ArrayNum;
    FDynamicMesh3::FDynamicMesh3(&this_01->InternalGeo);
    this_01->HullSourceID = -1;
    (this_01->HullTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->HullTriangles).ArrayNum = 0;
    (this_01->HullTriangles).ArrayMax = 0;
    (this_01->HullPlanes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->HullPlanes).ArrayNum = 0;
    (this_01->HullPlanes).ArrayMax = 0;
    (this_01->OverlapsNegativeSpace).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->OverlapsNegativeSpace).ArrayNum = 0;
    (this_01->OverlapsNegativeSpace).ArrayMax = 0;
    this_01->HullVolume = 0.0;
    this_01->GeoVolume = 0.0;
    this_01->SumHullsVolume = -1.7976931348623157e+308;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this_01->GeoCenter).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
    ;
    (this_01->GeoCenter).field0_0x0._s_0.Y = (double)uVar7;
    (this_01->GeoCenter).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
    ;
    (this_01->Bounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
    (this_01->Bounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
    (this_01->Bounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
    (this_01->Bounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
    (this_01->Bounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
    (this_01->Bounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
    this_01->HullError = 1.7976931348623157e+308;
    this_01->bGeometryVolumeUnreliable = false;
    this_01->bSplitFailed = false;
    this_01->bMustMerge = false;
    this_01->bIsCompact = false;
    this_01->bFailed = false;
    pTVar2 = local_88 + (int)uStack_80;
    for (pTVar10 = local_88; pTVar10 != pTVar2; pTVar10 = pTVar10 + 1) {
      dVar6 = (double)(float)((ulonglong)*(undefined8 *)&pTVar10->field0_0x0 >> 0x20);
      local_30 = 0;
      local_2e = 0;
      local_68._8_4_ = SUB84(dVar6,0);
      local_68._0_8_ = (double)(float)*(undefined8 *)&pTVar10->field0_0x0;
      local_68._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_68._s_0.Z = (double)(pTVar10->field0_0x0)._s_0.Z;
      local_50 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_3c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_38 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      FDynamicMesh3::AppendVertex(&this_01->InternalGeo,(FVertexInfo *)&local_68._s_0);
    }
    pTVar3 = local_78 + (int)uStack_70;
    for (pTVar11 = local_78; pTVar11 != pTVar3; pTVar11 = pTVar11 + 1) {
      local_a0 = *(undefined8 *)&pTVar11->field0_0x0;
      local_b0._s_0.A = (int)local_a0 + param_4;
      local_b0._s_0.B = (int)((ulonglong)local_a0 >> 0x20) + param_4;
      local_b0._s_0.C = (pTVar11->field0_0x0)._s_0.Z + param_4;
      FDynamicMesh3::AppendTriangle(&this_01->InternalGeo,(FIndex3i *)&local_b0._s_0,0);
    }
    FConvexPart::InitializeFromInternalGeo(this_01,param_3,&this->ResultTransform);
  }
  if (this_01->bFailed == false) {
    pFVar4 = (this_00->Array).AllocatorInstance.Data;
    local_b8 = this_01;
    if (((pFVar4 <= (FScriptContainerElement *)&local_b8) &&
        ((FScriptContainerElement *)&local_b8 <
         pFVar4 + (longlong)(this->Decomposition).Array.ArrayMax * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = (this->Decomposition).Array.ArrayNum;
    piVar1 = &(this->Decomposition).Array.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this_00,piVar1);
    }
    (this->Decomposition).Array.ArrayNum = iVar9 + 1;
    *(FConvexPart **)((this_00->Array).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_b8;
    return;
  }
  pFVar4 = (this_01->OverlapsNegativeSpace).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this_01->HullPlanes).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this_01->HullTriangles).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FDynamicMesh3::~FDynamicMesh3(&this_01->InternalGeo);
  ::operator_delete(this_01,0x2e0);
  return;
}

// InitializeFromIndexMesh @ 1433b82d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FConvexDecomposition3::InitializeFromIndexMesh
          (FConvexDecomposition3 *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          TArrayView<UE::Math::TIntVector3<int>_const_,int> *param_2,bool param_3,int param_4)

{
  longlong *plVar1;
  undefined1 auStackY_a8 [32];
  TArrayView<UE::Math::TIntVector3<int>_const_,int> local_78;
  TArrayView<UE::Math::TVector<float>_const_,int> local_68;
  undefined1 local_58 [56];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_68.DataPtr = param_1->DataPtr;
  local_68.ArrayNum = param_1->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_58._8_8_ = 0.0;
  local_78.DataPtr = param_2->DataPtr;
  local_78.ArrayNum = param_2->ArrayNum;
  local_78._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_58._16_8_ = 0;
  local_20 = (longlong *)0x0;
  local_58[0] = param_3;
  InitializeFromIndexMesh(this,&local_68,&local_78,(FPreprocessMeshOptions *)local_58,param_4);
  if (local_58._16_8_ != 0) {
    plVar1 = (longlong *)(local_58 + 0x20);
    if (local_20 != (longlong *)0x0) {
      plVar1 = local_20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// InitializeFromMesh @ 1433b8720

void __thiscall
UE::Geometry::FConvexDecomposition3::InitializeFromMesh
          (FConvexDecomposition3 *this,FDynamicMesh3 *param_1,FPreprocessMeshOptions *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FConvexPart *this_00;
  FConvexPart *local_18 [2];
  
  TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>::
  Empty(&this->Decomposition,0);
  this_00 = ::operator_new(0x2e0);
  if (this_00 != (FConvexPart *)0x0) {
    FDynamicMesh3::FDynamicMesh3(&this_00->InternalGeo);
    this_00->HullSourceID = -1;
    (this_00->HullTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->HullTriangles).ArrayNum = 0;
    (this_00->HullTriangles).ArrayMax = 0;
    (this_00->HullPlanes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->HullPlanes).ArrayNum = 0;
    (this_00->HullPlanes).ArrayMax = 0;
    (this_00->OverlapsNegativeSpace).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->OverlapsNegativeSpace).ArrayNum = 0;
    (this_00->OverlapsNegativeSpace).ArrayMax = 0;
    this_00->HullVolume = 0.0;
    this_00->GeoVolume = 0.0;
    this_00->SumHullsVolume = -1.7976931348623157e+308;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this_00->GeoCenter).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
    ;
    (this_00->GeoCenter).field0_0x0._s_0.Y = (double)uVar4;
    (this_00->GeoCenter).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
    ;
    (this_00->Bounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
    (this_00->Bounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
    (this_00->Bounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
    (this_00->Bounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
    (this_00->Bounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
    (this_00->Bounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
    this_00->bGeometryVolumeUnreliable = false;
    this_00->bSplitFailed = false;
    this_00->bMustMerge = false;
    this_00->HullError = 1.7976931348623157e+308;
    this_00->bIsCompact = false;
    this_00->bFailed = false;
    FDynamicMesh3::Copy(&this_00->InternalGeo,param_1,false,false,false,false);
    FConvexPart::InitializeFromInternalGeo(this_00,param_2,&this->ResultTransform);
  }
  if (this_00->bFailed == false) {
    pFVar2 = (this->Decomposition).Array.AllocatorInstance.Data;
    local_18[0] = this_00;
    if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 <
         pFVar2 + (longlong)(this->Decomposition).Array.ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (this->Decomposition).Array.ArrayNum;
    piVar1 = &(this->Decomposition).Array.ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&this->Decomposition,piVar1);
    }
    (this->Decomposition).Array.ArrayNum = iVar6 + 1;
    *(FConvexPart **)((this->Decomposition).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) =
         local_18[0];
  }
  else {
    pFVar2 = (this_00->OverlapsNegativeSpace).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (this_00->HullPlanes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (this_00->HullTriangles).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FDynamicMesh3::~FDynamicMesh3(&this_00->InternalGeo);
    ::operator_delete(this_00,0x2e0);
  }
  return;
}

// InitializeFromMesh @ 1433b8980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FConvexDecomposition3::InitializeFromMesh
          (FConvexDecomposition3 *this,FDynamicMesh3 *param_1,bool param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [56];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._16_8_ = 0;
  local_58._8_8_ = 0.0;
  local_20 = (longlong *)0x0;
  local_58[0] = param_2;
  InitializeFromMesh(this,param_1,(FPreprocessMeshOptions *)local_58);
  if (local_58._16_8_ != 0) {
    plVar1 = (longlong *)(local_58 + 0x20);
    if (local_20 != (longlong *)0x0) {
      plVar1 = local_20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// InitializeNegativeSpace @ 1433b89f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FConvexDecomposition3::InitializeNegativeSpace
          (FConvexDecomposition3 *this,FNegativeSpaceSampleSettings *param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2)

{
  int *piVar1;
  TVector<double> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FDynamicMesh3 *pFVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar17;
  bool bVar18;
  undefined1 uVar19;
  int iVar20;
  ulong64 uVar21;
  TVector<double> *pTVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  int *piVar25;
  FSphereCovering *this_00;
  TVector<double> *pTVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  undefined1 auStackY_538 [32];
  double local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  double local_4d0;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_4c8;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  double local_478;
  FConvexDecomposition3 *local_468;
  double local_450;
  undefined1 local_448 [8];
  TVector<double>_u_0 local_440;
  TVector<double>_u_0 local_428;
  TVector<double>_u_0 local_408;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  TVector<double> local_3b8;
  undefined1 local_398 [48];
  undefined **local_368;
  code *local_360;
  undefined8 local_350;
  double local_348;
  TDynamicVector<int,512> local_340;
  TDynamicVector<UE::Math::TVector<double>,512> local_328;
  TDynamicVector<UE::Math::TVector<double>,512> local_310;
  TDynamicVector<int,512> local_2f8;
  longlong local_2e0;
  undefined1 local_2d8 [32];
  double dStack_2b8;
  bool local_2b0;
  bool local_2af;
  int local_2ac;
  bool local_2a8;
  double local_2a0;
  bool local_298;
  double local_290;
  longlong local_288;
  longlong local_278 [3];
  longlong *local_260;
  longlong local_258;
  longlong local_248 [3];
  longlong *local_230;
  double local_228;
  double local_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined8 local_1b8 [2];
  longlong local_1a8;
  longlong local_198 [3];
  longlong *local_180;
  undefined1 local_178;
  TDistPoint3Triangle3<double> local_168;
  ulonglong local_d8;
  
  dVar13 = __real_3e45798ee2308c3a;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_538;
  if ((this->Decomposition).Array.ArrayNum == 1) {
    pFVar6 = *(FDynamicMesh3 **)(this->Decomposition).Array.AllocatorInstance.Data;
    local_398._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    local_368 = &
                ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    local_360 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
                MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_398._32_8_ =
         Core::Private::Function::
         TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
         ::Call;
    local_348 = __real_3e45798ee2308c3a;
    local_398._16_8_ = 0;
    local_398._24_4_ = 3;
    local_350 = 0;
    local_340.CurBlock = 0;
    local_340.CurBlockUsed = 0;
    local_340.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_340.Blocks.ArrayNum = 0;
    local_340.Blocks.ArrayMax = 0;
    local_468 = this;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_340);
    local_328.CurBlock = 0;
    local_328.CurBlockUsed = 0;
    local_328.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_328.Blocks.ArrayNum = 0;
    local_328.Blocks.ArrayMax = 0;
    TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_328);
    local_310.CurBlock = 0;
    local_310.CurBlockUsed = 0;
    local_310.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_310.Blocks.ArrayNum = 0;
    local_310.Blocks.ArrayMax = 0;
    TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_310);
    local_2f8.CurBlock = 0;
    local_2f8.CurBlockUsed = 0;
    local_2f8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.Blocks.ArrayNum = 0;
    local_2f8.Blocks.ArrayMax = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_2f8);
    local_2e0 = -1;
    local_398._16_8_ = 0;
    local_398._8_8_ = pFVar6;
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_398,false);
    local_398._16_8_ = FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_398._8_8_);
    local_4c8.Tree = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_398;
    local_4c8.FWNBeta = __real_4000000000000000;
    local_4c8.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4c8.FastWindingCache.ArrayNum = 0;
    local_4c8.FastWindingCache.ArrayMax = 0;
    local_4c8.FastWindingCacheOffset = 0;
    local_4c8.FastWindingCacheMeshChangeStamp = 0;
    local_4c8.FWNApproxOrder = 2;
    if ((local_2e0 < 0) ||
       (uVar21 = FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_398._8_8_),
       local_398._16_8_ != uVar21)) {
      pTVar17 = local_4c8.Tree;
      TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(local_4c8.Tree,false);
      uVar21 = FDynamicMesh3::GetChangeStamp(pTVar17->Mesh);
      pTVar17->MeshChangeStamp = uVar21;
    }
    TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache(&local_4c8);
    local_2d8._8_8_ = param_1->MinSpacing;
    local_4c8.FastWindingCacheMeshChangeStamp = (local_4c8.Tree)->MeshChangeStamp;
    local_2d8[0] = param_1->SampleMethod;
    local_2d8._4_4_ = param_1->TargetNumSamples;
    local_2d8[0x10] = param_1->bAllowSamplesInsideSpheres;
    local_2b0 = param_1->bRequireSearchSampleCoverage;
    local_2af = param_1->bOnlyConnectedToHull;
    local_2ac = param_1->MaxVoxelsPerDim;
    local_2d8._24_8_ = param_1->ReduceRadiusMargin;
    dStack_2b8 = param_1->MinRadius;
    local_2a8 = param_1->bDeterministic;
    local_298 = param_1->bAllowSamplesInsideMesh;
    local_2a0 = param_1->MarchingCubesGridScale;
    local_288 = *(longlong *)&param_1->OptionalObstacleSDF;
    local_290 = param_1->VoxelExpandBoundsFactor;
    local_260 = (longlong *)0x0;
    if (local_288 != 0) {
      puVar7 = *(undefined8 **)&(param_1->OptionalObstacleSDF).field_0x28;
      puVar23 = (undefined8 *)&(param_1->OptionalObstacleSDF).field_0x10;
      if (puVar7 != (undefined8 *)0x0) {
        puVar23 = puVar7;
      }
      (**(code **)*puVar23)(SUB84(local_290,0),local_278);
    }
    local_258 = *(longlong *)&param_1->CustomRadiusMarginScale;
    local_230 = (longlong *)0x0;
    if (local_258 != 0) {
      puVar7 = *(undefined8 **)&(param_1->CustomRadiusMarginScale).field_0x28;
      puVar23 = (undefined8 *)&(param_1->CustomRadiusMarginScale).field_0x10;
      if (puVar7 != (undefined8 *)0x0) {
        puVar23 = puVar7;
      }
      (**(code **)*puVar23)(puVar23,local_248);
    }
    local_3d0 = (param_1->ResultTransform).Scale3D.XY.m128d_f64[0];
    dStack_3c8 = (param_1->ResultTransform).Scale3D.XY.m128d_f64[1];
    this_00 = &this->NegativeSpace;
    local_228 = param_1->MinCustomMarginScale;
    piVar1 = &(this->NegativeSpace).Position.ArrayMax;
    local_3e8 = (this->ResultTransform).Scale3D.field0_0x0._s_0.X;
    dStack_3e0 = (this->ResultTransform).Scale3D.field0_0x0._s_0.Y;
    iVar20 = *piVar1;
    local_3d8 = (this->ResultTransform).Scale3D.field0_0x0._s_0.Z;
    local_450 = (this->ResultTransform).Translation.field0_0x0._s_0.Z;
    dStack_1c0 = 0.0;
    local_1f8 = (this->ResultTransform).Translation.field0_0x0._s_0.X;
    dStack_1f0 = (this->ResultTransform).Translation.field0_0x0._s_0.Y;
    local_3c0 = (param_1->ResultTransform).Scale3D.ZW.m128d_f64[0];
    dVar37 = local_3d0 / local_3e8;
    local_2d8._8_8_ = (double)local_2d8._8_8_ * dVar37;
    dVar11 = dStack_2b8 * dVar37;
    local_220 = dVar37 * param_1->AppliedScaleFactor;
    local_218 = (this->ResultTransform).Rotation.field0_0x0._s_0.X;
    dStack_210 = (this->ResultTransform).Rotation.field0_0x0._s_0.Y;
    unique0x1000053b = SUB84(dVar11,0);
    local_2d8._24_8_ = (double)local_2d8._24_8_ * dVar37;
    unique0x1000053f = (int)((ulonglong)dVar11 >> 0x20);
    local_208 = (this->ResultTransform).Rotation.field0_0x0._s_0.Z;
    dStack_200 = (this->ResultTransform).Rotation.field0_0x0._s_0.W;
    dStack_1e0 = 0.0;
    (this->NegativeSpace).Position.ArrayNum = 0;
    local_1e8 = local_450;
    local_1d8 = local_3e8;
    dStack_1d0 = dStack_3e0;
    local_1c8 = local_3d8;
    if (iVar20 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,piVar1);
    }
    iVar20 = (this->NegativeSpace).Radius.ArrayMax;
    piVar1 = &(this->NegativeSpace).Radius.ArrayMax;
    (this->NegativeSpace).Radius.ArrayNum = 0;
    if (iVar20 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->NegativeSpace).Radius.AllocatorInstance,0,piVar1);
    }
    FSphereCovering::AddNegativeSpace
              (this_00,&local_4c8,(FNegativeSpaceSampleSettings *)local_2d8,false);
    uVar16 = __real_7fefffffffffffff;
    uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar37 = __real_3fe0000000000000;
    dVar11 = __real_3ff0000000000000;
    pTVar26 = param_2->DataPtr;
    pTVar2 = pTVar26 + param_2->ArrayNum;
    for (; pTVar26 != pTVar2; pTVar26 = pTVar26 + 1) {
      dVar3 = *(double *)&(this->ResultTransform).Scale3D.field0_0x0;
      uVar27 = SUB84(dVar3,0) & uVar14;
      uVar29 = (uint)((ulonglong)dVar3 >> 0x20) & uVar15;
      if (dVar13 <= (double)CONCAT44(uVar29,uVar27) && (double)CONCAT44(uVar29,uVar27) != dVar13) {
        dVar3 = dVar11 / dVar3;
      }
      else {
        dVar3 = 0.0;
      }
      dVar4 = *(double *)((longlong)&(this->ResultTransform).Scale3D.field0_0x0 + 8);
      uVar27 = SUB84(dVar4,0) & uVar14;
      uVar29 = (uint)((ulonglong)dVar4 >> 0x20) & uVar15;
      if (dVar13 <= (double)CONCAT44(uVar29,uVar27) && (double)CONCAT44(uVar29,uVar27) != dVar13) {
        dVar4 = dVar11 / dVar4;
      }
      else {
        dVar4 = 0.0;
      }
      dVar5 = *(double *)((longlong)&(this->ResultTransform).Scale3D.field0_0x0 + 0x10);
      uVar27 = SUB84(dVar5,0) & uVar14;
      uVar29 = (uint)((ulonglong)dVar5 >> 0x20) & uVar15;
      if (dVar13 <= (double)CONCAT44(uVar29,uVar27) && (double)CONCAT44(uVar29,uVar27) != dVar13) {
        dVar5 = dVar11 / dVar5;
      }
      else {
        dVar5 = 0.0;
      }
      dVar12 = (pTVar26->field0_0x0)._s_0.Y - (this->ResultTransform).Translation.field0_0x0._s_0.Y;
      local_440._s_0.Z =
           (pTVar26->field0_0x0)._s_0.Z - (this->ResultTransform).Translation.field0_0x0._s_0.Z;
      local_440._8_4_ = SUB84(dVar12,0);
      local_440._0_8_ =
           (pTVar26->field0_0x0)._s_0.X - (this->ResultTransform).Translation.field0_0x0._s_0.X;
      local_440._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      pTVar22 = TQuaternion<double>::InverseMultiply
                          (&(this->ResultTransform).Rotation,&local_3b8,
                           (TVector<double> *)&local_440._s_0);
      local_4e0 = dVar3 * (pTVar22->field0_0x0)._s_0.X;
      uStack_4d8 = (pTVar22->field0_0x0)._s_0.Y * dVar4;
      local_4d0 = (pTVar22->field0_0x0)._s_0.Z * dVar5;
      if (local_298 == false) {
        if ((local_4c8.Tree == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Tree",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                                ,0x16c,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          uVar19 = (*pcVar10)();
          return (bool)uVar19;
        }
        pTVar17 = local_4c8.Tree;
        if (((local_4c8.Tree)->RootIndex < 0) ||
           (uVar21 = FDynamicMesh3::GetChangeStamp((local_4c8.Tree)->Mesh),
           pTVar17->MeshChangeStamp != uVar21)) {
          pTVar17 = local_4c8.Tree;
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(local_4c8.Tree,false);
          uVar21 = FDynamicMesh3::GetChangeStamp(pTVar17->Mesh);
          pTVar17->MeshChangeStamp = uVar21;
        }
        if (local_4c8.FastWindingCacheMeshChangeStamp != (local_4c8.Tree)->MeshChangeStamp) {
          TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache(&local_4c8);
          local_4c8.FastWindingCacheMeshChangeStamp = (local_4c8.Tree)->MeshChangeStamp;
        }
        local_428._0_8_ = local_4e0;
        local_428._8_8_ = uStack_4d8;
        local_428._s_0.Z = local_4d0;
        dVar3 = TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                          (&local_4c8,(local_4c8.Tree)->RootIndex,(TVector<double> *)&local_428._s_0
                          );
        if (dVar3 <= dVar37) goto LAB_1433b9098;
      }
      else {
LAB_1433b9098:
        piVar25 = &(this->NegativeSpace).Position.ArrayMax;
        local_1b8[0] = uVar16;
        local_1a8 = 0;
        local_180 = (longlong *)0x0;
        local_178 = 0;
        iVar20 = (**(code **)(local_398._0_8_ + 0x20))(local_398,&local_4e0,local_448,local_1b8);
        if (iVar20 < 0) {
          uVar28 = SUB84(local_4d0,0);
          uVar30 = (undefined4)((ulonglong)local_4d0 >> 0x20);
          uVar33 = (undefined4)local_4e0;
          uVar34 = local_4e0._4_4_;
          uVar35 = (undefined4)uStack_4d8;
          uVar36 = uStack_4d8._4_4_;
        }
        else {
          local_408._0_8_ = local_4e0;
          local_408._8_8_ = uStack_4d8;
          local_408._s_0.Z = local_4d0;
          TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleDistance
                    (&local_168,(FDynamicMesh3 *)local_398._8_8_,iVar20,
                     (TVector<double> *)&local_408._s_0);
          uVar28 = SUB84(local_168.ClosestTrianglePoint.field0_0x0._s_0.Z,0);
          uVar30 = (undefined4)((ulonglong)local_168.ClosestTrianglePoint.field0_0x0._16_8_ >> 0x20)
          ;
          uVar33 = local_168.ClosestTrianglePoint.field0_0x0._0_4_;
          uVar34 = local_168.ClosestTrianglePoint.field0_0x0._4_4_;
          uVar35 = local_168.ClosestTrianglePoint.field0_0x0._8_4_;
          uVar36 = local_168.ClosestTrianglePoint.field0_0x0._12_4_;
        }
        local_450 = (double)CONCAT44(uVar30,uVar28);
        uVar28 = (undefined4)local_4e0;
        uVar30 = local_4e0._4_4_;
        uVar31 = (undefined4)uStack_4d8;
        uVar32 = uStack_4d8._4_4_;
        if (local_1a8 != 0) {
          plVar24 = local_198;
          if (local_180 != (longlong *)0x0) {
            plVar24 = local_180;
          }
          (**(code **)(*plVar24 + 0x10))();
          uVar28 = (undefined4)local_4e0;
          uVar30 = local_4e0._4_4_;
          uVar31 = (undefined4)uStack_4d8;
          uVar32 = uStack_4d8._4_4_;
        }
        pFVar8 = (this_00->Position).AllocatorInstance.Data;
        dVar3 = (double)CONCAT44(uVar34,uVar33) - (double)CONCAT44(uVar30,uVar28);
        dVar4 = (double)CONCAT44(uVar36,uVar35) - (double)CONCAT44(uVar32,uVar31);
        local_478 = local_4d0;
        local_4e8 = SQRT(dVar4 * dVar4 + dVar3 * dVar3 +
                         (local_450 - local_4d0) * (local_450 - local_4d0)) -
                    (double)local_2d8._24_8_;
        if (local_4e8 <= 0.0) {
          local_4e8 = 0.0;
        }
        local_488 = uVar28;
        uStack_484 = uVar30;
        uStack_480 = uVar31;
        uStack_47c = uVar32;
        if (((pFVar8 <= (FScriptContainerElement *)&local_488) &&
            ((FScriptContainerElement *)&local_488 < pFVar8 + (longlong)*piVar25 * 0x18)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          uVar19 = (*pcVar10)();
          return (bool)uVar19;
        }
        iVar20 = (this->NegativeSpace).Position.ArrayNum;
        if (iVar20 == *piVar25) {
          iVar20 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)this_00,piVar25);
        }
        (this->NegativeSpace).Position.ArrayNum = iVar20 + 1;
        pFVar9 = (this_00->Position).AllocatorInstance.Data;
        pFVar8 = pFVar9 + (longlong)iVar20 * 0x18;
        *(ulonglong *)pFVar8 = CONCAT44(uStack_484,local_488);
        *(ulonglong *)(pFVar8 + 8) = CONCAT44(uStack_47c,uStack_480);
        *(double *)(pFVar9 + (longlong)iVar20 * 0x18 + 0x10) = local_478;
        pFVar8 = (this->NegativeSpace).Radius.AllocatorInstance.Data;
        if (((pFVar8 <= (FScriptContainerElement *)&local_4e8) &&
            ((FScriptContainerElement *)&local_4e8 < pFVar8 + (longlong)*piVar1 * 8)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          uVar19 = (*pcVar10)();
          return (bool)uVar19;
        }
        iVar20 = (this->NegativeSpace).Radius.ArrayNum;
        if (iVar20 == *piVar1) {
          iVar20 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->NegativeSpace).Radius.AllocatorInstance,piVar1);
        }
        (this->NegativeSpace).Radius.ArrayNum = iVar20 + 1;
        *(double *)((this->NegativeSpace).Radius.AllocatorInstance.Data + (longlong)iVar20 * 8) =
             local_4e8;
      }
    }
    InitNegativeSpaceConvexPartMapping(local_468);
    if (local_258 != 0) {
      plVar24 = local_248;
      if (local_230 != (longlong *)0x0) {
        plVar24 = local_230;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
    if (local_288 != 0) {
      plVar24 = local_278;
      if (local_260 != (longlong *)0x0) {
        plVar24 = local_260;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
    if (local_4c8.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.FastWindingCache.AllocatorInstance.Data);
    }
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_398);
    bVar18 = true;
  }
  else {
    bVar18 = false;
  }
  return bVar18;
}

// InitializeProximityFromDecompositionBoundingBoxOverlaps @ 1433b9410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FConvexDecomposition3::InitializeProximityFromDecompositionBoundingBoxOverlaps
          (FConvexDecomposition3 *this,double param_1,double param_2,double param_3)

{
  undefined1 *puVar1;
  TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_> *pTVar2;
  TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_> *this_00;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  FConvexDecomposition3 *pFVar21;
  ForAnyElementType FVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int *piVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStackY_438 [32];
  undefined1 local_408 [4];
  uint local_404;
  ForAnyElementType local_400;
  int local_3f8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_3f0;
  uint local_3e0;
  int local_3dc;
  double local_3d8;
  FConvexDecomposition3 *local_3d0;
  double local_3c8;
  uint local_3c0;
  uint uStack_3bc;
  undefined1 local_3b8 [8];
  int *local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double dStack_378;
  double local_370;
  double dStack_368;
  double local_360;
  double dStack_358;
  TVector<double>_u_0 local_350;
  double dStack_338;
  double local_330;
  double dStack_328;
  uint *local_320;
  int *local_318;
  uint *local_310;
  int *local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [360];
  undefined1 local_140 [72];
  undefined4 local_f8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  pTVar2 = &this->Proximities;
  uVar20 = 0;
  piVar25 = &(this->Proximities).ArrayMax;
  (this->Proximities).ArrayNum = 0;
  local_3d0 = this;
  local_3b0 = (int *)param_1;
  local_3a8 = param_3;
  local_3a0 = param_2;
  if (*piVar25 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&pTVar2->AllocatorInstance,0,piVar25);
  }
  this_00 = &this->DecompositionToProximity;
  bVar14 = 1 < *(int *)&(this->DecompositionToProximity).field_0x48;
  if (!bVar14) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar1 = &(this->DecompositionToProximity).field_0xc;
  *(undefined4 *)&(this->DecompositionToProximity).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->DecompositionToProximity).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DecompositionToProximity).field_0x34 = 0;
  iVar15 = *(int *)&(this->DecompositionToProximity).field_0x2c;
  *(undefined4 *)&(this->DecompositionToProximity).field_0x28 = 0;
  if ((iVar15 < 0) || (0x80 < iVar15)) {
    *(undefined4 *)&(this->DecompositionToProximity).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DecompositionToProximity).field_0x10,
               0);
  }
  if (bVar14) {
    *(undefined4 *)&(this->DecompositionToProximity).field_0x48 = 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
               this_00);
  }
  dVar10 = __real_ffefffffffffffff;
  dVar8 = __real_7fefffffffffffff;
  uVar27 = 0;
  uVar28 = 0;
  uVar16 = (this->Decomposition).Array.ArrayNum;
  local_3c8 = 0.0;
  local_3d8 = 0.0;
  local_400.Data = (FScriptContainerElement *)0x0;
  local_3f8[0] = 0;
  local_3f8[1] = 0;
  if ((int)uVar16 < 1) {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
  }
  else {
    iVar15 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x30,8,uVar16,&local_400,local_3f8,local_3f8 + 1);
    DefaultConstructItems<UE::Geometry::TAxisAlignedBox3<double>,int>
              (local_400.Data + (longlong)iVar15 * 0x30,uVar16);
  }
  iVar15 = (this->Decomposition).Array.ArrayNum;
  pFVar21 = this;
  uVar23 = uVar20;
  uVar24 = uVar20;
  dVar7 = dVar8;
  dVar6 = dVar10;
  dVar12 = dVar8;
  dVar13 = dVar10;
  if (0 < iVar15) {
    do {
      uVar19 = (uint)uVar20;
      uVar16 = 0;
      if ((int)uVar19 < iVar15) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      local_398 = dVar8;
      local_390 = dVar7;
      local_388 = dVar6;
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar18 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + uVar24);
      dVar8 = *(double *)(lVar18 + 0x2c0) - *(double *)(lVar18 + 0x2a8);
      uVar16 = 0;
      if ((int)uVar19 < local_3f8[0]) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      dVar6 = *(double *)(lVar18 + 0x2b0) - *(double *)(lVar18 + 0x298);
      if (dVar8 <= local_3c8) {
        dVar8 = local_3c8;
      }
      dVar7 = *(double *)(lVar18 + 0x2b8) - *(double *)(lVar18 + 0x2a0);
      if (dVar6 <= local_3c8) {
        dVar6 = local_3c8;
      }
      if (dVar7 <= local_3c8) {
        dVar7 = local_3c8;
      }
      dVar9 = dVar7;
      if (dVar7 <= dVar8) {
        dVar9 = dVar8;
      }
      if (dVar8 <= dVar7) {
        dVar7 = dVar8;
      }
      if (dVar9 <= dVar6) {
        dVar9 = dVar6;
      }
      if (dVar6 <= dVar7) {
        dVar7 = dVar6;
      }
      local_380 = dVar7 * (double)local_3b0;
      if (dVar7 * (double)local_3b0 <= local_3a8) {
        local_380 = local_3a8;
      }
      if (local_380 <= dVar9 * local_3a0) {
        local_380 = dVar9 * local_3a0;
      }
      dStack_358 = *(double *)(lVar18 + 0x2c0) + local_380;
      local_360 = *(double *)(lVar18 + 0x2b8) + local_380;
      local_370 = *(double *)(lVar18 + 0x2a8) - local_380;
      dStack_368 = *(double *)(lVar18 + 0x2b0) + local_380;
      dStack_378 = *(double *)(lVar18 + 0x2a0) - local_380;
      if (dVar13 <= dStack_358) {
        dVar13 = dStack_358;
      }
      local_380 = *(double *)(lVar18 + 0x298) - local_380;
      uVar27 = SUB84(local_3c8,0);
      uVar28 = (undefined4)((ulonglong)local_3c8 >> 0x20);
      if (dVar10 <= dStack_368) {
        dVar10 = dStack_368;
      }
      dVar9 = dStack_358 - local_370;
      if (dStack_358 - local_370 <= local_3c8) {
        dVar9 = local_3c8;
      }
      if (local_380 <= dVar12) {
        dVar12 = local_380;
      }
      dVar8 = dStack_378;
      if (local_398 <= dStack_378) {
        dVar8 = local_398;
      }
      dVar11 = local_360 - dStack_378;
      if (local_360 - dStack_378 <= local_3c8) {
        dVar11 = local_3c8;
      }
      dVar7 = local_370;
      if (local_390 <= local_370) {
        dVar7 = local_390;
      }
      dVar26 = dStack_368 - local_380;
      if (dStack_368 - local_380 <= local_3c8) {
        dVar26 = local_3c8;
      }
      dVar6 = local_360;
      if (local_360 <= local_388) {
        dVar6 = local_388;
      }
      if (dVar9 <= dVar11) {
        dVar9 = dVar11;
      }
      if (dVar9 <= dVar26) {
        dVar9 = dVar26;
      }
      if (dVar9 <= local_3d8) {
        dVar9 = local_3d8;
      }
      local_3d8 = dVar9;
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar20 = (ulonglong)(uVar19 + 1);
      *(double *)(local_400.Data + uVar23) = local_380;
      *(double *)(local_400.Data + uVar23 + 8) = dStack_378;
      *(double *)(local_400.Data + uVar23 + 0x10) = local_370;
      *(double *)(local_400.Data + uVar23 + 0x10 + 8) = dStack_368;
      *(double *)(local_400.Data + uVar23 + 0x20) = local_360;
      *(double *)(local_400.Data + uVar23 + 0x20 + 8) = dStack_358;
      iVar15 = (this->Decomposition).Array.ArrayNum;
      pFVar21 = local_3d0;
      uVar23 = uVar23 + 0x30;
      uVar24 = uVar24 + 8;
    } while ((int)(uVar19 + 1) < iVar15);
  }
  piVar25 = &(this->Proximities).ArrayMax;
  FSparseDynamicOctree3::FSparseDynamicOctree3((FSparseDynamicOctree3 *)local_2a8);
  local_3f0.ArrayNum = 0;
  local_3f0.ArrayMax = 0;
  local_404 = 0;
  local_3f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  dVar9 = (double)CONCAT44(uVar28,uVar27);
  dVar11 = dVar13 - dVar7;
  if (dVar13 - dVar7 <= dVar9) {
    dVar11 = dVar9;
  }
  dVar7 = dVar6 - dVar8;
  if (dVar6 - dVar8 <= (double)CONCAT44(uVar28,uVar27)) {
    dVar7 = dVar9;
  }
  dVar8 = dVar10 - dVar12;
  if (dVar10 - dVar12 <= (double)CONCAT44(uVar28,uVar27)) {
    dVar8 = dVar9;
  }
  if (dVar11 <= dVar7) {
    dVar11 = dVar7;
  }
  if (dVar11 <= dVar8) {
    dVar11 = dVar8;
  }
  local_2a8._0_8_ = dVar11 * __real_3fe0000000000000;
  if (dVar11 * __real_3fe0000000000000 <= local_3d8) {
    local_2a8._0_8_ = local_3d8;
  }
  if (0 < (pFVar21->Decomposition).Array.ArrayNum) {
    do {
      uVar16 = local_404;
      uVar19 = 0;
      if ((int)local_404 < local_3f8[0]) {
        uVar19 = ~local_404 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar18 = (longlong)(int)uVar16;
      bVar14 = (longlong)local_3f0._8_8_ < 0;
      local_350._s_0.X = (double)*(undefined8 *)(local_400.Data + lVar18 * 0x30);
      local_350._s_0.Y = (double)*(undefined8 *)(local_400.Data + lVar18 * 0x30 + 8);
      local_350._s_0.Z = (double)*(undefined8 *)(local_400.Data + lVar18 * 0x30 + 0x10);
      dStack_338 = *(double *)(local_400.Data + lVar18 * 0x30 + 0x10 + 8);
      local_330 = *(double *)(local_400.Data + lVar18 * 0x30 + 0x20);
      dStack_328 = *(double *)(local_400.Data + lVar18 * 0x30 + 0x20 + 8);
      local_3f0._8_8_ = local_3f0._8_8_ & 0xffffffff00000000;
      if (bVar14) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_3f0.AllocatorInstance,0,&local_3f0.ArrayMax);
      }
      FSparseDynamicOctree3::RangeQuery
                ((FSparseDynamicOctree3 *)local_2a8,(TAxisAlignedBox3<double> *)&local_350._s_0,
                 &local_3f0);
      iVar15 = local_3f0.ArrayNum;
      pFVar3 = local_3f0.AllocatorInstance.Data + (longlong)local_3f0.ArrayNum * 4;
      FVar22.Data = local_3f0.AllocatorInstance.Data;
      while( true ) {
        if (local_3f0.ArrayNum != iVar15) {
          local_408[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_408);
        }
        if (FVar22.Data == pFVar3) break;
        local_3e0 = *(uint *)FVar22.Data;
        lVar18 = (longlong)(int)local_3e0;
        uVar16 = 0;
        if ((int)local_3e0 < local_3f8[0]) {
          uVar16 = ~local_3e0 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_2c8 = *(double *)(local_400.Data + lVar18 * 0x30 + 0x10);
        dStack_2c0 = *(double *)(local_400.Data + lVar18 * 0x30 + 0x10 + 8);
        local_2d8 = *(double *)(local_400.Data + lVar18 * 0x30);
        dStack_2d0 = *(double *)(local_400.Data + lVar18 * 0x30 + 8);
        local_2b8 = *(double *)(local_400.Data + lVar18 * 0x30 + 0x20);
        dStack_2b0 = *(double *)(local_400.Data + lVar18 * 0x30 + 0x20 + 8);
        if ((((local_350._s_0.X < dStack_2c0) && (local_2d8 < dStack_338)) &&
            (local_350._s_0.Y < local_2b8)) &&
           (((dStack_2d0 < local_330 && (local_350._s_0.Z < dStack_2b0)) && (local_2c8 < dStack_328)
            ))) {
          local_3c0 = local_3e0;
          uStack_3bc = local_404;
          iVar17 = (this->Proximities).ArrayNum;
          if (iVar17 == *piVar25) {
            iVar17 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&pTVar2->AllocatorInstance,piVar25);
          }
          pFVar4 = (pTVar2->AllocatorInstance).Data;
          (this->Proximities).ArrayNum = iVar17 + 1;
          lVar18 = (longlong)iVar17 * 0x38;
          *(ulonglong *)(pFVar4 + lVar18) = CONCAT44(uStack_3bc,local_3c0);
          *(undefined8 *)(pFVar4 + lVar18 + 8) = local_300;
          *(undefined8 *)(pFVar4 + lVar18 + 8 + 8) = uStack_2f8;
          *(undefined8 *)(pFVar4 + lVar18 + 0x30) = 0x7fefffffffffffff;
          *(undefined8 *)(pFVar4 + lVar18 + 0x18) = local_2f0;
          *(undefined8 *)(pFVar4 + lVar18 + 0x18 + 8) = uStack_2e8;
          *(undefined2 *)(pFVar4 + lVar18 + 0x28) = 0x100;
          local_320 = &local_3e0;
          local_318 = &local_3dc;
          local_3dc = iVar17;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                      *)this_00,(TPairInitializer<int_const_&,int_const_&> *)local_3b8,
                     (bool *)&local_320);
          local_310 = &local_404;
          local_308 = &local_3dc;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                      *)this_00,(TPairInitializer<int_const_&,int_const_&> *)(local_3b8 + 4),
                     (bool *)&local_310);
        }
        FVar22.Data = FVar22.Data + 4;
      }
      lVar18 = (longlong)(int)local_404;
      uVar16 = 0;
      if ((int)local_404 < local_3f8[0]) {
        uVar16 = ~local_404 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FSparseDynamicOctree3::InsertObject
                ((FSparseDynamicOctree3 *)local_2a8,local_404,
                 (TAxisAlignedBox3<double> *)(local_400.Data + lVar18 * 0x30));
      local_404 = local_404 + 1;
    } while ((int)local_404 < (local_3d0->Decomposition).Array.ArrayNum);
  }
  if (local_3f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f0.AllocatorInstance.Data);
  }
  TSparseGrid3<unsigned_int>::FreeAll((TSparseGrid3<unsigned_int> *)local_140);
  local_f8 = 0;
  if ((void *)local_140._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_140._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_140);
  if ((ForElementType<unsigned_int>)local_2a8._336_8_ != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2a8._336_8_);
  }
  TDynamicVector<unsigned_int,512>::~TDynamicVector<unsigned_int,512>
            ((TDynamicVector<unsigned_int,512> *)(local_2a8 + 0x128));
  local_2a8._288_4_ = 0;
  if ((ForElementType<FSetElementId>)local_2a8._280_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2a8._280_8_);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_2a8 + 0xd8));
  FSmallListSet::~FSmallListSet((FSmallListSet *)(local_2a8 + 0x68));
  TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::
  ~TDynamicVector<UE::Geometry::FSparseOctreeCell,512>
            ((TDynamicVector<UE::Geometry::FSparseOctreeCell,512> *)(local_2a8 + 0x50));
  TDynamicVector<int,512>::Empty((TDynamicVector<int,512> *)(local_2a8 + 0x30),0);
  if ((FScriptContainerElement *)local_2a8._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2a8._56_8_);
  }
  TDynamicVector<unsigned_short,512>::Empty
            ((TDynamicVector<unsigned_short,512> *)(local_2a8 + 0x18),0);
  if ((FScriptContainerElement *)local_2a8._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2a8._32_8_);
  }
  if (local_400.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.Data);
  }
  return;
}

// MergeBest @ 1433bd970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
UE::Geometry::FConvexDecomposition3::MergeBest(FConvexDecomposition3 *this,FMergeSettings *param_1)

{
  void **ppvVar1;
  TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
  *pTVar2;
  double dVar3;
  undefined4 uVar4;
  FConvexPart *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FIndex2i_u_0 FVar8;
  FDynamicMesh3 *this_00;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int *piVar14;
  FSphereCovering *pFVar15;
  undefined1 auVar16 [16];
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  int iVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  TTuple<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_>
  *pTVar25;
  TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>
  *pTVar26;
  undefined8 uVar27;
  byte bVar28;
  longlong *plVar29;
  FIndex2i_u_0 *pFVar30;
  longlong *plVar31;
  int iVar32;
  longlong lVar33;
  undefined1 *puVar34;
  ForElementType<FSetElementId> FVar35;
  uint uVar36;
  TPlane3<double> *pTVar37;
  ForAnyElementType FVar38;
  longlong lVar39;
  uint uVar40;
  void **ppvVar41;
  undefined8 *puVar42;
  TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>
  **ppTVar43;
  uint *puVar44;
  int iVar45;
  uint uVar46;
  ulonglong uVar47;
  FIndex2i_u_0 FVar48;
  uint uVar49;
  uint uVar50;
  ulonglong uVar51;
  FMergeSettings *pFVar52;
  double dVar53;
  undefined1 auStackY_658 [32];
  uint local_5f4;
  uint local_5f0 [2];
  FIndex2i_u_0 local_5e8;
  char local_5e0;
  char local_5df [3];
  uint local_5dc;
  FMergeSettings *local_5d8;
  uint local_5d0;
  uint local_5cc;
  ForAnyElementType local_5c8;
  undefined8 local_5c0;
  undefined1 local_5b8;
  undefined1 local_5b7;
  undefined1 local_5b6;
  undefined1 local_5b5;
  char local_5b4;
  ulonglong local_5b0;
  uint local_5a8;
  int local_5a4;
  int local_5a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_598;
  ForAnyElementType local_588;
  undefined8 local_580;
  undefined1 local_578 [4];
  int local_574;
  int local_570;
  uint local_56c;
  int local_568 [2];
  undefined8 local_560;
  FScriptContainerElement *local_558;
  undefined8 uStack_550;
  TBitArray<FDefaultBitArrayAllocator> *local_548;
  undefined4 uStack_540;
  uint uStack_53c;
  int local_538;
  undefined4 uStack_534;
  int iStack_530;
  undefined4 uStack_52c;
  TPairInitializer<int_const_&,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_&&>
  local_528;
  TPairInitializer<int_const_&,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_&&>
  local_518;
  uint local_508 [2];
  uint local_500 [2];
  uint local_4f8 [2];
  uint local_4f0 [2];
  uint local_4e8 [2];
  uint local_4e0 [2];
  undefined4 local_4d8 [2];
  undefined8 local_4d0;
  undefined4 local_4c8 [2];
  undefined8 local_4c0;
  FSphereCovering *local_4b8;
  double local_4b0;
  FIndex2i_u_0 local_4a8;
  FIndex2i_u_0 local_4a0;
  FIndex2i_u_0 local_498;
  uint local_490;
  uint uStack_48c;
  FIndex2i_u_0 local_488;
  double *local_480;
  int local_478;
  undefined1 local_474 [8];
  int local_46c;
  undefined1 local_468 [16];
  TTransform<double> *local_458;
  TTransform<double> *local_450;
  TTransform<double> *local_448;
  FIndex2i_u_0 local_440;
  TPairInitializer<int_const_&,int_const_&> local_438;
  undefined1 local_428 [16];
  undefined1 local_410 [16];
  FScriptContainerElement *local_3f8;
  int *piStack_3f0;
  undefined8 local_3e8;
  FScriptContainerElement *local_3e0;
  int *piStack_3d8;
  TBitArray<FDefaultBitArrayAllocator> *local_3d0;
  TPairInitializer<int_const_&,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_&&>
  local_3c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3b8;
  undefined8 uStack_398;
  FScriptContainerElement *local_390;
  int *piStack_388;
  TBitArray<FDefaultBitArrayAllocator> *local_380;
  uint *local_378;
  int *local_370;
  uint *local_368;
  int *local_360;
  uint *local_358;
  FConvexPart *local_350;
  uint *local_348;
  FConvexPart *local_340;
  code *local_338;
  char **local_330;
  code *local_328;
  char **local_320;
  undefined8 *local_318;
  uint *local_310;
  longlong local_308;
  uint *local_300;
  uint *local_2f8;
  FIndex2i_u_0 *local_2f0;
  char *local_2e8;
  FSphereCovering *local_2e0;
  undefined8 local_2d8;
  TTransform<double> **local_2d0;
  char *local_2c8;
  FSphereCovering *local_2c0;
  undefined8 local_2b8;
  TTransform<double> **local_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_290 [16];
  undefined1 local_278 [32];
  uint local_258;
  uint uStack_254;
  int iStack_250;
  int iStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_1e4;
  TSet<TTuple<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,0>,FDefaultSetAllocator>
  local_1d8;
  undefined1 local_188 [32];
  uint *local_168;
  uint local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  ForElementType<FSetElementId> local_148;
  int local_140;
  void *local_138 [4];
  void *local_118 [4];
  void *local_f8;
  undefined8 local_d8 [2];
  undefined1 local_c8 [16];
  char local_b8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_658;
  bVar19 = param_1->bAllowCompact;
  dVar3 = param_1->MinThicknessTolerance;
  iVar22 = param_1->TargetNumParts;
  if (param_1->TargetNumParts < 1) {
    iVar22 = 1;
  }
  local_5b4 = param_1->bRequireHullTriangles;
  local_528.Key._4_4_ = param_1->MaxOutputHulls;
  local_4b8 = param_1->OptionalNegativeSpace;
  local_458 = param_1->OptionalTransformIntoNegativeSpace;
  local_5a0 = iVar22;
  if ((0 < local_528.Key._4_4_) && (local_5a0 = local_528.Key._4_4_, iVar22 < local_528.Key._4_4_))
  {
    local_5a0 = iVar22;
  }
  local_5e8 = (FIndex2i_u_0)this;
  local_5d8 = param_1;
  dVar10 = ConvertDistanceToleranceToLocalSpace(this,param_1->ErrorTolerance);
  dVar10 = dVar10 * dVar10 * dVar10;
  dVar3 = ConvertDistanceToleranceToLocalSpace(this,dVar3);
  dVar11 = ConvertDistanceToleranceToLocalSpace(this,this->ThickenAfterHullFailure);
  uVar23 = 0;
  bVar18 = false;
  local_574 = 0;
  local_1d8.Elements._0_8_ = 0;
  local_1d8.Elements._8_8_ = 0;
  local_1d8.Elements._32_8_ = 0;
  local_1d8.Elements._40_4_ = 0;
  local_1d8.Elements._44_4_ = 0x80;
  local_1d8.Elements._48_4_ = 0xffffffff;
  local_1d8.Elements._52_4_ = 0;
  local_1d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1d8.HashSize = 0;
  local_5cc = 0;
  FVar48 = (FIndex2i_u_0)this;
  local_4b0 = dVar3;
  if ((0.0 < dVar3) && (0 < (this->Decomposition).Array.ArrayNum)) {
    pTVar2 = &this->Decomposition;
    uVar47 = uVar23;
    uVar51 = uVar23;
    do {
      uVar36 = (uint)uVar23;
      uVar49 = 0;
      if ((int)uVar36 < (this->Decomposition).Array.ArrayNum) {
        uVar49 = ~uVar36 >> 0x1f;
      }
      if ((uVar49 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        iVar22 = (*pcVar9)();
        return iVar22;
      }
      pFVar5 = *(FConvexPart **)((pTVar2->Array).AllocatorInstance.Data + uVar51);
      if (pFVar5->bIsCompact != false) {
        bVar18 = true;
      }
      bVar17 = `UE::Geometry::FConvexDecomposition3::MergeBest'::__l2::<lambda_1>::operator()
                         (&local_4b0,pFVar5);
      uVar23 = (ulonglong)(uVar36 + 1);
      pFVar5->bMustMerge = bVar17;
      uVar49 = (int)uVar47 + (uint)bVar17;
      uVar47 = (ulonglong)uVar49;
      iVar22 = *(int *)((longlong)FVar48 + 0x58);
      uVar51 = uVar51 + 8;
      FVar48 = local_5e8;
      local_5a4 = iVar22;
    } while ((int)(uVar36 + 1) < iVar22);
    local_5cc = uVar49;
    if ((0 < (int)uVar49) && (!bVar18)) {
      local_5c8.Data = (FScriptContainerElement *)0x0;
      local_5c0 = 0;
      local_5dc = 0;
      if (0 < iVar22) {
        do {
          uVar49 = local_5dc;
          uVar36 = 0;
          if ((int)local_5dc < (this->Decomposition).Array.ArrayNum) {
            uVar36 = ~local_5dc >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar9 = (code *)swi(3);
            iVar22 = (*pcVar9)();
            return iVar22;
          }
          FVar48 = local_5e8;
          lVar33 = *(longlong *)((pTVar2->Array).AllocatorInstance.Data + (longlong)(int)uVar49 * 8)
          ;
          if (*(char *)(lVar33 + 0x2ca) != '\0') {
            dVar13 = *(double *)(lVar33 + 0x2c0) - *(double *)(lVar33 + 0x2a8);
            dVar12 = *(double *)(lVar33 + 0x2b8) - *(double *)(lVar33 + 0x2a0);
            dVar53 = *(double *)(lVar33 + 0x2b0) - *(double *)(lVar33 + 0x298);
            if (dVar13 <= 0.0) {
              dVar13 = 0.0;
            }
            if (dVar12 <= 0.0) {
              dVar12 = 0.0;
            }
            if (dVar53 <= 0.0) {
              dVar53 = 0.0;
            }
            if (dVar13 <= dVar12) {
              dVar13 = dVar12;
            }
            if (dVar13 <= dVar53) {
              dVar13 = dVar53;
            }
            if (dVar3 < dVar13) {
              local_588.Data = (FScriptContainerElement *)0x0;
              local_580 = 0;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
              TBaseKeyIterator<1>::TBaseKeyIterator<1>
                        ((TBaseKeyIterator<1> *)local_290,
                         (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                          *)((longlong)local_5e8 + 0xc0),local_5dc);
              local_410._12_4_ = local_290._12_4_;
              auVar16 = local_290;
              uVar23 = local_5c0;
              while (local_410 = auVar16, bVar18 = local_410._12_4_ != -1, bVar18) {
                lVar33 = (longlong)(int)local_410._12_4_;
                uVar49 = *(uint *)(*(longlong *)
                                    (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                     *)local_410._0_8_ + 4 + lVar33 * 0x10);
                uVar36 = 0;
                if ((int)uVar49 < *(int *)((longlong)FVar48 + 0xb8)) {
                  uVar36 = ~uVar49 >> 0x1f;
                }
                local_5c0 = uVar23;
                if ((uVar36 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar9 = (code *)swi(3);
                  iVar22 = (*pcVar9)();
                  return iVar22;
                }
                pFVar6 = (((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                            *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data;
                uVar36 = *(uint *)(pFVar6 + (longlong)(int)uVar49 * 0x38);
                uVar49 = *(uint *)(pFVar6 + (longlong)(int)uVar49 * 0x38 + 4);
                uVar46 = uVar49;
                if ((uVar36 != local_5dc) && (uVar46 = 0xffffffff, uVar49 == local_5dc)) {
                  uVar46 = uVar36;
                }
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
                TBaseKeyIterator<1>::TBaseKeyIterator<1>
                          ((TBaseKeyIterator<1> *)local_2a8,
                           (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                            *)((longlong)FVar48 + 0xc0),uVar46);
                local_428._12_4_ = local_2a8._12_4_;
                auVar16 = local_2a8;
                while (local_428 = auVar16, bVar18 = local_428._12_4_ != -1, bVar18) {
                  lVar33 = (longlong)(int)local_428._12_4_;
                  uVar49 = *(uint *)(*(longlong *)
                                      (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                       *)local_428._0_8_ + 4 + lVar33 * 0x10);
                  uVar36 = 0;
                  if ((int)uVar49 < *(int *)((longlong)FVar48 + 0xb8)) {
                    uVar36 = ~uVar49 >> 0x1f;
                  }
                  if ((uVar36 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar9 = (code *)swi(3);
                    iVar22 = (*pcVar9)();
                    return iVar22;
                  }
                  pFVar6 = (((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                              *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data;
                  lVar33 = (longlong)(int)uVar49 * 0x38;
                  if (((pFVar6[lVar33 + 0x28] != (FScriptContainerElement)0x0) &&
                      (*(uint *)(pFVar6 + lVar33) != local_5dc)) &&
                     (*(uint *)(pFVar6 + lVar33 + 4) != local_5dc)) {
                    pTVar37 = (TPlane3<double> *)(pFVar6 + lVar33 + 8);
                    if (((local_588.Data <= pTVar37) &&
                        (pTVar37 < (TPlane3<double> *)
                                   (local_588.Data + (longlong)local_580._4_4_ * 0x20))) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar18)) {
                      pcVar9 = (code *)swi(3);
                      iVar22 = (*pcVar9)();
                      return iVar22;
                    }
                    if ((uint)local_580 == local_580._4_4_) {
                      iVar22 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x820,&local_588,(int *)((longlong)&local_580 + 4));
                      local_580 = CONCAT44(local_580._4_4_,iVar22);
                    }
                    lVar33 = (longlong)(int)(uint)local_580;
                    local_580 = CONCAT44(local_580._4_4_,(uint)local_580 + 1);
                    dVar12 = (pTVar37->Normal).field0_0x0._s_0.Y;
                    *(double *)&local_588.Data[lVar33 * 0x20].field_0x0 =
                         (pTVar37->Normal).field0_0x0._s_0.X;
                    *(double *)(local_588.Data + lVar33 * 0x20 + 8) = dVar12;
                    *(undefined1 (*) [16])(local_588.Data + lVar33 * 0x20 + 0x10) =
                         *(undefined1 (*) [16])((longlong)&(pTVar37->Normal).field0_0x0 + 0x10);
                  }
                  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                  ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)local_428);
                  auVar16 = local_428;
                }
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
                TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)local_410);
                auVar16 = local_410;
                uVar23 = local_5c0;
              }
              local_5c0 = uVar23 & 0xffffffff00000000;
              iVar22 = 0;
              if (((longlong)uVar23 < 0) && (iVar22 = 0, (int)(uVar23 >> 0x20) != 0)) {
                Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,&local_5c8,0,(int *)((longlong)&local_5c0 + 4));
                iVar22 = (int)local_5c0;
              }
              if ((local_5c8.Data <= (FScriptContainerElement *)&local_5dc) &&
                 ((FScriptContainerElement *)&local_5dc <
                  local_5c8.Data + (longlong)local_5c0._4_4_ * 4)) {
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar18) {
                  pcVar9 = (code *)swi(3);
                  iVar22 = (*pcVar9)();
                  return iVar22;
                }
                iVar22 = (int)local_5c0;
              }
              if (iVar22 == local_5c0._4_4_) {
                iVar22 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_5c8,(int *)((longlong)&local_5c0 + 4));
              }
              local_5c0 = CONCAT44(local_5c0._4_4_,iVar22 + 1);
              *(uint *)(local_5c8.Data + (longlong)iVar22 * 4) = local_5dc;
              uVar23 = (ulonglong)(int)(uint)local_580;
              pTVar37 = (TPlane3<double> *)(local_588.Data + uVar23 * 0x20);
              local_5cc = (uint)local_580;
              FVar38.Data = local_588.Data;
              local_4d0 = pTVar37;
              while( true ) {
                uVar47 = 0;
                if ((uint)local_580 != (int)uVar23) {
                  local_5b8 = 0;
                  `TCheckedPointerIterator<UE::Geometry::TPlane3<double>,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_5b8);
                }
                if ((TPlane3<double> *)FVar38.Data == pTVar37) break;
                local_5b0 = (ulonglong)(int)local_5c0;
                uVar23 = uVar47;
                if (0 < (longlong)local_5b0) {
                  do {
                    uVar36 = (uint)uVar23;
                    uVar49 = 0;
                    if ((int)uVar36 < (int)local_5c0) {
                      uVar49 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar49 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar18)) {
                      pcVar9 = (code *)swi(3);
                      iVar22 = (*pcVar9)();
                      return iVar22;
                    }
                    uVar49 = *(uint *)(local_5c8.Data + uVar47 * 4);
                    uVar46 = 0;
                    if ((int)uVar49 < (this->Decomposition).Array.ArrayNum) {
                      uVar46 = ~uVar49 >> 0x1f;
                    }
                    if ((uVar46 == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar18)) {
                      pcVar9 = (code *)swi(3);
                      iVar22 = (*pcVar9)();
                      return iVar22;
                    }
                    pFVar5 = *(FConvexPart **)
                              ((pTVar2->Array).AllocatorInstance.Data + (longlong)(int)uVar49 * 8);
                    dVar13 = (pFVar5->Bounds).Max.field0_0x0._s_0.Z -
                             (pFVar5->Bounds).Min.field0_0x0._s_0.Z;
                    dVar12 = (pFVar5->Bounds).Max.field0_0x0._s_0.Y -
                             (pFVar5->Bounds).Min.field0_0x0._s_0.Y;
                    dVar53 = (pFVar5->Bounds).Max.field0_0x0._s_0.X -
                             (pFVar5->Bounds).Min.field0_0x0._s_0.X;
                    if (dVar13 <= 0.0) {
                      dVar13 = 0.0;
                    }
                    if (dVar12 <= 0.0) {
                      dVar12 = 0.0;
                    }
                    if (dVar53 <= 0.0) {
                      dVar53 = 0.0;
                    }
                    if (dVar13 <= dVar12) {
                      dVar13 = dVar12;
                    }
                    if (dVar13 <= dVar53) {
                      dVar13 = dVar53;
                    }
                    if (dVar3 <= dVar13) {
                      Geometry::`anonymous_namespace'::FPartialCutResult::FPartialCutResult
                                (local_138,pFVar5,(TPlane3<double> *)FVar38.Data,
                                 *(double *)((longlong)local_5e8 + 0x10),
                                 *(bool *)((longlong)local_5e8 + 0x3d),dVar11);
                      if (local_b8 == '\0') {
                        puVar34 = local_c8;
                        lVar33 = 2;
                        do {
                          puVar42 = (undefined8 *)(puVar34 + -0x10);
                          puVar34 = puVar34 + -0x10;
                          lVar33 = lVar33 + -1;
                          if ((void *)*puVar42 != (void *)0x0) {
                            FMemory::Free((void *)*puVar42);
                          }
                        } while (lVar33 != 0);
                        if (local_f8 != (void *)0x0) {
                          FMemory::Free(local_f8);
                        }
                        if (local_118[2] != (void *)0x0) {
                          FMemory::Free(local_118[2]);
                        }
                        ppvVar41 = local_118 + 2;
                        lVar33 = 2;
                        do {
                          ppvVar1 = ppvVar41 + -2;
                          ppvVar41 = ppvVar41 + -2;
                          lVar33 = lVar33 + -1;
                          if (*ppvVar1 != (void *)0x0) {
                            FMemory::Free(*ppvVar1);
                          }
                        } while (lVar33 != 0);
                      }
                      else {
                        dVar12 = pFVar5->HullVolume;
                        local_570 = -1;
                        uVar46 = *(int *)((longlong)local_5e8 + 0x58);
                        Geometry::`anonymous_namespace'::FPartialCutResult::ApplyToGeo
                                  (local_138,pTVar2,uVar49,(TPlane3<double> *)FVar38.Data,&local_570
                                   ,*(double *)((longlong)local_5e8 + 0x10),
                                   *(double *)((longlong)local_5e8 + 8),
                                   (FSphereCovering *)((longlong)local_5e8 + 0x110),
                                   *(bool *)((longlong)local_5e8 + 0x3d),
                                   *(bool *)((longlong)local_5e8 + 0x3c),dVar11);
                        FVar48 = local_5e8;
                        local_278._0_8_ =
                             (((TPlane3<double> *)FVar38.Data)->Normal).field0_0x0._s_0.X;
                        local_278._8_8_ =
                             (((TPlane3<double> *)FVar38.Data)->Normal).field0_0x0._s_0.Y;
                        local_278._16_16_ =
                             *(undefined1 (*) [16])
                              ((longlong)&(((TPlane3<double> *)FVar38.Data)->Normal).field0_0x0 +
                              0x10);
                        UpdateProximitiesAfterSplit
                                  ((FConvexDecomposition3 *)local_5e8,uVar49,uVar46,
                                   (TPlane3<double> *)local_278,local_570,dVar12);
                        pFVar5->bMustMerge = true;
                        local_5a8 = uVar46;
                        if ((int)uVar46 < *(int *)((longlong)FVar48 + 0x58)) {
                          do {
                            if (((local_5c8.Data <= (FScriptContainerElement *)&local_5a8) &&
                                ((FScriptContainerElement *)&local_5a8 <
                                 local_5c8.Data + (longlong)local_5c0._4_4_ * 4)) &&
                               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar18)) {
                              pcVar9 = (code *)swi(3);
                              iVar22 = (*pcVar9)();
                              return iVar22;
                            }
                            iVar22 = (int)local_5c0;
                            if ((int)local_5c0 == local_5c0._4_4_) {
                              iVar22 = Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                 (0x404,&local_5c8,(int *)((longlong)&local_5c0 + 4)
                                                 );
                            }
                            local_5c0 = CONCAT44(local_5c0._4_4_,iVar22 + 1);
                            *(uint *)(local_5c8.Data + (longlong)iVar22 * 4) = local_5a8;
                            lVar33 = (longlong)(int)local_5a8;
                            uVar49 = 0;
                            if ((int)local_5a8 < (this->Decomposition).Array.ArrayNum) {
                              uVar49 = ~local_5a8 >> 0x1f;
                            }
                            if ((uVar49 == 0) &&
                               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar18)) {
                              pcVar9 = (code *)swi(3);
                              iVar22 = (*pcVar9)();
                              return iVar22;
                            }
                            *(undefined1 *)
                             (*(longlong *)((pTVar2->Array).AllocatorInstance.Data + lVar33 * 8) +
                             0x2ca) = 1;
                            local_5a8 = local_5a8 + 1;
                          } while ((int)local_5a8 < *(int *)((longlong)FVar48 + 0x58));
                        }
                        puVar34 = local_c8;
                        lVar33 = 2;
                        do {
                          puVar42 = (undefined8 *)(puVar34 + -0x10);
                          puVar34 = puVar34 + -0x10;
                          lVar33 = lVar33 + -1;
                          if ((void *)*puVar42 != (void *)0x0) {
                            FMemory::Free((void *)*puVar42);
                          }
                        } while (lVar33 != 0);
                        if (local_f8 != (void *)0x0) {
                          FMemory::Free(local_f8);
                        }
                        if (local_118[2] != (void *)0x0) {
                          FMemory::Free(local_118[2]);
                        }
                        ppvVar41 = local_118 + 2;
                        lVar33 = 2;
                        do {
                          ppvVar1 = ppvVar41 + -2;
                          ppvVar41 = ppvVar41 + -2;
                          lVar33 = lVar33 + -1;
                          if (*ppvVar1 != (void *)0x0) {
                            FMemory::Free(*ppvVar1);
                          }
                        } while (lVar33 != 0);
                      }
                      if (local_138[0] != (void *)0x0) {
                        FMemory::Free(local_138[0]);
                      }
                    }
                    uVar23 = (ulonglong)(uVar36 + 1);
                    uVar47 = uVar47 + 1;
                    pTVar37 = local_4d0;
                  } while ((longlong)uVar47 < (longlong)local_5b0);
                }
                uVar23 = (ulonglong)local_5cc;
                FVar38.Data = FVar38.Data + 0x20;
              }
              iVar22 = local_5a4;
              if ((TPlane3<double> *)local_588.Data != (TPlane3<double> *)0x0) {
                FMemory::Free(local_588.Data);
                iVar22 = local_5a4;
              }
            }
          }
          local_5dc = local_5dc + 1;
        } while ((int)local_5dc < iVar22);
      }
      FVar48 = local_5e8;
      uVar51 = 0;
      local_5cc = 0;
      uVar23 = uVar51;
      uVar47 = uVar51;
      uVar49 = local_5cc;
      if (0 < *(int *)((longlong)local_5e8 + 0x58)) {
        do {
          uVar36 = (uint)uVar51;
          uVar49 = 0;
          if ((int)uVar36 < (this->Decomposition).Array.ArrayNum) {
            uVar49 = ~uVar36 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar9 = (code *)swi(3);
            iVar22 = (*pcVar9)();
            return iVar22;
          }
          uVar51 = (ulonglong)(uVar36 + 1);
          pFVar6 = (pTVar2->Array).AllocatorInstance.Data + uVar23;
          uVar23 = uVar23 + 8;
          uVar49 = (int)uVar47 + (uint)*(byte *)(*(longlong *)pFVar6 + 0x2ca);
          uVar47 = (ulonglong)uVar49;
        } while ((int)(uVar36 + 1) < *(int *)((longlong)FVar48 + 0x58));
      }
      local_5cc = uVar49;
      if (local_5c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5c8.Data);
      }
    }
  }
  FVar38.Data = local_3f8;
  if (bVar19 != false) {
    FVar38.Data = (((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                     *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data;
    piVar14 = (int *)((longlong)FVar48 + 0x58);
    iVar22 = *piVar14;
    local_548 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_548._4_4_,iVar22);
    pFVar6 = FVar38.Data + (longlong)iVar22 * 8;
    local_3e8 = local_548;
    local_558 = FVar38.Data;
    uStack_550 = piVar14;
    local_3f8 = FVar38.Data;
    piStack_3f0 = piVar14;
    while( true ) {
      if (*piVar14 != iVar22) {
        local_5b7 = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_5b7);
      }
      if (FVar38.Data == pFVar6) break;
      FConvexPart::Compact(*(FConvexPart **)FVar38.Data);
      FVar38.Data = FVar38.Data + 8;
    }
  }
  local_3f8 = FVar38.Data;
  dVar3 = __real_ffefffffffffffff;
  iVar22 = *(int *)((longlong)local_5e8 + 0x58);
  piVar14 = (int *)((longlong)local_5e8 + 0x58);
  FVar38.Data = (((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                   *)((longlong)local_5e8 + 0x50))->Array).AllocatorInstance.Data;
  local_548 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_548._4_4_,iVar22);
  pFVar6 = FVar38.Data + (longlong)iVar22 * 8;
  local_3d0 = local_548;
  local_558 = FVar38.Data;
  uStack_550 = piVar14;
  local_3e0 = FVar38.Data;
  piStack_3d8 = piVar14;
  while( true ) {
    if (*piVar14 != iVar22) {
      local_5b6 = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_5b6);
    }
    pFVar52 = local_5d8;
    FVar48 = local_5e8;
    if (FVar38.Data == pFVar6) break;
    lVar33 = *(longlong *)&(FVar38.Data)->field_0x0;
    if (dVar3 == *(double *)(lVar33 + 0x278)) {
      *(undefined8 *)(lVar33 + 0x278) = *(undefined8 *)(lVar33 + 0x268);
    }
    FVar38.Data = FVar38.Data + 8;
  }
  uVar23 = 0;
  local_598.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_598.ArrayNum = 0;
  local_598.ArrayMax = 0;
  local_3e0 = FVar38.Data;
  if (*(longlong *)&local_5d8->MergeCallback != 0) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_598,*(int *)((longlong)local_5e8 + 0x58),Default);
    uVar47 = uVar23;
    if (0 < local_598.ArrayNum) {
      do {
        uVar36 = (uint)uVar23;
        uVar49 = 0;
        if ((int)uVar36 < local_598.ArrayNum) {
          uVar49 = ~uVar36 >> 0x1f;
        }
        if ((uVar49 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar9 = (code *)swi(3);
          iVar22 = (*pcVar9)();
          return iVar22;
        }
        *(uint *)(local_598.AllocatorInstance.Data + uVar47) = uVar36;
        uVar23 = (ulonglong)(uVar36 + 1);
        uVar47 = uVar47 + 4;
      } while ((int)(uVar36 + 1) < local_598.ArrayNum);
    }
  }
  dVar11 = __real_7fefffffffffffff;
  local_480 = &local_4b0;
  local_488 = FVar48;
  while (((0 < (int)local_5cc || (0.0 < dVar10)) || (local_5a0 < *(int *)((longlong)FVar48 + 0x58)))
        ) {
    if (((dVar10 != 0.0) && (pFVar52->bErrorToleranceOverridesNumParts != false)) ||
       (bVar19 = true, local_5a0 < *(int *)((longlong)FVar48 + 0x58))) {
      bVar19 = false;
    }
    uVar23 = 0xffffffff;
    local_5b0 = CONCAT44(local_5b0._4_4_,0xffffffff);
    local_5a4 = 0;
    local_5f4 = 0;
    dVar12 = dVar11;
    if (*(int *)((longlong)FVar48 + 0xb8) < 1) break;
    do {
      uVar49 = local_5f4;
      uVar46 = 0;
      uVar36 = uVar46;
      if ((int)local_5f4 < *(int *)((longlong)FVar48 + 0xb8)) {
        uVar36 = ~local_5f4 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar9 = (code *)swi(3);
        iVar22 = (*pcVar9)();
        return iVar22;
      }
      dVar13 = dVar12;
      if ((((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_> *)
           ((longlong)FVar48 + 0xb0))->AllocatorInstance).Data[(longlong)(int)uVar49 * 0x38 + 0x29]
          == (FScriptContainerElement)0x0) goto LAB_1433bf50e;
      local_5a4 = local_5a4 + 1;
      if (((*(int *)((longlong)FVar48 + 0x48) < 0) ||
          (local_5a4 <= *(int *)((longlong)FVar48 + 0x48))) ||
         (uVar49 = (uint)uVar23, uVar49 == 0xffffffff)) {
LAB_1433be918:
        lVar33 = (longlong)(int)local_5f4;
        uVar49 = uVar46;
        if ((int)local_5f4 < *(int *)((longlong)FVar48 + 0xb8)) {
          uVar49 = ~local_5f4 >> 0x1f;
        }
        if ((uVar49 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          iVar22 = (*pcVar9)();
          return iVar22;
        }
        uVar49 = *(uint *)((((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                              *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data + lVar33 * 0x38)
        ;
        uVar36 = uVar46;
        if ((int)uVar49 < *(int *)((longlong)FVar48 + 0x58)) {
          uVar36 = ~uVar49 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          iVar22 = (*pcVar9)();
          return iVar22;
        }
        if (*(char *)(*(longlong *)
                       ((((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                           *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data +
                       (longlong)(int)uVar49 * 8) + 0x2ca) == '\0') {
          lVar33 = (longlong)(int)local_5f4;
          uVar49 = uVar46;
          if ((int)local_5f4 < *(int *)((longlong)FVar48 + 0xb8)) {
            uVar49 = ~local_5f4 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar9 = (code *)swi(3);
            iVar22 = (*pcVar9)();
            return iVar22;
          }
          uVar49 = *(uint *)((((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                                *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data +
                            lVar33 * 0x38 + 4);
          uVar36 = uVar46;
          if ((int)uVar49 < *(int *)((longlong)FVar48 + 0x58)) {
            uVar36 = ~uVar49 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar9 = (code *)swi(3);
            iVar22 = (*pcVar9)();
            return iVar22;
          }
          if (*(char *)(*(longlong *)
                         ((((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                             *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data +
                         (longlong)(int)uVar49 * 8) + 0x2ca) != '\0') goto LAB_1433bea8e;
          bVar18 = false;
        }
        else {
LAB_1433bea8e:
          bVar18 = true;
        }
        lVar33 = (longlong)(int)local_5f4;
        uVar49 = uVar46;
        if ((int)local_5f4 < *(int *)((longlong)FVar48 + 0xb8)) {
          uVar49 = ~local_5f4 >> 0x1f;
        }
        if ((uVar49 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          iVar22 = (*pcVar9)();
          return iVar22;
        }
        uVar49 = *(uint *)((((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                              *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data + lVar33 * 0x38)
        ;
        uVar36 = uVar46;
        if ((int)uVar49 < *(int *)((longlong)FVar48 + 0x58)) {
          uVar36 = ~uVar49 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          iVar22 = (*pcVar9)();
          return iVar22;
        }
        if (*(char *)(*(longlong *)
                       ((((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                           *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data +
                       (longlong)(int)uVar49 * 8) + 0x2ca) == '\0') {
LAB_1433bec07:
          bVar17 = false;
        }
        else {
          lVar33 = (longlong)(int)local_5f4;
          uVar49 = uVar46;
          if ((int)local_5f4 < *(int *)((longlong)FVar48 + 0xb8)) {
            uVar49 = ~local_5f4 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            iVar22 = (*pcVar9)();
            return iVar22;
          }
          uVar49 = *(uint *)((((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                                *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data +
                            lVar33 * 0x38 + 4);
          if ((int)uVar49 < *(int *)((longlong)FVar48 + 0x58)) {
            uVar46 = ~uVar49 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            iVar22 = (*pcVar9)();
            return iVar22;
          }
          if (*(char *)(*(longlong *)
                         ((((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                             *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data +
                         (longlong)(int)uVar49 * 8) + 0x2ca) == '\0') goto LAB_1433bec07;
          bVar17 = true;
        }
        if (*(longlong *)&pFVar52->CustomAllowMergeParts != 0) {
          lVar33 = (longlong)(int)local_5f4;
          uVar49 = 0;
          if ((int)local_5f4 < *(int *)((longlong)FVar48 + 0xb8)) {
            uVar49 = ~local_5f4 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            iVar22 = (*pcVar9)();
            return iVar22;
          }
          uVar49 = *(uint *)((((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                                *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data +
                            lVar33 * 0x38 + 4);
          uVar36 = 0;
          if ((int)uVar49 < *(int *)((longlong)FVar48 + 0x58)) {
            uVar36 = ~uVar49 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            iVar22 = (*pcVar9)();
            return iVar22;
          }
          lVar33 = (longlong)(int)local_5f4;
          uVar49 = 0;
          if ((int)local_5f4 < *(int *)((longlong)FVar48 + 0xb8)) {
            uVar49 = ~local_5f4 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            iVar22 = (*pcVar9)();
            return iVar22;
          }
          uVar49 = *(uint *)((((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                                *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data +
                            lVar33 * 0x38);
          uVar36 = 0;
          if ((int)uVar49 < *(int *)((longlong)FVar48 + 0x58)) {
            uVar36 = ~uVar49 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            iVar22 = (*pcVar9)();
            return iVar22;
          }
          uVar27 = *(undefined8 *)
                    ((((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                        *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data +
                    (longlong)(int)uVar49 * 8);
          Core::Private::Function::CheckCallable(*(void **)&pFVar52->CustomAllowMergeParts);
          plVar29 = *(longlong **)&(pFVar52->CustomAllowMergeParts).field_0x28;
          pcVar9 = *(code **)&pFVar52->CustomAllowMergeParts;
          if (plVar29 == (longlong *)0x0) {
            plVar29 = (longlong *)&(pFVar52->CustomAllowMergeParts).field_0x10;
          }
          uVar24 = (**(code **)(*plVar29 + 8))();
          cVar21 = (*pcVar9)(uVar24,uVar27);
          if (cVar21 == '\0') goto LAB_1433bf50b;
        }
        lVar33 = (longlong)(int)local_5f4;
        iVar22 = local_1d8.Elements._8_4_ - local_1d8.Elements._52_4_;
        uVar49 = 0;
        if ((int)local_5f4 < *(int *)((longlong)FVar48 + 0xb8)) {
          uVar49 = ~local_5f4 >> 0x1f;
        }
        if ((uVar49 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar9 = (code *)swi(3);
          iVar22 = (*pcVar9)();
          return iVar22;
        }
        iVar32 = *(int *)((longlong)FVar48 + 0xb8);
        uVar49 = ~local_5f4;
        if (dVar11 == *(double *)
                       ((((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                           *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data +
                       lVar33 * 0x38 + 0x30)) {
          uVar36 = 0;
          if ((int)local_5f4 < iVar32) {
            uVar36 = uVar49 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            iVar22 = (*pcVar9)();
            return iVar22;
          }
          local_358 = &local_5f4;
          local_350 = (FConvexPart *)
                      `UE::Geometry::FConvexDecomposition3::MergeBest'::__l2::<lambda_2>::operator()
                                (&local_488,(FProximity *)(local_468 + 8));
          TSet<TTuple<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<int_const_&,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_&&>_>
                    (&local_1d8,&local_528,(bool *)&local_358);
          uVar27 = local_1d8.Elements._0_8_;
          lVar33 = (longlong)(int)local_528.Key;
          if ((FConvexPart *)local_468._8_8_ != (FConvexPart *)0x0) {
            FConvexPart::_scalar_deleting_destructor_((FConvexPart *)local_468._8_8_,1);
          }
          lVar39 = (longlong)(int)local_5f4;
          uVar27 = *(undefined8 *)(*(longlong *)(uVar27 + 8 + lVar33 * 0x18) + 0x268);
          uVar49 = 0;
          if ((int)local_5f4 < *(int *)((longlong)FVar48 + 0xb8)) {
            uVar49 = ~local_5f4 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            iVar22 = (*pcVar9)();
            return iVar22;
          }
          *(undefined8 *)
           ((((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_> *
              )((longlong)FVar48 + 0xb0))->AllocatorInstance).Data + lVar39 * 0x38 + 0x30) = uVar27;
          iVar32 = *(int *)((longlong)FVar48 + 0xb8);
          uVar49 = ~local_5f4;
        }
        lVar33 = (longlong)(int)local_5f4;
        uVar36 = 0;
        if ((int)local_5f4 < iVar32) {
          uVar36 = uVar49 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar9 = (code *)swi(3);
          iVar22 = (*pcVar9)();
          return iVar22;
        }
        pFVar6 = (((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                    *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data;
        lVar33 = lVar33 * 0x38;
        dVar13 = dVar11;
        if (dVar11 != *(double *)(pFVar6 + lVar33 + 0x30)) {
          iVar32 = *(int *)(pFVar6 + lVar33);
          if ((((-1 < iVar32) && (iVar32 < *(int *)((longlong)FVar48 + 0x58))) &&
              (-1 < *(int *)(pFVar6 + lVar33 + 4))) &&
             (*(int *)(pFVar6 + lVar33 + 4) < *(int *)((longlong)FVar48 + 0x58))) {
            if ((iVar32 < 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar9 = (code *)swi(3);
              iVar22 = (*pcVar9)();
              return iVar22;
            }
            if (dVar3 == *(double *)
                          (*(longlong *)
                            ((((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                                *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data +
                            (longlong)iVar32 * 8) + 0x278)) {
LAB_1433bf082:
              bVar20 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<5631276314938835709>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\CompGeom\\ConvexDecomposition3.h"
                                  ,0x2fd,
                                  "DecompositionIn[Link.A].SumHullsVolume != -FMathd::MaxReal && DecompositionIn[Link.B].SumHullsVolume != -FMathd::MaxReal"
                                 );
              if (bVar20) {
                pcVar9 = (code *)swi(3);
                iVar22 = (*pcVar9)();
                return iVar22;
              }
            }
            else {
              uVar49 = *(uint *)(pFVar6 + lVar33 + 4);
              uVar36 = 0;
              if ((int)uVar49 < *(int *)((longlong)FVar48 + 0x58)) {
                uVar36 = ~uVar49 >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar9 = (code *)swi(3);
                iVar22 = (*pcVar9)();
                return iVar22;
              }
              if (dVar3 == *(double *)
                            (*(longlong *)
                              ((((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                                  *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data +
                              (longlong)(int)uVar49 * 8) + 0x278)) goto LAB_1433bf082;
            }
            uVar49 = *(uint *)(pFVar6 + lVar33);
            uVar36 = 0;
            if ((int)uVar49 < *(int *)((longlong)FVar48 + 0x58)) {
              uVar36 = ~uVar49 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar9 = (code *)swi(3);
              iVar22 = (*pcVar9)();
              return iVar22;
            }
            lVar39 = *(longlong *)
                      ((((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                          *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data +
                      (longlong)(int)uVar49 * 8);
            uVar49 = *(uint *)(pFVar6 + lVar33 + 4);
            uVar36 = 0;
            if ((int)uVar49 < *(int *)((longlong)local_5e8 + 0x58)) {
              uVar36 = ~uVar49 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar9 = (code *)swi(3);
              iVar22 = (*pcVar9)();
              return iVar22;
            }
            FVar48 = local_5e8;
            dVar13 = (*(double *)(pFVar6 + lVar33 + 0x30) - *(double *)(lVar39 + 0x278)) -
                     *(double *)
                      (*(longlong *)
                        ((((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                            *)((longlong)local_5e8 + 0x50))->Array).AllocatorInstance.Data +
                        (longlong)(int)uVar49 * 8) + 0x278);
          }
        }
        pFVar15 = local_4b8;
        uVar49 = local_5f4;
        if ((local_528.Key._4_4_ < 1) || (*(int *)((longlong)FVar48 + 0x58) <= local_528.Key._4_4_))
        {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        pFVar52 = local_5d8;
        if (!bVar18) {
          if ((((bVar20) || (dVar10 <= 0.0)) || (dVar13 <= dVar10)) && (!bVar19))
          goto LAB_1433bf200;
          if (((iVar22 < 0x2711) && (((bVar20 || (dVar10 <= 0.0)) || (dVar13 <= dVar10)))) ||
             (local_528.Value._0_4_ = local_5f4,
             local_1d8.Elements._8_4_ == local_1d8.Elements._52_4_)) goto LAB_1433bf50b;
          ppTVar43 = &local_528.Value;
LAB_1433bf4f6:
          TSet<TTuple<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>(&local_1d8,local_5f4,(int *)ppTVar43);
          pFVar52 = local_5d8;
          goto LAB_1433bf50b;
        }
        if (!bVar17) {
          dVar13 = dVar13 - *(double *)((longlong)FVar48 + 0x30);
        }
LAB_1433bf200:
        if ((*(int *)((longlong)FVar48 + 0x118) == 0) &&
           ((local_4b8 == (FSphereCovering *)0x0 || ((local_4b8->Position).ArrayNum < 1)))) {
          if (dVar12 <= dVar13) {
LAB_1433bf4d4:
            if ((iVar22 < 0x2711) ||
               (local_508[0] = local_5f4, local_1d8.Elements._8_4_ == local_1d8.Elements._52_4_))
            goto LAB_1433bf50b;
            ppTVar43 = (TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>
                        **)local_508;
            goto LAB_1433bf4f6;
          }
          uVar23 = (ulonglong)local_5f4;
          local_5b0 = CONCAT44(local_5b0._4_4_,local_5f4);
        }
        else {
          if (dVar12 <= dVar13) goto LAB_1433bf4d4;
          pTVar25 = TSet<TTuple<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,0>,FDefaultSetAllocator>
                    ::Find(&local_1d8,local_5f4);
          puVar42 = (undefined8 *)&pTVar25->field_0x8;
          if (pTVar25 ==
              (TTuple<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_>
               *)0x0) {
            puVar42 = (undefined8 *)0x0;
          }
          if (puVar42 == (undefined8 *)0x0) {
            uVar36 = 0;
            if ((int)uVar49 < *(int *)((longlong)FVar48 + 0xb8)) {
              uVar36 = ~uVar49 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar9 = (code *)swi(3);
              iVar22 = (*pcVar9)();
              return iVar22;
            }
            local_348 = &local_5f4;
            local_340 = (FConvexPart *)
                        `UE::Geometry::FConvexDecomposition3::MergeBest'::__l2::<lambda_2>::
                        operator()(&local_488,(FProximity *)&local_4a8._s_0);
            TSet<TTuple<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<int_const_&,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_&&>_>
                      (&local_1d8,&local_518,(bool *)&local_348);
            puVar42 = (undefined8 *)
                      (local_1d8.Elements._0_8_ + ((longlong)(int)local_518.Key * 3 + 1) * 8);
            TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>::operator()
                      ((TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart> *)
                       &local_4a8._s_0,(FConvexPart *)local_4a8);
          }
          bVar18 = false;
          if (pFVar15 != (FSphereCovering *)0x0) {
            local_450 = local_458;
            local_2e8 = &local_5e0;
            local_2d8 = *puVar42;
            local_2d0 = &local_450;
            local_330 = &local_2e8;
            local_338 = Core::Private::Function::
                        TFunctionRefCaller<``UE::Geometry::FConvexDecomposition3::MergeBest'::__l95::<lambda_3>::operator()'::__l2::<lambda_1>,void,int>
                        ::Call;
            bVar18 = false;
            local_5e0 = '\0';
            local_2e0 = pFVar15;
            ParallelFor((pFVar15->Position).ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_338,
                        None);
            if (local_5e0 != '\0') {
              bVar18 = true;
            }
          }
          local_2c0 = (FSphereCovering *)((longlong)FVar48 + 0x110);
          local_448 = (TTransform<double> *)0x0;
          local_2c8 = local_5df;
          local_2b8 = *puVar42;
          local_2b0 = &local_448;
          local_320 = &local_2c8;
          local_328 = Core::Private::Function::
                      TFunctionRefCaller<``UE::Geometry::FConvexDecomposition3::MergeBest'::__l95::<lambda_3>::operator()'::__l2::<lambda_1>,void,int>
                      ::Call;
          local_5df[0] = '\0';
          ParallelFor(*(int *)((longlong)FVar48 + 0x118),
                      (TFunctionRef<void___cdecl(int)> *)&local_328,None);
          if ((local_5df[0] != '\0') || (bVar18)) {
            lVar33 = (longlong)(int)local_5f4;
            uVar49 = 0;
            if ((int)local_5f4 < *(int *)((longlong)FVar48 + 0xb8)) {
              uVar49 = ~local_5f4 >> 0x1f;
            }
            if ((uVar49 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar9 = (code *)swi(3);
              iVar22 = (*pcVar9)();
              return iVar22;
            }
            (((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_> *
              )((longlong)FVar48 + 0xb0))->AllocatorInstance).Data[lVar33 * 0x38 + 0x29] =
                 (FScriptContainerElement)0x0;
            local_518.Value._0_4_ = local_5f4;
            pFVar52 = local_5d8;
            if (local_1d8.Elements._8_4_ != local_1d8.Elements._52_4_) {
              TSet<TTuple<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,0>,FDefaultSetAllocator>
              ::RemoveImpl<int>(&local_1d8,local_5f4,(int *)&local_518.Value);
              pFVar52 = local_5d8;
            }
            goto LAB_1433bf50b;
          }
          uVar23 = (ulonglong)local_5f4;
          local_5b0 = CONCAT44(local_5b0._4_4_,local_5f4);
          pFVar52 = local_5d8;
        }
      }
      else {
        uVar36 = uVar46;
        if ((int)uVar49 < *(int *)((longlong)FVar48 + 0xb8)) {
          uVar36 = ~uVar49 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          iVar22 = (*pcVar9)();
          return iVar22;
        }
        lVar33 = (longlong)(int)local_5f4;
        pTVar37 = *(TPlane3<double> **)
                   ((((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                       *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data +
                   (longlong)(int)uVar49 * 0x38);
        uVar49 = uVar46;
        if ((int)local_5f4 < *(int *)((longlong)FVar48 + 0xb8)) {
          uVar49 = ~local_5f4 >> 0x1f;
        }
        local_4d0 = pTVar37;
        if ((uVar49 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          iVar22 = (*pcVar9)();
          return iVar22;
        }
        uVar27 = *(undefined8 *)
                  ((((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                      *)((longlong)local_5e8 + 0xb0))->AllocatorInstance).Data + lVar33 * 0x38);
        iVar22 = (int)uVar27;
        FVar48 = local_5e8;
        pFVar52 = local_5d8;
        if (((((int)pTVar37 == iVar22) || ((int)((ulonglong)pTVar37 >> 0x20) == iVar22)) ||
            (iVar22 = (int)((ulonglong)uVar27 >> 0x20), (int)pTVar37 == iVar22)) ||
           (local_4d0._4_4_ == iVar22)) goto LAB_1433be918;
LAB_1433bf50b:
        uVar23 = local_5b0 & 0xffffffff;
        dVar13 = dVar12;
      }
LAB_1433bf50e:
      local_5f4 = local_5f4 + 1;
      dVar12 = dVar13;
    } while ((int)local_5f4 < *(int *)((longlong)FVar48 + 0xb8));
    uVar49 = (uint)uVar23;
    if (uVar49 == 0xffffffff) break;
    uVar36 = 0;
    if ((int)uVar49 < *(int *)((longlong)FVar48 + 0xb8)) {
      uVar36 = ~uVar49 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar9 = (code *)swi(3);
      iVar22 = (*pcVar9)();
      return iVar22;
    }
    lVar33 = (longlong)(int)uVar49 * 0x38;
    pFVar7 = (((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data;
    pFVar6 = pFVar7 + lVar33;
    local_258 = *(uint *)pFVar6;
    uStack_254 = *(uint *)(pFVar6 + 4);
    iStack_250 = *(int *)(pFVar6 + 8);
    iStack_24c = *(int *)(pFVar6 + 0xc);
    local_248 = *(undefined8 *)(pFVar7 + lVar33 + 0x10);
    uStack_240 = *(undefined8 *)(pFVar7 + lVar33 + 0x10 + 8);
    local_238 = *(undefined8 *)(pFVar7 + lVar33 + 0x20);
    uStack_230 = *(undefined8 *)(pFVar7 + lVar33 + 0x20 + 8);
    local_228 = *(undefined8 *)(pFVar7 + lVar33 + 0x30);
    uVar36 = local_258;
    uVar46 = uStack_254;
    if ((int)uStack_254 < (int)local_258) {
      uVar36 = uStack_254;
      uVar46 = local_258;
    }
    uVar50 = 0;
    if ((int)uVar36 < *(int *)((longlong)FVar48 + 0x58)) {
      uVar50 = ~uVar36 >> 0x1f;
    }
    local_5d0 = uVar36;
    if ((uVar50 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar9 = (code *)swi(3);
      iVar22 = (*pcVar9)();
      return iVar22;
    }
    lVar33 = *(longlong *)
              ((((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                  *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data +
              (longlong)(int)uVar36 * 8);
    uVar36 = 0;
    if ((int)uVar46 < *(int *)((longlong)FVar48 + 0x58)) {
      uVar36 = ~uVar46 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar9 = (code *)swi(3);
      iVar22 = (*pcVar9)();
      return iVar22;
    }
    iVar22 = local_5cc -
             ((uint)*(byte *)(*(longlong *)
                               ((((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                                   *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data +
                               (longlong)(int)uVar46 * 8) + 0x2ca) + (uint)*(byte *)(lVar33 + 0x2ca)
             );
    if (local_1d8.Elements._8_4_ != local_1d8.Elements._52_4_) {
      FVar35 = (ForElementType<FSetElementId>)&local_1d8.Hash;
      if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar35 = local_1d8.Hash.SecondaryData;
      }
      for (iVar32 = *(int *)((longlong)FVar35 + (local_1d8.HashSize - 1 & uVar23) * 4); iVar32 != -1
          ; iVar32 = *(int *)(local_1d8.Elements._0_8_ + 0x10 + (longlong)iVar32 * 0x18)) {
        if (*(uint *)(local_1d8.Elements._0_8_ + (longlong)iVar32 * 0x18) == uVar49) {
          if (iVar32 != -1) {
            pTVar26 = TMapBase<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,0>_>
                      ::FindChecked((TMapBase<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,0>_>
                                     *)&local_1d8,uVar49);
            FVar48 = local_5e8;
            lVar33 = (longlong)(int)local_5d0;
            pFVar5 = pTVar26->Ptr;
            uVar36 = 0;
            if ((int)local_5d0 < *(int *)((longlong)local_5e8 + 0x58)) {
              uVar36 = ~local_5d0 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              iVar22 = (*pcVar9)();
              return iVar22;
            }
            FConvexPart::operator=
                      (*(FConvexPart **)
                        ((((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                            *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data + lVar33 * 8
                        ),pFVar5);
            local_500[0] = uVar49;
            if (local_1d8.Elements._8_4_ != local_1d8.Elements._52_4_) {
              TSet<TTuple<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,0>,FDefaultSetAllocator>
              ::RemoveImpl<int>(&local_1d8,uVar49,(int *)local_500);
            }
            goto LAB_1433bf797;
          }
          break;
        }
      }
    }
    `UE::Geometry::FConvexDecomposition3::MergeBest'::__l2::<lambda_2>::operator()
              (&local_488,(FProximity *)&local_4a0._s_0);
    FVar8 = local_4a0;
    FVar48 = local_5e8;
    lVar33 = (longlong)(int)local_5d0;
    uVar49 = 0;
    if ((int)local_5d0 < *(int *)((longlong)local_5e8 + 0x58)) {
      uVar49 = ~local_5d0 >> 0x1f;
    }
    if ((uVar49 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar9 = (code *)swi(3);
      iVar22 = (*pcVar9)();
      return iVar22;
    }
    FConvexPart::operator=
              (*(FConvexPart **)
                ((((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                    *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data + lVar33 * 8),
               (FConvexPart *)FVar8);
    if (FVar8 != (FIndex2i_u_0)0x0) {
      FConvexPart::_scalar_deleting_destructor_((FConvexPart *)FVar8,1);
    }
LAB_1433bf797:
    lVar33 = (longlong)(int)local_5d0;
    uVar49 = 0;
    if ((int)local_5d0 < *(int *)((longlong)FVar48 + 0x58)) {
      uVar49 = ~local_5d0 >> 0x1f;
    }
    if ((uVar49 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar9 = (code *)swi(3);
      iVar22 = (*pcVar9)();
      return iVar22;
    }
    local_5f0[0] = 0;
    local_5cc = iVar22 + (uint)*(byte *)(*(longlong *)
                                          ((((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                                              *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance
                                           .Data + lVar33 * 8) + 0x2ca);
    local_188._0_8_ = 0;
    local_188._8_8_ = 0;
    local_168 = (uint *)0x0;
    local_160 = 0;
    local_15c = 0x80;
    local_158 = 0xffffffff;
    local_154 = 0;
    local_148 = (ForElementType<FSetElementId>)0x0;
    local_140 = 0;
    if (0 < *(int *)((longlong)FVar48 + 0xb8)) {
      do {
        uVar49 = local_5f0[0];
        uVar36 = 0;
        if ((int)local_5f0[0] < *(int *)((longlong)FVar48 + 0xb8)) {
          uVar36 = ~local_5f0[0] >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar9 = (code *)swi(3);
          iVar22 = (*pcVar9)();
          return iVar22;
        }
        uVar36 = local_5f0[0];
        local_560 = *(undefined8 *)
                     ((((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                         *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data +
                     (longlong)(int)uVar49 * 0x38);
        uVar49 = (uint)local_560;
        if ((((uVar49 == uVar46) ||
             (uVar50 = (uint)((ulonglong)local_560 >> 0x20), uVar50 == uVar46)) ||
            (uVar49 == local_5d0)) || (uVar50 == local_5d0)) {
          uVar50 = 0;
          if ((int)local_5f0[0] < *(int *)((longlong)FVar48 + 0xb8)) {
            uVar50 = ~local_5f0[0] >> 0x1f;
          }
          if ((uVar50 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            iVar22 = (*pcVar9)();
            return iVar22;
          }
          *(undefined8 *)
           ((((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_> *
              )((longlong)FVar48 + 0xb0))->AllocatorInstance).Data +
           (longlong)(int)uVar36 * 0x38 + 0x30) = 0x7fefffffffffffff;
          local_4f8[0] = local_5f0[0];
          if (local_1d8.Elements._8_4_ != local_1d8.Elements._52_4_) {
            TSet<TTuple<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>(&local_1d8,local_5f0[0],(int *)local_4f8);
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_188,&local_46c,
                     (bool *)&local_560);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_188,&local_478,
                     (bool *)((longlong)&local_560 + 4));
          if (*(int *)((longlong)FVar48 + 0x108) != 0) {
            puVar34 = (undefined1 *)((longlong)FVar48 + 0xf8);
            if (*(undefined1 **)((longlong)FVar48 + 0x100) != (undefined1 *)0x0) {
              puVar34 = *(undefined1 **)((longlong)FVar48 + 0x100);
            }
            iVar22 = *(int *)(puVar34 +
                             ((longlong)*(int *)((longlong)FVar48 + 0x108) - 1U &
                             (longlong)(int)uVar49) * 4);
            iVar32 = iVar22;
            if (iVar22 != -1) {
              do {
                iVar22 = *(int *)(*(longlong *)((longlong)FVar48 + 0xc0) + 8 +
                                 (longlong)iVar32 * 0x10);
                if (*(uint *)(*(longlong *)((longlong)FVar48 + 0xc0) + (longlong)iVar32 * 0x10) ==
                    uVar49) break;
                iVar32 = iVar22;
              } while (iVar22 != -1);
            }
            if (iVar32 != -1) {
              lVar33 = *(longlong *)((longlong)FVar48 + 0xc0);
              while (*(uint *)(lVar33 + 4 + (longlong)iVar32 * 0x10) != local_5f0[0]) {
                do {
                  iVar32 = iVar22;
                  if (iVar32 == -1) goto LAB_1433bfb04;
                  iVar22 = *(int *)(lVar33 + 8 + (longlong)iVar32 * 0x10);
                } while (*(uint *)(lVar33 + (longlong)iVar32 * 0x10) != uVar49);
              }
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
              RemoveByIndex((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                             *)((longlong)FVar48 + 0xc0),iVar32);
            }
          }
LAB_1433bfb04:
          if (*(int *)((longlong)FVar48 + 0x108) != 0) {
            puVar34 = (undefined1 *)((longlong)FVar48 + 0xf8);
            if (*(undefined1 **)((longlong)FVar48 + 0x100) != (undefined1 *)0x0) {
              puVar34 = *(undefined1 **)((longlong)FVar48 + 0x100);
            }
            iVar22 = *(int *)(puVar34 +
                             ((longlong)*(int *)((longlong)FVar48 + 0x108) - 1U &
                             (longlong)local_560._4_4_) * 4);
            iVar32 = iVar22;
            if (iVar22 != -1) {
              do {
                iVar22 = *(int *)(*(longlong *)((longlong)FVar48 + 0xc0) + 8 +
                                 (longlong)iVar32 * 0x10);
                if (*(int *)(*(longlong *)((longlong)FVar48 + 0xc0) + (longlong)iVar32 * 0x10) ==
                    local_560._4_4_) break;
                iVar32 = iVar22;
              } while (iVar22 != -1);
            }
            if (iVar32 != -1) {
              lVar33 = *(longlong *)((longlong)FVar48 + 0xc0);
              while (*(uint *)(lVar33 + 4 + (longlong)iVar32 * 0x10) != local_5f0[0]) {
                do {
                  iVar32 = iVar22;
                  if (iVar32 == -1) goto LAB_1433bfbcc;
                  iVar22 = *(int *)(lVar33 + 8 + (longlong)iVar32 * 0x10);
                } while (*(int *)(lVar33 + (longlong)iVar32 * 0x10) != local_560._4_4_);
              }
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
              RemoveByIndex((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                             *)((longlong)FVar48 + 0xc0),iVar32);
            }
          }
LAB_1433bfbcc:
          lVar33 = (longlong)(int)local_5f0[0];
          uVar36 = ~local_5f0[0];
          uVar50 = *(int *)((longlong)FVar48 + 0xb8) - 1;
          uVar49 = 0;
          if ((int)local_5f0[0] < *(int *)((longlong)FVar48 + 0xb8)) {
            uVar49 = uVar36 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            iVar22 = (*pcVar9)();
            return iVar22;
          }
          pFVar6 = (((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                      *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data;
          iVar22 = uVar36 + *(int *)((longlong)FVar48 + 0xb8);
          if (1 < iVar22) {
            iVar22 = 1;
          }
          if (iVar22 != 0) {
            memmove(pFVar6 + lVar33 * 0x38,
                    pFVar6 + (longlong)(*(int *)((longlong)FVar48 + 0xb8) - iVar22) * 0x38,
                    (longlong)iVar22 * 0x38);
          }
          uVar49 = local_5f0[0];
          iVar22 = *(int *)((longlong)FVar48 + 0xb8) + -1;
          *(int *)((longlong)FVar48 + 0xb8) = iVar22;
          if ((int)local_5f0[0] < (int)uVar50) {
            uVar36 = 0;
            if ((int)local_5f0[0] < iVar22) {
              uVar36 = ~local_5f0[0] >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              iVar22 = (*pcVar9)();
              return iVar22;
            }
            local_4c0 = *(undefined8 *)
                         ((((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                             *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data +
                         (longlong)(int)uVar49 * 0x38);
            if (*(int *)((longlong)FVar48 + 0x108) != 0) {
              puVar34 = (undefined1 *)((longlong)FVar48 + 0xf8);
              if (*(undefined1 **)((longlong)FVar48 + 0x100) != (undefined1 *)0x0) {
                puVar34 = *(undefined1 **)((longlong)FVar48 + 0x100);
              }
              iVar45 = (int)local_4c0;
              iVar22 = *(int *)(puVar34 +
                               ((longlong)*(int *)((longlong)FVar48 + 0x108) - 1U & (longlong)iVar45
                               ) * 4);
              iVar32 = iVar22;
              if (iVar22 != -1) {
                do {
                  iVar22 = *(int *)(*(longlong *)((longlong)FVar48 + 0xc0) + 8 +
                                   (longlong)iVar32 * 0x10);
                  if (*(int *)(*(longlong *)((longlong)FVar48 + 0xc0) + (longlong)iVar32 * 0x10) ==
                      iVar45) break;
                  iVar32 = iVar22;
                } while (iVar22 != -1);
              }
              if (iVar32 != -1) {
                lVar33 = *(longlong *)((longlong)FVar48 + 0xc0);
                while (*(uint *)(lVar33 + 4 + (longlong)iVar32 * 0x10) != uVar50) {
                  do {
                    iVar32 = iVar22;
                    if (iVar32 == -1) goto LAB_1433bfd98;
                    iVar22 = *(int *)(lVar33 + 8 + (longlong)iVar32 * 0x10);
                  } while (*(int *)(lVar33 + (longlong)iVar32 * 0x10) != iVar45);
                }
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
                RemoveByIndex((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                               *)((longlong)FVar48 + 0xc0),iVar32);
              }
            }
LAB_1433bfd98:
            if (*(int *)((longlong)FVar48 + 0x108) != 0) {
              puVar34 = (undefined1 *)((longlong)FVar48 + 0xf8);
              if (*(undefined1 **)((longlong)FVar48 + 0x100) != (undefined1 *)0x0) {
                puVar34 = *(undefined1 **)((longlong)FVar48 + 0x100);
              }
              iVar22 = *(int *)(puVar34 +
                               ((longlong)*(int *)((longlong)FVar48 + 0x108) - 1U &
                               (longlong)local_4c0._4_4_) * 4);
              iVar32 = iVar22;
              if (iVar22 != -1) {
                do {
                  iVar22 = *(int *)(*(longlong *)((longlong)FVar48 + 0xc0) + 8 +
                                   (longlong)iVar32 * 0x10);
                  if (*(int *)(*(longlong *)((longlong)FVar48 + 0xc0) + (longlong)iVar32 * 0x10) ==
                      local_4c0._4_4_) break;
                  iVar32 = iVar22;
                } while (iVar22 != -1);
              }
              if (iVar32 != -1) {
                lVar33 = *(longlong *)((longlong)FVar48 + 0xc0);
                while (*(uint *)(lVar33 + 4 + (longlong)iVar32 * 0x10) != uVar50) {
                  do {
                    iVar32 = iVar22;
                    if (iVar32 == -1) goto LAB_1433bfe58;
                    iVar22 = *(int *)(lVar33 + 8 + (longlong)iVar32 * 0x10);
                  } while (*(int *)(lVar33 + (longlong)iVar32 * 0x10) != local_4c0._4_4_);
                }
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
                RemoveByIndex((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                               *)((longlong)FVar48 + 0xc0),iVar32);
              }
            }
LAB_1433bfe58:
            local_318 = &local_4c0;
            local_310 = local_5f0;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                        *)((longlong)FVar48 + 0xc0),
                       (TPairInitializer<int_const_&,int_const_&> *)local_474,(bool *)&local_318);
            local_308 = (longlong)&local_4c0 + 4;
            local_300 = local_5f0;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                        *)((longlong)FVar48 + 0xc0),
                       (TPairInitializer<int_const_&,int_const_&> *)(local_474 + 4),
                       (bool *)&local_308);
            if (local_1d8.Elements._8_4_ != local_1d8.Elements._52_4_) {
              FVar35 = (ForElementType<FSetElementId>)&local_1d8.Hash;
              if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar35 = local_1d8.Hash.SecondaryData;
              }
              iVar22 = *(int *)((longlong)FVar35 + (ulonglong)(local_1d8.HashSize - 1U & uVar50) * 4
                               );
              while (iVar22 != -1) {
                lVar33 = local_1d8.Elements._0_8_ + (longlong)iVar22 * 0x18;
                if (*(uint *)(local_1d8.Elements._0_8_ + (longlong)iVar22 * 0x18) == uVar50) {
                  pFVar30 = (FIndex2i_u_0 *)(lVar33 + 8);
                  if (lVar33 == 0) {
                    pFVar30 = (FIndex2i_u_0 *)0x0;
                  }
                  if (pFVar30 != (FIndex2i_u_0 *)0x0) {
                    FVar8 = *pFVar30;
                    *pFVar30 = (FIndex2i_u_0)0x0;
                    local_4f0[0] = uVar50;
                    if (local_1d8.Elements._8_4_ != local_1d8.Elements._52_4_) {
                      TSet<TTuple<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,0>,FDefaultSetAllocator>
                      ::RemoveImpl<int>(&local_1d8,uVar50,(int *)local_4f0);
                    }
                    local_2f8 = local_5f0;
                    local_2f0 = &local_498;
                    local_498 = FVar8;
                    TSet<TTuple<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,0>,FDefaultSetAllocator>
                    ::
                    Emplace<TPairInitializer<int_const_&,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_&&>_>
                              (&local_1d8,&local_3c8,(bool *)&local_2f8);
                    if (local_498 != (FIndex2i_u_0)0x0) {
                      FConvexPart::_scalar_deleting_destructor_((FConvexPart *)local_498,1);
                    }
                  }
                  break;
                }
                iVar22 = *(int *)(lVar33 + 0x10);
              }
            }
            local_5f0[0] = local_5f0[0] - 1;
          }
        }
        local_5f0[0] = local_5f0[0] + 1;
        pFVar52 = local_5d8;
      } while ((int)local_5f0[0] < *(int *)((longlong)FVar48 + 0xb8));
    }
    local_4e8[0] = local_5d0;
    if (local_188._8_4_ != local_154) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_188,local_5d0,
                 (int *)local_4e8);
    }
    local_4e0[0] = uVar46;
    if (local_188._8_4_ != local_154) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_188,uVar46,
                 (int *)local_4e0);
    }
    if (*(longlong *)&pFVar52->MergeCallback != 0) {
      lVar33 = (longlong)(int)local_5d0;
      uVar49 = 0;
      if ((int)local_5d0 < local_598.ArrayNum) {
        uVar49 = ~local_5d0 >> 0x1f;
      }
      if (uVar49 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar9 = (code *)swi(3);
          iVar22 = (*pcVar9)();
          return iVar22;
        }
      }
      uVar4 = *(undefined4 *)(local_598.AllocatorInstance.Data + lVar33 * 4);
      uVar49 = 0;
      if ((int)uVar46 < local_598.ArrayNum) {
        uVar49 = ~uVar46 >> 0x1f;
      }
      if ((uVar49 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        iVar22 = (*pcVar9)();
        return iVar22;
      }
      local_4d8[0] = *(undefined4 *)(local_598.AllocatorInstance.Data + (longlong)(int)uVar46 * 4);
      local_4c8[0] = uVar4;
      Core::Private::Function::CheckCallable(*(void **)&pFVar52->MergeCallback);
      plVar29 = *(longlong **)&(pFVar52->MergeCallback).field_0x28;
      pcVar9 = *(code **)&pFVar52->MergeCallback;
      plVar31 = (longlong *)&(pFVar52->MergeCallback).field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar31 = plVar29;
      }
      uVar27 = (**(code **)(*plVar31 + 8))();
      (*pcVar9)(uVar27,local_4c8,local_4d8);
    }
    uVar49 = *(int *)((longlong)FVar48 + 0x58) - 1;
    if (uVar46 != uVar49) {
      if (*(longlong *)&local_5d8->MergeCallback != 0) {
        uVar36 = 0;
        if ((int)uVar49 < local_598.ArrayNum) {
          uVar36 = ~uVar49 >> 0x1f;
        }
        if (uVar36 == 0) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar9 = (code *)swi(3);
            iVar22 = (*pcVar9)();
            return iVar22;
          }
        }
        uVar4 = *(undefined4 *)(local_598.AllocatorInstance.Data + (longlong)(int)uVar49 * 4);
        uVar36 = 0;
        if ((int)uVar46 < local_598.ArrayNum) {
          uVar36 = ~uVar46 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar9 = (code *)swi(3);
          iVar22 = (*pcVar9)();
          return iVar22;
        }
        *(undefined4 *)(local_598.AllocatorInstance.Data + (longlong)(int)uVar46 * 4) = uVar4;
      }
      local_440 = FVar48;
      `UE::Geometry::FConvexDecomposition3::MergeBest'::__l145::<lambda_4>::operator()
                (&local_440,uVar49,uVar46);
    }
    if (((int)uVar46 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                            ,0x130,L""), bVar19)) {
      pcVar9 = (code *)swi(3);
      iVar22 = (*pcVar9)();
      return iVar22;
    }
    if ((*(int *)((longlong)FVar48 + 0x58) <= (int)uVar46) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                            ,0x131,L""), bVar19)) {
      pcVar9 = (code *)swi(3);
      iVar22 = (*pcVar9)();
      return iVar22;
    }
    this_00 = *(FDynamicMesh3 **)
               ((((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                   *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data +
               (longlong)(int)uVar46 * 8);
    if (this_00 != (FDynamicMesh3 *)0x0) {
      pFVar6 = this_00[1].VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      pFVar6 = this_00[1].Vertices.Blocks.AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      if ((void *)this_00[1]._padding_ != (void *)0x0) {
        FMemory::Free((void *)this_00[1]._padding_);
      }
      FDynamicMesh3::~FDynamicMesh3(this_00);
      ::operator_delete(this_00,0x2e0);
    }
    uVar36 = 0;
    if ((int)uVar46 < *(int *)((longlong)FVar48 + 0x58)) {
      uVar36 = ~uVar46 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar9 = (code *)swi(3);
      iVar22 = (*pcVar9)();
      return iVar22;
    }
    FVar38.Data = (((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                     *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data;
    iVar22 = ~uVar46 + *(int *)((longlong)FVar48 + 0x58);
    if (1 < iVar22) {
      iVar22 = 1;
    }
    if (iVar22 != 0) {
      memmove(FVar38.Data + (longlong)(int)uVar46 * 8,
              FVar38.Data + (longlong)(*(int *)((longlong)FVar48 + 0x58) - iVar22) * 8,
              (longlong)iVar22 << 3);
    }
    uVar50 = local_160;
    *(int *)((longlong)FVar48 + 0x58) = *(int *)((longlong)FVar48 + 0x58) + -1;
    iVar22 = 0;
    local_538 = 0;
    uVar36 = 1;
    uStack_53c = 0;
    if (local_160 != 0) {
      puVar44 = (uint *)(local_188 + 0x10);
      if (local_168 != (uint *)0x0) {
        puVar44 = local_168;
      }
      uVar36 = *puVar44;
      iVar22 = 0;
      local_538 = 0;
      while (uVar36 == 0) {
        lVar33 = (longlong)iVar22;
        local_538 = local_538 + 0x20;
        iVar22 = iVar22 + 1;
        uVar36 = 1;
        uStack_53c = local_160;
        if ((int)((local_160 - 1) + ((int)(local_160 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
        goto LAB_1433c03b9;
        uVar36 = puVar44[lVar33 + 1];
      }
      uVar36 = -uVar36 & uVar36;
      uVar23 = (ulonglong)uVar36 * 2 + 1;
      lVar33 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      local_438.Value._0_4_ = (int)lVar33;
      uStack_53c = (int)local_438.Value + -1 + local_538;
      if ((int)local_160 < (int)uStack_53c) {
        uStack_53c = local_160;
      }
    }
LAB_1433c03b9:
    local_558 = (FScriptContainerElement *)local_188;
    local_548 = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
    uStack_534 = local_1e4;
    uVar40 = local_160 & 0xffffffe0;
    iStack_530 = local_188._8_4_ - local_154;
    uStack_550 = (int *)CONCAT44(uVar36,iVar22);
    uStack_540 = 0xffffffff;
    TStack_3b8.CurrentBitIndex = uStack_53c;
    TStack_3b8.UnvisitedBitMask = 0xffffffff;
    TStack_3b8._padding_ = (longlong)uStack_550;
    iVar22 = (int)local_160 >> 5;
    TStack_3b8._28_4_ = local_1e4;
    TStack_3b8.BaseBitIndex = local_538;
    uStack_398 = CONCAT44(uStack_52c,iStack_530);
    bVar28 = (byte)local_160;
    local_3c8.Value =
         (TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>
          *)local_558;
    TStack_3b8.Array = local_548;
    if (((int)local_160 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar19)) {
      pcVar9 = (code *)swi(3);
      iVar22 = (*pcVar9)();
      return iVar22;
    }
    if (uVar50 != local_160) {
      puVar44 = (uint *)(local_188 + 0x10);
      if (local_168 != (uint *)0x0) {
        puVar44 = local_168;
      }
      uVar36 = -1 << (bVar28 & 0x1f) & puVar44[iVar22];
      while (uVar36 == 0) {
        lVar33 = (longlong)iVar22;
        uVar40 = uVar40 + 0x20;
        iVar22 = iVar22 + 1;
        uVar50 = local_160;
        if ((int)((local_160 - 1) + ((int)(local_160 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
        goto LAB_1433c04eb;
        uVar36 = puVar44[lVar33 + 1];
      }
      uVar23 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
      lVar33 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      local_438.Key._4_4_ = (int)lVar33;
      uVar50 = local_438.Key._4_4_ + -1 + uVar40;
      if ((int)local_160 < (int)uVar50) {
        uVar50 = local_160;
      }
    }
LAB_1433c04eb:
    while( true ) {
      pTVar26 = local_3c8.Value;
      if (*(int *)&((FScriptContainerElement *)((longlong)local_3c8.Value + 8))->field_0x0 -
          *(int *)((longlong)local_3c8.Value + 0x34) != (int)uStack_398) {
        local_5b5 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5b5);
      }
      if (((TStack_3b8.CurrentBitIndex == uVar50) &&
          (TStack_3b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10))) &&
         ((FScriptContainerElement *)pTVar26 == (FScriptContainerElement *)local_188)) break;
      local_56c = *(uint *)((longlong)pTVar26->Ptr + (longlong)TStack_3b8.CurrentBitIndex * 0xc);
      if (local_56c == uVar49) {
        local_56c = uVar46;
      }
      local_490 = local_5d0;
      iVar22 = *(int *)((longlong)FVar48 + 0xb8);
      uStack_48c = local_56c;
      if (iVar22 == *(int *)((longlong)FVar48 + 0xbc)) {
        iVar22 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,(ForAnyElementType *)((longlong)FVar48 + 0xb0),
                            (int *)((longlong)FVar48 + 0xbc));
      }
      pFVar6 = (((TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_>
                  *)((longlong)FVar48 + 0xb0))->AllocatorInstance).Data;
      *(int *)((longlong)FVar48 + 0xb8) = iVar22 + 1;
      lVar33 = (longlong)iVar22 * 0x38;
      *(ulonglong *)(pFVar6 + lVar33) = CONCAT44(uStack_48c,local_490);
      *(undefined8 *)(pFVar6 + lVar33 + 8) = local_220;
      *(undefined8 *)(pFVar6 + lVar33 + 8 + 8) = uStack_218;
      *(undefined8 *)(pFVar6 + lVar33 + 0x30) = 0x7fefffffffffffff;
      *(undefined8 *)(pFVar6 + lVar33 + 0x18) = local_210;
      *(undefined8 *)(pFVar6 + lVar33 + 0x18 + 8) = uStack_208;
      *(undefined2 *)(pFVar6 + lVar33 + 0x28) = 0x100;
      local_378 = &local_5d0;
      local_370 = local_568;
      local_568[0] = iVar22;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                  *)((longlong)FVar48 + 0xc0),&local_438,(bool *)&local_378);
      local_368 = &local_56c;
      local_360 = local_568;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                  *)((longlong)FVar48 + 0xc0),(TPairInitializer<int_const_&,int_const_&> *)local_468
                 ,(bool *)&local_368);
      TStack_3b8.UnvisitedBitMask = TStack_3b8.UnvisitedBitMask & ~TStack_3b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3b8);
    }
    local_140 = 0;
    if (local_148 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_188);
    local_574 = local_574 + 1;
    FVar48 = local_5e8;
    pFVar52 = local_5d8;
  }
  if (local_5b4 != '\0') {
    FVar38.Data = (((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                     *)((longlong)FVar48 + 0x50))->Array).AllocatorInstance.Data;
    piVar14 = (int *)((longlong)FVar48 + 0x58);
    iVar22 = *piVar14;
    local_548 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_548._4_4_,iVar22);
    pFVar6 = FVar38.Data + (longlong)iVar22 * 8;
    local_380 = local_548;
    local_558 = FVar38.Data;
    uStack_550 = piVar14;
    local_390 = FVar38.Data;
    piStack_388 = piVar14;
    while( true ) {
      if (*piVar14 != iVar22) {
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_578)
        ;
      }
      if (FVar38.Data == pFVar6) break;
      if (((*(FConvexPart **)&(FVar38.Data)->field_0x0)->HullTriangles).ArrayNum == 0) {
        FConvexPart::ComputeHull(*(FConvexPart **)&(FVar38.Data)->field_0x0,true,0.0);
      }
      FVar38.Data = FVar38.Data + 8;
    }
  }
  if (local_598.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_598.AllocatorInstance.Data);
  }
  local_1d8.HashSize = 0;
  if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1d8.Elements);
  return local_574;
}

// MergeBest @ 1433c07c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::FConvexDecomposition3::MergeBest
          (FConvexDecomposition3 *this,int param_1,double param_2,double param_3,bool param_4,
          bool param_5,int param_6,FSphereCovering *param_7,TTransform<double> *param_8)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [104];
  longlong *local_50;
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8[0x10] = true;
  local_b8._64_8_ = 0;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  local_20 = (longlong *)0x0;
  local_b8[0x20] = param_4;
  local_b8[0x21] = param_5;
  local_b8._20_4_ = param_6;
  local_b8._40_8_ = param_7;
  local_b8._48_8_ = param_8;
  local_b8._0_4_ = param_1;
  local_b8._8_8_ = param_2;
  local_b8._24_8_ = param_3;
  iVar1 = MergeBest(this,(FMergeSettings *)local_b8);
  if (local_48 != 0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_b8._64_8_ != 0) {
    plVar2 = (longlong *)(local_b8 + 0x50);
    if (local_50 != (longlong *)0x0) {
      plVar2 = local_50;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return iVar1;
}

// SplitWorst @ 1433d57f0

int __thiscall
UE::Geometry::FConvexDecomposition3::SplitWorst
          (FConvexDecomposition3 *this,bool param_1,double param_2,bool param_3,double param_4)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = (this->Decomposition).Array.ArrayNum;
  bVar3 = SplitWorstHelper(this,param_1,param_2,param_3,param_4);
  iVar2 = iVar4 + 1;
  do {
    if (bVar3) {
LAB_1433d5894:
      return (this->Decomposition).Array.ArrayNum - iVar4;
    }
    if (iVar2 < 1) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4359859441479186600>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexDecomposition3.cpp"
                         ,0x758,"NumAttempts-- > 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      goto LAB_1433d5894;
    }
    bVar3 = SplitWorstHelper(this,param_1,param_2,param_3,param_4);
    iVar2 = iVar2 + -1;
  } while( true );
}

// SplitWorstHelper @ 1433d58d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::FConvexDecomposition3::SplitWorstHelper
          (FConvexDecomposition3 *this,bool param_1,double param_2,bool param_3,double param_4)

{
  undefined8 *puVar1;
  void **ppvVar2;
  double *pdVar3;
  double dVar4;
  undefined1 auVar5 [16];
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  ForAnyElementType *_Src;
  uint uVar32;
  uint uVar33;
  void **ppvVar34;
  FConvexPart *this_00;
  undefined4 uVar35;
  double dVar36;
  double dVar37;
  undefined4 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 auStackY_568 [32];
  ForAnyElementType local_500;
  uint local_4f8 [2];
  char local_4f0;
  char local_4ef;
  double local_4e8;
  undefined8 local_4e0;
  uint local_4d8;
  uint local_4d4;
  uint local_4d0 [2];
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  FPriorityOrderPoints local_4b0;
  TVector<double> *local_498;
  undefined8 local_490;
  float *local_488;
  undefined8 local_480;
  float *local_478;
  undefined8 local_470;
  void *local_468;
  undefined8 local_460;
  double local_458;
  TVector<double>_u_0 local_450;
  TVector<double>_u_0 local_438;
  ulonglong local_420;
  double local_418;
  double local_410;
  undefined8 local_408;
  FConvexPart *local_400;
  TVector<double> *local_3f8;
  int iStack_3f0;
  undefined4 uStack_3ec;
  float *local_3e8;
  int iStack_3e0;
  undefined4 uStack_3dc;
  float *local_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  TVector<double>_u_0 local_3c8;
  TVector<double>_u_0 local_3a8;
  double local_390;
  double dStack_388;
  double local_380;
  undefined1 local_378 [16];
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  undefined1 local_328 [16];
  TArrayView<float_const_,int> local_318;
  TArrayView<float_const_,int> local_308;
  TArrayView<UE::Math::TVector<double>_const_,int> local_2f8;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  undefined1 local_2d0 [16];
  double local_2b0;
  undefined1 local_2a8 [16];
  TVector<double>_u_0 local_298;
  undefined8 uStack_280;
  void *local_278;
  undefined8 local_270;
  void *local_268;
  undefined8 local_260;
  void *local_258 [10];
  double local_208;
  double dStack_200;
  char local_1f8;
  void *local_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  void *local_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  void *local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  double local_178;
  double dStack_170;
  char local_168;
  TVector<double>_u_0 local_158;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_568;
  if ((this->Decomposition).Array.ArrayNum == 0) {
    return true;
  }
  local_4f0 = param_3;
  local_4ef = param_1;
  if (0.0 < param_4) {
    param_4 = ConvertDistanceToleranceToLocalSpace(this,param_4);
  }
  local_458 = ConvertDistanceToleranceToLocalSpace(this,this->ThickenAfterHullFailure);
  dVar36 = ConvertDistanceToleranceToLocalSpace(this,param_2);
  dVar47 = __real_ffefffffffffffff;
  local_4e8 = (double)CONCAT44(local_4e8._4_4_,0xffffffff);
  bVar19 = false;
  bVar18 = false;
  uVar28 = 0;
  uVar23 = 0;
  uVar27 = 0;
  bVar11 = false;
  bVar20 = true;
  uVar33 = 0;
  if ((0 < (this->NegativeSpace).Position.ArrayNum) &&
     (uVar30 = uVar28, uVar25 = uVar28, 0 < (this->Decomposition).Array.ArrayNum)) {
    do {
      uVar22 = (uint)uVar30;
      uVar32 = ~uVar22 >> 0x1f;
      uVar21 = uVar33;
      if ((int)uVar22 < (this->Decomposition).Array.ArrayNum) {
        uVar21 = uVar32;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        uVar16 = (*pcVar7)();
        return (bool)uVar16;
      }
      if (*(char *)(*(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + uVar25) +
                   0x2c9) == '\0') {
        uVar21 = uVar33;
        if ((int)uVar22 < (this->Decomposition).Array.ArrayNum) {
          uVar21 = uVar32;
        }
        if ((uVar21 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          uVar16 = (*pcVar7)();
          return (bool)uVar16;
        }
        lVar29 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + uVar25);
        dVar39 = *(double *)(lVar29 + 0x2c0) - *(double *)(lVar29 + 0x2a8);
        dVar37 = *(double *)(lVar29 + 0x2b8) - *(double *)(lVar29 + 0x2a0);
        dVar45 = *(double *)(lVar29 + 0x2b0) - *(double *)(lVar29 + 0x298);
        if (dVar39 <= 0.0) {
          dVar39 = 0.0;
        }
        if (dVar37 <= 0.0) {
          dVar37 = 0.0;
        }
        if (dVar45 <= 0.0) {
          dVar45 = 0.0;
        }
        if (dVar39 <= dVar37) {
          dVar39 = dVar37;
        }
        if (dVar39 <= dVar45) {
          dVar39 = dVar45;
        }
        if (param_4 <= dVar39) {
          uVar21 = uVar33;
          if ((int)uVar22 < (this->Decomposition).Array.ArrayNum) {
            uVar21 = uVar32;
          }
          if ((uVar21 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            uVar16 = (*pcVar7)();
            return (bool)uVar16;
          }
          if (*(int *)(*(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + uVar25) +
                      0x260) != 0) {
            bVar15 = true;
            bVar11 = true;
            goto LAB_1433d5b32;
          }
        }
      }
      uVar30 = (ulonglong)(uVar22 + 1);
      uVar25 = uVar25 + 8;
    } while ((int)(uVar22 + 1) < (this->Decomposition).Array.ArrayNum);
  }
  bVar15 = false;
  if (local_4f0 != '\0') {
    return true;
  }
LAB_1433d5b32:
  uVar30 = uVar28;
  uVar25 = uVar28;
  if ((this->Decomposition).Array.ArrayNum < 1) {
    return true;
  }
  do {
    uVar22 = (uint)uVar30;
    uVar32 = ~uVar22 >> 0x1f;
    uVar21 = 0;
    uVar33 = uVar21;
    if ((int)uVar22 < (this->Decomposition).Array.ArrayNum) {
      uVar33 = uVar32;
    }
    if ((uVar33 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15 = bVar11, bVar17)) {
      pcVar7 = (code *)swi(3);
      uVar16 = (*pcVar7)();
      return (bool)uVar16;
    }
    if (*(char *)(*(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + uVar25) + 0x2c9
                 ) == '\0') {
      uVar33 = uVar21;
      if ((int)uVar22 < (this->Decomposition).Array.ArrayNum) {
        uVar33 = uVar32;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        uVar16 = (*pcVar7)();
        return (bool)uVar16;
      }
      lVar29 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + uVar25);
      dVar39 = *(double *)(lVar29 + 0x2c0) - *(double *)(lVar29 + 0x2a8);
      dVar37 = *(double *)(lVar29 + 0x2b8) - *(double *)(lVar29 + 0x2a0);
      dVar45 = *(double *)(lVar29 + 0x2b0) - *(double *)(lVar29 + 0x298);
      if (dVar39 <= 0.0) {
        dVar39 = 0.0;
      }
      if (dVar37 <= 0.0) {
        dVar37 = 0.0;
      }
      if (dVar45 <= 0.0) {
        dVar45 = 0.0;
      }
      if (dVar39 <= dVar37) {
        dVar39 = dVar37;
      }
      if (dVar39 <= dVar45) {
        dVar39 = dVar45;
      }
      bVar15 = bVar11;
      if (param_4 <= dVar39) {
        uVar33 = uVar21;
        if ((int)uVar22 < (this->Decomposition).Array.ArrayNum) {
          uVar33 = uVar32;
        }
        if ((uVar33 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          uVar16 = (*pcVar7)();
          return (bool)uVar16;
        }
        if ((!bVar11) ||
           (bVar15 = bVar11,
           *(int *)(*(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + uVar25) +
                   0x260) != 0)) {
          uVar33 = uVar21;
          if ((int)uVar22 < (this->Decomposition).Array.ArrayNum) {
            uVar33 = uVar32;
          }
          if ((uVar33 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar7 = (code *)swi(3);
            uVar16 = (*pcVar7)();
            return (bool)uVar16;
          }
          bVar18 = bVar19;
          if (dVar36 * dVar36 * dVar36 <
              *(double *)
               (*(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + uVar25) + 0x2d0))
          {
            bVar18 = true;
          }
          uVar33 = uVar21;
          if ((int)uVar22 < (this->Decomposition).Array.ArrayNum) {
            uVar33 = uVar32;
          }
          if ((uVar33 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            uVar16 = (*pcVar7)();
            return (bool)uVar16;
          }
          bVar19 = bVar18;
          bVar15 = bVar11;
          if (dVar47 < *(double *)
                        (*(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + uVar25)
                        + 0x2d0)) {
            if ((local_4ef != '\0') && (!bVar20)) {
              uVar33 = uVar21;
              if ((int)uVar22 < (this->Decomposition).Array.ArrayNum) {
                uVar33 = uVar32;
              }
              if ((uVar33 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar7 = (code *)swi(3);
                uVar16 = (*pcVar7)();
                return (bool)uVar16;
              }
              bVar15 = bVar11;
              if (*(char *)(*(longlong *)
                             ((this->Decomposition).Array.AllocatorInstance.Data + uVar25) + 0x2c8)
                  != '\0') goto LAB_1433d5e9c;
            }
            local_4e8 = (double)CONCAT44(local_4e8._4_4_,uVar22);
            uVar33 = uVar21;
            if ((int)uVar22 < (this->Decomposition).Array.ArrayNum) {
              uVar33 = uVar32;
            }
            if ((uVar33 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              uVar16 = (*pcVar7)();
              return (bool)uVar16;
            }
            dVar47 = *(double *)
                      (*(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + uVar25) +
                      0x2d0);
            if (bVar20) {
              uVar33 = uVar21;
              if ((int)uVar22 < (this->Decomposition).Array.ArrayNum) {
                uVar33 = uVar32;
              }
              if ((uVar33 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                uVar16 = (*pcVar7)();
                return (bool)uVar16;
              }
              if (*(char *)(*(longlong *)
                             ((this->Decomposition).Array.AllocatorInstance.Data + uVar25) + 0x2c8)
                  != '\0') {
                bVar20 = true;
                bVar15 = bVar11;
                goto LAB_1433d5e9c;
              }
            }
            bVar20 = false;
            bVar15 = bVar11;
          }
        }
      }
    }
LAB_1433d5e9c:
    uVar30 = (ulonglong)(uVar22 + 1);
    uVar25 = uVar25 + 8;
  } while ((int)(uVar22 + 1) < (this->Decomposition).Array.ArrayNum);
  uVar33 = local_4e8._0_4_;
  lVar29 = (longlong)(int)local_4e8._0_4_;
  if (local_4e8._0_4_ == 0xffffffff) {
    return true;
  }
  if ((!bVar18) && (!bVar15)) {
    return true;
  }
  uVar32 = ~local_4e8._0_4_ >> 0x1f;
  uVar22 = uVar21;
  if ((int)local_4e8._0_4_ < (this->Decomposition).Array.ArrayNum) {
    uVar22 = uVar32;
  }
  local_4d4 = uVar32;
  if ((uVar22 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar7 = (code *)swi(3);
    uVar16 = (*pcVar7)();
    return (bool)uVar16;
  }
  this_00 = *(FConvexPart **)((this->Decomposition).Array.AllocatorInstance.Data + lVar29 * 8);
  uVar22 = uVar21;
  if ((int)uVar33 < (this->Decomposition).Array.ArrayNum) {
    uVar22 = uVar32;
  }
  local_400 = this_00;
  if ((uVar22 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar7 = (code *)swi(3);
    uVar16 = (*pcVar7)();
    return (bool)uVar16;
  }
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_408 = *(undefined8 *)
               (*(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + lVar29 * 8) +
               0x268);
  uVar49 = (undefined4)local_408;
  uVar50 = (undefined4)((ulonglong)local_408 >> 0x20);
  local_500.Data = (FScriptContainerElement *)0x0;
  local_4f8[0] = 0;
  local_4f8[1] = 0;
  dVar47 = (this_00->Bounds).Max.field0_0x0._s_0.X;
  dVar36 = (this_00->Bounds).Max.field0_0x0._s_0.Y;
  dVar45 = (this_00->Bounds).Min.field0_0x0._s_0.X;
  dVar39 = (this_00->Bounds).Min.field0_0x0._s_0.Y;
  dVar37 = (this_00->Bounds).Max.field0_0x0._s_0.Z;
  dVar4 = (this_00->Bounds).Min.field0_0x0._s_0.Z;
  dVar42 = (dVar47 - dVar45) * __real_3fe0000000000000;
  dVar9 = (dVar36 - dVar39) * __real_3fe0000000000000;
  dVar45 = (dVar47 + dVar45) * __real_3fe0000000000000;
  dVar36 = (dVar36 + dVar39) * __real_3fe0000000000000;
  dVar39 = (dVar37 + dVar4) * __real_3fe0000000000000;
  dVar47 = (dVar37 - dVar4) * __real_3fe0000000000000;
  if (dVar42 <= dVar9) {
    uVar33 = (dVar9 <= dVar47) + 1;
  }
  else {
    uVar33 = 2;
    if (dVar47 < dVar42) {
      uVar33 = uVar27;
    }
  }
  local_4d8 = 0;
  if ((uVar33 == 0) || (param_4 <= dVar42)) {
    dVar37 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    local_4b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar32 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_500,(int *)(local_4f8 + 1));
    uVar35 = SUB84(__real_3ff0000000000000,0);
    uVar38 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_4c8 = __real_3ff0000000000000;
    uVar22 = uVar32 + 1;
    local_4f8[0] = uVar22;
    lVar29 = (longlong)(int)uVar32 * 0x20;
    *(double *)(local_500.Data + lVar29) = __real_3ff0000000000000;
    *(double *)(local_500.Data + lVar29 + 8) = dVar37;
    *(undefined8 *)(local_500.Data + lVar29 + 0x10) = uVar12;
    *(double *)(local_500.Data + lVar29 + 0x18) = dVar37 * dVar36 + dVar45 + local_4b8 * dVar39;
    uVar14 = uVar32;
    dStack_4c0 = dVar37;
    if (uVar33 != 0) goto LAB_1433d610a;
LAB_1433d610f:
    local_4d8 = uVar14;
    uVar23 = uVar32;
    uVar32 = uVar22;
    if (param_4 <= dVar9) goto LAB_1433d611a;
LAB_1433d61af:
    uVar22 = uVar23;
    uVar14 = local_4d8;
    if (uVar33 != 2) goto LAB_1433d61b4;
  }
  else {
    uVar35 = SUB84(__real_3ff0000000000000,0);
    uVar38 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar22 = 0;
LAB_1433d610a:
    uVar32 = 0;
    uVar14 = local_4d8;
    if (uVar33 != 1) goto LAB_1433d610f;
LAB_1433d611a:
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_4c8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    dStack_4c0 = (double)CONCAT44(uVar38,uVar35);
    local_4b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (uVar22 == local_4f8[1]) {
      uVar22 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_500,(int *)(local_4f8 + 1));
    }
    uVar32 = uVar22 + 1;
    local_4f8[0] = uVar32;
    lVar29 = (longlong)(int)uVar22 * 0x20;
    *(double *)(local_500.Data + lVar29) = local_4c8;
    *(double *)(local_500.Data + lVar29 + 8) = dStack_4c0;
    *(undefined8 *)(local_500.Data + lVar29 + 0x10) = uVar12;
    *(double *)(local_500.Data + lVar29 + 0x18) = local_4c8 * dVar45 + dVar36 + local_4b8 * dVar39;
    uVar14 = uVar22;
    if (uVar33 != 1) goto LAB_1433d61af;
LAB_1433d61b4:
    local_4d8 = uVar14;
    uVar23 = uVar32;
    if (dVar47 < param_4) goto LAB_1433d6242;
  }
  dVar47 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  dVar37 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  local_4b8 = (double)CONCAT44(uVar38,uVar35);
  local_4c8 = dVar47;
  dStack_4c0 = dVar37;
  if (uVar32 == local_4f8[1]) {
    uVar32 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_500,(int *)(local_4f8 + 1));
  }
  uVar23 = uVar32 + 1;
  local_4f8[0] = uVar23;
  lVar29 = (longlong)(int)uVar32 * 0x20;
  local_4d8 = uVar22;
  if (uVar33 == 2) {
    local_4d8 = uVar32;
  }
  *(double *)(local_500.Data + lVar29) = dVar47;
  *(double *)(local_500.Data + lVar29 + 8) = dVar37;
  *(double *)(local_500.Data + lVar29 + 0x10) = local_4b8;
  *(double *)(local_500.Data + lVar29 + 0x18) = dVar37 * dVar36 + dVar47 * dVar45 + dVar39;
LAB_1433d6242:
  local_410 = cos(this->ConvexEdgeAngleMoreSamplesThreshold * __real_3f81df46a2529d39);
  local_418 = cos(this->ConvexEdgeAngleThreshold * __real_3f81df46a2529d39);
  uVar13 = local_4e8._0_4_;
  local_498 = (TVector<double> *)0x0;
  local_490 = 0;
  local_488 = (float *)0x0;
  local_480 = 0;
  local_478 = (float *)0x0;
  local_470 = 0;
  local_468 = (void *)0x0;
  local_460 = 0;
  local_4e0 = (double)((ulonglong)local_4e0._4_4_ << 0x20);
  uVar33 = (this_00->InternalGeo).EdgeRefCounts.RefCounts.CurBlockUsed +
           (this_00->InternalGeo).EdgeRefCounts.RefCounts.CurBlock * 0x200;
  uVar30 = uVar28;
  if (((uVar33 != 0) &&
      (pFVar6 = (this_00->InternalGeo).EdgeRefCounts.RefCounts.Blocks.AllocatorInstance.Data,
      0xfffd < (ushort)(**(short **)pFVar6 - 1U))) && (uVar30 = 1, 1 < (int)uVar33)) {
    do {
      uVar25 = (ulonglong)((uint)uVar30 & 0x1ff);
      lVar29 = *(longlong *)(pFVar6 + (uVar30 >> 9) * 8);
      if ((*(short *)(lVar29 + uVar25 * 2) != 0) && (*(short *)(lVar29 + uVar25 * 2) != -1)) break;
      uVar22 = (uint)uVar30 + 1;
      uVar30 = (ulonglong)uVar22;
    } while ((int)uVar22 < (int)uVar33);
  }
  local_470._0_4_ = 0;
  if ((uint)uVar30 != uVar33) {
    uVar49 = SUB84(__real_3e45798ee0000000,0);
    uVar50 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
LAB_1433d6330:
    do {
      uVar25 = (ulonglong)((uint)uVar30 & 0x1ff);
      lVar29 = *(longlong *)
                ((this_00->InternalGeo).Edges.Blocks.AllocatorInstance.Data + (uVar30 >> 9) * 8);
      auVar5 = *(undefined1 (*) [16])(lVar29 + uVar25 * 0x10);
      FDynamicMesh3::GetTriNormal
                (&this_00->InternalGeo,(TVector<double> *)&local_450._s_0,
                 *(int *)(lVar29 + 8 + uVar25 * 0x10));
      if (-1 < auVar5._12_4_) {
        FDynamicMesh3::GetTriNormal
                  (&this_00->InternalGeo,(TVector<double> *)&local_438._s_0,auVar5._12_4_);
        dVar36 = local_438._s_0.X + local_450._s_0.X;
        dVar45 = local_438._s_0.Y + local_450._s_0.Y;
        dVar47 = local_438._s_0.Z + local_450._s_0.Z;
        dVar39 = dVar45 * dVar45 + dVar36 * dVar36 + dVar47 * dVar47;
        if ((double)CONCAT44(uVar50,uVar49) <= dVar39 && dVar39 != (double)CONCAT44(uVar50,uVar49))
        {
          local_2d8 = (double)CONCAT44(uVar38,uVar35) / SQRT(dVar39);
          dVar47 = local_2d8 * dVar47;
          dVar45 = local_2d8 * dVar45;
          dVar36 = local_2d8 * dVar36;
          FDynamicMesh3::GetEdgeOpposingV(&this_00->InternalGeo,(int)&local_420);
          pFVar6 = (this_00->InternalGeo).Vertices.Blocks.AllocatorInstance.Data;
          uVar25 = (ulonglong)((uint)local_420 & 0x1ff);
          pdVar3 = (double *)
                   (*(longlong *)(pFVar6 + ((local_420 & 0xffffffff) >> 9) * 8) + uVar25 * 0x18);
          local_2b0 = *(double *)
                       (*(longlong *)(pFVar6 + ((local_420 & 0xffffffff) >> 9) * 8) + 0x10 +
                       uVar25 * 0x18);
          uVar25 = (ulonglong)(auVar5._0_4_ & 0x1ff);
          local_2d0 = *(undefined1 (*) [16])
                       (*(longlong *)(pFVar6 + ((auVar5._0_8_ & 0xffffffff) >> 9) * 8) +
                       uVar25 * 0x18);
          local_4e8 = *(double *)
                       (*(longlong *)(pFVar6 + ((auVar5._0_8_ & 0xffffffff) >> 9) * 8) + 0x10 +
                       uVar25 * 0x18);
          dVar39 = local_2d0._8_8_;
          local_2a8._8_4_ = local_2d0._8_4_;
          local_2a8._0_8_ = dVar39;
          local_2a8._12_4_ = local_2d0._12_4_;
          uVar25 = (ulonglong)(auVar5._4_4_ & 0x1ff);
          lVar29 = *(longlong *)(pFVar6 + (ulonglong)(auVar5._4_4_ >> 9) * 8);
          auVar5 = *(undefined1 (*) [16])(lVar29 + uVar25 * 0x18);
          dVar9 = local_2d0._0_8_;
          dVar42 = dVar9 - auVar5._0_8_;
          dVar4 = local_4e8 - *(double *)(lVar29 + 0x10 + uVar25 * 0x18);
          dVar37 = auVar5._8_8_;
          local_328._8_4_ = auVar5._8_4_;
          local_328._0_8_ = dVar37;
          local_328._12_4_ = auVar5._12_4_;
          dVar10 = dVar39 - dVar37;
          dVar48 = *pdVar3 - dVar9;
          dVar46 = pdVar3[1] - dVar39;
          dVar43 = dVar10 * dVar10 + dVar42 * dVar42 + dVar4 * dVar4;
          if ((double)CONCAT44(uVar50,uVar49) <= dVar43 && dVar43 != (double)CONCAT44(uVar50,uVar49)
             ) {
            local_2e0 = __real_3ff0000000000000 / SQRT(dVar43);
            dVar42 = local_2e0 * dVar42;
            dVar10 = local_2e0 * dVar10;
            dVar4 = local_2e0 * dVar4;
            dVar40 = dVar48 * dVar42 + dVar46 * dVar10 + dVar4 * (local_2b0 - local_4e8);
            dVar43 = (local_2b0 - local_4e8) - dVar40 * dVar4;
            dVar48 = dVar48 - dVar40 * dVar42;
            dVar46 = dVar46 - dVar40 * dVar10;
            dVar40 = dVar46 * dVar46 + dVar48 * dVar48 + dVar43 * dVar43;
            if (__real_3e45798ee0000000 < dVar40) {
              local_2e8 = __real_3ff0000000000000 / SQRT(dVar40);
              dVar48 = dVar48 * local_2e8;
              dVar46 = dVar46 * local_2e8;
              dVar43 = dVar43 * local_2e8;
              dVar40 = dVar48 * dVar36 + dVar46 * dVar45 + dVar43 * dVar47;
              if (local_418 <= dVar40) {
                iVar26 = 3;
                dVar44 = dVar48 - dVar40 * dVar36;
                dVar41 = dVar46 - dVar40 * dVar45;
                dVar8 = dVar43 - dVar40 * dVar47;
                local_158._s_0.X = dVar10 * dVar47 - dVar4 * dVar45;
                local_158._s_0.Y = dVar4 * dVar36 - dVar42 * dVar47;
                local_4e0 = dVar42 * dVar45 - dVar10 * dVar36;
                dVar36 = dVar46 - (dVar41 + dVar41);
                local_140 = dVar43 * dVar10 - dVar46 * dVar4;
                dVar47 = dVar43 - (dVar8 + dVar8);
                local_138 = dVar4 * dVar48 - dVar42 * dVar43;
                dVar45 = dVar48 - (dVar44 + dVar44);
                local_130 = dVar42 * dVar46 - dVar48 * dVar10;
                local_128 = dVar47 * dVar10 - dVar36 * dVar4;
                local_120 = dVar45 * dVar4 - dVar47 * dVar42;
                local_118 = dVar36 * dVar42 - dVar45 * dVar10;
                if (dVar40 < local_410) {
                  local_100 = local_130 + local_4e0;
                  local_e8 = local_118 + local_4e0;
                  local_110 = local_140 + local_158._s_0.X;
                  iVar26 = 5;
                  local_108 = local_138 + local_158._s_0.Y;
                  local_f8 = local_128 + local_158._s_0.X;
                  local_f0 = local_120 + local_158._s_0.Y;
                }
                local_3a8._s_0.X =
                     (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
                local_3a8._s_0.Y =
                     (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
                local_3a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                local_350 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                local_338 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                local_368 = this->OnPlaneTolerance;
                local_390 = local_450._s_0.X * local_368;
                dStack_388 = local_450._s_0.Y * local_368;
                local_380 = local_450._s_0.Z * local_368;
                local_378._8_4_ = SUB84(local_438._s_0.Y * local_368,0);
                local_378._0_8_ = local_438._s_0.X * local_368;
                local_378._12_4_ = (int)((ulonglong)(local_438._s_0.Y * local_368) >> 0x20);
                local_368 = local_438._s_0.Z * local_368;
                local_3c8._s_0.X =
                     (dVar9 + *(double *)(lVar29 + uVar25 * 0x18)) * __real_3fe0000000000000;
                local_3c8._s_0.Y = (dVar39 + dVar37) * __real_3fe0000000000000;
                local_3c8._s_0.Z =
                     (local_4e8 + *(double *)(lVar29 + 0x10 + uVar25 * 0x18)) *
                     __real_3fe0000000000000;
                local_360 = local_3a8._s_0.X;
                local_358 = local_3a8._s_0.Y;
                local_348 = local_3a8._s_0.X;
                local_340 = local_3a8._s_0.Y;
                local_158._s_0.Z = local_4e0;
                `UE::Geometry::FConvexDecomposition3::SplitWorstHelper'::__l2::FConvexEdgeCandidates
                ::AddMultiple(&local_498,this_00,(TVector<double> *)&local_3c8._s_0,
                              (TVector<double> *)&local_158._s_0,(TVector<double> *)&local_3a8._s_0,
                              iVar26,dVar40);
              }
            }
            uVar49 = SUB84(__real_3e45798ee0000000,0);
            uVar50 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          }
        }
      }
      uVar23 = (uint)uVar30 + 1;
      uVar30 = (ulonglong)uVar23;
      uVar35 = SUB84(__real_3ff0000000000000,0);
      uVar38 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      if ((int)uVar23 < (int)uVar33) {
        do {
          uVar25 = (ulonglong)((uint)uVar30 & 0x1ff);
          lVar29 = *(longlong *)
                    ((this_00->InternalGeo).EdgeRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                    (uVar30 >> 9) * 8);
          if ((*(short *)(lVar29 + uVar25 * 2) != 0) && (*(short *)(lVar29 + uVar25 * 2) != -1))
          goto LAB_1433d6330;
          uVar23 = (uint)uVar30 + 1;
          uVar30 = (ulonglong)uVar23;
        } while ((int)uVar23 < (int)uVar33);
      }
    } while (uVar23 != uVar33);
    uVar49 = (undefined4)local_408;
    uVar50 = (undefined4)((ulonglong)local_408 >> 0x20);
    local_4e0 = (double)CONCAT44(local_4e0._4_4_,(int)local_470);
    local_4e8 = (double)CONCAT44(local_4e8._4_4_,uVar13);
    uVar23 = local_4f8[0];
  }
  iVar26 = this->MaxConvexEdgePlanes;
  local_4b0.SpatialLevels = 10;
  local_4b0.Order.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4b0.Order.ArrayNum = 0;
  local_4b0.Order.ArrayMax = 0;
  iStack_3e0 = (int)local_470;
  local_3e8 = local_478;
  if ((int)local_470 < 0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar20) {
      pcVar7 = (code *)swi(3);
      uVar16 = (*pcVar7)();
      return (bool)uVar16;
    }
    iStack_3e0 = (int)local_4e0;
  }
  iVar24 = (int)local_480;
  local_3d8 = local_488;
  if (((int)local_480 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar20)) {
    pcVar7 = (code *)swi(3);
    uVar16 = (*pcVar7)();
    return (bool)uVar16;
  }
  iStack_3d0 = iVar24;
  iVar24 = (int)local_490;
  local_3f8 = local_498;
  if (((int)local_490 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar20)) {
    pcVar7 = (code *)swi(3);
    uVar16 = (*pcVar7)();
    return (bool)uVar16;
  }
  local_318._12_4_ = uStack_3dc;
  local_318.ArrayNum = iStack_3e0;
  local_308._12_4_ = uStack_3cc;
  local_308.ArrayNum = iStack_3d0;
  local_318.DataPtr = local_3e8;
  iStack_3f0 = iVar24;
  local_2f8._12_4_ = uStack_3ec;
  local_2f8.ArrayNum = iVar24;
  local_2f8.DataPtr = local_3f8;
  local_308.DataPtr = local_3d8;
  FPriorityOrderPoints::ComputeUniformSpaced(&local_4b0,&local_2f8,&local_308,&local_318,iVar26,4);
  uVar30 = uVar28;
  uVar25 = uVar28;
  if (0 < local_4b0.Order.ArrayNum) {
    do {
      this_00 = local_400;
      if ((int)(this->MaxConvexEdgePlanes + uVar23) <= (int)local_4f8[0]) break;
      uVar22 = (uint)uVar30;
      uVar33 = uVar21;
      if ((int)uVar22 < local_4b0.Order.ArrayNum) {
        uVar33 = ~uVar22 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        uVar16 = (*pcVar7)();
        return (bool)uVar16;
      }
      uVar33 = *(uint *)(local_4b0.Order.AllocatorInstance.Data + uVar25);
      uVar32 = uVar27;
      if ((int)uVar33 < (int)local_460) {
        uVar32 = ~uVar33 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        uVar16 = (*pcVar7)();
        return (bool)uVar16;
      }
      _Src = (ForAnyElementType *)((longlong)(int)uVar33 * 0xa8 + (longlong)local_468);
      if ((&local_500 == _Src) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar20)) {
        pcVar7 = (code *)swi(3);
        uVar16 = (*pcVar7)();
        return (bool)uVar16;
      }
      iVar26 = *(int *)&_Src[0x14].Data;
      if (iVar26 != 0) {
        iVar24 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x20,8,iVar26,&local_500,(int *)local_4f8,(int *)(local_4f8 + 1));
        memcpy(local_500.Data + (longlong)iVar24 * 0x20,_Src,(longlong)iVar26 << 5);
      }
      uVar30 = (ulonglong)(uVar22 + 1);
      uVar25 = uVar25 + 4;
      this_00 = local_400;
    } while ((int)(uVar22 + 1) < local_4b0.Order.ArrayNum);
  }
  dVar47 = local_458;
  uVar30 = 0xffffffff;
  uVar23 = 0xffffffff;
  uVar35 = (undefined4)__real_7fefffffffffffff;
  uVar38 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  local_4e0 = (double)CONCAT44(local_4e0._4_4_,0xffffffff);
  local_178 = 0.0;
  dStack_170 = 0.0;
  local_1e8 = (void *)0x0;
  local_1e0 = 0;
  local_1d8 = (void *)0x0;
  local_1d0 = 0;
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  local_1b8 = (void *)0x0;
  local_1b0 = 0;
  local_1a8 = (void *)0x0;
  local_1a0 = 0;
  local_198 = (void *)0x0;
  local_190 = 0;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_168 = '\0';
  if ((this->bTreatAsSolid == false) || (this_00->bGeometryVolumeUnreliable != false)) {
    bVar20 = false;
  }
  else {
    bVar20 = true;
  }
  if (0 < (int)local_4f8[0]) {
    do {
      uVar33 = (uint)uVar28;
      uVar23 = uVar27;
      if ((int)uVar33 < (int)local_4f8[0]) {
        uVar23 = ~uVar33 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        uVar16 = (*pcVar7)();
        return (bool)uVar16;
      }
      Geometry::`anonymous_namespace'::FPartialCutResult::FPartialCutResult
                (&local_278,this_00,
                 (TPlane3<double> *)(local_500.Data + (longlong)(int)uVar33 * 0x20),
                 this->OnPlaneTolerance,bVar20,dVar47);
      if (local_1f8 == '\0') {
        lVar29 = (longlong)&local_208;
        lVar31 = 2;
        do {
          puVar1 = (undefined8 *)(lVar29 + 0xfffffffffffffff0);
          lVar29 = lVar29 + 0xfffffffffffffff0;
          lVar31 = lVar31 + -1;
          if ((void *)*puVar1 != (void *)0x0) {
            FMemory::Free((void *)*puVar1);
          }
        } while (lVar31 != 0);
        if (local_258[4] != (void *)0x0) {
          FMemory::Free(local_258[4]);
        }
        if (local_258[2] != (void *)0x0) {
          FMemory::Free(local_258[2]);
        }
        ppvVar34 = local_258 + 2;
        lVar29 = 2;
        do {
          ppvVar2 = ppvVar34 + -2;
          ppvVar34 = ppvVar34 + -2;
          lVar29 = lVar29 + -1;
          if (*ppvVar2 != (void *)0x0) {
            FMemory::Free(*ppvVar2);
          }
        } while (lVar29 != 0);
      }
      else {
        dVar36 = (local_208 + dStack_200) - this_00->GeoVolume;
        if (local_4d8 == uVar33) {
          dVar36 = dVar36 * this->CutLargestAxisErrorScale;
        }
        if (dVar36 < (double)CONCAT44(uVar38,uVar35)) {
          uVar35 = SUB84(dVar36,0);
          uVar38 = (undefined4)((ulonglong)dVar36 >> 0x20);
          if (local_1e8 != (void *)0x0) {
            FMemory::Free(local_1e8);
          }
          local_1e8 = local_278;
          local_1e0 = local_270;
          local_270 = 0;
          local_278 = (void *)0x0;
          if (local_1d8 != (void *)0x0) {
            FMemory::Free(local_1d8);
          }
          local_1d8 = local_268;
          local_1d0 = local_260;
          local_260 = 0;
          local_268 = (void *)0x0;
          if (local_1c8 != (void *)0x0) {
            FMemory::Free(local_1c8);
          }
          local_1c8 = local_258[0];
          local_1c0 = local_258[1];
          local_258[1] = (void *)0x0;
          local_258[0] = (void *)0x0;
          if (local_1b8 != (void *)0x0) {
            FMemory::Free(local_1b8);
          }
          local_1b8 = local_258[2];
          local_1b0 = local_258[3];
          local_258[3] = (void *)0x0;
          local_258[2] = (void *)0x0;
          if (local_1a8 != (void *)0x0) {
            FMemory::Free(local_1a8);
          }
          local_1a8 = local_258[4];
          local_1a0 = local_258[5];
          local_258[5] = (void *)0x0;
          local_258[4] = (void *)0x0;
          if (local_198 != (void *)0x0) {
            FMemory::Free(local_198);
          }
          local_198 = local_258[6];
          local_190 = local_258[7];
          local_258[7] = (void *)0x0;
          local_258[6] = (void *)0x0;
          if (local_188 != (void *)0x0) {
            FMemory::Free(local_188);
          }
          local_188 = local_258[8];
          local_180 = local_258[9];
          local_168 = local_1f8;
          local_258[8] = (void *)0x0;
          local_258[9] = (void *)0x0;
          local_178 = local_208;
          dStack_170 = dStack_200;
          uVar30 = uVar28;
        }
        lVar29 = (longlong)&local_208;
        lVar31 = 2;
        do {
          puVar1 = (undefined8 *)(lVar29 + 0xfffffffffffffff0);
          lVar29 = lVar29 + 0xfffffffffffffff0;
          lVar31 = lVar31 + -1;
          if ((void *)*puVar1 != (void *)0x0) {
            FMemory::Free((void *)*puVar1);
          }
        } while (lVar31 != 0);
        if (local_258[4] != (void *)0x0) {
          FMemory::Free(local_258[4]);
        }
        if (local_258[2] != (void *)0x0) {
          FMemory::Free(local_258[2]);
        }
        ppvVar34 = local_258 + 2;
        lVar29 = 2;
        do {
          ppvVar2 = ppvVar34 + -2;
          ppvVar34 = ppvVar34 + -2;
          lVar29 = lVar29 + -1;
          if (*ppvVar2 != (void *)0x0) {
            FMemory::Free(*ppvVar2);
          }
        } while (lVar29 != 0);
      }
      uVar23 = (uint)uVar30;
      if (local_278 != (void *)0x0) {
        FMemory::Free(local_278);
      }
      uVar28 = (ulonglong)(uVar33 + 1);
    } while ((int)(uVar33 + 1) < (int)local_4f8[0]);
    local_4e0 = (double)CONCAT44(local_4e0._4_4_,uVar23);
  }
  iVar26 = (this->Decomposition).Array.ArrayNum;
  if (uVar23 == 0xffffffff) {
    lVar29 = (longlong)(int)local_4e8._0_4_;
    if ((int)local_4e8._0_4_ < iVar26) {
      uVar27 = local_4d4;
    }
    if ((uVar27 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar7 = (code *)swi(3);
      uVar16 = (*pcVar7)();
      return (bool)uVar16;
    }
    bVar20 = false;
    *(undefined1 *)
     (*(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + lVar29 * 8) + 0x2c9) = 1;
  }
  else {
    bVar18 = this->bSplitDisconnectedComponents;
    dVar36 = this->ConnectedComponentTolerance;
    dVar45 = this->OnPlaneTolerance;
    local_4d0[0] = 0xffffffff;
    if ((int)uVar23 < (int)local_4f8[0]) {
      uVar27 = ~uVar23 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar7 = (code *)swi(3);
      uVar16 = (*pcVar7)();
      return (bool)uVar16;
    }
    iVar24 = local_4e8._0_4_;
    lVar29 = (longlong)(int)uVar23 * 0x20;
    Geometry::`anonymous_namespace'::FPartialCutResult::ApplyToGeo
              (&local_1e8,&this->Decomposition,local_4e8._0_4_,
               (TPlane3<double> *)(local_500.Data + lVar29),(int *)local_4d0,dVar45,dVar36,
               &this->NegativeSpace,bVar20,bVar18,dVar47);
    local_4d4 = local_4d0[0];
    if ((int)local_4e0 < (int)local_4f8[0]) {
      uVar21 = ~uVar23 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar7 = (code *)swi(3);
      uVar16 = (*pcVar7)();
      return (bool)uVar16;
    }
    local_298._s_0.X = (double)*(undefined8 *)(local_500.Data + lVar29);
    local_298._s_0.Y = (double)*(undefined8 *)(local_500.Data + lVar29 + 8);
    local_298._s_0.Z = (double)*(undefined8 *)(local_500.Data + lVar29 + 0x10);
    uStack_280 = *(undefined8 *)(local_500.Data + lVar29 + 0x10 + 8);
    UpdateProximitiesAfterSplit
              (this,iVar24,iVar26,(TPlane3<double> *)&local_298._s_0,local_4d4,
               (double)CONCAT44(uVar50,uVar49));
    bVar20 = true;
  }
  Geometry::`anonymous_namespace'::FPartialCutResult::~FPartialCutResult(&local_1e8);
  if (local_4b0.Order.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b0.Order.AllocatorInstance.Data);
  }
  if (local_468 != (void *)0x0) {
    FMemory::Free(local_468);
  }
  if (local_478 != (float *)0x0) {
    FMemory::Free(local_478);
  }
  if (local_488 != (float *)0x0) {
    FMemory::Free(local_488);
  }
  if (local_498 != (TVector<double> *)0x0) {
    FMemory::Free(local_498);
  }
  if (local_500.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.Data);
    return bVar20;
  }
  return bVar20;
}

// UpdateProximitiesAfterSplit @ 1433dfbf0

void __thiscall
UE::Geometry::FConvexDecomposition3::UpdateProximitiesAfterSplit
          (FConvexDecomposition3 *this,int param_1,int param_2,TPlane3<double> *param_3,int param_4,
          double param_5)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  undefined1 auVar3 [16];
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  FConvexDecomposition3 *pFVar16;
  FConvexDecomposition3 *pFVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  longlong lVar23;
  FScriptContainerElement FVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_> *pTVar34;
  int *piVar35;
  ulonglong uVar36;
  double dVar37;
  undefined1 local_347;
  undefined1 local_346;
  undefined1 local_345;
  undefined1 local_344;
  char local_343;
  uint local_340 [2];
  FConvexDecomposition3 *local_338;
  double local_330;
  double dStack_328;
  double local_320;
  double dStack_318;
  uint local_310 [2];
  TArray<UE::Geometry::FConvexDecomposition3::FProximity,TSizedDefaultAllocator<32>_> *local_308;
  uint local_300 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_2f8;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  int *local_2b8;
  uint local_2b0;
  ulonglong local_2a8;
  uint local_2a0;
  uint local_298 [2];
  int local_290 [2];
  ulonglong local_288;
  ForAnyElementType local_280;
  int local_278 [2];
  longlong local_270;
  FConvexDecomposition3 *local_268;
  TPlane3<double> *local_260;
  TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_> *local_258;
  int iStack_250;
  int iStack_24c;
  int local_248;
  undefined1 local_240 [16];
  int local_230;
  uint local_228;
  uint uStack_224;
  uint local_220;
  uint uStack_21c;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  FScriptContainerElement *local_1d8;
  uint *local_1d0;
  FScriptContainerElement *local_1c8;
  uint *local_1c0;
  uint *local_1b8;
  int *local_1b0;
  uint *local_1a8;
  int *local_1a0;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar21 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_288 = (ulonglong)param_1;
  if ((param_2 == param_4) && (param_4 + 1 == (this->Decomposition).Array.ArrayNum)) {
    bVar19 = true;
  }
  else {
    bVar19 = false;
  }
  local_2b0 = (this->Proximities).ArrayNum;
  local_258 = &this->DecompositionToProximity;
  local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.ArrayNum = 0;
  local_2f8.ArrayMax = 0;
  iVar20 = *(int *)&(this->DecompositionToProximity).field_0x48;
  iStack_24c = -1;
  if (iVar20 == 0) {
    local_248 = -1;
  }
  else {
    puVar22 = *(undefined1 **)&(this->DecompositionToProximity).field_0x40;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = &(this->DecompositionToProximity).field_0x38;
    }
    local_248 = *(int *)(puVar22 + ((longlong)iVar20 - 1U & local_288) * 4);
    iStack_24c = local_248;
    if (local_248 != -1) {
      do {
        local_248 = *(int *)(*(longlong *)local_258 + 8 + (longlong)iStack_24c * 0x10);
        if (*(int *)(*(longlong *)local_258 + (longlong)iStack_24c * 0x10) == param_1) break;
        iStack_24c = local_248;
      } while (local_248 != -1);
    }
  }
  piVar35 = &(this->Decomposition).Array.ArrayNum;
  local_240._8_4_ = param_1;
  local_240._0_8_ = local_258;
  local_240._12_4_ = iStack_24c;
  local_230 = local_248;
  uVar33 = 0;
  uVar26 = 0;
  local_338 = this;
  local_2b8 = piVar35;
  iStack_250 = param_1;
  if (iStack_24c != -1) {
    local_2a0 = (uint)~param_1 >> 0x1f;
    pTVar34 = &this->Proximities;
    iVar20 = iStack_24c;
    local_308 = pTVar34;
    do {
      uVar36 = local_288;
      uVar31 = local_2a0;
      local_340[0] = *(uint *)(*(longlong *)local_240._0_8_ + 4 + (longlong)iVar20 * 0x10);
      lVar27 = (longlong)(int)local_340[0];
      uVar32 = uVar33;
      if ((int)local_340[0] < (this->Proximities).ArrayNum) {
        uVar32 = ~local_340[0] >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (pTVar34->AllocatorInstance).Data;
      lVar28 = (longlong)(int)local_340[0];
      pFVar2 = pFVar4 + lVar27 * 0x38 + 8;
      dVar8 = *(double *)pFVar2;
      dVar9 = *(double *)(pFVar2 + 8);
      pFVar4 = pFVar4 + lVar27 * 0x38 + 0x18;
      dVar10 = *(double *)pFVar4;
      dVar13 = *(double *)(pFVar4 + 8);
      uVar32 = uVar33;
      if ((int)local_340[0] < pTVar34->ArrayNum) {
        uVar32 = ~local_340[0] >> 0x1f;
      }
      local_330 = dVar8;
      dStack_328 = dVar9;
      local_320 = dVar10;
      dStack_318 = dVar13;
      if ((uVar32 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar5 = *(ulonglong *)((pTVar34->AllocatorInstance).Data + lVar28 * 0x38);
      local_2a8 = uVar5 >> 0x20;
      if ((int)uVar5 != param_1) {
        local_2a8 = uVar5;
      }
      local_2a8 = local_2a8 & 0xffffffff;
      uVar32 = uVar33;
      if (param_1 < *piVar35) {
        uVar32 = uVar31;
      }
      if ((uVar32 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar16 = local_338;
      dStack_2e0 = this->ProximityTolerance;
      lVar27 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + uVar36 * 8);
      dVar14 = *(double *)(lVar27 + 0x2b8) + dStack_2e0;
      uVar32 = uVar26;
      if (param_1 < (local_338->Decomposition).Array.ArrayNum) {
        uVar32 = uVar31;
      }
      dStack_2c0 = *(double *)(lVar27 + 0x2c0) + dStack_2e0;
      local_2d8 = *(double *)(lVar27 + 0x2a8) - dStack_2e0;
      dVar11 = *(double *)(lVar27 + 0x2b0) + dStack_2e0;
      dVar12 = *(double *)(lVar27 + 0x298) - dStack_2e0;
      dStack_2e0 = *(double *)(lVar27 + 0x2a0) - dStack_2e0;
      local_2e8 = dVar12;
      dStack_2d0 = dVar11;
      local_2c8 = dVar14;
      if ((uVar32 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar17 = local_338;
      lVar27 = *(longlong *)((pFVar16->Decomposition).Array.AllocatorInstance.Data + uVar36 * 8);
      uVar31 = uVar26;
      if (param_1 < (local_338->Decomposition).Array.ArrayNum) {
        uVar31 = local_2a0;
      }
      if ((uVar31 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar30 = *(longlong *)((pFVar17->Decomposition).Array.AllocatorInstance.Data + uVar36 * 8);
      iVar20 = *(int *)(lVar30 + 0x238);
      lVar29 = *(longlong *)(lVar30 + 0x230);
      lVar28 = lVar29 + (longlong)iVar20 * 0xc;
      while( true ) {
        if (*(int *)(lVar30 + 0x238) != iVar20) {
          local_347 = 0;
          `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_347);
        }
        piVar35 = local_2b8;
        if (lVar29 == lVar28) break;
        lVar23 = 0;
        do {
          uVar31 = *(uint *)(lVar29 + lVar23 * 4);
          uVar36 = (ulonglong)(uVar31 & 0x1ff);
          lVar6 = *(longlong *)(*(longlong *)(lVar27 + 0x10) + (ulonglong)(uVar31 >> 9) * 8);
          pdVar1 = (double *)(lVar6 + uVar36 * 0x18);
          local_188 = *(double *)(lVar6 + 0x10 + uVar36 * 0x18);
          dVar37 = (dVar9 * pdVar1[1] + dVar8 * *pdVar1 + dVar10 * local_188) - dVar13;
          if ((double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar15,SUB84(dVar37,0) & uVar21)
              < local_338->ProximityTolerance) {
            uVar32 = (uint)local_2a8;
            uVar31 = uVar26;
            if ((int)uVar32 < *local_2b8) {
              uVar31 = ~uVar32 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar27 = *(longlong *)
                      ((this->Decomposition).Array.AllocatorInstance.Data +
                      (longlong)(int)uVar32 * 8);
            local_168 = *(double *)(lVar27 + 0x2a8);
            dStack_160 = *(double *)(lVar27 + 0x2b0);
            local_178 = *(double *)(lVar27 + 0x298);
            dStack_170 = *(double *)(lVar27 + 0x2a0);
            local_158 = *(undefined1 (*) [16])(lVar27 + 0x2b8);
            if (((((dStack_160 <= dVar12) || (dVar11 <= local_178)) ||
                 (local_158._0_8_ <= dStack_2e0)) ||
                ((dVar14 <= dStack_170 || (local_158._8_8_ <= local_2d8)))) ||
               (dStack_2c0 <= local_168)) goto LAB_1433e02f4;
            lVar27 = (longlong)(int)local_340[0];
            uVar31 = uVar26;
            if ((int)local_340[0] < pTVar34->ArrayNum) {
              uVar31 = ~local_340[0] >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined8 *)((pTVar34->AllocatorInstance).Data + lVar27 * 0x38 + 0x30) =
                 0x7fefffffffffffff;
            goto LAB_1433e03d1;
          }
          lVar23 = lVar23 + 1;
        } while (lVar23 < 3);
        lVar29 = lVar29 + 0xc;
      }
LAB_1433e02f4:
      if (((local_2f8.AllocatorInstance.Data <= (FScriptContainerElement *)local_340) &&
          ((FScriptContainerElement *)local_340 <
           local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 4)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar20 = local_2f8.ArrayNum;
      if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
        iVar20 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
      }
      local_2f8.ArrayNum = iVar20 + 1;
      *(uint *)(local_2f8.AllocatorInstance.Data + (longlong)iVar20 * 4) = local_340[0];
LAB_1433e03d1:
      iVar20 = *piVar35;
      if (param_2 < iVar20) {
        lVar27 = (longlong)param_2 * 8;
        uVar31 = param_2;
        do {
          uVar25 = ~uVar31 >> 0x1f;
          uVar32 = uVar26;
          if ((int)uVar31 < iVar20) {
            uVar32 = uVar25;
          }
          local_270 = lVar27;
          if ((uVar32 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar16 = local_338;
          dStack_2e0 = this->ProximityTolerance;
          lVar28 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + lVar27);
          dVar14 = *(double *)(lVar28 + 0x2b8) + dStack_2e0;
          uVar32 = uVar26;
          if ((int)uVar31 < (local_338->Decomposition).Array.ArrayNum) {
            uVar32 = uVar25;
          }
          dStack_2c0 = *(double *)(lVar28 + 0x2c0) + dStack_2e0;
          local_2d8 = *(double *)(lVar28 + 0x2a8) - dStack_2e0;
          dVar11 = *(double *)(lVar28 + 0x2b0) + dStack_2e0;
          dVar12 = *(double *)(lVar28 + 0x298) - dStack_2e0;
          dStack_2e0 = *(double *)(lVar28 + 0x2a0) - dStack_2e0;
          local_2e8 = dVar12;
          dStack_2d0 = dVar11;
          local_2c8 = dVar14;
          if ((uVar32 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar17 = local_338;
          lVar28 = *(longlong *)((pFVar16->Decomposition).Array.AllocatorInstance.Data + lVar27);
          uVar32 = uVar26;
          if ((int)uVar31 < (local_338->Decomposition).Array.ArrayNum) {
            uVar32 = uVar25;
          }
          if ((uVar32 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar30 = *(longlong *)((pFVar17->Decomposition).Array.AllocatorInstance.Data + lVar27);
          iVar20 = *(int *)(lVar30 + 0x238);
          lVar29 = *(longlong *)(lVar30 + 0x230);
          lVar27 = lVar29 + (longlong)iVar20 * 0xc;
          while( true ) {
            if (*(int *)(lVar30 + 0x238) != iVar20) {
              local_346 = 0;
              `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_346);
            }
            pTVar34 = local_308;
            if (lVar29 == lVar27) break;
            lVar23 = 0;
            do {
              uVar32 = *(uint *)(lVar29 + lVar23 * 4);
              uVar36 = (ulonglong)(uVar32 & 0x1ff);
              lVar6 = *(longlong *)(*(longlong *)(lVar28 + 0x10) + (ulonglong)(uVar32 >> 9) * 8);
              pdVar1 = (double *)(lVar6 + uVar36 * 0x18);
              local_188 = *(double *)(lVar6 + 0x10 + uVar36 * 0x18);
              dVar37 = (dVar9 * pdVar1[1] + dVar8 * *pdVar1 + dVar10 * local_188) - dVar13;
              if ((double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar15,
                                   SUB84(dVar37,0) & uVar21) < local_338->ProximityTolerance) {
                uVar25 = (uint)local_2a8;
                uVar32 = 0;
                if ((int)uVar25 < *local_2b8) {
                  uVar32 = ~uVar25 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pTVar34 = local_308;
                lVar27 = *(longlong *)
                          ((this->Decomposition).Array.AllocatorInstance.Data +
                          (longlong)(int)uVar25 * 8);
                local_138 = *(double *)(lVar27 + 0x2a8);
                dStack_130 = *(double *)(lVar27 + 0x2b0);
                local_148 = *(double *)(lVar27 + 0x298);
                dStack_140 = *(double *)(lVar27 + 0x2a0);
                local_128 = *(undefined1 (*) [16])(lVar27 + 0x2b8);
                if ((((dVar12 < dStack_130) && (local_148 < dVar11)) &&
                    (dStack_2e0 < local_128._0_8_)) &&
                   (((dStack_140 < dVar14 && (local_2d8 < local_128._8_8_)) &&
                    (local_138 < dStack_2c0)))) {
                  iVar20 = local_308->ArrayNum;
                  local_220 = uVar31;
                  uStack_21c = uVar25;
                  if (iVar20 == local_308->ArrayMax) {
                    iVar20 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x838,&local_308->AllocatorInstance,&local_308->ArrayMax);
                  }
                  lVar27 = (longlong)iVar20 * 0x38;
                  pTVar34->ArrayNum = iVar20 + 1;
                  pFVar2 = (pTVar34->AllocatorInstance).Data;
                  *(ulonglong *)(pFVar2 + lVar27) = CONCAT44(uStack_21c,local_220);
                  *(double *)(pFVar2 + lVar27 + 8) = dVar8;
                  *(double *)(pFVar2 + lVar27 + 8 + 8) = dVar9;
                  *(undefined8 *)(pFVar2 + lVar27 + 0x30) = 0x7fefffffffffffff;
                  *(double *)(pFVar2 + lVar27 + 0x18) = dVar10;
                  *(double *)(pFVar2 + lVar27 + 0x18 + 8) = dVar13;
                  *(undefined2 *)(pFVar2 + lVar27 + 0x28) = 0x101;
                }
                goto LAB_1433e0877;
              }
              lVar23 = lVar23 + 1;
            } while (lVar23 < 3);
            lVar29 = lVar29 + 0xc;
          }
LAB_1433e0877:
          uVar31 = uVar31 + 1;
          lVar27 = local_270 + 8;
          iVar20 = *local_2b8;
          piVar35 = local_2b8;
          local_270 = lVar27;
        } while ((int)uVar31 < iVar20);
      }
      local_240._12_4_ = local_230;
      if (local_230 == -1) break;
      iVar20 = local_230;
      do {
        local_230 = *(int *)(*(longlong *)local_240._0_8_ + 8 + (longlong)iVar20 * 0x10);
        if (*(int *)(*(longlong *)local_240._0_8_ + (longlong)iVar20 * 0x10) == local_240._8_4_)
        break;
        iVar20 = local_230;
      } while (local_230 != -1);
      local_240._12_4_ = iVar20;
    } while (iVar20 != -1);
  }
  uVar33 = local_2b0;
  local_310[0] = local_2b0;
  if ((int)local_2b0 < (this->Proximities).ArrayNum) {
    do {
      uVar31 = 0;
      if ((int)uVar33 < (this->Proximities).ArrayNum) {
        uVar31 = ~uVar33 >> 0x1f;
      }
      local_310[0] = uVar33;
      if ((uVar31 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_1d0 = local_310;
      local_1d8 = (this->Proximities).AllocatorInstance.Data + (longlong)(int)uVar33 * 0x38;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                  *)&this->DecompositionToProximity,
                 (TPairInitializer<int_const_&,int_const_&> *)local_1e8,(bool *)&local_1d8);
      lVar27 = (longlong)(int)local_310[0];
      uVar33 = uVar26;
      if ((int)local_310[0] < (this->Proximities).ArrayNum) {
        uVar33 = ~local_310[0] >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_1c0 = local_310;
      local_1c8 = (this->Proximities).AllocatorInstance.Data + lVar27 * 0x38 + 4;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                  *)&this->DecompositionToProximity,
                 (TPairInitializer<int_const_&,int_const_&> *)(local_1e8 + 4),(bool *)&local_1c8);
      local_310[0] = local_310[0] + 1;
      uVar33 = local_310[0];
    } while ((int)local_310[0] < (this->Proximities).ArrayNum);
  }
  DeleteProximity(this,&local_2f8,true);
  local_343 = `UE::Geometry::FConvexDecomposition3::UpdateProximitiesAfterSplit'::__l2::<lambda_1>::
              operator()(&local_338,param_1,param_3);
  uVar26 = param_4 - param_2;
  local_280.Data = (FScriptContainerElement *)0x0;
  local_278[0] = 0;
  local_278[1] = 0;
  if ((int)uVar26 < 1) {
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
  }
  else {
    iVar20 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,uVar26,&local_280,local_278,local_278 + 1);
    memset(local_280.Data + iVar20,0,(longlong)(int)uVar26);
  }
  if (param_2 < param_4) {
    local_270 = 0;
    uVar36 = (longlong)param_2 * 8;
    uVar26 = param_2;
    do {
      pFVar16 = local_338;
      uVar33 = 0;
      if ((int)uVar26 < (local_338->Decomposition).Array.ArrayNum) {
        uVar33 = ~uVar26 >> 0x1f;
      }
      local_288 = uVar36;
      if ((uVar33 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar17 = local_338;
      lVar27 = *(longlong *)((pFVar16->Decomposition).Array.AllocatorInstance.Data + uVar36);
      uVar33 = 0;
      if ((int)uVar26 < (local_338->Decomposition).Array.ArrayNum) {
        uVar33 = ~uVar26 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar30 = *(longlong *)((pFVar17->Decomposition).Array.AllocatorInstance.Data + uVar36);
      iVar20 = *(int *)(lVar30 + 0x238);
      lVar29 = *(longlong *)(lVar30 + 0x230);
      lVar28 = lVar29 + (longlong)iVar20 * 0xc;
      while( true ) {
        if (*(int *)(lVar30 + 0x238) != iVar20) {
          local_345 = 0;
          `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_345);
        }
        if (lVar29 == lVar28) break;
        lVar23 = 0;
        do {
          uVar33 = *(uint *)(lVar29 + lVar23 * 4);
          uVar36 = (ulonglong)(uVar33 & 0x1ff);
          lVar6 = *(longlong *)(*(longlong *)(lVar27 + 0x10) + (ulonglong)(uVar33 >> 9) * 8);
          pdVar1 = (double *)(lVar6 + uVar36 * 0x18);
          local_188 = *(double *)(lVar6 + 0x10 + uVar36 * 0x18);
          dVar8 = (pdVar1[1] * (param_3->Normal).field0_0x0._s_0.Y +
                   *pdVar1 * (param_3->Normal).field0_0x0._s_0.X +
                  local_188 * (param_3->Normal).field0_0x0._s_0.Z) - param_3->Constant;
          if ((double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar15,SUB84(dVar8,0) & uVar21) <
              local_338->ProximityTolerance) {
            FVar24 = (FScriptContainerElement)0x1;
            goto LAB_1433e0c86;
          }
          lVar23 = lVar23 + 1;
        } while (lVar23 < 3);
        lVar29 = lVar29 + 0xc;
      }
      FVar24 = (FScriptContainerElement)0x0;
LAB_1433e0c86:
      uVar33 = 0;
      if ((int)(uVar26 - param_2) < local_278[0]) {
        uVar33 = ~(uVar26 - param_2) >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar26 = uVar26 + 1;
      uVar36 = local_288 + 8;
      local_280.Data[local_270] = FVar24;
      local_270 = local_270 + 1;
      local_288 = uVar36;
    } while ((int)uVar26 < param_4);
  }
  local_2b0 = (this->Proximities).ArrayNum;
  local_268 = this;
  local_260 = param_3;
  if (param_4 < (this->Decomposition).Array.ArrayNum) {
    uVar36 = (longlong)param_4 * 8;
    uVar26 = param_4;
    do {
      pFVar16 = local_338;
      uVar33 = 0;
      if ((int)uVar26 < (local_338->Decomposition).Array.ArrayNum) {
        uVar33 = ~uVar26 >> 0x1f;
      }
      local_2a8 = uVar36;
      if ((uVar33 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar17 = local_338;
      lVar27 = *(longlong *)((pFVar16->Decomposition).Array.AllocatorInstance.Data + uVar36);
      uVar33 = 0;
      if ((int)uVar26 < (local_338->Decomposition).Array.ArrayNum) {
        uVar33 = ~uVar26 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar30 = *(longlong *)((pFVar17->Decomposition).Array.AllocatorInstance.Data + uVar36);
      iVar20 = *(int *)(lVar30 + 0x238);
      lVar29 = *(longlong *)(lVar30 + 0x230);
      lVar28 = lVar29 + (longlong)iVar20 * 0xc;
      while( true ) {
        if (*(int *)(lVar30 + 0x238) != iVar20) {
          local_344 = 0;
          `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_344);
        }
        if (lVar29 == lVar28) break;
        lVar23 = 0;
        do {
          uVar33 = *(uint *)(lVar29 + lVar23 * 4);
          uVar36 = (ulonglong)(uVar33 & 0x1ff);
          lVar6 = *(longlong *)(*(longlong *)(lVar27 + 0x10) + (ulonglong)(uVar33 >> 9) * 8);
          pdVar1 = (double *)(lVar6 + uVar36 * 0x18);
          local_188 = *(double *)(lVar6 + 0x10 + uVar36 * 0x18);
          dVar8 = (pdVar1[1] * (param_3->Normal).field0_0x0._s_0.Y +
                   *pdVar1 * (param_3->Normal).field0_0x0._s_0.X +
                  local_188 * (param_3->Normal).field0_0x0._s_0.Z) - param_3->Constant;
          if ((double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar15,SUB84(dVar8,0) & uVar21) <
              local_338->ProximityTolerance) {
            if (local_343 != '\0') {
              `UE::Geometry::FConvexDecomposition3::UpdateProximitiesAfterSplit'::__l2::<lambda_2>::
              operator()(&local_268,uVar26,param_1);
            }
            if (param_2 < param_4) {
              lVar27 = 0;
              uVar33 = param_2;
              do {
                uVar31 = 0;
                if ((int)(uVar33 - param_2) < local_278[0]) {
                  uVar31 = ~(uVar33 - param_2) >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (local_280.Data[lVar27] != (FScriptContainerElement)0x0) {
                  uVar31 = 0;
                  if ((int)uVar26 < (this->Decomposition).Array.ArrayNum) {
                    uVar31 = ~uVar26 >> 0x1f;
                  }
                  local_300[0] = uVar33;
                  local_298[0] = uVar26;
                  if ((uVar31 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  dVar8 = this->ProximityTolerance;
                  lVar30 = (longlong)(int)local_300[0];
                  lVar28 = *(longlong *)
                            ((this->Decomposition).Array.AllocatorInstance.Data + local_2a8);
                  dVar11 = *(double *)(lVar28 + 0x2a8) - dVar8;
                  dVar14 = *(double *)(lVar28 + 0x2a0) - dVar8;
                  dVar10 = *(double *)(lVar28 + 0x2c0) + dVar8;
                  dVar9 = *(double *)(lVar28 + 0x2b0) + dVar8;
                  dVar13 = *(double *)(lVar28 + 0x2b8) + dVar8;
                  uVar31 = 0;
                  if ((int)local_300[0] < (this->Decomposition).Array.ArrayNum) {
                    uVar31 = ~local_300[0] >> 0x1f;
                  }
                  dVar8 = *(double *)(lVar28 + 0x298) - dVar8;
                  local_218 = dVar8;
                  dStack_210 = dVar14;
                  local_208 = dVar11;
                  dStack_200 = dVar9;
                  local_1f8 = dVar13;
                  dStack_1f0 = dVar10;
                  if ((uVar31 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar28 = *(longlong *)
                            ((this->Decomposition).Array.AllocatorInstance.Data + lVar30 * 8);
                  local_108 = *(double *)(lVar28 + 0x2a8);
                  dStack_100 = *(double *)(lVar28 + 0x2b0);
                  local_118 = *(double *)(lVar28 + 0x298);
                  dStack_110 = *(double *)(lVar28 + 0x2a0);
                  local_f8 = *(undefined1 (*) [16])(lVar28 + 0x2b8);
                  if ((((dVar8 < dStack_100) && (local_118 < dVar9)) && (dVar14 < local_f8._0_8_))
                     && (((dStack_110 < dVar13 && (dVar11 < local_f8._8_8_)) && (local_108 < dVar10)
                         ))) {
                    piVar35 = &(this->Proximities).ArrayMax;
                    local_228 = local_298[0];
                    uStack_224 = local_300[0];
                    iVar20 = (this->Proximities).ArrayNum;
                    if (iVar20 == *piVar35) {
                      iVar20 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x838,&(this->Proximities).AllocatorInstance,piVar35);
                    }
                    pFVar2 = (this->Proximities).AllocatorInstance.Data;
                    (this->Proximities).ArrayNum = iVar20 + 1;
                    lVar28 = (longlong)iVar20 * 0x38;
                    *(ulonglong *)(pFVar2 + lVar28) = CONCAT44(uStack_224,local_228);
                    dVar8 = (local_260->Normal).field0_0x0._s_0.Y;
                    *(double *)(pFVar2 + lVar28 + 8) = (local_260->Normal).field0_0x0._s_0.X;
                    *(double *)(pFVar2 + lVar28 + 8 + 8) = dVar8;
                    auVar3 = *(undefined1 (*) [16])
                              ((longlong)&(local_260->Normal).field0_0x0 + 0x10);
                    *(undefined2 *)(pFVar2 + lVar28 + 0x28) = 0x101;
                    *(undefined8 *)(pFVar2 + lVar28 + 0x30) = 0x7fefffffffffffff;
                    *(undefined1 (*) [16])(pFVar2 + lVar28 + 0x18) = auVar3;
                    local_1b0 = local_290;
                    local_290[0] = iVar20;
                    local_1b8 = local_298;
                    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<int_const_&,int_const_&>_>
                              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                                *)&this->DecompositionToProximity,
                               (TPairInitializer<int_const_&,int_const_&> *)local_1e0,
                               (bool *)&local_1b8);
                    local_1a8 = local_300;
                    local_1a0 = local_290;
                    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<int_const_&,int_const_&>_>
                              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                                *)&this->DecompositionToProximity,
                               (TPairInitializer<int_const_&,int_const_&> *)(local_1e0 + 4),
                               (bool *)&local_1a8);
                  }
                }
                uVar33 = uVar33 + 1;
                lVar27 = lVar27 + 1;
              } while ((int)uVar33 < param_4);
            }
            goto LAB_1433e125b;
          }
          lVar23 = lVar23 + 1;
        } while (lVar23 < 3);
        lVar29 = lVar29 + 0xc;
      }
LAB_1433e125b:
      uVar26 = uVar26 + 1;
      uVar36 = local_2a8 + 8;
      local_2a8 = uVar36;
    } while ((int)uVar26 < (this->Decomposition).Array.ArrayNum);
  }
  if ((bVar19) && (iVar20 = (this->Proximities).ArrayNum, iVar20 == local_2b0 + 1)) {
    uVar21 = 0;
    if ((int)(iVar20 - 1U) < iVar20) {
      uVar21 = ~(iVar20 - 1U) >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(double *)
     ((this->Proximities).AllocatorInstance.Data +
     (longlong)(this->Proximities).ArrayNum * 0x38 + -8) = param_5;
  }
  if (local_280.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data);
  }
  if (local_2f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.AllocatorInstance.Data);
  }
  return;
}

