// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// operator() @ 149b5e850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
`FPCGDistanceElement::ExecuteInternal'::__l73::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  longlong lVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *pTVar16;
  float *pfVar17;
  uint uVar18;
  uint uVar19;
  double *pdVar20;
  uint uVar21;
  ulonglong uVar22;
  TTransform<double> *this_00;
  longlong *plVar23;
  double *pdVar24;
  uint uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  undefined4 uVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 unaff_XMM15 [16];
  undefined1 auStackY_528 [32];
  undefined1 local_4f8 [8];
  longlong local_4f0;
  longlong local_4e8;
  uint local_4e0;
  int local_4dc;
  int local_4d8;
  double local_4d0;
  longlong local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  double local_4b0;
  double dStack_4a8;
  double local_4a0;
  double dStack_498;
  undefined8 local_490;
  double dStack_488;
  double local_480;
  undefined4 *local_478;
  longlong local_470 [2];
  undefined4 local_460;
  double local_458;
  double dStack_450;
  double local_448;
  longlong *local_440;
  uint *local_438;
  longlong *local_430;
  uint *local_428;
  uint local_418 [2];
  double *local_410;
  double *local_408;
  undefined8 local_400;
  TTransform<double> *local_3f8;
  double *local_3f0;
  double *local_3e8;
  undefined1 local_3e0 [16];
  double local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c4;
  TVector4<double>_u_0 local_3b8;
  double local_398;
  double dStack_390;
  double local_388;
  undefined8 local_380;
  TVector4<double>_u_0 local_378;
  double local_358;
  double dStack_350;
  double local_348;
  undefined8 local_340;
  undefined1 local_338 [16];
  double local_328;
  double local_320;
  double dStack_318;
  double dStack_310;
  undefined1 local_308 [12];
  undefined4 uStack_2fc;
  double dStack_2f8;
  double local_2f0;
  longlong local_2e8;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  longlong local_2b8;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  undefined1 local_288 [16];
  double local_278;
  undefined1 local_270 [16];
  double local_260;
  double local_258;
  double local_250;
  double dStack_248;
  double local_240;
  TMatrix<double> local_238;
  undefined1 local_1b8 [32];
  undefined1 local_198 [16];
  longlong local_178;
  int local_170;
  int local_16c;
  int local_168;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_528;
  uVar22 = (ulonglong)param_1;
  local_4d8 = param_3;
  local_478 = this;
  if ((param_1 != param_2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartReadIndex == StartWriteIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDistance.cpp"
                          ,0x13c,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    iVar13 = (*pcVar4)();
    return iVar13;
  }
  cVar12 = (**(code **)(**(longlong **)((longlong)this + 0x28) + 0x440))();
  if (cVar12 == '\0') {
    (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x638))
              (*(longlong **)((longlong)this + 0x30),*(undefined8 *)((longlong)this + 0x28),param_1,
               param_2);
  }
  (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x500))
            (*(longlong **)((longlong)this + 0x30),&local_178);
  (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x510))
            (*(longlong **)((longlong)this + 0x30),&local_2e8);
  (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x518))
            (*(longlong **)((longlong)this + 0x30),&local_2b8);
  if (*(char *)((longlong)this + 0x20) == '\0') {
    local_470[0] = 0;
    plVar15 = local_470;
    local_470[1] = 0;
    local_460 = 0;
  }
  else {
    plVar15 = (longlong *)
              (**(code **)(**(longlong **)((longlong)this + 0x28) + 0x4c8))
                        (*(longlong **)((longlong)this + 0x28),local_1b8,0);
  }
  local_4c8 = *plVar15;
  uStack_4c0 = plVar15[1];
  local_4b8 = plVar15[2];
  local_4dc = param_3 + param_1;
  if (param_1 < local_4dc) {
    local_4e8 = uVar22 * 8;
    uVar53 = SUB84(__real_3fe0000000000000,0);
    uVar54 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    uVar40 = (undefined4)__real_3fd0000000000000;
    uVar41 = (undefined4)((ulonglong)__real_3fd0000000000000 >> 0x20);
    local_4f0 = uVar22 * 0x18;
    do {
      uVar21 = (uint)uVar22;
      uVar25 = ~uVar21 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar21 < local_168) {
        uVar14 = uVar25;
      }
      local_4e0 = uVar25;
      if (uVar14 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          iVar13 = (*pcVar4)();
          return iVar13;
        }
      }
      uVar18 = (int)uVar21 >> 0x1f;
      this_00 = (TTransform<double> *)
                ((longlong)
                 (int)((longlong)((ulonglong)uVar18 << 0x20 | uVar22 & 0xffffffff) %
                      (longlong)local_16c) * (longlong)local_170 + local_178);
      uVar14 = 0;
      if ((int)uVar21 < local_2d8) {
        uVar14 = uVar25;
      }
      if (uVar14 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          iVar13 = (*pcVar4)();
          return iVar13;
        }
      }
      pdVar24 = (double *)
                ((longlong)
                 (int)((longlong)((ulonglong)uVar18 << 0x20 | uVar22 & 0xffffffff) %
                      (longlong)local_2dc) * (longlong)local_2e0 + local_2e8);
      uVar14 = 0;
      if ((int)uVar21 < local_2a8) {
        uVar14 = uVar25;
      }
      if (uVar14 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          iVar13 = (*pcVar4)();
          return iVar13;
        }
      }
      dVar26 = *(double *)((longlong)this + 0x10);
      pdVar20 = (double *)
                ((longlong)
                 (int)((longlong)((ulonglong)uVar18 << 0x20 | uVar22 & 0xffffffff) %
                      (longlong)local_2ac) * (longlong)local_2b0 + local_2b8);
      dVar32 = (dVar26 + pdVar20[1]) - (pdVar24[1] - dVar26);
      dVar37 = (dVar26 + *pdVar20) - (*pdVar24 - dVar26);
      dVar6 = (dVar26 + pdVar20[2]) - (pdVar24[2] - dVar26);
      dVar47 = dVar32 * (double)CONCAT44(uVar54,uVar53);
      dVar49 = dVar37 * (double)CONCAT44(uVar54,uVar53);
      dVar46 = dVar6 * (double)CONCAT44(uVar54,uVar53);
      dVar7 = dVar47 + (pdVar24[1] - dVar26);
      dVar9 = dVar49 + (*pdVar24 - dVar26);
      dVar42 = dVar46 + (pdVar24[2] - dVar26);
      auVar33._0_8_ =
           (dVar32 * dVar32 + dVar37 * dVar37 + dVar6 * dVar6) * (double)CONCAT44(uVar41,uVar40);
      auVar33._8_8_ = 0;
      unaff_XMM15 = sqrtpd(unaff_XMM15,auVar33);
      local_258 = unaff_XMM15._0_8_;
      UE::Math::TTransform<double>::ToMatrixWithScale(this_00,&local_238);
      local_270._8_4_ = SUB84(dVar47,0);
      local_270._0_8_ = dVar49;
      local_270._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
      auVar51._0_8_ =
           (double)CONCAT44((uint)((ulonglong)(local_238.M[0][0] * dVar49) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_238.M[0][0] * dVar49,0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar51._8_4_ = SUB84(local_238.M[0][1] * dVar49,0) & _UNK_15061cc88;
      auVar51._12_4_ = (uint)((ulonglong)(local_238.M[0][1] * dVar49) >> 0x20) & _UNK_15061cc8c;
      local_288._8_4_ = SUB84(dVar7,0);
      local_288._0_8_ = dVar9;
      local_288._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar29._0_8_ =
           (double)CONCAT44((uint)((ulonglong)(local_238.M[2][0] * dVar46) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_238.M[2][0] * dVar46,0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar29._8_4_ = SUB84(local_238.M[2][1] * dVar46,0) & _UNK_15061cc88;
      auVar29._12_4_ = (uint)((ulonglong)(local_238.M[2][1] * dVar46) >> 0x20) & _UNK_15061cc8c;
      dStack_498 = (double)CONCAT44((uint)((ulonglong)(local_238.M[1][0] * dVar47) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_238.M[1][0] * dVar47,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar51._0_8_ +
                   auVar29._0_8_;
      local_490 = (double)CONCAT44((uint)((ulonglong)(local_238.M[1][1] * dVar47) >> 0x20) &
                                   _UNK_15061cc8c,
                                   SUB84(local_238.M[1][1] * dVar47,0) & _UNK_15061cc88) +
                  auVar51._8_8_ + auVar29._8_8_;
      local_308._8_4_ = SUB84(local_490,0);
      local_308._0_8_ = dStack_498;
      dStack_488 = (double)CONCAT44((uint)((ulonglong)(local_238.M[1][2] * dVar47) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_238.M[1][2] * dVar47,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)CONCAT44((uint)((ulonglong)(local_238.M[0][2] * dVar49) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_238.M[0][2] * dVar49,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)CONCAT44((uint)((ulonglong)(local_238.M[2][2] * dVar46) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_238.M[2][2] * dVar46,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      uVar53 = SUB84(__real_3fe0000000000000,0);
      uVar54 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      local_4b0 = local_238.M[1][0] * dVar7 + local_238.M[0][0] * dVar9 + local_238.M[2][0] * dVar42
                  + local_238.M[3][0];
      dStack_4a8 = local_238.M[1][1] * dVar7 + local_238.M[0][1] * dVar9 +
                   local_238.M[2][1] * dVar42 + local_238.M[3][1];
      local_4a0 = local_238.M[1][2] * dVar7 + local_238.M[0][2] * dVar9 + local_238.M[2][2] * dVar42
                  + local_238.M[3][2];
      auVar50._0_8_ =
           local_238.M[1][0] * local_238.M[1][0] + local_238.M[0][0] * local_238.M[0][0] +
           local_238.M[2][0] * local_238.M[2][0];
      auVar50._8_8_ =
           local_238.M[1][1] * local_238.M[1][1] + local_238.M[0][1] * local_238.M[0][1] +
           local_238.M[2][1] * local_238.M[2][1];
      auVar34._8_4_ = SUB84(auVar50._8_8_,0);
      auVar34._0_8_ = auVar50._0_8_;
      auVar34._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
      auVar27._8_8_ = auVar50._8_8_;
      auVar27._0_8_ = auVar34._8_8_;
      auVar51 = maxpd(auVar50,auVar27);
      dVar26 = local_238.M[1][2] * local_238.M[1][2] + local_238.M[0][2] * local_238.M[0][2] +
               local_238.M[2][2] * local_238.M[2][2];
      auVar52._8_4_ = SUB84(dVar26,0);
      auVar52._0_8_ = dVar26;
      auVar52._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      auVar52 = maxpd(auVar51,auVar52);
      uStack_2fc = (int)((ulonglong)local_490 >> 0x20);
      local_480 = SQRT(dStack_488 * dStack_488 + dStack_498 * dStack_498 + local_490 * local_490);
      dVar26 = SQRT(auVar52._0_8_) * unaff_XMM15._0_8_;
      dStack_248 = (pdVar24[1] + pdVar20[1]) * __real_3fe0000000000000;
      if (dVar26 <= local_480) {
        local_480 = dVar26;
      }
      local_250 = (*pdVar24 + *pdVar20) * __real_3fe0000000000000;
      local_240 = (pdVar24[2] + pdVar20[2]) * __real_3fe0000000000000;
      auVar52 = *(undefined1 (*) [16])(this_00->Rotation).ZW.m128d_f64;
      local_410 = &local_4d0;
      auVar51 = *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64;
      dVar32 = local_240 * (this_00->Scale3D).ZW.m128d_f64[0];
      dVar6 = (this_00->Scale3D).ZW.m128d_f64[1] * 0.0;
      dVar37 = (this_00->Rotation).ZW.m128d_f64[1];
      dVar9 = (this_00->Scale3D).XY.m128d_f64[0] * local_250;
      dVar47 = (this_00->Scale3D).XY.m128d_f64[1] * dStack_248;
      uVar40 = (undefined4)((ulonglong)dVar47 >> 0x20);
      local_198 = *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64;
      auVar43._8_4_ = SUB84(dVar47,0);
      auVar43._0_8_ = dVar9;
      auVar43._12_4_ = uVar40;
      dVar26 = auVar52._0_8_;
      auVar34 = blendpd(local_198,auVar52,2);
      auVar44._0_8_ = auVar43._8_8_ * local_198._0_8_ - local_198._8_8_ * dVar9;
      auVar44._8_8_ = dVar32 * local_198._8_8_ - dVar26 * dVar47;
      auVar48._8_8_ = dVar37;
      auVar48._0_8_ = dVar37;
      auVar28._8_4_ = SUB84(dVar47,0);
      auVar28._0_8_ = dVar9;
      auVar28._12_4_ = uVar40;
      auVar8._8_4_ = SUB84(dVar6,0);
      auVar8._0_8_ = dVar32;
      auVar8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar29 = blendpd(auVar28,auVar8,2);
      auVar30._0_8_ = auVar29._0_8_ * dVar26 - auVar34._0_8_ * dVar32;
      auVar30._8_8_ = auVar29._8_8_ * auVar52._8_8_ - auVar34._8_8_ * dVar6;
      auVar29 = blendpd(auVar44,auVar30,2);
      dVar6 = auVar44._8_8_ + auVar44._8_8_;
      dVar7 = auVar30._0_8_ + auVar30._0_8_;
      uVar40 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar45._0_8_ = auVar29._0_8_ + auVar29._0_8_;
      auVar45._8_8_ = auVar29._8_8_ + auVar29._8_8_;
      auVar38._8_4_ = SUB84(dVar7,0);
      auVar38._0_8_ = dVar6;
      auVar38._12_4_ = uVar40;
      auVar35._8_4_ = SUB84(dVar7,0);
      auVar35._0_8_ = dVar6;
      auVar35._12_4_ = uVar40;
      auVar29 = blendpd(auVar35,auVar45,2);
      auVar39._0_8_ = auVar38._8_8_ * auVar51._0_8_ - auVar51._8_8_ * dVar6;
      auVar39._8_8_ = auVar45._0_8_ * auVar51._8_8_ - dVar26 * dVar7;
      auVar31._8_4_ = SUB84(auVar39._8_8_,0);
      auVar31._0_8_ = auVar39._0_8_;
      auVar31._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
      auVar51 = blendpd(auVar51,auVar52,2);
      auVar36._0_8_ = auVar29._0_8_ * dVar26 - auVar51._0_8_ * auVar45._0_8_;
      auVar36._8_8_ = auVar29._8_8_ * auVar52._8_8_ - auVar51._8_8_ * auVar45._8_8_;
      dVar26 = dVar6 * dVar37 + dVar9 + auVar31._8_8_ + (this_00->Translation).XY.m128d_f64[0];
      dVar6 = dVar7 * dVar37 + dVar47 + auVar36._0_8_ + (this_00->Translation).XY.m128d_f64[1];
      uVar40 = SUB84(dVar6,0);
      uVar41 = (undefined4)((ulonglong)dVar6 >> 0x20);
      local_4d0 = *(double *)((longlong)this + 0x10) * *(double *)((longlong)this + 0x10);
      auVar52 = blendpd(auVar39,auVar36,2);
      local_338._8_4_ = uVar40;
      local_338._0_8_ = dVar26;
      local_338._12_4_ = uVar41;
      local_3d0 = auVar45._0_8_ * dVar37 + dVar32 + auVar52._0_8_ +
                  (this_00->Translation).ZW.m128d_f64[0];
      local_408 = &local_458;
      local_400 = *(undefined8 *)((longlong)this + 0x30);
      plVar15 = *(longlong **)((longlong)this + 8);
      local_3c8 = *(undefined4 *)this;
      local_3c4 = *(undefined4 *)((longlong)this + 4);
      local_458 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_450 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_448 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_3e0._8_4_ = uVar40;
      local_3e0._0_8_ = dVar26;
      local_3e0._12_4_ = uVar41;
      local_418[0] = uVar21;
      local_3f8 = this_00;
      local_3f0 = pdVar24;
      local_3e8 = pdVar20;
      local_328 = local_3d0;
      local_320 = local_4b0;
      dStack_318 = dStack_4a8;
      dStack_310 = local_4a0;
      dStack_2f8 = dStack_488;
      local_2f0 = local_480;
      local_278 = dVar42;
      local_260 = dVar46;
      if (*(char *)(*(longlong *)((longlong)this + 0x48) + 0x128) == '\0') {
        plVar23 = (longlong *)*plVar15;
        lVar3 = plVar15[1];
        plVar1 = plVar23 + (int)lVar3;
        while( true ) {
          if ((int)plVar15[1] != (int)lVar3) {
            local_4f8[0] = 0;
            `TCheckedPointerIterator<UPCGBasePointData_const_*,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_4f8);
          }
          this = local_478;
          uVar25 = local_4e0;
          if (plVar23 == plVar1) break;
          plVar2 = (longlong *)*plVar23;
          if (plVar2 == (longlong *)0x0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("TargetPointData",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDistance.cpp"
                                ,0x173,L"");
            if (bVar11) {
              pcVar4 = (code *)swi(3);
              iVar13 = (*pcVar4)();
              return iVar13;
            }
          }
          pTVar16 = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
                    (**(code **)(*plVar2 + 0x618))(plVar2);
          local_428 = local_418;
          dStack_350 = local_490;
          local_378._s_0.X = local_4b0;
          local_378._s_0.Y = dStack_4a8;
          local_358 = dStack_498;
          local_378._s_0.Z = local_4a0;
          local_348 = dStack_488;
          local_378._s_0.W = 0.0;
          local_340 = 0;
          local_430 = plVar2;
          TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
          FindElementsWithBoundsTestInternal<___FPCGDistanceElement::ExecuteInternal_::__l73::<lambda_1>::operator()_::__l15::<lambda_2>::operator()_::__l2::<lambda_1>_>
                    (pTVar16,0,(FOctreeNodeContext *)pTVar16,(FBoxCenterAndExtent *)&local_378._s_0,
                     (<lambda_1> *)&local_430);
          plVar23 = plVar23 + 1;
        }
      }
      else {
        uVar19 = *(int *)((longlong)this + 0x50) % (int)plVar15[1];
        uVar14 = 0;
        if ((int)uVar19 < (int)plVar15[1]) {
          uVar14 = ~uVar19 >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar4 = (code *)swi(3);
            iVar13 = (*pcVar4)();
            return iVar13;
          }
        }
        plVar15 = *(longlong **)(*plVar15 + (longlong)(int)uVar19 * 8);
        if (plVar15 == (longlong *)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("TargetPointData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDistance.cpp"
                              ,0x173,L"");
          if (bVar11) {
            pcVar4 = (code *)swi(3);
            iVar13 = (*pcVar4)();
            return iVar13;
          }
        }
        pTVar16 = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
                  (**(code **)(*plVar15 + 0x618))(plVar15);
        local_438 = local_418;
        dStack_390 = local_490;
        local_3b8._s_0.X = local_4b0;
        local_3b8._s_0.Y = dStack_4a8;
        local_398 = dStack_498;
        local_3b8._s_0.Z = local_4a0;
        local_388 = dStack_488;
        local_3b8._s_0.W = 0.0;
        local_380 = 0;
        local_440 = plVar15;
        TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
        FindElementsWithBoundsTestInternal<___FPCGDistanceElement::ExecuteInternal_::__l73::<lambda_1>::operator()_::__l15::<lambda_2>::operator()_::__l2::<lambda_1>_>
                  (pTVar16,0,(FOctreeNodeContext *)pTVar16,(FBoxCenterAndExtent *)&local_3b8._s_0,
                   (<lambda_1> *)&local_440);
      }
      dVar9 = local_448;
      dVar7 = dStack_450;
      dVar6 = local_458;
      dVar26 = __real_3ff0000000000000;
      dVar47 = __real_3ff0000000000000;
      if ((local_4d0 <= 0.0) && (dVar47 = 0.0, local_4d0 < 0.0)) {
        dVar47 = __real_bff0000000000000;
      }
      auVar5._4_4_ = (uint)((ulonglong)local_4d0 >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      auVar5._0_4_ = SUB84(local_4d0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      auVar5._8_8_ = 0;
      auVar52 = sqrtpd(auVar48,auVar5);
      dVar47 = auVar52._0_8_ * dVar47;
      if (*(char *)((longlong)this + 0x40) != '\0') {
        plVar15 = *(longlong **)((longlong)this + 0x38);
        if (*(char *)((longlong)this + 0x21) == '\0') {
          uVar14 = 0;
          if ((int)uVar21 < (int)plVar15[1]) {
            uVar14 = uVar25;
          }
          if (uVar14 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar4 = (code *)swi(3);
              iVar13 = (*pcVar4)();
              return iVar13;
            }
          }
          *(double *)(local_4e8 + *plVar15) = dVar47;
        }
        else {
          uVar14 = 0;
          if ((int)uVar21 < (int)plVar15[3]) {
            uVar14 = uVar25;
          }
          if (uVar14 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar4 = (code *)swi(3);
              iVar13 = (*pcVar4)();
              return iVar13;
            }
          }
          lVar3 = plVar15[2];
          pdVar24 = (double *)(local_4f0 + lVar3);
          *pdVar24 = dVar6;
          pdVar24[1] = dVar7;
          *(double *)(local_4f0 + 0x10 + lVar3) = dVar9;
        }
      }
      lVar10 = local_4e8;
      lVar3 = local_4f0;
      if (*(char *)((longlong)this + 0x20) != '\0') {
        dVar6 = *(double *)((longlong)this + 0x10);
        if (__real_3e45798ee2308c3a < dVar6) {
          dVar26 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^
                                    __xmm_80000000000000008000000000000000._4_4_,
                                    SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000);
          if (dVar47 <= dVar6) {
            dVar6 = dVar47;
          }
          if (dVar6 <= dVar26) {
            dVar6 = dVar26;
          }
          dVar26 = dVar6 * *(double *)((longlong)this + 0x18);
        }
        uVar14 = 0;
        if ((int)uVar21 < (int)local_4b8) {
          uVar14 = uVar25;
        }
        if (uVar14 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar11) {
            pcVar4 = (code *)swi(3);
            iVar13 = (*pcVar4)();
            return iVar13;
          }
        }
        uVar25 = (uint)((longlong)((ulonglong)uVar18 << 0x20 | uVar22 & 0xffffffff) %
                       (longlong)uStack_4c0._4_4_);
        if (uVar21 == uVar25) {
          pfVar17 = (float *)((longlong)(int)uStack_4c0 * (longlong)(int)uVar25 + local_4c8);
        }
        else {
          pfVar17 = (float *)((longlong)&local_4b8 + 4);
        }
        *pfVar17 = (float)dVar26;
      }
      uVar40 = (undefined4)__real_3fd0000000000000;
      uVar41 = (undefined4)((ulonglong)__real_3fd0000000000000 >> 0x20);
      local_4f0 = lVar3 + 0x18;
      local_4e8 = lVar10 + 8;
      uVar22 = (ulonglong)(uVar21 + 1);
      param_3 = local_4d8;
    } while ((int)(uVar21 + 1) < local_4dc);
  }
  return param_3;
}

