// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// operator() @ 149bf8010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
`FPCGPointNeighborhoodElement::ExecuteInternal'::__l32::<lambda_2>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined4 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auStack_6e8 [32];
  double *local_6c8;
  longlong local_6c0;
  undefined1 local_6b8;
  int local_6a8;
  int local_6a4;
  undefined4 local_6a0;
  undefined4 uStack_69c;
  int iStack_698;
  int iStack_694;
  undefined8 local_690;
  double local_688;
  double dStack_680;
  double local_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined4 local_660;
  longlong local_658;
  undefined8 uStack_650;
  longlong local_648;
  longlong lStack_640;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  longlong local_628;
  longlong lStack_620;
  longlong local_618 [2];
  undefined4 local_608;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  longlong local_5d8;
  undefined8 uStack_5d0;
  longlong local_5c8;
  longlong lStack_5c0;
  longlong local_5b8;
  longlong lStack_5b0;
  longlong local_5a8;
  longlong lStack_5a0;
  longlong local_598;
  longlong lStack_590;
  longlong local_588;
  longlong lStack_580;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  longlong local_568;
  longlong lStack_560;
  longlong local_558 [2];
  undefined4 local_548;
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  double local_518;
  double dStack_510;
  undefined1 local_508 [16];
  double local_4f8;
  double dStack_4f0;
  undefined1 local_4e8 [16];
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  double local_4c0;
  double dStack_4b8;
  double local_4b0;
  longlong local_4a8;
  longlong lStack_4a0;
  longlong local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined1 local_478 [32];
  undefined1 local_458 [64];
  FConstPCGPointValueRanges local_418;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [128];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_6e8;
  lVar24 = (longlong)param_1;
  uVar20 = (ulonglong)param_2;
  local_6a4 = param_3;
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_418,*(UPCGBasePointData **)((longlong)this + 0x28));
  if (*(int *)(*(longlong *)this + 0xe8) == 0) {
    local_670 = 0;
    puVar15 = &local_670;
    uStack_668 = 0;
    local_660 = 0;
  }
  else {
    puVar15 = (undefined8 *)
              (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x4c8))
                        (*(longlong **)((longlong)this + 0x30),local_478,0);
  }
  local_6a0 = *(undefined4 *)puVar15;
  uStack_69c = *(undefined4 *)((longlong)puVar15 + 4);
  iStack_698 = *(int *)(puVar15 + 1);
  iStack_694 = *(int *)((longlong)puVar15 + 0xc);
  local_690 = puVar15[2];
  if (*(char *)(*(longlong *)this + 0xec) == '\0') {
    plVar16 = local_558;
    local_558[0] = 0;
    local_558[1] = 0;
    local_548 = 0;
    local_538._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_538._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_538._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_528._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_528._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_528._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_518 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    dStack_510 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_508._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_508._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_508._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_4f8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    dStack_4f0 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_4e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_4e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_4e8._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  }
  else {
    plVar16 = (longlong *)
              (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x4c0))
                        (*(longlong **)((longlong)this + 0x30),local_158,0);
  }
  local_5d8 = *plVar16;
  uStack_5d0 = plVar16[1];
  local_5c8 = plVar16[2];
  lStack_5c0 = plVar16[3];
  local_5b8 = plVar16[4];
  lStack_5b0 = plVar16[5];
  local_5a8 = plVar16[6];
  lStack_5a0 = plVar16[7];
  local_598 = plVar16[8];
  lStack_590 = plVar16[9];
  local_588 = plVar16[10];
  lStack_580 = plVar16[0xb];
  local_578 = (int)plVar16[0xc];
  uStack_574 = *(undefined4 *)((longlong)plVar16 + 100);
  uStack_570 = (int)plVar16[0xd];
  uStack_56c = *(undefined4 *)((longlong)plVar16 + 0x6c);
  local_568 = plVar16[0xe];
  lStack_560 = plVar16[0xf];
  if (*(char *)(*(longlong *)this + 0xed) == '\0') {
    plVar16 = local_618;
    local_5e8 = ___xmm_3ff00000000000000000000000000000;
    uStack_5e0 = _UNK_15061cbc8;
    local_5f8 = 0;
    uStack_5f0 = 0;
    local_618[0] = 0;
    local_618[1] = 0;
    local_608 = 0;
  }
  else {
    plVar16 = (longlong *)
              (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x4e0))
                        (*(longlong **)((longlong)this + 0x30),local_458,0);
  }
  local_658 = *plVar16;
  uStack_650 = plVar16[1];
  local_638 = (undefined4)plVar16[4];
  uStack_634 = *(undefined4 *)((longlong)plVar16 + 0x24);
  uStack_630 = (undefined4)plVar16[5];
  uStack_62c = *(undefined4 *)((longlong)plVar16 + 0x2c);
  local_648 = plVar16[2];
  lStack_640 = plVar16[3];
  local_628 = plVar16[6];
  lStack_620 = plVar16[7];
  cVar12 = (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x440))();
  if (cVar12 == '\0') {
    local_6c8 = (double *)CONCAT44(local_6c8._4_4_,param_3);
    (**(code **)(**(longlong **)((longlong)this + 0x28) + 0x638))
              (*(longlong **)((longlong)this + 0x28),*(undefined8 *)((longlong)this + 0x30),param_1,
               param_2);
  }
  uVar8 = _UNK_150689688;
  uVar7 = ___xmm_3ff00000000000003ff0000000000000;
  dVar6 = __real_3ff0000000000000;
  local_6a8 = param_3 + param_1;
  if (param_1 < local_6a8) {
    lVar22 = uVar20 * 8;
    uVar31 = (uint)__xmm_80000000000000008000000000000000;
    uVar32 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    lVar23 = uVar20 * 0x18;
    do {
      local_6c0 = (longlong)local_418.TransformRange.NumElements;
      uVar5 = (uint)uVar20;
      uVar21 = (param_1 - param_2) + uVar5;
      uVar19 = 0;
      if ((int)uVar21 < local_418.TransformRange.NumElements) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (local_6c8 = (double *)lVar24,
         bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar2 = (code *)swi(3);
        iVar14 = (*pcVar2)();
        return iVar14;
      }
      local_288 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_280 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_278 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_270 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      lVar17 = (longlong)((int)uVar21 % local_418.TransformRange.ElementView.NumElements) *
               (longlong)local_418.TransformRange.ElementView.BytesBetweenElements;
      pdVar1 = (double *)
               ((longlong)
                ((local_418.TransformRange.ElementView.FirstElementPtr)->Translation).XY.m128d_f64 +
               lVar17);
      dVar3 = *pdVar1;
      dVar4 = pdVar1[1];
      dVar26 = *(double *)
                ((longlong)
                 ((local_418.TransformRange.ElementView.FirstElementPtr)->Translation).ZW.m128d_f64
                + lVar17);
      local_1f0 = 0;
      uVar29 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      uVar30 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      local_228 = 0x3f800000;
      local_1c8 = 0x3f000000;
      local_1c0 = 0xffffffffffffffff;
      uStack_180 = 0;
      uVar27 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
      ;
      local_268._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_268._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_268._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_168._8_4_ = uVar27;
      local_168._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_168._12_4_ = uVar28;
      local_258._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_258._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_258._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_238._8_4_ = uVar27;
      local_238._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_238._12_4_ = uVar28;
      local_220 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_
                                 >> 0x20) ^ uVar32,
                           SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar31)
      ;
      local_178._8_4_ = uVar29;
      local_178._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_178._12_4_ = uVar30;
      local_218 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_
                                 >> 0x20) ^ uVar32,
                           SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar31)
      ;
      local_248._8_4_ = uVar29;
      local_248._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_248._12_4_ = uVar30;
      local_210 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_
                                 >> 0x20) ^ uVar32,
                           SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar31)
      ;
      local_1f8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      local_1e8 = uVar7;
      uStack_1e0 = uVar8;
      local_1d8 = uVar7;
      uStack_1d0 = uVar8;
      local_208 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      dStack_200 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      local_6b8 = *(undefined1 *)(*(longlong *)this + 0xee);
      local_6c8 = &local_288;
      local_6c0 = 0;
      local_688 = dVar3;
      dStack_680 = dVar4;
      local_678 = dVar26;
      local_1b8 = local_288;
      dStack_1b0 = dStack_280;
      local_1a8 = local_278;
      dStack_1a0 = dStack_270;
      local_198 = dVar3;
      dStack_190 = dVar4;
      local_188 = dVar26;
      (**(code **)(**(longlong **)((longlong)this + 0x28) + 0x478))
                (*(longlong **)((longlong)this + 0x28),&local_1b8,
                 *(undefined8 *)((longlong)this + 0x10),*(undefined8 *)((longlong)this + 0x20));
      local_4d8 = (double)local_268._0_8_;
      dStack_4d0 = (double)local_268._8_8_;
      local_4c8 = (double)local_258._0_8_;
      uVar19 = (int)uVar5 >> 0x1f;
      if (*(int *)(*(longlong *)this + 0xe8) == 1) {
        local_6c0 = (longlong)(int)local_690;
        uVar21 = 0;
        if ((int)uVar5 < (int)local_690) {
          uVar21 = ~uVar5 >> 0x1f;
        }
        dVar25 = SQRT(((double)local_268._8_8_ - dVar4) * ((double)local_268._8_8_ - dVar4) +
                      ((double)local_268._0_8_ - dVar3) * ((double)local_268._0_8_ - dVar3) +
                      ((double)local_258._0_8_ - dVar26) * ((double)local_258._0_8_ - dVar26)) *
                 (dVar6 / **(double **)((longlong)this + 0x18));
        if (dVar6 <= dVar25) {
          dVar25 = dVar6;
        }
        if (dVar25 <= 0.0) {
          dVar25 = 0.0;
        }
        if (uVar21 == 0) {
          local_6c8 = (double *)(longlong)(int)uVar5;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar13) {
            pcVar2 = (code *)swi(3);
            iVar14 = (*pcVar2)();
            return iVar14;
          }
        }
        uVar21 = (uint)((longlong)((ulonglong)uVar19 << 0x20 | uVar20 & 0xffffffff) %
                       (longlong)iStack_694);
        if (uVar5 == uVar21) {
          *(float *)((longlong)iStack_698 * (longlong)(int)uVar21 + CONCAT44(uStack_69c,local_6a0))
               = (float)dVar25;
        }
        else {
          local_690 = CONCAT44((float)dVar25,(int)local_690);
        }
      }
      else if (*(int *)(*(longlong *)this + 0xe8) == 2) {
        local_6c0 = (longlong)(int)local_690;
        uVar21 = 0;
        if ((int)uVar5 < (int)local_690) {
          uVar21 = ~uVar5 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_6c8 = (double *)(longlong)(int)uVar5;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar13) {
            pcVar2 = (code *)swi(3);
            iVar14 = (*pcVar2)();
            return iVar14;
          }
        }
        uVar21 = (uint)((longlong)((ulonglong)uVar19 << 0x20 | uVar20 & 0xffffffff) %
                       (longlong)iStack_694);
        if (uVar5 == uVar21) {
          puVar18 = (undefined4 *)
                    ((longlong)iStack_698 * (longlong)(int)uVar21 + CONCAT44(uStack_69c,local_6a0));
        }
        else {
          puVar18 = (undefined4 *)((longlong)&local_690 + 4);
        }
        *puVar18 = (undefined4)local_228;
      }
      if (*(char *)(*(longlong *)this + 0xd0) != '\0') {
        plVar16 = *(longlong **)((longlong)this + 8);
        dVar3 = (double)local_268._0_8_ - dVar3;
        local_4c0 = (double)local_268._0_8_;
        dStack_4b8 = (double)local_268._8_8_;
        iVar14 = (int)plVar16[1];
        local_6c0 = (longlong)iVar14;
        dVar4 = (double)local_268._8_8_ - dVar4;
        local_4b0 = (double)local_258._0_8_;
        dVar26 = (double)local_258._0_8_ - dVar26;
        uVar21 = 0;
        if ((int)uVar5 < iVar14) {
          uVar21 = ~uVar5 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_6c8 = (double *)(longlong)(int)uVar5;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar2 = (code *)swi(3);
            iVar14 = (*pcVar2)();
            return iVar14;
          }
        }
        *(double *)(lVar22 + *plVar16) = SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar26 * dVar26);
      }
      if (*(char *)(*(longlong *)this + 0xec) != '\0') {
        local_6c0 = (longlong)(int)local_5c8;
        uVar21 = 0;
        if ((int)uVar5 < (int)local_5c8) {
          uVar21 = ~uVar5 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_6c8 = (double *)(longlong)(int)uVar5;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar13) {
            pcVar2 = (code *)swi(3);
            iVar14 = (*pcVar2)();
            return iVar14;
          }
        }
        uVar21 = (uint)((longlong)((ulonglong)uVar19 << 0x20 | uVar20 & 0xffffffff) %
                       (longlong)uStack_5d0._4_4_);
        if (uVar5 == uVar21) {
          plVar16 = (longlong *)((longlong)(int)uStack_5d0 * (longlong)(int)uVar21 + local_5d8);
        }
        else {
          plVar16 = &local_5b8;
        }
        uVar10 = local_258._0_8_;
        uVar9 = local_268._8_8_;
        local_4a8 = local_268._0_8_;
        lStack_4a0 = local_268._8_8_;
        local_498 = local_258._0_8_;
        plVar16[4] = local_268._0_8_;
        plVar16[5] = uVar9;
        plVar16[6] = uVar10;
        plVar16[7] = 0;
      }
      if (*(char *)(*(longlong *)this + 0xdc) != '\0') {
        uVar11 = local_258._0_8_;
        lVar17 = *(longlong *)((longlong)this + 8);
        uVar9 = local_268._0_8_;
        uVar10 = local_268._8_8_;
        local_490 = local_268._0_8_;
        uStack_488 = local_268._8_8_;
        iVar14 = *(int *)(lVar17 + 0x18);
        local_6c0 = (longlong)iVar14;
        local_480 = local_258._0_8_;
        uVar21 = 0;
        if ((int)uVar5 < iVar14) {
          uVar21 = ~uVar5 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_6c8 = (double *)(longlong)(int)uVar5;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar2 = (code *)swi(3);
            iVar14 = (*pcVar2)();
            return iVar14;
          }
        }
        lVar17 = *(longlong *)(lVar17 + 0x10);
        puVar15 = (undefined8 *)(lVar17 + lVar23);
        *puVar15 = uVar9;
        puVar15[1] = uVar10;
        *(undefined8 *)(lVar17 + 0x10 + lVar23) = uVar11;
      }
      if (*(char *)(*(longlong *)this + 0xed) != '\0') {
        local_6c0 = (longlong)(int)local_648;
        uVar21 = 0;
        if ((int)uVar5 < (int)local_648) {
          uVar21 = ~uVar5 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_6c8 = (double *)(longlong)(int)uVar5;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar13) {
            pcVar2 = (code *)swi(3);
            iVar14 = (*pcVar2)();
            return iVar14;
          }
        }
        uVar9 = uStack_1e0;
        uVar19 = (uint)((longlong)((ulonglong)uVar19 << 0x20 | uVar20 & 0xffffffff) %
                       (longlong)uStack_650._4_4_);
        if (uVar5 == uVar19) {
          puVar15 = (undefined8 *)((longlong)(int)uStack_650 * (longlong)(int)uVar19 + local_658);
        }
        else {
          puVar15 = (undefined8 *)&local_638;
        }
        *puVar15 = local_1e8;
        puVar15[1] = uVar9;
        uVar9 = uStack_1d0;
        puVar15[2] = local_1d8;
        puVar15[3] = uVar9;
      }
      uVar20 = (ulonglong)(uVar5 + 1);
      lVar22 = lVar22 + 8;
      lVar23 = lVar23 + 0x18;
      lVar24 = lVar24 + 1;
      param_3 = local_6a4;
    } while ((int)((param_1 - param_2) + uVar5 + 1) < local_6a8);
  }
  else if ((param_3 != 0) &&
          (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumWritten == Count",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointNeighborhood.cpp"
                               ,0xc5,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    iVar14 = (*pcVar2)();
    return iVar14;
  }
  return param_3;
}

// ExecuteInternal @ 149c15ff0

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

bool __thiscall
FPCGPointNeighborhoodElement::ExecuteInternal
          (FPCGPointNeighborhoodElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  code *pcVar2;
  double dVar3;
  FObjectPtr_u_0 FVar4;
  FPCGContext *pFVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  UClass *pUVar13;
  UPCGSettings *pUVar14;
  TObjectPtr<UPCGSettings>_u_0 TVar15;
  FPCGTaggedData *pFVar16;
  FText *pFVar17;
  UPCGBasePointData *this_01;
  FTextFormat *pFVar18;
  byte bVar19;
  byte bVar20;
  FPCGTaggedData *pFVar21;
  uint uVar22;
  TObjectPtr<UPCGSettings>_u_0 TVar23;
  <lambda_1> <Var24;
  undefined1 auStackY_268 [32];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_210;
  TObjectPtr<UPCGSettings>_u_0 local_200;
  FObjectPtr_u_0 local_1f8;
  FPCGContext *local_1f0;
  longlong local_1e8;
  FPCGProjectionParams local_1e0;
  FProcessResults local_1c0;
  double local_1a0;
  FPCGTaggedData *local_198;
  FScriptContainerElement *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  FScriptContainerElement *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  TObjectPtr<UPCGSettings>_u_0 local_168;
  FProcessResults *local_160;
  undefined4 local_158;
  TObjectPtr<UPCGSettings>_u_0 local_150;
  FProcessResults *local_148;
  undefined1 *local_140;
  double *local_138;
  FPCGProjectionParams *local_130;
  FObjectPtr_u_0 local_128;
  UPCGBasePointData *local_120;
  FString local_118;
  FString local_108;
  FText local_f8;
  TArrayView<double_const_,int> local_e8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_d8;
  FString local_c8;
  FString local_b8;
  FText local_a8;
  FText local_98;
  FTextFormat local_88;
  undefined1 local_78 [16];
  double local_68;
  undefined1 local_60 [16];
  double local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_268;
  TVar23.DebugPtr = (UPCGSettings *)0x0;
  <Var24 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  local_1f0 = param_1;
  if ((bool)<Var24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId50,"FPCGPointNeighborhoodElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointNeighborhood.cpp"
               ,0x32);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId50);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar13 = UPCGPointNeighborhoodSettings::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar13);
    TVar15.DebugPtr = TVar23.DebugPtr;
    if (bVar7) {
      TVar15.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    goto LAB_149c16182;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar14 = UPCGNode::GetSettings(this_00), pUVar14 == (UPCGSettings *)0x0)) {
    pFVar16 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPointNeighborhoodSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,<Var24);
    if (pFVar16 != (FPCGTaggedData *)0x0) {
      local_200.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar16->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_200.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c1617f;
        UE::GC::MarkAsReachable((UObject *)local_200.DebugPtr);
      }
      if (local_200.DebugPtr != (UPCGSettings *)0x0) {
        pUVar13 = UPCGPointNeighborhoodSettings::StaticClass();
        bVar7 = FObjectPtr::IsA(&local_200.ObjectPtr,pUVar13);
        TVar15 = local_200;
        if (bVar7) goto LAB_149c16182;
      }
    }
  }
  else {
    pUVar14 = UPCGNode::GetSettings(this_00);
    TVar15.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar14);
    if (TVar15.DebugPtr != (UPCGSettings *)0x0) {
      pUVar13 = UPCGPointNeighborhoodSettings::StaticClass();
      iVar11 = (int)pUVar13->_padding_;
      if ((iVar11 <= *(int *)((TVar15.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar15.DebugPtr)->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
          &pUVar13->_padding_)) goto LAB_149c16182;
    }
  }
LAB_149c1617f:
  TVar15.DebugPtr = (UPCGSettings *)0x0;
LAB_149c16182:
  if ((TVar15.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointNeighborhood.cpp"
                         ,0x35,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_210,&PCGPinConstants::DefaultInputLabel);
  dVar3 = __real_bff0000000000000;
  local_1a0 = (double)TVar15.DebugPtr[1]._padding_;
  if (__real_3e45798ee2308c3a <= local_1a0) {
    local_1c0.Distances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0.Distances.ArrayNum = 0;
    local_1c0.Distances.ArrayMax = 0;
    local_1c0.AveragePositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0.AveragePositions.ArrayNum = 0;
    local_1c0.AveragePositions.ArrayMax = 0;
    if (0 < local_210.ArrayNum) {
      local_1e8 = 0;
      do {
        lVar6 = local_1e8;
        uVar22 = TVar23._0_4_;
        uVar10 = 0;
        if ((int)uVar22 < local_210.ArrayNum) {
          uVar10 = ~uVar22 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
        local_1f8 = (FObjectPtr_u_0)
                    ((FObjectPtr_u_0 *)(local_210.AllocatorInstance.Data + lVar6))->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c1635c:
          if ((UPCGSpatialData *)local_1f8.Handle == (UPCGSpatialData *)0x0) goto LAB_149c167dd;
          pUVar13 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
          bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_1f8,pUVar13);
          FVar4 = local_1f8;
          if ((!bVar7) ||
             (param_1 = local_1f0, (UPCGSpatialData *)local_1f8.Handle == (UPCGSpatialData *)0x0))
          goto LAB_149c167dd;
          uVar10 = 0;
          if ((int)uVar22 < local_210.ArrayNum) {
            uVar10 = ~uVar22 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          pFVar5 = local_1f0;
          pFVar16 = (FPCGTaggedData *)(local_1f0->OutputData).TaggedData.AllocatorInstance.Data;
          pFVar21 = (FPCGTaggedData *)
                    (local_210.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x78);
          if (((pFVar16 <= pFVar21) &&
              (pFVar21 < pFVar16 + (local_1f0->OutputData).TaggedData.ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          iVar11 = (pFVar5->OutputData).TaggedData.ArrayNum;
          piVar1 = &(pFVar5->OutputData).TaggedData.ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)&pFVar5->OutputData,piVar1);
          }
          (pFVar5->OutputData).TaggedData.ArrayNum = iVar11 + 1;
          local_198 = FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 ((pFVar5->OutputData).TaggedData.AllocatorInstance.Data +
                                 (longlong)iVar11 * 0x78),pFVar21);
          this_01 = FPCGContext::NewPointData_AnyThread(pFVar5);
          UPCGSpatialData::InitializeFromData
                    ((UPCGSpatialData *)this_01,(UPCGSpatialData *)FVar4.Handle,(UPCGMetadata *)0x0,
                     true,true);
          bVar20 = -((int)TVar15.DebugPtr[1]._padding_ != 0) & 2;
          bVar19 = bVar20 | 1;
          if (*(char *)((longlong)&TVar15.DebugPtr[1]._padding_ + 4) == '\0') {
            bVar19 = bVar20;
          }
          bVar20 = bVar19 | 0x10;
          if (*(char *)((longlong)&TVar15.DebugPtr[1]._padding_ + 5) == '\0') {
            bVar20 = bVar19;
          }
          if (((char)TVar15.DebugPtr[1]._padding_ != '\0') ||
             (*(char *)((longlong)&TVar15.DebugPtr[1]._padding_ + 4) != '\0')) {
            bVar20 = bVar20 | 0x80;
          }
          pcVar2 = *(code **)(this_01->_padding_ + 0x490);
          uVar12 = (**(code **)(*(longlong *)FVar4.Handle + 0x488))(FVar4.Handle);
          (*pcVar2)(this_01,uVar12,0);
          cVar9 = (**(code **)(this_01->_padding_ + 0x440))(this_01);
          if (cVar9 == '\0') {
            pcVar2 = *(code **)(this_01->_padding_ + 0x498);
            uVar12 = (**(code **)(*(longlong *)FVar4.Handle + 0x640))(FVar4.Handle,1);
            (*pcVar2)(this_01,uVar12);
          }
          (**(code **)(this_01->_padding_ + 0x498))(this_01,bVar20);
          FPCGDataPtrWrapper::operator=(&local_198->Data,(UPCGData *)this_01);
          local_50 = local_1a0;
          local_68 = local_1a0 * dVar3;
          local_48 = 1;
          local_60._8_4_ = SUB84(local_1a0,0);
          local_60._0_8_ = local_1a0;
          local_60._12_4_ = (int)((ulonglong)local_1a0 >> 0x20);
          local_78._8_4_ = SUB84(local_68,0);
          local_78._0_8_ = local_68;
          local_78._12_4_ = (int)((ulonglong)local_68 >> 0x20);
          local_1e0.AttributeList.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e0.bProjectPositions = true;
          local_1e0.bProjectRotations = true;
          local_1e0.bProjectScales = false;
          local_1e0.ColorBlendMode = SourceValue;
          local_1e0._4_4_ = 0;
          local_1e0.AttributeList.Data.ArrayNum = 0;
          local_1e0.AttributeList.Data.ArrayMax = 0;
          local_1e0.AttributeMode = ExcludeAttributes;
          local_1e0.AttributeMergeOperation = Min;
          local_1e0.TagMergeOperation = Source;
          local_1e0._27_5_ = 0;
          ::FString::FString(&local_1e0.AttributeList,L"");
          local_1e0.ColorBlendMode = *(char *)((longlong)&TVar15.DebugPtr[1]._padding_ + 5) != '\0';
          local_1e0.AttributeMode = ExcludeAttributes;
          local_1e0.AttributeMergeOperation = TargetValue;
          local_1e0.TagMergeOperation = Source;
          local_1e0._0_8_ = CONCAT53(local_1e0._3_5_,local_1e0._0_3_) & 0xffffffffff0000ff;
          local_158 = (**(code **)(*(longlong *)FVar4.Handle + 0x488))(FVar4.Handle);
          local_160 = &local_1c0;
          local_148 = &local_1c0;
          local_140 = local_78;
          local_138 = &local_1a0;
          local_130 = &local_1e0;
          local_128.Handle = FVar4.Handle;
          local_168 = TVar15;
          local_150 = TVar15;
          local_120 = this_01;
          iVar11 = (**(code **)(*(longlong *)FVar4.Handle + 0x488))(FVar4.Handle);
          param_1 = local_1f0;
          FPCGAsync::
          AsyncProcessingOneToOneRangeEx<_FPCGPointNeighborhoodElement::ExecuteInternal_::__l32::<lambda_1>_&,_FPCGPointNeighborhoodElement::ExecuteInternal_::__l32::<lambda_2>_&>
                    (&local_1f0->AsyncState,iVar11,(<lambda_1> *)&local_168.ObjectPtr,
                     (<lambda_2> *)&local_150.ObjectPtr,false,0x40,true);
          if ((char)TVar15.DebugPtr[1]._padding_ != '\0') {
            iVar11 = local_1c0.Distances.ArrayNum;
            local_188 = local_1c0.Distances.AllocatorInstance.Data;
            if ((local_1c0.Distances.ArrayNum < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
            iStack_180 = iVar11;
            local_e8._12_4_ = uStack_17c;
            local_e8.ArrayNum = iVar11;
            local_e8.DataPtr = (double *)local_188;
            PCGPointNeighborhood::SetAttributeHelper<double>
                      (this_01,(FName *)((longlong)&TVar15.DebugPtr[1]._padding_ + 4),&local_e8);
          }
          if (*(char *)((longlong)&TVar15.DebugPtr[1]._padding_ + 4) != '\0') {
            iVar11 = local_1c0.AveragePositions.ArrayNum;
            local_178 = local_1c0.AveragePositions.AllocatorInstance.Data;
            if ((local_1c0.AveragePositions.ArrayNum < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
            iStack_170 = iVar11;
            local_d8._12_4_ = uStack_16c;
            local_d8.ArrayNum = iVar11;
            local_d8.DataPtr = (TVector<double> *)local_178;
            PCGPointNeighborhood::SetAttributeHelper<UE::Math::TVector<double>_>
                      (this_01,(FName *)&TVar15.DebugPtr[1]._padding_,&local_d8);
          }
          if (local_1e0.AttributeList.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_1e0.AttributeList.Data.AllocatorInstance.Data);
          }
        }
        else {
          if ((UPCGSpatialData *)local_1f8.Handle != (UPCGSpatialData *)0x0) {
            UE::GC::MarkAsReachable(local_1f8.Handle);
            goto LAB_149c1635c;
          }
LAB_149c167dd:
          if (5 < (byte)LogPCG._0_1_) {
            pFVar17 = FText::AsLocalizable_Advanced_LocText
                                (&local_98,L"PCGPointNeighborhoodElement",L"InvalidPointData",
                                 L"Input {0} is not point data");
            pFVar18 = FTextFormat::FTextFormat(&local_88,pFVar17,Default);
            pFVar17 = FText::Format<int>(&local_a8,pFVar18,uVar22);
            FText::ToString(pFVar17);
            FPCGContext::GetTaskName(param_1,&local_b8);
            FPCGContext::GetExecutionSourceName(param_1,&local_c8);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if (local_a8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
            }
            if (local_98.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
            }
          }
        }
        local_1e8 = local_1e8 + 0x78;
        TVar23._0_4_ = uVar22 + 1;
        TVar23._4_4_ = 0;
      } while ((int)TVar23._0_4_ < local_210.ArrayNum);
    }
    if (local_1c0.AveragePositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.AveragePositions.AllocatorInstance.Data);
    }
    if (local_1c0.Distances.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Distances.AllocatorInstance.Data);
    }
  }
  else if (1 < (byte)LogPCG._0_1_) {
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_f8,L"PCGPointNeighborhoodElement",L"InvalidSearchDistance",
                         L"Search Distance must be greater than 0.");
    FText::ToString(pFVar17);
    FPCGContext::GetTaskName(param_1,&local_108);
    FPCGContext::GetExecutionSourceName(param_1,&local_118);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_210.AllocatorInstance.Data,local_210.ArrayNum);
  if ((FPCGTaggedData *)local_210.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_210.AllocatorInstance.Data);
  }
  if ((bool)<Var24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149c228c0

EPCGElementExecutionLoopMode __thiscall
FPCGPointNeighborhoodElement::ExecutionLoopMode
          (FPCGPointNeighborhoodElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149c35810

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
FPCGPointNeighborhoodElement::SupportsBasePointDataInputs
          (FPCGPointNeighborhoodElement *this,FPCGContext *param_1)

{
  return true;
}