// ExecuteInternal @ 149b7c400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FPCGDistanceElement::ExecuteInternal(FPCGDistanceElement *this,FPCGContext *param_1)

{
  int *piVar1;
  double dVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  UPCGNode *this_00;
  FObjectPtr_u_0 *pFVar6;
  FName FVar7;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  FPCGDataCollection *pFVar18;
  UClass *pUVar19;
  UPCGSettings *pUVar20;
  TObjectPtr<UPCGSettings>_u_0 TVar21;
  FText *pFVar22;
  FText *pFVar23;
  FTextFormat *pFVar24;
  UPCGBasePointData *pUVar25;
  UPCGBasePointData *this_01;
  FPCGMetadataDomain *pFVar26;
  IPCGAttributeAccessor *pIVar27;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar28;
  TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> TVar29;
  ForAnyElementType FVar30;
  TRefCountPtr<ITextData> TVar31;
  IPCGAttributeAccessor *this_02;
  FObjectPtr_u_0 *pFVar32;
  uint uVar33;
  FPCGTaggedData *pFVar34;
  ForAnyElementType FVar35;
  bool bVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auStackY_518 [32];
  <lambda_1> local_4c6 [6];
  FPCGContext *local_4c0;
  TObjectPtr<UPCGSettings>_u_0 local_4b8;
  TArray<UPCGBasePointData_const_*,TSizedDefaultAllocator<32>_> local_4b0;
  <lambda_2> local_4a0 [4];
  uint local_49c;
  TemporaryResultCache local_498;
  PCGDistanceShape local_478;
  UPCGBasePointData *local_470;
  UPCGBasePointData *local_468;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_460;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_450;
  PCGDistanceShape local_440;
  TObjectPtr<UPCGSettings>_u_0 local_438;
  FObjectPtr_u_0 local_430;
  FObjectPtr_u_0 local_428;
  longlong local_420;
  FName local_418;
  FName local_410;
  FPCGDataCollection *local_408;
  double local_400;
  undefined1 local_3f8 [16];
  FString local_3e8;
  FString local_3d8;
  FPCGCrc local_3c8;
  TObjectPtr<UPCGMetadata>_u_0 TStack_3c0;
  FScriptContainerElement *local_3b8;
  int iStack_3b0;
  undefined4 uStack_3ac;
  FName local_3a8;
  FPCGMetadataDomainID local_3a0;
  FName local_388;
  FPCGMetadataDomainID local_380;
  <lambda_1> local_368;
  undefined1 local_308 [8];
  FText local_300;
  FString local_2f0;
  FString local_2e0;
  FText local_2d0;
  FText local_2c0;
  FString local_2b0;
  FString local_2a0;
  FText local_290;
  FString local_280;
  FString local_270;
  FText local_260;
  FString local_250;
  FString local_240;
  FText local_230;
  TArrayView<UE::Math::TVector<double>_const_,int> local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FText local_1d8;
  FText local_1c8;
  FString local_1b8;
  TVector<double>_u_0 local_1a8;
  undefined1 local_190 [8];
  TArrayView<double_const_,int> local_188;
  FPCGDataCollection local_178;
  FPCGDataCollection local_148;
  FTextFormat local_118;
  FText local_108;
  FTextFormat local_f8;
  FText local_e8;
  TVector<double>_u_0 local_d8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined4 local_a7;
  undefined2 local_a3;
  undefined1 local_a1;
  TVector<double>_u_0 local_a0;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6f;
  undefined2 local_6b;
  undefined1 local_69;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_518;
  local_478 = SphereBounds;
  bVar36 = -1 < CpuChannel->Enabled;
  local_4c0 = param_1;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId145,"FPCGDistanceElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDistance.cpp"
               ,0x91);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId145);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDistance.cpp"
                          ,0x92,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  if ((param_1->Node != (UPCGNode *)0x0) &&
     (bVar10 = UPCGNode::IsInputPinConnected(param_1->Node,&PCGDistance::TargetLabel), !bVar10)) {
    pFVar18 = PCGGather::GatherDataForPin
                        (&local_178,&param_1->InputData,PCGDistance::SourceLabel,
                         PCGPinConstants::DefaultOutputLabel);
    FPCGDataCollection::operator=(&param_1->OutputData,pFVar18);
    if (local_178.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_178.TaggedData.AllocatorInstance.Data,
               local_178.TaggedData.ArrayNum);
    goto LAB_149b7cc44;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar20 = UPCGNode::GetSettings(this_00), pUVar20 == (UPCGSettings *)0x0)) {
      pFVar34 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDistanceSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_4c6[0]);
      if (pFVar34 != (FPCGTaggedData *)0x0) {
        local_438.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar34->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_438.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b7c5de;
          UE::GC::MarkAsReachable((UObject *)local_438.DebugPtr);
        }
        if (local_438.DebugPtr != (UPCGSettings *)0x0) {
          pUVar19 = UPCGDistanceSettings::StaticClass();
          bVar10 = FObjectPtr::IsA(&local_438.ObjectPtr,pUVar19);
          if (bVar10) {
            local_4b8.DebugPtr = local_438.DebugPtr;
            TVar21 = local_438;
            goto LAB_149b7c5e6;
          }
        }
      }
    }
    else {
      pUVar20 = UPCGNode::GetSettings(this_00);
      TVar21.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar20);
      if (TVar21.DebugPtr != (UPCGSettings *)0x0) {
        local_4b8.DebugPtr = TVar21.DebugPtr;
        pUVar19 = UPCGDistanceSettings::StaticClass();
        iVar15 = (int)pUVar19->_padding_;
        if ((iVar15 <= *(int *)((TVar21.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar21.DebugPtr)->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
            &pUVar19->_padding_)) goto LAB_149b7c5e6;
      }
    }
LAB_149b7c5de:
    local_4b8.DebugPtr = (UPCGSettings *)0x0;
    TVar21.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar19 = UPCGDistanceSettings::StaticClass();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar19);
    if (!bVar10) goto LAB_149b7c5de;
    local_4b8 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    TVar21 = local_4b8;
  }
LAB_149b7c5e6:
  if ((TVar21.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDistance.cpp"
                          ,0x9c,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  cVar3 = *(char *)((longlong)&TVar21.DebugPtr[1]._padding_ + 1);
  dVar2 = *(double *)&TVar21.DebugPtr[1].Seed;
  uVar37 = SUB84(dVar2,0);
  uVar38 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (dVar2 <= 0.0) {
    uVar37 = 0;
    uVar38 = 0;
  }
  cVar4 = (char)TVar21.DebugPtr[1]._padding_;
  local_440 = *(PCGDistanceShape *)&TVar21.DebugPtr[1].OriginalSettings;
  local_478 = *(PCGDistanceShape *)((longlong)&TVar21.DebugPtr[1].OriginalSettings + 4);
  if ((double)CONCAT44(uVar38,uVar37) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar38,uVar37) == __real_3e45798ee2308c3a) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = __real_3ff0000000000000 / (double)CONCAT44(uVar38,uVar37);
  }
  FPCGDataCollection::GetInputsByPin(&param_1->InputData,&local_450,&PCGDistance::SourceLabel);
  FPCGDataCollection::GetInputsByPin(&param_1->InputData,&local_460,&PCGDistance::TargetLabel);
  local_408 = &param_1->OutputData;
  local_4b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4b0.ArrayNum = 0;
  local_4b0.ArrayMax = 0;
  if (local_460.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_460.ArrayNum);
  }
  if (0 < local_460.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_460.ArrayNum,&local_4b0.AllocatorInstance,0,&local_4b0.ArrayMax);
  }
  iVar15 = local_460.ArrayNum;
  pFVar34 = (FPCGTaggedData *)
            (local_460.AllocatorInstance.Data + (longlong)local_460.ArrayNum * 0x78);
  FVar35.Data = local_460.AllocatorInstance.Data;
  while( true ) {
    if (local_460.ArrayNum != iVar15) {
      local_4c6[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_4c6);
    }
    if ((FPCGTaggedData *)FVar35.Data == pFVar34) break;
    local_430.Handle = (UObject *)(((FPCGTaggedData *)FVar35.Data)->Data).Data.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b7c796:
      if ((UPCGSpatialData *)local_430.Handle == (UPCGSpatialData *)0x0) goto LAB_149b7ca22;
      pUVar19 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_430,pUVar19);
      if ((!bVar10) || ((UPCGSpatialData *)local_430.Handle == (UPCGSpatialData *)0x0))
      goto LAB_149b7ca22;
      local_a8 = 0;
      local_a7 = 0;
      local_a3 = 0;
      local_a1 = 0;
      local_d8._s_0.X = 0.0;
      local_d8._s_0.Y = 0.0;
      local_d8._s_0.Z = 0.0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_468 = UPCGSpatialData::ToBasePointData
                            ((UPCGSpatialData *)local_430.Handle,param_1,
                             (TBox<double> *)&local_d8._s_0);
      if (local_468 == (UPCGBasePointData *)0x0) {
        if (1 < (byte)LogPCG._0_1_) {
          local_418 = *(FName *)(((((FPCGTaggedData *)FVar35.Data)->Data).Data.field0_0x0.DebugPtr)
                                 ->_padding_ + 0x18);
          ::FName::ToString(&local_418,&local_3e8);
          pFVar22 = FText::FromString(&local_e8,&local_3e8);
          pFVar23 = FText::AsLocalizable_Advanced_LocText
                              (&local_300,L"PCGDistanceElement",L"CannotConvertToPoint",
                               L"Cannot convert target \'{0}\' into Point data");
          pFVar24 = FTextFormat::FTextFormat(&local_118,pFVar23,Default);
          pFVar22 = FText::Format<FText>(&local_1c8,pFVar24,pFVar22);
          FText::ToString(pFVar22);
          FPCGContext::GetTaskName(local_4c0,&local_208);
          FPCGContext::GetExecutionSourceName(local_4c0,&local_1b8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
          }
          if (local_1c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
          }
          FVar30.Data = local_3e8.Data.AllocatorInstance.Data;
          if (local_300.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
            FVar30.Data = local_3e8.Data.AllocatorInstance.Data;
          }
          goto LAB_149b7cb78;
        }
        goto LAB_149b7cb87;
      }
      if (((local_4b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_468) &&
          ((FScriptContainerElement *)&local_468 <
           local_4b0.AllocatorInstance.Data + (longlong)local_4b0.ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      iVar13 = local_4b0.ArrayNum;
      if (local_4b0.ArrayNum == local_4b0.ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_4b0.AllocatorInstance,&local_4b0.ArrayMax);
      }
      FVar35.Data = FVar35.Data + 0x78;
      local_4b0.ArrayNum = iVar13 + 1;
      *(UPCGBasePointData **)(local_4b0.AllocatorInstance.Data + (longlong)iVar13 * 8) = local_468;
    }
    else {
      if ((UPCGSpatialData *)local_430.Handle != (UPCGSpatialData *)0x0) {
        UE::GC::MarkAsReachable(local_430.Handle);
        goto LAB_149b7c796;
      }
LAB_149b7ca22:
      if (1 < (byte)LogPCG._0_1_) {
        local_410 = *(FName *)(((((FPCGTaggedData *)FVar35.Data)->Data).Data.field0_0x0.DebugPtr)->
                               _padding_ + 0x18);
        ::FName::ToString(&local_410,&local_3d8);
        pFVar22 = FText::FromString(&local_108,&local_3d8);
        pFVar23 = FText::AsLocalizable_Advanced_LocText
                            (&local_2c0,L"PCGDistanceElement",L"TargetMustBeSpatial",
                             L"Target must be Spatial data, found \'{0}\'");
        pFVar24 = FTextFormat::FTextFormat(&local_f8,pFVar23,Default);
        pFVar22 = FText::Format<FText>(&local_2d0,pFVar24,pFVar22);
        FText::ToString(pFVar22);
        FPCGContext::GetTaskName(local_4c0,&local_2e0);
        FPCGContext::GetExecutionSourceName(local_4c0,&local_2f0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
        }
        if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
        }
        if (local_2d0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2d0.TextData.Reference + 0x10))();
        }
        FVar30.Data = local_3d8.Data.AllocatorInstance.Data;
        if (local_2c0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2c0.TextData.Reference + 0x10))();
          FVar30.Data = local_3d8.Data.AllocatorInstance.Data;
        }
LAB_149b7cb78:
        param_1 = local_4c0;
        if (FVar30.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar30.Data);
          param_1 = local_4c0;
        }
      }
LAB_149b7cb87:
      FVar35.Data = FVar35.Data + 0x78;
    }
  }
  if ((local_4b0.ArrayNum == 0) && ((char)local_4b8.DebugPtr[1]._padding_ == '\0')) {
    pFVar18 = PCGGather::GatherDataForPin
                        (&local_148,&param_1->InputData,PCGDistance::SourceLabel,
                         PCGPinConstants::DefaultOutputLabel);
    FPCGDataCollection::operator=(&param_1->OutputData,pFVar18);
    if (local_148.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_148.TaggedData.AllocatorInstance.Data,
               local_148.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_148.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_148.TaggedData.AllocatorInstance.Data);
    }
  }
  else if ((local_4b8.DebugPtr[1].bUseSeed == false) ||
          (((local_450.ArrayNum < 2 || (local_4b0.ArrayNum < 2)) ||
           (local_450.ArrayNum == local_4b0.ArrayNum)))) {
    local_49c = 0;
    if (0 < local_450.ArrayNum) {
      local_420 = 0;
      do {
        lVar9 = local_420;
        uVar16 = 0;
        if ((int)local_49c < local_450.ArrayNum) {
          uVar16 = ~local_49c >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        pFVar32 = (FObjectPtr_u_0 *)(local_450.AllocatorInstance.Data + lVar9 * 0x78);
        local_428 = (FObjectPtr_u_0)pFVar32->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b7cd79:
          if ((UPCGSpatialData *)local_428.Handle == (UPCGSpatialData *)0x0) goto LAB_149b7d743;
          pUVar19 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
          bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_428,pUVar19);
          if ((!bVar10) || ((UPCGSpatialData *)local_428.Handle == (UPCGSpatialData *)0x0))
          goto LAB_149b7d743;
          local_70 = 0;
          local_6f = 0;
          local_6b = 0;
          local_69 = 0;
          local_a0._s_0.X = 0.0;
          local_a0._s_0.Y = 0.0;
          local_a0._s_0.Z = 0.0;
          uStack_88 = 0;
          local_80 = 0;
          uStack_78 = 0;
          pUVar25 = UPCGSpatialData::ToBasePointData
                              ((UPCGSpatialData *)local_428.Handle,param_1,
                               (TBox<double> *)&local_a0._s_0);
          local_470 = pUVar25;
          if (pUVar25 == (UPCGBasePointData *)0x0) {
            if (1 < (byte)LogPCG._0_1_) {
              pFVar22 = FText::AsLocalizable_Advanced_LocText
                                  (&local_290,L"PCGDistanceElement",L"CannotConvertToPointData",
                                   L"Cannot convert input Spatial data to Point data");
              FText::ToString(pFVar22);
              FPCGContext::GetTaskName(param_1,&local_2a0);
              FPCGContext::GetExecutionSourceName(local_4c0,&local_2b0);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
              }
              if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
              }
              param_1 = local_4c0;
              if (local_290.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_290.TextData.Reference + 0x10))();
                param_1 = local_4c0;
              }
            }
          }
          else {
            this_01 = FPCGContext::NewPointData_AnyThread(param_1);
            UPCGSpatialData::InitializeFromData
                      ((UPCGSpatialData *)this_01,(UPCGSpatialData *)pUVar25,(UPCGMetadata *)0x0,
                       true,true);
            pcVar8 = *(code **)(this_01->_padding_ + 0x490);
            uVar14 = (**(code **)(pUVar25->_padding_ + 0x488))(pUVar25);
            (*pcVar8)(this_01,uVar14,0);
            cVar12 = (**(code **)(this_01->_padding_ + 0x440))(this_01);
            if (cVar12 == '\0') {
              pcVar8 = *(code **)(this_01->_padding_ + 0x498);
              uVar14 = (**(code **)(pUVar25->_padding_ + 0x640))(pUVar25,1);
              (*pcVar8)(this_01,uVar14);
            }
            if (cVar3 != '\0') {
              (**(code **)(this_01->_padding_ + 0x498))(this_01,2);
            }
            pFVar18 = local_408;
            pFVar6 = (FObjectPtr_u_0 *)(local_408->TaggedData).AllocatorInstance.Data;
            if (((pFVar6 <= pFVar32) &&
                (pFVar32 < pFVar6 + (longlong)(local_408->TaggedData).ArrayMax * 0xf)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            iVar15 = (pFVar18->TaggedData).ArrayNum;
            piVar1 = &(pFVar18->TaggedData).ArrayMax;
            if (iVar15 == *piVar1) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,(ForAnyElementType *)pFVar18,piVar1);
            }
            (pFVar18->TaggedData).ArrayNum = iVar15 + 1;
            pFVar34 = FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 ((pFVar18->TaggedData).AllocatorInstance.Data +
                                 (longlong)iVar15 * 0x78),(FPCGTaggedData *)pFVar32);
            FPCGDataPtrWrapper::operator=(&pFVar34->Data,(UPCGData *)this_01);
            TVar21 = local_4b8;
            if (((char)local_4b8.DebugPtr[1]._padding_ != '\0') &&
               (bVar10 = FPCGAttributePropertySelector::IsBasicAttribute
                                   ((FPCGAttributePropertySelector *)
                                    &local_4b8.DebugPtr[1]._padding_), bVar10)) {
              FVar7 = *(FName *)((longlong)&TVar21.DebugPtr[1]._padding_ + 4);
              if (cVar4 == '\0') {
                local_400 = 0.0;
                local_380 = PCGMetadataDomainID::Default;
                local_388 = FVar7;
                pFVar26 = UPCGMetadata::FindOrCreateMetadataDomain
                                    ((UPCGMetadata *)this_01->_padding_,&local_380);
                if (pFVar26 != (FPCGMetadataDomain *)0x0) {
                  FPCGMetadataDomain::FindOrCreateAttribute<double>
                            (pFVar26,local_388,&local_400,true,true,true);
                }
              }
              else {
                local_1a8._s_0.X = 0.0;
                local_1a8._s_0.Y = 0.0;
                local_1a8._s_0.Z = 0.0;
                local_3a0 = PCGMetadataDomainID::Default;
                local_3a8 = FVar7;
                pFVar26 = UPCGMetadata::FindOrCreateMetadataDomain
                                    ((UPCGMetadata *)this_01->_padding_,&local_3a0);
                if (pFVar26 != (FPCGMetadataDomain *)0x0) {
                  FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector<double>_>
                            (pFVar26,local_3a8,(TVector<double> *)&local_1a8._s_0,true,true,true);
                }
              }
            }
            param_1 = local_4c0;
            if (local_4b0.ArrayNum != 0) {
              pIVar27 = (IPCGAttributeAccessor *)0x0;
              this_02 = pIVar27;
              if ((char)local_4b8.DebugPtr[1]._padding_ != '\0') {
                TVar28 = PCGAttributeAccessorHelpers::CreateAccessor
                                   ((UPCGData *)local_3f8,(FPCGAttributePropertySelector *)this_01,
                                    (bool)(local_4b8._0_1_ + -0x30));
                if ((IPCGAttributeAccessor *)local_308 != TVar28.Ptr) {
                  this_02 = (IPCGAttributeAccessor *)(TVar28.Ptr)->_padding_;
                  (TVar28.Ptr)->_padding_ = 0;
                }
                if ((undefined8 *)local_3f8._0_8_ != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)local_3f8._0_8_)(local_3f8._0_8_,1);
                }
                if (this_02 != (IPCGAttributeAccessor *)0x0) {
                  uVar5 = this_02->UnderlyingType;
                  if (cVar4 == '\0') {
                    if ((uVar5 < 0xf) &&
                       ((PCG::Private::BroadcastableTypes.Values[uVar5][1] != false ||
                        (PCG::Private::ConstructibleTypes.Values[1][uVar5] != false))))
                    goto LAB_149b7d1fd;
LAB_149b7d18f:
                    if (2 < (byte)LogPCG._0_1_) {
                      pFVar22 = FText::AsLocalizable_Advanced_LocText
                                          (&local_230,L"PCGDistanceElement",L"InvalidAccessorType",
                                           L"Selected type for Output Attribute is incompatible with distance as output."
                                          );
                      FText::ToString(pFVar22);
                      FPCGContext::GetTaskName(local_4c0,&local_240);
                      FPCGContext::GetExecutionSourceName(local_4c0,&local_250);
                      UE::Logging::Private::BasicLog<3>
                                ((FStaticBasicLogRecord *)&PTR_u___s____s____s_151f6fa00,
                                 (FLogCategoryBase *)&LogPCG);
                      if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_250.Data.AllocatorInstance.Data);
                      }
                      TVar31.Reference = local_230.TextData.Reference;
                      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_240.Data.AllocatorInstance.Data);
                        TVar31.Reference = local_230.TextData.Reference;
                      }
LAB_149b7d3d0:
                      pUVar25 = local_470;
                      if (TVar31.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*TVar31.Reference + 0x10))();
                        pUVar25 = local_470;
                      }
                    }
                  }
                  else {
                    if ((0xe < uVar5) ||
                       ((PCG::Private::BroadcastableTypes.Values[uVar5][5] == false &&
                        (PCG::Private::ConstructibleTypes.Values[5][uVar5] == false))))
                    goto LAB_149b7d18f;
LAB_149b7d1fd:
                    TVar29 = PCGAttributeAccessorHelpers::CreateKeys
                                       ((UPCGData *)(local_3f8 + 8),
                                        (FPCGAttributePropertySelector *)this_01);
                    if ((IPCGAttributeAccessorKeys *)local_190 != TVar29.Ptr) {
                      pIVar27 = (IPCGAttributeAccessor *)(TVar29.Ptr)->_padding_;
                      (TVar29.Ptr)->_padding_ = 0;
                    }
                    if ((undefined8 *)local_3f8._8_8_ != (undefined8 *)0x0) {
                      (*(code *)**(undefined8 **)local_3f8._8_8_)(local_3f8._8_8_,1);
                    }
                    if (pIVar27 != (IPCGAttributeAccessor *)0x0) goto LAB_149b7d3f0;
                    if (2 < (byte)LogPCG._0_1_) {
                      pFVar22 = FText::AsLocalizable_Advanced_LocText
                                          (&local_260,L"PCGDistanceElement",
                                           L"CannotCreateAccessorKeys",
                                           L"Cannot create accessor keys on output points.");
                      FText::ToString(pFVar22);
                      FPCGContext::GetTaskName(local_4c0,&local_270);
                      FPCGContext::GetExecutionSourceName(local_4c0,&local_280);
                      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_280.Data.AllocatorInstance.Data);
                      }
                      TVar31.Reference = local_260.TextData.Reference;
                      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_270.Data.AllocatorInstance.Data);
                        TVar31.Reference = local_260.TextData.Reference;
                      }
                      goto LAB_149b7d3d0;
                    }
                  }
                  (**(code **)this_02->_padding_)(this_02,1);
                  this_02 = (IPCGAttributeAccessor *)0x0;
                }
              }
LAB_149b7d3f0:
              local_498.Distances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_498.Distances.ArrayNum = 0;
              local_498.Distances.ArrayMax = 0;
              local_498.DistanceVectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_498.DistanceVectors.ArrayNum = 0;
              local_498.DistanceVectors.ArrayMax = 0;
              if (this_02 != (IPCGAttributeAccessor *)0x0) {
                uVar16 = (**(code **)(pUVar25->_padding_ + 0x488))(pUVar25);
                if (cVar4 == '\0') {
                  if (local_498.Distances.ArrayNum < (int)uVar16) {
                    UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,uVar16 - local_498.Distances.ArrayNum,
                               (ForAnyElementType *)&local_498,&local_498.Distances.ArrayNum,
                               &local_498.Distances.ArrayMax);
                  }
                  else {
                    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
                    }
                    if ((int)uVar16 < local_498.Distances.ArrayNum) {
                      uVar33 = local_498.Distances.ArrayNum - uVar16;
                      uVar17 = 0;
                      if ((int)(uVar33 + uVar16) <= local_498.Distances.ArrayNum) {
                        uVar17 = ~uVar33 >> 0x1f;
                      }
                      if (uVar17 == 0) {
                        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           );
                        if (bVar10) {
                          pcVar8 = (code *)swi(3);
                          uVar11 = (*pcVar8)();
                          return (bool)uVar11;
                        }
                      }
                      if (uVar33 != 0) {
                        iVar13 = (local_498.Distances.ArrayNum - uVar33) - uVar16;
                        iVar15 = local_498.Distances.ArrayNum;
                        if (iVar13 != 0) {
                          memmove(local_498.Distances.AllocatorInstance.Data +
                                  (longlong)(int)uVar16 * 8,
                                  local_498.Distances.AllocatorInstance.Data +
                                  (longlong)(int)uVar16 * 8 + (longlong)(int)uVar33 * 8,
                                  (longlong)iVar13 << 3);
                          iVar15 = local_498.Distances.ArrayNum;
                        }
                        local_498.Distances.ArrayNum = iVar15 - uVar33;
                        UE::Core::Private::
                        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (8,8,(ForAnyElementType *)&local_498,iVar15 - uVar33,
                                   &local_498.Distances.ArrayMax);
                      }
                    }
                  }
                }
                else {
                  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                            (&local_498.DistanceVectors,uVar16,Default);
                }
              }
              local_368.bWriteToAttribute = this_02 != (IPCGAttributeAccessor *)0x0;
              local_368.SourceShape = local_440;
              local_368.TargetShape = local_478;
              local_368.TargetPointDatas = &local_4b0;
              local_368.ResultCache = &local_498;
              local_368.Settings = (UPCGDistanceSettings *)local_4b8;
              local_368.SourceIndex = local_49c;
              local_368.MaximumDistance = (double)CONCAT44(uVar38,uVar37);
              local_368.SourcePointData = local_470;
              local_368.MaximumDistanceRecip = dVar2;
              local_368.bSetDensity = (bool)cVar3;
              local_368.bOutputDistanceVector = (bool)cVar4;
              local_368.OutputData = this_01;
              iVar15 = (**(code **)(local_470->_padding_ + 0x488))();
              bVar10 = FPCGAsync::
                       AsyncProcessingOneToOneRangeEx<_FPCGDistanceElement::ExecuteInternal_::__l192::<lambda_2>,_FPCGDistanceElement::ExecuteInternal_::__l73::<lambda_1>_&>
                                 (&local_4c0->AsyncState,iVar15,local_4a0,&local_368,false,0x40,true
                                 );
              if ((bVar10) && (this_02 != (IPCGAttributeAccessor *)0x0)) {
                if (cVar4 == '\0') {
                  iVar15 = local_498.Distances.ArrayNum;
                  local_3b8 = local_498.Distances.AllocatorInstance.Data;
                  if ((local_498.Distances.ArrayNum < 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xeb,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    uVar11 = (*pcVar8)();
                    return (bool)uVar11;
                  }
                  iStack_3b0 = iVar15;
                  local_188._12_4_ = uStack_3ac;
                  local_188.ArrayNum = iVar15;
                  local_188.DataPtr = (double *)local_3b8;
                  IPCGAttributeAccessor::SetRange<double>
                            (this_02,&local_188,0,(IPCGAttributeAccessorKeys *)pIVar27,StrictType);
                }
                else {
                  iVar15 = local_498.DistanceVectors.ArrayNum;
                  local_3c8 = (FPCGCrc)local_498.DistanceVectors.AllocatorInstance.Data;
                  if ((local_498.DistanceVectors.ArrayNum < 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xeb,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    uVar11 = (*pcVar8)();
                    return (bool)uVar11;
                  }
                  TStack_3c0._0_4_ = iVar15;
                  local_218._12_4_ = TStack_3c0._4_4_;
                  local_218.ArrayNum = iVar15;
                  local_218.DataPtr = (TVector<double> *)local_3c8;
                  IPCGAttributeAccessor::SetRange<UE::Math::TVector<double>_>
                            (this_02,&local_218,0,(IPCGAttributeAccessorKeys *)pIVar27,StrictType);
                }
              }
              if ((FPCGCrc)local_498.DistanceVectors.AllocatorInstance.Data != (FPCGCrc)0x0) {
                FMemory::Free(local_498.DistanceVectors.AllocatorInstance.Data);
              }
              if (local_498.Distances.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_498.Distances.AllocatorInstance.Data);
              }
              if (pIVar27 != (IPCGAttributeAccessor *)0x0) {
                (**(code **)pIVar27->_padding_)(pIVar27,1);
              }
              param_1 = local_4c0;
              if (this_02 != (IPCGAttributeAccessor *)0x0) {
                (**(code **)this_02->_padding_)(this_02,1);
                param_1 = local_4c0;
              }
            }
          }
        }
        else {
          if ((UPCGSpatialData *)local_428.Handle != (UPCGSpatialData *)0x0) {
            UE::GC::MarkAsReachable(local_428.Handle);
            goto LAB_149b7cd79;
          }
LAB_149b7d743:
          if (1 < (byte)LogPCG._0_1_) {
            pFVar22 = FText::AsLocalizable_Advanced_LocText
                                (&local_1d8,L"PCGDistanceElement",L"InvalidInputData",
                                 L"Invalid input data");
            FText::ToString(pFVar22);
            FPCGContext::GetTaskName(param_1,&local_1e8);
            FPCGContext::GetExecutionSourceName(local_4c0,&local_1f8);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
            }
            if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
            }
            param_1 = local_4c0;
            if (local_1d8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
              param_1 = local_4c0;
            }
          }
        }
        local_49c = local_49c + 1;
        local_420 = local_420 + 1;
      } while ((int)local_49c < local_450.ArrayNum);
    }
  }
  else {
    PCGLog::InputOutput::LogInvalidCardinalityError
              (PCGDistance::SourceLabel,PCGDistance::TargetLabel,param_1);
  }
  if (local_4b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b0.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_460.AllocatorInstance.Data,local_460.ArrayNum);
  if ((FPCGTaggedData *)local_460.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_460.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_450.AllocatorInstance.Data,local_450.ArrayNum);
  local_178.TaggedData.AllocatorInstance.Data = local_450.AllocatorInstance.Data;
LAB_149b7cc44:
  if ((FPCGTaggedData *)local_178.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_178.TaggedData.AllocatorInstance.Data);
  }
  if (bVar36) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149b88b50

EPCGElementExecutionLoopMode __thiscall
FPCGDistanceElement::ExecutionLoopMode(FPCGDistanceElement *this,UPCGSettings *param_1)

{
  int iVar1;
  EPCGElementExecutionLoopMode EVar2;
  UClass *pUVar3;
  
  if (param_1 != (UPCGSettings *)0x0) {
    pUVar3 = UPCGDistanceSettings::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      EVar2 = SinglePrimaryPin;
      if (param_1[1].bUseSeed != false) {
        EVar2 = PrimaryPinAndBroadcastablePins;
      }
      return EVar2;
    }
  }
  return NotALoop;
}

// SupportsBasePointDataInputs @ 149b98970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGDistanceElement::SupportsBasePointDataInputs(FPCGDistanceElement *this,FPCGContext *param_1)

{
  return true;
}

