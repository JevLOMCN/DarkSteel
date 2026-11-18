// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Navmesh
// Functions: 75

// `dynamic_initializer_for_'CVarEnableSpanHeightRasterizationFix'' @ 140f94cd0

void __cdecl
UE::Recast::Private::_dynamic_initializer_for__CVarEnableSpanHeightRasterizationFix__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableSpanHeightRasterizationFix,L"ai.nav.EnableSpanHeightRasterizationFix",
             &bEnableSpanHeightRasterizationFix,
             L"Active by default. Enable rasterization fix for span height.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableSpanHeightRasterizationFix__);
  return;
}

// rasterizeTri<AddSpanInHeightfield> @ 1446ad260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
rasterizeTri<AddSpanInHeightfield>
          (double *param_1,double *param_2,double *param_3,uchar param_4,rcHeightfield *param_5,
          double *param_6,double *param_7,double param_8,double param_9,double param_10,int param_11
          ,int param_12,int *param_13,AddSpanInHeightfield *param_14)

{
  byte bVar1;
  int iVar2;
  rcRowExt *prVar3;
  rcTempSpan *prVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  uint *puVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uVar60;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar61;
  undefined4 uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auStackY_298 [32];
  uint local_24c;
  uint local_240 [4];
  rcEdgeHit *local_230;
  uint local_228;
  uint local_224;
  uint local_220;
  longlong local_218;
  uint local_210;
  longlong local_208;
  ulonglong local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double local_1c8 [10];
  double *local_178;
  double adStack_168 [18];
  ulonglong local_d8;
  
  auVar63._0_8_ = __real_3ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_298;
  auVar44._0_8_ = *param_6;
  local_230 = param_5->EdgeHits;
  local_240[2] = param_5->width;
  local_178 = param_6;
  auVar40._0_8_ = (*param_1 - auVar44._0_8_) * param_9;
  lVar25 = (longlong)auVar40._0_8_;
  uVar13 = local_240[2];
  if ((lVar25 != -0x8000000000000000) && ((double)lVar25 != auVar40._0_8_)) {
    auVar40._8_8_ = auVar40._0_8_;
    uVar13 = movmskpd(local_240[2],auVar40);
    uVar13 = uVar13 & 1;
    auVar40._0_8_ = (double)(longlong)(lVar25 - (ulonglong)uVar13);
  }
  auVar45._0_8_ = param_6[2];
  uVar24 = (uint)auVar40._0_8_;
  auVar41._0_8_ = (param_1[2] - auVar45._0_8_) * param_9;
  lVar25 = (longlong)auVar41._0_8_;
  if ((lVar25 != -0x8000000000000000) && ((double)lVar25 != auVar41._0_8_)) {
    auVar41._8_8_ = auVar41._0_8_;
    uVar13 = movmskpd(uVar13,auVar41);
    auVar41._0_8_ = (double)(longlong)(lVar25 - (ulonglong)(uVar13 & 1));
  }
  uVar14 = (uint)auVar41._0_8_;
  local_1f8 = (double)CONCAT44(uVar14,uVar24);
  auVar42._0_8_ = (*param_2 - auVar44._0_8_) * param_9;
  lVar25 = (longlong)auVar42._0_8_;
  uVar13 = uVar14;
  if ((lVar25 != -0x8000000000000000) && ((double)lVar25 != auVar42._0_8_)) {
    auVar42._8_8_ = auVar42._0_8_;
    uVar13 = movmskpd(uVar14,auVar42);
    uVar13 = uVar13 & 1;
    auVar42._0_8_ = (double)(longlong)(lVar25 - (ulonglong)uVar13);
  }
  uVar32 = (uint)auVar42._0_8_;
  auVar43._0_8_ = (param_2[2] - auVar45._0_8_) * param_9;
  lVar25 = (longlong)auVar43._0_8_;
  if ((lVar25 != -0x8000000000000000) && ((double)lVar25 != auVar43._0_8_)) {
    auVar43._8_8_ = auVar43._0_8_;
    uVar13 = movmskpd(uVar13,auVar43);
    uVar13 = uVar13 & 1;
    auVar43._0_8_ = (double)(longlong)(lVar25 - (ulonglong)uVar13);
  }
  uVar38 = (uint)auVar43._0_8_;
  local_218 = CONCAT44(local_218._4_4_,uVar38);
  uStack_1f0 = (double)CONCAT44(uVar38,uVar32);
  auVar44._0_8_ = (*param_3 - auVar44._0_8_) * param_9;
  lVar25 = (longlong)auVar44._0_8_;
  if ((lVar25 != -0x8000000000000000) && ((double)lVar25 != auVar44._0_8_)) {
    auVar44._8_8_ = auVar44._0_8_;
    uVar13 = movmskpd(uVar13,auVar44);
    uVar13 = uVar13 & 1;
    auVar44._0_8_ = (double)(longlong)(lVar25 - (ulonglong)uVar13);
  }
  uVar36 = (uint)auVar44._0_8_;
  auVar45._0_8_ = (param_3[2] - auVar45._0_8_) * param_9;
  lVar25 = (longlong)auVar45._0_8_;
  if ((lVar25 != -0x8000000000000000) && ((double)lVar25 != auVar45._0_8_)) {
    auVar45._8_8_ = auVar45._0_8_;
    uVar13 = movmskpd(uVar13,auVar45);
    auVar45._0_8_ = (double)(longlong)(lVar25 - (ulonglong)(uVar13 & 1));
  }
  uVar15 = (uint)auVar45._0_8_;
  uVar13 = uVar36;
  if ((int)uVar32 < (int)uVar36) {
    uVar13 = uVar32;
  }
  if ((int)uVar24 < (int)uVar13) {
    uVar13 = uVar24;
  }
  if ((int)uVar32 < (int)uVar36) {
    uVar32 = uVar36;
  }
  local_1e8 = (double)CONCAT44(uVar15,uVar36);
  if ((int)uVar24 < (int)uVar32) {
    uVar24 = uVar32;
  }
  uVar32 = uVar15;
  if ((int)uVar38 < (int)uVar15) {
    uVar32 = uVar38;
  }
  if ((int)uVar14 < (int)uVar32) {
    uVar32 = uVar14;
  }
  uVar36 = uVar38;
  if ((int)uVar38 < (int)auVar45._0_8_) {
    uVar36 = (int)auVar45._0_8_;
  }
  uVar19 = uVar14;
  if ((int)uVar14 < (int)uVar36) {
    uVar19 = uVar36;
  }
  if ((((-1 < (int)uVar24) && ((int)uVar13 < (int)local_240[2])) && (-1 < (int)uVar19)) &&
     ((int)uVar32 < param_5->height)) {
    auVar44._0_8_ = param_6[1];
    local_1c8[7] = param_3[1];
    uVar36 = param_12 & 1;
    local_1c8[4] = param_2[1];
    auVar45._0_8_ = param_7[1] - auVar44._0_8_;
    local_1c8[1] = param_1[1];
    uVar61 = SUB84(local_1c8[1],0);
    uVar62 = (undefined4)((ulonglong)local_1c8[1] >> 0x20);
    auVar40._0_8_ = local_1c8[1];
    if (local_1c8[1] <= local_1c8[4]) {
      auVar40._0_8_ = local_1c8[4];
    }
    if (local_1c8[4] <= local_1c8[1]) {
      uVar61 = SUB84(local_1c8[4],0);
      uVar62 = (undefined4)((ulonglong)local_1c8[4] >> 0x20);
    }
    if (auVar40._0_8_ <= local_1c8[7]) {
      auVar40._0_8_ = local_1c8[7];
    }
    if (local_1c8[7] <= (double)CONCAT44(uVar62,uVar61)) {
      uVar61 = SUB84(local_1c8[7],0);
      uVar62 = (undefined4)((ulonglong)local_1c8[7] >> 0x20);
    }
    auVar40._0_8_ = auVar40._0_8_ - auVar44._0_8_;
    auVar44._0_8_ = (double)CONCAT44(uVar62,uVar61) - auVar44._0_8_;
    if ((0.0 <= auVar40._0_8_) && (auVar44._0_8_ <= auVar45._0_8_)) {
      if ((uVar13 == uVar24) && (uVar32 == uVar19)) {
        if (auVar44._0_8_ <= 0.0) {
          auVar44._0_8_ = 0.0;
        }
        if (auVar45._0_8_ <= auVar40._0_8_) {
          auVar40._0_8_ = auVar45._0_8_;
        }
        auVar44._0_8_ = auVar44._0_8_ * param_10;
        lVar25 = (longlong)auVar44._0_8_;
        if ((lVar25 != -0x8000000000000000) && ((double)lVar25 != auVar44._0_8_)) {
          auVar5._8_4_ = SUB84(auVar44._0_8_,0);
          auVar5._0_8_ = auVar44._0_8_;
          auVar5._12_4_ = (int)((ulonglong)auVar44._0_8_ >> 0x20);
          uVar24 = movmskpd(0,auVar5);
          auVar44._0_8_ = (double)(longlong)(lVar25 - (ulonglong)(uVar24 & 1));
        }
        uVar14 = (uint)auVar44._0_8_;
        uVar24 = 0;
        if ((-1 < (int)uVar14) && (uVar24 = uVar14, 0x1fffffff < (int)uVar14)) {
          uVar24 = 0x1fffffff;
        }
        auVar63._0_8_ = auVar40._0_8_ * param_10;
        lVar25 = (longlong)auVar63._0_8_;
        if ((lVar25 != -0x8000000000000000) && ((double)lVar25 != auVar63._0_8_)) {
          auVar63._8_8_ = auVar63._0_8_;
          uVar14 = movmskpd(0,auVar63);
          auVar63._0_8_ = (double)(longlong)(lVar25 + (ulonglong)(uVar14 & 1 ^ 1));
        }
        uVar38 = (uint)auVar63._0_8_;
        uVar14 = uVar24 + 1;
        if (((int)(uVar24 + 1) <= (int)uVar38) && (uVar14 = uVar38, 0x1fffffff < (int)uVar38)) {
          uVar14 = 0x1fffffff;
        }
        if (param_13 != (int *)0x0) {
          uVar36 = param_13[(int)(uVar32 * local_240[2] + uVar13)] & uVar36;
        }
        uVar38 = 0;
        if (uVar36 == 0) {
          uVar38 = uVar24;
        }
        addSpan(param_5,uVar13,uVar32,uVar38,uVar14,param_4,param_11);
      }
      else {
        auVar44._0_8_ = auVar44._0_8_ * param_10;
        lVar25 = (longlong)auVar44._0_8_;
        if ((lVar25 != -0x8000000000000000) && ((double)lVar25 != auVar44._0_8_)) {
          auVar6._8_4_ = SUB84(auVar44._0_8_,0);
          auVar6._0_8_ = auVar44._0_8_;
          auVar6._12_4_ = (int)((ulonglong)auVar44._0_8_ >> 0x20);
          uVar16 = movmskpd((int)param_7,auVar6);
          param_7 = (double *)(ulonglong)(uVar16 & 1);
          auVar44._0_8_ = (double)(lVar25 - (longlong)param_7);
        }
        local_220 = (uint)auVar44._0_8_;
        auVar64._0_8_ = auVar40._0_8_ * param_10;
        if ((int)local_220 < -0x7fffffff) {
          local_220 = 0x80000001;
        }
        lVar25 = (longlong)auVar64._0_8_;
        if ((lVar25 != -0x8000000000000000) && ((double)lVar25 != auVar64._0_8_)) {
          auVar64._8_8_ = auVar64._0_8_;
          uVar16 = movmskpd((int)param_7,auVar64);
          auVar64._0_8_ = (double)(longlong)(lVar25 - (ulonglong)(uVar16 & 1));
        }
        local_1c8[0] = *param_1;
        local_1c8[2] = param_1[2];
        uVar16 = (int)auVar64._0_8_;
        if ((int)auVar64._0_8_ < -0x7fffffff) {
          uVar16 = 0x80000001;
        }
        local_1c8[3] = *param_2;
        uVar39 = 0;
        uVar22 = 0;
        local_1c8[5] = param_2[2];
        local_1c8[6] = *param_3;
        uVar21 = (ulonglong)uVar13;
        if ((int)uVar13 < 0) {
          uVar21 = uVar22;
        }
        local_1c8[8] = param_3[2];
        local_210 = local_240[2];
        if ((int)uVar24 < (int)local_240[2]) {
          local_210 = uVar24;
        }
        iVar29 = (int)uVar21;
        uVar13 = local_240[2] - 1;
        if ((int)uVar24 < (int)(local_240[2] - 1)) {
          uVar13 = uVar24;
        }
        uVar24 = param_5->height;
        if ((int)uVar32 < 0) {
          uVar32 = uVar39;
        }
        local_224 = uVar24;
        if ((int)uVar19 < (int)uVar24) {
          local_224 = uVar19;
        }
        uVar17 = uVar24 - 1;
        if ((int)uVar19 < (int)(uVar24 - 1)) {
          uVar17 = uVar19;
        }
        local_208 = (longlong)(int)uVar17;
        auVar44._0_8_ = 0.0;
        uVar24 = uVar39;
        if (local_220 == uVar16) {
          do {
            local_240[0] = uVar24 + 1;
            local_228 = uVar39;
            if (uVar24 != 2) {
              local_228 = local_240[0];
            }
            iVar37 = 2;
            if (uVar24 != 0) {
              iVar37 = uVar24 - 1;
            }
            lVar25 = (longlong)(int)local_228;
            uVar21 = (ulonglong)uVar24;
            lVar26 = (longlong)iVar37;
            auVar41._0_8_ = local_1c8[lVar25 * 3];
            local_200 = uVar21 * 3;
            auVar42._0_8_ = local_1c8[uVar21 * 3];
            auVar40._0_8_ = local_1c8[uVar21 * 3 + 2];
            uVar19 = *(uint *)(&local_1f8 + uVar21);
            auVar45._0_8_ = local_1c8[lVar25 * 3 + 2];
            auVar7._8_4_ = SUB84(local_1c8[lVar25 * 3 + 1] - local_1c8[uVar21 * 3 + 1],0);
            auVar7._0_8_ = auVar41._0_8_ - auVar42._0_8_;
            auVar7._12_4_ =
                 (int)((ulonglong)(local_1c8[lVar25 * 3 + 1] - local_1c8[uVar21 * 3 + 1]) >> 0x20);
            *(undefined1 (*) [16])(adStack_168 + lVar26 * 3) = auVar7;
            adStack_168[lVar26 * 3 + 2] = auVar45._0_8_ - auVar40._0_8_;
            adStack_168[lVar26 * 3 + 9] = auVar63._0_8_ / (auVar41._0_8_ - auVar42._0_8_);
            adStack_168[lVar26 * 3 + 10] = auVar63._0_8_ / adStack_168[lVar26 * 3 + 1];
            adStack_168[lVar26 * 3 + 0xb] = auVar63._0_8_ / adStack_168[lVar26 * 3 + 2];
            if ((iVar29 <= (int)uVar19) && ((int)uVar19 <= (int)uVar13)) {
              iVar31 = *(int *)((longlong)&local_1f8 + uVar21 * 8 + 4);
              if (((int)uVar32 <= iVar31) && (iVar31 <= (int)uVar17)) {
                prVar3 = param_5->RowExt;
                uVar33 = uVar19;
                if (prVar3[(longlong)iVar31 + 1].MinCol < (int)uVar19) {
                  uVar33 = prVar3[(longlong)iVar31 + 1].MinCol;
                }
                prVar3[(longlong)iVar31 + 1].MinCol = uVar33;
                uVar33 = param_5->RowExt[(longlong)iVar31 + 1].MaxCol;
                if ((int)uVar33 < (int)uVar19) {
                  uVar33 = uVar19;
                }
                param_5->RowExt[(longlong)iVar31 + 1].MaxCol = uVar33;
              }
            }
            uVar33 = *(uint *)((longlong)&local_1f8 + (ulonglong)uVar24 * 8 + 4);
            uVar18 = *(uint *)((longlong)&local_1f8 + lVar25 * 8 + 4);
            if (uVar33 != uVar18) {
              uVar10 = uVar18;
              if ((int)uVar33 < (int)uVar18) {
                uVar10 = uVar33;
                uVar33 = uVar18;
              }
              uVar18 = uVar10 + 1;
              if ((int)(uVar10 + 1) < (int)uVar32) {
                uVar18 = uVar32;
              }
              lVar30 = (longlong)(int)uVar18;
              uVar18 = local_224;
              if ((int)uVar33 < (int)local_224) {
                uVar18 = uVar33;
              }
              for (; lVar30 <= (int)uVar18; lVar30 = lVar30 + 1) {
                local_230[lVar30].Hits[local_230[lVar30].Hits[0] != '\0'] =
                     ((char)iVar37 << 2 | (byte)local_228) << 2 | (byte)uVar24;
              }
            }
            uVar24 = *(uint *)(&local_1f8 + lVar25);
            if (uVar19 != uVar24) {
              uVar33 = uVar24;
              if ((int)uVar19 < (int)uVar24) {
                uVar33 = uVar19;
                uVar19 = uVar24;
              }
              iVar37 = uVar33 + 1;
              if ((int)(uVar33 + 1) < iVar29) {
                iVar37 = iVar29;
              }
              uVar24 = local_210;
              if ((int)uVar19 < (int)local_210) {
                uVar24 = uVar19;
              }
              auVar45._0_8_ = (double)iVar37 * param_8 + *param_6;
              if (iVar37 <= (int)uVar24) {
                auVar41._0_8_ = adStack_168[lVar26 * 3 + 9];
                auVar42._0_8_ = adStack_168[lVar26 * 3 + 2];
                auVar43._0_8_ = local_1c8[uVar21 * 3];
                uVar21 = local_200;
                do {
                  auVar64._0_8_ = (auVar45._0_8_ - auVar43._0_8_) * auVar41._0_8_;
                  auVar49._0_8_ = auVar44._0_8_;
                  if ((0.0 <= auVar64._0_8_) &&
                     (auVar49._0_8_ = auVar64._0_8_, auVar63._0_8_ <= auVar64._0_8_)) {
                    auVar49._0_8_ = auVar63._0_8_;
                  }
                  auVar46._0_8_ =
                       ((auVar42._0_8_ * auVar49._0_8_ + auVar40._0_8_) - param_6[2]) * param_9;
                  lVar25 = (longlong)auVar46._0_8_;
                  if ((lVar25 != -0x8000000000000000) && ((double)lVar25 != auVar46._0_8_)) {
                    auVar46._8_8_ = auVar46._0_8_;
                    uVar19 = movmskpd((int)uVar21,auVar46);
                    auVar46._0_8_ = (double)(longlong)(lVar25 - (ulonglong)(uVar19 & 1));
                  }
                  uVar19 = (uint)auVar46._0_8_;
                  uVar21 = (ulonglong)uVar19;
                  if (((int)uVar32 <= (int)uVar19) && ((int)uVar19 <= (int)uVar17)) {
                    prVar3 = param_5->RowExt;
                    uVar33 = iVar37 - 1;
                    iVar31 = iVar37;
                    if (prVar3[(longlong)(int)uVar19 + 1].MinCol < iVar37) {
                      iVar31 = prVar3[(longlong)(int)uVar19 + 1].MinCol;
                    }
                    prVar3[(longlong)(int)uVar19 + 1].MinCol = iVar31;
                    iVar31 = param_5->RowExt[(longlong)(int)uVar19 + 1].MaxCol;
                    if (iVar31 < iVar37) {
                      iVar31 = iVar37;
                    }
                    param_5->RowExt[(longlong)(int)uVar19 + 1].MaxCol = iVar31;
                    prVar3 = param_5->RowExt;
                    uVar18 = uVar33;
                    if (prVar3[(longlong)(int)uVar19 + 1].MinCol < (int)uVar33) {
                      uVar18 = prVar3[(longlong)(int)uVar19 + 1].MinCol;
                    }
                    prVar3[(longlong)(int)uVar19 + 1].MinCol = uVar18;
                    uVar18 = param_5->RowExt[(longlong)(int)uVar19 + 1].MaxCol;
                    if ((int)uVar18 < (int)uVar33) {
                      uVar18 = uVar33;
                    }
                    uVar21 = (ulonglong)uVar18;
                    param_5->RowExt[(longlong)(int)uVar19 + 1].MaxCol = uVar18;
                  }
                  iVar37 = iVar37 + 1;
                  auVar45._0_8_ = auVar45._0_8_ + param_8;
                } while (iVar37 <= (int)uVar24);
              }
            }
            uVar24 = local_240[0];
          } while ((int)local_240[0] < 3);
          uVar24 = uVar38;
          if ((int)uVar38 < (int)uVar15) {
            uVar24 = uVar15;
            uVar15 = uVar38;
          }
          uVar38 = uVar14;
          if ((int)uVar14 < (int)uVar24) {
            uVar38 = uVar24;
          }
          if ((int)uVar14 < (int)uVar15) {
            uVar15 = uVar14;
          }
          uVar24 = uVar15 + 1;
          if ((int)(uVar15 + 1) < (int)uVar32) {
            uVar24 = uVar32;
          }
          lVar25 = (longlong)(int)uVar24;
          uVar14 = local_224;
          if ((int)uVar38 < (int)local_224) {
            uVar14 = uVar38;
          }
          auVar44._0_8_ = (double)(int)uVar24 * param_8 + param_6[2];
          if (lVar25 <= (int)uVar14) {
            local_218 = lVar25 * 8;
            do {
              bVar1 = local_230[lVar25].Hits[0];
              if (bVar1 != 0) {
                uVar24 = bVar1 & 3;
                auVar40._0_8_ =
                     (auVar44._0_8_ - local_1c8[(ulonglong)uVar24 * 3 + 2]) *
                     adStack_168[(ulonglong)(bVar1 >> 4) * 3 + 0xb];
                if (0.0 <= auVar40._0_8_) {
                  if (auVar63._0_8_ <= auVar40._0_8_) {
                    auVar40._0_8_ = auVar63._0_8_;
                  }
                }
                else {
                  auVar40._0_8_ = 0.0;
                }
                auVar45._0_8_ = *param_6;
                auVar40._0_8_ =
                     auVar40._0_8_ * adStack_168[(ulonglong)(bVar1 >> 4) * 3] +
                     local_1c8[(ulonglong)uVar24 * 3];
                auVar47._0_8_ = (auVar40._0_8_ - auVar45._0_8_) * param_9;
                lVar26 = (longlong)auVar47._0_8_;
                if ((lVar26 != -0x8000000000000000) && ((double)lVar26 != auVar47._0_8_)) {
                  auVar47._8_8_ = auVar47._0_8_;
                  uVar24 = movmskpd(uVar24 * 3,auVar47);
                  auVar47._0_8_ = (double)(longlong)(lVar26 - (ulonglong)(uVar24 & 1));
                }
                local_240[0] = (uint)auVar47._0_8_;
                if ((iVar29 <= (int)local_240[0]) && ((int)local_240[0] <= (int)uVar13)) {
                  prVar3 = param_5->RowExt;
                  uVar24 = local_240[0];
                  if (*(int *)((longlong)&prVar3[1].MinCol + local_218) < (int)local_240[0]) {
                    uVar24 = *(uint *)((longlong)&prVar3[1].MinCol + local_218);
                  }
                  prVar3[lVar25 + 1].MinCol = uVar24;
                  uVar24 = param_5->RowExt[lVar25 + 1].MaxCol;
                  if ((int)uVar24 < (int)local_240[0]) {
                    uVar24 = local_240[0];
                  }
                  param_5->RowExt[lVar25 + 1].MaxCol = uVar24;
                  prVar3 = param_5->RowExt;
                  uVar24 = local_240[0];
                  if (prVar3[lVar25].MinCol < (int)local_240[0]) {
                    uVar24 = prVar3[lVar25].MinCol;
                  }
                  prVar3[lVar25].MinCol = uVar24;
                  uVar24 = param_5->RowExt[lVar25].MaxCol;
                  if ((int)uVar24 < (int)local_240[0]) {
                    uVar24 = local_240[0];
                  }
                  param_5->RowExt[lVar25].MaxCol = uVar24;
                  auVar45._0_8_ = *param_6;
                }
                uVar24 = local_230[lVar25].Hits[1] & 3;
                uVar21 = (ulonglong)(local_230[lVar25].Hits[1] >> 4);
                auVar41._0_8_ =
                     (auVar44._0_8_ - local_1c8[(ulonglong)uVar24 * 3 + 2]) *
                     adStack_168[uVar21 * 3 + 0xb];
                if (0.0 <= auVar41._0_8_) {
                  if (auVar63._0_8_ <= auVar41._0_8_) {
                    auVar41._0_8_ = auVar63._0_8_;
                  }
                }
                else {
                  auVar41._0_8_ = 0.0;
                }
                auVar41._0_8_ =
                     auVar41._0_8_ * adStack_168[uVar21 * 3] + local_1c8[(ulonglong)uVar24 * 3];
                auVar48._0_8_ = (auVar41._0_8_ - auVar45._0_8_) * param_9;
                lVar26 = (longlong)auVar48._0_8_;
                if ((lVar26 != -0x8000000000000000) && ((double)lVar26 != auVar48._0_8_)) {
                  auVar48._8_8_ = auVar48._0_8_;
                  uVar24 = movmskpd(uVar24 * 3,auVar48);
                  auVar48._0_8_ = (double)(longlong)(lVar26 - (ulonglong)(uVar24 & 1));
                }
                local_240[1] = (uint)auVar48._0_8_;
                if ((iVar29 <= (int)local_240[1]) && ((int)local_240[1] <= (int)uVar13)) {
                  prVar3 = param_5->RowExt;
                  uVar24 = local_240[1];
                  if (prVar3[lVar25 + 1].MinCol < (int)local_240[1]) {
                    uVar24 = prVar3[lVar25 + 1].MinCol;
                  }
                  prVar3[lVar25 + 1].MinCol = uVar24;
                  uVar24 = param_5->RowExt[lVar25 + 1].MaxCol;
                  if ((int)uVar24 < (int)local_240[1]) {
                    uVar24 = local_240[1];
                  }
                  param_5->RowExt[lVar25 + 1].MaxCol = uVar24;
                  prVar3 = param_5->RowExt;
                  uVar24 = local_240[1];
                  if (prVar3[lVar25].MinCol < (int)local_240[1]) {
                    uVar24 = prVar3[lVar25].MinCol;
                  }
                  prVar3[lVar25].MinCol = uVar24;
                  uVar24 = param_5->RowExt[lVar25].MaxCol;
                  if ((int)uVar24 < (int)local_240[1]) {
                    uVar24 = local_240[1];
                  }
                  param_5->RowExt[lVar25].MaxCol = uVar24;
                }
                if (local_240[0] != local_240[1]) {
                  uVar21 = uVar22;
                  if (auVar41._0_8_ < auVar40._0_8_) {
                    uVar21 = 4;
                  }
                  iVar37 = *(int *)((longlong)local_240 + uVar21) + 1;
                  if (iVar37 < iVar29) {
                    iVar37 = iVar29;
                  }
                  uVar21 = 4;
                  if (auVar41._0_8_ < auVar40._0_8_) {
                    uVar21 = uVar22;
                  }
                  uVar24 = uVar13;
                  if ((int)*(uint *)((longlong)local_240 + uVar21) < (int)uVar13) {
                    uVar24 = *(uint *)((longlong)local_240 + uVar21);
                  }
                  if (iVar37 <= (int)uVar24) {
                    prVar3 = param_5->RowExt;
                    iVar35 = iVar37 + -1;
                    iVar34 = uVar24 - 1;
                    iVar31 = iVar37;
                    if (prVar3[lVar25 + 1].MinCol < iVar37) {
                      iVar31 = prVar3[lVar25 + 1].MinCol;
                    }
                    prVar3[lVar25 + 1].MinCol = iVar31;
                    iVar31 = param_5->RowExt[lVar25 + 1].MaxCol;
                    if (iVar31 < iVar37) {
                      iVar31 = iVar37;
                    }
                    param_5->RowExt[lVar25 + 1].MaxCol = iVar31;
                    prVar3 = param_5->RowExt;
                    uVar38 = uVar24;
                    if (prVar3[lVar25 + 1].MinCol < (int)uVar24) {
                      uVar38 = prVar3[lVar25 + 1].MinCol;
                    }
                    prVar3[lVar25 + 1].MinCol = uVar38;
                    uVar38 = param_5->RowExt[lVar25 + 1].MaxCol;
                    if ((int)uVar38 < (int)uVar24) {
                      uVar38 = uVar24;
                    }
                    param_5->RowExt[lVar25 + 1].MaxCol = uVar38;
                    prVar3 = param_5->RowExt;
                    iVar31 = iVar35;
                    if (prVar3[lVar25 + 1].MinCol < iVar35) {
                      iVar31 = prVar3[lVar25 + 1].MinCol;
                    }
                    prVar3[lVar25 + 1].MinCol = iVar31;
                    iVar31 = param_5->RowExt[lVar25 + 1].MaxCol;
                    if (iVar31 < iVar35) {
                      iVar31 = iVar35;
                    }
                    param_5->RowExt[lVar25 + 1].MaxCol = iVar31;
                    prVar3 = param_5->RowExt;
                    iVar31 = iVar34;
                    if (prVar3[lVar25 + 1].MinCol < iVar34) {
                      iVar31 = prVar3[lVar25 + 1].MinCol;
                    }
                    prVar3[lVar25 + 1].MinCol = iVar31;
                    iVar31 = param_5->RowExt[lVar25 + 1].MaxCol;
                    if (iVar31 < iVar34) {
                      iVar31 = iVar34;
                    }
                    param_5->RowExt[lVar25 + 1].MaxCol = iVar31;
                    prVar3 = param_5->RowExt;
                    iVar31 = iVar37;
                    if (prVar3[lVar25].MinCol < iVar37) {
                      iVar31 = prVar3[lVar25].MinCol;
                    }
                    prVar3[lVar25].MinCol = iVar31;
                    iVar31 = param_5->RowExt[lVar25].MaxCol;
                    if (iVar31 < iVar37) {
                      iVar31 = iVar37;
                    }
                    param_5->RowExt[lVar25].MaxCol = iVar31;
                    prVar3 = param_5->RowExt;
                    uVar38 = uVar24;
                    if (prVar3[lVar25].MinCol < (int)uVar24) {
                      uVar38 = prVar3[lVar25].MinCol;
                    }
                    prVar3[lVar25].MinCol = uVar38;
                    uVar38 = param_5->RowExt[lVar25].MaxCol;
                    if ((int)uVar38 < (int)uVar24) {
                      uVar38 = uVar24;
                    }
                    param_5->RowExt[lVar25].MaxCol = uVar38;
                    prVar3 = param_5->RowExt;
                    iVar37 = iVar35;
                    if (prVar3[lVar25].MinCol < iVar35) {
                      iVar37 = prVar3[lVar25].MinCol;
                    }
                    prVar3[lVar25].MinCol = iVar37;
                    iVar37 = param_5->RowExt[lVar25].MaxCol;
                    if (iVar37 < iVar35) {
                      iVar37 = iVar35;
                    }
                    param_5->RowExt[lVar25].MaxCol = iVar37;
                    prVar3 = param_5->RowExt;
                    iVar37 = iVar34;
                    if (prVar3[lVar25].MinCol < iVar34) {
                      iVar37 = prVar3[lVar25].MinCol;
                    }
                    prVar3[lVar25].MinCol = iVar37;
                    iVar37 = param_5->RowExt[lVar25].MaxCol;
                    if (iVar37 < iVar34) {
                      iVar37 = iVar34;
                    }
                    param_5->RowExt[lVar25].MaxCol = iVar37;
                  }
                }
                *(undefined2 *)local_230[lVar25].Hits = 0;
              }
              auVar44._0_8_ = auVar44._0_8_ + param_8;
              local_218 = local_218 + 8;
              lVar25 = lVar25 + 1;
            } while (lVar25 <= (int)uVar14);
          }
          local_240[3] = uVar32;
          if (param_13 == (int *)0x0) {
            uVar24 = uVar39;
            if ((-1 < (int)local_220) && (uVar24 = local_220, 0x1fffffff < (int)local_220)) {
              uVar24 = 0x1fffffff;
            }
            local_24c = uVar24 + 1;
            if (((int)(uVar24 + 1) <= (int)uVar16) && (local_24c = uVar16, 0x1fffffff < (int)uVar16)
               ) {
              local_24c = 0x1fffffff;
            }
            lVar25 = (longlong)(int)uVar32;
            if (uVar36 == 0) {
              uVar39 = uVar24;
            }
            if (lVar25 <= local_208) {
              local_230 = (rcEdgeHit *)(lVar25 * 8);
              do {
                prVar3 = param_5->RowExt;
                iVar37 = *(int *)((longlong)&prVar3[1].MinCol + (longlong)local_230);
                uVar24 = uVar13;
                if (prVar3[lVar25 + 1].MaxCol < (int)uVar13) {
                  uVar24 = prVar3[lVar25 + 1].MaxCol;
                }
                if (iVar37 < iVar29) {
                  iVar37 = iVar29;
                }
                for (; iVar37 <= (int)uVar24; iVar37 = iVar37 + 1) {
                  addSpan(param_5,iVar37,uVar32,uVar39,local_24c,param_4,param_11);
                }
                uVar32 = uVar32 + 1;
                param_5->RowExt[lVar25 + 1].MinCol = param_5->width + 2;
                local_230 = (rcEdgeHit *)((longlong)local_230 + 8);
                param_5->RowExt[lVar25 + 1].MaxCol = -2;
                lVar25 = lVar25 + 1;
              } while (lVar25 <= local_208);
            }
          }
          else {
            local_230 = (rcEdgeHit *)(longlong)(int)uVar32;
            if ((longlong)local_230 <= local_208) {
              local_218 = (longlong)local_230 * 8;
              iVar37 = uVar32 * local_240[2];
              do {
                iVar31 = *(int *)((longlong)&param_5->RowExt[1].MinCol + local_218);
                uVar24 = param_5->RowExt[(longlong)local_230 + 1].MaxCol;
                uVar14 = uVar13;
                if ((int)uVar24 < (int)uVar13) {
                  uVar14 = uVar24;
                }
                if (iVar31 < iVar29) {
                  iVar31 = iVar29;
                }
                if (iVar31 <= (int)uVar14) {
                  if ((int)local_220 < 0) {
                    do {
                      if ((int)uVar16 < 1) {
                        uVar24 = 1;
                      }
                      else {
                        uVar24 = uVar16;
                        if (0x1fffffff < (int)uVar16) {
                          uVar24 = 0x1fffffff;
                        }
                      }
                      addSpan(param_5,iVar31,uVar32,0,uVar24,param_4,param_11);
                      iVar31 = iVar31 + 1;
                    } while (iVar31 <= (int)uVar14);
                  }
                  else {
                    lVar25 = (longlong)iVar31;
                    if (lVar25 <= (int)uVar14) {
                      local_240[3] = local_220;
                      if (0x1fffffff < (int)local_220) {
                        local_240[3] = 0x1fffffff;
                      }
                      lVar26 = ((int)uVar14 - lVar25) + 1;
                      puVar27 = (uint *)(param_13 + iVar37 + lVar25);
                      local_240[0] = local_240[3] + 1;
                      do {
                        uVar24 = local_240[0];
                        if (((int)local_240[0] <= (int)uVar16) &&
                           (uVar24 = uVar16, 0x1fffffff < (int)uVar16)) {
                          uVar24 = 0x1fffffff;
                        }
                        uVar14 = 0;
                        if ((*puVar27 & uVar36) == 0) {
                          uVar14 = local_240[3];
                        }
                        addSpan(param_5,iVar31,uVar32,uVar14,uVar24,param_4,param_11);
                        iVar31 = iVar31 + 1;
                        puVar27 = puVar27 + 1;
                        lVar26 = lVar26 + -1;
                      } while (lVar26 != 0);
                    }
                  }
                }
                uVar32 = uVar32 + 1;
                local_218 = local_218 + 8;
                param_5->RowExt[(longlong)local_230 + 1].MinCol = param_5->width + 2;
                iVar37 = iVar37 + local_240[2];
                param_5->RowExt[(longlong)local_230 + 1].MaxCol = -2;
                local_230 = (rcEdgeHit *)((longlong)local_230 + 1);
              } while ((longlong)local_230 <= local_208);
            }
          }
        }
        else {
          do {
            uVar24 = uVar39 + 1;
            local_220 = 0;
            if (uVar39 != 2) {
              local_220 = uVar24;
            }
            iVar37 = 2;
            if (uVar39 != 0) {
              iVar37 = uVar39 - 1;
            }
            lVar25 = (longlong)(int)local_220;
            uVar21 = (ulonglong)uVar39;
            lVar26 = (longlong)iVar37;
            auVar41._0_8_ = local_1c8[lVar25 * 3];
            uVar19 = *(uint *)(&local_1f8 + uVar21);
            auVar40._0_8_ = local_1c8[uVar21 * 3 + 2];
            auVar42._0_8_ = local_1c8[uVar21 * 3];
            auVar45._0_8_ = local_1c8[lVar25 * 3 + 2];
            auVar8._8_4_ = SUB84(local_1c8[lVar25 * 3 + 1] - local_1c8[uVar21 * 3 + 1],0);
            auVar8._0_8_ = auVar41._0_8_ - auVar42._0_8_;
            auVar8._12_4_ =
                 (int)((ulonglong)(local_1c8[lVar25 * 3 + 1] - local_1c8[uVar21 * 3 + 1]) >> 0x20);
            *(undefined1 (*) [16])(adStack_168 + lVar26 * 3) = auVar8;
            adStack_168[lVar26 * 3 + 2] = auVar45._0_8_ - auVar40._0_8_;
            adStack_168[lVar26 * 3 + 9] = auVar63._0_8_ / (auVar41._0_8_ - auVar42._0_8_);
            adStack_168[lVar26 * 3 + 10] = auVar63._0_8_ / adStack_168[lVar26 * 3 + 1];
            adStack_168[lVar26 * 3 + 0xb] = auVar63._0_8_ / adStack_168[lVar26 * 3 + 2];
            if ((iVar29 <= (int)uVar19) && ((int)uVar19 <= (int)uVar13)) {
              iVar31 = *(int *)((longlong)&local_1f8 + uVar21 * 8 + 4);
              if (((int)uVar32 <= iVar31) && (iVar31 <= (int)uVar17)) {
                auVar49._0_8_ = (local_1c8[uVar21 * 3 + 1] - param_6[1]) * param_10;
                lVar30 = (longlong)auVar49._0_8_;
                if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != auVar49._0_8_)) {
                  auVar49._8_8_ = auVar49._0_8_;
                  uVar16 = movmskpd(0,auVar49);
                  auVar49._0_8_ = (double)(longlong)(lVar30 - (ulonglong)(uVar16 & 1));
                }
                prVar3 = param_5->RowExt;
                iVar34 = (int)auVar49._0_8_;
                if ((int)auVar49._0_8_ < -0x7fffffff) {
                  iVar34 = -0x7fffffff;
                }
                uVar16 = uVar19;
                if (prVar3[(longlong)iVar31 + 1].MinCol < (int)uVar19) {
                  uVar16 = prVar3[(longlong)iVar31 + 1].MinCol;
                }
                prVar3[(longlong)iVar31 + 1].MinCol = uVar16;
                uVar16 = param_5->RowExt[(longlong)iVar31 + 1].MaxCol;
                if ((int)uVar16 < (int)uVar19) {
                  uVar16 = uVar19;
                }
                param_5->RowExt[(longlong)iVar31 + 1].MaxCol = uVar16;
                prVar4 = param_5->tempspans;
                lVar30 = (longlong)(int)((iVar31 + 1) * (param_5->width + 2) + uVar19);
                iVar31 = iVar34;
                if (prVar4[lVar30 + 1].sminmax[0] <= iVar34) {
                  iVar31 = prVar4[lVar30 + 1].sminmax[0];
                }
                iVar35 = prVar4[lVar30 + 1].sminmax[1];
                prVar4[lVar30 + 1].sminmax[0] = iVar31;
                if (iVar34 <= iVar35) {
                  iVar34 = prVar4[lVar30 + 1].sminmax[1];
                }
                prVar4[lVar30 + 1].sminmax[1] = iVar34;
              }
            }
            uVar16 = *(uint *)((longlong)&local_1f8 + (ulonglong)uVar39 * 8 + 4);
            uVar33 = *(uint *)((longlong)&local_1f8 + lVar25 * 8 + 4);
            if (uVar16 != uVar33) {
              uVar18 = uVar33;
              if ((int)uVar16 < (int)uVar33) {
                uVar18 = uVar16;
                uVar16 = uVar33;
              }
              uVar33 = uVar18 + 1;
              if ((int)(uVar18 + 1) < (int)uVar32) {
                uVar33 = uVar32;
              }
              lVar30 = (longlong)(int)uVar33;
              uVar33 = local_224;
              if ((int)uVar16 < (int)local_224) {
                uVar33 = uVar16;
              }
              for (; lVar30 <= (int)uVar33; lVar30 = lVar30 + 1) {
                local_230[lVar30].Hits[local_230[lVar30].Hits[0] != '\0'] =
                     ((char)iVar37 << 2 | (byte)local_220) << 2 | (byte)uVar39;
              }
            }
            uVar16 = *(uint *)(&local_1f8 + lVar25);
            if (uVar19 != uVar16) {
              uVar39 = uVar19;
              if ((int)uVar19 < (int)uVar16) {
                uVar39 = uVar16;
              }
              uVar22 = (ulonglong)uVar39;
              if ((int)uVar19 < (int)uVar16) {
                uVar16 = uVar19;
              }
              iVar37 = uVar16 + 1;
              if ((int)(uVar16 + 1) < iVar29) {
                iVar37 = iVar29;
              }
              uVar19 = local_210;
              if ((int)uVar39 < (int)local_210) {
                uVar19 = uVar39;
              }
              auVar45._0_8_ = (double)iVar37 * param_8 + *param_6;
              if (iVar37 <= (int)uVar19) {
                auVar41._0_8_ = adStack_168[lVar26 * 3 + 9];
                auVar42._0_8_ = adStack_168[lVar26 * 3 + 1];
                auVar43._0_8_ = adStack_168[lVar26 * 3 + 2];
                auVar64._0_8_ = local_1c8[uVar21 * 3];
                auVar49._0_8_ = local_1c8[uVar21 * 3 + 1];
                do {
                  auVar52._0_8_ = (auVar45._0_8_ - auVar64._0_8_) * auVar41._0_8_;
                  if (0.0 <= auVar52._0_8_) {
                    if (auVar63._0_8_ <= auVar52._0_8_) {
                      auVar52._0_8_ = auVar63._0_8_;
                    }
                  }
                  else {
                    auVar52._0_8_ = 0.0;
                  }
                  auVar50._0_8_ =
                       ((auVar43._0_8_ * auVar52._0_8_ + auVar40._0_8_) - param_6[2]) * param_9;
                  lVar25 = (longlong)auVar50._0_8_;
                  if ((lVar25 != -0x8000000000000000) && ((double)lVar25 != auVar50._0_8_)) {
                    auVar50._8_8_ = auVar50._0_8_;
                    uVar16 = movmskpd((int)uVar22,auVar50);
                    uVar22 = (ulonglong)(uVar16 & 1);
                    auVar50._0_8_ = (double)(longlong)(lVar25 - uVar22);
                  }
                  iVar31 = (int)auVar50._0_8_;
                  if (((int)uVar32 <= iVar31) && (iVar31 <= (int)uVar17)) {
                    auVar52._0_8_ =
                         ((auVar42._0_8_ * auVar52._0_8_ + auVar49._0_8_) - param_6[1]) * param_10;
                    lVar25 = (longlong)auVar52._0_8_;
                    if ((lVar25 != -0x8000000000000000) && ((double)lVar25 != auVar52._0_8_)) {
                      auVar9._8_4_ = SUB84(auVar52._0_8_,0);
                      auVar9._0_8_ = auVar52._0_8_;
                      auVar9._12_4_ = (int)((ulonglong)auVar52._0_8_ >> 0x20);
                      uVar16 = movmskpd((int)uVar22,auVar9);
                      auVar52._0_8_ = (double)(longlong)(lVar25 - (ulonglong)(uVar16 & 1));
                    }
                    prVar3 = param_5->RowExt;
                    uVar16 = (int)auVar52._0_8_;
                    if ((int)auVar52._0_8_ < -0x7fffffff) {
                      uVar16 = 0x80000001;
                    }
                    iVar34 = iVar37;
                    if (prVar3[(longlong)iVar31 + 1].MinCol < iVar37) {
                      iVar34 = prVar3[(longlong)iVar31 + 1].MinCol;
                    }
                    prVar3[(longlong)iVar31 + 1].MinCol = iVar34;
                    iVar34 = param_5->RowExt[(longlong)iVar31 + 1].MaxCol;
                    if (iVar34 < iVar37) {
                      iVar34 = iVar37;
                    }
                    param_5->RowExt[(longlong)iVar31 + 1].MaxCol = iVar34;
                    prVar4 = param_5->tempspans;
                    lVar25 = (longlong)((param_5->width + 2) * (iVar31 + 1) + iVar37);
                    uVar39 = uVar16;
                    if (prVar4[lVar25 + 1].sminmax[0] <= (int)uVar16) {
                      uVar39 = prVar4[lVar25 + 1].sminmax[0];
                    }
                    iVar34 = prVar4[lVar25 + 1].sminmax[1];
                    prVar4[lVar25 + 1].sminmax[0] = uVar39;
                    uVar39 = uVar16;
                    if ((int)uVar16 <= iVar34) {
                      uVar39 = prVar4[lVar25 + 1].sminmax[1];
                    }
                    prVar4[lVar25 + 1].sminmax[1] = uVar39;
                    iVar35 = iVar37 + -1;
                    prVar3 = param_5->RowExt;
                    iVar34 = iVar35;
                    if (prVar3[(longlong)iVar31 + 1].MinCol < iVar35) {
                      iVar34 = prVar3[(longlong)iVar31 + 1].MinCol;
                    }
                    prVar3[(longlong)iVar31 + 1].MinCol = iVar34;
                    iVar34 = param_5->RowExt[(longlong)iVar31 + 1].MaxCol;
                    if (iVar34 < iVar35) {
                      iVar34 = iVar35;
                    }
                    param_5->RowExt[(longlong)iVar31 + 1].MaxCol = iVar34;
                    prVar4 = param_5->tempspans;
                    iVar31 = (param_5->width + 2) * (iVar31 + 1) + iVar37;
                    uVar39 = uVar16;
                    if (prVar4[iVar31].sminmax[0] <= (int)uVar16) {
                      uVar39 = prVar4[iVar31].sminmax[0];
                    }
                    uVar22 = (ulonglong)uVar39;
                    iVar34 = prVar4[iVar31].sminmax[1];
                    prVar4[iVar31].sminmax[0] = uVar39;
                    if ((int)uVar16 <= iVar34) {
                      uVar16 = prVar4[iVar31].sminmax[1];
                    }
                    prVar4[iVar31].sminmax[1] = uVar16;
                  }
                  iVar37 = iVar37 + 1;
                  auVar45._0_8_ = auVar45._0_8_ + param_8;
                } while (iVar37 <= (int)uVar19);
              }
            }
            uVar39 = uVar24;
          } while ((int)uVar24 < 3);
          uVar24 = uVar38;
          if ((int)uVar38 < (int)uVar15) {
            uVar24 = uVar15;
            uVar15 = uVar38;
          }
          uVar38 = uVar14;
          if ((int)uVar14 < (int)uVar24) {
            uVar38 = uVar24;
          }
          if ((int)uVar14 < (int)uVar15) {
            uVar15 = uVar14;
          }
          uVar24 = uVar15 + 1;
          if ((int)(uVar15 + 1) < (int)uVar32) {
            uVar24 = uVar32;
          }
          lVar25 = (longlong)(int)uVar24;
          uVar14 = local_224;
          if ((int)uVar38 < (int)local_224) {
            uVar14 = uVar38;
          }
          local_200 = (ulonglong)(int)uVar14;
          auVar40._0_8_ = (double)(int)uVar24 * param_8 + param_6[2];
          if (lVar25 <= (longlong)local_200) {
            lVar26 = lVar25 * 8;
            do {
              lVar30 = 0;
              bVar1 = local_230[lVar25].Hits[0];
              if (bVar1 != 0) {
                uVar21 = (ulonglong)(bVar1 >> 4);
                uVar22 = (ulonglong)(bVar1 & 3);
                uVar14 = (bVar1 & 3) * 3;
                auVar45._0_8_ =
                     (auVar40._0_8_ - local_1c8[uVar22 * 3 + 2]) * adStack_168[uVar21 * 3 + 0xb];
                auVar41._0_8_ = auVar44._0_8_;
                if ((0.0 <= auVar45._0_8_) &&
                   (auVar41._0_8_ = auVar45._0_8_, auVar63._0_8_ <= auVar45._0_8_)) {
                  auVar41._0_8_ = auVar63._0_8_;
                }
                auVar45._0_8_ = *param_6;
                local_1f8 = auVar41._0_8_ * adStack_168[uVar21 * 3] + local_1c8[uVar22 * 3];
                uStack_1f0 = auVar41._0_8_ * adStack_168[uVar21 * 3 + 1] + local_1c8[uVar22 * 3 + 1]
                ;
                local_1e8 = auVar41._0_8_ * adStack_168[uVar21 * 3 + 2] + local_1c8[uVar22 * 3 + 2];
                auVar51._8_4_ = SUB84(uStack_1f0,0);
                auVar51._0_8_ = local_1f8;
                uVar61 = (undefined4)((ulonglong)uStack_1f0 >> 0x20);
                auVar51._12_4_ = uVar61;
                uVar60 = auVar51._8_8_;
                auVar52._0_8_ = (local_1f8 - auVar45._0_8_) * param_9;
                lVar28 = (longlong)auVar52._0_8_;
                if ((lVar28 != -0x8000000000000000) && ((double)lVar28 != auVar52._0_8_)) {
                  auVar52._8_8_ = auVar52._0_8_;
                  uVar14 = movmskpd(uVar14,auVar52);
                  uVar14 = uVar14 & 1;
                  auVar52._0_8_ = (double)(longlong)(lVar28 - (ulonglong)uVar14);
                  uVar60 = 0;
                }
                local_240[0] = (uint)auVar52._0_8_;
                if ((iVar29 <= (int)local_240[0]) && ((int)local_240[0] <= (int)uVar13)) {
                  auVar11._4_8_ = uVar60;
                  auVar11._0_4_ = (int)((ulonglong)local_1f8 >> 0x20);
                  auVar53._0_8_ = auVar11._0_8_ << 0x20;
                  auVar53._8_4_ = SUB84(uStack_1f0,0);
                  auVar53._12_4_ = uVar61;
                  auVar54._0_8_ = (auVar53._8_8_ - param_6[1]) * param_10;
                  lVar28 = (longlong)auVar54._0_8_;
                  if ((lVar28 != -0x8000000000000000) && ((double)lVar28 != auVar54._0_8_)) {
                    auVar54._8_8_ = auVar54._0_8_;
                    uVar14 = movmskpd(uVar14,auVar54);
                    auVar54._0_8_ = (double)(longlong)(lVar28 - (ulonglong)(uVar14 & 1));
                  }
                  prVar3 = param_5->RowExt;
                  iVar37 = (int)auVar54._0_8_;
                  if ((int)auVar54._0_8_ < -0x7fffffff) {
                    iVar37 = -0x7fffffff;
                  }
                  uVar14 = local_240[0];
                  if (*(int *)((longlong)&prVar3[1].MinCol + lVar26) < (int)local_240[0]) {
                    uVar14 = *(uint *)((longlong)&prVar3[1].MinCol + lVar26);
                  }
                  prVar3[lVar25 + 1].MinCol = uVar14;
                  uVar14 = param_5->RowExt[lVar25 + 1].MaxCol;
                  if ((int)uVar14 < (int)local_240[0]) {
                    uVar14 = local_240[0];
                  }
                  param_5->RowExt[lVar25 + 1].MaxCol = uVar14;
                  prVar4 = param_5->tempspans;
                  lVar28 = (longlong)(int)((uVar24 + 1) * (param_5->width + 2) + local_240[0]);
                  iVar31 = iVar37;
                  if (prVar4[lVar28 + 1].sminmax[0] <= iVar37) {
                    iVar31 = prVar4[lVar28 + 1].sminmax[0];
                  }
                  iVar34 = prVar4[lVar28 + 1].sminmax[1];
                  prVar4[lVar28 + 1].sminmax[0] = iVar31;
                  iVar31 = iVar37;
                  if (iVar37 <= iVar34) {
                    iVar31 = prVar4[lVar28 + 1].sminmax[1];
                  }
                  prVar4[lVar28 + 1].sminmax[1] = iVar31;
                  prVar3 = param_5->RowExt;
                  uVar14 = local_240[0];
                  if (prVar3[lVar25].MinCol < (int)local_240[0]) {
                    uVar14 = prVar3[lVar25].MinCol;
                  }
                  prVar3[lVar25].MinCol = uVar14;
                  uVar14 = param_5->RowExt[lVar25].MaxCol;
                  if ((int)uVar14 < (int)local_240[0]) {
                    uVar14 = local_240[0];
                  }
                  param_5->RowExt[lVar25].MaxCol = uVar14;
                  prVar4 = param_5->tempspans;
                  lVar28 = (longlong)(int)((param_5->width + 2) * uVar24 + local_240[0]);
                  iVar31 = iVar37;
                  if (prVar4[lVar28 + 1].sminmax[0] <= iVar37) {
                    iVar31 = prVar4[lVar28 + 1].sminmax[0];
                  }
                  iVar34 = prVar4[lVar28 + 1].sminmax[1];
                  prVar4[lVar28 + 1].sminmax[0] = iVar31;
                  if (iVar37 <= iVar34) {
                    iVar37 = prVar4[lVar28 + 1].sminmax[1];
                  }
                  prVar4[lVar28 + 1].sminmax[1] = iVar37;
                  auVar45._0_8_ = *param_6;
                }
                uVar14 = local_230[lVar25].Hits[1] & 3;
                uVar22 = (ulonglong)uVar14;
                uVar21 = (ulonglong)(local_230[lVar25].Hits[1] >> 4);
                uVar14 = uVar14 * 3;
                auVar41._0_8_ =
                     (auVar40._0_8_ - local_1c8[uVar22 * 3 + 2]) * adStack_168[uVar21 * 3 + 0xb];
                auVar42._0_8_ = auVar44._0_8_;
                if ((0.0 <= auVar41._0_8_) &&
                   (auVar42._0_8_ = auVar41._0_8_, auVar63._0_8_ <= auVar41._0_8_)) {
                  auVar42._0_8_ = auVar63._0_8_;
                }
                local_1d0 = auVar42._0_8_ * adStack_168[uVar21 * 3 + 2] + local_1c8[uVar22 * 3 + 2];
                local_1e0 = auVar42._0_8_ * adStack_168[uVar21 * 3] + local_1c8[uVar22 * 3];
                dStack_1d8 = auVar42._0_8_ * adStack_168[uVar21 * 3 + 1] + local_1c8[uVar22 * 3 + 1]
                ;
                auVar55._8_4_ = SUB84(dStack_1d8,0);
                auVar55._0_8_ = local_1e0;
                uVar61 = (undefined4)((ulonglong)dStack_1d8 >> 0x20);
                auVar55._12_4_ = uVar61;
                uVar60 = auVar55._8_8_;
                auVar56._0_8_ = (local_1e0 - auVar45._0_8_) * param_9;
                lVar28 = (longlong)auVar56._0_8_;
                if ((lVar28 != -0x8000000000000000) && ((double)lVar28 != auVar56._0_8_)) {
                  auVar56._8_8_ = auVar56._0_8_;
                  uVar14 = movmskpd(uVar14,auVar56);
                  uVar14 = uVar14 & 1;
                  auVar56._0_8_ = (double)(longlong)(lVar28 - (ulonglong)uVar14);
                  uVar60 = 0;
                }
                local_240[1] = (uint)auVar56._0_8_;
                if ((iVar29 <= (int)local_240[1]) && ((int)local_240[1] <= (int)uVar13)) {
                  auVar12._4_8_ = uVar60;
                  auVar12._0_4_ = (int)((ulonglong)local_1e0 >> 0x20);
                  auVar57._0_8_ = auVar12._0_8_ << 0x20;
                  auVar57._8_4_ = SUB84(dStack_1d8,0);
                  auVar57._12_4_ = uVar61;
                  auVar58._0_8_ = (auVar57._8_8_ - param_6[1]) * param_10;
                  lVar28 = (longlong)auVar58._0_8_;
                  if ((lVar28 != -0x8000000000000000) && ((double)lVar28 != auVar58._0_8_)) {
                    auVar58._8_8_ = auVar58._0_8_;
                    uVar14 = movmskpd(uVar14,auVar58);
                    auVar58._0_8_ = (double)(longlong)(lVar28 - (ulonglong)(uVar14 & 1));
                  }
                  prVar3 = param_5->RowExt;
                  iVar37 = (int)auVar58._0_8_;
                  if ((int)auVar58._0_8_ < -0x7fffffff) {
                    iVar37 = -0x7fffffff;
                  }
                  uVar14 = local_240[1];
                  if (prVar3[lVar25 + 1].MinCol < (int)local_240[1]) {
                    uVar14 = prVar3[lVar25 + 1].MinCol;
                  }
                  prVar3[lVar25 + 1].MinCol = uVar14;
                  uVar14 = param_5->RowExt[lVar25 + 1].MaxCol;
                  if ((int)uVar14 < (int)local_240[1]) {
                    uVar14 = local_240[1];
                  }
                  param_5->RowExt[lVar25 + 1].MaxCol = uVar14;
                  prVar4 = param_5->tempspans;
                  lVar28 = (longlong)(int)((uVar24 + 1) * (param_5->width + 2) + local_240[1]);
                  iVar31 = iVar37;
                  if (prVar4[lVar28 + 1].sminmax[0] <= iVar37) {
                    iVar31 = prVar4[lVar28 + 1].sminmax[0];
                  }
                  prVar4[lVar28 + 1].sminmax[0] = iVar31;
                  iVar31 = iVar37;
                  if (iVar37 <= prVar4[lVar28 + 1].sminmax[1]) {
                    iVar31 = prVar4[lVar28 + 1].sminmax[1];
                  }
                  prVar4[lVar28 + 1].sminmax[1] = iVar31;
                  prVar3 = param_5->RowExt;
                  uVar14 = local_240[1];
                  if (prVar3[lVar25].MinCol < (int)local_240[1]) {
                    uVar14 = prVar3[lVar25].MinCol;
                  }
                  prVar3[lVar25].MinCol = uVar14;
                  uVar14 = param_5->RowExt[lVar25].MaxCol;
                  if ((int)uVar14 < (int)local_240[1]) {
                    uVar14 = local_240[1];
                  }
                  param_5->RowExt[lVar25].MaxCol = uVar14;
                  prVar4 = param_5->tempspans;
                  lVar28 = (longlong)(int)((param_5->width + 2) * uVar24 + local_240[1]);
                  iVar31 = iVar37;
                  if (prVar4[lVar28 + 1].sminmax[0] <= iVar37) {
                    iVar31 = prVar4[lVar28 + 1].sminmax[0];
                  }
                  prVar4[lVar28 + 1].sminmax[0] = iVar31;
                  if (iVar37 <= prVar4[lVar28 + 1].sminmax[1]) {
                    iVar37 = prVar4[lVar28 + 1].sminmax[1];
                  }
                  prVar4[lVar28 + 1].sminmax[1] = iVar37;
                }
                if (local_240[0] != local_240[1]) {
                  lVar28 = lVar30;
                  if (local_1e0 < local_1f8) {
                    lVar28 = 4;
                  }
                  iVar37 = *(int *)((longlong)local_240 + lVar28) + 1;
                  if (iVar37 < iVar29) {
                    iVar37 = iVar29;
                  }
                  lVar28 = 4;
                  if (local_1e0 < local_1f8) {
                    lVar28 = lVar30;
                  }
                  uVar14 = local_210;
                  if ((int)*(uint *)((longlong)local_240 + lVar28) < (int)local_210) {
                    uVar14 = *(uint *)((longlong)local_240 + lVar28);
                  }
                  auVar45._0_8_ = 0.0;
                  lVar23 = lVar30;
                  lVar28 = 0x18;
                  if (local_1e0 < local_1f8) {
                    lVar23 = 0x18;
                    lVar28 = lVar30;
                  }
                  auVar41._0_8_ = *(double *)((longlong)&local_1f8 + lVar23);
                  auVar42._0_8_ = *(double *)((longlong)&uStack_1f0 + lVar23);
                  auVar43._0_8_ = *(double *)((longlong)&uStack_1f0 + lVar28) - auVar42._0_8_;
                  auVar64._0_8_ =
                       auVar63._0_8_ / (*(double *)((longlong)&local_1f8 + lVar28) - auVar41._0_8_);
                  auVar49._0_8_ =
                       (((double)iVar37 * param_8 + *param_6) - auVar41._0_8_) * auVar64._0_8_;
                  if (0.0 <= auVar49._0_8_) {
                    if (auVar63._0_8_ <= auVar49._0_8_) {
                      auVar49._0_8_ = auVar63._0_8_;
                    }
                  }
                  else {
                    auVar49._0_8_ = 0.0;
                  }
                  iVar31 = uVar14 - iVar37;
                  auVar49._0_8_ = (auVar43._0_8_ * auVar49._0_8_ + auVar42._0_8_) - param_6[1];
                  if (0 < iVar31) {
                    auVar64._0_8_ =
                         (((double)(int)uVar14 * param_8 + *param_6) - auVar41._0_8_) *
                         auVar64._0_8_;
                    if (0.0 <= auVar64._0_8_) {
                      if (auVar63._0_8_ <= auVar64._0_8_) {
                        auVar64._0_8_ = auVar63._0_8_;
                      }
                    }
                    else {
                      auVar64._0_8_ = 0.0;
                    }
                    auVar45._0_8_ =
                         (((auVar43._0_8_ * auVar64._0_8_ + auVar42._0_8_) - param_6[1]) -
                         auVar49._0_8_) / (double)iVar31;
                  }
                  if (iVar37 <= (int)uVar14) {
                    iVar34 = iVar37 + -1;
                    do {
                      auVar59._0_8_ = auVar49._0_8_ * param_10;
                      lVar30 = (longlong)auVar59._0_8_;
                      if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != auVar59._0_8_)) {
                        auVar59._8_8_ = auVar59._0_8_;
                        uVar38 = movmskpd(iVar31,auVar59);
                        auVar59._0_8_ = (double)(longlong)(lVar30 - (ulonglong)(uVar38 & 1));
                      }
                      prVar3 = param_5->RowExt;
                      iVar35 = (int)auVar59._0_8_;
                      if ((int)auVar59._0_8_ < -0x7fffffff) {
                        iVar35 = -0x7fffffff;
                      }
                      iVar31 = iVar37;
                      if (prVar3[lVar25 + 1].MinCol < iVar37) {
                        iVar31 = prVar3[lVar25 + 1].MinCol;
                      }
                      prVar3[lVar25 + 1].MinCol = iVar31;
                      iVar31 = param_5->RowExt[lVar25 + 1].MaxCol;
                      if (iVar31 < iVar37) {
                        iVar31 = iVar37;
                      }
                      param_5->RowExt[lVar25 + 1].MaxCol = iVar31;
                      prVar4 = param_5->tempspans;
                      lVar30 = (longlong)(int)((param_5->width + 2) * (uVar24 + 1) + iVar37);
                      iVar31 = iVar35;
                      if (prVar4[lVar30 + 1].sminmax[0] <= iVar35) {
                        iVar31 = prVar4[lVar30 + 1].sminmax[0];
                      }
                      iVar20 = prVar4[lVar30 + 1].sminmax[1];
                      prVar4[lVar30 + 1].sminmax[0] = iVar31;
                      iVar31 = iVar35;
                      if (iVar35 <= iVar20) {
                        iVar31 = prVar4[lVar30 + 1].sminmax[1];
                      }
                      prVar4[lVar30 + 1].sminmax[1] = iVar31;
                      prVar3 = param_5->RowExt;
                      iVar31 = iVar34;
                      if (prVar3[lVar25 + 1].MinCol < iVar34) {
                        iVar31 = prVar3[lVar25 + 1].MinCol;
                      }
                      prVar3[lVar25 + 1].MinCol = iVar31;
                      iVar31 = param_5->RowExt[lVar25 + 1].MaxCol;
                      if (iVar31 < iVar34) {
                        iVar31 = iVar34;
                      }
                      param_5->RowExt[lVar25 + 1].MaxCol = iVar31;
                      prVar4 = param_5->tempspans;
                      iVar20 = (param_5->width + 2) * (uVar24 + 1) + iVar37;
                      iVar31 = iVar35;
                      if (prVar4[iVar20].sminmax[0] <= iVar35) {
                        iVar31 = prVar4[iVar20].sminmax[0];
                      }
                      iVar2 = prVar4[iVar20].sminmax[1];
                      prVar4[iVar20].sminmax[0] = iVar31;
                      iVar31 = iVar35;
                      if (iVar35 <= iVar2) {
                        iVar31 = prVar4[iVar20].sminmax[1];
                      }
                      prVar4[iVar20].sminmax[1] = iVar31;
                      prVar3 = param_5->RowExt;
                      iVar31 = iVar37;
                      if (prVar3[lVar25].MinCol < iVar37) {
                        iVar31 = prVar3[lVar25].MinCol;
                      }
                      prVar3[lVar25].MinCol = iVar31;
                      iVar31 = param_5->RowExt[lVar25].MaxCol;
                      if (iVar31 < iVar37) {
                        iVar31 = iVar37;
                      }
                      param_5->RowExt[lVar25].MaxCol = iVar31;
                      prVar4 = param_5->tempspans;
                      lVar30 = (longlong)(int)((param_5->width + 2) * uVar24 + iVar37);
                      iVar31 = iVar35;
                      if (prVar4[lVar30 + 1].sminmax[0] <= iVar35) {
                        iVar31 = prVar4[lVar30 + 1].sminmax[0];
                      }
                      iVar20 = prVar4[lVar30 + 1].sminmax[1];
                      prVar4[lVar30 + 1].sminmax[0] = iVar31;
                      iVar31 = iVar35;
                      if (iVar35 <= iVar20) {
                        iVar31 = prVar4[lVar30 + 1].sminmax[1];
                      }
                      prVar4[lVar30 + 1].sminmax[1] = iVar31;
                      iVar20 = iVar37 + -1;
                      prVar3 = param_5->RowExt;
                      iVar31 = iVar20;
                      if (prVar3[lVar25].MinCol < iVar20) {
                        iVar31 = prVar3[lVar25].MinCol;
                      }
                      prVar3[lVar25].MinCol = iVar31;
                      auVar49._0_8_ = auVar49._0_8_ + auVar45._0_8_;
                      iVar31 = param_5->RowExt[lVar25].MaxCol;
                      if (iVar31 < iVar20) {
                        iVar31 = iVar20;
                      }
                      param_5->RowExt[lVar25].MaxCol = iVar31;
                      prVar4 = param_5->tempspans;
                      iVar20 = (param_5->width + 2) * uVar24 + iVar37;
                      iVar31 = iVar35;
                      if (prVar4[iVar20].sminmax[0] <= iVar35) {
                        iVar31 = prVar4[iVar20].sminmax[0];
                      }
                      iVar2 = prVar4[iVar20].sminmax[1];
                      prVar4[iVar20].sminmax[0] = iVar31;
                      if (iVar35 <= iVar2) {
                        iVar35 = prVar4[iVar20].sminmax[1];
                      }
                      iVar37 = iVar37 + 1;
                      iVar34 = iVar34 + 1;
                      prVar4[iVar20].sminmax[1] = iVar35;
                      param_6 = local_178;
                    } while (iVar37 <= (int)uVar14);
                  }
                }
                *(undefined2 *)local_230[lVar25].Hits = 0;
              }
              auVar40._0_8_ = auVar40._0_8_ + param_8;
              lVar26 = lVar26 + 8;
              uVar24 = uVar24 + 1;
              lVar25 = lVar25 + 1;
            } while (lVar25 <= (longlong)local_200);
          }
          lVar25 = (longlong)(int)uVar32;
          if (lVar25 <= local_208) {
            local_230 = (rcEdgeHit *)(lVar25 * 8);
            local_240[3] = uVar32 * local_240[2];
            local_228 = uVar17;
            do {
              uVar14 = uVar32 + 1;
              iVar37 = *(int *)((longlong)&param_5->RowExt[1].MinCol + (longlong)local_230);
              uVar24 = param_5->RowExt[lVar25 + 1].MaxCol;
              if (iVar37 < iVar29) {
                iVar37 = iVar29;
              }
              lVar26 = (longlong)iVar37;
              uVar38 = uVar13;
              if ((int)uVar24 < (int)uVar13) {
                uVar38 = uVar24;
              }
              if (lVar26 <= (int)uVar38) {
                lVar30 = ((int)uVar38 - lVar26) + 1;
                puVar27 = (uint *)(param_13 + (int)local_240[3] + lVar26);
                local_240[0] = uVar14;
                do {
                  lVar26 = (longlong)(int)((param_5->width + 2) * uVar14 + iVar37);
                  prVar4 = param_5->tempspans;
                  uVar24 = prVar4[lVar26 + 1].sminmax[0];
                  uVar38 = prVar4[lVar26 + 1].sminmax[1];
                  if (UE::Recast::Private::bEnableSpanHeightRasterizationFix != false) {
                    uVar38 = uVar38 + 1;
                  }
                  prVar4[lVar26 + 1].sminmax[0] = 0x7fffffff;
                  prVar4[lVar26 + 1].sminmax[1] = -0x7fffffff;
                  if (((int)uVar24 < 0x1fffffff) && (-1 < (int)uVar38)) {
                    if ((int)uVar24 < 0) {
                      uVar24 = 0;
                    }
                    if ((int)uVar38 < (int)(uVar24 + 1)) {
                      uVar38 = uVar24 + 1;
                    }
                    uVar14 = 0x1fffffff;
                    if ((int)uVar38 < 0x1fffffff) {
                      uVar14 = uVar38;
                    }
                    uVar38 = uVar36;
                    if (param_13 != (int *)0x0) {
                      uVar38 = *puVar27 & uVar36;
                    }
                    uVar15 = 0;
                    if (uVar38 == 0) {
                      uVar15 = uVar24;
                    }
                    addSpan(param_5,iVar37,uVar32,uVar15,uVar14,param_4,param_11);
                    uVar14 = local_240[0];
                  }
                  iVar37 = iVar37 + 1;
                  puVar27 = puVar27 + 1;
                  lVar30 = lVar30 + -1;
                } while (lVar30 != 0);
              }
              local_240[3] = local_240[3] + local_240[2];
              param_5->RowExt[lVar25 + 1].MinCol = param_5->width + 2;
              local_230 = (rcEdgeHit *)((longlong)local_230 + 8);
              param_5->RowExt[lVar25 + 1].MaxCol = -2;
              lVar25 = lVar25 + 1;
              uVar32 = uVar14;
            } while (lVar25 <= local_208);
          }
        }
      }
    }
  }
  return;
}

// rasterizeTri<AddSpanInTempColumns> @ 1446af090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
rasterizeTri<AddSpanInTempColumns>
          (double *param_1,double *param_2,double *param_3,uchar param_4,rcHeightfield *param_5,
          double *param_6,double *param_7,double param_8,double param_9,double param_10,int param_11
          ,int param_12,int *param_13,AddSpanInTempColumns *param_14)

{
  rcSpanData *prVar1;
  rcSpanData *prVar2;
  byte bVar3;
  int iVar4;
  rcRowExt *prVar5;
  rcTempSpan *prVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  int iVar32;
  ulonglong uVar33;
  longlong lVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 uVar63;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined4 uVar64;
  undefined4 uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auStackY_298 [32];
  uint local_250;
  int local_244;
  undefined8 local_240;
  uint local_238;
  uint local_234;
  AddSpanInTempColumns *local_230;
  uint *local_228;
  ulonglong local_220;
  ulonglong local_218;
  uint local_210;
  double *local_208;
  rcEdgeHit *local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  longlong local_1c0;
  double local_1b8 [4];
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double adStack_168 [18];
  ulonglong local_d8;
  
  auVar66._0_8_ = __real_3ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_298;
  auVar47._0_8_ = *param_6;
  local_200 = param_5->EdgeHits;
  local_238 = param_5->width;
  local_230 = param_14;
  auVar43._0_8_ = (*param_1 - auVar47._0_8_) * param_9;
  local_208 = param_6;
  lVar30 = (longlong)auVar43._0_8_;
  uVar16 = local_238;
  if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != auVar43._0_8_)) {
    auVar43._8_8_ = auVar43._0_8_;
    uVar16 = movmskpd(local_238,auVar43);
    uVar16 = uVar16 & 1;
    auVar43._0_8_ = (double)(longlong)(lVar30 - (ulonglong)uVar16);
  }
  auVar48._0_8_ = param_6[2];
  uVar28 = (uint)auVar43._0_8_;
  auVar44._0_8_ = (param_1[2] - auVar48._0_8_) * param_9;
  lVar30 = (longlong)auVar44._0_8_;
  if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != auVar44._0_8_)) {
    auVar44._8_8_ = auVar44._0_8_;
    uVar16 = movmskpd(uVar16,auVar44);
    auVar44._0_8_ = (double)(longlong)(lVar30 - (ulonglong)(uVar16 & 1));
  }
  uVar17 = (uint)auVar44._0_8_;
  local_1f0 = (double)CONCAT44(uVar17,uVar28);
  auVar45._0_8_ = (*param_2 - auVar47._0_8_) * param_9;
  lVar30 = (longlong)auVar45._0_8_;
  uVar16 = uVar17;
  if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != auVar45._0_8_)) {
    auVar45._8_8_ = auVar45._0_8_;
    uVar16 = movmskpd(uVar17,auVar45);
    uVar16 = uVar16 & 1;
    auVar45._0_8_ = (double)(longlong)(lVar30 - (ulonglong)uVar16);
  }
  uVar35 = (uint)auVar45._0_8_;
  auVar46._0_8_ = (param_2[2] - auVar48._0_8_) * param_9;
  lVar30 = (longlong)auVar46._0_8_;
  if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != auVar46._0_8_)) {
    auVar46._8_8_ = auVar46._0_8_;
    uVar16 = movmskpd(uVar16,auVar46);
    auVar46._0_8_ = (double)(longlong)(lVar30 - (ulonglong)(uVar16 & 1));
  }
  uVar18 = (uint)auVar46._0_8_;
  uStack_1e8 = (double)CONCAT44(uVar18,uVar35);
  auVar47._0_8_ = (*param_3 - auVar47._0_8_) * param_9;
  lVar30 = (longlong)auVar47._0_8_;
  uVar16 = uVar18;
  if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != auVar47._0_8_)) {
    auVar47._8_8_ = auVar47._0_8_;
    uVar16 = movmskpd(uVar18,auVar47);
    uVar16 = uVar16 & 1;
    auVar47._0_8_ = (double)(longlong)(lVar30 - (ulonglong)uVar16);
  }
  uVar40 = (uint)auVar47._0_8_;
  auVar48._0_8_ = (param_3[2] - auVar48._0_8_) * param_9;
  lVar30 = (longlong)auVar48._0_8_;
  if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != auVar48._0_8_)) {
    auVar48._8_8_ = auVar48._0_8_;
    uVar16 = movmskpd(uVar16,auVar48);
    auVar48._0_8_ = (double)(longlong)(lVar30 - (ulonglong)(uVar16 & 1));
  }
  uVar19 = (uint)auVar48._0_8_;
  uVar16 = uVar40;
  if ((int)uVar35 < (int)uVar40) {
    uVar16 = uVar35;
  }
  if ((int)uVar28 < (int)uVar16) {
    uVar16 = uVar28;
  }
  if ((int)uVar35 < (int)uVar40) {
    uVar35 = uVar40;
  }
  local_1e0 = (double)CONCAT44(uVar19,uVar40);
  if ((int)uVar28 < (int)uVar35) {
    uVar28 = uVar35;
  }
  uVar35 = uVar19;
  if ((int)uVar18 < (int)uVar19) {
    uVar35 = uVar18;
  }
  if ((int)uVar17 < (int)uVar35) {
    uVar35 = uVar17;
  }
  uVar40 = uVar18;
  if ((int)uVar18 < (int)uVar19) {
    uVar40 = (int)auVar48._0_8_;
  }
  uVar29 = uVar17;
  if ((int)uVar17 < (int)uVar40) {
    uVar29 = uVar40;
  }
  if ((((-1 < (int)uVar28) && ((int)uVar16 < (int)local_238)) && (-1 < (int)uVar29)) &&
     ((int)uVar35 < param_5->height)) {
    auVar47._0_8_ = param_6[1];
    local_180 = param_3[1];
    uVar40 = param_12 & 1;
    local_198 = param_2[1];
    auVar48._0_8_ = param_7[1] - auVar47._0_8_;
    local_1b8[1] = param_1[1];
    uVar64 = SUB84(local_1b8[1],0);
    uVar65 = (undefined4)((ulonglong)local_1b8[1] >> 0x20);
    auVar43._0_8_ = local_1b8[1];
    if (local_1b8[1] <= local_198) {
      auVar43._0_8_ = local_198;
    }
    if (local_198 <= local_1b8[1]) {
      uVar64 = SUB84(local_198,0);
      uVar65 = (undefined4)((ulonglong)local_198 >> 0x20);
    }
    if (auVar43._0_8_ <= local_180) {
      auVar43._0_8_ = local_180;
    }
    if (local_180 <= (double)CONCAT44(uVar65,uVar64)) {
      uVar64 = SUB84(local_180,0);
      uVar65 = (undefined4)((ulonglong)local_180 >> 0x20);
    }
    auVar43._0_8_ = auVar43._0_8_ - auVar47._0_8_;
    auVar47._0_8_ = (double)CONCAT44(uVar65,uVar64) - auVar47._0_8_;
    if ((0.0 <= auVar43._0_8_) && (auVar47._0_8_ <= auVar48._0_8_)) {
      if ((uVar16 == uVar28) && (uVar35 == uVar29)) {
        if (auVar47._0_8_ <= 0.0) {
          auVar47._0_8_ = 0.0;
        }
        if (auVar48._0_8_ <= auVar43._0_8_) {
          auVar43._0_8_ = auVar48._0_8_;
        }
        auVar47._0_8_ = auVar47._0_8_ * param_10;
        lVar30 = (longlong)auVar47._0_8_;
        if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != auVar47._0_8_)) {
          auVar7._8_4_ = SUB84(auVar47._0_8_,0);
          auVar7._0_8_ = auVar47._0_8_;
          auVar7._12_4_ = (int)((ulonglong)auVar47._0_8_ >> 0x20);
          uVar28 = movmskpd(0,auVar7);
          auVar47._0_8_ = (double)(longlong)(lVar30 - (ulonglong)(uVar28 & 1));
        }
        uVar28 = (uint)auVar47._0_8_;
        if ((int)uVar28 < 0) {
          uVar28 = 0;
        }
        else if (0x1fffffff < (int)uVar28) {
          uVar28 = 0x1fffffff;
        }
        auVar66._0_8_ = auVar43._0_8_ * param_10;
        lVar30 = (longlong)auVar66._0_8_;
        if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != auVar66._0_8_)) {
          auVar66._8_8_ = auVar66._0_8_;
          uVar17 = movmskpd(0,auVar66);
          auVar66._0_8_ = (double)(longlong)(lVar30 + (ulonglong)(uVar17 & 1 ^ 1));
        }
        uVar18 = (uint)auVar66._0_8_;
        uVar17 = uVar28 + 1;
        if (((int)(uVar28 + 1) <= (int)uVar18) && (uVar17 = uVar18, 0x1fffffff < (int)uVar18)) {
          uVar17 = 0x1fffffff;
        }
        if (param_13 != (int *)0x0) {
          uVar40 = param_13[(int)(uVar35 * local_238 + uVar16)] & uVar40;
        }
        uVar18 = 0;
        if (uVar40 == 0) {
          uVar18 = uVar28;
        }
        AddSpanInTempColumns::addSpan(param_14,param_5,uVar16,uVar35,uVar18,uVar17,param_4,param_11)
        ;
      }
      else {
        auVar47._0_8_ = auVar47._0_8_ * param_10;
        lVar30 = (longlong)auVar47._0_8_;
        if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != auVar47._0_8_)) {
          auVar8._8_4_ = SUB84(auVar47._0_8_,0);
          auVar8._0_8_ = auVar47._0_8_;
          auVar8._12_4_ = (int)((ulonglong)auVar47._0_8_ >> 0x20);
          uVar20 = movmskpd((int)param_7,auVar8);
          param_7 = (double *)(ulonglong)(uVar20 & 1);
          auVar47._0_8_ = (double)(lVar30 - (longlong)param_7);
        }
        local_210 = (uint)auVar47._0_8_;
        auVar67._0_8_ = auVar43._0_8_ * param_10;
        if ((int)local_210 < -0x7fffffff) {
          local_210 = 0x80000001;
        }
        lVar30 = (longlong)auVar67._0_8_;
        if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != auVar67._0_8_)) {
          auVar67._8_8_ = auVar67._0_8_;
          uVar20 = movmskpd((int)param_7,auVar67);
          auVar67._0_8_ = (double)(longlong)(lVar30 - (ulonglong)(uVar20 & 1));
        }
        local_1b8[0] = *param_1;
        local_1b8[2] = param_1[2];
        uVar20 = (int)auVar67._0_8_;
        if ((int)auVar67._0_8_ < -0x7fffffff) {
          uVar20 = 0x80000001;
        }
        local_1b8[3] = *param_2;
        uVar26 = 0;
        local_190 = param_2[2];
        local_188 = *param_3;
        uVar42 = 0;
        uVar33 = (ulonglong)uVar16;
        if ((int)uVar16 < 0) {
          uVar33 = uVar26;
        }
        local_178 = param_3[2];
        uVar16 = local_238;
        if ((int)uVar28 < (int)local_238) {
          uVar16 = uVar28;
        }
        iVar32 = (int)uVar33;
        local_220 = CONCAT44(local_220._4_4_,uVar16);
        uVar12 = local_238 - 1;
        if ((int)uVar28 < (int)(local_238 - 1)) {
          uVar12 = uVar28;
        }
        uVar28 = param_5->height;
        uVar33 = (ulonglong)uVar35;
        if ((int)uVar35 < 0) {
          uVar33 = uVar26;
        }
        local_234 = (uint)uVar33;
        uVar35 = uVar28;
        if ((int)uVar29 < (int)uVar28) {
          uVar35 = uVar29;
        }
        uVar21 = uVar28 - 1;
        if ((int)uVar29 < (int)(uVar28 - 1)) {
          uVar21 = uVar29;
        }
        local_240 = CONCAT44(local_240._4_4_,uVar21);
        local_1f8 = (longlong)(int)uVar21;
        auVar47._0_8_ = 0.0;
        uVar25 = uVar26;
        if (local_210 == uVar20) {
          do {
            iVar41 = (int)uVar25;
            uVar29 = iVar41 + 1;
            uVar28 = uVar42;
            if (iVar41 != 2) {
              uVar28 = uVar29;
            }
            iVar38 = 2;
            local_240 = CONCAT44(local_240._4_4_,uVar28);
            lVar30 = local_240;
            if (iVar41 != 0) {
              iVar38 = iVar41 + -1;
            }
            local_228 = (uint *)(longlong)(int)uVar28;
            auVar44._0_8_ = local_1b8[(longlong)local_228 * 3];
            auVar45._0_8_ = local_1b8[uVar25 * 3];
            local_208 = (double *)(uVar25 * 3);
            uVar22 = *(uint *)(&local_1f0 + uVar25);
            auVar43._0_8_ = local_1b8[uVar25 * 3 + 2];
            lVar31 = (longlong)iVar38;
            uVar27 = lVar31 * 3;
            auVar48._0_8_ = local_1b8[(longlong)local_228 * 3 + 2];
            auVar9._8_4_ = SUB84(local_1b8[(longlong)local_228 * 3 + 1] - local_1b8[uVar25 * 3 + 1],
                                 0);
            auVar9._0_8_ = auVar44._0_8_ - auVar45._0_8_;
            auVar9._12_4_ =
                 (int)((ulonglong)
                       (local_1b8[(longlong)local_228 * 3 + 1] - local_1b8[uVar25 * 3 + 1]) >> 0x20)
            ;
            *(undefined1 (*) [16])(adStack_168 + lVar31 * 3) = auVar9;
            adStack_168[lVar31 * 3 + 2] = auVar48._0_8_ - auVar43._0_8_;
            adStack_168[lVar31 * 3 + 9] = auVar66._0_8_ / (auVar44._0_8_ - auVar45._0_8_);
            adStack_168[lVar31 * 3 + 10] = auVar66._0_8_ / adStack_168[lVar31 * 3 + 1];
            adStack_168[lVar31 * 3 + 0xb] = auVar66._0_8_ / adStack_168[lVar31 * 3 + 2];
            if ((iVar32 <= (int)uVar22) && ((int)uVar22 <= (int)uVar12)) {
              iVar41 = *(int *)((longlong)&local_1f0 + uVar25 * 8 + 4);
              if (((int)local_234 <= iVar41) && (iVar41 <= (int)uVar21)) {
                prVar5 = param_5->RowExt;
                uVar36 = uVar22;
                if (prVar5[(longlong)iVar41 + 1].MinCol < (int)uVar22) {
                  uVar36 = prVar5[(longlong)iVar41 + 1].MinCol;
                }
                prVar5[(longlong)iVar41 + 1].MinCol = uVar36;
                uVar36 = param_5->RowExt[(longlong)iVar41 + 1].MaxCol;
                if ((int)uVar36 < (int)uVar22) {
                  uVar36 = uVar22;
                }
                param_5->RowExt[(longlong)iVar41 + 1].MaxCol = uVar36;
              }
            }
            uVar36 = *(uint *)((longlong)&local_1f0 + uVar25 * 8 + 4);
            uVar23 = *(uint *)((longlong)&local_1f0 + (longlong)local_228 * 8 + 4);
            if (uVar36 != uVar23) {
              uVar13 = uVar23;
              if ((int)uVar36 < (int)uVar23) {
                uVar13 = uVar36;
                uVar36 = uVar23;
              }
              local_240._0_1_ = (byte)uVar28;
              uVar28 = uVar13 + 1;
              if ((int)(uVar13 + 1) < (int)local_234) {
                uVar28 = local_234;
              }
              lVar34 = (longlong)(int)uVar28;
              uVar28 = uVar35;
              if ((int)uVar36 < (int)uVar35) {
                uVar28 = uVar36;
              }
              for (; lVar34 <= (int)uVar28; lVar34 = lVar34 + 1) {
                local_200[lVar34].Hits[local_200[lVar34].Hits[0] != '\0'] =
                     ((char)iVar38 << 2 | (byte)local_240) << 2 | (byte)uVar25;
              }
            }
            uVar28 = *(uint *)(&local_1f0 + (longlong)local_228);
            if (uVar22 != uVar28) {
              uVar36 = uVar28;
              if ((int)uVar22 < (int)uVar28) {
                uVar36 = uVar22;
                uVar22 = uVar28;
              }
              iVar41 = uVar36 + 1;
              if ((int)(uVar36 + 1) < iVar32) {
                iVar41 = iVar32;
              }
              uVar28 = uVar16;
              if ((int)uVar22 < (int)uVar16) {
                uVar28 = uVar22;
              }
              auVar48._0_8_ = (double)iVar41 * param_8 + *param_6;
              if (iVar41 <= (int)uVar28) {
                auVar44._0_8_ = local_1b8[uVar25 * 3];
                auVar45._0_8_ = adStack_168[lVar31 * 3 + 9];
                auVar46._0_8_ = adStack_168[lVar31 * 3 + 2];
                uVar25 = uVar27;
                do {
                  auVar67._0_8_ = (auVar48._0_8_ - auVar44._0_8_) * auVar45._0_8_;
                  auVar52._0_8_ = auVar47._0_8_;
                  if ((0.0 <= auVar67._0_8_) &&
                     (auVar52._0_8_ = auVar67._0_8_, auVar66._0_8_ <= auVar67._0_8_)) {
                    auVar52._0_8_ = auVar66._0_8_;
                  }
                  auVar49._0_8_ =
                       ((auVar46._0_8_ * auVar52._0_8_ + auVar43._0_8_) - param_6[2]) * param_9;
                  lVar31 = (longlong)auVar49._0_8_;
                  if ((lVar31 != -0x8000000000000000) && ((double)lVar31 != auVar49._0_8_)) {
                    auVar49._8_8_ = auVar49._0_8_;
                    uVar22 = movmskpd((int)uVar25,auVar49);
                    auVar49._0_8_ = (double)(longlong)(lVar31 - (ulonglong)(uVar22 & 1));
                  }
                  uVar22 = (uint)auVar49._0_8_;
                  uVar25 = (ulonglong)uVar22;
                  if (((int)local_234 <= (int)uVar22) && ((int)uVar22 <= (int)uVar21)) {
                    prVar5 = param_5->RowExt;
                    uVar36 = iVar41 - 1;
                    iVar38 = iVar41;
                    if (prVar5[(longlong)(int)uVar22 + 1].MinCol < iVar41) {
                      iVar38 = prVar5[(longlong)(int)uVar22 + 1].MinCol;
                    }
                    prVar5[(longlong)(int)uVar22 + 1].MinCol = iVar38;
                    iVar38 = param_5->RowExt[(longlong)(int)uVar22 + 1].MaxCol;
                    if (iVar38 < iVar41) {
                      iVar38 = iVar41;
                    }
                    param_5->RowExt[(longlong)(int)uVar22 + 1].MaxCol = iVar38;
                    prVar5 = param_5->RowExt;
                    uVar23 = uVar36;
                    if (prVar5[(longlong)(int)uVar22 + 1].MinCol < (int)uVar36) {
                      uVar23 = prVar5[(longlong)(int)uVar22 + 1].MinCol;
                    }
                    prVar5[(longlong)(int)uVar22 + 1].MinCol = uVar23;
                    uVar23 = param_5->RowExt[(longlong)(int)uVar22 + 1].MaxCol;
                    if ((int)uVar23 < (int)uVar36) {
                      uVar23 = uVar36;
                    }
                    uVar25 = (ulonglong)uVar23;
                    param_5->RowExt[(longlong)(int)uVar22 + 1].MaxCol = uVar23;
                  }
                  iVar41 = iVar41 + 1;
                  auVar48._0_8_ = auVar48._0_8_ + param_8;
                } while (iVar41 <= (int)uVar28);
              }
            }
            uVar25 = (ulonglong)uVar29;
            local_240 = lVar30;
          } while ((int)uVar29 < 3);
          uVar16 = uVar18;
          if ((int)uVar18 < (int)uVar19) {
            uVar16 = uVar19;
            uVar19 = uVar18;
          }
          uVar28 = uVar17;
          if ((int)uVar17 < (int)uVar16) {
            uVar28 = uVar16;
          }
          if ((int)uVar17 < (int)uVar19) {
            uVar19 = uVar17;
          }
          uVar16 = uVar19 + 1;
          if ((int)(uVar19 + 1) < (int)local_234) {
            uVar16 = local_234;
          }
          lVar30 = (longlong)(int)uVar16;
          if ((int)uVar28 < (int)uVar35) {
            uVar35 = uVar28;
          }
          auVar47._0_8_ = (double)(int)uVar16 * param_8 + param_6[2];
          if (lVar30 <= (int)uVar35) {
            local_220 = lVar30 * 8;
            do {
              bVar3 = local_200[lVar30].Hits[0];
              if (bVar3 != 0) {
                uVar16 = bVar3 & 3;
                auVar43._0_8_ =
                     (auVar47._0_8_ - local_1b8[(ulonglong)uVar16 * 3 + 2]) *
                     adStack_168[(ulonglong)(bVar3 >> 4) * 3 + 0xb];
                if (0.0 <= auVar43._0_8_) {
                  if (auVar66._0_8_ <= auVar43._0_8_) {
                    auVar43._0_8_ = auVar66._0_8_;
                  }
                }
                else {
                  auVar43._0_8_ = 0.0;
                }
                auVar48._0_8_ = *param_6;
                auVar43._0_8_ =
                     auVar43._0_8_ * adStack_168[(ulonglong)(bVar3 >> 4) * 3] +
                     local_1b8[(ulonglong)uVar16 * 3];
                auVar50._0_8_ = (auVar43._0_8_ - auVar48._0_8_) * param_9;
                lVar31 = (longlong)auVar50._0_8_;
                if ((lVar31 != -0x8000000000000000) && ((double)lVar31 != auVar50._0_8_)) {
                  auVar50._8_8_ = auVar50._0_8_;
                  uVar16 = movmskpd(uVar16 * 3,auVar50);
                  auVar50._0_8_ = (double)(longlong)(lVar31 - (ulonglong)(uVar16 & 1));
                }
                iVar41 = (int)auVar50._0_8_;
                local_240 = CONCAT44(local_240._4_4_,iVar41);
                if ((iVar32 <= iVar41) && (iVar41 <= (int)uVar12)) {
                  prVar5 = param_5->RowExt;
                  iVar38 = iVar41;
                  if (*(int *)((longlong)&prVar5[1].MinCol + local_220) < iVar41) {
                    iVar38 = *(int *)((longlong)&prVar5[1].MinCol + local_220);
                  }
                  prVar5[lVar30 + 1].MinCol = iVar38;
                  iVar38 = param_5->RowExt[lVar30 + 1].MaxCol;
                  if (iVar38 < iVar41) {
                    iVar38 = iVar41;
                  }
                  param_5->RowExt[lVar30 + 1].MaxCol = iVar38;
                  prVar5 = param_5->RowExt;
                  iVar38 = iVar41;
                  if (prVar5[lVar30].MinCol < iVar41) {
                    iVar38 = prVar5[lVar30].MinCol;
                  }
                  prVar5[lVar30].MinCol = iVar38;
                  iVar38 = param_5->RowExt[lVar30].MaxCol;
                  if (iVar38 < iVar41) {
                    iVar38 = iVar41;
                  }
                  param_5->RowExt[lVar30].MaxCol = iVar38;
                  auVar48._0_8_ = *param_6;
                }
                uVar16 = local_200[lVar30].Hits[1] & 3;
                uVar25 = (ulonglong)(local_200[lVar30].Hits[1] >> 4);
                auVar44._0_8_ =
                     (auVar47._0_8_ - local_1b8[(ulonglong)uVar16 * 3 + 2]) *
                     adStack_168[uVar25 * 3 + 0xb];
                if (0.0 <= auVar44._0_8_) {
                  if (auVar66._0_8_ <= auVar44._0_8_) {
                    auVar44._0_8_ = auVar66._0_8_;
                  }
                }
                else {
                  auVar44._0_8_ = 0.0;
                }
                auVar44._0_8_ =
                     auVar44._0_8_ * adStack_168[uVar25 * 3] + local_1b8[(ulonglong)uVar16 * 3];
                auVar51._0_8_ = (auVar44._0_8_ - auVar48._0_8_) * param_9;
                lVar31 = (longlong)auVar51._0_8_;
                if ((lVar31 != -0x8000000000000000) && ((double)lVar31 != auVar51._0_8_)) {
                  auVar51._8_8_ = auVar51._0_8_;
                  uVar16 = movmskpd(uVar16 * 3,auVar51);
                  auVar51._0_8_ = (double)(longlong)(lVar31 - (ulonglong)(uVar16 & 1));
                }
                iVar38 = (int)auVar51._0_8_;
                local_240 = CONCAT44(iVar38,iVar41);
                if ((iVar32 <= iVar38) && (iVar38 <= (int)uVar12)) {
                  prVar5 = param_5->RowExt;
                  iVar39 = iVar38;
                  if (prVar5[lVar30 + 1].MinCol < iVar38) {
                    iVar39 = prVar5[lVar30 + 1].MinCol;
                  }
                  prVar5[lVar30 + 1].MinCol = iVar39;
                  iVar39 = param_5->RowExt[lVar30 + 1].MaxCol;
                  if (iVar39 < iVar38) {
                    iVar39 = iVar38;
                  }
                  param_5->RowExt[lVar30 + 1].MaxCol = iVar39;
                  prVar5 = param_5->RowExt;
                  iVar39 = iVar38;
                  if (prVar5[lVar30].MinCol < iVar38) {
                    iVar39 = prVar5[lVar30].MinCol;
                  }
                  prVar5[lVar30].MinCol = iVar39;
                  iVar39 = param_5->RowExt[lVar30].MaxCol;
                  if (iVar39 < iVar38) {
                    iVar39 = iVar38;
                  }
                  param_5->RowExt[lVar30].MaxCol = iVar39;
                }
                if (iVar41 != iVar38) {
                  uVar25 = uVar26;
                  if (auVar44._0_8_ < auVar43._0_8_) {
                    uVar25 = 4;
                  }
                  iVar41 = *(int *)((longlong)&local_240 + uVar25) + 1;
                  if (iVar41 < iVar32) {
                    iVar41 = iVar32;
                  }
                  uVar25 = 4;
                  if (auVar44._0_8_ < auVar43._0_8_) {
                    uVar25 = uVar26;
                  }
                  uVar16 = uVar12;
                  if ((int)*(uint *)((longlong)&local_240 + uVar25) < (int)uVar12) {
                    uVar16 = *(uint *)((longlong)&local_240 + uVar25);
                  }
                  if (iVar41 <= (int)uVar16) {
                    prVar5 = param_5->RowExt;
                    iVar39 = iVar41 + -1;
                    iVar38 = iVar41;
                    if (prVar5[lVar30 + 1].MinCol < iVar41) {
                      iVar38 = prVar5[lVar30 + 1].MinCol;
                    }
                    prVar5[lVar30 + 1].MinCol = iVar38;
                    iVar38 = param_5->RowExt[lVar30 + 1].MaxCol;
                    if (iVar38 < iVar41) {
                      iVar38 = iVar41;
                    }
                    param_5->RowExt[lVar30 + 1].MaxCol = iVar38;
                    prVar5 = param_5->RowExt;
                    uVar28 = uVar16;
                    if (prVar5[lVar30 + 1].MinCol < (int)uVar16) {
                      uVar28 = prVar5[lVar30 + 1].MinCol;
                    }
                    prVar5[lVar30 + 1].MinCol = uVar28;
                    uVar28 = param_5->RowExt[lVar30 + 1].MaxCol;
                    if ((int)uVar28 < (int)uVar16) {
                      uVar28 = uVar16;
                    }
                    param_5->RowExt[lVar30 + 1].MaxCol = uVar28;
                    prVar5 = param_5->RowExt;
                    iVar38 = iVar39;
                    if (prVar5[lVar30 + 1].MinCol < iVar39) {
                      iVar38 = prVar5[lVar30 + 1].MinCol;
                    }
                    prVar5[lVar30 + 1].MinCol = iVar38;
                    iVar38 = param_5->RowExt[lVar30 + 1].MaxCol;
                    if (iVar38 < iVar39) {
                      iVar38 = iVar39;
                    }
                    iVar37 = uVar16 - 1;
                    param_5->RowExt[lVar30 + 1].MaxCol = iVar38;
                    prVar5 = param_5->RowExt;
                    iVar38 = iVar37;
                    if (prVar5[lVar30 + 1].MinCol < iVar37) {
                      iVar38 = prVar5[lVar30 + 1].MinCol;
                    }
                    prVar5[lVar30 + 1].MinCol = iVar38;
                    iVar38 = param_5->RowExt[lVar30 + 1].MaxCol;
                    if (iVar38 < iVar37) {
                      iVar38 = iVar37;
                    }
                    param_5->RowExt[lVar30 + 1].MaxCol = iVar38;
                    prVar5 = param_5->RowExt;
                    iVar38 = iVar41;
                    if (prVar5[lVar30].MinCol < iVar41) {
                      iVar38 = prVar5[lVar30].MinCol;
                    }
                    prVar5[lVar30].MinCol = iVar38;
                    iVar38 = param_5->RowExt[lVar30].MaxCol;
                    if (iVar38 < iVar41) {
                      iVar38 = iVar41;
                    }
                    param_5->RowExt[lVar30].MaxCol = iVar38;
                    prVar5 = param_5->RowExt;
                    uVar28 = uVar16;
                    if (prVar5[lVar30].MinCol < (int)uVar16) {
                      uVar28 = prVar5[lVar30].MinCol;
                    }
                    prVar5[lVar30].MinCol = uVar28;
                    uVar28 = param_5->RowExt[lVar30].MaxCol;
                    if ((int)uVar28 < (int)uVar16) {
                      uVar28 = uVar16;
                    }
                    param_5->RowExt[lVar30].MaxCol = uVar28;
                    prVar5 = param_5->RowExt;
                    iVar41 = iVar39;
                    if (prVar5[lVar30].MinCol < iVar39) {
                      iVar41 = prVar5[lVar30].MinCol;
                    }
                    prVar5[lVar30].MinCol = iVar41;
                    iVar41 = param_5->RowExt[lVar30].MaxCol;
                    if (iVar41 < iVar39) {
                      iVar41 = iVar39;
                    }
                    param_5->RowExt[lVar30].MaxCol = iVar41;
                    prVar5 = param_5->RowExt;
                    iVar41 = iVar37;
                    if (prVar5[lVar30].MinCol < iVar37) {
                      iVar41 = prVar5[lVar30].MinCol;
                    }
                    prVar5[lVar30].MinCol = iVar41;
                    iVar41 = param_5->RowExt[lVar30].MaxCol;
                    if (iVar41 < iVar37) {
                      iVar41 = iVar37;
                    }
                    param_5->RowExt[lVar30].MaxCol = iVar41;
                  }
                }
                *(undefined2 *)local_200[lVar30].Hits = 0;
              }
              auVar47._0_8_ = auVar47._0_8_ + param_8;
              local_220 = local_220 + 8;
              lVar30 = lVar30 + 1;
            } while (lVar30 <= (int)uVar35);
          }
          local_200 = (rcEdgeHit *)uVar27;
          if (param_13 == (int *)0x0) {
            uVar16 = uVar42;
            if ((-1 < (int)local_210) && (uVar16 = local_210, 0x1fffffff < (int)local_210)) {
              uVar16 = 0x1fffffff;
            }
            uVar28 = uVar16 + 1;
            if (((int)(uVar16 + 1) <= (int)uVar20) && (uVar28 = uVar20, 0x1fffffff < (int)uVar20)) {
              uVar28 = 0x1fffffff;
            }
            local_218 = CONCAT44(local_218._4_4_,uVar28);
            local_228 = (uint *)(longlong)(int)local_234;
            if (uVar40 == 0) {
              uVar42 = uVar16;
            }
            if ((longlong)local_228 <= local_1f8) {
              local_230 = (AddSpanInTempColumns *)((longlong)local_228 * 8);
              do {
                prVar5 = param_5->RowExt;
                iVar41 = *(int *)((longlong)&prVar5[1].MinCol + (longlong)local_230);
                uVar16 = uVar12;
                if (prVar5[(longlong)local_228 + 1].MaxCol < (int)uVar12) {
                  uVar16 = prVar5[(longlong)local_228 + 1].MaxCol;
                }
                if (iVar41 < iVar32) {
                  iVar41 = iVar32;
                }
                if (iVar41 <= (int)uVar16) {
                  uVar28 = (uint)local_218;
                  do {
                    AddSpanInTempColumns::addSpan
                              (param_14,param_5,iVar41,(int)uVar33,uVar42,uVar28,param_4,param_11);
                    iVar41 = iVar41 + 1;
                  } while (iVar41 <= (int)uVar16);
                }
                uVar33 = (ulonglong)((int)uVar33 + 1);
                param_5->RowExt[(longlong)local_228 + 1].MinCol = param_5->width + 2;
                local_230 = (AddSpanInTempColumns *)((longlong)local_230 + 8);
                param_5->RowExt[(longlong)local_228 + 1].MaxCol = -2;
                local_228 = (uint *)((longlong)local_228 + 1);
              } while ((longlong)local_228 <= local_1f8);
            }
          }
          else {
            lVar30 = (longlong)(int)local_234;
            if (lVar30 <= local_1f8) {
              local_218 = lVar30 * 8;
              local_244 = local_234 * local_238;
              do {
                iVar41 = *(int *)((longlong)&param_5->RowExt[1].MinCol + local_218);
                uVar16 = param_5->RowExt[lVar30 + 1].MaxCol;
                uVar28 = uVar12;
                if ((int)uVar16 < (int)uVar12) {
                  uVar28 = uVar16;
                }
                if (iVar41 < iVar32) {
                  iVar41 = iVar32;
                }
                iVar38 = (int)uVar33;
                local_230 = (AddSpanInTempColumns *)lVar30;
                if (iVar41 <= (int)uVar28) {
                  if ((int)local_210 < 0) {
                    do {
                      if ((int)uVar20 < 1) {
                        uVar16 = 1;
                      }
                      else {
                        uVar16 = uVar20;
                        if (0x1fffffff < (int)uVar20) {
                          uVar16 = 0x1fffffff;
                        }
                      }
                      AddSpanInTempColumns::addSpan
                                (param_14,param_5,iVar41,iVar38,0,uVar16,param_4,param_11);
                      iVar41 = iVar41 + 1;
                    } while (iVar41 <= (int)uVar28);
                  }
                  else {
                    lVar30 = (longlong)iVar41;
                    if (lVar30 <= (int)uVar28) {
                      local_234 = local_210;
                      if (0x1fffffff < (int)local_210) {
                        local_234 = 0x1fffffff;
                      }
                      local_240 = ((int)uVar28 - lVar30) + 1;
                      local_228 = (uint *)(param_13 + local_244 + lVar30);
                      uVar16 = local_234 + 1;
                      do {
                        uVar28 = uVar16;
                        if (((int)uVar16 <= (int)uVar20) &&
                           (uVar28 = uVar20, 0x1fffffff < (int)uVar20)) {
                          uVar28 = 0x1fffffff;
                        }
                        uVar17 = 0;
                        if ((*local_228 & uVar40) == 0) {
                          uVar17 = local_234;
                        }
                        AddSpanInTempColumns::addSpan
                                  (param_14,param_5,iVar41,iVar38,uVar17,uVar28,param_4,param_11);
                        iVar41 = iVar41 + 1;
                        local_228 = local_228 + 1;
                        local_240 = local_240 + -1;
                      } while (local_240 != 0);
                    }
                  }
                }
                uVar33 = (ulonglong)(iVar38 + 1);
                param_5->RowExt[(longlong)local_230 + 1].MinCol = param_5->width + 2;
                lVar30 = (longlong)local_230 + 1;
                param_5->RowExt[(longlong)local_230 + 1].MaxCol = -2;
                local_218 = local_218 + 8;
                local_244 = local_244 + local_238;
              } while (lVar30 <= local_1f8);
            }
          }
        }
        else {
          do {
            iVar41 = (int)uVar26;
            local_210 = iVar41 + 1;
            uVar28 = 0;
            if (iVar41 != 2) {
              uVar28 = local_210;
            }
            iVar38 = 2;
            local_240 = CONCAT44(local_240._4_4_,uVar28);
            lVar30 = local_240;
            if (iVar41 != 0) {
              iVar38 = iVar41 + -1;
            }
            local_228 = (uint *)(longlong)(int)uVar28;
            lVar31 = (longlong)iVar38;
            auVar44._0_8_ = local_1b8[(longlong)local_228 * 3];
            local_218 = uVar26 * 3;
            auVar45._0_8_ = local_1b8[uVar26 * 3];
            auVar43._0_8_ = local_1b8[uVar26 * 3 + 2];
            uVar29 = *(uint *)(&local_1f0 + uVar26);
            local_1c0 = lVar31 * 3;
            auVar48._0_8_ = local_1b8[(longlong)local_228 * 3 + 2];
            auVar10._8_4_ =
                 SUB84(local_1b8[(longlong)local_228 * 3 + 1] - local_1b8[uVar26 * 3 + 1],0);
            auVar10._0_8_ = auVar44._0_8_ - auVar45._0_8_;
            auVar10._12_4_ =
                 (int)((ulonglong)
                       (local_1b8[(longlong)local_228 * 3 + 1] - local_1b8[uVar26 * 3 + 1]) >> 0x20)
            ;
            *(undefined1 (*) [16])(adStack_168 + lVar31 * 3) = auVar10;
            adStack_168[lVar31 * 3 + 2] = auVar48._0_8_ - auVar43._0_8_;
            adStack_168[lVar31 * 3 + 9] = auVar66._0_8_ / (auVar44._0_8_ - auVar45._0_8_);
            adStack_168[lVar31 * 3 + 10] = auVar66._0_8_ / adStack_168[lVar31 * 3 + 1];
            adStack_168[lVar31 * 3 + 0xb] = auVar66._0_8_ / adStack_168[lVar31 * 3 + 2];
            if ((iVar32 <= (int)uVar29) && ((int)uVar29 <= (int)uVar12)) {
              iVar41 = *(int *)((longlong)&local_1f0 + uVar26 * 8 + 4);
              if (((int)local_234 <= iVar41) && (iVar41 <= (int)uVar21)) {
                auVar52._0_8_ = (local_1b8[uVar26 * 3 + 1] - param_6[1]) * param_10;
                lVar34 = (longlong)auVar52._0_8_;
                if ((lVar34 != -0x8000000000000000) && ((double)lVar34 != auVar52._0_8_)) {
                  auVar52._8_8_ = auVar52._0_8_;
                  uVar20 = movmskpd(0,auVar52);
                  auVar52._0_8_ = (double)(longlong)(lVar34 - (ulonglong)(uVar20 & 1));
                }
                prVar5 = param_5->RowExt;
                iVar39 = (int)auVar52._0_8_;
                if ((int)auVar52._0_8_ < -0x7fffffff) {
                  iVar39 = -0x7fffffff;
                }
                uVar20 = uVar29;
                if (prVar5[(longlong)iVar41 + 1].MinCol < (int)uVar29) {
                  uVar20 = prVar5[(longlong)iVar41 + 1].MinCol;
                }
                prVar5[(longlong)iVar41 + 1].MinCol = uVar20;
                uVar20 = param_5->RowExt[(longlong)iVar41 + 1].MaxCol;
                if ((int)uVar20 < (int)uVar29) {
                  uVar20 = uVar29;
                }
                param_5->RowExt[(longlong)iVar41 + 1].MaxCol = uVar20;
                prVar6 = param_5->tempspans;
                lVar34 = (longlong)(int)((param_5->width + 2) * (iVar41 + 1) + uVar29);
                iVar41 = iVar39;
                if (prVar6[lVar34 + 1].sminmax[0] <= iVar39) {
                  iVar41 = prVar6[lVar34 + 1].sminmax[0];
                }
                iVar37 = prVar6[lVar34 + 1].sminmax[1];
                prVar6[lVar34 + 1].sminmax[0] = iVar41;
                if (iVar39 <= iVar37) {
                  iVar39 = prVar6[lVar34 + 1].sminmax[1];
                }
                prVar6[lVar34 + 1].sminmax[1] = iVar39;
              }
            }
            uVar20 = *(uint *)((longlong)&local_1f0 + uVar26 * 8 + 4);
            uVar42 = *(uint *)((longlong)&local_1f0 + (longlong)local_228 * 8 + 4);
            if (uVar20 != uVar42) {
              uVar22 = uVar42;
              if ((int)uVar20 < (int)uVar42) {
                uVar22 = uVar20;
                uVar20 = uVar42;
              }
              local_240._0_1_ = (byte)uVar28;
              uVar28 = uVar22 + 1;
              if ((int)(uVar22 + 1) < (int)local_234) {
                uVar28 = local_234;
              }
              lVar34 = (longlong)(int)uVar28;
              uVar28 = uVar35;
              if ((int)uVar20 < (int)uVar35) {
                uVar28 = uVar20;
              }
              for (; lVar34 <= (int)uVar28; lVar34 = lVar34 + 1) {
                local_200[lVar34].Hits[local_200[lVar34].Hits[0] != '\0'] =
                     ((char)iVar38 << 2 | (byte)local_240) << 2 | (byte)uVar26;
              }
            }
            uVar28 = *(uint *)(&local_1f0 + (longlong)local_228);
            if (uVar29 != uVar28) {
              uVar20 = uVar28;
              if ((int)uVar29 < (int)uVar28) {
                uVar20 = uVar29;
                uVar29 = uVar28;
              }
              iVar41 = uVar20 + 1;
              if ((int)(uVar20 + 1) < iVar32) {
                iVar41 = iVar32;
              }
              uVar28 = uVar16;
              if ((int)uVar29 < (int)uVar16) {
                uVar28 = uVar29;
              }
              auVar48._0_8_ = (double)iVar41 * param_8 + *param_6;
              if (iVar41 <= (int)uVar28) {
                auVar44._0_8_ = adStack_168[lVar31 * 3 + 9];
                auVar45._0_8_ = adStack_168[lVar31 * 3 + 1];
                auVar46._0_8_ = adStack_168[lVar31 * 3 + 2];
                auVar67._0_8_ = local_1b8[uVar26 * 3];
                auVar52._0_8_ = local_1b8[uVar26 * 3 + 1];
                uVar26 = local_218;
                do {
                  auVar55._0_8_ = (auVar48._0_8_ - auVar67._0_8_) * auVar44._0_8_;
                  if (0.0 <= auVar55._0_8_) {
                    if (auVar66._0_8_ <= auVar55._0_8_) {
                      auVar55._0_8_ = auVar66._0_8_;
                    }
                  }
                  else {
                    auVar55._0_8_ = 0.0;
                  }
                  auVar53._0_8_ =
                       ((auVar46._0_8_ * auVar55._0_8_ + auVar43._0_8_) - param_6[2]) * param_9;
                  lVar31 = (longlong)auVar53._0_8_;
                  if ((lVar31 != -0x8000000000000000) && ((double)lVar31 != auVar53._0_8_)) {
                    auVar53._8_8_ = auVar53._0_8_;
                    uVar29 = movmskpd((int)uVar26,auVar53);
                    uVar26 = (ulonglong)(uVar29 & 1);
                    auVar53._0_8_ = (double)(longlong)(lVar31 - uVar26);
                  }
                  iVar38 = (int)auVar53._0_8_;
                  if (((int)local_234 <= iVar38) && (iVar38 <= (int)uVar21)) {
                    auVar55._0_8_ =
                         ((auVar45._0_8_ * auVar55._0_8_ + auVar52._0_8_) - param_6[1]) * param_10;
                    lVar31 = (longlong)auVar55._0_8_;
                    if ((lVar31 != -0x8000000000000000) && ((double)lVar31 != auVar55._0_8_)) {
                      auVar11._8_4_ = SUB84(auVar55._0_8_,0);
                      auVar11._0_8_ = auVar55._0_8_;
                      auVar11._12_4_ = (int)((ulonglong)auVar55._0_8_ >> 0x20);
                      uVar29 = movmskpd((int)uVar26,auVar11);
                      auVar55._0_8_ = (double)(longlong)(lVar31 - (ulonglong)(uVar29 & 1));
                    }
                    prVar5 = param_5->RowExt;
                    uVar29 = (int)auVar55._0_8_;
                    if ((int)auVar55._0_8_ < -0x7fffffff) {
                      uVar29 = 0x80000001;
                    }
                    iVar39 = iVar41;
                    if (prVar5[(longlong)iVar38 + 1].MinCol < iVar41) {
                      iVar39 = prVar5[(longlong)iVar38 + 1].MinCol;
                    }
                    prVar5[(longlong)iVar38 + 1].MinCol = iVar39;
                    iVar39 = param_5->RowExt[(longlong)iVar38 + 1].MaxCol;
                    if (iVar39 < iVar41) {
                      iVar39 = iVar41;
                    }
                    param_5->RowExt[(longlong)iVar38 + 1].MaxCol = iVar39;
                    prVar6 = param_5->tempspans;
                    lVar31 = (longlong)((param_5->width + 2) * (iVar38 + 1) + iVar41);
                    uVar20 = uVar29;
                    if (prVar6[lVar31 + 1].sminmax[0] <= (int)uVar29) {
                      uVar20 = prVar6[lVar31 + 1].sminmax[0];
                    }
                    iVar39 = prVar6[lVar31 + 1].sminmax[1];
                    prVar6[lVar31 + 1].sminmax[0] = uVar20;
                    uVar20 = uVar29;
                    if ((int)uVar29 <= iVar39) {
                      uVar20 = prVar6[lVar31 + 1].sminmax[1];
                    }
                    prVar6[lVar31 + 1].sminmax[1] = uVar20;
                    iVar37 = iVar41 + -1;
                    prVar5 = param_5->RowExt;
                    iVar39 = iVar37;
                    if (prVar5[(longlong)iVar38 + 1].MinCol < iVar37) {
                      iVar39 = prVar5[(longlong)iVar38 + 1].MinCol;
                    }
                    prVar5[(longlong)iVar38 + 1].MinCol = iVar39;
                    iVar39 = param_5->RowExt[(longlong)iVar38 + 1].MaxCol;
                    if (iVar39 < iVar37) {
                      iVar39 = iVar37;
                    }
                    param_5->RowExt[(longlong)iVar38 + 1].MaxCol = iVar39;
                    prVar6 = param_5->tempspans;
                    iVar38 = (param_5->width + 2) * (iVar38 + 1) + iVar41;
                    uVar20 = uVar29;
                    if (prVar6[iVar38].sminmax[0] <= (int)uVar29) {
                      uVar20 = prVar6[iVar38].sminmax[0];
                    }
                    uVar26 = (ulonglong)uVar20;
                    iVar39 = prVar6[iVar38].sminmax[1];
                    prVar6[iVar38].sminmax[0] = uVar20;
                    if ((int)uVar29 <= iVar39) {
                      uVar29 = prVar6[iVar38].sminmax[1];
                    }
                    prVar6[iVar38].sminmax[1] = uVar29;
                  }
                  iVar41 = iVar41 + 1;
                  auVar48._0_8_ = auVar48._0_8_ + param_8;
                } while (iVar41 <= (int)uVar28);
              }
            }
            uVar25 = 0;
            uVar26 = (ulonglong)local_210;
            local_240 = lVar30;
          } while ((int)local_210 < 3);
          uVar28 = uVar18;
          if ((int)uVar18 < (int)uVar19) {
            uVar28 = uVar19;
            uVar19 = uVar18;
          }
          uVar18 = uVar17;
          if ((int)uVar17 < (int)uVar28) {
            uVar18 = uVar28;
          }
          if ((int)uVar17 < (int)uVar19) {
            uVar19 = uVar17;
          }
          uVar26 = (ulonglong)(uVar19 + 1);
          if ((int)(uVar19 + 1) < (int)local_234) {
            uVar26 = uVar33;
          }
          local_250 = (uint)uVar26;
          lVar30 = (longlong)(int)local_250;
          if ((int)uVar18 < (int)uVar35) {
            uVar35 = uVar18;
          }
          local_1c0 = (longlong)(int)uVar35;
          auVar43._0_8_ = (double)(int)local_250 * param_8 + param_6[2];
          if (lVar30 <= local_1c0) {
            local_228 = (uint *)(lVar30 * 8);
            do {
              bVar3 = local_200[lVar30].Hits[0];
              uVar28 = (uint)uVar26;
              if (bVar3 != 0) {
                uVar26 = (ulonglong)(bVar3 >> 4);
                uVar27 = (ulonglong)(bVar3 & 3);
                uVar28 = (bVar3 & 3) * 3;
                auVar48._0_8_ =
                     (auVar43._0_8_ - local_1b8[uVar27 * 3 + 2]) * adStack_168[uVar26 * 3 + 0xb];
                auVar44._0_8_ = auVar47._0_8_;
                if ((0.0 <= auVar48._0_8_) &&
                   (auVar44._0_8_ = auVar48._0_8_, auVar66._0_8_ <= auVar48._0_8_)) {
                  auVar44._0_8_ = auVar66._0_8_;
                }
                auVar48._0_8_ = *param_6;
                local_1f0 = auVar44._0_8_ * adStack_168[uVar26 * 3] + local_1b8[uVar27 * 3];
                uStack_1e8 = auVar44._0_8_ * adStack_168[uVar26 * 3 + 1] + local_1b8[uVar27 * 3 + 1]
                ;
                local_1e0 = auVar44._0_8_ * adStack_168[uVar26 * 3 + 2] + local_1b8[uVar27 * 3 + 2];
                auVar54._8_4_ = SUB84(uStack_1e8,0);
                auVar54._0_8_ = local_1f0;
                uVar64 = (undefined4)((ulonglong)uStack_1e8 >> 0x20);
                auVar54._12_4_ = uVar64;
                uVar63 = auVar54._8_8_;
                auVar55._0_8_ = (local_1f0 - auVar48._0_8_) * param_9;
                lVar31 = (longlong)auVar55._0_8_;
                if ((lVar31 != -0x8000000000000000) && ((double)lVar31 != auVar55._0_8_)) {
                  auVar55._8_8_ = auVar55._0_8_;
                  uVar28 = movmskpd(uVar28,auVar55);
                  uVar28 = uVar28 & 1;
                  auVar55._0_8_ = (double)(longlong)(lVar31 - (ulonglong)uVar28);
                  uVar63 = 0;
                }
                iVar41 = (int)auVar55._0_8_;
                local_240 = CONCAT44(local_240._4_4_,iVar41);
                if ((iVar32 <= iVar41) && (iVar41 <= (int)uVar12)) {
                  auVar14._4_8_ = uVar63;
                  auVar14._0_4_ = (int)((ulonglong)local_1f0 >> 0x20);
                  auVar56._0_8_ = auVar14._0_8_ << 0x20;
                  auVar56._8_4_ = SUB84(uStack_1e8,0);
                  auVar56._12_4_ = uVar64;
                  auVar57._0_8_ = (auVar56._8_8_ - param_6[1]) * param_10;
                  lVar31 = (longlong)auVar57._0_8_;
                  if ((lVar31 != -0x8000000000000000) && ((double)lVar31 != auVar57._0_8_)) {
                    auVar57._8_8_ = auVar57._0_8_;
                    uVar28 = movmskpd(uVar28,auVar57);
                    auVar57._0_8_ = (double)(longlong)(lVar31 - (ulonglong)(uVar28 & 1));
                  }
                  prVar5 = param_5->RowExt;
                  iVar38 = (int)auVar57._0_8_;
                  if ((int)auVar57._0_8_ < -0x7fffffff) {
                    iVar38 = -0x7fffffff;
                  }
                  iVar39 = iVar41;
                  if (*(int *)((longlong)&prVar5[1].MinCol + (longlong)local_228) < iVar41) {
                    iVar39 = *(int *)((longlong)&prVar5[1].MinCol + (longlong)local_228);
                  }
                  prVar5[lVar30 + 1].MinCol = iVar39;
                  iVar39 = param_5->RowExt[lVar30 + 1].MaxCol;
                  if (iVar39 < iVar41) {
                    iVar39 = iVar41;
                  }
                  param_5->RowExt[lVar30 + 1].MaxCol = iVar39;
                  prVar6 = param_5->tempspans;
                  lVar31 = (longlong)(int)((param_5->width + 2) * (local_250 + 1) + iVar41);
                  iVar39 = iVar38;
                  if (prVar6[lVar31 + 1].sminmax[0] <= iVar38) {
                    iVar39 = prVar6[lVar31 + 1].sminmax[0];
                  }
                  iVar37 = prVar6[lVar31 + 1].sminmax[1];
                  prVar6[lVar31 + 1].sminmax[0] = iVar39;
                  iVar39 = iVar38;
                  if (iVar38 <= iVar37) {
                    iVar39 = prVar6[lVar31 + 1].sminmax[1];
                  }
                  prVar6[lVar31 + 1].sminmax[1] = iVar39;
                  prVar5 = param_5->RowExt;
                  iVar39 = iVar41;
                  if (prVar5[lVar30].MinCol < iVar41) {
                    iVar39 = prVar5[lVar30].MinCol;
                  }
                  prVar5[lVar30].MinCol = iVar39;
                  iVar39 = param_5->RowExt[lVar30].MaxCol;
                  if (iVar39 < iVar41) {
                    iVar39 = iVar41;
                  }
                  param_5->RowExt[lVar30].MaxCol = iVar39;
                  prVar6 = param_5->tempspans;
                  lVar31 = (longlong)(int)((param_5->width + 2) * local_250 + iVar41);
                  iVar39 = iVar38;
                  if (prVar6[lVar31 + 1].sminmax[0] <= iVar38) {
                    iVar39 = prVar6[lVar31 + 1].sminmax[0];
                  }
                  iVar37 = prVar6[lVar31 + 1].sminmax[1];
                  prVar6[lVar31 + 1].sminmax[0] = iVar39;
                  if (iVar38 <= iVar37) {
                    iVar38 = prVar6[lVar31 + 1].sminmax[1];
                  }
                  prVar6[lVar31 + 1].sminmax[1] = iVar38;
                  auVar48._0_8_ = *param_6;
                }
                uVar28 = local_200[lVar30].Hits[1] & 3;
                uVar27 = (ulonglong)uVar28;
                uVar26 = (ulonglong)(local_200[lVar30].Hits[1] >> 4);
                uVar28 = uVar28 * 3;
                auVar44._0_8_ =
                     (auVar43._0_8_ - local_1b8[uVar27 * 3 + 2]) * adStack_168[uVar26 * 3 + 0xb];
                auVar45._0_8_ = auVar47._0_8_;
                if ((0.0 <= auVar44._0_8_) &&
                   (auVar45._0_8_ = auVar44._0_8_, auVar66._0_8_ <= auVar44._0_8_)) {
                  auVar45._0_8_ = auVar66._0_8_;
                }
                local_1d8 = auVar45._0_8_ * adStack_168[uVar26 * 3] + local_1b8[uVar27 * 3];
                dStack_1d0 = auVar45._0_8_ * adStack_168[uVar26 * 3 + 1] + local_1b8[uVar27 * 3 + 1]
                ;
                local_1c8 = auVar45._0_8_ * adStack_168[uVar26 * 3 + 2] + local_1b8[uVar27 * 3 + 2];
                auVar58._8_4_ = SUB84(dStack_1d0,0);
                auVar58._0_8_ = local_1d8;
                uVar64 = (undefined4)((ulonglong)dStack_1d0 >> 0x20);
                auVar58._12_4_ = uVar64;
                uVar63 = auVar58._8_8_;
                auVar59._0_8_ = (local_1d8 - auVar48._0_8_) * param_9;
                lVar31 = (longlong)auVar59._0_8_;
                if ((lVar31 != -0x8000000000000000) && ((double)lVar31 != auVar59._0_8_)) {
                  auVar59._8_8_ = auVar59._0_8_;
                  uVar28 = movmskpd(uVar28,auVar59);
                  uVar28 = uVar28 & 1;
                  auVar59._0_8_ = (double)(longlong)(lVar31 - (ulonglong)uVar28);
                  uVar63 = 0;
                }
                iVar38 = (int)auVar59._0_8_;
                local_240 = CONCAT44(iVar38,iVar41);
                if ((iVar32 <= iVar38) && (iVar38 <= (int)uVar12)) {
                  auVar15._4_8_ = uVar63;
                  auVar15._0_4_ = (int)((ulonglong)local_1d8 >> 0x20);
                  auVar60._0_8_ = auVar15._0_8_ << 0x20;
                  auVar60._8_4_ = SUB84(dStack_1d0,0);
                  auVar60._12_4_ = uVar64;
                  auVar61._0_8_ = (auVar60._8_8_ - param_6[1]) * param_10;
                  lVar31 = (longlong)auVar61._0_8_;
                  if ((lVar31 != -0x8000000000000000) && ((double)lVar31 != auVar61._0_8_)) {
                    auVar61._8_8_ = auVar61._0_8_;
                    uVar28 = movmskpd(uVar28,auVar61);
                    auVar61._0_8_ = (double)(longlong)(lVar31 - (ulonglong)(uVar28 & 1));
                  }
                  prVar5 = param_5->RowExt;
                  iVar39 = (int)auVar61._0_8_;
                  if ((int)auVar61._0_8_ < -0x7fffffff) {
                    iVar39 = -0x7fffffff;
                  }
                  iVar37 = iVar38;
                  if (prVar5[lVar30 + 1].MinCol < iVar38) {
                    iVar37 = prVar5[lVar30 + 1].MinCol;
                  }
                  prVar5[lVar30 + 1].MinCol = iVar37;
                  iVar37 = param_5->RowExt[lVar30 + 1].MaxCol;
                  if (iVar37 < iVar38) {
                    iVar37 = iVar38;
                  }
                  param_5->RowExt[lVar30 + 1].MaxCol = iVar37;
                  prVar6 = param_5->tempspans;
                  lVar31 = (longlong)(int)((param_5->width + 2) * (local_250 + 1) + iVar38);
                  iVar37 = iVar39;
                  if (prVar6[lVar31 + 1].sminmax[0] <= iVar39) {
                    iVar37 = prVar6[lVar31 + 1].sminmax[0];
                  }
                  prVar6[lVar31 + 1].sminmax[0] = iVar37;
                  iVar37 = iVar39;
                  if (iVar39 <= prVar6[lVar31 + 1].sminmax[1]) {
                    iVar37 = prVar6[lVar31 + 1].sminmax[1];
                  }
                  prVar6[lVar31 + 1].sminmax[1] = iVar37;
                  prVar5 = param_5->RowExt;
                  iVar37 = iVar38;
                  if (prVar5[lVar30].MinCol < iVar38) {
                    iVar37 = prVar5[lVar30].MinCol;
                  }
                  prVar5[lVar30].MinCol = iVar37;
                  iVar37 = param_5->RowExt[lVar30].MaxCol;
                  if (iVar37 < iVar38) {
                    iVar37 = iVar38;
                  }
                  param_5->RowExt[lVar30].MaxCol = iVar37;
                  prVar6 = param_5->tempspans;
                  lVar31 = (longlong)(int)((param_5->width + 2) * local_250 + iVar38);
                  iVar37 = iVar39;
                  if (prVar6[lVar31 + 1].sminmax[0] <= iVar39) {
                    iVar37 = prVar6[lVar31 + 1].sminmax[0];
                  }
                  prVar6[lVar31 + 1].sminmax[0] = iVar37;
                  if (iVar39 <= prVar6[lVar31 + 1].sminmax[1]) {
                    iVar39 = prVar6[lVar31 + 1].sminmax[1];
                  }
                  prVar6[lVar31 + 1].sminmax[1] = iVar39;
                }
                if (iVar41 != iVar38) {
                  uVar26 = uVar25;
                  if (local_1d8 < local_1f0) {
                    uVar26 = 4;
                  }
                  iVar41 = *(int *)((longlong)&local_240 + uVar26) + 1;
                  if (iVar41 < iVar32) {
                    iVar41 = iVar32;
                  }
                  uVar26 = 4;
                  if (local_1d8 < local_1f0) {
                    uVar26 = uVar25;
                  }
                  uVar28 = uVar16;
                  if ((int)*(uint *)((longlong)&local_240 + uVar26) < (int)uVar16) {
                    uVar28 = *(uint *)((longlong)&local_240 + uVar26);
                  }
                  auVar48._0_8_ = 0.0;
                  uVar27 = uVar25;
                  uVar26 = 0x18;
                  if (local_1d8 < local_1f0) {
                    uVar27 = 0x18;
                    uVar26 = uVar25;
                  }
                  auVar44._0_8_ = *(double *)((longlong)&local_1f0 + uVar27);
                  auVar45._0_8_ = *(double *)((longlong)&uStack_1e8 + uVar27);
                  auVar46._0_8_ = *(double *)((longlong)&uStack_1e8 + uVar26) - auVar45._0_8_;
                  auVar67._0_8_ =
                       auVar66._0_8_ / (*(double *)((longlong)&local_1f0 + uVar26) - auVar44._0_8_);
                  auVar52._0_8_ =
                       (((double)iVar41 * param_8 + *param_6) - auVar44._0_8_) * auVar67._0_8_;
                  if (0.0 <= auVar52._0_8_) {
                    if (auVar66._0_8_ <= auVar52._0_8_) {
                      auVar52._0_8_ = auVar66._0_8_;
                    }
                  }
                  else {
                    auVar52._0_8_ = 0.0;
                  }
                  iVar38 = uVar28 - iVar41;
                  auVar52._0_8_ = (auVar46._0_8_ * auVar52._0_8_ + auVar45._0_8_) - param_6[1];
                  if (0 < iVar38) {
                    auVar67._0_8_ =
                         (((double)(int)uVar28 * param_8 + *param_6) - auVar44._0_8_) *
                         auVar67._0_8_;
                    if (0.0 <= auVar67._0_8_) {
                      if (auVar66._0_8_ <= auVar67._0_8_) {
                        auVar67._0_8_ = auVar66._0_8_;
                      }
                    }
                    else {
                      auVar67._0_8_ = 0.0;
                    }
                    auVar48._0_8_ =
                         (((auVar46._0_8_ * auVar67._0_8_ + auVar45._0_8_) - param_6[1]) -
                         auVar52._0_8_) / (double)iVar38;
                  }
                  if (iVar41 <= (int)uVar28) {
                    iVar39 = iVar41 + -1;
                    do {
                      auVar62._0_8_ = auVar52._0_8_ * param_10;
                      lVar31 = (longlong)auVar62._0_8_;
                      if ((lVar31 != -0x8000000000000000) && ((double)lVar31 != auVar62._0_8_)) {
                        auVar62._8_8_ = auVar62._0_8_;
                        uVar17 = movmskpd(iVar38,auVar62);
                        auVar62._0_8_ = (double)(longlong)(lVar31 - (ulonglong)(uVar17 & 1));
                      }
                      prVar5 = param_5->RowExt;
                      iVar37 = (int)auVar62._0_8_;
                      if ((int)auVar62._0_8_ < -0x7fffffff) {
                        iVar37 = -0x7fffffff;
                      }
                      iVar38 = iVar41;
                      if (prVar5[lVar30 + 1].MinCol < iVar41) {
                        iVar38 = prVar5[lVar30 + 1].MinCol;
                      }
                      prVar5[lVar30 + 1].MinCol = iVar38;
                      iVar38 = param_5->RowExt[lVar30 + 1].MaxCol;
                      if (iVar38 < iVar41) {
                        iVar38 = iVar41;
                      }
                      param_5->RowExt[lVar30 + 1].MaxCol = iVar38;
                      prVar6 = param_5->tempspans;
                      lVar31 = (longlong)(int)((param_5->width + 2) * (local_250 + 1) + iVar41);
                      iVar38 = iVar37;
                      if (prVar6[lVar31 + 1].sminmax[0] <= iVar37) {
                        iVar38 = prVar6[lVar31 + 1].sminmax[0];
                      }
                      iVar24 = prVar6[lVar31 + 1].sminmax[1];
                      prVar6[lVar31 + 1].sminmax[0] = iVar38;
                      iVar38 = iVar37;
                      if (iVar37 <= iVar24) {
                        iVar38 = prVar6[lVar31 + 1].sminmax[1];
                      }
                      prVar6[lVar31 + 1].sminmax[1] = iVar38;
                      prVar5 = param_5->RowExt;
                      iVar38 = iVar39;
                      if (prVar5[lVar30 + 1].MinCol < iVar39) {
                        iVar38 = prVar5[lVar30 + 1].MinCol;
                      }
                      prVar5[lVar30 + 1].MinCol = iVar38;
                      iVar38 = param_5->RowExt[lVar30 + 1].MaxCol;
                      if (iVar38 < iVar39) {
                        iVar38 = iVar39;
                      }
                      param_5->RowExt[lVar30 + 1].MaxCol = iVar38;
                      prVar6 = param_5->tempspans;
                      iVar24 = (param_5->width + 2) * (local_250 + 1) + iVar41;
                      iVar38 = iVar37;
                      if (prVar6[iVar24].sminmax[0] <= iVar37) {
                        iVar38 = prVar6[iVar24].sminmax[0];
                      }
                      iVar4 = prVar6[iVar24].sminmax[1];
                      prVar6[iVar24].sminmax[0] = iVar38;
                      iVar38 = iVar37;
                      if (iVar37 <= iVar4) {
                        iVar38 = prVar6[iVar24].sminmax[1];
                      }
                      prVar6[iVar24].sminmax[1] = iVar38;
                      prVar5 = param_5->RowExt;
                      iVar38 = iVar41;
                      if (prVar5[lVar30].MinCol < iVar41) {
                        iVar38 = prVar5[lVar30].MinCol;
                      }
                      prVar5[lVar30].MinCol = iVar38;
                      iVar38 = param_5->RowExt[lVar30].MaxCol;
                      if (iVar38 < iVar41) {
                        iVar38 = iVar41;
                      }
                      param_5->RowExt[lVar30].MaxCol = iVar38;
                      prVar6 = param_5->tempspans;
                      lVar31 = (longlong)(int)((param_5->width + 2) * local_250 + iVar41);
                      iVar38 = iVar37;
                      if (prVar6[lVar31 + 1].sminmax[0] <= iVar37) {
                        iVar38 = prVar6[lVar31 + 1].sminmax[0];
                      }
                      iVar24 = prVar6[lVar31 + 1].sminmax[1];
                      prVar6[lVar31 + 1].sminmax[0] = iVar38;
                      iVar38 = iVar37;
                      if (iVar37 <= iVar24) {
                        iVar38 = prVar6[lVar31 + 1].sminmax[1];
                      }
                      prVar6[lVar31 + 1].sminmax[1] = iVar38;
                      iVar24 = iVar41 + -1;
                      prVar5 = param_5->RowExt;
                      iVar38 = iVar24;
                      if (prVar5[lVar30].MinCol < iVar24) {
                        iVar38 = prVar5[lVar30].MinCol;
                      }
                      prVar5[lVar30].MinCol = iVar38;
                      auVar52._0_8_ = auVar52._0_8_ + auVar48._0_8_;
                      iVar38 = param_5->RowExt[lVar30].MaxCol;
                      if (iVar38 < iVar24) {
                        iVar38 = iVar24;
                      }
                      param_5->RowExt[lVar30].MaxCol = iVar38;
                      prVar6 = param_5->tempspans;
                      iVar24 = (param_5->width + 2) * local_250 + iVar41;
                      iVar38 = iVar37;
                      if (prVar6[iVar24].sminmax[0] <= iVar37) {
                        iVar38 = prVar6[iVar24].sminmax[0];
                      }
                      iVar4 = prVar6[iVar24].sminmax[1];
                      prVar6[iVar24].sminmax[0] = iVar38;
                      if (iVar37 <= iVar4) {
                        iVar37 = prVar6[iVar24].sminmax[1];
                      }
                      iVar41 = iVar41 + 1;
                      iVar39 = iVar39 + 1;
                      prVar6[iVar24].sminmax[1] = iVar37;
                    } while (iVar41 <= (int)uVar28);
                  }
                }
                *(undefined2 *)local_200[lVar30].Hits = 0;
                uVar28 = local_250;
              }
              auVar43._0_8_ = auVar43._0_8_ + param_8;
              local_250 = uVar28 + 1;
              uVar26 = (ulonglong)local_250;
              local_228 = (uint *)((longlong)local_228 + 8);
              lVar30 = lVar30 + 1;
            } while (lVar30 <= local_1c0);
          }
          local_208 = (double *)(longlong)(int)local_234;
          if ((longlong)local_208 <= local_1f8) {
            local_200 = (rcEdgeHit *)((longlong)local_208 * 8);
            local_234 = local_234 * local_238;
            do {
              local_220 = CONCAT44(local_220._4_4_,(int)uVar33);
              iVar41 = *(int *)((longlong)&param_5->RowExt[1].MinCol + (longlong)local_200);
              uVar16 = param_5->RowExt[(longlong)local_208 + 1].MaxCol;
              if (iVar41 < iVar32) {
                iVar41 = iVar32;
              }
              lVar30 = (longlong)iVar41;
              uVar28 = uVar12;
              if ((int)uVar16 < (int)uVar12) {
                uVar28 = uVar16;
              }
              uVar16 = (int)uVar33 + 1;
              if (lVar30 <= (int)uVar28) {
                lVar31 = ((int)uVar28 - lVar30) + 1;
                local_230 = (AddSpanInTempColumns *)(param_13 + (int)local_234 + lVar30);
                do {
                  lVar30 = (longlong)(int)((param_5->width + 2) * uVar16 + iVar41);
                  prVar6 = param_5->tempspans;
                  uVar28 = prVar6[lVar30 + 1].sminmax[0];
                  uVar17 = prVar6[lVar30 + 1].sminmax[1];
                  if (UE::Recast::Private::bEnableSpanHeightRasterizationFix != false) {
                    uVar17 = uVar17 + 1;
                  }
                  prVar6[lVar30 + 1].sminmax[0] = 0x7fffffff;
                  prVar6[lVar30 + 1].sminmax[1] = -0x7fffffff;
                  if (((int)uVar28 < 0x1fffffff) && (-1 < (int)uVar17)) {
                    uVar26 = (ulonglong)uVar28;
                    if ((int)uVar28 < 0) {
                      uVar26 = uVar25;
                    }
                    uVar28 = (int)uVar26 + 1;
                    if ((int)uVar17 < (int)uVar28) {
                      uVar17 = uVar28;
                    }
                    uVar28 = 0x1fffffff;
                    if ((int)uVar17 < 0x1fffffff) {
                      uVar28 = uVar17;
                    }
                    uVar17 = uVar40;
                    if (param_13 != (int *)0x0) {
                      uVar17 = *(uint *)local_230 & uVar40;
                    }
                    uVar27 = uVar25;
                    if (uVar17 == 0) {
                      uVar27 = uVar26;
                    }
                    iVar38 = iVar41 - param_14->ibminx;
                    if ((((iVar38 < 0) || (iVar39 = (int)uVar33 - param_14->ibminz, iVar39 < 0)) ||
                        (param_14->ibwidth <= iVar38)) || (param_14->ibheight <= iVar39)) {
                      if (param_14->ctx == (rcContext *)0x0) goto LAB_1446b0ec1;
                      rcContext::log(param_14->ctx,RC_LOG_WARNING,
                                     "rcRasterizeTriangles trying to rasterize a triangle as filled convex but some spans are outside of the provided bounding box. Those spans will be skipped."
                                    );
                    }
                    else {
                      iVar38 = iVar39 * param_14->ibwidth + iVar38;
                      prVar1 = param_5->tempSpanColumns + iVar38;
                      prVar2 = param_5->tempSpanColumns + iVar38;
                      uVar64 = *(undefined4 *)prVar2;
                      if ((((undefined4 *)prVar2)->smin == 0) &&
                         (uVar65 = *(undefined4 *)&prVar1->field_0x4, ZPULL(uVar65,0,0x1d) == 0)) {
                        *(uint *)prVar1 = ((uint)uVar27 ^ prVar2->smin) & 0x1fffffff ^ uVar64;
                        *(uint *)&prVar1->field_0x8 =
                             *(uint *)&prVar1->field_0x8 ^ ((uint)param_4 ^ prVar1->area) & 0x3f;
                        *(uint *)&prVar1->field_0x4 = (uVar28 ^ prVar1->smax) & 0x1fffffff ^ uVar65;
                      }
                      else {
                        mergeSpanData(prVar1,(uint)uVar27,uVar28,param_4,param_11);
                      }
                    }
                    uVar33 = local_220 & 0xffffffff;
                  }
LAB_1446b0ec1:
                  local_230 = (AddSpanInTempColumns *)((longlong)local_230 + 4);
                  iVar41 = iVar41 + 1;
                  lVar31 = lVar31 + -1;
                } while (lVar31 != 0);
              }
              local_234 = local_234 + local_238;
              param_5->RowExt[(longlong)local_208 + 1].MinCol = param_5->width + 2;
              local_200 = (rcEdgeHit *)((longlong)local_200 + 8);
              param_5->RowExt[(longlong)local_208 + 1].MaxCol = -2;
              local_208 = (double *)((longlong)local_208 + 1);
              uVar33 = (ulonglong)uVar16;
            } while ((longlong)local_208 <= local_1f8);
          }
        }
      }
    }
  }
  return;
}

// AddSpanInTempColumns @ 1446b0fa0

AddSpanInTempColumns * __thiscall
AddSpanInTempColumns::AddSpanInTempColumns
          (AddSpanInTempColumns *this,rcContext *param_1,rcHeightfield *param_2,float param_3,
          double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  this->ctx = param_1;
  this->ibminx = 0;
  this->ibminz = 0;
  this->ibwidth = 0;
  this->ibheight = 0;
  if ((param_4 == (double *)0x0) || (param_5 == (double *)0x0)) {
    if (param_1 == (rcContext *)0x0) {
      return this;
    }
    pcVar6 = 
    "rcRasterizeTriangles called for triangles to rasterize as filled convex but the verts bounds is not valid."
    ;
  }
  else {
    if (param_2->tempSpanColumns != (rcSpanData *)0x0) {
      dVar1 = *param_4;
      dVar8 = param_2->bmax[0];
      dVar2 = param_2->bmin[0];
      dVar12 = dVar2;
      if ((dVar2 <= dVar1) && (dVar12 = dVar8, dVar1 <= dVar8)) {
        dVar12 = dVar1;
      }
      dVar1 = *param_5;
      dVar10 = dVar2;
      if ((dVar2 <= dVar1) && (dVar10 = dVar8, dVar1 <= dVar8)) {
        dVar10 = dVar1;
      }
      dVar1 = param_2->bmin[2];
      dVar8 = param_4[2];
      dVar3 = param_2->bmax[2];
      dVar11 = dVar1;
      if ((dVar1 <= dVar8) && (dVar11 = dVar3, dVar8 <= dVar3)) {
        dVar11 = dVar8;
      }
      dVar8 = param_5[2];
      dVar9 = dVar1;
      if ((dVar1 <= dVar8) && (dVar9 = dVar3, dVar8 <= dVar3)) {
        dVar9 = dVar8;
      }
      if ((dVar10 != dVar12) && (dVar9 != dVar11)) {
        dVar8 = (double)param_3;
        iVar4 = (int)((dVar12 - dVar2) * dVar8);
        this->ibminx = iVar4;
        iVar7 = (int)((dVar11 - dVar1) * dVar8);
        iVar5 = ((int)((dVar10 - dVar2) * dVar8) - iVar4) + 1;
        this->ibminz = iVar7;
        iVar4 = 0;
        if ((-1 < iVar5) && (iVar4 = iVar5, param_2->width < iVar5)) {
          iVar4 = param_2->width;
        }
        this->ibwidth = iVar4;
        iVar5 = ((int)((dVar9 - dVar1) * dVar8) - iVar7) + 1;
        iVar7 = 0;
        if ((-1 < iVar5) && (iVar7 = iVar5, param_2->height < iVar5)) {
          iVar7 = param_2->height;
        }
        this->ibheight = iVar7;
        memset(param_2->tempSpanColumns,0,(longlong)iVar7 * (longlong)iVar4 * 0xc);
      }
      return this;
    }
    if (param_1 == (rcContext *)0x0) {
      return this;
    }
    pcVar6 = 
    "rcRasterizeTriangles called for triangles to rasterize as filled convex but tempSpanColumns was not allocated."
    ;
  }
  rcContext::log(param_1,RC_LOG_WARNING,pcVar6);
  return this;
}

// CollectLayerRegionsChunky @ 1446b1150

bool __cdecl
CollectLayerRegionsChunky
          (rcContext *param_1,rcCompactHeightfield *param_2,rcBorderSize param_3,int param_4,
          ushort *param_5,rcLayerRegionMonotone **param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  rcCompactSpan *prVar3;
  rcLayerRegionMonotone *prVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  rcLayerRegionMonotone *prVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  rcCompactCell **pprVar14;
  int iVar15;
  ushort uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  short *psVar20;
  ushort *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  ushort uVar26;
  int iVar27;
  longlong lVar28;
  void *pvVar29;
  longlong lVar30;
  longlong lVar31;
  int iVar32;
  ulonglong uVar33;
  longlong lVar34;
  int iStackX_1c;
  ushort local_d8;
  int local_d4;
  int local_c8;
  int local_b8;
  rcIntArray local_a0;
  rcCompactCell **local_90;
  longlong local_88;
  rcIntArray local_80;
  int local_70;
  int local_6c;
  int local_68;
  ulonglong local_60;
  void *local_58;
  
  iVar1 = param_2->width;
  iVar2 = param_2->height;
  pvVar8 = rcAlloc(param_4 * 6,RC_ALLOC_TEMP);
  local_58 = pvVar8;
  if (pvVar8 == (void *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,"CollectLayerRegionsChunky: Out of memory \'sweeps\' (%d).")
    ;
    bVar5 = false;
  }
  else {
    local_80.m_data = (int *)0x0;
    local_80.m_size = 0;
    local_80.m_cap = 0;
    rcIntArray::resize(&local_80,0x100);
    iStackX_1c = param_3.high;
    uVar16 = 0;
    local_d8 = 0;
    iVar22 = iVar1 - iStackX_1c;
    iVar11 = param_3.low;
    local_88 = CONCAT44(local_88._4_4_,iVar22);
    if (iVar11 < iVar22) {
      iStackX_1c = iVar2 - iStackX_1c;
      iVar19 = -(iVar1 + iVar11);
      iVar18 = iVar11;
      iVar15 = param_4;
      local_b8 = param_4;
      local_6c = iStackX_1c;
      do {
        if (iVar11 < iStackX_1c) {
          if (iVar18 + param_4 < iVar22) {
            iVar22 = iVar18 + param_4;
          }
          iVar23 = iVar11 * iVar1;
          local_68 = iVar1 * param_4;
          iVar10 = iVar11;
          do {
            local_70 = iStackX_1c;
            if (iVar10 + param_4 < iStackX_1c) {
              local_70 = iVar10 + param_4;
            }
            iVar32 = iVar23;
            iVar27 = iVar10;
            if (iVar10 < local_70) {
              do {
                pprVar14 = &param_2->cells;
                local_90 = pprVar14;
                rcIntArray::resize(&local_80,uVar16 + 1);
                memset(local_80.m_data,0,(ulonglong)local_d8 << 2);
                uVar16 = 0;
                iStackX_1c = local_6c;
                for (iVar24 = iVar18; local_6c = iStackX_1c, iVar24 < iVar22; iVar24 = iVar24 + 1) {
                  uVar6 = (uint)(*pprVar14)[iVar32 + iVar24] & 0xffffff;
                  uVar33 = (ulonglong)uVar6;
                  uVar25 = (ulonglong)(uVar6 + ((uint)(*pprVar14)[iVar32 + iVar24] >> 0x18));
                  local_60 = uVar25;
                  if (uVar33 < uVar25) {
                    lVar28 = (ulonglong)uVar6 * 0xc;
                    pvVar29 = pvVar8;
                    do {
                      prVar3 = param_2->spans;
                      pvVar8 = pvVar29;
                      if (param_2->areas[uVar33] != '\0') {
                        uVar6 = *(uint *)((longlong)&prVar3->con + lVar28) & 0xff;
                        if ((((uVar6 == 0xff) || (iVar24 <= iVar18)) ||
                            (uVar6 = ((uint)(*pprVar14)[(longlong)(iVar32 + iVar24) + -1] & 0xffffff
                                     ) + uVar6, param_2->areas[uVar6] == '\0')) ||
                           (uVar13 = (ulonglong)param_5[uVar6], uVar26 = uVar16,
                           param_5[uVar6] == 0xffff)) {
                          uVar13 = (ulonglong)uVar16;
                          uVar26 = uVar16 + 1;
                          iVar17 = uVar16 + 1;
                          if (iVar15 < iVar17) {
                            pvVar8 = rcAlloc(iVar17 * 6,RC_ALLOC_TEMP);
                            if (pvVar8 != (void *)0x0) {
                              rcMemCpy(pvVar8,pvVar29,local_b8 * 6);
                            }
                            rcFree(pvVar29);
                            iVar15 = iVar17;
                            local_b8 = iVar17;
                            local_58 = pvVar8;
                          }
                          if (pvVar8 == (void *)0x0) {
                            rcContext::log(param_1,RC_LOG_ERROR,
                                           "CollectLayerRegionsChunky: Out of memory \'sweeps\' resize (%d)."
                                          );
                            bVar5 = false;
                            goto LAB_1446b1c53;
                          }
                          *(undefined2 *)((longlong)pvVar8 + uVar13 * 6 + 4) = 0xffff;
                          *(undefined2 *)((longlong)pvVar8 + uVar13 * 6) = 0;
                          uVar25 = local_60;
                        }
                        uVar6 = (uint)*(byte *)((longlong)&prVar3->con + lVar28 + 3);
                        if ((uVar6 != 0xff) && (iVar10 < iVar27)) {
                          uVar16 = param_5[((uint)(*local_90)[iVar32 + iVar19 + iVar24 + iVar18] &
                                           0xffffff) + uVar6];
                          if (uVar16 != 0xffff) {
                            psVar20 = (short *)(uVar13 * 6 + (longlong)pvVar8);
                            if (*psVar20 == 0) {
                              psVar20[2] = uVar16;
                            }
                            if (psVar20[2] == uVar16) {
                              *psVar20 = *psVar20 + 1;
                              local_80.m_data[uVar16] = local_80.m_data[uVar16] + 1;
                            }
                            else {
                              psVar20[2] = -1;
                            }
                          }
                        }
                        param_5[uVar33] = (ushort)uVar13;
                        pprVar14 = local_90;
                        uVar16 = uVar26;
                      }
                      uVar33 = uVar33 + 1;
                      lVar28 = lVar28 + 0xc;
                      pvVar29 = pvVar8;
                    } while ((longlong)uVar33 < (longlong)uVar25);
                  }
                  iStackX_1c = local_6c;
                }
                uVar25 = (ulonglong)uVar16;
                if (uVar25 != 0) {
                  puVar21 = (ushort *)((longlong)pvVar8 + 2);
                  do {
                    uVar16 = puVar21[1];
                    if ((uVar16 == 0xffff) ||
                       (uVar26 = local_d8, local_80.m_data[uVar16] != (uint)puVar21[-1])) {
                      uVar26 = local_d8 + 1;
                      uVar16 = local_d8;
                    }
                    local_d8 = uVar26;
                    *puVar21 = uVar16;
                    puVar21 = puVar21 + 3;
                    uVar25 = uVar25 - 1;
                    iVar15 = local_b8;
                  } while (uVar25 != 0);
                }
                if (iVar18 < iVar22) {
                  lVar28 = (longlong)(iVar32 + iVar18) << 2;
                  uVar25 = (ulonglong)(uint)(iVar22 - iVar18);
                  do {
                    uVar6 = *(uint *)((longlong)&param_2->cells->index + lVar28);
                    uVar7 = uVar6 & 0xffffff;
                    uVar33 = (ulonglong)uVar7;
                    uVar13 = (ulonglong)(uVar7 + (uVar6 >> 0x18));
                    if (uVar33 < uVar13) {
                      do {
                        if (param_5[uVar33] != 0xffff) {
                          param_5[uVar33] =
                               *(ushort *)((longlong)pvVar8 + (ulonglong)param_5[uVar33] * 6 + 2);
                        }
                        uVar33 = uVar33 + 1;
                      } while ((longlong)uVar33 < (longlong)uVar13);
                    }
                    lVar28 = lVar28 + 4;
                    uVar25 = uVar25 - 1;
                  } while (uVar25 != 0);
                }
                iVar27 = iVar27 + 1;
                iVar32 = iVar32 + iVar1;
                uVar16 = local_d8;
              } while (iVar27 < local_70);
            }
            iVar23 = iVar23 + local_68;
            iVar10 = iVar10 + param_4;
          } while (iVar10 < iStackX_1c);
          iVar22 = (int)local_88;
        }
        iVar18 = iVar18 + param_4;
        iVar19 = iVar19 - param_4;
      } while (iVar18 < iVar22);
    }
    *param_7 = (uint)uVar16;
    if (uVar16 == 0) {
      bVar5 = true;
      *param_6 = (rcLayerRegionMonotone *)0x0;
    }
    else {
      prVar9 = rcAlloc((uint)uVar16 * 0x38,RC_ALLOC_TEMP);
      *param_6 = prVar9;
      if (prVar9 == (rcLayerRegionMonotone *)0x0) {
        rcContext::log(param_1,RC_LOG_ERROR,
                       "CollectLayerRegionsChunky: Out of memory \'regs\' (%d).");
        bVar5 = false;
      }
      else {
        memset(prVar9,0,(longlong)*param_7 * 0x38);
        iVar22 = 0;
        if (0 < *param_7) {
          lVar28 = 0;
          do {
            iVar22 = iVar22 + 1;
            *(undefined2 *)((longlong)&(*param_6)->layerId + lVar28) = 0xffff;
            *(undefined4 *)((longlong)&(*param_6)->ymin + lVar28) = 0x1fffffff;
            *(undefined4 *)((longlong)&(*param_6)->ymax + lVar28) = 0;
            lVar28 = lVar28 + 0x38;
          } while (iVar22 < *param_7);
        }
        local_a0.m_data = (int *)0x0;
        local_a0.m_size = 0;
        local_a0.m_cap = 0;
        rcIntArray::resize(&local_a0,0x40);
        local_d4 = 0;
        if (0 < iVar2) {
          do {
            local_c8 = 0;
            if (0 < iVar1) {
              iVar22 = local_d4 * iVar1;
              local_88 = (longlong)iVar22 << 2;
              do {
                puVar12 = (uint *)((longlong)&param_2->cells->index + local_88);
                rcIntArray::resize(&local_a0,0);
                uVar6 = *puVar12;
                uVar7 = uVar6 & 0xffffff;
                uVar25 = (ulonglong)uVar7;
                local_60 = (ulonglong)(uVar7 + (uVar6 >> 0x18));
                if (uVar25 < local_60) {
                  lVar28 = uVar25 * 0xc;
                  do {
                    uVar16 = param_5[uVar25];
                    puVar12 = (uint *)((longlong)&param_2->spans->y + lVar28);
                    if (uVar16 != 0xffff) {
                      prVar9 = *param_6;
                      uVar6 = *puVar12;
                      if (prVar9[uVar16].ymin < *puVar12) {
                        uVar6 = prVar9[uVar16].ymin;
                      }
                      prVar9[uVar16].ymin = uVar6;
                      prVar9 = *param_6;
                      uVar6 = *puVar12;
                      if (*puVar12 < prVar9[uVar16].ymax) {
                        uVar6 = prVar9[uVar16].ymax;
                      }
                      prVar9[uVar16].ymax = uVar6;
                      (*param_6)[uVar16].chunkId =
                           (local_c8 / param_4 - local_d4 % param_4) + local_d4;
                      rcIntArray::resize(&local_a0,local_a0.m_size + 1);
                      local_a0.m_data[local_a0.m_size + -1] = (uint)uVar16;
                      if ((((puVar12[1] & 0xff) != 0xff) &&
                          (uVar26 = param_5[((uint)param_2->cells[iVar22 + -1 + local_c8] & 0xffffff
                                            ) + (puVar12[1] & 0xff)], uVar26 != 0xffff)) &&
                         (uVar26 != uVar16)) {
                        prVar9 = *param_6;
                        bVar5 = rcIntArray::contains(&prVar9[uVar16].neis,(uint)uVar26);
                        if (!bVar5) {
                          rcIntArray::resize(&prVar9[uVar16].neis,prVar9[uVar16].neis.m_size + 1);
                          prVar9[uVar16].neis.m_data[(longlong)prVar9[uVar16].neis.m_size + -1] =
                               (uint)uVar26;
                        }
                      }
                      if (((*(byte *)((longlong)puVar12 + 5) != 0xff) &&
                          (uVar26 = param_5[((uint)param_2->cells[(local_d4 + 1) * iVar1 + local_c8]
                                            & 0xffffff) + (uint)*(byte *)((longlong)puVar12 + 5)],
                          uVar26 != 0xffff)) && (uVar26 != uVar16)) {
                        prVar9 = *param_6;
                        bVar5 = rcIntArray::contains(&prVar9[uVar16].neis,(uint)uVar26);
                        if (!bVar5) {
                          rcIntArray::resize(&prVar9[uVar16].neis,prVar9[uVar16].neis.m_size + 1);
                          prVar9[uVar16].neis.m_data[(longlong)prVar9[uVar16].neis.m_size + -1] =
                               (uint)uVar26;
                        }
                      }
                      uVar6 = (uint)(byte)*(undefined2 *)((longlong)puVar12 + 6);
                      if (((uVar6 != 0xff) &&
                          (uVar26 = param_5[((uint)param_2->cells[iVar22 + 1 + local_c8] & 0xffffff)
                                            + uVar6], uVar26 != 0xffff)) && (uVar26 != uVar16)) {
                        prVar9 = *param_6;
                        bVar5 = rcIntArray::contains(&prVar9[uVar16].neis,(uint)uVar26);
                        if (!bVar5) {
                          rcIntArray::resize(&prVar9[uVar16].neis,prVar9[uVar16].neis.m_size + 1);
                          prVar9[uVar16].neis.m_data[(longlong)prVar9[uVar16].neis.m_size + -1] =
                               (uint)uVar26;
                        }
                      }
                      if (((*(byte *)((longlong)puVar12 + 7) != 0xff) &&
                          (uVar26 = param_5[((uint)param_2->cells
                                                   [(local_d4 + -1) * iVar1 + local_c8] & 0xffffff)
                                            + (uint)*(byte *)((longlong)puVar12 + 7)],
                          uVar26 != 0xffff)) && (uVar26 != uVar16)) {
                        prVar9 = *param_6;
                        bVar5 = rcIntArray::contains(&prVar9[uVar16].neis,(uint)uVar26);
                        if (!bVar5) {
                          rcIntArray::resize(&prVar9[uVar16].neis,prVar9[uVar16].neis.m_size + 1);
                          prVar9[uVar16].neis.m_data[(longlong)prVar9[uVar16].neis.m_size + -1] =
                               (uint)uVar26;
                        }
                      }
                    }
                    uVar25 = uVar25 + 1;
                    lVar28 = lVar28 + 0xc;
                  } while ((longlong)uVar25 < (longlong)local_60);
                }
                lVar34 = 0;
                lVar28 = (longlong)local_a0.m_size;
                local_90 = (rcCompactCell **)(longlong)(local_a0.m_size + -1);
                if (0 < (longlong)local_90) {
                  lVar30 = 1;
                  lVar31 = lVar30;
                  do {
                    for (; lVar30 < lVar28; lVar30 = lVar30 + 1) {
                      iVar11 = local_a0.m_data[lVar30];
                      iVar15 = *(int *)(lVar34 + (longlong)local_a0.m_data);
                      if (iVar15 != iVar11) {
                        prVar9 = *param_6;
                        prVar4 = *param_6;
                        bVar5 = rcIntArray::contains(&prVar9[iVar15].layers,iVar11);
                        if (!bVar5) {
                          rcIntArray::resize(&prVar9[iVar15].layers,prVar9[iVar15].layers.m_size + 1
                                            );
                          prVar9[iVar15].layers.m_data[(longlong)prVar9[iVar15].layers.m_size + -1]
                               = iVar11;
                        }
                        iVar15 = *(int *)(lVar34 + (longlong)local_a0.m_data);
                        bVar5 = rcIntArray::contains(&prVar4[iVar11].layers,iVar15);
                        if (!bVar5) {
                          rcIntArray::resize(&prVar4[iVar11].layers,prVar4[iVar11].layers.m_size + 1
                                            );
                          prVar4[iVar11].layers.m_data[(longlong)prVar4[iVar11].layers.m_size + -1]
                               = iVar15;
                        }
                      }
                    }
                    lVar30 = lVar31 + 1;
                    lVar34 = lVar34 + 4;
                    local_90 = (rcCompactCell **)((longlong)local_90 + -1);
                    lVar31 = lVar30;
                  } while (local_90 != (rcCompactCell **)0x0);
                  local_90 = (rcCompactCell **)0x0;
                }
                local_c8 = local_c8 + 1;
                local_88 = local_88 + 4;
              } while (local_c8 < iVar1);
            }
            local_d4 = local_d4 + 1;
            pvVar8 = local_58;
          } while (local_d4 < iVar2);
        }
        bVar5 = true;
        rcFree(local_a0.m_data);
      }
    }
LAB_1446b1c53:
    rcFree(local_80.m_data);
  }
  rcFree(pvVar8);
  return bVar5;
}

// CollectLayerRegionsMonotone @ 1446b1c90

bool __cdecl
CollectLayerRegionsMonotone
          (rcContext *param_1,rcCompactHeightfield *param_2,rcBorderSize param_3,ushort *param_4,
          rcLayerRegionMonotone **param_5,int *param_6)

{
  short *psVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  rcCompactSpan *prVar7;
  rcLayerRegionMonotone *prVar8;
  byte bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  void *pvVar13;
  rcLayerRegionMonotone *prVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong lVar17;
  uint uVar18;
  ushort *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  byte bVar26;
  ushort uVar27;
  ushort uVar28;
  int iVar29;
  longlong lVar30;
  rcCompactCell **pprVar31;
  int iStackX_1c;
  int local_a8;
  uint local_a4;
  rcIntArray local_90;
  void *local_80;
  longlong local_78;
  longlong local_70;
  rcIntArray local_68;
  rcCompactCell *local_58;
  
  iVar5 = param_2->width;
  iVar6 = param_2->height;
  pvVar13 = rcAlloc(iVar5 * 0x30,RC_ALLOC_TEMP);
  local_80 = pvVar13;
  if (pvVar13 == (void *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,
                   "CollectLayerRegionsMonotone: Out of memory \'sweeps\' (%d).");
    bVar10 = false;
  }
  else {
    local_68.m_data = (int *)0x0;
    local_68.m_size = 0;
    local_68.m_cap = 0;
    rcIntArray::resize(&local_68,0x100);
    uVar21 = 0;
    iVar29 = 0;
    iStackX_1c = param_3.high;
    uVar28 = 0;
    iVar12 = param_3.low;
    local_70 = CONCAT44(local_70._4_4_,iVar6 - iStackX_1c);
    if (iVar12 < iVar6 - iStackX_1c) {
      iStackX_1c = iVar5 - iStackX_1c;
      iVar23 = iVar5 * iVar12;
      local_78 = CONCAT44(local_78._4_4_,(iVar12 + -1) * iVar5 - (iVar5 + 1) * iVar12);
      local_a4 = iVar12;
      do {
        pprVar31 = &param_2->cells;
        rcIntArray::resize(&local_68,(int)uVar21 + 1);
        memset(local_68.m_data,0,uVar21 << 2);
        uVar27 = 0;
        uVar22 = (ulonglong)param_3 & 0xffffffff;
        bVar26 = 0;
        if (iVar12 < iStackX_1c) {
          do {
            iVar29 = (int)uVar22;
            local_58 = *pprVar31 + (iVar23 + iVar29);
            bVar2 = (*pprVar31)[iVar23 + iVar29].count;
            bVar9 = bVar2;
            if (bVar2 < bVar26) {
              bVar9 = bVar26;
            }
            uVar11 = (uint)*local_58 & 0xffffff;
            uVar21 = (ulonglong)uVar11;
            if (uVar21 < uVar11 + bVar2) {
              lVar17 = (ulonglong)uVar11 * 0xc;
              do {
                prVar7 = param_2->spans;
                if (param_2->areas[uVar21] != '\0') {
                  uVar18 = *(uint *)((longlong)&prVar7->con + lVar17) & 0xff;
                  if (((uVar18 == 0xff) ||
                      (uVar18 = ((uint)(*pprVar31)[(longlong)(iVar23 + iVar29) + -1] & 0xffffff) +
                                uVar18, param_2->areas[uVar18] == '\0')) ||
                     (uVar22 = (ulonglong)param_4[uVar18], param_4[uVar18] == 0xffff)) {
                    uVar22 = (ulonglong)uVar27;
                    if (iVar5 * 8 <= (int)(uint)uVar27) {
                      rcContext::log(param_1,RC_LOG_ERROR,
                                     "CollectLayerRegionsMonotone: Layer split is too complex, skipping tile! x:%d y:%d spansTotal:%d spansCurrent:%d spansMax:%d"
                                    );
                      bVar10 = false;
                      goto LAB_1446b2611;
                    }
                    *(undefined2 *)((longlong)local_80 + uVar22 * 6 + 4) = 0xffff;
                    *(undefined2 *)((longlong)local_80 + uVar22 * 6) = 0;
                    uVar27 = uVar27 + 1;
                  }
                  uVar18 = (uint)*(byte *)((longlong)&prVar7->con + lVar17 + 3);
                  if (uVar18 != 0xff) {
                    uVar3 = param_4[((uint)(*pprVar31)[(int)local_78 + iVar23 + iVar29 + iVar12] &
                                    0xffffff) + uVar18];
                    if (uVar3 != 0xffff) {
                      psVar1 = (short *)((longlong)local_80 + uVar22 * 6);
                      sVar4 = *(short *)((longlong)local_80 + uVar22 * 6);
                      if (sVar4 == 0) {
                        psVar1[2] = uVar3;
                      }
                      if (psVar1[2] == uVar3) {
                        *psVar1 = sVar4 + 1;
                        local_68.m_data[uVar3] = local_68.m_data[uVar3] + 1;
                      }
                      else {
                        psVar1[2] = -1;
                      }
                    }
                  }
                  param_4[uVar21] = (ushort)uVar22;
                }
                uVar21 = uVar21 + 1;
                lVar17 = lVar17 + 0xc;
              } while ((longlong)uVar21 < (longlong)(ulonglong)(uVar11 + bVar2));
            }
            uVar22 = (ulonglong)(iVar29 + 1U);
            bVar26 = bVar9;
          } while ((int)(iVar29 + 1U) < iStackX_1c);
          uVar21 = (ulonglong)uVar28;
        }
        uVar22 = (ulonglong)uVar27;
        if (uVar22 != 0) {
          puVar19 = (ushort *)((longlong)local_80 + 2);
          do {
            uVar28 = puVar19[1];
            if ((uVar28 == 0xffff) || (local_68.m_data[uVar28] != (uint)puVar19[-1])) {
              uVar28 = (ushort)uVar21;
              uVar21 = (ulonglong)(ushort)(uVar28 + 1);
            }
            *puVar19 = uVar28;
            puVar19 = puVar19 + 3;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
          uVar28 = (ushort)uVar21;
        }
        iVar29 = (int)uVar21;
        if (iVar12 < iStackX_1c) {
          lVar17 = (longlong)(iVar23 + iVar12) << 2;
          uVar22 = (ulonglong)(uint)(iStackX_1c - iVar12);
          do {
            uVar11 = *(uint *)((longlong)&param_2->cells->index + lVar17);
            uVar18 = uVar11 & 0xffffff;
            uVar15 = (ulonglong)uVar18;
            uVar20 = (ulonglong)(uVar18 + (uVar11 >> 0x18));
            if (uVar15 < uVar20) {
              do {
                if (param_4[uVar15] != 0xffff) {
                  param_4[uVar15] =
                       *(ushort *)((longlong)local_80 + (ulonglong)param_4[uVar15] * 6 + 2);
                }
                uVar15 = uVar15 + 1;
              } while ((longlong)uVar15 < (longlong)uVar20);
            }
            lVar17 = lVar17 + 4;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        iVar23 = iVar23 + iVar5;
        local_a4 = local_a4 + 1;
      } while ((int)local_a4 < (int)local_70);
    }
    *param_6 = iVar29;
    if (iVar29 == 0) {
      bVar10 = true;
      *param_5 = (rcLayerRegionMonotone *)0x0;
    }
    else {
      prVar14 = rcAlloc(iVar29 * 0x38,RC_ALLOC_TEMP);
      *param_5 = prVar14;
      if (prVar14 == (rcLayerRegionMonotone *)0x0) {
        rcContext::log(param_1,RC_LOG_ERROR,
                       "CollectLayerRegionsMonotone: Out of memory \'regs\' (%d).");
        bVar10 = false;
      }
      else {
        memset(prVar14,0,(longlong)*param_6 * 0x38);
        uVar15 = 0;
        uVar21 = uVar15;
        uVar22 = uVar15;
        if (0 < *param_6) {
          do {
            uVar11 = (int)uVar22 + 1;
            *(undefined2 *)((longlong)&(*param_5)->layerId + uVar21) = 0xffff;
            *(undefined4 *)((longlong)&(*param_5)->ymin + uVar21) = 0x1fffffff;
            *(undefined4 *)((longlong)&(*param_5)->ymax + uVar21) = 0;
            uVar21 = uVar21 + 0x38;
            uVar22 = (ulonglong)uVar11;
          } while ((int)uVar11 < *param_6);
        }
        local_90.m_data = (int *)0x0;
        local_90.m_size = 0;
        local_90.m_cap = 0;
        rcIntArray::resize(&local_90,0x40);
        local_a4 = 0;
        if (0 < iVar6) {
          do {
            local_a8 = 0;
            uVar11 = (uint)uVar15;
            if (0 < iVar5) {
              iVar12 = (uint)uVar15 * iVar5;
              local_78 = (longlong)iVar12 << 2;
              do {
                puVar16 = (uint *)((longlong)&param_2->cells->index + local_78);
                rcIntArray::resize(&local_90,0);
                uVar11 = *puVar16;
                uVar18 = uVar11 & 0xffffff;
                uVar21 = (ulonglong)uVar18;
                uVar22 = (ulonglong)(uVar18 + (uVar11 >> 0x18));
                if (uVar21 < uVar22) {
                  lVar17 = (ulonglong)uVar18 * 0xc;
                  do {
                    uVar28 = param_4[uVar21];
                    puVar16 = (uint *)((longlong)&param_2->spans->y + lVar17);
                    if (uVar28 != 0xffff) {
                      prVar14 = *param_5;
                      uVar11 = *puVar16;
                      if (prVar14[uVar28].ymin < *puVar16) {
                        uVar11 = prVar14[uVar28].ymin;
                      }
                      prVar14[uVar28].ymin = uVar11;
                      prVar14 = *param_5;
                      uVar11 = *puVar16;
                      if (*puVar16 < prVar14[uVar28].ymax) {
                        uVar11 = prVar14[uVar28].ymax;
                      }
                      prVar14[uVar28].ymax = uVar11;
                      rcIntArray::resize(&local_90,local_90.m_size + 1);
                      local_90.m_data[local_90.m_size + -1] = (uint)uVar28;
                      if ((((puVar16[1] & 0xff) != 0xff) &&
                          (uVar27 = param_4[((uint)param_2->cells[iVar12 + -1 + local_a8] & 0xffffff
                                            ) + (puVar16[1] & 0xff)], uVar27 != 0xffff)) &&
                         (uVar27 != uVar28)) {
                        prVar14 = *param_5;
                        bVar10 = rcIntArray::contains(&prVar14[uVar28].neis,(uint)uVar27);
                        if (!bVar10) {
                          rcIntArray::resize(&prVar14[uVar28].neis,prVar14[uVar28].neis.m_size + 1);
                          prVar14[uVar28].neis.m_data[(longlong)prVar14[uVar28].neis.m_size + -1] =
                               (uint)uVar27;
                        }
                      }
                      if (((*(byte *)((longlong)puVar16 + 5) != 0xff) &&
                          (uVar27 = param_4[((uint)param_2->cells
                                                   [(int)((local_a4 + 1) * iVar5 + local_a8)] &
                                            0xffffff) + (uint)*(byte *)((longlong)puVar16 + 5)],
                          uVar27 != 0xffff)) && (uVar27 != uVar28)) {
                        prVar14 = *param_5;
                        bVar10 = rcIntArray::contains(&prVar14[uVar28].neis,(uint)uVar27);
                        if (!bVar10) {
                          rcIntArray::resize(&prVar14[uVar28].neis,prVar14[uVar28].neis.m_size + 1);
                          prVar14[uVar28].neis.m_data[(longlong)prVar14[uVar28].neis.m_size + -1] =
                               (uint)uVar27;
                        }
                      }
                      uVar11 = (uint)(byte)*(undefined2 *)((longlong)puVar16 + 6);
                      if (((uVar11 != 0xff) &&
                          (uVar27 = param_4[((uint)param_2->cells[iVar12 + 1 + local_a8] & 0xffffff)
                                            + uVar11], uVar27 != 0xffff)) && (uVar27 != uVar28)) {
                        prVar14 = *param_5;
                        bVar10 = rcIntArray::contains(&prVar14[uVar28].neis,(uint)uVar27);
                        if (!bVar10) {
                          rcIntArray::resize(&prVar14[uVar28].neis,prVar14[uVar28].neis.m_size + 1);
                          prVar14[uVar28].neis.m_data[(longlong)prVar14[uVar28].neis.m_size + -1] =
                               (uint)uVar27;
                        }
                      }
                      if (((*(byte *)((longlong)puVar16 + 7) != 0xff) &&
                          (uVar27 = param_4[((uint)param_2->cells
                                                   [(int)((local_a4 - 1) * iVar5 + local_a8)] &
                                            0xffffff) + (uint)*(byte *)((longlong)puVar16 + 7)],
                          uVar27 != 0xffff)) && (uVar27 != uVar28)) {
                        prVar14 = *param_5;
                        bVar10 = rcIntArray::contains(&prVar14[uVar28].neis,(uint)uVar27);
                        if (!bVar10) {
                          rcIntArray::resize(&prVar14[uVar28].neis,prVar14[uVar28].neis.m_size + 1);
                          prVar14[uVar28].neis.m_data[(longlong)prVar14[uVar28].neis.m_size + -1] =
                               (uint)uVar27;
                        }
                      }
                    }
                    uVar21 = uVar21 + 1;
                    lVar17 = lVar17 + 0xc;
                  } while ((longlong)uVar21 < (longlong)uVar22);
                }
                lVar30 = 0;
                lVar17 = (longlong)local_90.m_size;
                local_70 = (longlong)(local_90.m_size + -1);
                if (0 < local_70) {
                  lVar24 = 1;
                  lVar25 = lVar24;
                  do {
                    for (; lVar24 < lVar17; lVar24 = lVar24 + 1) {
                      iVar29 = local_90.m_data[lVar24];
                      iVar23 = *(int *)(lVar30 + (longlong)local_90.m_data);
                      if (iVar23 != iVar29) {
                        prVar14 = *param_5;
                        prVar8 = *param_5;
                        bVar10 = rcIntArray::contains(&prVar14[iVar23].layers,iVar29);
                        if (!bVar10) {
                          rcIntArray::resize(&prVar14[iVar23].layers,
                                             prVar14[iVar23].layers.m_size + 1);
                          prVar14[iVar23].layers.m_data
                          [(longlong)prVar14[iVar23].layers.m_size + -1] = iVar29;
                        }
                        iVar23 = *(int *)(lVar30 + (longlong)local_90.m_data);
                        bVar10 = rcIntArray::contains(&prVar8[iVar29].layers,iVar23);
                        if (!bVar10) {
                          rcIntArray::resize(&prVar8[iVar29].layers,prVar8[iVar29].layers.m_size + 1
                                            );
                          prVar8[iVar29].layers.m_data[(longlong)prVar8[iVar29].layers.m_size + -1]
                               = iVar23;
                        }
                      }
                    }
                    lVar24 = lVar25 + 1;
                    lVar30 = lVar30 + 4;
                    local_70 = local_70 + -1;
                    lVar25 = lVar24;
                  } while (local_70 != 0);
                  local_70 = 0;
                }
                local_a8 = local_a8 + 1;
                local_78 = local_78 + 4;
                uVar11 = local_a4;
              } while (local_a8 < iVar5);
            }
            local_a4 = uVar11 + 1;
            uVar15 = (ulonglong)local_a4;
          } while ((int)local_a4 < iVar6);
        }
        bVar10 = true;
        rcFree(local_90.m_data);
      }
    }
LAB_1446b2611:
    rcFree(local_68.m_data);
    pvVar13 = local_80;
  }
  rcFree(pvVar13);
  return bVar10;
}

// SplitAndStoreLayerRegions @ 1446b2650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
SplitAndStoreLayerRegions
          (rcContext *param_1,rcCompactHeightfield *param_2,rcBorderSize param_3,int param_4,
          ushort *param_5,rcLayerRegionMonotone *param_6,int param_7,rcHeightfieldLayerSet *param_8)

{
  rcIntArray *this;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  rcCompactHeightfield *prVar13;
  bool bVar14;
  int iVar15;
  byte *pbVar16;
  rcHeightfieldLayer *prVar17;
  ushort *puVar18;
  uchar *puVar19;
  longlong lVar20;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  byte *pbVar25;
  ushort uVar26;
  int iVar27;
  short sVar28;
  uint uVar29;
  char *pcVar30;
  int iVar31;
  ulonglong uVar32;
  uint uVar33;
  rcHeightfieldLayerSet *prVar34;
  uint *puVar35;
  longlong lVar36;
  rcLayerRegionMonotone *prVar37;
  uint *puVar38;
  ushort uVar39;
  uint uVar40;
  ulonglong uVar41;
  double dVar42;
  double dVar43;
  undefined1 auStack_398 [32];
  undefined4 local_378;
  uint local_374;
  rcLayerRegionMonotone *local_370;
  int local_368;
  longlong local_360;
  rcIntArray local_358;
  uint local_348;
  int local_344;
  int local_340;
  int local_33c;
  int local_338;
  int local_334;
  int local_330;
  rcHeightfieldLayer *local_328;
  longlong local_320;
  uint *local_318;
  rcContext *local_310;
  rcBorderSize local_308;
  rcCompactHeightfield *local_300;
  rcBorderSize local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  longlong local_2e0;
  rcHeightfieldLayerSet *local_2d8;
  uint *local_2d0;
  ushort local_2c8 [256];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_398;
  local_2d8 = param_8;
  uVar39 = 0;
  local_378 = local_378 & 0xffff0000;
  local_358.m_data = (int *)0x0;
  local_358.m_size = 0;
  local_358.m_cap = 0;
  local_370 = param_6;
  local_374 = param_4;
  local_310 = param_1;
  local_308 = param_3;
  local_300 = param_2;
  local_2f8 = param_3;
  rcIntArray::resize(&local_358,0x40);
  rcIntArray::resize(&local_358,0);
  local_368 = 0;
  if (0 < param_7) {
    uVar32 = local_358._8_8_ & 0xffffffff;
    puVar35 = &param_6->ymin;
    do {
      iVar27 = local_368;
      if (*(ushort *)(puVar35 + 2) == 0xffff) {
        *(undefined1 *)((longlong)puVar35 + 10) =
             INSERT(*(undefined1 *)((longlong)puVar35 + 10),'\x01',0,1);
        *(ushort *)(puVar35 + 2) = uVar39;
        local_328 = (rcHeightfieldLayer *)puVar35;
        rcIntArray::resize(&local_358,(int)uVar32 + 1);
        local_358.m_data[local_358.m_size + -1] = iVar27;
        uVar32 = local_358._8_8_ & 0xffffffff;
        iVar15 = local_368;
        local_368 = iVar27;
        iVar27 = local_358.m_size;
        while (iVar27 != 0) {
          iVar31 = 1;
          iVar27 = *local_358.m_data;
          if (1 < (int)uVar32) {
            lVar24 = 4;
            do {
              iVar31 = iVar31 + 1;
              *(undefined4 *)((longlong)local_358.m_data + lVar24 + -4) =
                   *(undefined4 *)((longlong)local_358.m_data + lVar24);
              uVar32 = local_358._8_8_ & 0xffffffff;
              lVar24 = lVar24 + 4;
            } while (iVar31 < local_358.m_size);
          }
          if (0 < (int)uVar32) {
            uVar22 = (int)uVar32 - 1;
            uVar32 = (ulonglong)uVar22;
            local_358.m_cap = (int)((ulonglong)local_358._8_8_ >> 0x20);
            local_358.m_size = uVar22;
          }
          local_318 = (uint *)(longlong)param_6[iVar27].neis.m_size;
          local_360 = 0;
          prVar37 = param_6;
          local_368 = iVar15;
          if (0 < (longlong)local_318) {
            do {
              lVar24 = local_360;
              iVar15 = param_6[iVar27].neis.m_data[local_360];
              if (local_370[iVar15].layerId == 0xffff) {
                this = (rcIntArray *)(puVar35 + -4);
                bVar14 = rcIntArray::contains(this,iVar15);
                if (!bVar14) {
                  uVar22 = local_370[iVar15].ymax;
                  if (local_370[iVar15].ymax < puVar35[1]) {
                    uVar22 = puVar35[1];
                  }
                  uVar33 = local_370[iVar15].ymin;
                  if (*puVar35 < local_370[iVar15].ymin) {
                    uVar33 = *puVar35;
                  }
                  if ((int)(uVar22 - uVar33) < 0xff) {
                    rcIntArray::resize(&local_358,local_358.m_size + 1);
                    prVar37 = local_370;
                    local_358.m_data[local_358.m_size + -1] = iVar15;
                    local_370[iVar15].layerId = uVar39;
                    iVar31 = 0;
                    prVar17 = (rcHeightfieldLayer *)puVar35;
                    if (0 < local_370[iVar15].layers.m_size) {
                      lVar36 = 0;
                      do {
                        iVar7 = *(int *)(lVar36 + (longlong)prVar37[iVar15].layers.m_data);
                        bVar14 = rcIntArray::contains(this,iVar7);
                        if (!bVar14) {
                          rcIntArray::resize(this,puVar35[-2] + 1);
                          this->m_data[(longlong)(int)puVar35[-2] + -1] = iVar7;
                        }
                        iVar31 = iVar31 + 1;
                        lVar36 = lVar36 + 4;
                        lVar24 = local_360;
                        prVar17 = local_328;
                      } while (iVar31 < prVar37[iVar15].layers.m_size);
                    }
                    uVar32 = local_358._8_8_ & 0xffffffff;
                    uVar22 = local_370[iVar15].ymin;
                    if (*(uint *)prVar17 < local_370[iVar15].ymin) {
                      uVar22 = *(uint *)prVar17;
                    }
                    *(uint *)prVar17 = uVar22;
                    uVar22 = local_370[iVar15].ymax;
                    if (local_370[iVar15].ymax < *(uint *)((longlong)prVar17 + 4)) {
                      uVar22 = *(uint *)((longlong)prVar17 + 4);
                    }
                    *(uint *)((longlong)prVar17 + 4) = uVar22;
                    puVar35 = (uint *)prVar17;
                    uVar39 = (ushort)local_378;
                    goto LAB_1446b28ec;
                  }
                }
                uVar32 = local_358._8_8_ & 0xffffffff;
              }
LAB_1446b28ec:
              local_360 = lVar24 + 1;
              prVar37 = local_370;
            } while (local_360 < (longlong)local_318);
          }
          param_6 = prVar37;
          iVar15 = local_368;
          iVar27 = (int)uVar32;
        }
        uVar39 = uVar39 + 1;
        local_378._2_2_ = (undefined2)(local_378 >> 0x10);
        local_378 = CONCAT22(local_378._2_2_,uVar39);
      }
      local_368 = local_368 + 1;
      puVar35 = puVar35 + 0xe;
      param_3 = local_2f8;
      local_328 = (rcHeightfieldLayer *)puVar35;
      param_4 = local_374;
    } while (local_368 < param_7);
  }
  local_374 = CONCAT22((short)((uint)param_4 >> 0x10),(short)param_4 << 2);
  local_2e0 = (longlong)param_7;
  if (0 < param_7) {
    local_320 = 0;
    puVar35 = &param_6->ymax;
    uVar22 = local_374;
    do {
      lVar24 = local_320;
      if ((*(byte *)((longlong)puVar35 + 6) & 1) != 0) {
        uVar39 = *(ushort *)(puVar35 + 1);
        local_378 = CONCAT22(local_378._2_2_,uVar39);
        local_318 = &param_6->ymin;
LAB_1446b2992:
        lVar36 = 0;
        lVar24 = local_320;
        puVar38 = local_318;
        do {
          if ((lVar24 != lVar36) && ((*(byte *)((longlong)puVar38 + 10) & 1) != 0)) {
            uVar33 = puVar38[1];
            uVar40 = puVar35[-1];
            if (uVar40 <= uVar33 + (uVar22 & 0xffff)) {
              uVar29 = *puVar35;
              uVar23 = *puVar38;
              if (uVar23 <= uVar29 + (uVar22 & 0xffff)) {
                if (uVar33 < uVar29) {
                  uVar33 = uVar29;
                }
                if (uVar40 < uVar23) {
                  uVar23 = uVar40;
                }
                iVar27 = 0;
                if ((int)(uVar33 - uVar23) < 0xff) {
                  if (param_7 < 1) goto LAB_1446b2a44;
                  puVar18 = &local_370->layerId;
                  while ((*puVar18 != *(ushort *)(puVar38 + 2) ||
                         (bVar14 = rcIntArray::contains((rcIntArray *)(puVar35 + -5),iVar27),
                         lVar24 = local_320, uVar22 = local_374, !bVar14))) {
                    iVar27 = iVar27 + 1;
                    puVar18 = puVar18 + 0x1c;
                    lVar24 = local_320;
                    uVar22 = local_374;
                    if (param_7 <= iVar27) goto LAB_1446b2a44;
                  }
                }
              }
            }
          }
          lVar36 = lVar36 + 1;
          puVar38 = puVar38 + 0xe;
          param_6 = local_370;
          if (param_7 <= lVar36) break;
        } while( true );
      }
LAB_1446b2b51:
      local_320 = lVar24 + 1;
      puVar35 = puVar35 + 0xe;
      param_3 = local_2f8;
    } while (local_320 < param_7);
  }
  lVar36 = (longlong)param_7;
  lVar24 = 0;
  uVar39 = 0;
  if (param_7 < 0x100) {
    memset(local_2c8,0,0x200);
    if (0 < lVar36) {
      puVar18 = &param_6->layerId;
      lVar24 = lVar36;
      do {
        uVar26 = *puVar18;
        puVar18 = puVar18 + 0x1c;
        local_2c8[uVar26] = 1;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    lVar24 = 0;
    do {
      uVar26 = uVar39;
      if (local_2c8[lVar24] != 0) {
        uVar26 = uVar39 + 1;
        local_2c8[lVar24] = uVar39;
      }
      uVar39 = uVar26;
      if (local_2c8[lVar24 + 1] != 0) {
        uVar39 = uVar26 + 1;
        local_2c8[lVar24 + 1] = uVar26;
      }
      lVar24 = lVar24 + 2;
    } while (lVar24 < 0x100);
    if (0 < lVar36) {
      puVar18 = &param_6->layerId;
      do {
        *puVar18 = local_2c8[*puVar18];
        lVar36 = lVar36 + -1;
        puVar18 = puVar18 + 0x1c;
      } while (lVar36 != 0);
    }
  }
  else {
    if (0 < lVar36) {
      pbVar25 = &param_6->field_0x32;
      lVar20 = lVar36;
      do {
        *pbVar25 = *pbVar25 | 2;
        pbVar25 = pbVar25 + 0x38;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    uVar32 = (ulonglong)(uint)param_7;
    pbVar25 = &param_6->field_0x32;
    do {
      if ((*pbVar25 & 2) != 0) {
        sVar28 = *(short *)(pbVar25 + -2);
        uVar39 = uVar39 + 1;
        if (lVar24 < lVar36) {
          lVar20 = lVar36 - lVar24;
          pbVar16 = pbVar25;
          do {
            if (((*pbVar16 & 2) != 0) && (*(short *)(pbVar16 + -2) == sVar28)) {
              *(ushort *)(pbVar16 + -2) = uVar39;
              *pbVar16 = *pbVar16 & 0xfd;
            }
            pbVar16 = pbVar16 + 0x38;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
      }
      lVar24 = lVar24 + 1;
      pbVar25 = pbVar25 + 0x38;
      uVar32 = uVar32 - 1;
    } while (uVar32 != 0);
  }
  prVar34 = local_2d8;
  prVar13 = local_300;
  if (uVar39 == 0) {
    if (local_310->m_timerEnabled != false) {
      (**(code **)(local_310->_padding_ + 0x28))(local_310,0x1a);
    }
  }
  else {
    iVar15 = param_3.low;
    local_340 = local_300->width;
    uVar22 = (local_340 - local_308.high) - iVar15;
    dVar1 = local_300->bmax[0];
    iVar27 = (local_300->height - local_308.high) - iVar15;
    dVar43 = (double)iVar15 * local_300->cs;
    dVar2 = local_300->bmax[2];
    dVar3 = local_300->bmin[1];
    dVar4 = local_300->bmax[1];
    dVar5 = local_300->bmin[0];
    dVar6 = local_300->bmin[2];
    dVar42 = (double)local_308.high * local_300->cs;
    local_2d8->nlayers = (uint)uVar39;
    local_378 = uVar22;
    local_334 = iVar27;
    prVar17 = rcAlloc((uint)uVar39 * 0x78,RC_ALLOC_PERM);
    prVar34->layers = prVar17;
    if (prVar17 == (rcHeightfieldLayer *)0x0) {
      pcVar30 = "SplitAndStoreLayerRegions: Out of memory \'layers\' (%d).";
LAB_1446b34a6:
      rcContext::log(local_310,RC_LOG_ERROR,pcVar30);
      bVar14 = false;
      goto LAB_1446b2cf8;
    }
    memset(prVar17,0,(longlong)prVar34->nlayers * 0x78);
    uVar12 = _UNK_150d9fb28;
    uVar11 = ___xmm_ffffffff000000000000000100000000;
    uVar10 = _UNK_150ae1718;
    uVar9 = ___xmm_000000000000000100000000ffffffff;
    local_344 = 0;
    if (0 < prVar34->nlayers) {
      local_368 = iVar27 * uVar22;
      do {
        iVar31 = local_344;
        iVar15 = local_368;
        prVar17 = prVar34->layers + local_344;
        prVar17->bmin[0] = 0.0;
        prVar17->bmin[1] = 0.0;
        prVar17->bmin[2] = 0.0;
        prVar17->bmax[0] = 0.0;
        prVar17->bmax[1] = 0.0;
        prVar17->bmax[2] = 0.0;
        prVar17->cs = 0.0;
        prVar17->ch = 0.0;
        prVar17->width = 0;
        prVar17->height = 0;
        prVar17->minx = 0;
        prVar17->maxx = 0;
        prVar17->miny = 0;
        prVar17->maxy = 0;
        prVar17->hmin = 0;
        prVar17->hmax = 0;
        prVar17->heights = (ushort *)0x0;
        prVar17->areas = (uchar *)0x0;
        prVar17->cons = (uchar *)0x0;
        local_328 = prVar17;
        puVar18 = rcAlloc(local_368 * 2,RC_ALLOC_PERM);
        prVar17->heights = puVar18;
        if (puVar18 == (ushort *)0x0) {
          pcVar30 = "SplitAndStoreLayerRegions: Out of memory \'heights\' (%d).";
          goto LAB_1446b34a6;
        }
        memset(puVar18,0xff,(longlong)(iVar15 * 2));
        puVar19 = rcAlloc(iVar15,RC_ALLOC_PERM);
        prVar17->areas = puVar19;
        if (puVar19 == (uchar *)0x0) {
          pcVar30 = "SplitAndStoreLayerRegions: Out of memory \'areas\' (%d).";
          goto LAB_1446b34a6;
        }
        memset(puVar19,0,(longlong)iVar15);
        puVar19 = rcAlloc(local_368,RC_ALLOC_PERM);
        prVar17->cons = puVar19;
        if (puVar19 == (uchar *)0x0) {
          pcVar30 = "SplitAndStoreLayerRegions: Out of memory \'cons\' (%d).";
          goto LAB_1446b34a6;
        }
        memset(puVar19,0,(longlong)iVar15);
        local_348 = 0;
        uVar22 = 0;
        uVar33 = 0;
        if (0 < local_2e0) {
          puVar18 = &param_6->layerId;
          lVar24 = local_2e0;
          do {
            if (((*(byte *)(puVar18 + 1) & 1) != 0) && (*puVar18 == (ushort)iVar31)) {
              uVar22 = *(uint *)(puVar18 + -4);
              uVar33 = *(uint *)(puVar18 + -2);
            }
            puVar18 = puVar18 + 0x1c;
            lVar24 = lVar24 + -1;
            local_348 = uVar22;
          } while (lVar24 != 0);
        }
        prVar17->width = local_378;
        prVar17->height = iVar27;
        prVar17->cs = prVar13->cs;
        dVar8 = prVar13->ch;
        prVar17->bmin[1] = dVar3;
        prVar17->bmax[1] = dVar4;
        prVar17->bmin[0] = dVar43 + dVar5;
        prVar17->bmin[2] = dVar43 + dVar6;
        prVar17->bmax[0] = dVar1 - dVar42;
        prVar17->bmax[2] = dVar2 - dVar42;
        prVar17->ch = dVar8;
        local_330 = 0;
        prVar17->bmin[1] = (double)local_348 * prVar13->ch + dVar3;
        prVar17->bmax[1] = (double)uVar33 * prVar13->ch + dVar3;
        prVar17->minx = local_378;
        prVar17->maxx = 0;
        prVar17->miny = iVar27;
        prVar17->maxy = 0;
        if (0 < iVar27) {
          do {
            local_338 = 0;
            if (0 < (int)local_378) {
              iVar15 = local_330 + param_3.low;
              local_308.low = iVar15;
              local_320 = CONCAT44(local_320._4_4_,iVar15 * local_340);
              do {
                local_374 = param_3.low + local_338;
                uVar22 = (uint)prVar13->cells[(int)(iVar15 * local_340 + local_374)] & 0xffffff;
                local_318 = (uint *)(ulonglong)uVar22;
                local_2d0 = (uint *)(ulonglong)
                                    (uVar22 + ((uint)prVar13->cells
                                                     [(int)(iVar15 * local_340 + local_374)] >> 0x18
                                              ));
                if (local_318 < local_2d0) {
                  local_360 = (longlong)local_318 * 0xc;
                  do {
                    local_300 = (rcCompactHeightfield *)prVar13->spans;
                    if (param_5[(longlong)local_318] != 0xffff) {
                      uVar39 = param_6[param_5[(longlong)local_318]].layerId;
                      if (uVar39 == (ushort)local_344) {
                        iVar27 = local_338;
                        if (prVar17->minx < local_338) {
                          iVar27 = prVar17->minx;
                        }
                        prVar17->minx = iVar27;
                        iVar27 = local_338;
                        if (local_338 < prVar17->maxx) {
                          iVar27 = prVar17->maxx;
                        }
                        prVar17->maxx = iVar27;
                        iVar27 = local_330;
                        if (prVar17->miny < local_330) {
                          iVar27 = prVar17->miny;
                        }
                        prVar17->miny = iVar27;
                        iVar27 = local_330;
                        if (local_330 < prVar17->maxy) {
                          iVar27 = prVar17->maxy;
                        }
                        prVar17->maxy = iVar27;
                        uVar40 = 0;
                        sVar28 = (short)local_348;
                        local_33c = local_330 * local_378 + local_338;
                        prVar17->heights[local_33c] =
                             *(short *)((longlong)local_300->bmin + local_360 + -0x20) - sVar28;
                        uVar33 = 0;
                        prVar17->areas[local_33c] =
                             *(uchar *)((longlong)local_318 + (longlong)prVar13->areas);
                        uVar22 = 0;
                        do {
                          uVar29 = *(uint *)((longlong)local_300->bmin + local_360 + -0x1c) >>
                                   ((char)uVar22 * '\b' & 0x1fU) & 0xff;
                          if (uVar29 != 0xff) {
                            local_2f0 = uVar9;
                            uStack_2e8 = uVar10;
                            iVar27 = local_374 +
                                     *(int *)((longlong)&local_2f0 + (ulonglong)(uVar22 & 3) * 4);
                            local_2f0 = uVar11;
                            uStack_2e8 = uVar12;
                            iVar31 = *(int *)((longlong)&local_2f0 + (ulonglong)(uVar22 & 3) * 4) +
                                     iVar15;
                            uVar29 = ((uint)prVar13->cells[local_340 * iVar31 + iVar27] & 0xffffff)
                                     + uVar29;
                            if (param_5[uVar29] == 0xffff) {
                              uVar26 = 0xffff;
                            }
                            else {
                              uVar26 = local_370[param_5[uVar29]].layerId;
                            }
                            if ((prVar13->areas[uVar29] != '\0') && (uVar39 != uVar26)) {
                              uVar33 = uVar33 & 0xff | 1 << (uVar22 & 0x1f);
                              uVar23 = prVar13->spans[uVar29].y;
                              if (local_348 < uVar23) {
                                uVar21 = (short)uVar23 - sVar28;
                                puVar18 = local_328->heights;
                                if (uVar21 < puVar18[local_33c]) {
                                  uVar21 = puVar18[local_33c];
                                }
                                puVar18[local_33c] = uVar21;
                                param_3 = local_2f8;
                              }
                            }
                            if ((prVar13->areas[uVar29] != '\0') && (uVar39 == uVar26)) {
                              iVar31 = iVar31 - param_3.low;
                              iVar27 = iVar27 - param_3.low;
                              if ((-1 < iVar27) &&
                                 (((-1 < iVar31 && (iVar27 < (int)local_378)) &&
                                  (iVar31 < local_334)))) {
                                uVar40 = uVar40 & 0xff | 1 << (uVar22 & 0x1f);
                              }
                            }
                          }
                          uVar29 = *(uint *)((longlong)local_300->bmin + local_360 + -0x1c) >>
                                   ((char)uVar22 * '\b' + 8U & 0x1f) & 0xff;
                          if (uVar29 != 0xff) {
                            uVar32 = (ulonglong)(uVar22 + 1 & 3);
                            local_2f0 = uVar9;
                            uStack_2e8 = uVar10;
                            iVar27 = local_374 + *(int *)((longlong)&local_2f0 + uVar32 * 4);
                            local_2f0 = uVar11;
                            uStack_2e8 = uVar12;
                            iVar31 = *(int *)((longlong)&local_2f0 + uVar32 * 4) + iVar15;
                            uVar29 = ((uint)prVar13->cells[local_340 * iVar31 + iVar27] & 0xffffff)
                                     + uVar29;
                            if (param_5[uVar29] == 0xffff) {
                              uVar26 = 0xffff;
                            }
                            else {
                              uVar26 = local_370[param_5[uVar29]].layerId;
                            }
                            if ((prVar13->areas[uVar29] != '\0') && (uVar39 != uVar26)) {
                              uVar33 = uVar33 & 0xff | 1 << (uVar22 + 1 & 0x1f);
                              uVar23 = prVar13->spans[uVar29].y;
                              if (local_348 < uVar23) {
                                uVar21 = (short)uVar23 - sVar28;
                                puVar18 = local_328->heights;
                                if (uVar21 < puVar18[local_33c]) {
                                  uVar21 = puVar18[local_33c];
                                }
                                puVar18[local_33c] = uVar21;
                              }
                            }
                            if ((prVar13->areas[uVar29] != '\0') && (uVar39 == uVar26)) {
                              iVar31 = iVar31 - param_3.low;
                              iVar27 = iVar27 - param_3.low;
                              if ((-1 < iVar27) &&
                                 (((-1 < iVar31 && (iVar27 < (int)local_378)) &&
                                  (iVar31 < local_334)))) {
                                uVar40 = uVar40 & 0xff | 1 << (uVar22 + 1 & 0x1f);
                              }
                            }
                          }
                          uVar22 = uVar22 + 2;
                        } while ((int)uVar22 < 4);
                        local_328->cons[local_33c] =
                             local_328->cons[local_33c] | (char)uVar33 << 4 | (byte)uVar40;
                        prVar17 = local_328;
                      }
                    }
                    local_318 = (uint *)((longlong)local_318 + 1);
                    local_360 = local_360 + 0xc;
                    param_6 = local_370;
                  } while ((longlong)local_318 < (longlong)local_2d0);
                }
                local_338 = local_338 + 1;
                param_6 = local_370;
                iVar27 = local_334;
              } while (local_338 < (int)local_378);
            }
            local_330 = local_330 + 1;
            param_6 = local_370;
            iVar31 = local_344;
          } while (local_330 < iVar27);
        }
        fixLayerConnections(prVar17);
        if (prVar17->maxx < prVar17->minx) {
          prVar17->minx = 0;
          prVar17->maxx = 0;
        }
        if (prVar17->maxy < prVar17->miny) {
          prVar17->miny = 0;
          prVar17->maxy = 0;
        }
        local_344 = iVar31 + 1;
        prVar34 = local_2d8;
        param_6 = local_370;
      } while (local_344 < local_2d8->nlayers);
    }
  }
  bVar14 = true;
LAB_1446b2cf8:
  rcFree(local_358.m_data);
  return bVar14;
LAB_1446b2a44:
  uVar26 = *(ushort *)(puVar38 + 2);
  local_378 = CONCAT22(local_378._2_2_,uVar26);
  param_6 = local_370;
  if (uVar26 == 0xffff) goto LAB_1446b2b51;
  pbVar25 = &local_370->field_0x32;
  local_360 = local_2e0;
  do {
    uVar32 = 0;
    if (*(ushort *)(pbVar25 + -2) == uVar26) {
      *pbVar25 = *pbVar25 & 0xfe;
      *(ushort *)(pbVar25 + -2) = uVar39;
      uVar41 = uVar32;
      if (0 < *(int *)(pbVar25 + -0x12)) {
        do {
          iVar27 = *(int *)(uVar41 + *(longlong *)(pbVar25 + -0x1a));
          bVar14 = rcIntArray::contains((rcIntArray *)(puVar35 + -5),iVar27);
          if (!bVar14) {
            rcIntArray::resize((rcIntArray *)(puVar35 + -5),puVar35[-3] + 1);
            ((rcIntArray *)(puVar35 + -5))->m_data[(longlong)(int)puVar35[-3] + -1] = iVar27;
          }
          uVar22 = (int)uVar32 + 1;
          uVar32 = (ulonglong)uVar22;
          uVar41 = uVar41 + 4;
        } while ((int)uVar22 < *(int *)(pbVar25 + -0x12));
      }
      uVar22 = *(uint *)(pbVar25 + -10);
      if (puVar35[-1] < *(uint *)(pbVar25 + -10)) {
        uVar22 = puVar35[-1];
      }
      puVar35[-1] = uVar22;
      uVar22 = *(uint *)(pbVar25 + -6);
      if (*(uint *)(pbVar25 + -6) < *puVar35) {
        uVar22 = *puVar35;
      }
      *puVar35 = uVar22;
      uVar26 = (ushort)local_378;
    }
    pbVar25 = pbVar25 + 0x38;
    local_360 = local_360 + -1;
  } while (local_360 != 0);
  local_360 = 0;
  uVar22 = local_374;
  goto LAB_1446b2992;
}

// TransferColumnsToHeightfield @ 1446b34d0

void __thiscall
AddSpanInTempColumns::TransferColumnsToHeightfield
          (AddSpanInTempColumns *this,rcHeightfield *param_1,float param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  rcSpanData *prVar5;
  undefined4 uVar6;
  int iVar7;
  rcSpanPool *prVar8;
  rcSpanPool *prVar9;
  uint uVar10;
  rcSpanPool *prVar11;
  rcSpan *prVar12;
  rcSpan *prVar13;
  rcSpan *prVar14;
  uint uVar15;
  int local_res20;
  int local_58;
  
  local_res20 = 0;
  if (0 < this->ibheight) {
    do {
      iVar7 = this->ibwidth;
      local_58 = 0;
      if (0 < iVar7) {
        do {
          prVar5 = param_1->tempSpanColumns;
          iVar7 = iVar7 * local_res20 + local_58;
          if ((prVar5[iVar7].smin != 0) || (prVar5[iVar7].smax != 0)) {
            prVar9 = (rcSpanPool *)param_1->freelist;
            iVar7 = (this->ibminz + local_res20) * param_1->width + this->ibminx + local_58;
            if ((prVar9 == (rcSpanPool *)0x0) ||
               (*(longlong *)&prVar9->items[0].data.field_0x8 == 0)) {
              prVar8 = rcAlloc(0xc008,RC_ALLOC_PERM);
              prVar9 = (rcSpanPool *)0x0;
              if (prVar8 != (rcSpanPool *)0x0) {
                prVar8->next = (rcSpanPool *)0x0;
                prVar8->next = param_1->pools;
                prVar9 = (rcSpanPool *)param_1->freelist;
                param_1->pools = prVar8;
                prVar11 = prVar8 + 1;
                do {
                  prVar11[-1].items[0x7ff].next = (rcSpan *)prVar9;
                  prVar9 = (rcSpanPool *)(prVar11[-1].items + 0x7ff);
                  prVar11 = prVar9;
                } while (prVar9 != (rcSpanPool *)prVar8->items);
                param_1->freelist = (rcSpan *)prVar9;
                goto LAB_1446b3608;
              }
            }
            else {
LAB_1446b3608:
              param_1->freelist = *(rcSpan **)&prVar9->items[0].data.field_0x8;
            }
            *(undefined8 *)&prVar9->items[0].data.field_0x8 = 0;
            *(uint *)&prVar9->next =
                 *(uint *)&prVar9->next ^ (prVar9.smin ^ prVar5[iVar7].smin) & 0x1fffffff;
            puVar1 = &((rcSpanData *)&prVar9->next)->field_0x4;
            *(uint *)puVar1 =
                 *(uint *)puVar1 ^
                 (((rcSpanData *)&prVar9->next)->smax ^ prVar5[iVar7].smax) & 0x1fffffff;
            *(uint *)&prVar9->items[0].data =
                 *(uint *)&prVar9->items[0].data ^
                 (prVar5[iVar7].area ^ prVar9->items[0].smin) & 0x3f;
            prVar13 = param_1->spans[iVar7];
            if (prVar13 == (rcSpan *)0x0) {
              param_1->spans[iVar7] = (rcSpan *)prVar9;
            }
            else {
              prVar12 = (rcSpan *)0x0;
              do {
                uVar10 = prVar13.smin;
                if (((rcSpanData *)&prVar9->next)->smax < uVar10) break;
                uVar15 = (prVar13->data).smax;
                if (uVar15 < prVar9.smin) {
                  prVar14 = prVar13->next;
                  prVar12 = prVar13;
                }
                else {
                  mergeSpanData((rcSpanData *)prVar9,uVar10,uVar15,(prVar13->data).area,(int)param_2
                               );
                  prVar14 = prVar13->next;
                  prVar13->next = param_1->freelist;
                  param_1->freelist = prVar13;
                  if (prVar12 == (rcSpan *)0x0) {
                    param_1->spans[iVar7] = prVar14;
                  }
                  else {
                    prVar12->next = prVar14;
                  }
                }
                prVar13 = prVar14;
              } while (prVar14 != (rcSpan *)0x0);
              if (prVar12 == (rcSpan *)0x0) {
                *(rcSpan **)&prVar9->items[0].data.field_0x8 = param_1->spans[iVar7];
                param_1->spans[iVar7] = (rcSpan *)prVar9;
              }
              else {
                *(rcSpan **)&prVar9->items[0].data.field_0x8 = prVar12->next;
                prVar12->next = (rcSpan *)prVar9;
              }
            }
          }
          iVar7 = this->ibwidth;
          local_58 = local_58 + 1;
        } while (local_58 < iVar7);
      }
      local_res20 = local_res20 + 1;
    } while (local_res20 < this->ibheight);
  }
  return;
}

// addEdge @ 1446b3780

int __cdecl
addEdge(rcContext *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6,int param_7
       ,int param_8)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = *param_3;
  if (param_4 <= iVar1) {
    rcContext::log(param_1,RC_LOG_ERROR,"addEdge: Too many edges (%d/%d).");
    return -1;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = param_2 + 1;
    do {
      if (((piVar2[-1] == param_5) && (*piVar2 == param_6)) ||
         ((piVar2[-1] == param_6 && (*piVar2 == param_5)))) {
        if (iVar3 != -1) {
          return -1;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar3 < iVar1);
  }
  lVar4 = (longlong)(iVar1 * 4);
  param_2[lVar4 + 2] = param_7;
  param_2[lVar4 + 3] = param_8;
  param_2[lVar4] = param_5;
  param_2[lVar4 + 1] = param_6;
  iVar1 = *param_3;
  *param_3 = iVar1 + 1;
  return iVar1;
}

// addSpan @ 1446b3840

void __cdecl
addSpan(rcHeightfield *param_1,int param_2,int param_3,uint param_4,uint param_5,uchar param_6,
       int param_7)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  rcSpanPool *prVar3;
  rcSpanPool *prVar4;
  uint uVar5;
  rcSpanPool *prVar6;
  rcSpanPool *prVar7;
  int iVar8;
  uint uVar9;
  
  prVar4 = (rcSpanPool *)param_1->freelist;
  prVar7 = (rcSpanPool *)0x0;
  iVar8 = param_3 * param_1->width + param_2;
  if ((prVar4 == (rcSpanPool *)0x0) || (*(longlong *)&prVar4->items[0].data.field_0x8 == 0)) {
    prVar3 = rcAlloc(0xc008,RC_ALLOC_PERM);
    prVar4 = prVar7;
    if (prVar3 == (rcSpanPool *)0x0) goto LAB_1446b38cc;
    prVar3->next = (rcSpanPool *)0x0;
    prVar3->next = param_1->pools;
    prVar4 = (rcSpanPool *)param_1->freelist;
    param_1->pools = prVar3;
    prVar6 = prVar3 + 1;
    do {
      prVar6[-1].items[0x7ff].next = (rcSpan *)prVar4;
      prVar4 = (rcSpanPool *)(prVar6[-1].items + 0x7ff);
      prVar6 = prVar4;
    } while (prVar4 != (rcSpanPool *)prVar3->items);
    param_1->freelist = (rcSpan *)prVar4;
  }
  param_1->freelist = *(rcSpan **)&prVar4->items[0].data.field_0x8;
LAB_1446b38cc:
  *(undefined8 *)&prVar4->items[0].data.field_0x8 = 0;
  *(uint *)&prVar4->next = *(uint *)&prVar4->next ^ (prVar4.smin ^ param_4) & 0x1fffffff;
  puVar1 = &((rcSpanData *)&prVar4->next)->field_0x4;
  *(uint *)puVar1 = *(uint *)puVar1 ^ (((rcSpanData *)&prVar4->next)->smax ^ param_5) & 0x1fffffff;
  *(uint *)&prVar4->items[0].data =
       *(uint *)&prVar4->items[0].data ^ ((uint)param_6 ^ prVar4->items[0].smin) & 0x3f;
  prVar3 = (rcSpanPool *)param_1->spans[iVar8];
  if (prVar3 == (rcSpanPool *)0x0) {
    param_1->spans[iVar8] = (rcSpan *)prVar4;
  }
  else {
    do {
      uVar5 = prVar3.smin;
      if (((rcSpanData *)&prVar4->next)->smax < uVar5) break;
      uVar9 = ((rcSpanData *)&prVar3->next)->smax;
      if (uVar9 < prVar4.smin) {
        prVar6 = *(rcSpanPool **)&prVar3->items[0].data.field_0x8;
        prVar7 = prVar3;
      }
      else {
        mergeSpanData((rcSpanData *)prVar4,uVar5,uVar9,*(byte *)&prVar3->items[0].data & 0x3f,
                      param_7);
        prVar6 = *(rcSpanPool **)&prVar3->items[0].data.field_0x8;
        *(rcSpan **)&prVar3->items[0].data.field_0x8 = param_1->freelist;
        param_1->freelist = (rcSpan *)prVar3;
        if (prVar7 == (rcSpanPool *)0x0) {
          param_1->spans[iVar8] = (rcSpan *)prVar6;
        }
        else {
          *(rcSpanPool **)&prVar7->items[0].data.field_0x8 = prVar6;
        }
      }
      prVar3 = prVar6;
    } while (prVar6 != (rcSpanPool *)0x0);
    if (prVar7 == (rcSpanPool *)0x0) {
      *(rcSpan **)&prVar4->items[0].data.field_0x8 = param_1->spans[iVar8];
      param_1->spans[iVar8] = (rcSpan *)prVar4;
    }
    else {
      *(undefined8 *)&prVar4->items[0].data.field_0x8 =
           *(undefined8 *)&prVar7->items[0].data.field_0x8;
      *(rcSpanPool **)&prVar7->items[0].data.field_0x8 = prVar4;
    }
  }
  return;
}

// addSpan @ 1446b39f0

void __thiscall
AddSpanInTempColumns::addSpan
          (AddSpanInTempColumns *this,rcHeightfield *param_1,int param_2,int param_3,uint param_4,
          uint param_5,uchar param_6,int param_7)

{
  rcSpanData *prVar1;
  rcSpanData *prVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_2 - this->ibminx;
  if ((((-1 < iVar5) && (iVar6 = param_3 - this->ibminz, -1 < iVar6)) && (iVar5 < this->ibwidth)) &&
     (iVar6 < this->ibheight)) {
    iVar5 = this->ibwidth * iVar6 + iVar5;
    prVar1 = param_1->tempSpanColumns + iVar5;
    uVar3 = *(undefined4 *)prVar1;
    prVar2 = param_1->tempSpanColumns + iVar5;
    if ((((undefined4 *)prVar1)->smin == 0) &&
       (uVar4 = *(undefined4 *)&prVar2->field_0x4, ZPULL(uVar4,0,0x1d) == 0)) {
      *(uint *)prVar2 = (prVar1->smin ^ param_4) & 0x1fffffff ^ uVar3;
      *(uint *)&prVar2->field_0x4 = (prVar2->smax ^ param_5) & 0x1fffffff ^ uVar4;
      *(uint *)&prVar2->field_0x8 =
           *(uint *)&prVar2->field_0x8 ^ ((uint)param_6 ^ prVar2->area) & 0x3f;
      return;
    }
    mergeSpanData(prVar2,param_4,param_5,param_6,param_7);
    return;
  }
  if (this->ctx != (rcContext *)0x0) {
    rcContext::log(this->ctx,RC_LOG_WARNING,
                   "rcRasterizeTriangles trying to rasterize a triangle as filled convex but some spans are outside of the provided bounding box. Those spans will be skipped."
                  );
    return;
  }
  return;
}

// addVertex @ 1446b3ac0

ushort __cdecl
addVertex(ushort param_1,ushort param_2,ushort param_3,ushort *param_4,int *param_5,int *param_6,
         int *param_7)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = (uint)param_3 * 799 + (uint)param_1 * 0x343 & 0xfff;
  for (uVar1 = param_5[uVar5]; uVar1 != 0xffffffff; uVar1 = param_6[(int)uVar1]) {
    uVar2 = (ulonglong)uVar1;
    lVar4 = (longlong)(int)(uVar1 * 3);
    if (param_4[lVar4] == param_1) {
      iVar3 = -((uint)param_4[lVar4 + 1] - (uint)param_2);
      if (iVar3 < 0) {
        iVar3 = (uint)param_4[lVar4 + 1] - (uint)param_2;
      }
      if ((iVar3 < 3) && (param_4[lVar4 + 2] == param_3)) goto LAB_1446b3b73;
    }
  }
  iVar3 = *param_7;
  uVar2 = (ulonglong)iVar3;
  *param_7 = iVar3 + 1;
  lVar4 = (longlong)(iVar3 * 3);
  param_4[lVar4] = param_1;
  param_4[lVar4 + 1] = param_2;
  param_4[lVar4 + 2] = param_3;
  param_6[uVar2] = param_5[uVar5];
  param_5[uVar5] = iVar3;
LAB_1446b3b73:
  return (ushort)uVar2;
}

// between @ 1446b3b90

bool __cdecl between(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar1 = param_1[2];
  iVar2 = param_2[2];
  iVar3 = *param_1;
  iVar4 = *param_3;
  iVar5 = param_3[2];
  iVar6 = *param_2;
  if ((iVar6 - iVar3) * (iVar5 - iVar1) == (iVar4 - iVar3) * (iVar2 - iVar1)) {
    if (iVar3 == iVar6) {
      if (iVar1 <= iVar5) {
        if (iVar5 <= iVar2) {
          return true;
        }
        if (iVar1 < iVar5) {
          return false;
        }
      }
      bVar7 = SBORROW4(iVar5,iVar2);
      iVar4 = iVar5 - iVar2;
    }
    else {
      if (iVar3 <= iVar4) {
        if (iVar4 <= iVar6) {
          return true;
        }
        if (iVar3 < iVar4) {
          return false;
        }
      }
      bVar7 = SBORROW4(iVar4,iVar6);
      iVar4 = iVar4 - iVar6;
    }
    if (bVar7 == iVar4 < 0) {
      return true;
    }
  }
  return false;
}

// boxBlur @ 1446b3c20

ushort * __cdecl boxBlur(rcCompactHeightfield *param_1,int param_2,ushort *param_3,ushort *param_4)

{
  int iVar1;
  int iVar2;
  rcCompactSpan *prVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ushort uVar15;
  int iVar16;
  uint uVar17;
  ushort *puVar18;
  int iVar19;
  
  iVar1 = param_1->height;
  iVar2 = param_1->width;
  iVar12 = 0;
  if (0 < iVar1) {
    do {
      iVar19 = 0;
      if (0 < iVar2) {
        iVar4 = iVar12 * iVar2;
        do {
          uVar5 = (uint)param_1->cells[iVar4 + iVar19] & 0xffffff;
          uVar11 = (ulonglong)uVar5;
          uVar7 = (ulonglong)(uVar5 + ((uint)param_1->cells[iVar4 + iVar19] >> 0x18));
          if (uVar11 < uVar7) {
            lVar14 = uVar11 * 0xc;
            puVar18 = param_4 + uVar11;
            lVar8 = uVar7 - uVar11;
            do {
              uVar15 = *(ushort *)(((longlong)param_3 - (longlong)param_4) + (longlong)puVar18);
              uVar5 = (uint)uVar15;
              prVar3 = param_1->spans;
              if (param_2 * 2 < (int)(uint)uVar15) {
                uVar10 = *(uint *)((longlong)&prVar3->con + lVar14);
                uVar17 = (uint)uVar15;
                if ((uVar10 & 0xff) == 0xff) {
                  iVar6 = uVar5 * 3;
                }
                else {
                  uVar9 = ((uint)param_1->cells[iVar4 + iVar19 + -1] & 0xffffff) + (uVar10 & 0xff);
                  uVar13 = (uint)*(byte *)((longlong)&prVar3[uVar9].con + 1);
                  if (uVar13 == 0xff) {
                    iVar6 = uVar5 + param_3[uVar9] + uVar17;
                  }
                  else {
                    iVar6 = uVar5 + param_3[uVar9] +
                            (uint)param_3[((uint)param_1->cells[(iVar12 + 1) * iVar2 + iVar19 + -1]
                                          & 0xffffff) + uVar13];
                  }
                }
                uVar9 = uVar10 >> 8 & 0xff;
                if (uVar9 == 0xff) {
                  iVar6 = iVar6 + uVar5 * 2;
                }
                else {
                  iVar16 = (iVar12 + 1) * iVar2;
                  uVar9 = ((uint)param_1->cells[iVar16 + iVar19] & 0xffffff) + uVar9;
                  uVar13 = (uint)(byte)*(undefined2 *)((longlong)&prVar3[uVar9].con + 2);
                  if (uVar13 == 0xff) {
                    iVar6 = iVar6 + (uint)param_3[uVar9] + uVar17;
                  }
                  else {
                    iVar6 = iVar6 + (uint)param_3[uVar9] +
                            (uint)param_3[((uint)param_1->cells[iVar16 + 1 + iVar19] & 0xffffff) +
                                          uVar13];
                  }
                }
                uVar9 = uVar10 >> 0x10 & 0xff;
                if (uVar9 == 0xff) {
                  iVar6 = iVar6 + uVar5 * 2;
                }
                else {
                  uVar9 = ((uint)param_1->cells[iVar4 + iVar19 + 1] & 0xffffff) + uVar9;
                  uVar13 = (uint)*(byte *)((longlong)&prVar3[uVar9].con + 3);
                  if (uVar13 == 0xff) {
                    iVar6 = iVar6 + (uint)param_3[uVar9] + uVar17;
                  }
                  else {
                    iVar6 = iVar6 + (uint)param_3[uVar9] +
                            (uint)param_3[((uint)param_1->cells[(iVar12 + -1) * iVar2 + iVar19 + 1]
                                          & 0xffffff) + uVar13];
                  }
                }
                if (uVar10 >> 0x18 == 0xff) {
                  iVar6 = iVar6 + uVar5 * 2;
                }
                else {
                  iVar16 = (iVar12 + -1) * iVar2;
                  uVar10 = ((uint)param_1->cells[iVar16 + iVar19] & 0xffffff) + (uVar10 >> 0x18);
                  uVar17 = prVar3[uVar10].con & 0xff;
                  if (uVar17 != 0xff) {
                    uVar5 = (uint)param_3[((uint)param_1->cells[iVar16 + -1 + iVar19] & 0xffffff) +
                                          uVar17];
                  }
                  iVar6 = iVar6 + (uint)param_3[uVar10] + uVar5;
                }
                uVar15 = (ushort)((iVar6 + 5U) / 9);
              }
              lVar14 = lVar14 + 0xc;
              *puVar18 = uVar15;
              puVar18 = puVar18 + 1;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < iVar2);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar1);
  }
  return param_4;
}

// buildMeshAdjacency @ 1446b3fa0

bool __cdecl buildMeshAdjacency(ushort *param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  undefined2 *puVar3;
  void *pvVar4;
  ushort uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ushort *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  uVar10 = (ulonglong)param_3;
  puVar3 = rcAlloc((param_2 * param_4 + param_3) * 2,RC_ALLOC_TEMP);
  if (puVar3 == (undefined2 *)0x0) {
    return false;
  }
  uVar14 = 0;
  pvVar4 = rcAlloc(param_2 * param_4 * 0xc,RC_ALLOC_TEMP);
  if (pvVar4 == (void *)0x0) {
    rcFree(puVar3);
    bVar2 = false;
  }
  else {
    if (0 < param_3) {
      puVar11 = puVar3;
      for (uVar9 = uVar10 & 0x7fffffffffffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar11 = 0xffff;
        puVar11 = puVar11 + 1;
      }
    }
    iVar13 = 0;
    if (0 < param_2) {
      puVar8 = param_1;
      do {
        uVar9 = 0;
        if (0 < param_4) {
          do {
            uVar1 = puVar8[uVar9];
            if (uVar1 == 0xffff) break;
            uVar12 = (int)uVar9 + 1;
            if ((param_4 <= (int)uVar12) || (uVar5 = puVar8[uVar9 + 1], uVar5 == 0xffff)) {
              uVar5 = *puVar8;
            }
            if (uVar1 < uVar5) {
              lVar6 = (longlong)(int)uVar14;
              *(ushort *)((longlong)pvVar4 + lVar6 * 0xc + 2) = uVar5;
              *(ushort *)((longlong)pvVar4 + lVar6 * 0xc) = uVar1;
              *(short *)((longlong)pvVar4 + lVar6 * 0xc + 8) = (short)iVar13;
              *(short *)((longlong)pvVar4 + lVar6 * 0xc + 4) = (short)uVar9;
              *(short *)((longlong)pvVar4 + lVar6 * 0xc + 10) = (short)iVar13;
              *(undefined2 *)((longlong)pvVar4 + lVar6 * 0xc + 6) = 0;
              puVar3[uVar10 + lVar6] = puVar3[uVar1];
              puVar3[uVar1] = (short)uVar14;
              uVar14 = uVar14 + 1;
            }
            uVar9 = (ulonglong)uVar12;
          } while ((int)uVar12 < param_4);
        }
        iVar13 = iVar13 + 1;
        puVar8 = puVar8 + param_4 * 2;
      } while (iVar13 < param_2);
      iVar13 = 0;
      puVar8 = param_1;
      do {
        uVar9 = 0;
        if (0 < param_4) {
          do {
            uVar1 = puVar8[uVar9];
            if (uVar1 == 0xffff) break;
            if ((param_4 <= (int)uVar9 + 1) || (uVar5 = puVar8[uVar9 + 1], uVar5 == 0xffff)) {
              uVar5 = *puVar8;
            }
            if (uVar5 < uVar1) {
              uVar5 = puVar3[uVar5];
              while (uVar5 != 0xffff) {
                uVar7 = (ulonglong)uVar5;
                if ((*(ushort *)((longlong)pvVar4 + uVar7 * 0xc + 2) == uVar1) &&
                   (*(short *)((longlong)pvVar4 + uVar7 * 0xc + 8) ==
                    *(short *)((longlong)pvVar4 + uVar7 * 0xc + 10))) {
                  *(short *)((longlong)pvVar4 + uVar7 * 0xc + 10) = (short)iVar13;
                  *(short *)((longlong)pvVar4 + uVar7 * 0xc + 6) = (short)uVar9;
                  break;
                }
                uVar5 = puVar3[uVar10 + uVar7];
              }
            }
            uVar12 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar12;
          } while ((int)uVar12 < param_4);
        }
        iVar13 = iVar13 + 1;
        puVar8 = puVar8 + param_4 * 2;
      } while (iVar13 < param_2);
      if (0 < (int)uVar14) {
        puVar8 = (ushort *)((longlong)pvVar4 + 8);
        uVar10 = (ulonglong)uVar14;
        do {
          uVar1 = puVar8[1];
          if (*puVar8 != uVar1) {
            param_1[(longlong)(int)((uint)puVar8[-2] + param_4) +
                    (longlong)(int)((uint)*puVar8 * param_4 * 2)] = uVar1;
            param_1[(longlong)(int)((uint)puVar8[-1] + param_4) +
                    (longlong)(int)((uint)uVar1 * param_4 * 2)] = *puVar8;
          }
          puVar8 = puVar8 + 6;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    rcFree(puVar3);
    rcFree(pvVar4);
    bVar2 = true;
  }
  return bVar2;
}

// buildPolyDetail @ 1446b4260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
buildPolyDetail(rcContext *param_1,double *param_2,int param_3,double param_4,double param_5,
               rcCompactHeightfield *param_6,rcHeightPatch *param_7,double *param_8,int *param_9,
               rcIntArray *param_10,rcIntArray *param_11,rcIntArray *param_12)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ushort uVar9;
  uint uVar10;
  undefined4 extraout_EAX;
  double *pdVar11;
  double *extraout_RAX;
  double *pdVar12;
  longlong lVar13;
  double *pdVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  short sVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int *piVar24;
  int iVar25;
  longlong lVar26;
  int *piVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auStackY_788 [32];
  int local_744;
  double local_740;
  double local_738;
  int local_720;
  double local_718;
  double local_6c0;
  double dStack_6b8;
  longlong local_6b0;
  undefined8 local_6a0;
  int local_698 [2];
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  double local_618 [100];
  int local_2f8 [128];
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_788;
  lVar13 = 0;
  lVar26 = (longlong)param_3;
  lVar17 = (longlong)param_2 - (longlong)param_8;
  *param_9 = 0;
  local_744 = 0;
  if (3 < lVar26) {
    pdVar12 = param_8 + 4;
    lVar21 = (lVar26 - 4U >> 2) + 1;
    lVar13 = lVar21 * 4;
    do {
      pdVar12[-4] = *(double *)((longlong)pdVar12 + lVar17 + -0x20);
      pdVar12[-3] = *(double *)((longlong)pdVar12 + lVar17 + -0x18);
      pdVar12[-2] = *(double *)((longlong)pdVar12 + lVar17 + -0x10);
      pdVar12[-1] = *(double *)((longlong)pdVar12 + lVar17 + -8);
      *pdVar12 = *(double *)((longlong)pdVar12 + lVar17);
      pdVar12[1] = *(double *)((longlong)pdVar12 + lVar17 + 8);
      pdVar12[2] = *(double *)((longlong)pdVar12 + lVar17 + 0x10);
      pdVar12[3] = *(double *)((longlong)pdVar12 + lVar17 + 0x18);
      pdVar12[4] = *(double *)((longlong)pdVar12 + lVar17 + 0x20);
      pdVar12[5] = *(double *)((longlong)pdVar12 + lVar17 + 0x28);
      pdVar12[6] = *(double *)((longlong)pdVar12 + lVar17 + 0x30);
      pdVar12[7] = *(double *)((longlong)pdVar12 + lVar17 + 0x38);
      pdVar12 = pdVar12 + 0xc;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  if (lVar13 < lVar26) {
    lVar21 = lVar26 - lVar13;
    pdVar12 = param_8 + lVar13 * 3 + 1;
    do {
      pdVar12[-1] = *(double *)(lVar17 + -8 + (longlong)pdVar12);
      *pdVar12 = *(double *)(lVar17 + (longlong)pdVar12);
      pdVar12[1] = *(double *)(lVar17 + 8 + (longlong)pdVar12);
      pdVar12 = pdVar12 + 3;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  *param_9 = param_3;
  uVar44 = SUB84(__real_3ff0000000000000,0);
  uVar46 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar1 = param_6->cs;
  local_6a0 = __real_3ff0000000000000 / dVar1;
  if (0.0 < param_4) {
    if (0 < param_3) {
      dVar51 = __real_3ff0000000000000 / param_4;
      lVar17 = 0;
      lVar13 = (longlong)(param_3 + -1) * 0x18;
      pdVar12 = param_2;
      local_720 = param_3 + -1;
      local_6b0 = lVar26;
      iVar30 = 0;
      do {
        dVar32 = local_6a0;
        dVar50 = *pdVar12;
        pdVar14 = (double *)(lVar13 + (longlong)param_2);
        dVar35 = *pdVar14;
        bVar4 = false;
        pdVar11 = pdVar12;
        dVar37 = dVar35;
        if (__real_3eb0c6f7a0000000 <=
            (double)CONCAT44((uint)((ulonglong)(dVar35 - dVar50) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar35 - dVar50,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                            )) {
          if (dVar50 < dVar35) {
            bVar4 = true;
            pdVar11 = pdVar14;
            pdVar14 = pdVar12;
            dVar37 = dVar50;
            dVar50 = dVar35;
          }
        }
        else {
          dVar33 = pdVar14[2];
          bVar3 = dVar33 != pdVar12[2];
          bVar4 = pdVar12[2] <= dVar33;
          if (bVar4 && bVar3) {
            pdVar11 = pdVar14;
            pdVar14 = pdVar12;
            dVar37 = dVar50;
            dVar50 = dVar35;
          }
          bVar4 = bVar4 && bVar3;
        }
        dVar50 = dVar50 - dVar37;
        dVar33 = pdVar11[2] - pdVar14[2];
        dVar35 = pdVar11[1];
        dVar37 = pdVar14[1];
        auVar36._0_8_ = rcSqrt(dVar33 * dVar33 + dVar50 * dVar50);
        auVar36._0_8_ = auVar36._0_8_ * dVar51;
        lVar13 = (longlong)auVar36._0_8_;
        if ((lVar13 != -0x8000000000000000) && ((double)lVar13 != auVar36._0_8_)) {
          auVar36._8_8_ = auVar36._0_8_;
          uVar10 = movmskpd(0,auVar36);
          auVar36._0_8_ = (double)(longlong)(lVar13 - (ulonglong)(uVar10 & 1));
        }
        iVar15 = (int)auVar36._0_8_ + 1;
        if (0x1f < iVar15) {
          iVar15 = 0x1f;
        }
        iVar19 = 0x7e - *param_9;
        if (*param_9 + iVar15 < 0x7f) {
          iVar19 = iVar15;
        }
        iVar15 = 0;
        if (-1 < iVar19) {
          auVar36._0_8_ = *pdVar14;
          dVar52 = pdVar14[1];
          dVar34 = pdVar14[2];
          pdVar14 = local_618 + 1;
          dVar41 = param_6->ch;
          do {
            dVar38 = (double)iVar15 * ((double)CONCAT44(uVar46,uVar44) / (double)iVar19);
            dVar31 = dVar38 * dVar50 + auVar36._0_8_;
            dVar40 = dVar38 * dVar33 + dVar34;
            pdVar14[-1] = dVar31;
            pdVar14[1] = dVar40;
            uVar9 = getHeight(dVar31,dVar38 * (dVar35 - dVar37) + dVar52,dVar40,dVar1,dVar32,dVar41,
                              param_7);
            iVar15 = iVar15 + 1;
            *pdVar14 = (double)uVar9 * dVar41;
            pdVar14 = pdVar14 + 3;
          } while (iVar15 <= iVar19);
        }
        local_698[1] = iVar19;
        iVar19 = 2;
        iVar15 = 2;
        lVar21 = 2;
        local_698[0] = 0;
        local_620 = 0;
        iVar29 = 0;
        lVar13 = 0;
        iVar28 = 1;
        local_690 = 0;
        uStack_688 = 0;
        local_680 = 0;
        uStack_678 = 0;
        local_670 = 0;
        uStack_668 = 0;
        local_660 = 0;
        uStack_658 = 0;
        local_650 = 0;
        uStack_648 = 0;
        local_640 = 0;
        uStack_638 = 0;
        local_630 = 0;
        uStack_628 = 0;
        do {
          iVar20 = local_698[lVar13];
          dVar50 = 0.0;
          iVar2 = local_698[lVar13 + 1];
          iVar25 = -1;
          lVar22 = (longlong)(iVar20 * 3);
          iVar16 = iVar20 + 1;
          lVar23 = (longlong)(iVar2 * 3);
          if (iVar16 < iVar2) {
            dVar35 = local_618[lVar22];
            dVar37 = local_618[lVar22 + 1];
            dVar32 = local_618[lVar22 + 2];
            lVar22 = (longlong)iVar16;
            if (iVar2 - iVar16 < 4) {
LAB_1446b4a72:
              dVar34 = local_618[lVar23] - dVar35;
              auVar36._0_8_ = local_618[lVar23 + 1] - dVar37;
              dVar52 = local_618[lVar23 + 2] - dVar32;
              pdVar14 = local_618 + lVar22 * 3 + 2;
              dVar33 = auVar36._0_8_ * auVar36._0_8_ + dVar34 * dVar34 + dVar52 * dVar52;
              do {
                dVar41 = (pdVar14[-2] - dVar35) * dVar34 + (pdVar14[-1] - dVar37) * auVar36._0_8_ +
                         (*pdVar14 - dVar32) * dVar52;
                if (0.0 < dVar33) {
                  dVar41 = dVar41 / dVar33;
                }
                if (0.0 <= dVar41) {
                  if (__real_3ff0000000000000 <= dVar41) {
                    dVar41 = __real_3ff0000000000000;
                  }
                }
                else {
                  dVar41 = 0.0;
                }
                dVar38 = (dVar41 * auVar36._0_8_ + dVar37) - pdVar14[-1];
                dVar31 = (dVar41 * dVar34 + dVar35) - pdVar14[-2];
                dVar41 = (dVar41 * dVar52 + dVar32) - *pdVar14;
                dVar41 = dVar38 * dVar38 + dVar31 * dVar31 + dVar41 * dVar41;
                if (dVar50 < dVar41) {
                  dVar50 = dVar41;
                  iVar25 = iVar16;
                }
                pdVar14 = pdVar14 + 3;
                iVar16 = iVar16 + 1;
              } while (iVar16 < iVar2);
            }
            else {
              auVar36._0_8_ = local_618[lVar23] - dVar35;
              dVar52 = local_618[lVar23 + 1] - dVar37;
              dVar34 = local_618[lVar23 + 2] - dVar32;
              pdVar14 = local_618 + lVar22 * 3 + 2;
              iVar20 = iVar20 + 3;
              lVar22 = lVar22 + (ulonglong)((((iVar2 + -3) - iVar16) - 1U >> 2) + 1) * 4;
              dVar33 = dVar52 * dVar52 + auVar36._0_8_ * auVar36._0_8_ + dVar34 * dVar34;
              do {
                dVar41 = (pdVar14[-2] - dVar35) * auVar36._0_8_ + (pdVar14[-1] - dVar37) * dVar52 +
                         (*pdVar14 - dVar32) * dVar34;
                if (0.0 < dVar33) {
                  dVar41 = dVar41 / dVar33;
                }
                if (0.0 <= dVar41) {
                  if (__real_3ff0000000000000 <= dVar41) {
                    dVar41 = __real_3ff0000000000000;
                  }
                }
                else {
                  dVar41 = 0.0;
                }
                dVar38 = (dVar41 * dVar52 + dVar37) - pdVar14[-1];
                dVar31 = (dVar41 * auVar36._0_8_ + dVar35) - pdVar14[-2];
                dVar41 = (dVar41 * dVar34 + dVar32) - *pdVar14;
                dVar41 = dVar38 * dVar38 + dVar31 * dVar31 + dVar41 * dVar41;
                if (dVar50 < dVar41) {
                  dVar50 = dVar41;
                  iVar25 = iVar16;
                }
                dVar41 = (pdVar14[1] - dVar35) * auVar36._0_8_ + (pdVar14[2] - dVar37) * dVar52 +
                         (pdVar14[3] - dVar32) * dVar34;
                if (0.0 < dVar33) {
                  dVar41 = dVar41 / dVar33;
                }
                if (0.0 <= dVar41) {
                  if (__real_3ff0000000000000 <= dVar41) {
                    dVar41 = __real_3ff0000000000000;
                  }
                }
                else {
                  dVar41 = 0.0;
                }
                dVar38 = (dVar41 * dVar52 + dVar37) - pdVar14[2];
                dVar31 = (dVar41 * auVar36._0_8_ + dVar35) - pdVar14[1];
                dVar41 = (dVar41 * dVar34 + dVar32) - pdVar14[3];
                dVar41 = dVar38 * dVar38 + dVar31 * dVar31 + dVar41 * dVar41;
                if (dVar50 < dVar41) {
                  iVar25 = iVar20 + -1;
                  dVar50 = dVar41;
                }
                dVar41 = (pdVar14[4] - dVar35) * auVar36._0_8_ + (pdVar14[5] - dVar37) * dVar52 +
                         (pdVar14[6] - dVar32) * dVar34;
                if (0.0 < dVar33) {
                  dVar41 = dVar41 / dVar33;
                }
                if (0.0 <= dVar41) {
                  if (__real_3ff0000000000000 <= dVar41) {
                    dVar41 = __real_3ff0000000000000;
                  }
                }
                else {
                  dVar41 = 0.0;
                }
                dVar38 = (dVar41 * dVar52 + dVar37) - pdVar14[5];
                dVar31 = (dVar41 * auVar36._0_8_ + dVar35) - pdVar14[4];
                dVar41 = (dVar41 * dVar34 + dVar32) - pdVar14[6];
                dVar41 = dVar38 * dVar38 + dVar31 * dVar31 + dVar41 * dVar41;
                if (dVar50 < dVar41) {
                  dVar50 = dVar41;
                  iVar25 = iVar20;
                }
                dVar41 = (pdVar14[7] - dVar35) * auVar36._0_8_ + (pdVar14[8] - dVar37) * dVar52 +
                         (pdVar14[9] - dVar32) * dVar34;
                if (0.0 < dVar33) {
                  dVar41 = dVar41 / dVar33;
                }
                if (0.0 <= dVar41) {
                  if (__real_3ff0000000000000 <= dVar41) {
                    dVar41 = __real_3ff0000000000000;
                  }
                }
                else {
                  dVar41 = 0.0;
                }
                dVar38 = (dVar41 * dVar52 + dVar37) - pdVar14[8];
                dVar31 = (dVar41 * auVar36._0_8_ + dVar35) - pdVar14[7];
                dVar41 = (dVar41 * dVar34 + dVar32) - pdVar14[9];
                dVar41 = dVar38 * dVar38 + dVar31 * dVar31 + dVar41 * dVar41;
                if (dVar50 < dVar41) {
                  iVar25 = iVar20 + 1;
                  dVar50 = dVar41;
                }
                pdVar14 = pdVar14 + 0xc;
                iVar16 = iVar16 + 4;
                iVar20 = iVar20 + 4;
              } while (iVar16 < iVar2 + -3);
              if (iVar16 < iVar2) goto LAB_1446b4a72;
            }
            iVar19 = iVar15;
            if ((iVar25 == -1) || (lVar22 = lVar21, dVar50 <= param_5 * param_5))
            goto LAB_1446b4bbb;
            for (; lVar13 < lVar22; lVar22 = lVar22 + -1) {
              local_698[lVar22] = *(int *)((longlong)&local_6a0 + lVar22 * 4 + 4);
            }
            iVar28 = iVar28 + 1;
            iVar19 = iVar15 + 1;
            local_698[lVar13 + 1] = iVar25;
            lVar21 = lVar21 + 1;
            iVar15 = iVar19;
          }
          else {
LAB_1446b4bbb:
            iVar29 = iVar29 + 1;
            lVar13 = lVar13 + 1;
          }
        } while (iVar29 < iVar28);
        local_744 = local_744 + 1;
        local_2f8[lVar17] = local_720;
        lVar17 = lVar17 + 1;
        if (bVar4) {
          lVar13 = lVar21 + -2;
          if (3 < lVar13) {
            lVar22 = lVar13 * 4;
            lVar21 = (lVar21 - 6U >> 2) + 1;
            local_744 = local_744 + (int)lVar21 * 4;
            lVar13 = lVar13 + lVar21 * -4;
            piVar27 = (int *)((longlong)&local_6a0 + lVar22);
            do {
              lVar23 = (longlong)(piVar27[2] * 3);
              lVar22 = (longlong)(*param_9 * 3);
              param_8[lVar22] = local_618[lVar23];
              param_8[lVar22 + 1] = local_618[lVar23 + 1];
              param_8[lVar22 + 2] = local_618[lVar23 + 2];
              iVar15 = *param_9;
              local_2f8[lVar17] = iVar15;
              iVar15 = iVar15 + 1;
              iVar19 = piVar27[1];
              *param_9 = iVar15;
              lVar23 = (longlong)(iVar19 * 3);
              lVar22 = (longlong)(iVar15 * 3);
              param_8[lVar22] = local_618[lVar23];
              param_8[lVar22 + 1] = local_618[lVar23 + 1];
              param_8[lVar22 + 2] = local_618[lVar23 + 2];
              iVar15 = *param_9;
              local_2f8[lVar17 + 1] = iVar15;
              iVar15 = iVar15 + 1;
              iVar19 = *piVar27;
              *param_9 = iVar15;
              lVar23 = (longlong)(iVar19 * 3);
              lVar22 = (longlong)(iVar15 * 3);
              param_8[lVar22] = local_618[lVar23];
              param_8[lVar22 + 1] = local_618[lVar23 + 1];
              param_8[lVar22 + 2] = local_618[lVar23 + 2];
              iVar15 = *param_9;
              local_2f8[lVar17 + 2] = iVar15;
              iVar15 = iVar15 + 1;
              iVar19 = piVar27[-1];
              *param_9 = iVar15;
              lVar23 = (longlong)(iVar19 * 3);
              lVar22 = (longlong)(iVar15 * 3);
              param_8[lVar22] = local_618[lVar23];
              param_8[lVar22 + 1] = local_618[lVar23 + 1];
              param_8[lVar22 + 2] = local_618[lVar23 + 2];
              iVar15 = *param_9;
              local_2f8[lVar17 + 3] = iVar15;
              lVar17 = lVar17 + 4;
              *param_9 = iVar15 + 1;
              lVar21 = lVar21 + -1;
              piVar27 = piVar27 + -4;
            } while (lVar21 != 0);
          }
          if (0 < lVar13) {
            local_744 = local_744 + (int)lVar13;
            do {
              piVar27 = local_698 + lVar13;
              lVar13 = lVar13 + -1;
              lVar22 = (longlong)(*piVar27 * 3);
              lVar21 = (longlong)(*param_9 * 3);
              param_8[lVar21] = local_618[lVar22];
              param_8[lVar21 + 1] = local_618[lVar22 + 1];
              param_8[lVar21 + 2] = local_618[lVar22 + 2];
              iVar15 = *param_9;
              local_2f8[lVar17] = iVar15;
              lVar17 = lVar17 + 1;
              *param_9 = iVar15 + 1;
            } while (0 < lVar13);
          }
        }
        else {
          lVar21 = 1;
          lVar13 = (longlong)(iVar19 + -1);
          if (1 < lVar13) {
            if (4 < lVar13) {
              local_744 = local_744 + (int)(lVar13 - 5U >> 2) * 4 + 4;
              do {
                lVar23 = (longlong)(local_698[lVar21] * 3);
                lVar22 = (longlong)(*param_9 * 3);
                param_8[lVar22] = local_618[lVar23];
                param_8[lVar22 + 1] = local_618[lVar23 + 1];
                param_8[lVar22 + 2] = local_618[lVar23 + 2];
                iVar15 = *param_9;
                local_2f8[lVar17] = iVar15;
                iVar15 = iVar15 + 1;
                iVar19 = local_698[lVar21 + 1];
                *param_9 = iVar15;
                lVar23 = (longlong)(iVar19 * 3);
                lVar22 = (longlong)(iVar15 * 3);
                param_8[lVar22] = local_618[lVar23];
                param_8[lVar22 + 1] = local_618[lVar23 + 1];
                param_8[lVar22 + 2] = local_618[lVar23 + 2];
                iVar15 = *param_9;
                local_2f8[lVar17 + 1] = iVar15;
                iVar15 = iVar15 + 1;
                iVar19 = *(int *)((longlong)&local_690 + lVar21 * 4);
                *param_9 = iVar15;
                lVar23 = (longlong)(iVar19 * 3);
                lVar22 = (longlong)(iVar15 * 3);
                param_8[lVar22] = local_618[lVar23];
                param_8[lVar22 + 1] = local_618[lVar23 + 1];
                param_8[lVar22 + 2] = local_618[lVar23 + 2];
                iVar15 = *param_9;
                local_2f8[lVar17 + 2] = iVar15;
                iVar15 = iVar15 + 1;
                iVar19 = *(int *)((longlong)&local_690 + lVar21 * 4 + 4);
                *param_9 = iVar15;
                lVar21 = lVar21 + 4;
                lVar23 = (longlong)(iVar19 * 3);
                lVar22 = (longlong)(iVar15 * 3);
                param_8[lVar22] = local_618[lVar23];
                param_8[lVar22 + 1] = local_618[lVar23 + 1];
                param_8[lVar22 + 2] = local_618[lVar23 + 2];
                iVar15 = *param_9;
                local_2f8[lVar17 + 3] = iVar15;
                lVar17 = lVar17 + 4;
                *param_9 = iVar15 + 1;
              } while (lVar21 < lVar13 + -3);
            }
            if (lVar21 < lVar13) {
              lVar13 = lVar13 - lVar21;
              local_744 = local_744 + (int)lVar13;
              piVar27 = local_698 + lVar21;
              do {
                iVar15 = *piVar27;
                piVar27 = piVar27 + 1;
                lVar22 = (longlong)(iVar15 * 3);
                lVar21 = (longlong)(*param_9 * 3);
                param_8[lVar21] = local_618[lVar22];
                param_8[lVar21 + 1] = local_618[lVar22 + 1];
                param_8[lVar21 + 2] = local_618[lVar22 + 2];
                iVar15 = *param_9;
                local_2f8[lVar17] = iVar15;
                lVar17 = lVar17 + 1;
                *param_9 = iVar15 + 1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
          }
        }
        lVar13 = (longlong)pdVar12 - (longlong)param_2;
        local_6b0 = local_6b0 + -1;
        if (local_6b0 == 0) break;
        uVar44 = SUB84(__real_3ff0000000000000,0);
        uVar46 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        pdVar12 = pdVar12 + 3;
        local_720 = iVar30;
        iVar30 = iVar30 + 1;
      } while( true );
    }
  }
  iVar30 = 2;
  rcIntArray::resize(param_11,0);
  rcIntArray::resize(param_10,0);
  delaunayHull(param_1,*param_9,param_8,local_744,local_2f8,param_10,param_11);
  if (param_10->m_size == 0) {
    rcContext::log(param_1,RC_LOG_WARNING,
                   "buildPolyDetail: Could not triangulate polygon, adding default data.");
    if (*param_9 < 3) {
      return true;
    }
    do {
      rcIntArray::resize(param_10,param_10->m_size + 1);
      param_10->m_data[(longlong)param_10->m_size + -1] = 0;
      rcIntArray::resize(param_10,param_10->m_size + 1);
      param_10->m_data[(longlong)param_10->m_size + -1] = iVar30 + -1;
      rcIntArray::resize(param_10,param_10->m_size + 1);
      param_10->m_data[(longlong)param_10->m_size + -1] = iVar30;
      rcIntArray::resize(param_10,param_10->m_size + 1);
      iVar30 = iVar30 + 1;
      param_10->m_data[(longlong)param_10->m_size + -1] = 0;
    } while (iVar30 < *param_9);
    return true;
  }
  if (param_4 <= 0.0) goto LAB_1446b5e6a;
  local_738 = param_2[1];
  uVar53 = SUB84(*param_2,0);
  uVar54 = (undefined4)((ulonglong)*param_2 >> 0x20);
  uVar43 = SUB84(param_2[2],0);
  uVar45 = (undefined4)((ulonglong)param_2[2] >> 0x20);
  pdVar12 = extraout_RAX;
  uVar44 = uVar43;
  uVar46 = uVar45;
  uVar47 = uVar53;
  uVar48 = uVar54;
  local_740 = local_738;
  if (1 < lVar26) {
    lVar13 = 1;
    if (4 < lVar26) {
      pdVar12 = param_2 + 0xb;
      lVar17 = (lVar26 - 5U >> 2) + 1;
      lVar13 = lVar17 * 4 + 1;
      do {
        if (local_738 <= pdVar12[-7]) {
          local_738 = pdVar12[-7];
        }
        if (pdVar12[-7] <= local_740) {
          local_740 = pdVar12[-7];
        }
        dVar51 = pdVar12[-8];
        if (dVar51 <= (double)CONCAT44(uVar54,uVar53)) {
          uVar53 = SUB84(dVar51,0);
          uVar54 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        dVar51 = pdVar12[-6];
        if (dVar51 <= (double)CONCAT44(uVar46,uVar44)) {
          uVar44 = SUB84(dVar51,0);
          uVar46 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        dVar51 = pdVar12[-8];
        if ((double)CONCAT44(uVar48,uVar47) <= dVar51) {
          uVar47 = SUB84(dVar51,0);
          uVar48 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        dVar51 = pdVar12[-6];
        if ((double)CONCAT44(uVar45,uVar43) <= dVar51) {
          uVar43 = SUB84(dVar51,0);
          uVar45 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        if (local_738 <= pdVar12[-4]) {
          local_738 = pdVar12[-4];
        }
        if (pdVar12[-4] <= local_740) {
          local_740 = pdVar12[-4];
        }
        dVar51 = pdVar12[-5];
        if (dVar51 <= (double)CONCAT44(uVar54,uVar53)) {
          uVar53 = SUB84(dVar51,0);
          uVar54 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        dVar51 = pdVar12[-3];
        if (dVar51 <= (double)CONCAT44(uVar46,uVar44)) {
          uVar44 = SUB84(dVar51,0);
          uVar46 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        dVar51 = pdVar12[-5];
        if ((double)CONCAT44(uVar48,uVar47) <= dVar51) {
          uVar47 = SUB84(dVar51,0);
          uVar48 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        dVar51 = pdVar12[-3];
        if ((double)CONCAT44(uVar45,uVar43) <= dVar51) {
          uVar43 = SUB84(dVar51,0);
          uVar45 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        if (local_738 <= pdVar12[-1]) {
          local_738 = pdVar12[-1];
        }
        if (pdVar12[-1] <= local_740) {
          local_740 = pdVar12[-1];
        }
        dVar51 = pdVar12[-2];
        if (dVar51 <= (double)CONCAT44(uVar54,uVar53)) {
          uVar53 = SUB84(dVar51,0);
          uVar54 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        dVar51 = *pdVar12;
        if (dVar51 <= (double)CONCAT44(uVar46,uVar44)) {
          uVar44 = SUB84(dVar51,0);
          uVar46 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        dVar51 = pdVar12[-2];
        if ((double)CONCAT44(uVar48,uVar47) <= dVar51) {
          uVar47 = SUB84(dVar51,0);
          uVar48 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        dVar51 = *pdVar12;
        if ((double)CONCAT44(uVar45,uVar43) <= dVar51) {
          uVar43 = SUB84(dVar51,0);
          uVar45 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        if (local_738 <= pdVar12[2]) {
          local_738 = pdVar12[2];
        }
        if (pdVar12[2] <= local_740) {
          local_740 = pdVar12[2];
        }
        dVar51 = pdVar12[1];
        if (dVar51 <= (double)CONCAT44(uVar54,uVar53)) {
          uVar53 = SUB84(dVar51,0);
          uVar54 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        dVar51 = pdVar12[3];
        if (dVar51 <= (double)CONCAT44(uVar46,uVar44)) {
          uVar44 = SUB84(dVar51,0);
          uVar46 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        dVar51 = pdVar12[1];
        if ((double)CONCAT44(uVar48,uVar47) <= dVar51) {
          uVar47 = SUB84(dVar51,0);
          uVar48 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        dVar51 = pdVar12[3];
        if ((double)CONCAT44(uVar45,uVar43) <= dVar51) {
          uVar43 = SUB84(dVar51,0);
          uVar45 = (undefined4)((ulonglong)dVar51 >> 0x20);
        }
        pdVar12 = pdVar12 + 0xc;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      if (lVar26 <= lVar13) goto LAB_1446b524a;
    }
    pdVar12 = param_2 + lVar13 * 3 + 2;
    lVar13 = lVar26 - lVar13;
    do {
      if (pdVar12[-1] <= local_740) {
        local_740 = pdVar12[-1];
      }
      dVar51 = pdVar12[-2];
      if (dVar51 <= (double)CONCAT44(uVar54,uVar53)) {
        uVar53 = SUB84(dVar51,0);
        uVar54 = (undefined4)((ulonglong)dVar51 >> 0x20);
      }
      dVar51 = *pdVar12;
      if (dVar51 <= (double)CONCAT44(uVar46,uVar44)) {
        uVar44 = SUB84(dVar51,0);
        uVar46 = (undefined4)((ulonglong)dVar51 >> 0x20);
      }
      dVar51 = pdVar12[-2];
      if ((double)CONCAT44(uVar48,uVar47) <= dVar51) {
        uVar47 = SUB84(dVar51,0);
        uVar48 = (undefined4)((ulonglong)dVar51 >> 0x20);
      }
      if (local_738 <= pdVar12[-1]) {
        local_738 = pdVar12[-1];
      }
      dVar51 = *pdVar12;
      if ((double)CONCAT44(uVar45,uVar43) <= dVar51) {
        uVar43 = SUB84(dVar51,0);
        uVar45 = (undefined4)((ulonglong)dVar51 >> 0x20);
      }
      pdVar12 = pdVar12 + 3;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    pdVar12 = (double *)0x0;
  }
LAB_1446b524a:
  uVar10 = (uint)pdVar12;
  dVar50 = __real_3ff0000000000000 / param_4;
  dVar51 = (double)CONCAT44(uVar54,uVar53) * dVar50;
  lVar13 = (longlong)dVar51;
  if ((lVar13 != -0x8000000000000000) && ((double)lVar13 != dVar51)) {
    auVar6._8_4_ = SUB84(dVar51,0);
    auVar6._0_8_ = dVar51;
    auVar6._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
    uVar10 = movmskpd(uVar10,auVar6);
    uVar10 = uVar10 & 1;
    dVar51 = (double)(longlong)(lVar13 - (ulonglong)uVar10);
  }
  dVar35 = (double)CONCAT44(uVar48,uVar47) * dVar50;
  lVar13 = (longlong)dVar35;
  if ((lVar13 != -0x8000000000000000) && ((double)lVar13 != dVar35)) {
    auVar8._8_4_ = SUB84(dVar35,0);
    auVar8._0_8_ = dVar35;
    auVar8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    uVar10 = movmskpd(uVar10,auVar8);
    uVar10 = uVar10 & 1 ^ 1;
    dVar35 = (double)(longlong)(lVar13 + (ulonglong)uVar10);
  }
  dVar37 = (double)CONCAT44(uVar45,uVar43) * dVar50;
  lVar13 = (longlong)dVar37;
  if ((lVar13 != -0x8000000000000000) && ((double)lVar13 != dVar37)) {
    auVar5._8_4_ = SUB84(dVar37,0);
    auVar5._0_8_ = dVar37;
    auVar5._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    uVar10 = movmskpd(uVar10,auVar5);
    dVar37 = (double)(longlong)(lVar13 + (ulonglong)(uVar10 & 1 ^ 1));
  }
  rcIntArray::resize(param_12,0);
  dVar50 = (double)CONCAT44(uVar46,uVar44) * dVar50;
  lVar13 = (longlong)dVar50;
  if ((lVar13 != -0x8000000000000000) && ((double)lVar13 != dVar50)) {
    auVar7._8_4_ = SUB84(dVar50,0);
    auVar7._0_8_ = dVar50;
    auVar7._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    uVar10 = movmskpd(extraout_EAX,auVar7);
    dVar50 = (double)(longlong)(lVar13 - (ulonglong)(uVar10 & 1));
  }
  iVar30 = (int)dVar50;
  dVar50 = __real_7fefffffffffffff;
  for (; iVar30 < (int)dVar37; iVar30 = iVar30 + 1) {
    if ((int)dVar51 < (int)dVar35) {
      dVar32 = (local_738 + local_740) * __real_3fe0000000000000;
      auVar36._0_8_ = (double)iVar30 * param_4;
      dVar33 = param_4 * __real_bfe0000000000000;
      iVar15 = (int)dVar51;
      do {
        bVar3 = false;
        bVar4 = false;
        lVar13 = 0;
        dVar52 = (double)iVar15 * param_4;
        if (lVar26 < 4) {
          lVar17 = lVar26 + -1;
          if (0 < lVar26) goto LAB_1446b5808;
        }
        else {
          lVar21 = (lVar26 + -1) * 0x18;
          pdVar12 = param_2 + 5;
          do {
            dVar34 = pdVar12[-3];
            dVar41 = *(double *)(lVar21 + 0x10 + (longlong)param_2);
            if ((auVar36._0_8_ < dVar34 != auVar36._0_8_ < dVar41) &&
               (dVar52 < ((auVar36._0_8_ - dVar34) *
                         (*(double *)(lVar21 + (longlong)param_2) - pdVar12[-5])) /
                         (dVar41 - dVar34) + pdVar12[-5])) {
              bVar4 = !bVar4;
              bVar3 = bVar4;
            }
            dVar31 = *(double *)(lVar21 + (longlong)param_2);
            dVar38 = pdVar12[-5];
            dVar40 = dVar34 - dVar41;
            dVar42 = dVar38 - dVar31;
            dVar39 = dVar40 * dVar40 + dVar42 * dVar42;
            dVar49 = (dVar52 - dVar31) * dVar42 + (auVar36._0_8_ - dVar41) * dVar40;
            if (0.0 < dVar39) {
              dVar49 = dVar49 / dVar39;
            }
            if (0.0 <= dVar49) {
              if (__real_3ff0000000000000 <= dVar49) {
                dVar49 = __real_3ff0000000000000;
              }
            }
            else {
              dVar49 = 0.0;
            }
            dVar39 = *pdVar12;
            dVar40 = (dVar49 * dVar40 + dVar41) - auVar36._0_8_;
            dVar41 = (dVar49 * dVar42 + dVar31) - dVar52;
            dVar41 = dVar40 * dVar40 + dVar41 * dVar41;
            if (dVar50 <= dVar41) {
              dVar41 = dVar50;
            }
            if ((auVar36._0_8_ < dVar39 != auVar36._0_8_ < dVar34) &&
               (dVar52 < ((auVar36._0_8_ - dVar39) * (dVar38 - pdVar12[-2])) / (dVar34 - dVar39) +
                         pdVar12[-2])) {
              bVar4 = !bVar4;
              bVar3 = bVar4;
            }
            dVar50 = pdVar12[-2];
            dVar31 = dVar39 - dVar34;
            dVar42 = dVar50 - dVar38;
            dVar49 = dVar31 * dVar31 + dVar42 * dVar42;
            dVar40 = (dVar52 - dVar38) * dVar42 + (auVar36._0_8_ - dVar34) * dVar31;
            if (0.0 < dVar49) {
              dVar40 = dVar40 / dVar49;
            }
            if (0.0 <= dVar40) {
              if (__real_3ff0000000000000 <= dVar40) {
                dVar40 = __real_3ff0000000000000;
              }
            }
            else {
              dVar40 = 0.0;
            }
            dVar49 = pdVar12[3];
            dVar31 = (dVar40 * dVar31 + dVar34) - auVar36._0_8_;
            dVar34 = (dVar40 * dVar42 + dVar38) - dVar52;
            dVar34 = dVar31 * dVar31 + dVar34 * dVar34;
            if (dVar41 <= dVar34) {
              dVar34 = dVar41;
            }
            if ((auVar36._0_8_ < dVar49 != auVar36._0_8_ < dVar39) &&
               (dVar52 < ((auVar36._0_8_ - dVar49) * (dVar50 - pdVar12[1])) / (dVar39 - dVar49) +
                         pdVar12[1])) {
              bVar4 = !bVar4;
              bVar3 = bVar4;
            }
            dVar41 = pdVar12[1];
            dVar38 = dVar49 - dVar39;
            dVar31 = dVar41 - dVar50;
            dVar42 = dVar38 * dVar38 + dVar31 * dVar31;
            dVar40 = (auVar36._0_8_ - dVar39) * dVar38 + (dVar52 - dVar50) * dVar31;
            if (0.0 < dVar42) {
              dVar40 = dVar40 / dVar42;
            }
            if (0.0 <= dVar40) {
              if (__real_3ff0000000000000 <= dVar40) {
                dVar40 = __real_3ff0000000000000;
              }
            }
            else {
              dVar40 = 0.0;
            }
            dVar42 = pdVar12[6];
            dVar31 = (dVar40 * dVar31 + dVar50) - dVar52;
            dVar50 = (dVar40 * dVar38 + dVar39) - auVar36._0_8_;
            dVar31 = dVar31 * dVar31 + dVar50 * dVar50;
            if (dVar34 <= dVar31) {
              dVar31 = dVar34;
            }
            if ((auVar36._0_8_ < dVar42 != auVar36._0_8_ < dVar49) &&
               (dVar52 < ((auVar36._0_8_ - dVar42) * (dVar41 - pdVar12[4])) / (dVar49 - dVar42) +
                         pdVar12[4])) {
              bVar4 = !bVar4;
              bVar3 = bVar4;
            }
            dVar42 = dVar42 - dVar49;
            dVar38 = pdVar12[4] - dVar41;
            dVar34 = dVar42 * dVar42 + dVar38 * dVar38;
            dVar50 = (dVar52 - dVar41) * dVar38 + (auVar36._0_8_ - dVar49) * dVar42;
            if (0.0 < dVar34) {
              dVar50 = dVar50 / dVar34;
            }
            if (0.0 <= dVar50) {
              if (__real_3ff0000000000000 <= dVar50) {
                dVar50 = __real_3ff0000000000000;
              }
            }
            else {
              dVar50 = 0.0;
            }
            lVar17 = lVar13 + 3;
            lVar21 = (0x20 - (longlong)param_2) + (longlong)pdVar12;
            lVar13 = lVar13 + 4;
            pdVar12 = pdVar12 + 0xc;
            dVar34 = (dVar50 * dVar42 + dVar49) - auVar36._0_8_;
            dVar50 = (dVar50 * dVar38 + dVar41) - dVar52;
            dVar50 = dVar34 * dVar34 + dVar50 * dVar50;
            if (dVar31 <= dVar50) {
              dVar50 = dVar31;
            }
          } while (lVar13 < lVar26 + -3);
          if (lVar13 < lVar26) {
LAB_1446b5808:
            lVar17 = lVar17 * 0x18;
            pdVar12 = param_2 + lVar13 * 3;
            lVar13 = lVar26 - lVar13;
            do {
              dVar34 = pdVar12[2];
              dVar41 = *(double *)(lVar17 + 0x10 + (longlong)param_2);
              if ((auVar36._0_8_ < dVar34 != auVar36._0_8_ < dVar41) &&
                 (dVar52 < ((auVar36._0_8_ - dVar34) *
                           (*(double *)(lVar17 + (longlong)param_2) - *pdVar12)) / (dVar41 - dVar34)
                           + *pdVar12)) {
                bVar4 = !bVar3;
                bVar3 = bVar4;
              }
              dVar31 = *(double *)(lVar17 + (longlong)param_2);
              dVar34 = dVar34 - dVar41;
              dVar38 = *pdVar12 - dVar31;
              dVar49 = dVar34 * dVar34 + dVar38 * dVar38;
              dVar40 = (auVar36._0_8_ - dVar41) * dVar34 + (dVar52 - dVar31) * dVar38;
              if (0.0 < dVar49) {
                dVar40 = dVar40 / dVar49;
              }
              if (0.0 <= dVar40) {
                if (__real_3ff0000000000000 <= dVar40) {
                  dVar40 = __real_3ff0000000000000;
                }
              }
              else {
                dVar40 = 0.0;
              }
              lVar17 = (longlong)pdVar12 - (longlong)param_2;
              pdVar12 = pdVar12 + 3;
              dVar41 = (dVar40 * dVar34 + dVar41) - auVar36._0_8_;
              dVar34 = (dVar40 * dVar38 + dVar31) - dVar52;
              dVar34 = dVar41 * dVar41 + dVar34 * dVar34;
              if (dVar50 <= dVar34) {
                dVar34 = dVar50;
              }
              dVar50 = dVar34;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          if (bVar4) {
            dVar50 = (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) ^
                                      __xmm_80000000000000008000000000000000._4_4_,
                                      SUB84(dVar50,0) ^ (uint)__xmm_80000000000000008000000000000000
                                     );
          }
        }
        if (dVar50 <= dVar33) {
          rcIntArray::resize(param_12,param_12->m_size + 1);
          param_12->m_data[(longlong)param_12->m_size + -1] = iVar15;
          uVar9 = getHeight(dVar52,dVar32,auVar36._0_8_,dVar1,local_6a0,param_6->ch,param_7);
          rcIntArray::resize(param_12,param_12->m_size + 1);
          param_12->m_data[(longlong)param_12->m_size + -1] = (uint)uVar9;
          rcIntArray::resize(param_12,param_12->m_size + 1);
          param_12->m_data[(longlong)param_12->m_size + -1] = iVar30;
          rcIntArray::resize(param_12,param_12->m_size + 1);
          param_12->m_data[(longlong)param_12->m_size + -1] = 0;
        }
        iVar15 = iVar15 + 1;
        dVar50 = __real_7fefffffffffffff;
      } while (iVar15 < (int)dVar35);
    }
  }
  iVar15 = 0;
  iVar30 = (int)(param_12->m_size + (param_12->m_size >> 0x1f & 3U)) >> 2;
  if (0 < iVar30) {
    uVar44 = (undefined4)__real_3ec999b339b339b3;
    uVar46 = (undefined4)((ulonglong)__real_3ec999b339b339b3 >> 0x20);
    while (*param_9 < 0x7f) {
      sVar18 = 0;
      lVar17 = 0;
      dVar35 = 0.0;
      dVar37 = 0.0;
      dVar51 = 0.0;
      local_738 = 0.0;
      dVar32 = 0.0;
      local_718 = 0.0;
      lVar13 = -1;
      local_6c0 = 0.0;
      dStack_6b8 = 0.0;
      if (0 < (longlong)iVar30) {
        piVar27 = param_12->m_data;
        dVar32 = 0.0;
        do {
          if (piVar27[3] == 0) {
            dVar52 = (double)piVar27[1] * param_6->ch;
            uVar47 = SUB84(dVar50,0);
            uVar48 = (undefined4)((ulonglong)dVar50 >> 0x20);
            iVar19 = (int)(param_10->m_size + (param_10->m_size >> 0x1f & 3U)) >> 2;
            lVar26 = (longlong)iVar19;
            auVar36._0_8_ =
                 ((double)(ushort)(sVar18 * -0x4cbd) * (double)CONCAT44(uVar46,uVar44) -
                 __real_3fb99999a0000000) * dVar1 + (double)*piVar27 * param_4;
            dVar33 = ((double)(ushort)(sVar18 * 0x3841) * (double)CONCAT44(uVar46,uVar44) -
                     __real_3fb99999a0000000) * dVar1 + (double)piVar27[2] * param_4;
            dVar35 = local_6c0;
            dVar37 = dStack_6b8;
            if (0 < iVar19) {
              piVar24 = param_10->m_data + 2;
              do {
                lVar22 = (longlong)(piVar24[-2] * 3);
                dVar51 = param_8[lVar22];
                lVar23 = (longlong)(piVar24[-1] * 3);
                lVar21 = (longlong)(*piVar24 * 3);
                dVar49 = param_8[lVar23] - dVar51;
                dVar32 = param_8[lVar21] - dVar51;
                dVar50 = param_8[lVar22 + 2];
                dVar38 = param_8[lVar23 + 2] - dVar50;
                dVar31 = param_8[lVar21 + 2] - dVar50;
                dVar41 = dVar31 * dVar31 + dVar32 * dVar32;
                dVar34 = dVar38 * dVar31 + dVar49 * dVar32;
                dVar40 = (dVar33 - dVar50) * dVar31 + (auVar36._0_8_ - dVar51) * dVar32;
                dVar50 = (dVar33 - dVar50) * dVar38 + (auVar36._0_8_ - dVar51) * dVar49;
                dVar51 = dVar38 * dVar38 + dVar49 * dVar49;
                dVar31 = __real_3ff0000000000000 / (dVar51 * dVar41 - dVar34 * dVar34);
                dVar32 = (dVar50 * dVar41 - dVar40 * dVar34) * dVar31;
                dVar31 = (dVar40 * dVar51 - dVar50 * dVar34) * dVar31;
                dVar34 = __real_7fefffffffffffff;
                if (((__real_bf1a36e2e0000000 <= dVar31) && (__real_bf1a36e2e0000000 <= dVar32)) &&
                   (dVar32 + dVar31 <= __real_3ff00068db8b8000)) {
                  dVar51 = (dVar31 * (param_8[lVar21 + 1] - param_8[lVar22 + 1]) +
                            param_8[lVar22 + 1] +
                           dVar32 * (param_8[lVar23 + 1] - param_8[lVar22 + 1])) - dVar52;
                  dVar34 = (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar51,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                }
                if ((double)CONCAT44(uVar48,uVar47) <= dVar34) {
                  dVar34 = (double)CONCAT44(uVar48,uVar47);
                }
                piVar24 = piVar24 + 4;
                uVar47 = SUB84(dVar34,0);
                uVar48 = (undefined4)((ulonglong)dVar34 >> 0x20);
                lVar26 = lVar26 + -1;
              } while (lVar26 != 0);
              uVar44 = (undefined4)__real_3ec999b339b339b3;
              uVar46 = (undefined4)((ulonglong)__real_3ec999b339b339b3 >> 0x20);
              dVar51 = local_738;
              dVar50 = __real_7fefffffffffffff;
              dVar32 = local_718;
              if (((dVar34 != __real_7fefffffffffffff) && (0.0 <= dVar34)) && (local_718 < dVar34))
              {
                lVar13 = lVar17;
                dVar51 = dVar33;
                dVar35 = auVar36._0_8_;
                dVar37 = dVar52;
                dVar32 = dVar34;
                local_738 = dVar33;
                local_718 = dVar34;
                local_6c0 = auVar36._0_8_;
                dStack_6b8 = dVar52;
              }
            }
          }
          sVar18 = sVar18 + 1;
          lVar17 = lVar17 + 1;
          piVar27 = piVar27 + 4;
        } while (lVar17 < iVar30);
      }
      if ((dVar32 <= param_5) || (lVar13 == -1)) break;
      param_12->m_data[lVar13 * 4 + 3] = 1;
      iVar19 = *param_9;
      param_8[(longlong)(iVar19 * 3) + 2] = dVar51;
      param_8[iVar19 * 3] = dVar35;
      (param_8 + iVar19 * 3)[1] = dVar37;
      *param_9 = *param_9 + 1;
      rcIntArray::resize(param_11,0);
      rcIntArray::resize(param_10,0);
      delaunayHull(param_1,*param_9,param_8,local_744,local_2f8,param_10,param_11);
      uVar44 = (undefined4)__real_3ec999b339b339b3;
      uVar46 = (undefined4)((ulonglong)__real_3ec999b339b339b3 >> 0x20);
      iVar15 = iVar15 + 1;
      dVar50 = __real_7fefffffffffffff;
      if (iVar30 <= iVar15) break;
    }
  }
LAB_1446b5e6a:
  if (0x3ff < param_10->m_size) {
    rcIntArray::resize(param_10,0x3fc);
    rcContext::log(param_1,RC_LOG_ERROR,
                   "rcBuildPolyMeshDetail: Shrinking triangle count from %d to max %d.");
  }
  return true;
}

// calculateDistanceField @ 1446b5f30

void __cdecl calculateDistanceField(rcCompactHeightfield *param_1,ushort *param_2,ushort *param_3)

{
  uchar uVar1;
  uchar *puVar2;
  rcCompactSpan *prVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  rcCompactCell *prVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong local_48;
  
  iVar14 = param_1->width;
  iVar20 = 0;
  uVar6 = param_1->height;
  puVar7 = param_2;
  iVar9 = iVar20;
  if (0 < param_1->spanCount) {
    do {
      *puVar7 = 0xffff;
      iVar9 = iVar9 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar9 < param_1->spanCount);
  }
  if (0 < (int)uVar6) {
    do {
      iVar9 = 0;
      if (0 < iVar14) {
        iVar12 = iVar20 * iVar14;
        lVar11 = (longlong)iVar12 << 2;
        do {
          uVar10 = *(uint *)((longlong)&param_1->cells->index + lVar11);
          uVar4 = uVar10 & 0xffffff;
          uVar18 = (ulonglong)uVar4;
          uVar17 = (ulonglong)(uVar4 + (uVar10 >> 0x18));
          if (uVar18 < uVar17) {
            lVar22 = (ulonglong)uVar4 * 0xc;
            do {
              iVar5 = 0;
              puVar2 = param_1->areas;
              uVar10 = *(uint *)((longlong)&param_1->spans->con + lVar22);
              uVar1 = puVar2[uVar18];
              if (((uVar10 & 0xff) != 0xff) &&
                 (uVar1 == puVar2[((uint)param_1->cells[iVar12 + -1 + iVar9] & 0xffffff) +
                                  (uVar10 & 0xff)])) {
                iVar5 = 1;
              }
              uVar4 = uVar10 >> 8 & 0xff;
              if ((uVar4 != 0xff) &&
                 (uVar1 == puVar2[((uint)param_1->cells[(iVar20 + 1) * iVar14 + iVar9] & 0xffffff) +
                                  uVar4])) {
                iVar5 = iVar5 + 1;
              }
              uVar4 = uVar10 >> 0x10 & 0xff;
              if ((uVar4 != 0xff) &&
                 (uVar1 == puVar2[((uint)param_1->cells[iVar12 + 1 + iVar9] & 0xffffff) + uVar4])) {
                iVar5 = iVar5 + 1;
              }
              if ((uVar10 >> 0x18 != 0xff) &&
                 (uVar1 == puVar2[((uint)param_1->cells[(iVar20 + -1) * iVar14 + iVar9] & 0xffffff)
                                  + (uVar10 >> 0x18)])) {
                iVar5 = iVar5 + 1;
              }
              if (iVar5 != 4) {
                param_2[uVar18] = 0;
              }
              uVar18 = uVar18 + 1;
              lVar22 = lVar22 + 0xc;
            } while ((longlong)uVar18 < (longlong)uVar17);
          }
          iVar9 = iVar9 + 1;
          lVar11 = lVar11 + 4;
        } while (iVar9 < iVar14);
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < (int)uVar6);
    iVar9 = -iVar14;
    uVar18 = (ulonglong)uVar6;
    local_48 = 0;
    do {
      iVar20 = 0;
      lVar11 = local_48;
      if (0 < iVar14) {
        do {
          uVar10 = *(uint *)((longlong)&param_1->cells->index + lVar11);
          uVar4 = uVar10 & 0xffffff;
          uVar17 = (ulonglong)uVar4;
          uVar23 = (ulonglong)(uVar4 + (uVar10 >> 0x18));
          if (uVar17 < uVar23) {
            lVar22 = (ulonglong)uVar4 * 0xc;
            do {
              prVar3 = param_1->spans;
              uVar10 = *(uint *)((longlong)&prVar3->con + lVar22) & 0xff;
              if (uVar10 != 0xff) {
                prVar15 = param_1->cells;
                uVar8 = param_2[uVar17];
                uVar10 = (*(uint *)((longlong)&prVar15[-1].index + lVar11) & 0xffffff) + uVar10;
                if (param_2[uVar10] + 2 < (uint)uVar8) {
                  uVar8 = param_2[uVar10] + 2;
                  param_2[uVar17] = uVar8;
                  prVar15 = param_1->cells;
                }
                uVar10 = (uint)*(byte *)((longlong)&prVar3[uVar10].con + 3);
                if ((uVar10 != 0xff) &&
                   (param_2[((uint)prVar15[(longlong)(iVar9 + iVar20) + -1] & 0xffffff) + uVar10] +
                    3 < (uint)uVar8)) {
                  param_2[uVar17] =
                       param_2[((uint)prVar15[(longlong)(iVar9 + iVar20) + -1] & 0xffffff) + uVar10]
                       + 3;
                }
              }
              uVar10 = (uint)*(byte *)((longlong)&prVar3->con + lVar22 + 3);
              if (uVar10 != 0xff) {
                prVar15 = param_1->cells;
                uVar8 = param_2[uVar17];
                prVar3 = param_1->spans;
                uVar10 = ((uint)prVar15[iVar9 + iVar20] & 0xffffff) + uVar10;
                if (param_2[uVar10] + 2 < (uint)uVar8) {
                  uVar8 = param_2[uVar10] + 2;
                  param_2[uVar17] = uVar8;
                  prVar15 = param_1->cells;
                }
                uVar10 = prVar3[uVar10].con;
                if (((uVar10 & 0xff0000) != 0xff0000) &&
                   (param_2[((uint)prVar15[(longlong)(iVar9 + iVar20) + 1] & 0xffffff) +
                            (uVar10 >> 0x10 & 0xff)] + 3 < (uint)uVar8)) {
                  param_2[uVar17] =
                       param_2[((uint)prVar15[(longlong)(iVar9 + iVar20) + 1] & 0xffffff) +
                               (uVar10 >> 0x10 & 0xff)] + 3;
                }
              }
              uVar17 = uVar17 + 1;
              lVar22 = lVar22 + 0xc;
            } while ((longlong)uVar17 < (longlong)uVar23);
          }
          iVar20 = iVar20 + 1;
          lVar11 = lVar11 + 4;
        } while (iVar20 < iVar14);
      }
      local_48 = local_48 + (longlong)iVar14 * 4;
      iVar9 = iVar9 + iVar14;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  iVar9 = uVar6 - 1;
  if (-1 < iVar9) {
    iVar20 = iVar14 + -1;
    iVar5 = -iVar14;
    iVar13 = iVar9 * iVar14;
    iVar21 = uVar6 * iVar14;
    iVar12 = iVar13 + iVar20;
    do {
      if (-1 < iVar20) {
        lVar11 = (longlong)iVar12 << 2;
        lVar22 = (longlong)(iVar14 + iVar13) << 2;
        iVar16 = iVar20;
        do {
          uVar6 = *(uint *)((longlong)&param_1->cells->index + lVar11);
          uVar10 = uVar6 & 0xffffff;
          uVar18 = (ulonglong)uVar10;
          uVar17 = (ulonglong)(uVar10 + (uVar6 >> 0x18));
          if (uVar18 < uVar17) {
            lVar19 = (ulonglong)uVar10 * 0xc;
            do {
              prVar3 = param_1->spans;
              uVar6 = (uint)*(byte *)((longlong)&prVar3->con + lVar19 + 2);
              if (uVar6 != 0xff) {
                prVar15 = param_1->cells;
                uVar8 = param_2[uVar18];
                uVar6 = (*(uint *)((longlong)&prVar15->index + lVar22) & 0xffffff) + uVar6;
                if (param_2[uVar6] + 2 < (uint)uVar8) {
                  uVar8 = param_2[uVar6] + 2;
                  param_2[uVar18] = uVar8;
                  prVar15 = param_1->cells;
                }
                uVar6 = (uint)*(byte *)((longlong)&prVar3[uVar6].con + 1);
                if ((uVar6 != 0xff) &&
                   (param_2[((uint)prVar15[(longlong)(iVar21 + iVar16) + 1] & 0xffffff) + uVar6] + 3
                    < (uint)uVar8)) {
                  param_2[uVar18] =
                       param_2[((uint)prVar15[(longlong)(iVar21 + iVar16) + 1] & 0xffffff) + uVar6]
                       + 3;
                }
              }
              uVar6 = *(uint *)((longlong)&prVar3->con + lVar19);
              if ((uVar6 & 0xff00) != 0xff00) {
                prVar15 = param_1->cells;
                uVar8 = param_2[uVar18];
                prVar3 = param_1->spans;
                uVar6 = ((uint)prVar15[iVar21 + iVar16] & 0xffffff) + (uVar6 >> 8 & 0xff);
                if (param_2[uVar6] + 2 < (uint)uVar8) {
                  uVar8 = param_2[uVar6] + 2;
                  param_2[uVar18] = uVar8;
                  prVar15 = param_1->cells;
                }
                uVar6 = prVar3[uVar6].con & 0xff;
                if ((uVar6 != 0xff) &&
                   (param_2[((uint)prVar15[(longlong)(iVar21 + iVar16) + -1] & 0xffffff) + uVar6] +
                    3 < (uint)uVar8)) {
                  param_2[uVar18] =
                       param_2[((uint)prVar15[(longlong)(iVar21 + iVar16) + -1] & 0xffffff) + uVar6]
                       + 3;
                }
              }
              uVar18 = uVar18 + 1;
              lVar19 = lVar19 + 0xc;
            } while ((longlong)uVar18 < (longlong)uVar17);
          }
          lVar22 = lVar22 + -4;
          lVar11 = lVar11 + -4;
          iVar16 = iVar16 + -1;
        } while (-1 < iVar16);
      }
      iVar9 = iVar9 + -1;
      iVar13 = iVar13 + iVar5;
      iVar12 = iVar12 + iVar5;
      iVar21 = iVar21 + iVar5;
    } while (-1 < iVar9);
  }
  iVar14 = 0;
  *param_3 = 0;
  if (0 < param_1->spanCount) {
    uVar8 = 0;
    do {
      if (uVar8 < *param_2) {
        uVar8 = *param_2;
      }
      iVar14 = iVar14 + 1;
      *param_3 = uVar8;
      param_2 = param_2 + 1;
    } while (iVar14 < param_1->spanCount);
  }
  return;
}

// canMergeWithRegion @ 1446b65c0

bool __cdecl canMergeWithRegion(rcRegion *param_1,rcRegion *param_2)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  uint uVar7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined1 auVar20 [12];
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  
  if ((param_1->areaType == param_2->areaType) && (param_1->chunkId == param_2->chunkId)) {
    uVar3 = (param_1->connections).m_size;
    iVar10 = 0;
    lVar11 = 0;
    iVar15 = iVar10;
    if ((0 < (int)uVar3) && (7 < uVar3)) {
      piVar4 = (param_1->connections).m_data;
      iVar21 = 0;
      iVar22 = 0;
      iVar23 = 0;
      iVar24 = 0;
      iVar10 = 0;
      iVar16 = 0;
      iVar17 = 0;
      iVar18 = 0;
      uVar13 = uVar3 & 0x80000007;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
      }
      uVar2 = param_2->id;
      uVar19 = CONCAT22(uVar2,uVar2);
      auVar20._0_8_ = CONCAT44(uVar19,uVar19);
      auVar20._8_4_ = uVar19;
      auVar5._10_2_ = 0;
      auVar5._0_10_ = auVar20._0_10_;
      auVar5._12_2_ = uVar2;
      auVar6._8_2_ = uVar2;
      auVar6._0_8_ = auVar20._0_8_;
      auVar6._10_4_ = auVar5._10_4_;
      auVar9._6_8_ = 0;
      auVar9._0_6_ = auVar6._8_6_;
      auVar8._4_2_ = uVar2;
      auVar8._0_4_ = uVar19;
      auVar8._6_8_ = SUB148(auVar9 << 0x40,6);
      lVar14 = lVar11;
      do {
        puVar12 = (uint *)(piVar4 + lVar14);
        iVar15 = iVar15 + 8;
        uVar7 = auVar5._10_4_ >> 0x10;
        puVar1 = (uint *)(piVar4 + lVar14 + 4);
        lVar14 = lVar14 + 8;
        iVar21 = iVar21 + (uint)((uint)uVar2 == *puVar12);
        iVar22 = iVar22 + (uint)(auVar8._4_4_ == puVar12[1]);
        iVar23 = iVar23 + (uint)(auVar6._8_4_ == puVar12[2]);
        iVar24 = iVar24 + (uint)(uVar7 == puVar12[3]);
        iVar10 = iVar10 + (uint)(*puVar1 == (uint)uVar2);
        iVar16 = iVar16 + (uint)(puVar1[1] == auVar8._4_4_);
        iVar17 = iVar17 + (uint)(puVar1[2] == auVar6._8_4_);
        iVar18 = iVar18 + (uint)(puVar1[3] == uVar7);
      } while (lVar14 < (int)(uVar3 - uVar13));
      iVar10 = iVar10 + iVar21 + iVar17 + iVar23 + iVar16 + iVar22 + iVar18 + iVar24;
    }
    lVar14 = (longlong)iVar15;
    if (lVar14 < (int)uVar3) {
      do {
        iVar15 = iVar10 + 1;
        if ((param_1->connections).m_data[lVar14] != (uint)param_2->id) {
          iVar15 = iVar10;
        }
        iVar10 = iVar15;
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)uVar3);
    }
    if (iVar10 < 2) {
      iVar15 = (param_1->floors).m_size;
      if (0 < iVar15) {
        puVar12 = (uint *)(param_1->floors).m_data;
        do {
          if (*puVar12 == (uint)param_2->id) {
            return false;
          }
          lVar11 = lVar11 + 1;
          puVar12 = puVar12 + 1;
        } while (lVar11 < iVar15);
      }
      return true;
    }
  }
  return false;
}

// canRemoveVertex @ 1446b6720

bool __cdecl canRemoveVertex(rcContext *param_1,rcPolyMesh *param_2,ushort param_3)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  void *pvVar8;
  ulonglong uVar9;
  int *piVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ushort *puVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  uint uVar22;
  ulonglong uVar23;
  uint local_58;
  uint local_54;
  ulonglong uVar15;
  
  uVar23 = 0;
  uVar6 = param_2->nvp;
  uVar11 = (ulonglong)(int)uVar6;
  iVar5 = 0;
  if (0 < param_2->npolys) {
    uVar17 = (ulonglong)(uint)param_2->npolys;
    puVar19 = param_2->polys;
    uVar12 = uVar11;
    uVar9 = uVar23;
    uVar18 = uVar23;
    do {
      uVar7 = uVar23;
      uVar15 = uVar23;
      if (0 < (longlong)uVar11) {
        do {
          iVar13 = (int)uVar15;
          if (puVar19[uVar7] == 0xffff) goto LAB_1446b67a3;
          uVar7 = uVar7 + 1;
          uVar15 = (ulonglong)(iVar13 + 1);
        } while ((longlong)uVar7 < (longlong)uVar11);
      }
      iVar13 = (int)uVar12;
LAB_1446b67a3:
      uVar7 = uVar9;
      uVar15 = uVar23;
      uVar20 = uVar23;
      if (0 < iVar13) {
        do {
          uVar4 = (uint)uVar15 + 1;
          if (puVar19[uVar20] != param_3) {
            uVar4 = (uint)uVar15;
          }
          uVar15 = (ulonglong)uVar4;
          uVar9 = (ulonglong)((int)uVar7 + 1);
          if (puVar19[uVar20] != param_3) {
            uVar9 = uVar7;
          }
          uVar20 = uVar20 + 1;
          uVar7 = uVar9;
        } while ((longlong)uVar20 < (longlong)iVar13);
        uVar12 = (ulonglong)uVar6;
        if (uVar4 != 0) {
          uVar18 = (ulonglong)((int)uVar18 + -1 + (iVar13 - uVar4));
        }
      }
      puVar19 = puVar19 + (int)(uVar6 * 2);
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    if (2 < (int)uVar18) {
      pvVar8 = rcAlloc((int)uVar9 * 0x18,RC_ALLOC_TEMP);
      if (pvVar8 == (void *)0x0) {
        rcContext::log(param_1,RC_LOG_WARNING,"canRemoveVertex: Out of memory \'edges\' (%d).");
        rcFree((void *)0x0);
        return false;
      }
      local_58 = 0;
      if (0 < param_2->npolys) {
        local_54 = 0;
        uVar9 = uVar23;
        uVar12 = uVar23;
        uVar18 = uVar23;
        uVar17 = uVar23;
        do {
          iVar5 = (int)uVar9;
          puVar19 = param_2->polys;
          uVar9 = uVar23;
          uVar7 = uVar23;
          uVar4 = uVar6;
          if (0 < (longlong)uVar11) {
            do {
              uVar4 = (uint)uVar7;
              if (puVar19[(longlong)iVar5 + uVar9] == 0xffff) break;
              uVar9 = uVar9 + 1;
              uVar7 = (ulonglong)((uint)uVar7 + 1);
              uVar4 = uVar6;
            } while ((longlong)uVar9 < (longlong)uVar11);
          }
          uVar14 = (uint)uVar12;
          if (0 < (int)uVar4) {
            puVar21 = (undefined4 *)((longlong)pvVar8 + uVar17 * 0xc + 8);
            uVar12 = uVar23;
            uVar9 = (longlong)(int)(uVar4 - 1);
            do {
              uVar7 = uVar12;
              uVar1 = puVar19[(longlong)iVar5 + uVar7];
              if ((uVar1 == param_3) || (puVar19[(longlong)iVar5 + uVar9] == param_3)) {
                uVar2 = puVar19[(longlong)iVar5 + uVar9];
                uVar22 = (uint)uVar2;
                uVar14 = (uint)uVar1;
                if (uVar2 != param_3) {
                  uVar22 = (uint)uVar1;
                  uVar14 = (uint)uVar2;
                }
                bVar3 = false;
                if (0 < (longlong)uVar17) {
                  piVar10 = (int *)((longlong)pvVar8 + 8);
                  uVar9 = uVar17;
                  do {
                    if (piVar10[-1] == uVar14) {
                      *piVar10 = *piVar10 + 1;
                      bVar3 = true;
                    }
                    piVar10 = piVar10 + 3;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                  if (bVar3) goto LAB_1446b6935;
                }
                uVar18 = (ulonglong)((int)uVar18 + 1);
                puVar21[-2] = uVar22;
                uVar17 = uVar17 + 1;
                puVar21[-1] = uVar14;
                *puVar21 = 1;
                puVar21 = puVar21 + 3;
              }
LAB_1446b6935:
              uVar12 = uVar7 + 1;
              uVar14 = local_58;
              uVar9 = uVar7;
            } while ((longlong)(uVar7 + 1) < (longlong)(int)uVar4);
          }
          iVar5 = (int)uVar18;
          local_58 = uVar14 + 1;
          uVar12 = (ulonglong)local_58;
          local_54 = local_54 + uVar6 * 2;
          uVar9 = (ulonglong)local_54;
        } while ((int)local_58 < param_2->npolys);
      }
      lVar16 = (longlong)iVar5;
      if (0 < iVar5) {
        piVar10 = (int *)((longlong)pvVar8 + 8);
        do {
          iVar5 = *piVar10;
          piVar10 = piVar10 + 3;
          uVar6 = (uint)uVar23 + 1;
          if (1 < iVar5) {
            uVar6 = (uint)uVar23;
          }
          uVar23 = (ulonglong)uVar6;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        if (2 < (int)uVar6) {
          rcFree(pvVar8);
          return false;
        }
      }
      rcFree(pvVar8);
      return true;
    }
  }
  return false;
}

// circumCircle @ 1446b69e0

bool __cdecl
circumCircle(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar6 = __real_3eb0c6f7a0000000;
  dVar8 = *param_2;
  dVar1 = *param_1;
  dVar2 = param_1[2];
  dVar3 = *param_3;
  dVar4 = param_2[2];
  dVar5 = param_3[2];
  dVar9 = (dVar8 - dVar1) * (dVar5 - dVar2) - (dVar3 - dVar1) * (dVar4 - dVar2);
  dVar7 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar7 <= __real_3eb0c6f7a0000000) {
    *param_4 = dVar1;
    param_4[2] = param_1[2];
    *param_5 = 0.0;
  }
  else {
    dVar10 = dVar4 * dVar4 + dVar8 * dVar8;
    dVar1 = dVar1 * dVar1 + dVar2 * dVar2;
    dVar9 = __real_3fe0000000000000 / dVar9;
    dVar3 = dVar3 * dVar3 + dVar5 * dVar5;
    dVar8 = ((dVar4 - dVar5) * dVar1 + dVar10 * (dVar5 - dVar2) + (dVar2 - dVar4) * dVar3) * dVar9;
    *param_4 = dVar8;
    dVar9 = ((*param_1 - *param_3) * dVar10 + (*param_3 - *param_2) * dVar1 +
            (*param_2 - *param_1) * dVar3) * dVar9;
    param_4[2] = dVar9;
    dVar8 = *param_1 - dVar8;
    dVar9 = param_1[2] - dVar9;
    dVar8 = rcSqrt(dVar9 * dVar9 + dVar8 * dVar8);
    *param_5 = dVar8;
  }
  return dVar6 < dVar7;
}

// completeFacet @ 1446b6ba0

void __cdecl
completeFacet(rcContext *param_1,double *param_2,int param_3,int *param_4,int *param_5,int param_6,
             int *param_7,int param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  double *pdVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double local_res20;
  double local_c0 [16];
  
  dVar5 = __real_3ff0041893780000;
  dVar4 = __real_3feff7ced9100000;
  dVar3 = __real_3ee4f8b580000000;
  lVar10 = (longlong)(param_8 * 4);
  if (param_4[lVar10 + 2] == -1) {
    iVar15 = param_4[lVar10];
    iVar16 = param_4[lVar10 + 1];
  }
  else {
    if (param_4[lVar10 + 3] != -1) {
      return;
    }
    iVar15 = param_4[lVar10 + 1];
    iVar16 = param_4[lVar10];
  }
  iVar11 = 0;
  uVar18 = SUB84(__real_bff0000000000000,0);
  uVar19 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  local_c0[2] = 0.0;
  local_res20 = __real_bff0000000000000;
  local_c0[0] = 0.0;
  local_c0[1] = 0.0;
  iVar12 = param_3;
  if (0 < param_3) {
    pdVar14 = param_2;
    do {
      lVar13 = (longlong)iVar15;
      if ((iVar11 != iVar15) && (iVar11 != iVar16)) {
        pdVar1 = param_2 + lVar13 * 3;
        if ((dVar3 < (param_2[(longlong)iVar16 * 3] - param_2[lVar13 * 3]) *
                     (pdVar14[2] - pdVar1[2]) -
                     ((param_2 + (longlong)iVar16 * 3)[2] - param_2[lVar13 * 3 + 2]) *
                     (*pdVar14 - *pdVar1)) &&
           (((double)CONCAT44(uVar19,uVar18) < 0.0 ||
            ((dVar17 = *pdVar14 - local_c0[0], dVar2 = pdVar14[2] - local_c0[2],
             dVar2 = rcSqrt(dVar17 * dVar17 + dVar2 * dVar2),
             dVar2 <= (double)CONCAT44(uVar19,uVar18) * dVar5 &&
             ((dVar2 < (double)CONCAT44(uVar19,uVar18) * dVar4 ||
              ((bVar6 = overlapEdges(param_2,param_4,*param_5,iVar15,iVar11), !bVar6 &&
               (bVar6 = overlapEdges(param_2,param_4,*param_5,iVar16,iVar11), !bVar6)))))))))) {
          circumCircle(pdVar1,param_2 + (longlong)iVar16 * 3,pdVar14,local_c0,&local_res20);
          uVar18 = SUB84(local_res20,0);
          uVar19 = (undefined4)((ulonglong)local_res20 >> 0x20);
          iVar12 = iVar11;
        }
      }
      iVar11 = iVar11 + 1;
      pdVar14 = pdVar14 + 3;
    } while (iVar11 < param_3);
  }
  iVar11 = 0;
  if (iVar12 < param_3) {
    if (((param_4[lVar10] == iVar15) && (param_4[lVar10 + 1] == iVar16)) &&
       (param_4[lVar10 + 2] == -1)) {
      param_4[lVar10 + 2] = *param_7;
    }
    else if (((param_4[lVar10 + 1] == iVar15) && (param_4[lVar10] == iVar16)) &&
            (param_4[lVar10 + 3] == -1)) {
      param_4[lVar10 + 3] = *param_7;
    }
    iVar8 = 0;
    if (0 < *param_5) {
      piVar7 = param_4 + 1;
      do {
        if (((piVar7[-1] == iVar12) && (*piVar7 == iVar15)) ||
           ((piVar7[-1] == iVar15 && (*piVar7 == iVar12)))) {
          iVar9 = *param_7;
          if (iVar8 == -1) goto LAB_1446b6efc;
          lVar10 = (longlong)(iVar8 * 4);
          if (((param_4[lVar10] == iVar12) && (param_4[lVar10 + 1] == iVar15)) &&
             (param_4[lVar10 + 2] == -1)) {
            param_4[lVar10 + 2] = iVar9;
          }
          else if (((param_4[lVar10 + 1] == iVar12) && (param_4[lVar10] == iVar15)) &&
                  (param_4[lVar10 + 3] == -1)) {
            param_4[lVar10 + 3] = iVar9;
          }
          goto LAB_1446b6f22;
        }
        iVar8 = iVar8 + 1;
        piVar7 = piVar7 + 4;
      } while (iVar8 < *param_5);
    }
    iVar9 = *param_7;
LAB_1446b6efc:
    addEdge(param_1,param_4,param_5,param_6,iVar12,iVar15,iVar9,-1);
LAB_1446b6f22:
    if (0 < *param_5) {
      piVar7 = param_4 + 1;
      do {
        if (((piVar7[-1] == iVar16) && (*piVar7 == iVar12)) ||
           ((piVar7[-1] == iVar12 && (*piVar7 == iVar16)))) {
          iVar15 = *param_7;
          if (iVar11 == -1) goto LAB_1446b6f5d;
          lVar10 = (longlong)(iVar11 * 4);
          if (((param_4[lVar10] == iVar16) && (param_4[lVar10 + 1] == iVar12)) &&
             (param_4[lVar10 + 2] == -1)) {
            param_4[lVar10 + 2] = iVar15;
            *param_7 = *param_7 + 1;
            return;
          }
          if (((param_4[lVar10 + 1] == iVar16) && (param_4[lVar10] == iVar12)) &&
             (param_4[lVar10 + 3] == -1)) {
            param_4[lVar10 + 3] = iVar15;
            *param_7 = *param_7 + 1;
            return;
          }
          goto LAB_1446b6f88;
        }
        iVar11 = iVar11 + 1;
        piVar7 = piVar7 + 4;
      } while (iVar11 < *param_5);
    }
    iVar15 = *param_7;
LAB_1446b6f5d:
    addEdge(param_1,param_4,param_5,param_6,iVar16,iVar12,iVar15,-1);
LAB_1446b6f88:
    *param_7 = *param_7 + 1;
  }
  else if (((param_4[lVar10] == iVar15) && (param_4[lVar10 + 1] == iVar16)) &&
          (param_4[lVar10 + 2] == -1)) {
    param_4[lVar10 + 2] = -2;
  }
  else if (((param_4[lVar10 + 1] == iVar15) && (param_4[lVar10] == iVar16)) &&
          (param_4[lVar10 + 3] == -1)) {
    param_4[lVar10 + 3] = -2;
  }
  return;
}

// delaunayHull @ 1446b70c0

void __cdecl
delaunayHull(rcContext *param_1,int param_2,double *param_3,int param_4,int *param_5,
            rcIntArray *param_6,rcIntArray *param_7)

{
  uint uVar1;
  int iVar2;
  rcIntArray *_Dst;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int *piVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  uint local_res20 [2];
  int local_58 [6];
  ulonglong uVar6;
  
  uVar8 = (ulonglong)(uint)param_4;
  uVar15 = 0;
  iVar18 = param_2 * 10;
  local_58[0] = 0;
  local_res20[0] = 0;
  rcIntArray::resize(param_7,param_2 * 0x28);
  uVar14 = uVar15;
  if (0 < param_4) {
    uVar6 = uVar15;
    uVar13 = (longlong)(param_4 + -1) * 4;
    uVar17 = uVar15;
    do {
      uVar10 = uVar6;
      iVar7 = *(int *)(uVar10 + (longlong)param_5);
      iVar2 = *(int *)(uVar13 + (longlong)param_5);
      piVar12 = param_7->m_data;
      iVar11 = (int)uVar14;
      if (iVar11 < iVar18) {
        if (0 < iVar11) {
          piVar3 = piVar12 + 1;
          uVar6 = uVar15;
          do {
            if (((piVar3[-1] == iVar2) && (*piVar3 == iVar7)) ||
               ((piVar3[-1] == iVar7 && (*piVar3 == iVar2)))) {
              if ((int)uVar6 != -1) goto LAB_1446b71c3;
              break;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            piVar3 = piVar3 + 4;
          } while ((int)uVar5 < iVar11);
        }
        iVar16 = (int)uVar17;
        uVar14 = (ulonglong)(iVar11 + 1);
        uVar17 = (ulonglong)(iVar16 + 4);
        piVar12[iVar16] = iVar2;
        piVar12[(longlong)iVar16 + 1] = iVar7;
        (piVar12 + (longlong)iVar16 + 2)[0] = -2;
        (piVar12 + (longlong)iVar16 + 2)[1] = -1;
      }
      else {
        rcContext::log(param_1,RC_LOG_ERROR,"addEdge: Too many edges (%d/%d).");
      }
LAB_1446b71c3:
      uVar8 = uVar8 - 1;
      uVar6 = uVar10 + 4;
      uVar13 = uVar10;
    } while (uVar8 != 0);
    local_res20[0] = (uint)uVar14;
  }
  uVar5 = (uint)uVar14;
  uVar8 = uVar15;
  if (0 < (int)uVar5) {
    do {
      iVar7 = (int)uVar15;
      if (*(int *)((longlong)param_7->m_data + uVar8 + 8) == -1) {
        completeFacet(param_1,param_3,param_2,param_7->m_data,(int *)local_res20,iVar18,local_58,
                      iVar7);
        uVar14 = (ulonglong)local_res20[0];
      }
      if (*(int *)((longlong)param_7->m_data + uVar8 + 0xc) == -1) {
        completeFacet(param_1,param_3,param_2,param_7->m_data,(int *)local_res20,iVar18,local_58,
                      iVar7);
        uVar14 = (ulonglong)local_res20[0];
      }
      uVar15 = (ulonglong)(iVar7 + 1U);
      uVar5 = (uint)uVar14;
      uVar8 = uVar8 + 0x10;
    } while ((int)(iVar7 + 1U) < (int)uVar5);
  }
  uVar8 = 0;
  uVar1 = local_58[0] * 4;
  rcIntArray::resize(param_6,uVar1);
  uVar9 = 0;
  if ((0 < (int)uVar1) && (3 < uVar1)) {
    _Dst = (rcIntArray *)param_6->m_data;
    uVar14 = uVar8;
    if ((param_6 < _Dst) ||
       (uVar14 = 0,
       (rcIntArray *)((longlong)&_Dst->m_data + (longlong)(int)(uVar1 - 1) * 4) < param_6)) {
      do {
        uVar9 = (int)uVar14 + 4;
        uVar14 = (ulonglong)uVar9;
      } while ((int)uVar9 < (int)uVar1);
      memset(_Dst,-1,(longlong)((int)(uVar1 + 3 + ((int)(uVar1 + 3) >> 0x1f & 3U)) >> 2) << 4);
    }
  }
  for (lVar4 = (longlong)(int)uVar9; lVar4 < (int)uVar1; lVar4 = lVar4 + 1) {
    param_6->m_data[lVar4] = -1;
  }
  if (0 < (int)uVar5) {
    uVar15 = (ulonglong)uVar5;
    uVar14 = uVar8;
    do {
      piVar12 = param_7->m_data;
      iVar18 = *(int *)(uVar14 + 0xc + (longlong)piVar12);
      if (-1 < iVar18) {
        iVar18 = iVar18 * 4;
        piVar3 = param_6->m_data + iVar18;
        iVar18 = param_6->m_data[iVar18];
        if (iVar18 == -1) {
          *piVar3 = *(int *)(uVar14 + (longlong)piVar12);
          piVar3[1] = *(int *)(uVar14 + 4 + (longlong)piVar12);
        }
        else {
          iVar7 = *(int *)(uVar14 + 4 + (longlong)piVar12);
          if (iVar18 == iVar7) {
            piVar3[2] = *(int *)(uVar14 + (longlong)piVar12);
          }
          else if (piVar3[1] == *(int *)(uVar14 + (longlong)piVar12)) {
            piVar3[2] = iVar7;
          }
        }
      }
      iVar18 = *(int *)(uVar14 + 8 + (longlong)piVar12);
      if (-1 < iVar18) {
        iVar18 = iVar18 * 4;
        piVar3 = param_6->m_data + iVar18;
        iVar18 = param_6->m_data[iVar18];
        if (iVar18 == -1) {
          *piVar3 = *(int *)(uVar14 + 4 + (longlong)piVar12);
          piVar3[1] = *(int *)(uVar14 + (longlong)piVar12);
        }
        else {
          iVar7 = *(int *)(uVar14 + 4 + (longlong)piVar12);
          if (iVar18 == *(int *)(uVar14 + (longlong)piVar12)) {
            piVar3[2] = iVar7;
          }
          else if (piVar3[1] == iVar7) {
            piVar3[2] = *(int *)(uVar14 + (longlong)piVar12);
          }
        }
      }
      uVar14 = uVar14 + 0x10;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  uVar14 = uVar8;
  if (0 < (int)(param_6->m_size + (param_6->m_size >> 0x1f & 3U)) >> 2) {
    do {
      iVar18 = (int)uVar14;
      piVar12 = (int *)((longlong)param_6->m_data + uVar8);
      if (((*piVar12 == -1) || (piVar12[1] == -1)) || (piVar12[2] == -1)) {
        rcContext::log(param_1,RC_LOG_WARNING,"delaunayHull: Removing dangling face %d [%d,%d,%d].")
        ;
        *piVar12 = param_6->m_data[(longlong)param_6->m_size + -4];
        piVar12[1] = param_6->m_data[(longlong)param_6->m_size + -3];
        piVar12[2] = param_6->m_data[(longlong)param_6->m_size + -2];
        piVar12[3] = param_6->m_data[(longlong)param_6->m_size + -1];
        rcIntArray::resize(param_6,param_6->m_size + -4);
        iVar18 = iVar18 + -1;
        uVar8 = uVar8 - 0x10;
      }
      uVar8 = uVar8 + 0x10;
      uVar14 = (ulonglong)(iVar18 + 1U);
    } while ((int)(iVar18 + 1U) < (int)(param_6->m_size + (param_6->m_size >> 0x1f & 3U)) >> 2);
  }
  return;
}

// diagonalie @ 1446b74d0

bool __cdecl diagonalie(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  int local_res8;
  
  uVar19 = (ulonglong)param_3;
  lVar17 = (longlong)param_1;
  lVar14 = (longlong)param_2;
  piVar1 = param_4 + ((param_5[lVar17] & 0xfffffffU) << 2);
  piVar2 = param_4 + ((param_5[lVar14] & 0xfffffffU) << 2);
  if (0 < param_3) {
    lVar15 = 0;
    local_res8 = 1;
    uVar12 = uVar19;
    uVar20 = uVar19;
    do {
      iVar16 = (int)uVar20;
      lVar13 = lVar15 + 1;
      if (iVar16 <= local_res8) {
        lVar13 = 0;
      }
      if ((((lVar15 != lVar17) && (lVar13 != lVar17)) && (lVar15 != lVar14)) && (lVar13 != lVar14))
      {
        iVar11 = *piVar1;
        uVar10 = (param_5[lVar15] & 0xfffffffU) << 2;
        piVar3 = param_4 + uVar10;
        piVar4 = param_4 + ((param_5[lVar13] & 0xfffffffU) << 2);
        if ((iVar11 == param_4[uVar10]) && (piVar1[2] == piVar3[2])) {
          uVar12 = (longlong)iVar16;
        }
        else {
          iVar5 = *piVar2;
          if ((iVar5 == param_4[uVar10]) && (piVar2[2] == piVar3[2])) {
            uVar12 = (longlong)iVar16;
          }
          else {
            iVar6 = *piVar4;
            if (((iVar11 == iVar6) && (piVar1[2] == piVar4[2])) ||
               ((iVar5 == iVar6 && (piVar2[2] == piVar4[2])))) {
              uVar12 = (ulonglong)iVar16;
            }
            else {
              iVar16 = piVar1[2];
              iVar22 = piVar2[2] - iVar16;
              iVar18 = (piVar3[2] - iVar16) * (iVar5 - iVar11) - (*piVar3 - iVar11) * iVar22;
              if (iVar18 != 0) {
                iVar22 = (piVar4[2] - iVar16) * (iVar5 - iVar11) - (iVar6 - iVar11) * iVar22;
                if (iVar22 != 0) {
                  iVar7 = piVar3[2];
                  iVar21 = piVar4[2] - iVar7;
                  iVar8 = *piVar3;
                  iVar16 = (iVar16 - iVar7) * (iVar6 - iVar8) - (iVar11 - iVar8) * iVar21;
                  if ((((iVar16 != 0) &&
                       (iVar11 = (piVar2[2] - iVar7) * (iVar6 - iVar8) - (iVar5 - iVar8) * iVar21,
                       iVar11 != 0)) &&
                      ((char)((byte)((uint)iVar22 >> 0x18) ^ (byte)((uint)iVar18 >> 0x18)) < '\0'))
                     && ((char)((byte)((uint)iVar11 >> 0x18) ^ (byte)((uint)iVar16 >> 0x18)) < '\0')
                     ) {
                    return false;
                  }
                }
              }
              bVar9 = between(piVar1,piVar2,piVar3);
              if (((bVar9) || (bVar9 = between(piVar1,piVar2,piVar4), bVar9)) ||
                 ((bVar9 = between(piVar3,piVar4,piVar1), bVar9 ||
                  (bVar9 = between(piVar3,piVar4,piVar2), bVar9)))) {
                return false;
              }
              uVar20 = (ulonglong)(uint)param_3;
              uVar12 = uVar19;
            }
          }
        }
      }
      local_res8 = local_res8 + 1;
      lVar15 = lVar15 + 1;
    } while (lVar15 < (longlong)uVar12);
  }
  return true;
}

// distancePtSeg2d @ 1446b7760

double __cdecl distancePtSeg2d(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = *param_2;
  dVar4 = *param_3 - dVar2;
  dVar5 = param_3[2] - param_2[2];
  dVar3 = dVar5 * dVar5 + dVar4 * dVar4;
  dVar1 = (param_1[2] - param_2[2]) * dVar5 + (*param_1 - dVar2) * dVar4;
  if (0.0 < dVar3) {
    dVar1 = dVar1 / dVar3;
  }
  dVar3 = 0.0;
  if ((0.0 <= dVar1) && (dVar3 = dVar1, __real_3ff0000000000000 <= dVar1)) {
    dVar3 = __real_3ff0000000000000;
  }
  dVar1 = (dVar3 * dVar5 + param_2[2]) - param_1[2];
  dVar2 = (dVar3 * dVar4 + dVar2) - *param_1;
  return dVar1 * dVar1 + dVar2 * dVar2;
}

// expandRegions @ 1446b7800

ushort * __cdecl
expandRegions(int param_1,ushort param_2,rcCompactHeightfield *param_3,ushort *param_4,
             ushort *param_5,ushort *param_6,ushort *param_7,rcIntArray *param_8)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ushort *_Dst;
  ushort *_Dst_00;
  rcIntArray *prVar6;
  rcIntArray *prVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ushort uVar15;
  uchar *puVar16;
  ushort uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  longlong local_60;
  
  prVar7 = param_8;
  uVar2 = param_3->width;
  uVar14 = (ulonglong)(int)uVar2;
  iVar9 = param_3->height;
  rcIntArray::resize(param_8,0);
  iVar19 = 0;
  if (0 < iVar9) {
    lVar10 = uVar14 * 4;
    local_60 = 0;
    do {
      iVar20 = 0;
      lVar18 = local_60;
      if (0 < (int)uVar14) {
        do {
          uVar11 = *(uint *)((longlong)&param_3->cells->index + lVar18);
          uVar8 = uVar11 & 0xffffff;
          uVar12 = (ulonglong)uVar8;
          uVar13 = (ulonglong)(uVar8 + (uVar11 >> 0x18));
          uVar14 = uVar12;
          if (uVar12 < uVar13) {
            do {
              if (((param_2 <= param_3->dist[uVar12]) && (param_4[uVar12] == 0)) &&
                 (param_3->areas[uVar12] != '\0')) {
                rcIntArray::resize(param_8,param_8->m_size + 1);
                param_8->m_data[(longlong)param_8->m_size + -1] = iVar20;
                rcIntArray::resize(param_8,param_8->m_size + 1);
                param_8->m_data[(longlong)param_8->m_size + -1] = iVar19;
                rcIntArray::resize(param_8,param_8->m_size + 1);
                param_8->m_data[(longlong)param_8->m_size + -1] = (int)uVar14;
              }
              uVar12 = uVar12 + 1;
              uVar14 = (ulonglong)((int)uVar14 + 1);
            } while ((longlong)uVar12 < (longlong)uVar13);
          }
          uVar14 = (ulonglong)uVar2;
          iVar20 = iVar20 + 1;
          lVar18 = lVar18 + 4;
        } while (iVar20 < (int)uVar2);
      }
      local_60 = local_60 + lVar10;
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar9);
  }
  param_8 = (rcIntArray *)0x0;
  iVar9 = prVar7->m_size;
  uVar11 = 0;
  prVar6 = param_8;
  do {
    _Dst_00 = param_7;
    _Dst = param_6;
    param_7 = param_5;
    param_6 = param_4;
    param_8._0_4_ = uVar11;
    if (iVar9 < 1) {
      return param_6;
    }
    iVar20 = 0;
    memcpy(_Dst,param_6,(longlong)param_3->spanCount * 2);
    memcpy(_Dst_00,param_7,(longlong)param_3->spanCount * 2);
    iVar9 = prVar7->m_size;
    iVar19 = 0;
    if (0 < iVar9) {
      lVar10 = 8;
      do {
        piVar5 = prVar7->m_data;
        iVar9 = *(int *)(lVar10 + (longlong)piVar5);
        iVar3 = *(int *)(lVar10 + -8 + (longlong)piVar5);
        iVar4 = *(int *)(lVar10 + -4 + (longlong)piVar5);
        if (iVar9 < 0) {
LAB_1446b7c27:
          iVar20 = iVar20 + 1;
        }
        else {
          uVar17 = param_6[iVar9];
          uVar15 = 0xffff;
          uVar11 = param_3->spans[iVar9].con;
          if (((uVar11 & 0xff) != 0xff) &&
             (uVar8 = ((uint)param_3->cells[(int)(iVar4 * uVar2 + -1 + iVar3)] & 0xffffff) +
                      (uVar11 & 0xff), param_3->areas[uVar8] == param_3->areas[iVar9])) {
            uVar1 = param_6[uVar8];
            if ((uVar1 != 0) && ((-1 < (short)uVar1 && (param_7[uVar8] + 2 < 0xffff)))) {
              uVar15 = param_7[uVar8] + 2;
              uVar17 = uVar1;
            }
          }
          uVar8 = uVar11 >> 8 & 0xff;
          if ((uVar8 != 0xff) &&
             (uVar8 = ((uint)param_3->cells[(int)((iVar4 + 1) * uVar2 + iVar3)] & 0xffffff) + uVar8,
             param_3->areas[uVar8] == param_3->areas[iVar9])) {
            uVar1 = param_6[uVar8];
            if ((uVar1 != 0) && ((-1 < (short)uVar1 && (param_7[uVar8] + 2 < (uint)uVar15)))) {
              uVar15 = param_7[uVar8] + 2;
              uVar17 = uVar1;
            }
          }
          uVar8 = uVar11 >> 0x10 & 0xff;
          if (uVar8 == 0xff) {
LAB_1446b7b87:
            puVar16 = param_3->areas;
          }
          else {
            uVar8 = ((uint)param_3->cells[(int)(iVar4 * uVar2 + 1 + iVar3)] & 0xffffff) + uVar8;
            puVar16 = param_3->areas;
            if (puVar16[uVar8] == puVar16[iVar9]) {
              uVar1 = param_6[uVar8];
              if ((uVar1 != 0) && (-1 < (short)uVar1)) {
                if (param_7[uVar8] + 2 < (uint)uVar15) {
                  uVar15 = param_7[uVar8] + 2;
                  uVar17 = uVar1;
                }
                goto LAB_1446b7b87;
              }
            }
          }
          if ((uVar11 >> 0x18 == 0xff) ||
             (uVar11 = ((uint)param_3->cells[(int)((iVar4 + -1) * uVar2 + iVar3)] & 0xffffff) +
                       (uVar11 >> 0x18), puVar16[uVar11] != puVar16[iVar9])) {
LAB_1446b7bfd:
            if (uVar17 == 0) goto LAB_1446b7c27;
          }
          else {
            uVar1 = param_6[uVar11];
            if ((uVar1 == 0) || (((short)uVar1 < 0 || ((uint)uVar15 <= param_7[uVar11] + 2))))
            goto LAB_1446b7bfd;
            uVar15 = param_7[uVar11] + 2;
            uVar17 = uVar1;
          }
          *(undefined4 *)(lVar10 + (longlong)piVar5) = 0xffffffff;
          _Dst[iVar9] = uVar17;
          _Dst_00[iVar9] = uVar15;
        }
        lVar10 = lVar10 + 0xc;
        iVar9 = prVar7->m_size;
        iVar19 = iVar19 + 3;
      } while (iVar19 < iVar9);
      param_8._0_4_ = (uint)prVar6;
    }
    if (iVar20 * 3 == iVar9) {
      return _Dst;
    }
    uVar11 = (uint)param_8;
    param_4 = _Dst;
    param_5 = _Dst_00;
    if (param_2 != 0) {
      uVar11 = (uint)param_8 + 1;
      param_8 = (rcIntArray *)(ulonglong)uVar11;
      prVar6 = param_8;
      if (param_1 <= (int)uVar11) {
        return _Dst;
      }
    }
  } while( true );
}

// filterSmallRegions @ 1446b7cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
filterSmallRegions(rcContext *param_1,int param_2,int param_3,int param_4,ushort *param_5,
                  rcCompactHeightfield *param_6,ushort *param_7)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  rcRegion *prVar10;
  ushort *puVar11;
  uint *puVar12;
  int *piVar13;
  byte *pbVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ushort uVar18;
  byte *pbVar19;
  rcRegion *prVar20;
  rcIntArray *prVar21;
  uint uVar22;
  ulonglong uVar23;
  rcRegion *prVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  ushort uVar30;
  int iVar31;
  ulonglong uVar32;
  uint *puVar33;
  int local_e8;
  int local_d8;
  int local_d4;
  int local_d0;
  longlong local_b8;
  rcIntArray local_b0;
  rcIntArray local_a0;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar26 = param_6->width;
  uVar32 = (ulonglong)(int)uVar26;
  uVar22 = *param_5 + 1;
  iVar9 = param_6->height;
  prVar10 = rcAlloc(uVar22 * 0x30,RC_ALLOC_TEMP);
  if (prVar10 == (rcRegion *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,"filterSmallRegions: Out of memory \'regions\' (%d).");
    return false;
  }
  uVar27 = 0;
  if (uVar22 != 0) {
    puVar11 = &prVar10->id;
    uVar15 = uVar27;
    do {
      *(byte *)((longlong)puVar11 + 3) = *(byte *)((longlong)puVar11 + 3) & 0xfc;
      *puVar11 = (ushort)uVar15;
      uVar15 = uVar15 + 1;
      ((rcRegion *)(puVar11 + -4))->chunkId = 0;
      ((rcRegion *)(puVar11 + -4))->spanCount = 0;
      *(uchar *)(puVar11 + 1) = '\0';
      ((rcIntArray *)(puVar11 + 4))->m_data = (int *)0x0;
      *(undefined8 *)(puVar11 + 8) = 0;
      ((rcIntArray *)(puVar11 + 0xc))->m_data = (int *)0x0;
      *(undefined8 *)(puVar11 + 0x10) = 0;
      puVar11 = puVar11 + 0x18;
    } while ((int)uVar15 < (int)uVar22);
  }
  uVar6 = _UNK_150d9fb28;
  uVar23 = ___xmm_ffffffff000000000000000100000000;
  uVar5 = _UNK_150ae1718;
  uVar4 = ___xmm_000000000000000100000000ffffffff;
  local_d4 = 0;
  if (0 < iVar9) {
    lVar16 = uVar32 << 2;
    local_70 = lVar16;
    local_b8 = 0;
    do {
      local_d8 = 0;
      lVar17 = local_b8;
      if (0 < (int)uVar32) {
        do {
          puVar33 = (uint *)((longlong)&param_6->cells->index + lVar17);
          uVar15 = *puVar33;
          uVar8 = uVar15 & 0xffffff;
          local_80 = (ulonglong)uVar8;
          uVar29 = (ulonglong)(uVar8 + (uVar15 >> 0x18));
          local_88 = lVar17;
          if (local_80 < uVar29) {
            uVar32 = (ulonglong)uVar8;
            local_90 = (ulonglong)uVar8 * 0xc;
            do {
              iVar28 = (int)local_80;
              uVar18 = param_7[uVar32];
              if ((uVar18 != 0) && (uVar18 < uVar22)) {
                prVar24 = prVar10 + uVar18;
                prVar24->spanCount = prVar24->spanCount + 1;
                uVar25 = (ulonglong)(*puVar33 & 0xffffff);
                if (uVar25 < uVar29) {
                  do {
                    if (((uVar32 != uVar25) && (param_7[uVar25] != 0)) &&
                       (uVar15 = (uint)param_7[uVar25], uVar15 < uVar22)) {
                      iVar28 = (prVar24->floors).m_size;
                      if (0 < iVar28) {
                        puVar12 = (uint *)(prVar24->floors).m_data;
                        uVar8 = uVar27;
                        do {
                          if (*puVar12 == uVar15) goto LAB_1446b7edd;
                          uVar8 = uVar8 + 1;
                          puVar12 = puVar12 + 1;
                        } while ((int)uVar8 < iVar28);
                      }
                      rcIntArray::resize(&prVar24->floors,iVar28 + 1);
                      (prVar24->floors).m_data[(longlong)(prVar24->floors).m_size + -1] = uVar15;
                    }
LAB_1446b7edd:
                    uVar25 = uVar25 + 1;
                  } while ((longlong)uVar25 < (longlong)uVar29);
                  iVar28 = (int)local_80;
                }
                if ((prVar24->connections).m_size < 1) {
                  prVar24->areaType = param_6->areas[uVar32];
                  prVar24->chunkId = (local_d8 / param_4 - local_d4 % param_4) + local_d4;
                  uVar15 = uVar27;
                  do {
                    uVar18 = 0;
                    uVar8 = *(uint *)((longlong)&param_6->spans->con + local_90) >>
                            ((char)uVar15 * '\b' & 0x1fU) & 0xff;
                    if (uVar8 != 0xff) {
                      local_80 = uVar23;
                      uStack_78 = uVar6;
                      local_68 = uVar4;
                      uStack_60 = uVar5;
                      uVar18 = param_7[((uint)param_6->cells
                                              [(*(int *)((longlong)&local_80 +
                                                        (ulonglong)(uVar15 & 3) * 4) + local_d4) *
                                               param_6->width +
                                               *(int *)((longlong)&local_68 +
                                                       (ulonglong)(uVar15 & 3) * 4) + local_d8] &
                                       0xffffff) + uVar8];
                    }
                    if (uVar18 != param_7[uVar32]) {
                      if (uVar15 != 0xffffffff) {
                        RecastRegionFunc::walkContour
                                  (local_d8,local_d4,iVar28,uVar15,param_6,param_7,
                                   &prVar24->connections);
                      }
                      break;
                    }
                    uVar15 = uVar15 + 1;
                  } while ((int)uVar15 < 4);
                }
              }
              local_80 = (ulonglong)(iVar28 + 1);
              local_90 = local_90 + 0xc;
              uVar32 = uVar32 + 1;
            } while ((longlong)uVar32 < (longlong)uVar29);
            uVar32 = (ulonglong)uVar26;
          }
          local_d8 = local_d8 + 1;
          local_88 = local_88 + 4;
          lVar16 = local_70;
          lVar17 = local_88;
        } while (local_d8 < (int)uVar32);
      }
      local_d4 = local_d4 + 1;
      local_b8 = local_b8 + lVar16;
    } while (local_d4 < iVar9);
  }
  local_b0.m_data = (int *)0x0;
  local_b0.m_size = 0;
  local_b0.m_cap = 0;
  rcIntArray::resize(&local_b0,0x20);
  local_a0.m_data = (int *)0x0;
  local_a0.m_size = 0;
  local_a0.m_cap = 0;
  rcIntArray::resize(&local_a0,0x20);
  uVar32 = (ulonglong)uVar22;
  local_d0 = 0;
  if (uVar22 != 0) {
    pbVar19 = &prVar10->field_0xb;
    uVar23 = uVar32;
    do {
      if (((*(short *)(pbVar19 + -3) != 0) && (-1 < *(short *)(pbVar19 + -3))) &&
         ((*(int *)(pbVar19 + -7) != 0 && ((*pbVar19 & 2) == 0)))) {
        bVar7 = false;
        iVar28 = 0;
        local_88 = uVar23;
        rcIntArray::resize(&local_b0,0);
        rcIntArray::resize(&local_a0,0);
        *pbVar19 = *pbVar19 | 2;
        rcIntArray::resize(&local_b0,local_b0.m_size + 1);
        local_b0.m_data[local_b0.m_size + -1] = local_d0;
        iVar9 = local_b0.m_size;
        while (iVar9 != 0) {
          if (0 < iVar9) {
            iVar9 = iVar9 + -1;
            local_b0.m_size = iVar9;
          }
          iVar9 = local_b0.m_data[iVar9];
          iVar28 = iVar28 + prVar10[iVar9].spanCount;
          rcIntArray::resize(&local_a0,local_a0.m_size + 1);
          local_a0.m_data[local_a0.m_size + -1] = iVar9;
          iVar31 = 0;
          if (0 < prVar10[iVar9].connections.m_size) {
            lVar16 = 0;
            do {
              uVar26 = *(uint *)(lVar16 + (longlong)prVar10[iVar9].connections.m_data);
              if ((uVar26 >> 0xf & 1) == 0) {
                if (prVar10[(int)uVar26].visited == '\0') {
                  uVar18 = prVar10[(int)uVar26].id;
                  if ((uVar18 != 0) && (-1 < (short)uVar18)) {
                    rcIntArray::resize(&local_b0,local_b0.m_size + 1);
                    local_b0.m_data[local_b0.m_size + -1] = (uint)uVar18;
                    prVar10[(int)uVar26].visited = '\x01';
                  }
                }
              }
              else {
                bVar7 = true;
              }
              iVar31 = iVar31 + 1;
              lVar16 = lVar16 + 4;
            } while (iVar31 < prVar10[iVar9].connections.m_size);
          }
          uVar23 = local_88;
          iVar9 = local_b0.m_size;
        }
        if (((iVar28 < param_2) && (!bVar7)) && (uVar29 = 0, uVar25 = uVar29, 0 < local_a0.m_size))
        {
          do {
            uVar26 = (int)uVar25 + 1;
            prVar10[*(int *)((longlong)local_a0.m_data + uVar29)].spanCount = 0;
            prVar10[*(int *)((longlong)local_a0.m_data + uVar29)].id = 0;
            uVar29 = uVar29 + 4;
            uVar25 = (ulonglong)uVar26;
          } while ((int)uVar26 < local_a0.m_size);
        }
      }
      local_d0 = local_d0 + 1;
      pbVar19 = pbVar19 + 0x30;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
    local_88 = 0;
  }
  do {
    uVar23 = (ulonglong)uVar22;
    iVar9 = 0;
    local_e8 = 0;
    prVar24 = prVar10;
    if (uVar23 == 0) {
      uVar18 = 0;
      goto LAB_1446b850e;
    }
    do {
      lVar16 = 0;
      uVar18 = prVar24->id;
      if (((uVar18 != 0) && (-1 < (short)uVar18)) && (iVar9 = local_e8, prVar24->spanCount != 0)) {
        if ((param_3 < prVar24->spanCount) && (iVar28 = (prVar24->connections).m_size, 0 < iVar28))
        {
          piVar13 = (prVar24->connections).m_data;
          do {
            if (*piVar13 == 0) goto LAB_1446b845c;
            lVar16 = lVar16 + 1;
            piVar13 = piVar13 + 1;
          } while (lVar16 < iVar28);
          uVar26 = (prVar24->connections).m_size;
        }
        else {
          uVar26 = (prVar24->connections).m_size;
          if ((int)uVar26 < 1) goto LAB_1446b845c;
        }
        local_d8 = 0xfffffff;
        uVar25 = (ulonglong)uVar18;
        iVar28 = 0xfffffff;
        puVar33 = (uint *)(prVar24->connections).m_data;
        uVar29 = (ulonglong)uVar26;
        do {
          if ((*puVar33 >> 0xf & 1) == 0) {
            prVar20 = prVar10 + (int)*puVar33;
            uVar30 = prVar20->id;
            if ((((uVar30 != 0) && (-1 < (short)uVar30)) &&
                (iVar31 = prVar20->spanCount, iVar31 < iVar28)) &&
               ((bVar7 = canMergeWithRegion(prVar24,prVar20), iVar28 = local_d8, bVar7 &&
                (bVar7 = canMergeWithRegion(prVar20,prVar24), bVar7)))) {
              uVar25 = (ulonglong)uVar30;
              iVar28 = iVar31;
              local_d8 = iVar31;
            }
          }
          puVar33 = puVar33 + 1;
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
        uVar30 = (ushort)uVar25;
        if (uVar30 != uVar18) {
          bVar7 = mergeRegions(prVar10 + uVar25,prVar24);
          iVar28 = 0;
          if (bVar7) {
            puVar11 = &prVar10->id;
            uVar29 = uVar32;
            do {
              uVar2 = *puVar11;
              if ((uVar2 != 0) && (-1 < (short)uVar2)) {
                if (uVar2 == uVar18) {
                  *puVar11 = uVar30;
                }
                replaceNeighbour(prVar10 + iVar28,uVar18,uVar30);
              }
              iVar28 = iVar28 + 1;
              puVar11 = puVar11 + 0x18;
              uVar29 = uVar29 - 1;
            } while (uVar29 != 0);
            local_e8 = local_e8 + 1;
            iVar9 = local_e8;
          }
        }
      }
LAB_1446b845c:
      lVar16 = 0;
      prVar24 = prVar24 + 1;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  } while (0 < iVar9);
  pbVar19 = &prVar10->field_0xb;
  uVar23 = uVar32;
  do {
    bVar1 = *pbVar19;
    *pbVar19 = bVar1 & 0xfe;
    if ((*(short *)(pbVar19 + -3) != 0) && (-1 < *(short *)(pbVar19 + -3))) {
      *pbVar19 = bVar1 & 0xfe | 1;
    }
    pbVar19 = pbVar19 + 0x30;
    uVar23 = uVar23 - 1;
  } while (uVar23 != 0);
  pbVar19 = &prVar10->field_0xb;
  uVar18 = 0;
  do {
    if ((*pbVar19 & 1) != 0) {
      sVar3 = *(short *)(pbVar19 + -3);
      uVar18 = uVar18 + 1;
      if (lVar16 < (longlong)uVar32) {
        lVar17 = uVar32 - lVar16;
        pbVar14 = pbVar19;
        do {
          if (*(short *)(pbVar14 + -3) == sVar3) {
            *pbVar14 = *pbVar14 & 0xfe;
            *(ushort *)(pbVar14 + -3) = uVar18;
          }
          pbVar14 = pbVar14 + 0x30;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
    }
    lVar16 = lVar16 + 1;
    pbVar19 = pbVar19 + 0x30;
  } while (lVar16 < (longlong)uVar32);
LAB_1446b850e:
  uVar32 = (ulonglong)uVar22;
  iVar9 = 0;
  *param_5 = uVar18;
  if (0 < param_6->spanCount) {
    do {
      if (-1 < (short)*param_7) {
        *param_7 = prVar10[*param_7].id;
      }
      iVar9 = iVar9 + 1;
      param_7 = param_7 + 1;
    } while (iVar9 < param_6->spanCount);
  }
  if (uVar32 != 0) {
    prVar21 = &prVar10->connections;
    do {
      rcFree(prVar21[1].m_data);
      rcFree(prVar21->m_data);
      prVar21 = prVar21 + 3;
      uVar32 = uVar32 - 1;
    } while (uVar32 != 0);
  }
  rcFree(prVar10);
  rcFree(local_a0.m_data);
  rcFree(local_b0.m_data);
  return true;
}

// fixLayerConnections @ 1446b85c0

void __cdecl fixLayerConnections(rcHeightfieldLayer *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  iVar3 = param_1->height;
  iVar6 = 0;
  iVar4 = param_1->width;
  if (0 < iVar3) {
    iVar9 = 0;
    do {
      iVar7 = 0;
      if (0 < iVar4) {
        lVar8 = (longlong)(iVar9 + 1);
        do {
          puVar5 = param_1->cons;
          bVar2 = puVar5[lVar8 + -1];
          if ((((bVar2 & 1) == 0) && (-1 < iVar7 + -1)) && (iVar7 + -1 < iVar4)) {
            puVar5[lVar8 + -2] = puVar5[lVar8 + -2] & 0xfb;
          }
          if (((bVar2 & 2) == 0) && (iVar6 + 1 < iVar3)) {
            param_1->cons[(iVar6 + 1) * iVar4 + iVar7] =
                 param_1->cons[(iVar6 + 1) * iVar4 + iVar7] & 0xf7;
          }
          if ((((bVar2 & 4) == 0) && (-1 < iVar7 + 1)) && (iVar7 + 1 < iVar4)) {
            param_1->cons[lVar8] = param_1->cons[lVar8] & 0xfe;
          }
          if ((((bVar2 & 8) == 0) && (iVar1 = iVar6 + -1, -1 < iVar1)) && (iVar1 < iVar3)) {
            param_1->cons[iVar1 * iVar4 + iVar7] = param_1->cons[iVar1 * iVar4 + iVar7] & 0xfd;
          }
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 1;
        } while (iVar7 < iVar4);
      }
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + iVar4;
    } while (iVar6 < iVar3);
  }
  return;
}

// floodRegion @ 1446b86e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
floodRegion(int param_1,int param_2,int param_3,ushort param_4,ushort param_5,
           rcCompactHeightfield *param_6,ushort *param_7,ushort *param_8,rcIntArray *param_9)

{
  uint *puVar1;
  longlong lVar2;
  uchar uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  rcCompactSpan *prVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ushort *puVar14;
  ushort uVar15;
  ushort uVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar14 = param_7;
  iVar5 = param_6->width;
  uVar3 = param_6->areas[param_3];
  rcIntArray::resize(param_9,0);
  rcIntArray::resize(param_9,param_9->m_size + 1);
  param_9->m_data[(longlong)param_9->m_size + -1] = param_1;
  rcIntArray::resize(param_9,param_9->m_size + 1);
  param_9->m_data[(longlong)param_9->m_size + -1] = param_2;
  rcIntArray::resize(param_9,param_9->m_size + 1);
  param_9->m_data[(longlong)param_9->m_size + -1] = param_3;
  param_7[param_3] = param_5;
  param_8[param_3] = 0;
  uVar13 = _UNK_150d9fb28;
  uVar12 = ___xmm_ffffffff000000000000000100000000;
  uVar11 = _UNK_150ae1718;
  uVar10 = ___xmm_000000000000000100000000ffffffff;
  uVar15 = param_4 - 2;
  if (param_4 < 2) {
    uVar15 = 0;
  }
  iVar6 = param_9->m_size;
  param_7._0_4_ = 0;
  do {
    if (iVar6 < 1) {
      return 0 < (int)param_7;
    }
    uVar22 = 0;
    piVar8 = param_9->m_data;
    iVar18 = iVar6 + -1;
    param_9->m_size = iVar18;
    iVar7 = piVar8[iVar18];
    if (0 < iVar18) {
      iVar18 = iVar6 + -2;
      param_9->m_size = iVar18;
    }
    iVar6 = piVar8[iVar18];
    if (0 < iVar18) {
      iVar18 = iVar18 + -1;
      param_9->m_size = iVar18;
    }
    prVar9 = param_6->spans;
    iVar18 = piVar8[iVar18];
    puVar1 = &prVar9[iVar7].con;
    uVar16 = 0;
    do {
      bVar17 = (char)uVar22 * '\b';
      uVar20 = *puVar1 >> (bVar17 & 0x1f) & 0xff;
      if (uVar20 != 0xff) {
        local_88 = uVar10;
        uStack_80 = uVar11;
        lVar2 = (ulonglong)(uVar22 & 3) * 4;
        iVar19 = iVar18 + *(int *)((longlong)&local_88 + lVar2);
        local_88 = uVar12;
        uStack_80 = uVar13;
        iVar23 = *(int *)((longlong)&local_88 + lVar2) + iVar6;
        uVar20 = uVar20 + ((uint)param_6->cells[iVar23 * iVar5 + iVar19] & 0xffffff);
        if (param_6->areas[uVar20] == uVar3) {
          uVar4 = puVar14[uVar20];
          if (-1 < (short)uVar4) {
            if ((uVar4 != 0) && (uVar4 != param_5)) {
              uVar16 = uVar4;
            }
            uVar21 = uVar22 + 1 & 3;
            uVar20 = prVar9[uVar20].con >> (char)uVar21 * '\b' & 0xff;
            if (uVar20 != 0xff) {
              local_78 = uVar10;
              uStack_70 = uVar11;
              uVar20 = ((uint)param_6->cells
                              [(*(int *)((longlong)&local_88 + (ulonglong)uVar21 * 4) + iVar23) *
                               iVar5 + *(int *)((longlong)&local_78 + (ulonglong)uVar21 * 4) +
                               iVar19] & 0xffffff) + uVar20;
              if (param_6->areas[uVar20] == uVar3) {
                uVar4 = puVar14[uVar20];
                if ((uVar4 != 0) && (uVar4 != param_5)) {
                  uVar16 = uVar4;
                }
                goto LAB_1446b89a4;
              }
            }
          }
        }
      }
LAB_1446b89a4:
      uVar20 = prVar9[iVar7].con >> (bVar17 + 8 & 0x1f) & 0xff;
      if (uVar20 != 0xff) {
        local_88 = uVar10;
        uStack_80 = uVar11;
        lVar2 = (ulonglong)(uVar22 + 1 & 3) * 4;
        iVar23 = *(int *)((longlong)&local_88 + lVar2) + iVar18;
        local_88 = uVar12;
        uStack_80 = uVar13;
        iVar19 = *(int *)((longlong)&local_88 + lVar2) + iVar6;
        uVar20 = ((uint)param_6->cells[iVar19 * iVar5 + iVar23] & 0xffffff) + uVar20;
        if (param_6->areas[uVar20] == uVar3) {
          uVar4 = puVar14[uVar20];
          if (-1 < (short)uVar4) {
            if ((uVar4 != 0) && (uVar4 != param_5)) {
              uVar16 = uVar4;
            }
            uVar21 = uVar22 - 2 & 3;
            uVar20 = prVar9[uVar20].con >> (char)uVar21 * '\b' & 0xff;
            if (uVar20 != 0xff) {
              local_78 = uVar10;
              uStack_70 = uVar11;
              uVar20 = ((uint)param_6->cells
                              [(*(int *)((longlong)&local_88 + (ulonglong)uVar21 * 4) + iVar19) *
                               iVar5 + *(int *)((longlong)&local_78 + (ulonglong)uVar21 * 4) +
                               iVar23] & 0xffffff) + uVar20;
              if (((param_6->areas[uVar20] == uVar3) && (uVar4 = puVar14[uVar20], uVar4 != 0)) &&
                 (uVar4 != param_5)) {
                uVar16 = uVar4;
              }
            }
          }
        }
      }
      uVar22 = uVar22 + 2;
    } while ((int)uVar22 < 4);
    if (uVar16 == 0) {
      param_7._0_4_ = (int)param_7 + 1;
      uVar22 = prVar9[iVar7].con & 0xff;
      if (uVar22 != 0xff) {
        uVar22 = ((uint)param_6->cells[iVar6 * iVar5 + iVar18 + -1] & 0xffffff) + uVar22;
        if (((param_6->areas[uVar22] == uVar3) && (uVar15 <= param_6->dist[uVar22])) &&
           (puVar14[uVar22] == 0)) {
          puVar14[uVar22] = param_5;
          param_8[uVar22] = 0;
          rcIntArray::resize(param_9,param_9->m_size + 1);
          param_9->m_data[(longlong)param_9->m_size + -1] = iVar18 + -1;
          rcIntArray::resize(param_9,param_9->m_size + 1);
          param_9->m_data[(longlong)param_9->m_size + -1] = iVar6;
          rcIntArray::resize(param_9,param_9->m_size + 1);
          param_9->m_data[(longlong)param_9->m_size + -1] = uVar22;
        }
      }
      if (*(byte *)((longlong)puVar1 + 1) != 0xff) {
        uVar22 = ((uint)param_6->cells[(iVar6 + 1) * iVar5 + iVar18] & 0xffffff) +
                 (uint)*(byte *)((longlong)puVar1 + 1);
        if (((param_6->areas[uVar22] == uVar3) && (uVar15 <= param_6->dist[uVar22])) &&
           (puVar14[uVar22] == 0)) {
          puVar14[uVar22] = param_5;
          param_8[uVar22] = 0;
          rcIntArray::resize(param_9,param_9->m_size + 1);
          param_9->m_data[(longlong)param_9->m_size + -1] = iVar18;
          rcIntArray::resize(param_9,param_9->m_size + 1);
          param_9->m_data[(longlong)param_9->m_size + -1] = iVar6 + 1;
          rcIntArray::resize(param_9,param_9->m_size + 1);
          param_9->m_data[(longlong)param_9->m_size + -1] = uVar22;
        }
      }
      uVar22 = (uint)(byte)*(undefined2 *)((longlong)puVar1 + 2);
      if (uVar22 != 0xff) {
        uVar22 = ((uint)param_6->cells[iVar6 * iVar5 + iVar18 + 1] & 0xffffff) + uVar22;
        if (((param_6->areas[uVar22] == uVar3) && (uVar15 <= param_6->dist[uVar22])) &&
           (puVar14[uVar22] == 0)) {
          puVar14[uVar22] = param_5;
          param_8[uVar22] = 0;
          rcIntArray::resize(param_9,param_9->m_size + 1);
          param_9->m_data[(longlong)param_9->m_size + -1] = iVar18 + 1;
          rcIntArray::resize(param_9,param_9->m_size + 1);
          param_9->m_data[(longlong)param_9->m_size + -1] = iVar6;
          rcIntArray::resize(param_9,param_9->m_size + 1);
          param_9->m_data[(longlong)param_9->m_size + -1] = uVar22;
        }
      }
      if (*(byte *)((longlong)puVar1 + 3) != 0xff) {
        uVar22 = ((uint)param_6->cells[(iVar6 + -1) * iVar5 + iVar18] & 0xffffff) +
                 (uint)*(byte *)((longlong)puVar1 + 3);
        if (((param_6->areas[uVar22] == uVar3) && (uVar15 <= param_6->dist[uVar22])) &&
           (puVar14[uVar22] == 0)) {
          puVar14[uVar22] = param_5;
          param_8[uVar22] = 0;
          rcIntArray::resize(param_9,param_9->m_size + 1);
          param_9->m_data[(longlong)param_9->m_size + -1] = iVar18;
          rcIntArray::resize(param_9,param_9->m_size + 1);
          param_9->m_data[(longlong)param_9->m_size + -1] = iVar6 + -1;
          rcIntArray::resize(param_9,param_9->m_size + 1);
          param_9->m_data[(longlong)param_9->m_size + -1] = uVar22;
        }
      }
    }
    else {
      puVar14[iVar7] = 0;
    }
    iVar6 = param_9->m_size;
  } while( true );
}

// getEdgeFlags @ 1446b8ea0

uchar __cdecl getEdgeFlags(double *param_1,double *param_2,double *param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  int iVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar4 = thrSqr;
  dVar3 = __real_3ff0000000000000;
  iVar6 = 0;
  if (0 < param_4) {
    dVar1 = *param_1;
    dVar2 = param_1[2];
    lVar5 = (longlong)param_4 * 0x18 + -0x18;
    pdVar7 = param_3;
    do {
      dVar8 = *(double *)(lVar5 + (longlong)pdVar7);
      dVar10 = ((double *)(lVar5 + (longlong)pdVar7))[2];
      dVar12 = *param_3 - dVar8;
      dVar13 = param_3[2] - dVar10;
      dVar11 = dVar13 * dVar13 + dVar12 * dVar12;
      dVar9 = (dVar2 - dVar10) * dVar13 + (dVar1 - dVar8) * dVar12;
      if (0.0 < dVar11) {
        dVar9 = dVar9 / dVar11;
      }
      if (0.0 <= dVar9) {
        if (dVar3 <= dVar9) {
          dVar9 = dVar3;
        }
      }
      else {
        dVar9 = 0.0;
      }
      dVar10 = (dVar9 * dVar13 + dVar10) - dVar2;
      dVar8 = (dVar9 * dVar12 + dVar8) - dVar1;
      if ((dVar10 * dVar10 + dVar8 * dVar8 < dVar4) &&
         (dVar8 = distancePtSeg2d(param_2,(double *)(lVar5 + (longlong)pdVar7),param_3),
         dVar8 < dVar4)) {
        return '\x01';
      }
      iVar6 = iVar6 + 1;
      lVar5 = (longlong)param_3 - (longlong)pdVar7;
      param_3 = param_3 + 3;
    } while (iVar6 < param_4);
  }
  return '\0';
}

// getHeight @ 1446b9010

ushort __cdecl
getHeight(double param_1,double param_2,double param_3,double param_4,double param_5,double param_6,
         rcHeightPatch *param_7)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  uint in_EAX;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar16._0_8_ = param_3 * param_5 + __real_3f847ae140000000;
  lVar9 = (longlong)auVar16._0_8_;
  if ((lVar9 != -0x8000000000000000) && ((double)lVar9 != auVar16._0_8_)) {
    auVar4._8_4_ = SUB84(auVar16._0_8_,0);
    auVar4._0_8_ = auVar16._0_8_;
    auVar4._12_4_ = (int)((ulonglong)auVar16._0_8_ >> 0x20);
    uVar6 = movmskpd(in_EAX,auVar4);
    in_EAX = uVar6 & 1;
    auVar16._0_8_ = (double)(longlong)(lVar9 - (ulonglong)in_EAX);
  }
  auVar15._0_8_ = param_1 * param_5 + __real_3f847ae140000000;
  lVar9 = (longlong)auVar15._0_8_;
  if ((lVar9 != -0x8000000000000000) && ((double)lVar9 != auVar15._0_8_)) {
    auVar15._8_8_ = auVar15._0_8_;
    uVar6 = movmskpd(in_EAX,auVar15);
    auVar15._0_8_ = (double)(longlong)(lVar9 - (ulonglong)(uVar6 & 1));
  }
  iVar2 = param_7->width;
  iVar12 = (int)auVar15._0_8_ - param_7->xmin;
  if (iVar12 < 0) {
    iVar12 = 0;
  }
  else if (iVar2 + -1 < iVar12) {
    iVar12 = iVar2 + -1;
  }
  iVar11 = (int)auVar16._0_8_ - param_7->ymin;
  iVar13 = 0;
  if ((-1 < iVar11) && (iVar7 = param_7->height + -1, iVar13 = iVar11, iVar7 < iVar11)) {
    iVar13 = iVar7;
  }
  puVar3 = param_7->data;
  iVar11 = iVar13 * iVar2;
  uVar5 = puVar3[iVar11 + iVar12];
  if (puVar3[iVar11 + iVar12] == 0xffff) {
    auVar16._0_8_ = param_2 / param_6;
    lVar9 = (longlong)auVar16._0_8_;
    if ((lVar9 != -0x8000000000000000) && ((double)lVar9 != auVar16._0_8_)) {
      auVar16._8_8_ = auVar16._0_8_;
      uVar6 = movmskpd(0xffff,auVar16);
      auVar16._0_8_ = (double)(longlong)(lVar9 - (ulonglong)(uVar6 & 1));
    }
    iVar7 = iVar12 + -1;
    uVar10 = (ushort)(int)auVar16._0_8_;
    if (((((((-1 < iVar7) && (-1 < iVar13)) && (iVar7 < iVar2)) &&
          ((iVar13 < param_7->height && (uVar5 = puVar3[iVar11 + iVar7], uVar5 != 0xffff)))) &&
         (auVar16._0_8_ = (double)uVar5 * param_6 - param_2,
         auVar16._0_8_ =
              (double)CONCAT44((uint)((ulonglong)auVar16._0_8_ >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(auVar16._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                              ), auVar16._0_8_ < __real_7fefffffffffffff)) ||
        (auVar16._0_8_ = __real_7fefffffffffffff, uVar5 = uVar10, -1 < iVar7)) &&
       (((iVar8 = iVar13 + -1, uVar10 = uVar5, -1 < iVar8 && (iVar7 < iVar2)) &&
        ((iVar8 < param_7->height &&
         ((uVar5 = puVar3[iVar8 * iVar2 + iVar7], uVar5 != 0xffff &&
          (auVar15._0_8_ = (double)uVar5 * param_6 - param_2,
          auVar15._0_8_ =
               (double)CONCAT44((uint)((ulonglong)auVar15._0_8_ >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(auVar15._0_8_,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff),
          auVar15._0_8_ < auVar16._0_8_)))))))) {
      auVar16._0_8_ = auVar15._0_8_;
      uVar10 = uVar5;
    }
    iVar8 = iVar13 + -1;
    if (((((-1 < iVar12) && (-1 < iVar8)) && (iVar12 < iVar2)) &&
        ((iVar8 < param_7->height && (uVar5 = puVar3[iVar8 * iVar2 + iVar12], uVar5 != 0xffff)))) &&
       (auVar15._0_8_ = (double)uVar5 * param_6 - param_2,
       auVar15._0_8_ =
            (double)CONCAT44((uint)((ulonglong)auVar15._0_8_ >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(auVar15._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff),
       auVar15._0_8_ < auVar16._0_8_)) {
      auVar16._0_8_ = auVar15._0_8_;
      uVar10 = uVar5;
    }
    iVar1 = iVar12 + 1;
    if (((((((-1 < iVar1) && (-1 < iVar8)) &&
           ((iVar1 < iVar2 &&
            (((iVar8 < param_7->height && (uVar5 = puVar3[iVar1 + iVar8 * iVar2], uVar5 != 0xffff))
             && (auVar15._0_8_ = (double)uVar5 * param_6 - param_2,
                auVar15._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)auVar15._0_8_ >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(auVar15._0_8_,0) &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff),
                auVar15._0_8_ < auVar16._0_8_)))))) ||
          (((-1 < iVar1 && (-1 < iVar13)) &&
           (auVar15._0_8_ = auVar16._0_8_, uVar5 = uVar10, iVar1 < iVar2)))) &&
         (((auVar16._0_8_ = auVar15._0_8_, uVar10 = uVar5, iVar13 < param_7->height &&
           (uVar5 = puVar3[iVar1 + iVar11], uVar5 != 0xffff)) &&
          (dVar14 = (double)uVar5 * param_6 - param_2,
          dVar14 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff),
          dVar14 < auVar15._0_8_)))) || (uVar5 = uVar10, dVar14 = auVar16._0_8_, -1 < iVar1)) &&
       ((((iVar11 = iVar13 + 1, -1 < iVar11 && (iVar1 < iVar2)) && (iVar11 < param_7->height)) &&
        ((uVar10 = puVar3[iVar11 * iVar2 + iVar1], uVar10 != 0xffff &&
         (auVar16._0_8_ = (double)uVar10 * param_6 - param_2,
         auVar16._0_8_ =
              (double)CONCAT44((uint)((ulonglong)auVar16._0_8_ >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(auVar16._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                              ), auVar16._0_8_ < dVar14)))))) {
      dVar14 = auVar16._0_8_;
      uVar5 = uVar10;
    }
    iVar13 = iVar13 + 1;
    if (((-1 < iVar12) && (-1 < iVar13)) &&
       ((iVar12 < iVar2 &&
        (((iVar13 < param_7->height && (uVar10 = puVar3[iVar13 * iVar2 + iVar12], uVar10 != 0xffff))
         && (auVar16._0_8_ = (double)uVar10 * param_6 - param_2,
            auVar16._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)auVar16._0_8_ >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(auVar16._0_8_,0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff),
            auVar16._0_8_ < dVar14)))))) {
      dVar14 = auVar16._0_8_;
      uVar5 = uVar10;
    }
    if (((-1 < iVar7) && (-1 < iVar13)) &&
       (((iVar7 < iVar2 &&
         ((iVar13 < param_7->height && (uVar10 = puVar3[iVar7 + iVar13 * iVar2], uVar10 != 0xffff)))
         ) && (auVar16._0_8_ = (double)uVar10 * param_6 - param_2,
              (double)CONCAT44((uint)((ulonglong)auVar16._0_8_ >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(auVar16._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                              ) < dVar14)))) {
      uVar5 = uVar10;
    }
  }
  return uVar5;
}

// getHeightData @ 1446b9400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
getHeightData(rcCompactHeightfield *param_1,ushort *param_2,int param_3,ushort *param_4,
             rcBorderSize param_5,rcHeightPatch *param_6,rcIntArray *param_7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  rcCompactCell rVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  rcIntArray *this;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  rcCompactSpan *prVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  int local_a4;
  int local_a0;
  longlong local_98;
  int *local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  
  this = param_7;
  uVar26 = (ulonglong)(uint)param_3;
  memset(param_6->data,0,(longlong)param_6->height * (longlong)param_6->width * 2);
  rcIntArray::resize(param_7,0);
  iVar5 = param_5.low;
  if (0 < param_3) {
    local_98 = 0;
    do {
      uVar26 = (ulonglong)param_2[local_98];
      local_a4 = 0;
      iVar20 = 0xffff;
      local_a0 = 0;
      iVar14 = -1;
      local_90 = offset + 1;
      iVar19 = param_6->xmin;
      do {
        iVar17 = local_90[-1] + (uint)param_4[uVar26 * 3];
        iVar18 = *local_90 + (uint)param_4[uVar26 * 3 + 2];
        if ((((iVar19 <= iVar17) && (iVar17 < param_6->width + iVar19)) && (param_6->ymin <= iVar18)
            ) && (iVar18 < param_6->ymin + param_6->height)) {
          uVar12 = (uint)param_1->cells[(iVar5 + iVar18) * param_1->width + iVar5 + iVar17] &
                   0xffffff;
          uVar22 = (ulonglong)uVar12;
          uVar23 = (ulonglong)
                   (uVar12 + ((uint)param_1->cells
                                    [(iVar5 + iVar18) * param_1->width + iVar5 + iVar17] >> 0x18));
          if (uVar22 < uVar23) {
            lVar24 = uVar23 - uVar22;
            prVar16 = param_1->spans + uVar12;
            do {
              iVar13 = (uint)param_4[uVar26 * 3 + 1] - prVar16->y;
              iVar19 = -iVar13;
              if (iVar19 < 0) {
                iVar19 = iVar13;
              }
              iVar13 = iVar17;
              iVar25 = iVar18;
              iVar2 = (int)uVar22;
              if (iVar20 <= iVar19) {
                iVar13 = local_a4;
                iVar25 = local_a0;
                iVar2 = iVar14;
                iVar19 = iVar20;
              }
              iVar20 = iVar19;
              iVar14 = iVar2;
              local_a0 = iVar25;
              local_a4 = iVar13;
              uVar22 = (ulonglong)((int)uVar22 + 1);
              lVar24 = lVar24 + -1;
              prVar16 = prVar16 + 1;
              iVar19 = param_6->xmin;
            } while (lVar24 != 0);
          }
          else {
            iVar19 = param_6->xmin;
          }
        }
        local_90 = local_90 + 2;
      } while ((longlong)local_90 < 0x150da2d1c);
      if (iVar14 != -1) {
        rcIntArray::resize(param_7,param_7->m_size + 1);
        param_7->m_data[(longlong)param_7->m_size + -1] = local_a4;
        rcIntArray::resize(param_7,param_7->m_size + 1);
        param_7->m_data[(longlong)param_7->m_size + -1] = local_a0;
        rcIntArray::resize(param_7,param_7->m_size + 1);
        param_7->m_data[(longlong)param_7->m_size + -1] = iVar14;
      }
      uVar26 = (ulonglong)param_3;
      local_98 = local_98 + 1;
    } while (local_98 < (longlong)uVar26);
  }
  iVar14 = 0;
  iVar20 = 0;
  iVar19 = (int)uVar26;
  if (0 < iVar19) {
    uVar26 = uVar26 & 0xffffffff;
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      iVar14 = iVar14 + (uint)param_4[(ulonglong)uVar1 * 3];
      iVar20 = iVar20 + (uint)param_4[(ulonglong)uVar1 * 3 + 2];
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  iVar17 = 0;
  if (0 < param_7->m_size) {
    lVar24 = 0;
    do {
      iVar17 = iVar17 + 3;
      param_6->data
      [((*(int *)((longlong)param_7->m_data + lVar24 + 4) - param_6->ymin) * param_6->width -
       param_6->xmin) + *(int *)((longlong)param_7->m_data + lVar24)] = 1;
      lVar24 = lVar24 + 0xc;
      iVar18 = param_7->m_size;
    } while (iVar17 < param_7->m_size);
    while (0 < iVar18) {
      piVar6 = param_7->m_data;
      iVar17 = iVar18 + -1;
      param_7->m_size = iVar17;
      iVar13 = piVar6[iVar17];
      if (0 < iVar17) {
        iVar17 = iVar18 + -2;
        param_7->m_size = iVar17;
      }
      iVar25 = piVar6[iVar17];
      if (0 < iVar17) {
        iVar17 = iVar17 + -1;
        param_7->m_size = iVar17;
      }
      iVar2 = piVar6[iVar17];
      iVar15 = iVar2 - iVar14 / iVar19;
      iVar18 = -iVar15;
      if (iVar18 < 0) {
        iVar18 = iVar15;
      }
      if (iVar18 < 2) {
        iVar15 = iVar25 - iVar20 / iVar19;
        iVar18 = -iVar15;
        if (iVar18 < 0) {
          iVar18 = iVar15;
        }
        if (iVar18 < 2) {
          rcIntArray::resize(param_7,0);
          rcIntArray::resize(param_7,param_7->m_size + 1);
          param_7->m_data[(longlong)param_7->m_size + -1] = iVar2;
          rcIntArray::resize(param_7,param_7->m_size + 1);
          param_7->m_data[(longlong)param_7->m_size + -1] = iVar25;
          rcIntArray::resize(param_7,param_7->m_size + 1);
          param_7->m_data[(longlong)param_7->m_size + -1] = iVar13;
          break;
        }
      }
      prVar16 = param_1->spans;
      uVar12 = prVar16[iVar13].con & 0xff;
      if (uVar12 != 0xff) {
        iVar18 = param_6->xmin;
        iVar15 = iVar2 + -1;
        if (((iVar18 <= iVar15) && (iVar15 < iVar18 + param_6->width)) &&
           ((iVar3 = param_6->ymin, iVar3 <= iVar25 &&
            ((iVar25 < param_6->height + iVar3 &&
             (iVar18 = ((iVar25 - iVar3) * param_6->width - iVar18) + iVar15,
             param_6->data[iVar18] == 0)))))) {
          rVar4 = param_1->cells[(iVar25 + iVar5) * param_1->width + iVar15 + iVar5];
          param_6->data[iVar18] = 1;
          rcIntArray::resize(param_7,param_7->m_size + 1);
          param_7->m_data[(longlong)param_7->m_size + -1] = iVar15;
          rcIntArray::resize(param_7,param_7->m_size + 1);
          param_7->m_data[(longlong)param_7->m_size + -1] = iVar25;
          rcIntArray::resize(param_7,param_7->m_size + 1);
          param_7->m_data[(longlong)param_7->m_size + -1] = ((uint)rVar4 & 0xffffff) + uVar12;
          iVar17 = param_7->m_size;
        }
      }
      uVar12 = (uint)*(byte *)((longlong)&prVar16[iVar13].con + 1);
      if (uVar12 != 0xff) {
        iVar18 = param_6->xmin;
        iVar15 = iVar25 + 1;
        if ((((iVar18 <= iVar2) && (iVar2 < iVar18 + param_6->width)) &&
            (iVar3 = param_6->ymin, iVar3 <= iVar15)) &&
           ((iVar15 < param_6->height + iVar3 &&
            (iVar18 = ((iVar15 - iVar3) * param_6->width - iVar18) + iVar2,
            param_6->data[iVar18] == 0)))) {
          rVar4 = param_1->cells[(iVar15 + iVar5) * param_1->width + iVar2 + iVar5];
          param_6->data[iVar18] = 1;
          rcIntArray::resize(param_7,param_7->m_size + 1);
          param_7->m_data[(longlong)param_7->m_size + -1] = iVar2;
          rcIntArray::resize(param_7,param_7->m_size + 1);
          param_7->m_data[(longlong)param_7->m_size + -1] = iVar15;
          rcIntArray::resize(param_7,param_7->m_size + 1);
          param_7->m_data[(longlong)param_7->m_size + -1] = uVar12 + ((uint)rVar4 & 0xffffff);
          iVar17 = param_7->m_size;
        }
      }
      uVar12 = (uint)(byte)*(undefined2 *)((longlong)&prVar16[iVar13].con + 2);
      if (uVar12 != 0xff) {
        iVar18 = param_6->xmin;
        iVar15 = iVar2 + 1;
        if (((iVar18 <= iVar15) && (iVar15 < iVar18 + param_6->width)) &&
           ((iVar3 = param_6->ymin, iVar3 <= iVar25 &&
            ((iVar25 < param_6->height + iVar3 &&
             (iVar18 = ((iVar25 - iVar3) * param_6->width - iVar18) + iVar15,
             param_6->data[iVar18] == 0)))))) {
          rVar4 = param_1->cells[(iVar25 + iVar5) * param_1->width + iVar15 + iVar5];
          param_6->data[iVar18] = 1;
          rcIntArray::resize(param_7,param_7->m_size + 1);
          param_7->m_data[(longlong)param_7->m_size + -1] = iVar15;
          rcIntArray::resize(param_7,param_7->m_size + 1);
          param_7->m_data[(longlong)param_7->m_size + -1] = iVar25;
          rcIntArray::resize(param_7,param_7->m_size + 1);
          param_7->m_data[(longlong)param_7->m_size + -1] = uVar12 + ((uint)rVar4 & 0xffffff);
          iVar17 = param_7->m_size;
        }
      }
      uVar12 = (uint)*(byte *)((longlong)&prVar16[iVar13].con + 3);
      iVar18 = iVar17;
      if (uVar12 != 0xff) {
        iVar17 = param_6->xmin;
        iVar25 = iVar25 + -1;
        if ((((iVar17 <= iVar2) && (iVar2 < iVar17 + param_6->width)) &&
            (iVar13 = param_6->ymin, iVar13 <= iVar25)) &&
           ((iVar25 < param_6->height + iVar13 &&
            (iVar17 = ((iVar25 - iVar13) * param_6->width - iVar17) + iVar2,
            param_6->data[iVar17] == 0)))) {
          rVar4 = param_1->cells[(iVar25 + iVar5) * param_1->width + iVar2 + iVar5];
          param_6->data[iVar17] = 1;
          rcIntArray::resize(param_7,param_7->m_size + 1);
          param_7->m_data[(longlong)param_7->m_size + -1] = iVar2;
          rcIntArray::resize(param_7,param_7->m_size + 1);
          param_7->m_data[(longlong)param_7->m_size + -1] = iVar25;
          rcIntArray::resize(param_7,param_7->m_size + 1);
          param_7->m_data[(longlong)param_7->m_size + -1] = uVar12 + ((uint)rVar4 & 0xffffff);
          iVar18 = param_7->m_size;
        }
      }
    }
  }
  memset(param_6->data,0xff,(longlong)param_6->height * (longlong)param_6->width * 2);
  iVar14 = param_7->m_size;
  iVar20 = 0;
  if (0 < iVar14) {
    lVar24 = 0;
    do {
      iVar20 = iVar20 + 3;
      piVar6 = (int *)((longlong)param_7->m_data + lVar24);
      lVar7 = lVar24 + 8;
      lVar24 = lVar24 + 0xc;
      param_6->data[((piVar6[1] - param_6->ymin) * param_6->width - param_6->xmin) + *piVar6] =
           (ushort)param_1->spans[*(int *)((longlong)param_7->m_data + lVar7)].y;
      iVar14 = param_7->m_size;
    } while (iVar20 < iVar14);
  }
  uVar11 = _UNK_150d9fb28;
  uVar10 = ___xmm_ffffffff000000000000000100000000;
  uVar9 = _UNK_150ae1718;
  uVar8 = ___xmm_000000000000000100000000ffffffff;
  param_7._0_4_ = 0;
  if (0 < iVar14) {
    local_98 = 0;
    do {
      piVar6 = this->m_data;
      param_7._0_4_ = (int)param_7 + 1;
      iVar20 = piVar6[local_98 * 3];
      iVar19 = piVar6[local_98 * 3 + 1];
      iVar17 = piVar6[local_98 * 3 + 2];
      local_98 = local_98 + 1;
      if (0xff < (int)param_7) {
        param_7._0_4_ = 0;
        local_98 = 0;
        if (0x300 < iVar14) {
          memmove(piVar6,piVar6 + 0x300,(longlong)(iVar14 + -0x300) << 2);
        }
        rcIntArray::resize(this,this->m_size + -0x300);
      }
      prVar16 = param_1->spans;
      uVar12 = 0;
      do {
        uVar21 = prVar16[iVar17].con >> ((char)uVar12 * '\b' & 0x1fU) & 0xff;
        if (uVar21 != 0xff) {
          local_78 = uVar8;
          uStack_70 = uVar9;
          lVar24 = (ulonglong)(uVar12 & 3) * 4;
          iVar18 = *(int *)((longlong)&local_78 + lVar24) + iVar20;
          iVar14 = param_6->xmin;
          local_78 = uVar10;
          uStack_70 = uVar11;
          if ((iVar14 <= iVar18) && (iVar18 < iVar14 + param_6->width)) {
            iVar13 = param_6->ymin;
            iVar25 = *(int *)((longlong)&local_78 + lVar24) + iVar19;
            if ((iVar13 <= iVar25) &&
               ((iVar25 < param_6->height + iVar13 &&
                (param_6->data[((iVar25 - iVar13) * param_6->width - iVar14) + iVar18] == 0xffff))))
            {
              uVar21 = ((uint)param_1->cells[(iVar25 + iVar5) * param_1->width + iVar18 + iVar5] &
                       0xffffff) + uVar21;
              param_6->data[((iVar25 - iVar13) * param_6->width - iVar14) + iVar18] =
                   (ushort)param_1->spans[uVar21].y;
              rcIntArray::resize(this,this->m_size + 1);
              this->m_data[(longlong)this->m_size + -1] = iVar18;
              rcIntArray::resize(this,this->m_size + 1);
              this->m_data[(longlong)this->m_size + -1] = iVar25;
              rcIntArray::resize(this,this->m_size + 1);
              this->m_data[(longlong)this->m_size + -1] = uVar21;
            }
          }
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < 4);
      iVar14 = this->m_size;
    } while ((int)param_7 * 3 < iVar14);
  }
  return;
}

// getPolyMergeValue @ 1446b9eb0

int __cdecl
getPolyMergeValue(ushort *param_1,ushort *param_2,ushort *param_3,int *param_4,int *param_5,
                 int param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  ushort *puVar12;
  ulonglong uVar13;
  int iVar14;
  
  iVar8 = 0;
  if (0 < param_6) {
    lVar4 = 0;
    do {
      if (param_1[lVar4] == 0xffff) goto LAB_1446b9f0f;
      iVar8 = iVar8 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < param_6);
  }
  iVar8 = param_6;
  iVar7 = param_6;
  if (0 < param_6) {
LAB_1446b9f0f:
    iVar6 = 0;
    lVar4 = 0;
    do {
      iVar7 = iVar6;
      if (param_2[lVar4] == 0xffff) break;
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 1;
      iVar7 = param_6;
    } while (lVar4 < param_6);
  }
  if (iVar8 + -2 + iVar7 <= param_6) {
    iVar6 = 0;
    *param_4 = -1;
    *param_5 = -1;
    puVar12 = param_1;
    if (0 < iVar8) {
      do {
        uVar1 = *puVar12;
        iVar14 = iVar6 + 1;
        uVar5 = param_1[iVar14 % iVar8];
        uVar11 = uVar5;
        if (uVar1 <= uVar5) {
          uVar11 = uVar1;
          uVar1 = uVar5;
        }
        iVar10 = 0;
        lVar4 = 0;
        if (0 < iVar7) {
          iVar9 = 1;
          do {
            uVar5 = param_2[lVar4];
            uVar2 = param_2[iVar9 % iVar7];
            uVar3 = uVar2;
            if (uVar5 <= uVar2) {
              uVar3 = uVar5;
            }
            if (uVar11 == uVar3) {
              if (uVar5 <= uVar2) {
                uVar5 = uVar2;
              }
              if (uVar1 == uVar5) {
                *param_4 = iVar6;
                *param_5 = iVar10;
                break;
              }
            }
            iVar10 = iVar10 + 1;
            iVar9 = iVar9 + 1;
            lVar4 = lVar4 + 1;
          } while (lVar4 < iVar7);
        }
        puVar12 = puVar12 + 1;
        iVar6 = iVar14;
      } while (iVar14 < iVar8);
    }
    iVar6 = *param_4;
    if (iVar6 != -1) {
      iVar14 = *param_5;
      if (((iVar14 != -1) &&
          (uVar13 = (ulonglong)param_1[iVar6],
          (int)(((uint)param_3[(ulonglong)param_2[(iVar14 + 2) % iVar7] * 3 + 2] -
                (uint)param_3[(ulonglong)param_1[(iVar8 + -1 + iVar6) % iVar8] * 3 + 2]) *
                ((uint)param_3[uVar13 * 3] -
                (uint)param_3[(ulonglong)param_1[(iVar8 + -1 + iVar6) % iVar8] * 3]) -
               ((uint)param_3[uVar13 * 3 + 2] -
               (uint)param_3[(ulonglong)param_1[(iVar8 + -1 + iVar6) % iVar8] * 3 + 2]) *
               ((uint)param_3[(ulonglong)param_2[(iVar14 + 2) % iVar7] * 3] -
               (uint)param_3[(ulonglong)param_1[(iVar8 + -1 + iVar6) % iVar8] * 3])) < 0)) &&
         ((int)(((uint)param_3[(ulonglong)param_1[(iVar6 + 2) % iVar8] * 3 + 2] -
                (uint)param_3[(ulonglong)param_2[(iVar7 + -1 + iVar14) % iVar7] * 3 + 2]) *
                ((uint)param_3[(ulonglong)param_2[iVar14] * 3] -
                (uint)param_3[(ulonglong)param_2[(iVar7 + -1 + iVar14) % iVar7] * 3]) -
               ((uint)param_3[(ulonglong)param_2[iVar14] * 3 + 2] -
               (uint)param_3[(ulonglong)param_2[(iVar7 + -1 + iVar14) % iVar7] * 3 + 2]) *
               ((uint)param_3[(ulonglong)param_1[(iVar6 + 2) % iVar8] * 3] -
               (uint)param_3[(ulonglong)param_2[(iVar7 + -1 + iVar14) % iVar7] * 3])) < 0)) {
        return ((uint)param_3[uVar13 * 3 + 2] -
               (uint)param_3[(ulonglong)param_1[(iVar6 + 1) % iVar8] * 3 + 2]) *
               ((uint)param_3[uVar13 * 3 + 2] -
               (uint)param_3[(ulonglong)param_1[(iVar6 + 1) % iVar8] * 3 + 2]) +
               ((uint)param_3[uVar13 * 3] -
               (uint)param_3[(ulonglong)param_1[(iVar6 + 1) % iVar8] * 3]) *
               ((uint)param_3[uVar13 * 3] -
               (uint)param_3[(ulonglong)param_1[(iVar6 + 1) % iVar8] * 3]);
      }
    }
  }
  return -1;
}

// inCone @ 1446ba1c0

bool __cdecl inCone(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)((param_5[param_1] & 0xfffffffU) << 2);
  iVar1 = param_4[uVar10 + 2];
  iVar8 = param_1 + 1;
  if (param_3 <= iVar8) {
    iVar8 = 0;
  }
  uVar9 = (ulonglong)((param_5[iVar8] & 0xfffffffU) << 2);
  iVar8 = param_4[uVar9];
  if (param_1 + -1 < 0) {
    param_1 = param_3;
  }
  iVar2 = param_4[uVar10];
  iVar3 = param_4[(param_5[param_2] & 0xfffffffU) << 2];
  iVar4 = (param_4 + ((param_5[param_2] & 0xfffffffU) << 2))[2];
  uVar10 = (ulonglong)((param_5[(longlong)param_1 + -1] & 0xfffffffU) << 2);
  iVar5 = param_4[uVar10 + 2];
  iVar6 = param_4[uVar10];
  iVar7 = param_4[uVar9 + 2];
  if ((iVar2 - iVar6) * (iVar7 - iVar5) - (iVar8 - iVar6) * (iVar1 - iVar5) < 1) {
    if ((-1 < (iVar5 - iVar1) * (iVar3 - iVar2) - (iVar6 - iVar2) * (iVar4 - iVar1)) ||
       (-1 < (iVar2 - iVar3) * (iVar7 - iVar4) - (iVar8 - iVar3) * (iVar1 - iVar4))) {
      return false;
    }
  }
  else if (((iVar7 - iVar1) * (iVar3 - iVar2) - (iVar8 - iVar2) * (iVar4 - iVar1) < 1) &&
          ((iVar2 - iVar3) * (iVar5 - iVar4) - (iVar6 - iVar3) * (iVar1 - iVar4) < 1)) {
    return false;
  }
  return true;
}

// isSolidEdge @ 1446ba320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
isSolidEdge(rcCompactHeightfield *param_1,ushort *param_2,int param_3,int param_4,int param_5,
           int param_6)

{
  ushort uVar1;
  uint uVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar1 = 0;
  uVar2 = param_1->spans[param_5].con >> ((char)param_6 * '\b' & 0x1fU) & 0xff;
  if (uVar2 != 0xff) {
    local_28 = ___xmm_ffffffff000000000000000100000000;
    uStack_20 = _UNK_150d9fb28;
    local_18 = ___xmm_000000000000000100000000ffffffff;
    uStack_10 = _UNK_150ae1718;
    uVar1 = param_2[((uint)param_1->cells
                           [(*(int *)((longlong)&local_28 + (ulonglong)(param_6 & 3) * 4) + param_4)
                            * param_1->width +
                            *(int *)((longlong)&local_18 + (ulonglong)(param_6 & 3) * 4) + param_3]
                    & 0xffffff) + uVar2];
  }
  return uVar1 != param_2[param_5];
}

// isSolidEdge @ 1446ba3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
RecastRegionFunc::isSolidEdge
          (rcCompactHeightfield *param_1,ushort *param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  ushort uVar1;
  uint uVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar1 = 0;
  uVar2 = param_1->spans[param_5].con >> ((char)param_6 * '\b' & 0x1fU) & 0xff;
  if (uVar2 != 0xff) {
    local_28 = ___xmm_ffffffff000000000000000100000000;
    uStack_20 = _UNK_150d9fb28;
    local_18 = ___xmm_000000000000000100000000ffffffff;
    uStack_10 = _UNK_150ae1718;
    uVar1 = param_2[((uint)param_1->cells
                           [(*(int *)((longlong)&local_28 + (ulonglong)(param_6 & 3) * 4) + param_4)
                            * param_1->width +
                            *(int *)((longlong)&local_18 + (ulonglong)(param_6 & 3) * 4) + param_3]
                    & 0xffffff) + uVar2];
  }
  return uVar1 != param_2[param_5];
}

// mergePolys @ 1446ba480

void __cdecl
mergePolys(ushort *param_1,ushort *param_2,int param_3,int param_4,ushort *param_5,int param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  
  uVar4 = 0;
  lVar3 = (longlong)param_6;
  uVar1 = uVar4;
  uVar7 = uVar4;
  uVar2 = uVar4;
  uVar9 = uVar4;
  if (0 < param_6) {
    do {
      iVar6 = (int)uVar7;
      if (param_1[uVar1] == 0xffff) goto LAB_1446ba4e0;
      uVar1 = uVar1 + 1;
      uVar7 = (ulonglong)(iVar6 + 1);
    } while ((longlong)uVar1 < lVar3);
  }
  iVar6 = param_6;
  iVar8 = param_6;
  if (0 < param_6) {
LAB_1446ba4e0:
    do {
      iVar8 = (int)uVar9;
      if (param_2[uVar2] == 0xffff) break;
      uVar2 = uVar2 + 1;
      uVar9 = (ulonglong)((int)uVar9 + 1);
      iVar8 = param_6;
    } while ((longlong)uVar2 < lVar3);
  }
  memset(param_5,0xff,lVar3 * 2);
  iVar12 = iVar6 + -1;
  iVar5 = 0;
  if (0 < iVar12) {
    uVar2 = uVar4;
    puVar11 = param_5;
    do {
      iVar5 = (int)uVar2;
      uVar10 = iVar5 + 1;
      uVar2 = (ulonglong)uVar10;
      *puVar11 = param_1[(param_3 + 1 + iVar5) % iVar6];
      puVar11 = puVar11 + 1;
      iVar5 = iVar12;
    } while ((int)uVar10 < iVar12);
  }
  if (0 < iVar8 + -1) {
    puVar11 = param_5 + iVar5;
    do {
      iVar6 = (int)uVar4;
      uVar10 = iVar6 + 1;
      uVar4 = (ulonglong)uVar10;
      *puVar11 = param_2[(param_4 + 1 + iVar6) % iVar8];
      puVar11 = puVar11 + 1;
    } while ((int)uVar10 < iVar8 + -1);
  }
  memcpy(param_1,param_5,lVar3 * 2);
  return;
}

// mergeRegions @ 1446ba5c0

bool __cdecl mergeRegions(rcRegion *param_1,rcRegion *param_2)

{
  rcIntArray *this;
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  ulonglong uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  rcIntArray local_60 [2];
  
  uVar1 = param_2->id;
  uVar2 = param_1->id;
  uVar14 = 0;
  local_60[0].m_data = (int *)0x0;
  local_60[0].m_size = 0;
  local_60[0].m_cap = 0;
  rcIntArray::resize(local_60,(param_1->connections).m_size);
  uVar6 = uVar14;
  uVar10 = uVar14;
  if (0 < (param_1->connections).m_size) {
    do {
      uVar12 = (int)uVar10 + 1;
      *(undefined4 *)(uVar6 + (longlong)local_60[0].m_data) =
           *(undefined4 *)(uVar6 + (longlong)(param_1->connections).m_data);
      uVar6 = uVar6 + 4;
      uVar10 = (ulonglong)uVar12;
    } while ((int)uVar12 < (param_1->connections).m_size);
  }
  puVar4 = (uint *)local_60[0].m_data;
  uVar6 = uVar14;
  if (0 < local_60[0].m_size) {
    do {
      iVar9 = (int)uVar6;
      if (*puVar4 == (uint)uVar1) {
        if ((iVar9 != -1) && (iVar11 = (param_2->connections).m_size, 0 < iVar11)) {
          puVar4 = (uint *)(param_2->connections).m_data;
          uVar6 = uVar14;
          uVar10 = uVar14;
          goto LAB_1446ba697;
        }
        break;
      }
      puVar4 = puVar4 + 1;
      uVar6 = (ulonglong)(iVar9 + 1U);
    } while ((int)(iVar9 + 1U) < local_60[0].m_size);
  }
  goto LAB_1446ba65e;
  while( true ) {
    uVar10 = (ulonglong)(iVar8 + 1);
    uVar6 = uVar6 + 1;
    puVar4 = puVar4 + 1;
    if ((longlong)iVar11 <= (longlong)uVar6) break;
LAB_1446ba697:
    iVar8 = (int)uVar10;
    if (*puVar4 == (uint)uVar2) {
      if (iVar8 != -1) {
        this = &param_1->connections;
        rcIntArray::resize(this,0);
        iVar11 = local_60[0].m_size;
        iVar3 = local_60[0].m_size + -1;
        if (0 < iVar3) {
          do {
            uVar12 = local_60[0].m_data[((int)uVar14 + 1 + iVar9) % iVar11];
            rcIntArray::resize(this,(param_1->connections).m_size + 1);
            uVar13 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar13;
            this->m_data[(longlong)(param_1->connections).m_size + -1] = uVar12;
          } while ((int)uVar13 < iVar3);
        }
        iVar9 = (param_2->connections).m_size;
        iVar11 = 0;
        if (0 < iVar9 + -1) {
          do {
            iVar3 = (param_2->connections).m_data[(iVar11 + 1 + iVar8) % iVar9];
            rcIntArray::resize(this,(param_1->connections).m_size + 1);
            iVar11 = iVar11 + 1;
            this->m_data[(longlong)(param_1->connections).m_size + -1] = iVar3;
          } while (iVar11 < iVar9 + -1);
        }
        removeAdjacentNeighbours(param_1);
        iVar9 = 0;
        if (0 < (param_2->floors).m_size) {
          lVar15 = 0;
          do {
            iVar3 = 0;
            iVar11 = (param_1->floors).m_size;
            iVar8 = *(int *)(lVar15 + (longlong)(param_2->floors).m_data);
            if (0 < iVar11) {
              piVar5 = (param_1->floors).m_data;
              do {
                if (*piVar5 == iVar8) goto LAB_1446ba7da;
                iVar3 = iVar3 + 1;
                piVar5 = piVar5 + 1;
              } while (iVar3 < iVar11);
            }
            rcIntArray::resize(&param_1->floors,iVar11 + 1);
            (param_1->floors).m_data[(longlong)(param_1->floors).m_size + -1] = iVar8;
LAB_1446ba7da:
            iVar9 = iVar9 + 1;
            lVar15 = lVar15 + 4;
          } while (iVar9 < (param_2->floors).m_size);
        }
        param_1->spanCount = param_1->spanCount + param_2->spanCount;
        param_2->spanCount = 0;
        rcIntArray::resize(&param_2->connections,0);
        bVar7 = true;
        goto LAB_1446ba660;
      }
      break;
    }
  }
LAB_1446ba65e:
  bVar7 = false;
LAB_1446ba660:
  rcFree(local_60[0].m_data);
  return bVar7;
}

// mergeSpanData @ 1446ba820

void __cdecl mergeSpanData(rcSpanData *param_1,uint param_2,uint param_3,uchar param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  
  uVar3 = param_1->smax;
  iVar2 = -(uVar3 - param_3);
  if (iVar2 < 0) {
    iVar2 = uVar3 - param_3;
  }
  if (param_5 < iVar2) {
    if (uVar3 < param_3) {
      *(uint *)&param_1->field_0x8 =
           *(uint *)&param_1->field_0x8 ^ ((uint)param_4 ^ param_1->area) & 0x3f;
    }
  }
  else {
    uVar1 = *(undefined4 *)&param_1->field_0x8;
    dVar4 = (double)ZPULL(uVar1,0,6);
    if (dVar4 <= (double)param_4) {
      dVar4 = (double)param_4;
    }
    *(uint *)&param_1->field_0x8 = ((uint)(longlong)dVar4 ^ param_1->area) & 0x3f ^ uVar1;
  }
  if (param_2 < ((undefined4 *)param_1)->smin) {
    *(uint *)param_1 = (param_1->smin ^ param_2) & 0x1fffffff ^ *(undefined4 *)param_1;
  }
  if (uVar3 < param_3) {
    *(uint *)&param_1->field_0x4 =
         *(uint *)&param_1->field_0x4 ^ (param_1->smax ^ param_3) & 0x1fffffff;
  }
  return;
}

// overlapEdges @ 1446ba8d0

bool __cdecl overlapEdges(double *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  
  if (0 < param_3) {
    lVar8 = 0;
    do {
      iVar4 = *param_2;
      iVar5 = param_2[1];
      if ((((iVar4 != param_4) && (iVar4 != param_5)) && (iVar5 != param_4)) && (iVar5 != param_5))
      {
        dVar9 = param_1[(longlong)param_4 * 3 + 2];
        dVar1 = param_1[(longlong)param_4 * 3];
        dVar2 = param_1[(longlong)(iVar4 * 3) + 2];
        dVar3 = param_1[iVar4 * 3];
        dVar6 = (param_1[(longlong)param_5 * 3 + 2] - dVar2) * (param_1[iVar5 * 3] - dVar3) -
                (param_1[(longlong)param_5 * 3] - dVar3) *
                (param_1[(longlong)(iVar5 * 3) + 2] - dVar2);
        dVar7 = (dVar9 - dVar2) * (param_1[iVar5 * 3] - dVar3) -
                (dVar1 - dVar3) * (param_1[(longlong)(iVar5 * 3) + 2] - dVar2);
        if ((dVar7 * dVar6 < 0.0) &&
           (dVar9 = (param_1[(longlong)param_5 * 3] - dVar1) * (dVar2 - dVar9) -
                    (param_1[(longlong)param_5 * 3 + 2] - dVar9) * (dVar3 - dVar1),
           ((dVar9 + dVar7) - dVar6) * dVar9 < 0.0)) {
          return true;
        }
      }
      lVar8 = lVar8 + 1;
      param_2 = param_2 + 4;
    } while (lVar8 < param_3);
  }
  return false;
}

// paintRectRegion @ 1446baa80

void __cdecl
paintRectRegion(int param_1,int param_2,int param_3,int param_4,ushort param_5,
               rcCompactHeightfield *param_6,ushort *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_3 < param_4) {
    iVar1 = param_6->width;
    lVar8 = (longlong)(iVar1 * param_3 + param_1) << 2;
    uVar7 = (ulonglong)(uint)(param_4 - param_3);
    do {
      if (param_1 < param_2) {
        uVar6 = (ulonglong)(uint)(param_2 - param_1);
        lVar9 = lVar8;
        do {
          uVar2 = *(uint *)((longlong)&param_6->cells->index + lVar9);
          uVar3 = uVar2 & 0xffffff;
          uVar4 = (ulonglong)uVar3;
          uVar5 = (ulonglong)(uVar3 + (uVar2 >> 0x18));
          if (uVar4 < uVar5) {
            do {
              if (param_6->areas[uVar4] != '\0') {
                param_7[uVar4] = param_5;
              }
              uVar4 = uVar4 + 1;
            } while ((longlong)uVar4 < (longlong)uVar5);
          }
          lVar9 = lVar9 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      lVar8 = lVar8 + (longlong)iVar1 * 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// rcAddSpan @ 1446bab50

void __cdecl
rcAddSpan(rcContext *param_1,rcHeightfield *param_2,int param_3,int param_4,uint param_5,
         uint param_6,uchar param_7,int param_8)

{
  addSpan(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

// rcAddSpans @ 1446baba0

void __cdecl
rcAddSpans(rcContext *param_1,rcHeightfield *param_2,int param_3,rcSpanCache *param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  rcSpanPool *prVar4;
  rcSpanPool *prVar5;
  uint uVar6;
  rcSpanPool *prVar7;
  rcSpan *prVar8;
  int iVar9;
  rcSpan *prVar10;
  rcSpan *prVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong local_res20;
  
  local_res20 = (ulonglong)(uint)param_5;
  if (0 < param_5) {
    puVar13 = (uint *)&(param_4->data).field_0x4;
    do {
      prVar5 = (rcSpanPool *)param_2->freelist;
      uVar3 = puVar13[1];
      uVar6 = *puVar13;
      uVar12 = puVar13[-1];
      iVar9 = (uint)*(ushort *)((longlong)puVar13 + -6) * param_2->width + (uint)(ushort)puVar13[-2]
      ;
      if ((prVar5 == (rcSpanPool *)0x0) || (*(longlong *)&prVar5->items[0].data.field_0x8 == 0)) {
        prVar4 = rcAlloc(0xc008,RC_ALLOC_PERM);
        prVar5 = (rcSpanPool *)0x0;
        if (prVar4 != (rcSpanPool *)0x0) {
          prVar4->next = (rcSpanPool *)0x0;
          prVar4->next = param_2->pools;
          prVar5 = (rcSpanPool *)param_2->freelist;
          param_2->pools = prVar4;
          prVar7 = prVar4 + 1;
          do {
            prVar7[-1].items[0x7ff].next = (rcSpan *)prVar5;
            prVar5 = (rcSpanPool *)(prVar7[-1].items + 0x7ff);
            prVar7 = prVar5;
          } while (prVar5 != (rcSpanPool *)prVar4->items);
          param_2->freelist = (rcSpan *)prVar5;
          goto LAB_1446bac74;
        }
      }
      else {
LAB_1446bac74:
        param_2->freelist = *(rcSpan **)&prVar5->items[0].data.field_0x8;
      }
      *(undefined8 *)&prVar5->items[0].data.field_0x8 = 0;
      *(uint *)&prVar5->next = *(uint *)&prVar5->next ^ (prVar5.smin ^ uVar12) & 0x1fffffff;
      puVar1 = &((rcSpanData *)&prVar5->next)->field_0x4;
      *(uint *)puVar1 = *(uint *)puVar1 ^ (((rcSpanData *)&prVar5->next)->smax ^ uVar6) & 0x1fffffff
      ;
      *(uint *)&prVar5->items[0].data =
           *(uint *)&prVar5->items[0].data ^ ((uint)(byte)uVar3 ^ prVar5->items[0].smin) & 0x3f;
      prVar10 = param_2->spans[iVar9];
      if (prVar10 == (rcSpan *)0x0) {
        param_2->spans[iVar9] = (rcSpan *)prVar5;
      }
      else {
        prVar8 = (rcSpan *)0x0;
        do {
          uVar6 = prVar10.smin;
          if (((rcSpanData *)&prVar5->next)->smax < uVar6) break;
          uVar12 = (prVar10->data).smax;
          if (uVar12 < prVar5.smin) {
            prVar11 = prVar10->next;
            prVar8 = prVar10;
          }
          else {
            mergeSpanData((rcSpanData *)prVar5,uVar6,uVar12,(prVar10->data).area,param_3);
            prVar11 = prVar10->next;
            prVar10->next = param_2->freelist;
            param_2->freelist = prVar10;
            if (prVar8 == (rcSpan *)0x0) {
              param_2->spans[iVar9] = prVar11;
            }
            else {
              prVar8->next = prVar11;
            }
          }
          prVar10 = prVar11;
        } while (prVar11 != (rcSpan *)0x0);
        if (prVar8 == (rcSpan *)0x0) {
          *(rcSpan **)&prVar5->items[0].data.field_0x8 = param_2->spans[iVar9];
          param_2->spans[iVar9] = (rcSpan *)prVar5;
        }
        else {
          *(rcSpan **)&prVar5->items[0].data.field_0x8 = prVar8->next;
          prVar8->next = (rcSpan *)prVar5;
        }
      }
      puVar13 = puVar13 + 4;
      local_res20 = local_res20 - 1;
    } while (local_res20 != 0);
  }
  return;
}

// rcBuildDistanceField @ 1446badb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl rcBuildDistanceField(rcContext *param_1,rcCompactHeightfield *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_bool___cdecl_rcBuildDistanceField(rcContext_*,rcCompactHeightfield_&)_::_2_::FStat_STAT_Navigation_BuildDistanceField>
  FVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar14;
  FName FVar15;
  ushort *puVar16;
  bool bVar17;
  FNameEntryId FVar18;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_48;
  
  FVar18.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      if (StatPtr_STAT_Navigation_BuildDistanceField ==
          (FThreadSafeStaticStat<_bool___cdecl_rcBuildDistanceField(rcContext_*,rcCompactHeightfield_&)_::_2_::FStat_STAT_Navigation_BuildDistanceField>
           )0x0) {
        pFVar9 = FName::FName((FName *)&local_res8.s,"STAT_Navigation_BuildDistanceField");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_BuildDistanceField,*pFVar9,
                   L"STAT_Navigation_BuildDistanceField","STATGROUP_Quick","STATCAT_Advanced",
                   L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&_TSS0);
    }
  }
  FVar10 = StatPtr_STAT_Navigation_BuildDistanceField;
  if (StatPtr_STAT_Navigation_BuildDistanceField ==
      (FThreadSafeStaticStat<_bool___cdecl_rcBuildDistanceField(rcContext_*,rcCompactHeightfield_&)_::_2_::FStat_STAT_Navigation_BuildDistanceField>
       )0x0) {
    pFVar9 = FName::FName(&local_res10,"STAT_Navigation_BuildDistanceField");
    FVar10 = (FThreadSafeStaticStat<_bool___cdecl_rcBuildDistanceField(rcContext_*,rcCompactHeightfield_&)_::_2_::FStat_STAT_Navigation_BuildDistanceField>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_BuildDistanceField,
                          *pFVar9,L"STAT_Navigation_BuildDistanceField","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  uVar7 = local_res8.s.LowPart._2_2_;
  uVar5 = local_res8.s.LowPart._0_2_;
  FVar15 = *(FName *)FVar10;
  bVar2 = false;
  bVar4 = false;
  uVar14 = FVar15.Number;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (uVar14 != 0)) {
    local_res8.s.LowPart._0_2_ = FVar15.ComparisonIndex.Value._0_2_;
    uVar6 = local_res8.s.LowPart._0_2_;
    local_res8.s.LowPart._2_2_ = FVar15.ComparisonIndex.Value._2_2_;
    uVar8 = local_res8.s.LowPart._2_2_;
    local_res8.s.LowPart._0_2_ = uVar5;
    local_res8.s.LowPart._2_2_ = uVar7;
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart._0_2_ = 0;
      local_res8.s.LowPart._2_2_ = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart._0_2_ = uVar6;
        local_res8.s.LowPart._2_2_ = uVar8;
        local_res8.s.HighPart = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Navmesh\\Private\\Recast\\RecastRegion.cpp"
                   ,0x3be);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart._0_2_ = uVar6;
      local_res8.s.LowPart._2_2_ = uVar8;
      local_res8.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar3 = true;
      FVar18.Value = FVar15.ComparisonIndex.Value.Value;
      goto LAB_1446baf43;
    }
  }
  bVar3 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_1446baf43:
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,0x12);
  }
  if (param_2->dist != (ushort *)0x0) {
    rcFree(param_2->dist);
    param_2->dist = (ushort *)0x0;
  }
  puVar11 = rcAlloc(param_2->spanCount * 2,RC_ALLOC_TEMP);
  if (puVar11 == (ushort *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,"rcBuildDistanceField: Out of memory \'src\' (%d).");
    bVar17 = false;
  }
  else {
    puVar12 = rcAlloc(param_2->spanCount * 2,RC_ALLOC_TEMP);
    if (puVar12 == (ushort *)0x0) {
      rcContext::log(param_1,RC_LOG_ERROR,"rcBuildDistanceField: Out of memory \'dst\' (%d).");
      rcFree(puVar11);
      bVar17 = false;
    }
    else {
      local_res8.s.LowPart._0_2_ = 0;
      if (param_1->m_timerEnabled != false) {
        (**(code **)(param_1->_padding_ + 0x20))(param_1,0x13);
      }
      calculateDistanceField(param_2,puVar11,(ushort *)&local_res8.QuadPart);
      param_2->maxDistance = local_res8.s.LowPart._0_2_;
      if (param_1->m_timerEnabled != false) {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,0x13);
        if (param_1->m_timerEnabled != false) {
          (**(code **)(param_1->_padding_ + 0x20))(param_1,0x14);
        }
      }
      puVar13 = boxBlur(param_2,1,puVar11,puVar12);
      puVar16 = puVar11;
      if (puVar13 != puVar11) {
        puVar16 = puVar12;
        puVar12 = puVar11;
      }
      param_2->dist = puVar16;
      if (param_1->m_timerEnabled != false) {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,0x14);
        if (param_1->m_timerEnabled != false) {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,0x12);
        }
      }
      rcFree(puVar12);
      bVar17 = true;
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return bVar17;
}

// rcBuildHeightfieldLayers @ 1446bb230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
rcBuildHeightfieldLayers
          (rcContext *param_1,rcCompactHeightfield *param_2,rcBorderSize param_3,int param_4,
          rcHeightfieldLayerSet *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ushort uVar7;
  short sVar8;
  rcCompactCell rVar9;
  rcCompactCell rVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  uint3 uVar14;
  FName FVar15;
  undefined8 uVar16;
  FName FVar17;
  undefined8 uVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  FColor_u_0 FVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<_bool___cdecl_rcBuildHeightfieldLayers(rcContext_*,rcCompactHeightfield_&,rcBorderSize,int,rcHeightfieldLayerSet_&)_::_2_::FStat_STAT_Navigation_BuildHeightfieldLayers>
  FVar24;
  ushort *puVar25;
  undefined8 *_Dst;
  undefined8 *puVar26;
  byte *pbVar27;
  rcHeightfieldLayer *_Dst_00;
  void *pvVar28;
  short *psVar29;
  byte bVar30;
  int iVar31;
  rcCompactCell rVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  rcCompactCell rVar36;
  rcCompactSpan *prVar37;
  int iVar38;
  ulonglong uVar39;
  short sVar40;
  ushort uVar41;
  uint uVar42;
  rcIntArray *this;
  longlong *plVar43;
  rcCompactCell *prVar44;
  short sVar45;
  uint uVar46;
  uint uVar47;
  ulonglong uVar48;
  FName FVar49;
  char *pcVar50;
  FNameEntryId FVar51;
  FName FVar52;
  int iVar53;
  int iVar54;
  uint uVar55;
  ulonglong uVar56;
  FName FVar57;
  byte *pbVar58;
  uint *puVar59;
  double dVar60;
  double dVar61;
  int iStackX_1c;
  int local_194;
  uint local_18c;
  FName local_188;
  int local_180;
  FColor_u_0 local_17c;
  FName local_178;
  longlong local_170;
  undefined8 *local_168;
  int local_160;
  uint local_15c;
  ushort *local_158;
  uint local_150;
  rcIntArray local_148;
  int local_138;
  int local_134;
  longlong local_130;
  FName local_128;
  FName local_120;
  int local_118;
  rcCompactSpan *local_110;
  FName local_108;
  undefined8 uStack_100;
  int local_f8;
  FName local_f0;
  undefined8 uStack_e8;
  FName local_e0;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_Navigation_BuildHeightfieldLayers ==
        (FThreadSafeStaticStat<_bool___cdecl_rcBuildHeightfieldLayers(rcContext_*,rcCompactHeightfield_&,rcBorderSize,int,rcHeightfieldLayerSet_&)_::_2_::FStat_STAT_Navigation_BuildHeightfieldLayers>
         )0x0) {
      pFVar23 = FName::FName(&local_f0,"STAT_Navigation_BuildHeightfieldLayers");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_BuildHeightfieldLayers,
                 *pFVar23,L"STAT_Navigation_BuildHeightfieldLayers","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar24 = StatPtr_STAT_Navigation_BuildHeightfieldLayers;
  if (StatPtr_STAT_Navigation_BuildHeightfieldLayers ==
      (FThreadSafeStaticStat<_bool___cdecl_rcBuildHeightfieldLayers(rcContext_*,rcCompactHeightfield_&,rcBorderSize,int,rcHeightfieldLayerSet_&)_::_2_::FStat_STAT_Navigation_BuildHeightfieldLayers>
       )0x0) {
    pFVar23 = FName::FName(&local_f0,"STAT_Navigation_BuildHeightfieldLayers");
    FVar24 = (FThreadSafeStaticStat<_bool___cdecl_rcBuildHeightfieldLayers(rcContext_*,rcCompactHeightfield_&,rcBorderSize,int,rcHeightfieldLayerSet_&)_::_2_::FStat_STAT_Navigation_BuildHeightfieldLayers>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Navigation_BuildHeightfieldLayers,*pFVar23,
                          L"STAT_Navigation_BuildHeightfieldLayers","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar49 = *(FName *)FVar24;
  bVar12 = false;
  bVar13 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  bVar19 = false;
  bVar20 = false;
  if ((FVar49.ComparisonIndex.Value.Value == 0) && (FVar49.Number == 0)) {
LAB_1446bb3d0:
    bVar13 = bVar20;
    bVar12 = bVar19;
    bVar19 = false;
    local_128 = local_e0;
    FVar49 = local_e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_17c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_17c._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar12 = false;
      bVar13 = true;
      bVar19 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_188 = FVar49;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_188,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Navmesh\\Private\\Recast\\RecastLayers.cpp"
                   ,0x459);
        bVar12 = true;
        bVar13 = true;
        bVar19 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1446bb3d0;
    local_188 = FVar49;
    local_128 = FVar49;
    FThreadStats::AddMessage(FVar49,CycleScopeStart);
    bVar19 = true;
  }
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,0x1a);
  }
  puVar25 = rcAlloc(param_2->spanCount << 3,RC_ALLOC_TEMP);
  local_158 = puVar25;
  if (puVar25 == (ushort *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,"rcBuildHeightfieldLayers: Out of memory \'spanBuf4\' (%d)."
                  );
    bVar20 = false;
    goto LAB_1446bc483;
  }
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,0x16);
  }
  bVar20 = rcGatherRegionsNoFilter(param_1,param_2,param_3,puVar25);
  if (!bVar20) {
    bVar20 = false;
    goto LAB_1446bc483;
  }
  if ((param_1->m_timerEnabled != false) &&
     ((**(code **)(param_1->_padding_ + 0x28))(param_1,0x16), param_1->m_timerEnabled != false)) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,0x19);
  }
  local_180 = param_2->height;
  uVar21 = param_2->width;
  uVar56 = (ulonglong)(int)uVar21;
  local_17c.Bits._2_2_ = 0;
  local_17c.Bits._0_2_ = param_2->maxRegions;
  uVar42 = param_2->maxRegions + 1;
  local_150 = uVar21;
  _Dst = rcAlloc(uVar42 * 0x30,RC_ALLOC_TEMP);
  local_168 = _Dst;
  if (_Dst == (undefined8 *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,"rcBuildHeightfieldLayers: Out of memory \'regions\' (%d).")
    ;
    bVar20 = false;
  }
  else {
    memset(_Dst,0,(ulonglong)uVar42 * 0x30);
    iVar31 = 0;
    if (uVar42 != 0) {
      puVar26 = _Dst + 5;
      do {
        *(short *)(puVar26 + -1) = (short)iVar31;
        iVar31 = iVar31 + 1;
        *(undefined8 *)((longlong)puVar26 + -4) = 0x1fffffff;
        puVar26 = puVar26 + 6;
      } while (iVar31 < (int)uVar42);
    }
    uVar18 = _UNK_150d9fb28;
    FVar17 = ___xmm_ffffffff000000000000000100000000;
    uVar16 = _UNK_150ae1718;
    FVar15 = ___xmm_000000000000000100000000ffffffff;
    local_18c = 0;
    iVar31 = local_180;
    if (0 < local_180) {
      prVar37 = (rcCompactSpan *)(uVar56 << 2);
      local_130 = 0;
      local_110 = prVar37;
      do {
        local_194 = 0;
        lVar34 = local_130;
        if (0 < (int)uVar56) {
          do {
            FVar49 = (FName)param_2->cells;
            uVar21 = *(uint *)(lVar34 + (longlong)FVar49) & 0xffffff;
            local_178.Number = 0;
            local_178.ComparisonIndex.Value = uVar21;
            FVar52.ComparisonIndex.Value = uVar21 + (*(uint *)(lVar34 + (longlong)FVar49) >> 0x18);
            FVar52.Number = 0;
            local_120 = FVar49;
            if ((ulonglong)local_178 < (ulonglong)FVar52) {
              local_170 = (ulonglong)uVar21 * 0xc;
              local_188 = local_178;
              do {
                FVar51 = local_178.ComparisonIndex.Value;
                prVar37 = param_2->spans;
                uVar41 = local_158[(longlong)local_188];
                FVar57 = local_188;
                if ((uVar41 != 0) && (uVar41 < uVar42)) {
                  uVar21 = *(uint *)((longlong)&prVar37->y + local_170);
                  this = (rcIntArray *)(local_168 + (ulonglong)uVar41 * 6);
                  if (*(uint *)((longlong)&this[2].m_data + 4) < uVar21) {
                    uVar21 = *(uint *)((longlong)&this[2].m_data + 4);
                  }
                  *(uint *)((longlong)&this[2].m_data + 4) = uVar21;
                  uVar21 = *(uint *)((longlong)&prVar37->y + local_170);
                  if (uVar21 < (uint)this[2].m_size) {
                    uVar21 = this[2].m_size;
                  }
                  *(byte *)&this[2].m_cap = (byte)this[2].m_cap | 8;
                  this[2].m_size = uVar21;
                  FVar57.ComparisonIndex.Value = *(uint *)(lVar34 + (longlong)FVar49) & 0xffffff;
                  FVar57.Number = 0;
                  puVar25 = local_158;
                  if ((ulonglong)FVar57 < (ulonglong)FVar52) {
                    do {
                      uVar7 = puVar25[(longlong)FVar57];
                      if ((((uVar7 != 0) && (uVar21 = (uint)uVar7, uVar21 < uVar42)) &&
                          (uVar7 != uVar41)) &&
                         (bVar20 = rcIntArray::contains(this,uVar21), puVar25 = local_158, !bVar20))
                      {
                        rcIntArray::resize(this,this->m_size + 1);
                        this->m_data[(longlong)this->m_size + -1] = uVar21;
                        puVar25 = local_158;
                      }
                      FVar57 = (FName)((longlong)FVar57 + 1);
                    } while ((longlong)FVar57 < (longlong)FVar52);
                    FVar51 = local_178.ComparisonIndex.Value;
                    FVar49 = local_120;
                  }
                  FVar57 = local_188;
                  if (this[1].m_size < 1) {
                    uVar21 = 0;
                    do {
                      uVar41 = 0;
                      uVar46 = *(uint *)((longlong)&param_2->spans->con + local_170) >>
                               ((char)uVar21 * '\b' & 0x1fU) & 0xff;
                      if (uVar46 != 0xff) {
                        local_108 = FVar17;
                        uStack_100 = uVar18;
                        local_f0 = FVar15;
                        uStack_e8 = uVar16;
                        uVar41 = local_158[((uint)param_2->cells
                                                  [(int)(((&local_108.ComparisonIndex)[uVar21 & 3].
                                                          Value + local_18c) * param_2->width +
                                                         (&local_f0.ComparisonIndex)[uVar21 & 3].
                                                         Value + local_194)] & 0xffffff) + uVar46];
                      }
                      if (uVar41 != puVar25[(longlong)local_188]) {
                        if (uVar21 != 0xffffffff) {
                          walkContour(local_194,local_18c,local_178.ComparisonIndex.Value,uVar21,
                                      param_2,local_158,this + 1);
                        }
                        break;
                      }
                      uVar21 = uVar21 + 1;
                    } while ((int)uVar21 < 4);
                    FVar51 = local_178.ComparisonIndex.Value;
                  }
                }
                local_178.ComparisonIndex.Value = FVar51.Value + 1;
                local_178.Number = 0;
                local_188 = (FName)((longlong)FVar57 + 1);
                local_170 = local_170 + 0xc;
              } while ((longlong)local_188 < (longlong)FVar52);
              uVar56 = (ulonglong)local_150;
            }
            local_194 = local_194 + 1;
            prVar37 = local_110;
            lVar34 = lVar34 + 4;
            iVar31 = local_180;
          } while (local_194 < (int)uVar56);
        }
        uVar21 = (uint)uVar56;
        local_18c = local_18c + 1;
        local_130 = (longlong)&prVar37->y + local_130;
        FVar49 = local_128;
        _Dst = local_168;
      } while ((int)local_18c < iVar31);
    }
    sVar40 = 0;
    sVar8 = 0;
    local_148.m_data = (int *)0x0;
    local_148.m_size = 0;
    local_148.m_cap = 0;
    rcIntArray::resize(&local_148,0x40);
    FVar52 = (FName)((longlong)(int)local_17c.Bits + 1);
    local_160 = 0;
    local_178 = FVar52;
    if (FVar52 == (FName)0x0) {
      uVar41 = 0;
    }
    else {
      puVar59 = (uint *)((longlong)_Dst + 0x24);
      do {
        iVar31 = local_160;
        if (((byte)puVar59[2] & 10) == 8) {
          *(short *)(puVar59 + -1) = sVar40;
          *(byte *)(puVar59 + 2) = (byte)puVar59[2] | 6;
          local_188 = FVar52;
          rcIntArray::resize(&local_148,0);
          rcIntArray::resize(&local_148,local_148.m_size + 1);
          local_148.m_data[local_148.m_size + -1] = iVar31;
          uVar56 = local_148._8_8_ & 0xffffffff;
          iVar54 = local_148.m_size;
          iVar38 = local_160;
          local_160 = iVar31;
          while (iVar54 != 0) {
            if (0 < iVar54) {
              uVar21 = (int)uVar56 - 1;
              uVar56 = (ulonglong)uVar21;
              local_148.m_cap = (int)((ulonglong)local_148._8_8_ >> 0x20);
              local_148.m_size = uVar21;
            }
            uVar39 = 0;
            local_15c = 0;
            lVar34 = (longlong)local_148.m_data[(int)uVar56];
            uVar48 = uVar39;
            local_160 = iVar38;
            if (0 < *(int *)(_Dst + lVar34 * 6 + 3)) {
              do {
                uVar21 = (uint)uVar48;
                uVar41 = *(ushort *)(uVar39 + _Dst[lVar34 * 6 + 2]);
                if ((-1 < (short)uVar41) &&
                   (plVar43 = _Dst + (ulonglong)uVar41 * 6,
                   (*(byte *)((longlong)plVar43 + 0x2c) & 2) == 0)) {
                  bVar20 = rcIntArray::contains((rcIntArray *)(puVar59 + -9),(uint)uVar41);
                  if (!bVar20) {
                    uVar46 = *(uint *)(plVar43 + 5);
                    if (*(uint *)(plVar43 + 5) < puVar59[1]) {
                      uVar46 = puVar59[1];
                    }
                    uVar55 = *(uint *)((longlong)plVar43 + 0x24);
                    if (*puVar59 < *(uint *)((longlong)plVar43 + 0x24)) {
                      uVar55 = *puVar59;
                    }
                    if ((int)(uVar46 - uVar55) < 0xff) {
                      rcIntArray::resize(&local_148,local_148.m_size + 1);
                      uVar48 = 0;
                      local_148.m_data[local_148.m_size + -1] = (uint)uVar41;
                      *(byte *)((longlong)plVar43 + 0x2c) = *(byte *)((longlong)plVar43 + 0x2c) | 2;
                      *(short *)(plVar43 + 4) = sVar8;
                      uVar56 = uVar48;
                      if (0 < (int)plVar43[1]) {
                        do {
                          local_17c = (FColor_u_0)((FColor_u_0 *)(uVar56 + *plVar43))->Bits;
                          bVar20 = rcIntArray::contains((rcIntArray *)(puVar59 + -9),local_17c.Bits)
                          ;
                          if (!bVar20) {
                            rcIntArray::resize((rcIntArray *)(puVar59 + -9),puVar59[-7] + 1);
                            ((FColor_u_0 *)
                            (*(longlong *)(puVar59 + -9) + -4 + (longlong)(int)puVar59[-7] * 4))->
                            Bits = (uint)local_17c;
                          }
                          uVar21 = (int)uVar48 + 1;
                          uVar48 = (ulonglong)uVar21;
                          uVar56 = uVar56 + 4;
                        } while ((int)uVar21 < (int)plVar43[1]);
                      }
                      uVar21 = *(uint *)((longlong)plVar43 + 0x24);
                      if (*puVar59 < *(uint *)((longlong)plVar43 + 0x24)) {
                        uVar21 = *puVar59;
                      }
                      *puVar59 = uVar21;
                      uVar21 = *(uint *)(plVar43 + 5);
                      if (*(uint *)(plVar43 + 5) < puVar59[1]) {
                        uVar21 = puVar59[1];
                      }
                      puVar59[1] = uVar21;
                      uVar21 = local_15c;
                    }
                  }
                  uVar56 = local_148._8_8_ & 0xffffffff;
                  _Dst = local_168;
                }
                local_15c = uVar21 + 1;
                uVar39 = uVar39 + 4;
                uVar48 = (ulonglong)local_15c;
              } while ((int)local_15c < *(int *)(_Dst + lVar34 * 6 + 3));
            }
            FVar52 = local_188;
            sVar40 = sVar8;
            iVar38 = local_160;
            iVar54 = (int)uVar56;
          }
          sVar40 = sVar40 + 1;
          sVar8 = sVar40;
        }
        local_160 = local_160 + 1;
        puVar59 = puVar59 + 0xc;
        FVar52 = (FName)((longlong)FVar52 + -1);
      } while (FVar52 != (FName)0x0);
      prVar44 = (rcCompactCell *)(_Dst + 5);
      local_170 = 0;
      local_188.ComparisonIndex.Value = 0;
      local_188.Number = 0;
      FVar52 = local_178;
      do {
        if ((prVar44[1].index & 4) != 0) {
          uVar14 = prVar44[-2].index;
          local_120 = (FName)((longlong)_Dst + 0x24);
          do {
            lVar35 = 0;
            lVar34 = local_170;
            FVar49 = local_120;
LAB_1446bba66:
            uVar56 = 0;
            if ((lVar34 == lVar35) || ((((rcCompactCell *)((longlong)FVar49 + 8))->index & 4) == 0))
            {
LAB_1446bbc03:
              lVar35 = lVar35 + 1;
              FVar49 = (FName)((longlong)FVar49 + 0x30);
              _Dst = local_168;
              if ((longlong)FVar52 <= lVar35) break;
              goto LAB_1446bba66;
            }
            rVar32 = *(rcCompactCell *)((longlong)FVar49 + 4);
            rVar9 = prVar44[-1];
            uVar21 = (uint)(ushort)((short)param_4 << 2);
            lVar34 = local_170;
            FVar52 = local_178;
            if ((int)rVar32 + uVar21 < (uint)rVar9) goto LAB_1446bbc03;
            rVar10 = *prVar44;
            rVar36 = *(rcCompactCell *)FVar49;
            if (uVar21 + (int)rVar10 < (uint)rVar36) goto LAB_1446bbc03;
            if ((uint)rVar32 < (uint)rVar10) {
              rVar32 = rVar10;
            }
            if ((uint)rVar9 < (uint)rVar36) {
              rVar36 = rVar9;
            }
            if (0xfe < (int)rVar32 - (int)rVar36) goto LAB_1446bbc03;
            psVar29 = (short *)(local_168 + 4);
            uVar48 = uVar56;
            do {
              if ((*psVar29 == (short)((rcCompactCell *)((longlong)FVar49 + -4))->index) &&
                 (bVar20 = rcIntArray::contains((rcIntArray *)(prVar44 + -10),(int)uVar48),
                 lVar34 = local_170, FVar52 = local_178, bVar20)) goto LAB_1446bbc03;
              uVar48 = (ulonglong)((int)uVar48 + 1);
              uVar56 = uVar56 + 1;
              psVar29 = psVar29 + 0x18;
            } while ((longlong)uVar56 < (longlong)FVar52);
            sVar8 = (short)((rcCompactCell *)((longlong)FVar49 + -4))->index;
            _Dst = local_168;
            if (sVar8 == -1) break;
            pbVar58 = (byte *)((longlong)local_168 + 0x2c);
            local_188 = FVar52;
            do {
              if (*(short *)(pbVar58 + -0xc) == sVar8) {
                *pbVar58 = *pbVar58 & 0xfb;
                iVar31 = 0;
                *(short *)(pbVar58 + -0xc) = (short)uVar14;
                if (0 < *(int *)(pbVar58 + -0x24)) {
                  lVar34 = 0;
                  do {
                    iVar54 = *(int *)(lVar34 + *(longlong *)(pbVar58 + -0x2c));
                    bVar20 = rcIntArray::contains((rcIntArray *)(prVar44 + -10),iVar54);
                    if (!bVar20) {
                      rcIntArray::resize((rcIntArray *)(prVar44 + -10),(int)prVar44[-8] + 1);
                      *(int *)(*(longlong *)(prVar44 + -10) + -4 + (longlong)(int)prVar44[-8] * 4) =
                           iVar54;
                    }
                    iVar31 = iVar31 + 1;
                    lVar34 = lVar34 + 4;
                  } while (iVar31 < *(int *)(pbVar58 + -0x24));
                }
                rVar32 = *(rcCompactCell *)(pbVar58 + -8);
                if ((uint)prVar44[-1] < (uint)*(rcCompactCell *)(pbVar58 + -8)) {
                  rVar32 = prVar44[-1];
                }
                prVar44[-1] = rVar32;
                rVar32 = *(rcCompactCell *)(pbVar58 + -4);
                if ((uint)*(rcCompactCell *)(pbVar58 + -4) < (uint)*prVar44) {
                  rVar32 = *prVar44;
                }
                *prVar44 = rVar32;
              }
              pbVar58 = pbVar58 + 0x30;
              local_188 = (FName)((longlong)local_188 + -1);
            } while (local_188 != (FName)0x0);
            local_188.ComparisonIndex.Value = 0;
            local_188.Number = 0;
            FVar52 = local_178;
          } while( true );
        }
        lVar34 = 0;
        local_170 = local_170 + 1;
        prVar44 = prVar44 + 0xc;
      } while (local_170 < (longlong)FVar52);
      pbVar58 = (byte *)((longlong)_Dst + 0x2c);
      FVar49 = FVar52;
      do {
        bVar30 = *pbVar58;
        bVar30 = (bVar30 >> 3 ^ bVar30) & 1 ^ bVar30;
        *pbVar58 = bVar30;
        if ((bVar30 & 8) == 0) {
          pbVar58[-0xc] = 0xff;
          pbVar58[-0xb] = 0xff;
        }
        pbVar58 = pbVar58 + 0x30;
        FVar49 = (FName)((longlong)FVar49 + -1);
      } while (FVar49 != (FName)0x0);
      pbVar58 = (byte *)((longlong)_Dst + 0x2c);
      uVar41 = 0;
      do {
        if ((*pbVar58 & 1) != 0) {
          sVar8 = *(short *)(pbVar58 + -0xc);
          lVar35 = (longlong)FVar52 - lVar34;
          pbVar27 = pbVar58;
          do {
            if (*(short *)(pbVar27 + -0xc) == sVar8) {
              *(ushort *)(pbVar27 + -0xc) = uVar41;
              *pbVar27 = *pbVar27 & 0xfe;
            }
            pbVar27 = pbVar27 + 0x30;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
          uVar41 = uVar41 + 1;
        }
        lVar34 = lVar34 + 1;
        pbVar58 = pbVar58 + 0x30;
        FVar49 = local_128;
        iVar31 = local_180;
        uVar21 = local_150;
      } while (lVar34 < (longlong)FVar52);
    }
    if (param_1->m_timerEnabled != false) {
      (**(code **)(param_1->_padding_ + 0x28))();
    }
    if (uVar41 == 0) {
LAB_1446bc3e7:
      if (param_1->m_timerEnabled != false) {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,0x1a);
      }
      bVar20 = true;
    }
    else {
      iStackX_1c = param_3.high;
      iVar38 = param_3.low;
      iVar54 = (uVar21 - iStackX_1c) - iVar38;
      iVar31 = (iVar31 - iStackX_1c) - iVar38;
      dVar1 = param_2->bmax[0];
      dVar61 = (double)iVar38 * param_2->cs;
      dVar2 = param_2->bmax[2];
      dVar3 = param_2->bmin[1];
      dVar4 = param_2->bmax[1];
      dVar5 = param_2->bmin[0];
      dVar6 = param_2->bmin[2];
      dVar60 = (double)iStackX_1c * param_2->cs;
      param_5->nlayers = (uint)uVar41;
      local_180 = iVar31;
      local_134 = iVar54;
      _Dst_00 = rcAlloc((uint)uVar41 * 0x78,RC_ALLOC_PERM);
      param_5->layers = _Dst_00;
      if (_Dst_00 != (rcHeightfieldLayer *)0x0) {
        memset(_Dst_00,0,(longlong)param_5->nlayers * 0x78);
        local_194 = 0;
        if (0 < param_5->nlayers) {
          local_15c = iVar31 * iVar54;
          iVar31 = local_15c * 2;
          local_170 = CONCAT44(local_170._4_4_,iVar31);
          do {
            uVar21 = local_15c;
            FVar52 = (FName)(param_5->layers + local_194);
            *(undefined8 *)FVar52 = 0;
            *(undefined8 *)((longlong)FVar52 + 8) = 0;
            *(undefined8 *)((longlong)FVar52 + 0x10) = 0;
            *(undefined8 *)((longlong)FVar52 + 0x18) = 0;
            *(undefined8 *)((longlong)FVar52 + 0x20) = 0;
            *(undefined8 *)((longlong)FVar52 + 0x28) = 0;
            *(undefined8 *)((longlong)FVar52 + 0x30) = 0;
            *(undefined8 *)((longlong)FVar52 + 0x38) = 0;
            *(undefined8 *)((longlong)FVar52 + 0x40) = 0;
            *(undefined8 *)((longlong)FVar52 + 0x48) = 0;
            *(undefined8 *)((longlong)FVar52 + 0x50) = 0;
            *(undefined8 *)((longlong)FVar52 + 0x58) = 0;
            *(undefined8 *)((longlong)FVar52 + 0x60) = 0;
            *(undefined8 *)((longlong)FVar52 + 0x68) = 0;
            *(undefined8 *)((longlong)FVar52 + 0x70) = 0;
            local_188 = FVar52;
            pvVar28 = rcAlloc(iVar31,RC_ALLOC_PERM);
            *(void **)((longlong)FVar52 + 0x60) = pvVar28;
            if (pvVar28 == (void *)0x0) {
              pcVar50 = "rcBuildHeightfieldLayers: Out of memory \'heights\' (%d).";
              goto LAB_1446bc511;
            }
            memset(pvVar28,0xff,(longlong)(int)(uVar21 * 2));
            pvVar28 = rcAlloc(uVar21,RC_ALLOC_PERM);
            *(void **)((longlong)FVar52 + 0x68) = pvVar28;
            if (pvVar28 == (void *)0x0) {
              pcVar50 = "rcBuildHeightfieldLayers: Out of memory \'areas\' (%d).";
              goto LAB_1446bc511;
            }
            memset(pvVar28,0,(longlong)(int)uVar21);
            pvVar28 = rcAlloc(local_15c,RC_ALLOC_PERM);
            *(void **)((longlong)FVar52 + 0x70) = pvVar28;
            if (pvVar28 == (void *)0x0) {
              pcVar50 = "rcBuildHeightfieldLayers: Out of memory \'cons\' (%d).";
              goto LAB_1446bc511;
            }
            memset(pvVar28,0,(longlong)(int)uVar21);
            uVar21 = 0;
            local_18c = 0;
            if (local_178 != (FName)0x0) {
              psVar29 = (short *)(_Dst + 4);
              FVar57 = local_178;
              local_18c = uVar21;
              do {
                if (((*(byte *)(psVar29 + 6) & 4) != 0) && (*psVar29 == (short)local_194)) {
                  local_18c = *(uint *)(psVar29 + 2);
                  uVar21 = *(uint *)(psVar29 + 4);
                }
                psVar29 = psVar29 + 0x18;
                FVar57 = (FName)((longlong)FVar57 + -1);
              } while (FVar57 != (FName)0x0);
            }
            *(int *)((longlong)FVar52 + 0x44) = local_180;
            *(int *)((longlong)FVar52 + 0x40) = iVar54;
            *(double *)((longlong)FVar52 + 0x30) = param_2->cs;
            dVar11 = param_2->ch;
            *(double *)((longlong)FVar52 + 8) = dVar3;
            *(double *)((longlong)FVar52 + 0x20) = dVar4;
            *(double *)FVar52 = dVar61 + dVar5;
            *(double *)((longlong)FVar52 + 0x10) = dVar61 + dVar6;
            *(double *)((longlong)FVar52 + 0x18) = dVar1 - dVar60;
            *(double *)((longlong)FVar52 + 0x28) = dVar2 - dVar60;
            *(double *)((longlong)FVar52 + 0x38) = dVar11;
            local_160 = 0;
            *(double *)((longlong)FVar52 + 8) = (double)local_18c * param_2->ch + dVar3;
            *(double *)((longlong)FVar52 + 0x20) = (double)uVar21 * param_2->ch + dVar3;
            *(int *)((longlong)FVar52 + 0x48) = iVar54;
            *(undefined4 *)((longlong)FVar52 + 0x4c) = 0;
            *(int *)((longlong)FVar52 + 0x50) = local_180;
            *(undefined4 *)((longlong)FVar52 + 0x54) = 0;
            if (0 < local_180) {
              do {
                local_17c.Bits = 0;
                if (0 < iVar54) {
                  local_118 = local_160 + iVar38;
                  local_f8 = local_118 * local_150;
                  iVar31 = local_118 * local_150;
                  do {
                    iVar53 = local_17c.Bits + iVar38;
                    uVar21 = (uint)param_2->cells[iVar31 + iVar53] & 0xffffff;
                    local_120.Number = 0;
                    local_120.ComparisonIndex.Value = uVar21;
                    local_f0.ComparisonIndex.Value =
                         uVar21 + ((uint)param_2->cells[iVar31 + iVar53] >> 0x18);
                    local_f0.Number = 0;
                    if ((ulonglong)local_120 < (ulonglong)local_f0) {
                      local_130 = (longlong)local_120 * 0xc;
                      do {
                        uVar41 = local_158[(longlong)local_120];
                        local_110 = param_2->spans;
                        if (((uVar41 != 0) && (uVar41 < uVar42)) &&
                           (sVar8 = *(short *)(_Dst + (ulonglong)uVar41 * 6 + 4),
                           sVar8 == (short)local_194)) {
                          FVar22 = local_17c;
                          if (*(int *)((longlong)FVar52 + 0x48) < (int)local_17c.Bits) {
                            FVar22 = *(FColor_u_0 *)((longlong)FVar52 + 0x48);
                          }
                          ((FColor_u_0 *)((longlong)FVar52 + 0x48))->Bits = (uint)FVar22;
                          FVar22 = local_17c;
                          if ((int)local_17c.Bits < *(int *)((longlong)FVar52 + 0x4c)) {
                            FVar22 = *(FColor_u_0 *)((longlong)FVar52 + 0x4c);
                          }
                          ((FColor_u_0 *)((longlong)FVar52 + 0x4c))->Bits = (uint)FVar22;
                          iVar31 = local_160;
                          if (*(int *)((longlong)FVar52 + 0x50) < local_160) {
                            iVar31 = *(int *)((longlong)FVar52 + 0x50);
                          }
                          *(int *)((longlong)FVar52 + 0x50) = iVar31;
                          iVar31 = local_160;
                          if (local_160 < *(int *)((longlong)FVar52 + 0x54)) {
                            iVar31 = *(int *)((longlong)FVar52 + 0x54);
                          }
                          *(int *)((longlong)FVar52 + 0x54) = iVar31;
                          uVar21 = 0;
                          sVar40 = (short)local_18c;
                          uVar55 = 0;
                          local_138 = local_160 * iVar54 + local_17c.Bits;
                          uVar46 = 0;
                          *(short *)(*(longlong *)((longlong)FVar52 + 0x60) +
                                    (longlong)local_138 * 2) =
                               *(short *)((longlong)&local_110->y + local_130) - sVar40;
                          *(uchar *)((longlong)local_138 + *(longlong *)((longlong)FVar52 + 0x68)) =
                               param_2->areas[(longlong)local_120];
                          do {
                            uVar47 = *(uint *)((longlong)&local_110->con + local_130) >>
                                     ((char)uVar46 * '\b' & 0x1fU) & 0xff;
                            if (uVar47 != 0xff) {
                              local_108 = FVar15;
                              uStack_100 = uVar16;
                              iVar31 = (&local_108.ComparisonIndex)[uVar46 & 3].Value + iVar53;
                              local_108 = FVar17;
                              uStack_100 = uVar18;
                              iVar54 = (&local_108.ComparisonIndex)[uVar46 & 3].Value + local_118;
                              uVar47 = ((uint)param_2->cells[(int)(iVar54 * local_150 + iVar31)] &
                                       0xffffff) + uVar47;
                              if (local_158[uVar47] < uVar42) {
                                sVar45 = *(short *)(local_168 + (ulonglong)local_158[uVar47] * 6 + 4
                                                   );
                              }
                              else {
                                sVar45 = -1;
                              }
                              if ((param_2->areas[uVar47] != '\0') && (sVar8 != sVar45)) {
                                uVar21 = uVar21 & 0xff | 1 << (uVar46 & 0x1f);
                                uVar33 = param_2->spans[uVar47].y;
                                if (local_18c < uVar33) {
                                  lVar35 = (longlong)local_138;
                                  uVar41 = (short)uVar33 - sVar40;
                                  lVar34 = *(longlong *)((longlong)local_188 + 0x60);
                                  if (uVar41 < *(ushort *)(lVar34 + lVar35 * 2)) {
                                    uVar41 = *(ushort *)(lVar34 + lVar35 * 2);
                                  }
                                  *(ushort *)(lVar34 + lVar35 * 2) = uVar41;
                                }
                              }
                              if ((param_2->areas[uVar47] != '\0') && (sVar8 == sVar45)) {
                                iVar54 = iVar54 - iVar38;
                                iVar31 = iVar31 - iVar38;
                                if ((-1 < iVar31) &&
                                   (((-1 < iVar54 && (iVar31 < local_134)) && (iVar54 < local_180)))
                                   ) {
                                  uVar55 = uVar55 & 0xff | 1 << (uVar46 & 0x1f);
                                }
                              }
                            }
                            uVar47 = *(uint *)((longlong)&local_110->con + local_130) >>
                                     ((char)uVar46 * '\b' + 8U & 0x1f) & 0xff;
                            if (uVar47 != 0xff) {
                              uVar33 = uVar46 + 1 & 3;
                              local_108 = FVar15;
                              uStack_100 = uVar16;
                              iVar31 = (&local_108.ComparisonIndex)[uVar33].Value + iVar53;
                              local_108 = FVar17;
                              uStack_100 = uVar18;
                              iVar54 = (&local_108.ComparisonIndex)[uVar33].Value + local_118;
                              uVar47 = ((uint)param_2->cells[(int)(iVar54 * local_150 + iVar31)] &
                                       0xffffff) + uVar47;
                              if (local_158[uVar47] < uVar42) {
                                sVar45 = *(short *)(local_168 + (ulonglong)local_158[uVar47] * 6 + 4
                                                   );
                              }
                              else {
                                sVar45 = -1;
                              }
                              if ((param_2->areas[uVar47] != '\0') && (sVar8 != sVar45)) {
                                uVar21 = uVar21 & 0xff | 1 << (uVar46 + 1 & 0x1f);
                                uVar33 = param_2->spans[uVar47].y;
                                if (local_18c < uVar33) {
                                  uVar41 = (short)uVar33 - sVar40;
                                  lVar34 = *(longlong *)((longlong)local_188 + 0x60);
                                  lVar35 = (longlong)local_138;
                                  if (uVar41 < *(ushort *)(lVar34 + lVar35 * 2)) {
                                    uVar41 = *(ushort *)(lVar34 + lVar35 * 2);
                                  }
                                  *(ushort *)(lVar34 + lVar35 * 2) = uVar41;
                                }
                              }
                              if ((param_2->areas[uVar47] != '\0') && (sVar8 == sVar45)) {
                                iVar54 = iVar54 - iVar38;
                                iVar31 = iVar31 - iVar38;
                                if ((-1 < iVar31) &&
                                   (((-1 < iVar54 && (iVar31 < local_134)) && (iVar54 < local_180)))
                                   ) {
                                  uVar55 = uVar55 & 0xff | 1 << (uVar46 + 1 & 0x1f);
                                }
                              }
                            }
                            uVar46 = uVar46 + 2;
                          } while ((int)uVar46 < 4);
                          *(byte *)((longlong)local_138 + *(longlong *)((longlong)local_188 + 0x70))
                               = (char)uVar21 << 4 | (byte)uVar55;
                          FVar52 = local_188;
                          iVar54 = local_134;
                        }
                        local_120 = (FName)((longlong)local_120 + 1);
                        local_130 = local_130 + 0xc;
                        _Dst = local_168;
                      } while ((longlong)local_120 < (longlong)local_f0);
                    }
                    local_17c.Bits = local_17c.Bits + 1;
                    _Dst = local_168;
                    iVar31 = local_f8;
                  } while ((int)local_17c.Bits < iVar54);
                }
                local_160 = local_160 + 1;
                FVar49 = local_128;
                _Dst = local_168;
              } while (local_160 < local_180);
            }
            fixLayerConnections((rcHeightfieldLayer *)FVar52);
            if (*(int *)((longlong)FVar52 + 0x4c) < *(int *)((longlong)FVar52 + 0x48)) {
              *(undefined8 *)((longlong)FVar52 + 0x48) = 0;
            }
            if (*(int *)((longlong)FVar52 + 0x54) < *(int *)((longlong)FVar52 + 0x50)) {
              *(undefined8 *)((longlong)FVar52 + 0x50) = 0;
            }
            local_194 = local_194 + 1;
            iVar31 = local_15c * 2;
            _Dst = local_168;
          } while (local_194 < param_5->nlayers);
        }
        goto LAB_1446bc3e7;
      }
      pcVar50 = "rcBuildHeightfieldLayers: Out of memory \'layers\' (%d).";
LAB_1446bc511:
      rcContext::log(param_1,RC_LOG_ERROR,pcVar50);
      bVar20 = false;
    }
    rcFree(local_148.m_data);
    _Dst = local_168;
    puVar25 = local_158;
  }
  if (uVar42 != 0) {
    uVar56 = (ulonglong)uVar42;
    puVar26 = _Dst;
    do {
      rcFree((void *)puVar26[2]);
      rcFree((void *)*puVar26);
      puVar26 = puVar26 + 6;
      uVar56 = uVar56 - 1;
    } while (uVar56 != 0);
  }
  rcFree(_Dst);
LAB_1446bc483:
  rcFree(puVar25);
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar49,CycleScopeEnd);
  }
  return bVar20;
}

// rcBuildHeightfieldLayersChunky @ 1446bc5d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
rcBuildHeightfieldLayersChunky
          (rcContext *param_1,rcCompactHeightfield *param_2,rcBorderSize param_3,int param_4,
          int param_5,rcHeightfieldLayerSet *param_6)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  TAlignedBytes<8,8> TVar5;
  TAlignedBytes<8,8> TVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_bool___cdecl_rcBuildHeightfieldLayersChunky(rcContext_*,rcCompactHeightfield_&,rcBorderSize,int,int,rcHeightfieldLayerSet_&)_::_2_::FStat_STAT_Navigation_BuildHeightfieldLayersChunky>
  FVar9;
  ushort *_Dst;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  longlong lVar13;
  rcIntArray *prVar14;
  FNameEntryId FVar15;
  FName local_res8;
  LARGE_INTEGER local_res10;
  FStatMessage local_58;
  FName local_48;
  
  FVar15.Value = 0;
  local_res10 = (LARGE_INTEGER)param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_Navigation_BuildHeightfieldLayersChunky ==
        (FThreadSafeStaticStat<_bool___cdecl_rcBuildHeightfieldLayersChunky(rcContext_*,rcCompactHeightfield_&,rcBorderSize,int,int,rcHeightfieldLayerSet_&)_::_2_::FStat_STAT_Navigation_BuildHeightfieldLayersChunky>
         )0x0) {
      pFVar8 = FName::FName(&local_res8,"STAT_Navigation_BuildHeightfieldLayersChunky");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_BuildHeightfieldLayersChunky,
                 *pFVar8,L"STAT_Navigation_BuildHeightfieldLayersChunky","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar9 = StatPtr_STAT_Navigation_BuildHeightfieldLayersChunky;
  if (StatPtr_STAT_Navigation_BuildHeightfieldLayersChunky ==
      (FThreadSafeStaticStat<_bool___cdecl_rcBuildHeightfieldLayersChunky(rcContext_*,rcCompactHeightfield_&,rcBorderSize,int,int,rcHeightfieldLayerSet_&)_::_2_::FStat_STAT_Navigation_BuildHeightfieldLayersChunky>
       )0x0) {
    pFVar8 = FName::FName((FName *)&local_58,"STAT_Navigation_BuildHeightfieldLayersChunky");
    FVar9 = (FThreadSafeStaticStat<_bool___cdecl_rcBuildHeightfieldLayersChunky(rcContext_*,rcCompactHeightfield_&,rcBorderSize,int,int,rcHeightfieldLayerSet_&)_::_2_::FStat_STAT_Navigation_BuildHeightfieldLayersChunky>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_Navigation_BuildHeightfieldLayersChunky,*pFVar8,
                         L"STAT_Navigation_BuildHeightfieldLayersChunky","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar2 = false;
  bVar4 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar11.Value;
        local_res8.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Navmesh\\Private\\Recast\\RecastLayers.cpp"
                   ,0x3ae);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.ComparisonIndex.Value = FVar11.Value;
      local_res8.Number = uVar10;
      local_48 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar3 = true;
      FVar15.Value = local_48.ComparisonIndex.Value;
      goto LAB_1446bc76d;
    }
  }
  bVar3 = false;
  FVar12 = local_48;
LAB_1446bc76d:
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,0x1a);
  }
  _Dst = rcAlloc(param_2->spanCount * 2,RC_ALLOC_TEMP);
  if (_Dst == (ushort *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,"rcBuildHeightfieldLayers: Out of memory \'srcReg\' (%d).");
    bVar7 = false;
  }
  else {
    memset(_Dst,0xff,(longlong)param_2->spanCount * 2);
    local_58.StatData.Pad[0] = '\0';
    local_58.StatData.Pad[1] = '\0';
    local_58.StatData.Pad[2] = '\0';
    local_58.StatData.Pad[3] = '\0';
    local_58.StatData.Pad[4] = '\0';
    local_58.StatData.Pad[5] = '\0';
    local_58.StatData.Pad[6] = '\0';
    local_58.StatData.Pad[7] = '\0';
    local_res8.ComparisonIndex.Value = 0;
    bVar7 = CollectLayerRegionsChunky
                      (param_1,param_2,param_3,param_5,_Dst,(rcLayerRegionMonotone **)&local_58,
                       (int *)&local_res8);
    TVar6.Pad = local_58.StatData.Pad;
    lVar13 = (longlong)(int)local_res8.ComparisonIndex.Value;
    if (bVar7) {
      bVar7 = SplitAndStoreLayerRegions
                        (param_1,(rcCompactHeightfield *)local_res10,param_3,param_4,_Dst,
                         (rcLayerRegionMonotone *)local_58.StatData.Pad,
                         local_res8.ComparisonIndex.Value,param_6);
      local_res10.s.LowPart._0_1_ = bVar7;
      TVar5.Pad = TVar6.Pad;
      if (0 < lVar13) {
        do {
          prVar14 = (rcIntArray *)((longlong)TVar5.Pad + 8);
          rcFree(prVar14[1].m_data);
          rcFree(prVar14->m_data);
          lVar13 = lVar13 + -1;
          TVar5.Pad = (uchar  [8])(prVar14 + 3);
        } while (lVar13 != 0);
      }
      rcFree((void *)TVar6.Pad);
      if (local_res10.s.LowPart._0_1_ == '\0') {
        bVar7 = false;
      }
      else {
        if (param_1->m_timerEnabled != false) {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,0x1a);
        }
        bVar7 = true;
      }
    }
    else {
      TVar5.Pad = local_58.StatData.Pad;
      if (0 < lVar13) {
        do {
          prVar14 = (rcIntArray *)((longlong)TVar5.Pad + 8);
          rcFree(prVar14[1].m_data);
          rcFree(prVar14->m_data);
          lVar13 = lVar13 + -1;
          TVar5.Pad = (uchar  [8])(prVar14 + 3);
        } while (lVar13 != 0);
      }
      rcFree((void *)TVar6.Pad);
      bVar7 = false;
    }
  }
  rcFree(_Dst);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_58.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res10);
      local_58.StatData.Pad = (uchar  [8])(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this,&local_58);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return bVar7;
}

// rcBuildHeightfieldLayersMonotone @ 1446bca90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
rcBuildHeightfieldLayersMonotone
          (rcContext *param_1,rcCompactHeightfield *param_2,rcBorderSize param_3,int param_4,
          rcHeightfieldLayerSet *param_5)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  TAlignedBytes<8,8> TVar5;
  TAlignedBytes<8,8> TVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_bool___cdecl_rcBuildHeightfieldLayersMonotone(rcContext_*,rcCompactHeightfield_&,rcBorderSize,int,rcHeightfieldLayerSet_&)_::_2_::FStat_STAT_Navigation_BuildHeightfieldLayersMonotone>
  FVar9;
  ushort *_Dst;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  longlong lVar13;
  rcIntArray *prVar14;
  FNameEntryId FVar15;
  FName local_res8;
  LARGE_INTEGER local_res10;
  FStatMessage local_58;
  FName local_48;
  
  FVar15.Value = 0;
  local_res10 = (LARGE_INTEGER)param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_Navigation_BuildHeightfieldLayersMonotone ==
        (FThreadSafeStaticStat<_bool___cdecl_rcBuildHeightfieldLayersMonotone(rcContext_*,rcCompactHeightfield_&,rcBorderSize,int,rcHeightfieldLayerSet_&)_::_2_::FStat_STAT_Navigation_BuildHeightfieldLayersMonotone>
         )0x0) {
      pFVar8 = FName::FName(&local_res8,"STAT_Navigation_BuildHeightfieldLayersMonotone");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_Navigation_BuildHeightfieldLayersMonotone,*pFVar8,
                 L"STAT_Navigation_BuildHeightfieldLayersMonotone","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar9 = StatPtr_STAT_Navigation_BuildHeightfieldLayersMonotone;
  if (StatPtr_STAT_Navigation_BuildHeightfieldLayersMonotone ==
      (FThreadSafeStaticStat<_bool___cdecl_rcBuildHeightfieldLayersMonotone(rcContext_*,rcCompactHeightfield_&,rcBorderSize,int,rcHeightfieldLayerSet_&)_::_2_::FStat_STAT_Navigation_BuildHeightfieldLayersMonotone>
       )0x0) {
    pFVar8 = FName::FName((FName *)&local_58,"STAT_Navigation_BuildHeightfieldLayersMonotone");
    FVar9 = (FThreadSafeStaticStat<_bool___cdecl_rcBuildHeightfieldLayersMonotone(rcContext_*,rcCompactHeightfield_&,rcBorderSize,int,rcHeightfieldLayerSet_&)_::_2_::FStat_STAT_Navigation_BuildHeightfieldLayersMonotone>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_Navigation_BuildHeightfieldLayersMonotone,*pFVar8,
                         L"STAT_Navigation_BuildHeightfieldLayersMonotone","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar2 = false;
  bVar4 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar11.Value;
        local_res8.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Navmesh\\Private\\Recast\\RecastLayers.cpp"
                   ,899);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.ComparisonIndex.Value = FVar11.Value;
      local_res8.Number = uVar10;
      local_48 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar3 = true;
      FVar15.Value = local_48.ComparisonIndex.Value;
      goto LAB_1446bcc2d;
    }
  }
  bVar3 = false;
  FVar12 = local_48;
LAB_1446bcc2d:
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,0x1a);
  }
  _Dst = rcAlloc(param_2->spanCount * 2,RC_ALLOC_TEMP);
  if (_Dst == (ushort *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,"rcBuildHeightfieldLayers: Out of memory \'srcReg\' (%d).");
    bVar7 = false;
  }
  else {
    memset(_Dst,0xff,(longlong)param_2->spanCount * 2);
    local_58.StatData.Pad[0] = '\0';
    local_58.StatData.Pad[1] = '\0';
    local_58.StatData.Pad[2] = '\0';
    local_58.StatData.Pad[3] = '\0';
    local_58.StatData.Pad[4] = '\0';
    local_58.StatData.Pad[5] = '\0';
    local_58.StatData.Pad[6] = '\0';
    local_58.StatData.Pad[7] = '\0';
    local_res8.ComparisonIndex.Value = 0;
    bVar7 = CollectLayerRegionsMonotone
                      (param_1,param_2,param_3,_Dst,(rcLayerRegionMonotone **)&local_58,
                       (int *)&local_res8);
    TVar6.Pad = local_58.StatData.Pad;
    lVar13 = (longlong)(int)local_res8.ComparisonIndex.Value;
    if (bVar7) {
      bVar7 = SplitAndStoreLayerRegions
                        (param_1,(rcCompactHeightfield *)local_res10,param_3,param_4,_Dst,
                         (rcLayerRegionMonotone *)local_58.StatData.Pad,
                         local_res8.ComparisonIndex.Value,param_5);
      local_res10.s.LowPart._0_1_ = bVar7;
      TVar5.Pad = TVar6.Pad;
      if (0 < lVar13) {
        do {
          prVar14 = (rcIntArray *)((longlong)TVar5.Pad + 8);
          rcFree(prVar14[1].m_data);
          rcFree(prVar14->m_data);
          lVar13 = lVar13 + -1;
          TVar5.Pad = (uchar  [8])(prVar14 + 3);
        } while (lVar13 != 0);
      }
      rcFree((void *)TVar6.Pad);
      if (local_res10.s.LowPart._0_1_ == '\0') {
        bVar7 = false;
      }
      else {
        if (param_1->m_timerEnabled != false) {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,0x1a);
        }
        bVar7 = true;
      }
    }
    else {
      TVar5.Pad = local_58.StatData.Pad;
      if (0 < lVar13) {
        do {
          prVar14 = (rcIntArray *)((longlong)TVar5.Pad + 8);
          rcFree(prVar14[1].m_data);
          rcFree(prVar14->m_data);
          lVar13 = lVar13 + -1;
          TVar5.Pad = (uchar  [8])(prVar14 + 3);
        } while (lVar13 != 0);
      }
      rcFree((void *)TVar6.Pad);
      bVar7 = false;
    }
  }
  rcFree(_Dst);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_58.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res10);
      local_58.StatData.Pad = (uchar  [8])(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this,&local_58);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return bVar7;
}

// rcBuildPolyMesh @ 1446bcf40

bool __cdecl
rcBuildPolyMesh(rcContext *param_1,rcContourSet *param_2,int param_3,rcPolyMesh *param_4)

{
  uint uVar1;
  rcContour *prVar2;
  ushort *puVar3;
  rcContour *prVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  ushort *puVar10;
  uchar *puVar11;
  int *piVar12;
  uint *puVar13;
  ulonglong uVar14;
  ushort *puVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  uint *puVar19;
  int iVar20;
  size_t _Size;
  int iVar21;
  int iVar22;
  int iVar23;
  char *pcVar24;
  longlong lVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  ulonglong uVar29;
  int iVar30;
  size_t _Size_00;
  int local_d8;
  int local_d0;
  int local_cc;
  ulonglong local_c8;
  longlong local_c0;
  int local_a8;
  int local_98;
  int local_94;
  ulonglong local_90;
  int *local_88;
  rcContour *local_80;
  int *local_78;
  int *local_70;
  ushort *local_68;
  int *local_60;
  size_t local_58;
  
  uVar29 = (ulonglong)param_3;
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,0xc);
  }
  iVar22 = 0;
  param_4->bmin[0] = param_2->bmin[0];
  iVar26 = 0;
  iVar21 = 0;
  param_4->bmin[1] = param_2->bmin[1];
  param_4->bmin[2] = param_2->bmin[2];
  param_4->bmax[0] = param_2->bmax[0];
  param_4->bmax[1] = param_2->bmax[1];
  param_4->bmax[2] = param_2->bmax[2];
  param_4->cs = param_2->cs;
  param_4->ch = param_2->ch;
  param_4->borderSize = param_2->borderSize;
  lVar18 = (longlong)param_2->nconts;
  if (0 < lVar18) {
    piVar12 = &param_2->conts->nverts;
    do {
      iVar27 = *piVar12;
      iVar28 = iVar21;
      if (2 < iVar27) {
        iVar22 = iVar22 + iVar27;
        iVar26 = iVar26 + -2 + iVar27;
        iVar28 = iVar27;
        if (iVar27 < iVar21) {
          iVar28 = iVar21;
        }
      }
      iVar21 = iVar28;
      piVar12 = piVar12 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    if (0xfffd < iVar22) {
      rcContext::log(param_1,RC_LOG_ERROR,"rcBuildPolyMesh: Too many vertices %d.");
      return false;
    }
  }
  _Dst = rcAlloc(iVar22,RC_ALLOC_TEMP);
  if (_Dst == (void *)0x0) {
    pcVar24 = "rcBuildPolyMesh: Out of memory \'vflags\' (%d).";
  }
  else {
    _Size_00 = (size_t)iVar22;
    memset(_Dst,0,_Size_00);
    puVar10 = rcAlloc(iVar22 * 6,RC_ALLOC_PERM);
    param_4->verts = puVar10;
    if (puVar10 == (ushort *)0x0) {
      pcVar24 = "rcBuildPolyMesh: Out of memory \'mesh.verts\' (%d).";
    }
    else {
      puVar10 = rcAlloc(iVar26 * param_3 * 4,RC_ALLOC_PERM);
      param_4->polys = puVar10;
      if (puVar10 == (ushort *)0x0) {
        pcVar24 = "rcBuildPolyMesh: Out of memory \'mesh.polys\' (%d).";
      }
      else {
        puVar10 = rcAlloc(iVar26 * 2,RC_ALLOC_PERM);
        param_4->regs = puVar10;
        if (puVar10 == (ushort *)0x0) {
          pcVar24 = "rcBuildPolyMesh: Out of memory \'mesh.regs\' (%d).";
        }
        else {
          puVar11 = rcAlloc(iVar26,RC_ALLOC_PERM);
          param_4->areas = puVar11;
          if (puVar11 != (uchar *)0x0) {
            param_4->nvp = param_3;
            local_60 = &param_4->nverts;
            param_4->npolys = 0;
            *local_60 = 0;
            param_4->maxpolys = iVar26;
            memset(param_4->verts,0,_Size_00 * 6);
            _Size = (size_t)iVar26;
            local_90 = uVar29;
            memset(param_4->polys,0xff,uVar29 * _Size * 4);
            memset(param_4->regs,0,_Size * 2);
            memset(param_4->areas,0,_Size);
            local_70 = rcAlloc(iVar22 * 4,RC_ALLOC_TEMP);
            if (local_70 == (int *)0x0) {
              rcContext::log(param_1,RC_LOG_ERROR,
                             "rcBuildPolyMesh: Out of memory \'nextVert\' (%d).");
              bVar5 = false;
            }
            else {
              memset(local_70,0,_Size_00 * 4);
              piVar12 = rcAlloc(0x4000,RC_ALLOC_TEMP);
              local_78 = piVar12;
              if (piVar12 == (int *)0x0) {
                rcContext::log(param_1,RC_LOG_ERROR,
                               "rcBuildPolyMesh: Out of memory \'firstVert\' (%d).");
                bVar5 = false;
              }
              else {
                memset(piVar12,-1,0x4000);
                puVar13 = rcAlloc(iVar21 * 4,RC_ALLOC_TEMP);
                if (puVar13 == (uint *)0x0) {
                  rcContext::log(param_1,RC_LOG_ERROR,
                                 "rcBuildPolyMesh: Out of memory \'indices\' (%d).");
                  bVar5 = false;
                }
                else {
                  local_88 = rcAlloc(iVar21 * 0xc,RC_ALLOC_TEMP);
                  if (local_88 == (int *)0x0) {
                    rcContext::log(param_1,RC_LOG_ERROR,
                                   "rcBuildPolyMesh: Out of memory \'tris\' (%d).");
                    bVar5 = false;
                  }
                  else {
                    puVar10 = rcAlloc((iVar21 + 1) * param_3 * 2,RC_ALLOC_TEMP);
                    if (puVar10 == (ushort *)0x0) {
                      pcVar24 = "rcBuildPolyMesh: Out of memory \'polys\' (%d).";
LAB_1446bda64:
                      rcContext::log(param_1,RC_LOG_ERROR,pcVar24);
                      bVar5 = false;
                    }
                    else {
                      local_58 = (longlong)(iVar21 * param_3) * 2;
                      local_cc = 0;
                      local_68 = puVar10 + iVar21 * param_3;
                      iVar22 = param_3;
                      if (0 < param_2->nconts) {
                        local_c0 = 0;
                        uVar14 = uVar29;
                        local_c8 = uVar29;
                        do {
                          prVar2 = param_2->conts;
                          local_80 = prVar2;
                          if (2 < *(int *)((longlong)&prVar2->nverts + local_c0)) {
                            uVar7 = 0;
                            puVar19 = puVar13;
                            do {
                              *puVar19 = uVar7;
                              puVar19 = puVar19 + 1;
                              iVar22 = *(int *)((longlong)&prVar2->nverts + local_c0);
                              uVar7 = uVar7 + 1;
                            } while ((int)uVar7 < iVar22);
                            iVar22 = triangulate(iVar22,*(int **)((longlong)&prVar2->verts +
                                                                 local_c0),(int *)puVar13,local_88);
                            if (iVar22 < 1) {
                              rcContext::log(param_1,RC_LOG_WARNING,
                                             "rcBuildPolyMesh: Bad triangulation Contour %d.");
                              iVar22 = -iVar22;
                            }
                            piVar12 = local_60;
                            prVar4 = local_80;
                            iVar21 = 0;
                            if (0 < *(int *)((longlong)&prVar2->nverts + local_c0)) {
                              lVar18 = 0;
                              puVar19 = puVar13;
                              do {
                                lVar16 = *(longlong *)((longlong)&prVar4->verts + local_c0);
                                uVar6 = addVertex(*(ushort *)(lVar18 + lVar16),
                                                  *(ushort *)(lVar18 + 4 + lVar16),
                                                  *(ushort *)(lVar18 + 8 + lVar16),param_4->verts,
                                                  local_78,local_70,piVar12);
                                *puVar19 = (uint)uVar6;
                                if ((*(uint *)(lVar18 + 0xc + lVar16) & 0x10000) != 0) {
                                  *(undefined1 *)((ulonglong)uVar6 + (longlong)_Dst) = 1;
                                }
                                iVar21 = iVar21 + 1;
                                lVar18 = lVar18 + 0x10;
                                puVar19 = puVar19 + 1;
                              } while (iVar21 < *(int *)((longlong)&prVar4->nverts + local_c0));
                              uVar14 = (ulonglong)(uint)param_3;
                              uVar29 = local_c8;
                            }
                            local_d8 = 0;
                            memset(puVar10,0xff,local_58);
                            lVar18 = (longlong)iVar22;
                            if (0 < iVar22) {
                              iVar22 = 0;
                              piVar12 = local_88 + 2;
                              do {
                                iVar21 = piVar12[-2];
                                if (((iVar21 != piVar12[-1]) && (iVar21 != *piVar12)) &&
                                   (piVar12[-1] != *piVar12)) {
                                  local_d8 = local_d8 + 1;
                                  puVar10[iVar22] = (ushort)puVar13[iVar21];
                                  puVar10[(longlong)iVar22 + 1] = (ushort)puVar13[piVar12[-1]];
                                  puVar10[(longlong)iVar22 + 2] = (ushort)puVar13[*piVar12];
                                  iVar22 = iVar22 + (int)uVar14;
                                }
                                piVar12 = piVar12 + 3;
                                lVar18 = lVar18 + -1;
                              } while (lVar18 != 0);
                              uVar29 = local_c8;
                              if (local_d8 != 0) {
                                if (3 < param_3) {
                                  local_d0 = (local_d8 + -1) * param_3;
                                  while( true ) {
                                    iVar17 = 0;
                                    iVar22 = local_d8 + -1;
                                    iVar21 = 0;
                                    local_a8 = 0;
                                    iVar27 = 0;
                                    iVar30 = 0;
                                    iVar28 = 0;
                                    iVar23 = 0;
                                    uVar29 = local_90;
                                    puVar15 = puVar10;
                                    if (iVar22 < 1) break;
                                    do {
                                      iVar8 = iVar23 + 1;
                                      local_c8 = local_90;
                                      for (iVar20 = iVar8; local_90 = local_c8, iVar20 < local_d8;
                                          iVar20 = iVar20 + 1) {
                                        iVar9 = getPolyMergeValue(puVar15,puVar10 + iVar20 * param_3
                                                                  ,param_4->verts,&local_98,
                                                                  &local_94,param_3);
                                        iVar17 = local_a8;
                                        if (iVar21 < iVar9) {
                                          iVar30 = iVar20;
                                          iVar21 = iVar9;
                                          iVar27 = iVar23;
                                          iVar28 = local_98;
                                          iVar17 = local_94;
                                        }
                                        uVar29 = local_90;
                                        local_a8 = iVar17;
                                        local_c8 = local_90;
                                      }
                                      puVar15 = puVar15 + uVar29;
                                      iVar23 = iVar8;
                                    } while (iVar8 < iVar22);
                                    if (iVar21 < 1) break;
                                    mergePolys(puVar10 + iVar27 * param_3,puVar10 + iVar30 * param_3
                                               ,iVar28,iVar17,local_68,param_3);
                                    memcpy(puVar10 + iVar30 * param_3,puVar10 + local_d0,
                                           local_c8 * 2);
                                    local_d0 = local_d0 - param_3;
                                    local_d8 = iVar22;
                                  }
                                }
                                iVar22 = 0;
                                if (0 < local_d8) {
                                  iVar21 = 0;
                                  do {
                                    puVar15 = param_4->polys + param_3 * param_4->npolys * 2;
                                    puVar3 = puVar10 + iVar21;
                                    lVar18 = 0;
                                    if (((param_3 < 1) || ((uint)param_3 < 8)) ||
                                       ((puVar15 <= puVar3 + (longlong)param_3 + -1 &&
                                        (puVar3 <= puVar15 + (longlong)param_3 + -1)))) {
                                      if (0 < (longlong)local_c8) {
                                        lVar16 = (longlong)puVar3 - (longlong)puVar15;
                                        do {
                                          lVar18 = lVar18 + 1;
                                          *puVar15 = *(ushort *)(lVar16 + (longlong)puVar15);
                                          puVar15 = puVar15 + 1;
                                        } while (lVar18 < (longlong)local_c8);
                                      }
                                    }
                                    else {
                                      memcpy(puVar15,puVar3,local_c8 * 2);
                                      do {
                                        lVar18 = lVar18 + 1;
                                      } while (lVar18 < (longlong)local_c8);
                                    }
                                    param_4->regs[param_4->npolys] =
                                         *(ushort *)((longlong)&local_80->reg + local_c0);
                                    param_4->areas[param_4->npolys] = (&local_80->area)[local_c0];
                                    iVar27 = param_4->npolys + 1;
                                    param_4->npolys = iVar27;
                                    if (iVar26 < iVar27) {
                                      rcContext::log(param_1,RC_LOG_ERROR,
                                                                                                          
                                                  "rcBuildPolyMesh: Too many polygons %d (max:%d).")
                                      ;
                                      bVar5 = false;
                                      goto LAB_1446bdb67;
                                    }
                                    iVar22 = iVar22 + 1;
                                    iVar21 = iVar21 + param_3;
                                  } while (iVar22 < local_d8);
                                }
                                uVar14 = (ulonglong)(uint)param_3;
                                uVar29 = local_c8;
                              }
                            }
                          }
                          iVar22 = (int)uVar14;
                          local_cc = local_cc + 1;
                          local_c0 = local_c0 + 0x20;
                        } while (local_cc < param_2->nconts);
                      }
                      iVar21 = param_4->nverts;
                      iVar27 = 0;
                      if (0 < iVar21) {
                        do {
                          pcVar24 = (char *)((longlong)iVar27 + (longlong)_Dst);
                          if (*pcVar24 != '\0') {
                            bVar5 = canRemoveVertex(param_1,param_4,(ushort)iVar27);
                            if (bVar5) {
                              bVar5 = removeVertex(param_1,param_4,(ushort)iVar27,iVar26);
                              if (!bVar5) {
                                rcContext::log(param_1,RC_LOG_ERROR,
                                               "rcBuildPolyMesh: Failed to remove edge vertex %d.");
                                bVar5 = false;
                                goto LAB_1446bdb67;
                              }
                              iVar21 = iVar27;
                              if (iVar27 < param_4->nverts) {
                                do {
                                  iVar21 = iVar21 + 1;
                                  *pcVar24 = pcVar24[1];
                                  pcVar24 = pcVar24 + 1;
                                } while (iVar21 < param_4->nverts);
                              }
                              iVar27 = iVar27 + -1;
                            }
                          }
                          iVar21 = param_4->nverts;
                          iVar27 = iVar27 + 1;
                        } while (iVar27 < iVar21);
                      }
                      bVar5 = buildMeshAdjacency(param_4->polys,param_4->npolys,iVar21,iVar22);
                      if (bVar5) {
                        if ((0 < (param_4->borderSize).low) || (0 < (param_4->borderSize).high)) {
                          iVar26 = 0;
                          uVar7 = param_2->width;
                          uVar1 = param_2->height;
                          if (0 < param_4->npolys) {
                            local_d0 = 0;
                            do {
                              puVar15 = param_4->polys;
                              iVar21 = 0;
                              lVar18 = 0;
                              if (0 < param_3) {
                                do {
                                  uVar6 = puVar15[local_d0 + lVar18];
                                  if (uVar6 == 0xffff) break;
                                  lVar16 = uVar29 + lVar18;
                                  if (puVar15[local_d0 + lVar16] == 0xffff) {
                                    lVar25 = lVar18 + 1;
                                    if (((longlong)uVar29 <= lVar25) ||
                                       (puVar15[(longlong)local_d0 + lVar18 + 1] == 0xffff)) {
                                      lVar25 = 0;
                                    }
                                    puVar3 = param_4->verts;
                                    uVar14 = (ulonglong)puVar15[local_d0 + lVar25];
                                    if ((puVar3[(ulonglong)uVar6 * 3] == 0) &&
                                       (puVar3[uVar14 * 3] == 0)) {
                                      puVar15[local_d0 + lVar16] = 0x8000;
                                    }
                                    else if ((puVar3[(ulonglong)uVar6 * 3 + 2] == uVar1) &&
                                            (puVar3[uVar14 * 3 + 2] == uVar1)) {
                                      puVar15[local_d0 + lVar16] = 0x8001;
                                    }
                                    else if ((puVar3[(ulonglong)uVar6 * 3] == uVar7) &&
                                            (puVar3[uVar14 * 3] == uVar7)) {
                                      puVar15[(longlong)local_d0 + uVar29 + lVar18] = 0x8002;
                                    }
                                    else if ((puVar3[(ulonglong)uVar6 * 3 + 2] == 0) &&
                                            (puVar3[uVar14 * 3 + 2] == 0)) {
                                      puVar15[(longlong)local_d0 + uVar29 + lVar18] = 0x8003;
                                    }
                                  }
                                  iVar21 = iVar21 + 1;
                                  lVar18 = lVar18 + 1;
                                } while (iVar21 < param_3);
                              }
                              iVar26 = iVar26 + 1;
                              local_d0 = local_d0 + iVar22 * 2;
                            } while (iVar26 < param_4->npolys);
                          }
                        }
                        puVar15 = rcAlloc(param_4->npolys * 2,RC_ALLOC_PERM);
                        param_4->flags = puVar15;
                        if (puVar15 == (ushort *)0x0) {
                          pcVar24 = "rcBuildPolyMesh: Out of memory \'mesh.flags\' (%d).";
                          goto LAB_1446bda64;
                        }
                        memset(puVar15,0,(longlong)param_4->npolys * 2);
                        if (0xffff < param_4->nverts) {
                          rcContext::log(param_1,RC_LOG_ERROR,
                                         "rcBuildPolyMesh: The resulting mesh has too many vertices %d (max %d). Data can be corrupted."
                                        );
                        }
                        if (0xffff < param_4->npolys) {
                          rcContext::log(param_1,RC_LOG_ERROR,
                                         "rcBuildPolyMesh: The resulting mesh has too many polygons %d (max %d). Data can be corrupted."
                                        );
                        }
                        if (param_1->m_timerEnabled != false) {
                          (**(code **)(param_1->_padding_ + 0x28))(param_1,0xc);
                        }
                        bVar5 = true;
                      }
                      else {
                        rcContext::log(param_1,RC_LOG_ERROR,"rcBuildPolyMesh: Adjacency failed.");
                        bVar5 = false;
                      }
                    }
LAB_1446bdb67:
                    rcFree(puVar10);
                    piVar12 = local_78;
                  }
                  rcFree(local_88);
                }
                rcFree(puVar13);
              }
              rcFree(piVar12);
            }
            rcFree(local_70);
            goto LAB_1446bdba8;
          }
          pcVar24 = "rcBuildPolyMesh: Out of memory \'mesh.areas\' (%d).";
        }
      }
    }
  }
  rcContext::log(param_1,RC_LOG_ERROR,pcVar24);
  bVar5 = false;
LAB_1446bdba8:
  rcFree(_Dst);
  return bVar5;
}

// rcBuildPolyMeshDetail @ 1446bdbe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
rcBuildPolyMeshDetail
          (rcContext *param_1,rcPolyMesh *param_2,rcCompactHeightfield *param_3,double param_4,
          double param_5,rcPolyMeshDetail *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ushort *puVar7;
  rcCompactHeightfield *prVar8;
  bool bVar9;
  byte bVar10;
  uchar uVar11;
  uchar uVar12;
  uint uVar13;
  double *pdVar14;
  uint *puVar15;
  double *pdVar16;
  uchar *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  rcBorderSize rVar25;
  ushort *puVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  char *pcVar30;
  uint *puVar31;
  ulonglong uVar32;
  ushort *puVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined1 auStackY_19b8 [32];
  uint local_1958;
  int local_1954;
  ulonglong local_1940;
  int local_1938;
  int local_1934;
  int local_1930;
  rcCompactHeightfield *local_1928;
  int local_1920;
  uint *local_1918;
  rcIntArray local_1910;
  rcHeightPatch local_1900;
  rcPolyMeshDetail *local_18e8;
  rcBorderSize local_18e0;
  longlong local_18d8;
  rcIntArray local_18d0;
  rcIntArray local_18c0;
  rcIntArray local_18b0;
  rcPolyMesh *local_18a0;
  double local_1898 [768];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_19b8;
  local_18e8 = param_6;
  local_1928 = param_3;
  local_18a0 = param_2;
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,0x1b);
  }
  if ((param_2->nverts == 0) || (param_2->npolys == 0)) {
    bVar9 = true;
  }
  else {
    rVar25 = param_2->borderSize;
    iVar35 = 0;
    iVar36 = param_2->nvp;
    dVar1 = param_2->cs;
    dVar2 = param_2->ch;
    local_18b0.m_data = (int *)0x0;
    local_18b0.m_size = 0;
    local_18b0.m_cap = 0;
    local_1920 = iVar36;
    local_18e0 = rVar25;
    rcIntArray::resize(&local_18b0,0x40);
    local_1910.m_data = (int *)0x0;
    local_1910.m_size = 0;
    local_1910.m_cap = 0;
    rcIntArray::resize(&local_1910,0x200);
    local_18c0.m_data = (int *)0x0;
    local_18c0.m_size = 0;
    local_18c0.m_cap = 0;
    rcIntArray::resize(&local_18c0,0x200);
    local_18d0.m_data = (int *)0x0;
    local_18d0.m_size = 0;
    local_18d0.m_cap = 0;
    rcIntArray::resize(&local_18d0,0x200);
    local_1900.data = (ushort *)0x0;
    iVar20 = 0;
    local_1900.xmin = 0;
    local_1900.ymin = 0;
    local_1900.width = 0;
    local_1900.height = 0;
    local_1954 = 0;
    local_1918 = rcAlloc(param_2->npolys << 4,RC_ALLOC_TEMP);
    if (local_1918 == (uint *)0x0) {
      rcContext::log(param_1,RC_LOG_ERROR,"rcBuildPolyMeshDetail: Out of memory \'bounds\' (%d).");
      bVar9 = false;
    }
    else {
      pdVar14 = rcAlloc(iVar36 * 0x18,RC_ALLOC_TEMP);
      if (pdVar14 == (double *)0x0) {
        rcContext::log(param_1,RC_LOG_ERROR,"rcBuildPolyMeshDetail: Out of memory \'poly\' (%d).");
        bVar9 = false;
      }
      else {
        local_1958 = 0;
        iVar28 = iVar20;
        if (0 < param_2->npolys) {
          iVar27 = 0;
          iVar34 = 0;
          puVar15 = local_1918 + 2;
          puVar31 = local_1918;
          iVar35 = 0;
          iVar20 = 0;
          do {
            iVar28 = 0;
            puVar33 = param_2->polys + iVar27;
            *puVar31 = local_1928->width;
            puVar31[1] = 0;
            puVar31[2] = local_1928->height;
            puVar31[3] = 0;
            if (0 < iVar36) {
              do {
                uVar32 = (ulonglong)*puVar33;
                iVar34 = local_1954;
                if (*puVar33 == 0xffff) break;
                puVar26 = param_2->verts;
                uVar13 = (uint)puVar26[uVar32 * 3];
                if ((int)*puVar31 < (int)(uint)puVar26[uVar32 * 3]) {
                  uVar13 = *puVar31;
                }
                *puVar31 = uVar13;
                uVar13 = (uint)puVar26[uVar32 * 3];
                if ((int)(uint)puVar26[uVar32 * 3] < (int)puVar15[-1]) {
                  uVar13 = puVar15[-1];
                }
                puVar15[-1] = uVar13;
                uVar13 = (uint)puVar26[uVar32 * 3 + 2];
                if ((int)puVar31[2] < (int)(uint)puVar26[uVar32 * 3 + 2]) {
                  uVar13 = puVar31[2];
                }
                puVar31[2] = uVar13;
                uVar13 = (uint)puVar26[uVar32 * 3 + 2];
                if ((int)(uint)puVar26[uVar32 * 3 + 2] < (int)puVar31[3]) {
                  uVar13 = puVar31[3];
                }
                iVar35 = iVar35 + 1;
                iVar28 = iVar28 + 1;
                puVar31[3] = uVar13;
                puVar33 = puVar33 + 1;
              } while (iVar28 < iVar36);
            }
            uVar13 = *puVar31 - 1;
            if ((int)uVar13 < 0) {
              uVar13 = 0;
            }
            *puVar31 = uVar13;
            uVar13 = puVar15[-1] + 1;
            if (local_1928->width < (int)(puVar15[-1] + 1)) {
              uVar13 = local_1928->width;
            }
            puVar15[-1] = uVar13;
            uVar13 = puVar31[2] - 1;
            if ((int)uVar13 < 0) {
              uVar13 = 0;
            }
            puVar31[2] = uVar13;
            uVar13 = puVar31[3] + 1;
            if (local_1928->height < (int)(puVar31[3] + 1)) {
              uVar13 = local_1928->height;
            }
            puVar31[3] = uVar13;
            iVar28 = iVar20;
            if (((int)*puVar31 < (int)puVar15[-1]) && ((int)puVar31[2] < (int)uVar13)) {
              local_1954 = puVar15[-1] - *puVar31;
              if (local_1954 < iVar34) {
                local_1954 = iVar34;
              }
              iVar28 = uVar13 - puVar31[2];
              iVar34 = local_1954;
              if (iVar28 < iVar20) {
                iVar28 = iVar20;
              }
            }
            iVar20 = iVar28;
            local_1958 = local_1958 + 1;
            iVar27 = iVar27 + iVar36 * 2;
            puVar31 = puVar31 + 4;
            puVar15 = puVar15 + 4;
            rVar25 = local_18e0;
            param_6 = local_18e8;
            iVar28 = local_1954;
          } while ((int)local_1958 < param_2->npolys);
        }
        local_1900.data = rcAlloc(iVar20 * iVar28 * 2,RC_ALLOC_TEMP);
        if (local_1900.data == (ushort *)0x0) {
          rcContext::log(param_1,RC_LOG_ERROR,
                         "rcBuildPolyMeshDetail: Out of memory \'hp.data\' (%d).");
          bVar9 = false;
        }
        else {
          iVar20 = param_2->npolys;
          param_6->nmeshes = iVar20;
          param_6->nverts = 0;
          param_6->ntris = 0;
          puVar15 = rcAlloc(iVar20 << 4,RC_ALLOC_PERM);
          param_6->meshes = puVar15;
          if (puVar15 == (uint *)0x0) {
            rcContext::log(param_1,RC_LOG_ERROR,
                           "rcBuildPolyMeshDetail: Out of memory \'dmesh.meshes\' (%d).");
            bVar9 = false;
          }
          else {
            local_1954 = iVar35 + iVar35 / 2;
            local_1938 = local_1954 * 2;
            param_6->nverts = 0;
            pdVar16 = rcAlloc(local_1954 * 0x18,RC_ALLOC_PERM);
            param_6->verts = pdVar16;
            if (pdVar16 == (double *)0x0) {
              rcContext::log(param_1,RC_LOG_ERROR,
                             "rcBuildPolyMeshDetail: Out of memory \'dmesh.verts\' (%d).");
              bVar9 = false;
            }
            else {
              param_6->ntris = 0;
              puVar17 = rcAlloc(local_1954 * 0x40,RC_ALLOC_PERM);
              param_6->tris = puVar17;
              if (puVar17 == (uchar *)0x0) {
                rcContext::log(param_1,RC_LOG_ERROR,
                               "rcBuildPolyMeshDetail: Out of memory \'dmesh.tris\' (%d).");
                bVar9 = false;
              }
              else {
                local_1934 = 0;
                if (0 < param_2->npolys) {
                  local_18d8 = 0;
                  local_1930 = 0;
                  do {
                    lVar24 = local_18d8;
                    prVar8 = local_1928;
                    uVar19 = 0;
                    local_1958 = 0;
                    puVar33 = param_2->polys + local_1930;
                    pdVar16 = pdVar14;
                    uVar32 = uVar19;
                    uVar21 = uVar19;
                    if (3 < iVar36) {
                      do {
                        uVar18 = (ulonglong)puVar33[uVar32];
                        if (puVar33[uVar32] == 0xffff) goto LAB_1446be2ac;
                        puVar26 = param_2->verts;
                        *pdVar16 = (double)puVar26[uVar18 * 3] * dVar1;
                        pdVar16[1] = (double)puVar26[uVar18 * 3 + 1] * dVar2;
                        pdVar16[2] = (double)puVar26[uVar18 * 3 + 2] * dVar1;
                        uVar18 = (ulonglong)puVar33[uVar32 + 1];
                        iVar35 = (int)uVar19;
                        if (puVar33[uVar32 + 1] == 0xffff) {
                          uVar19 = (ulonglong)(iVar35 + 1);
                          goto LAB_1446be2a8;
                        }
                        puVar26 = param_2->verts;
                        pdVar16[3] = (double)puVar26[uVar18 * 3] * dVar1;
                        pdVar16[4] = (double)puVar26[uVar18 * 3 + 1] * dVar2;
                        pdVar16[5] = (double)puVar26[uVar18 * 3 + 2] * dVar1;
                        uVar19 = (ulonglong)puVar33[uVar32 + 2];
                        if (puVar33[uVar32 + 2] == 0xffff) {
                          uVar19 = (ulonglong)(iVar35 + 2);
                          goto LAB_1446be2a8;
                        }
                        puVar26 = param_2->verts;
                        pdVar16[6] = (double)puVar26[uVar19 * 3] * dVar1;
                        pdVar16[7] = (double)puVar26[uVar19 * 3 + 1] * dVar2;
                        pdVar16[8] = (double)puVar26[uVar19 * 3 + 2] * dVar1;
                        uVar18 = (ulonglong)puVar33[uVar32 + 3];
                        if (puVar33[uVar32 + 3] == 0xffff) {
                          uVar19 = (ulonglong)(iVar35 + 3);
                          goto LAB_1446be2a8;
                        }
                        puVar26 = param_2->verts;
                        local_1958 = iVar35 + 4;
                        uVar19 = (ulonglong)local_1958;
                        uVar32 = uVar32 + 4;
                        uVar13 = (int)uVar21 + 4;
                        uVar21 = (ulonglong)uVar13;
                        pdVar16[9] = (double)puVar26[uVar18 * 3] * dVar1;
                        pdVar16[10] = (double)puVar26[uVar18 * 3 + 1] * dVar2;
                        pdVar16[0xb] = (double)puVar26[uVar18 * 3 + 2] * dVar1;
                        pdVar16 = pdVar16 + 0xc;
                      } while ((int)uVar13 < iVar36 + -3);
                    }
                    if ((int)uVar21 < iVar36) {
                      puVar26 = puVar33 + uVar32;
                      pdVar16 = pdVar14 + uVar32 * 3 + 2;
                      do {
                        uVar32 = (ulonglong)*puVar26;
                        param_6 = local_18e8;
                        if (*puVar26 == 0xffff) break;
                        puVar7 = param_2->verts;
                        puVar26 = puVar26 + 1;
                        uVar19 = (ulonglong)((int)uVar19 + 1);
                        uVar13 = (int)uVar21 + 1;
                        uVar21 = (ulonglong)uVar13;
                        pdVar16[-2] = (double)puVar7[uVar32 * 3] * dVar1;
                        pdVar16[-1] = (double)puVar7[uVar32 * 3 + 1] * dVar2;
                        *pdVar16 = (double)puVar7[uVar32 * 3 + 2] * dVar1;
                        pdVar16 = pdVar16 + 3;
                      } while ((int)uVar13 < iVar36);
LAB_1446be2a8:
                      local_1958 = (uint)uVar19;
                    }
LAB_1446be2ac:
                    local_1900.ymin = *(int *)(local_18d8 + 8 + (longlong)local_1918);
                    local_1900.xmin = *(int *)(local_18d8 + (longlong)local_1918);
                    local_1900.height =
                         *(int *)(local_18d8 + 0xc + (longlong)local_1918) - local_1900.ymin;
                    local_1900.width =
                         *(int *)(local_18d8 + 4 + (longlong)local_1918) -
                         *(int *)(local_18d8 + (longlong)local_1918);
                    iVar35 = (int)uVar19;
                    getHeightData(local_1928,puVar33,iVar35,param_2->verts,rVar25,&local_1900,
                                  &local_18c0);
                    local_1940 = local_1940 & 0xffffffff00000000;
                    bVar9 = buildPolyDetail(param_1,pdVar14,iVar35,param_4,param_5,prVar8,
                                            &local_1900,local_1898,(int *)&local_1940,&local_1910,
                                            &local_18b0,&local_18d0);
                    if (!bVar9) {
LAB_1446be830:
                      bVar9 = false;
                      goto LAB_1446be84c;
                    }
                    iVar20 = (int)local_1940;
                    uVar32 = local_1940 & 0xffffffff;
                    if (0 < (int)local_1940) {
                      pdVar16 = local_1898 + 1;
                      dVar3 = param_2->bmin[0];
                      uVar21 = local_1940 & 0xffffffff;
                      dVar4 = param_2->bmin[2];
                      dVar5 = local_1928->ch;
                      dVar6 = param_2->bmin[1];
                      do {
                        pdVar16[-1] = dVar3 + pdVar16[-1];
                        *pdVar16 = dVar5 + dVar6 + *pdVar16;
                        pdVar16[1] = dVar4 + pdVar16[1];
                        pdVar16 = pdVar16 + 3;
                        uVar21 = uVar21 - 1;
                      } while (uVar21 != 0);
                    }
                    lVar23 = (longlong)iVar35;
                    lVar29 = 0;
                    if (3 < lVar23) {
                      pdVar16 = pdVar14 + 2;
                      lVar22 = (lVar23 - 4U >> 2) + 1;
                      lVar29 = lVar22 * 4;
                      do {
                        pdVar16[-2] = param_2->bmin[0] + pdVar16[-2];
                        pdVar16[-1] = pdVar16[-1] + param_2->bmin[1];
                        *pdVar16 = param_2->bmin[2] + *pdVar16;
                        pdVar16[1] = param_2->bmin[0] + pdVar16[1];
                        pdVar16[2] = pdVar16[2] + param_2->bmin[1];
                        pdVar16[3] = param_2->bmin[2] + pdVar16[3];
                        pdVar16[4] = pdVar16[4] + param_2->bmin[0];
                        pdVar16[5] = param_2->bmin[1] + pdVar16[5];
                        pdVar16[6] = pdVar16[6] + param_2->bmin[2];
                        pdVar16[7] = param_2->bmin[0] + pdVar16[7];
                        pdVar16[8] = pdVar16[8] + param_2->bmin[1];
                        pdVar16[9] = param_2->bmin[2] + pdVar16[9];
                        pdVar16 = pdVar16 + 0xc;
                        lVar22 = lVar22 + -1;
                      } while (lVar22 != 0);
                    }
                    if (lVar29 < lVar23) {
                      lVar23 = lVar23 - lVar29;
                      pdVar16 = pdVar14 + lVar29 * 3 + 2;
                      do {
                        pdVar16[-2] = pdVar16[-2] + param_2->bmin[0];
                        pdVar16[-1] = param_2->bmin[1] + pdVar16[-1];
                        *pdVar16 = param_2->bmin[2] + *pdVar16;
                        pdVar16 = pdVar16 + 3;
                        lVar23 = lVar23 + -1;
                      } while (lVar23 != 0);
                    }
                    *(int *)(lVar24 + (longlong)param_6->meshes) = param_6->nverts;
                    iVar35 = (int)((local_1910.m_size >> 0x1f & 3U) + local_1910.m_size) >> 2;
                    local_1940 = CONCAT44(local_1940._4_4_,iVar35);
                    *(int *)(lVar24 + 4 + (longlong)param_6->meshes) = iVar20;
                    *(int *)(lVar24 + 8 + (longlong)param_6->meshes) = param_6->ntris;
                    *(int *)(lVar24 + 0xc + (longlong)param_6->meshes) = iVar35;
                    iVar28 = param_6->nverts + iVar20;
                    if (local_1954 < iVar28) {
                      local_1954 = local_1954 + 0x100 + ((iVar28 - local_1954) - 1U & 0xffffff00);
                      pdVar16 = rcAlloc(local_1954 * 0x18,RC_ALLOC_PERM);
                      if (pdVar16 != (double *)0x0) {
                        if (param_6->nverts != 0) {
                          memcpy(pdVar16,param_6->verts,(longlong)param_6->nverts * 0x18);
                        }
                        rcFree(param_6->verts);
                        param_6->verts = pdVar16;
                        iVar35 = (int)local_1940;
                        goto LAB_1446be5d0;
                      }
                      pcVar30 = "rcBuildPolyMeshDetail: Out of memory \'newv\' (%d).";
LAB_1446be821:
                      rcContext::log(param_1,RC_LOG_ERROR,pcVar30);
                      goto LAB_1446be830;
                    }
LAB_1446be5d0:
                    if (0 < iVar20) {
                      pdVar16 = local_1898 + 1;
                      do {
                        param_6->verts[param_6->nverts * 3] = pdVar16[-1];
                        param_6->verts[(longlong)(param_6->nverts * 3) + 1] = *pdVar16;
                        param_6->verts[(longlong)(param_6->nverts * 3) + 2] = pdVar16[1];
                        param_6->nverts = param_6->nverts + 1;
                        uVar32 = uVar32 - 1;
                        pdVar16 = pdVar16 + 3;
                      } while (uVar32 != 0);
                    }
                    iVar20 = param_6->ntris + iVar35;
                    if (local_1938 < iVar20) {
                      local_1938 = local_1938 + 0x100 + ((iVar20 - local_1938) - 1U & 0xffffff00);
                      puVar17 = rcAlloc(local_1938 * 4,RC_ALLOC_PERM);
                      if (puVar17 == (uchar *)0x0) {
                        pcVar30 = "rcBuildPolyMeshDetail: Out of memory \'newt\' (%d).";
                        goto LAB_1446be821;
                      }
                      if (param_6->ntris != 0) {
                        memcpy(puVar17,param_6->tris,(longlong)param_6->ntris << 2);
                      }
                      rcFree(param_6->tris);
                      param_6->tris = puVar17;
                      iVar35 = (int)local_1940;
                    }
                    uVar32 = (ulonglong)iVar35;
                    local_1940 = uVar32;
                    if (0 < iVar35) {
                      lVar24 = 0;
                      do {
                        param_6->tris[param_6->ntris << 2] =
                             *(uchar *)(lVar24 + (longlong)local_1910.m_data);
                        param_6->tris[(longlong)(param_6->ntris << 2) + 1] =
                             *(uchar *)(lVar24 + 4 + (longlong)local_1910.m_data);
                        param_6->tris[(longlong)(param_6->ntris << 2) + 2] =
                             *(uchar *)(lVar24 + 8 + (longlong)local_1910.m_data);
                        iVar36 = *(int *)(lVar24 + 8 + (longlong)local_1910.m_data);
                        iVar35 = *(int *)(lVar24 + 4 + (longlong)local_1910.m_data);
                        iVar20 = *(int *)(lVar24 + (longlong)local_1910.m_data);
                        bVar10 = getEdgeFlags(local_1898 + iVar20 * 3,local_1898 + iVar35 * 3,
                                              pdVar14,(int)uVar19);
                        uVar21 = (ulonglong)local_1958;
                        uVar11 = getEdgeFlags(local_1898 + iVar35 * 3,local_1898 + iVar36 * 3,
                                              pdVar14,local_1958);
                        uVar19 = uVar21 & 0xffffffff;
                        uVar12 = getEdgeFlags(local_1898 + iVar36 * 3,local_1898 + iVar20 * 3,
                                              pdVar14,(int)uVar21);
                        lVar24 = lVar24 + 0x10;
                        param_6->tris[(longlong)(param_6->ntris << 2) + 3] =
                             uVar12 << 4 | uVar11 << 2 | bVar10;
                        param_6->ntris = param_6->ntris + 1;
                        uVar32 = uVar32 - 1;
                        rVar25 = local_18e0;
                        param_2 = local_18a0;
                        iVar36 = local_1920;
                      } while (uVar32 != 0);
                    }
                    local_1934 = local_1934 + 1;
                    local_18d8 = local_18d8 + 0x10;
                    local_1930 = local_1930 + iVar36 * 2;
                  } while (local_1934 < param_2->npolys);
                }
                if (param_1->m_timerEnabled != false) {
                  (**(code **)(param_1->_padding_ + 0x28))(param_1,0x1b);
                }
                bVar9 = true;
              }
            }
          }
        }
      }
LAB_1446be84c:
      rcFree(pdVar14);
    }
    rcFree(local_1918);
    rcFree(local_1900.data);
    rcFree(local_18d0.m_data);
    rcFree(local_18c0.m_data);
    rcFree(local_1910.m_data);
    rcFree(local_18b0.m_data);
  }
  return bVar9;
}

// rcBuildRegions @ 1446be900

bool __cdecl
rcBuildRegions(rcContext *param_1,rcCompactHeightfield *param_2,rcBorderSize param_3,int param_4,
              int param_5)

{
  int iVar1;
  bool bVar2;
  ushort *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,0x15);
  }
  puVar3 = rcAlloc(param_2->spanCount << 3,RC_ALLOC_TEMP);
  if (puVar3 == (ushort *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,"rcBuildRegions: Out of memory \'spanBuf4\' (%d).");
  }
  else {
    if (param_1->m_timerEnabled != false) {
      (**(code **)(param_1->_padding_ + 0x20))(param_1,0x16);
    }
    bVar2 = rcGatherRegionsNoFilter(param_1,param_2,param_3,puVar3);
    if (bVar2) {
      if ((param_1->m_timerEnabled != false) &&
         ((**(code **)(param_1->_padding_ + 0x28))(param_1,0x16), param_1->m_timerEnabled != false))
      {
        (**(code **)(param_1->_padding_ + 0x20))(param_1,0x19);
      }
      iVar1 = param_2->height;
      if (param_2->height < param_2->width) {
        iVar1 = param_2->width;
      }
      bVar2 = filterSmallRegions(param_1,param_4,param_5,iVar1,&param_2->maxRegions,param_2,puVar3);
      if (bVar2) {
        if (param_1->m_timerEnabled != false) {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,0x19);
        }
        uVar5 = 0;
        uVar6 = uVar5;
        uVar7 = uVar5;
        if (0 < param_2->spanCount) {
          do {
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
            *(undefined2 *)((longlong)&param_2->spans->reg + uVar6) =
                 *(undefined2 *)(uVar7 + (longlong)puVar3);
            uVar6 = uVar6 + 0xc;
            uVar7 = uVar7 + 2;
          } while ((int)uVar4 < param_2->spanCount);
        }
        if (param_1->m_timerEnabled != false) {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,0x15);
        }
        bVar2 = true;
        goto LAB_1446be96d;
      }
    }
  }
  bVar2 = false;
LAB_1446be96d:
  rcFree(puVar3);
  return bVar2;
}

// rcBuildRegionsChunky @ 1446bea90

bool __cdecl
rcBuildRegionsChunky
          (rcContext *param_1,rcCompactHeightfield *param_2,rcBorderSize param_3,int param_4,
          int param_5,int param_6)

{
  short *psVar1;
  uchar uVar2;
  ushort uVar3;
  rcCompactSpan *prVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ushort *_Dst;
  void *pvVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ushort *puVar15;
  int iVar16;
  rcCompactCell **pprVar17;
  longlong lVar18;
  ulonglong uVar19;
  ushort uVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  int iStackX_1c;
  ushort local_a8 [2];
  uint local_a4;
  int local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  uint local_90;
  void *local_88;
  longlong local_80;
  rcIntArray local_78;
  uint local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  rcCompactCell **local_58;
  longlong local_50;
  
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,0x15);
  }
  iVar16 = param_2->width;
  iVar13 = param_2->height;
  local_a8[0] = 1;
  local_94 = iVar16;
  _Dst = rcAlloc(param_2->spanCount * 2,RC_ALLOC_TEMP);
  if (_Dst == (ushort *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,"rcBuildRegionsMonotone: Out of memory \'src\' (%d).");
    bVar5 = false;
  }
  else {
    memset(_Dst,0,(longlong)param_2->spanCount * 2);
    pvVar8 = rcAlloc(param_6 * 8,RC_ALLOC_TEMP);
    local_88 = pvVar8;
    if (pvVar8 == (void *)0x0) {
      rcContext::log(param_1,RC_LOG_ERROR,"rcBuildRegionsMonotone: Out of memory \'sweeps\' (%d).");
      bVar5 = false;
    }
    else {
      UE::Recast::Private::rcMarkBorderRegions(param_3,iVar16,iVar13,param_2,_Dst,local_a8);
      local_78.m_data = (int *)0x0;
      local_78.m_size = 0;
      local_78.m_cap = 0;
      rcIntArray::resize(&local_78,0x100);
      uVar10 = param_3.low;
      uVar11 = (ulonglong)param_3 & 0xffffffff;
      iStackX_1c = param_3.high;
      iVar16 = local_94 - iStackX_1c;
      uVar20 = local_a8[0];
      local_9c = uVar10;
      local_5c = iVar16;
      if ((int)uVar10 < iVar16) {
        uVar22 = iVar13 - iStackX_1c;
        local_60 = uVar22;
        iVar13 = local_94;
        do {
          iVar23 = (int)uVar11;
          uVar19 = (ulonglong)param_3 & 0xffffffff;
          local_90 = uVar10;
          if ((int)uVar10 < (int)uVar22) {
            local_98 = iVar16;
            if (iVar23 + param_6 < iVar16) {
              local_98 = iVar23 + param_6;
            }
            do {
              local_a4 = (uint)uVar19;
              local_64 = local_a4 + param_6;
              local_68 = uVar22;
              if ((int)local_64 < (int)uVar22) {
                local_68 = local_64;
              }
              if ((int)local_a4 < (int)local_68) {
                local_a0 = (local_a4 - 1) * iVar13;
                local_80 = (longlong)(int)(local_a4 * iVar13 + (int)uVar11) << 2;
                local_50 = (longlong)iVar13 << 2;
                do {
                  pprVar17 = &param_2->cells;
                  local_58 = pprVar17;
                  rcIntArray::resize(&local_78,uVar20 + 1);
                  memset(local_78.m_data,0,(ulonglong)uVar20 << 2);
                  uVar21 = 1;
                  lVar18 = local_80;
                  uVar22 = (uint)uVar19;
                  if ((int)uVar11 < local_98) {
                    do {
                      uVar22 = *(uint *)((longlong)&(*pprVar17)->index + lVar18);
                      uVar6 = uVar22 & 0xffffff;
                      uVar19 = (ulonglong)uVar6;
                      uVar9 = (ulonglong)(uVar6 + (uVar22 >> 0x18));
                      iVar16 = (int)uVar11;
                      if (uVar19 < uVar9) {
                        lVar12 = (ulonglong)uVar6 * 0xc;
                        do {
                          prVar4 = param_2->spans;
                          uVar2 = param_2->areas[uVar19];
                          if (uVar2 != '\0') {
                            uVar22 = *(uint *)((longlong)&prVar4->con + lVar12) & 0xff;
                            if ((uVar22 == 0xff) || (iVar16 <= (int)local_9c)) {
LAB_1446bed62:
                              *(short *)((longlong)local_88 + uVar21 * 8) = (short)uVar21;
                              *(undefined4 *)((longlong)local_88 + uVar21 * 8 + 4) = 0;
                              uVar11 = uVar21;
                              uVar21 = (ulonglong)(ushort)((short)uVar21 + 1);
                            }
                            else {
                              uVar22 = (*(uint *)((longlong)&(*pprVar17)[-1].index + lVar18) &
                                       0xffffff) + uVar22;
                              uVar20 = _Dst[uVar22];
                              uVar11 = (ulonglong)uVar20;
                              if (((short)uVar20 < 0) ||
                                 ((uVar2 != param_2->areas[uVar22] || (uVar20 == 0))))
                              goto LAB_1446bed62;
                            }
                            uVar22 = (uint)*(byte *)((longlong)&prVar4->con + lVar12 + 3);
                            if ((uVar22 != 0xff) && ((int)local_90 < (int)local_a4)) {
                              uVar22 = ((uint)(*local_58)[local_a0 + iVar16] & 0xffffff) + uVar22;
                              uVar20 = _Dst[uVar22];
                              if ((uVar20 != 0) &&
                                 ((-1 < (short)uVar20 &&
                                  (param_2->areas[uVar19] == param_2->areas[uVar22])))) {
                                uVar3 = *(ushort *)((longlong)local_88 + uVar11 * 8 + 6);
                                if ((uVar3 == 0) || (uVar3 == uVar20)) {
                                  *(ushort *)((longlong)local_88 + uVar11 * 8 + 6) = uVar20;
                                  psVar1 = (short *)((longlong)local_88 + uVar11 * 8 + 4);
                                  *psVar1 = *psVar1 + 1;
                                  local_78.m_data[uVar20] = local_78.m_data[uVar20] + 1;
                                }
                                else {
                                  *(undefined2 *)((longlong)local_88 + uVar11 * 8 + 6) = 0xffff;
                                }
                              }
                            }
                            _Dst[uVar19] = (ushort)uVar11;
                            pprVar17 = local_58;
                          }
                          uVar19 = uVar19 + 1;
                          lVar12 = lVar12 + 0xc;
                        } while ((longlong)uVar19 < (longlong)uVar9);
                      }
                      uVar11 = (ulonglong)(iVar16 + 1U);
                      lVar18 = lVar18 + 4;
                    } while ((int)(iVar16 + 1U) < local_98);
                    uVar11 = (ulonglong)local_9c;
                    pvVar8 = local_88;
                    uVar22 = local_a4;
                  }
                  if (1 < uVar21) {
                    puVar15 = (ushort *)((longlong)pvVar8 + 0xc);
                    lVar18 = uVar21 - 1;
                    do {
                      uVar20 = puVar15[1];
                      if ((0xfffd < (ushort)(uVar20 - 1)) ||
                         (local_78.m_data[uVar20] != (uint)*puVar15)) {
                        uVar20 = local_a8[0];
                        local_a8[0] = local_a8[0] + 1;
                      }
                      puVar15[-1] = uVar20;
                      puVar15 = puVar15 + 4;
                      lVar18 = lVar18 + -1;
                      pvVar8 = local_88;
                      uVar22 = local_a4;
                    } while (lVar18 != 0);
                  }
                  if ((int)uVar11 < local_98) {
                    uVar19 = (ulonglong)(uint)(local_98 - (int)uVar11);
                    lVar18 = local_80;
                    do {
                      uVar6 = *(uint *)((longlong)&param_2->cells->index + lVar18);
                      uVar7 = uVar6 & 0xffffff;
                      uVar9 = (ulonglong)uVar7;
                      uVar14 = (ulonglong)(uVar7 + (uVar6 >> 0x18));
                      if (uVar9 < uVar14) {
                        do {
                          uVar20 = _Dst[uVar9];
                          if ((uVar20 != 0) && (uVar20 < (ushort)uVar21)) {
                            _Dst[uVar9] = *(ushort *)((longlong)pvVar8 + (ulonglong)uVar20 * 8 + 2);
                          }
                          uVar9 = uVar9 + 1;
                        } while ((longlong)uVar9 < (longlong)uVar14);
                      }
                      lVar18 = lVar18 + 4;
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                  local_a4 = uVar22 + 1;
                  uVar19 = (ulonglong)local_a4;
                  local_80 = local_80 + local_50;
                  local_a0 = local_a0 + local_94;
                  uVar20 = local_a8[0];
                  iVar13 = local_94;
                } while ((int)local_a4 < (int)local_68);
              }
              iVar23 = (int)uVar11;
              uVar19 = (ulonglong)local_64;
              iVar16 = local_5c;
              uVar22 = local_60;
              local_90 = local_64;
            } while ((int)local_64 < (int)local_60);
          }
          local_9c = iVar23 + param_6;
          uVar11 = (ulonglong)local_9c;
        } while ((int)local_9c < iVar16);
      }
      uVar11 = 0;
      if (param_1->m_timerEnabled != false) {
        (**(code **)(param_1->_padding_ + 0x20))(param_1,0x19);
      }
      param_2->maxRegions = uVar20;
      bVar5 = filterSmallRegions(param_1,param_4,param_5,param_6,&param_2->maxRegions,param_2,_Dst);
      if (bVar5) {
        if (param_1->m_timerEnabled != false) {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,0x19);
        }
        uVar19 = uVar11;
        puVar15 = _Dst;
        if (0 < param_2->spanCount) {
          do {
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            *(ushort *)((longlong)&param_2->spans->reg + uVar19) = *puVar15;
            uVar19 = uVar19 + 0xc;
            puVar15 = puVar15 + 1;
          } while ((int)uVar10 < param_2->spanCount);
        }
        if (param_1->m_timerEnabled != false) {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,0x15);
        }
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      rcFree(local_78.m_data);
    }
    rcFree(pvVar8);
  }
  rcFree(_Dst);
  return bVar5;
}

// rcBuildRegionsMonotone @ 1446bf090

bool __cdecl
rcBuildRegionsMonotone
          (rcContext *param_1,rcCompactHeightfield *param_2,rcBorderSize param_3,int param_4,
          int param_5)

{
  short *psVar1;
  uchar uVar2;
  ushort uVar3;
  int iVar4;
  rcCompactSpan *prVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  ushort *_Dst;
  void *pvVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  ushort uVar17;
  ulonglong uVar18;
  ushort *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  rcCompactCell **pprVar22;
  longlong lVar23;
  ushort local_res10 [4];
  rcBorderSize local_res18;
  int local_res20;
  ushort local_98;
  longlong local_88;
  rcIntArray local_80;
  int local_70;
  int local_6c;
  rcCompactCell **local_68;
  void *local_60;
  ulonglong local_58;
  longlong local_50;
  
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,0x15);
  }
  iVar4 = param_2->width;
  iVar16 = param_2->height;
  local_res10[0] = 1;
  local_70 = iVar4;
  _Dst = rcAlloc(param_2->spanCount * 2,RC_ALLOC_TEMP);
  if (_Dst == (ushort *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,"rcBuildRegionsMonotone: Out of memory \'src\' (%d).");
    bVar6 = false;
  }
  else {
    memset(_Dst,0,(longlong)param_2->spanCount * 2);
    local_6c = param_2->height;
    if (param_2->height < param_2->width) {
      local_6c = param_2->width;
    }
    pvVar9 = rcAlloc(local_6c * 8,RC_ALLOC_TEMP);
    local_60 = pvVar9;
    if (pvVar9 == (void *)0x0) {
      rcContext::log(param_1,RC_LOG_ERROR,"rcBuildRegionsMonotone: Out of memory \'sweeps\' (%d).");
      bVar6 = false;
    }
    else {
      UE::Recast::Private::rcMarkBorderRegions(param_3,iVar4,iVar16,param_2,_Dst,local_res10);
      local_80.m_data = (int *)0x0;
      local_80.m_size = 0;
      local_80.m_cap = 0;
      rcIntArray::resize(&local_80,0x100);
      iVar16 = iVar16 - local_res18.high;
      iVar13 = param_3.low;
      uVar17 = local_res10[0];
      if (iVar13 < iVar16) {
        iVar11 = iVar4 - local_res18.high;
        iVar14 = (iVar13 + -1) * iVar4;
        local_88 = (longlong)((iVar4 + 1) * iVar13) << 2;
        local_50 = (longlong)iVar4 << 2;
        local_58 = (ulonglong)(uint)(iVar16 - iVar13);
        local_98 = local_res10[0];
        do {
          pprVar22 = &param_2->cells;
          local_68 = pprVar22;
          rcIntArray::resize(&local_80,uVar17 + 1);
          memset(local_80.m_data,0,(ulonglong)uVar17 << 2);
          uVar20 = (ulonglong)param_3 & 0xffffffff;
          local_res10[0] = 1;
          if (param_3.low < iVar11) {
            uVar7 = 1;
            lVar23 = local_88;
            do {
              uVar12 = *(uint *)((longlong)&(*pprVar22)->index + lVar23);
              uVar8 = uVar12 & 0xffffff;
              uVar18 = (ulonglong)uVar8;
              uVar10 = (ulonglong)(uVar8 + (uVar12 >> 0x18));
              if (uVar18 < uVar10) {
                lVar15 = (ulonglong)uVar8 * 0xc;
                do {
                  prVar5 = param_2->spans;
                  uVar2 = param_2->areas[uVar18];
                  if (uVar2 != '\0') {
                    uVar12 = *(uint *)((longlong)&prVar5->con + lVar15) & 0xff;
                    if (uVar12 == 0xff) {
LAB_1446bf2fc:
                      uVar21 = (ulonglong)uVar7;
                      *(ushort *)((longlong)local_60 + uVar21 * 8) = uVar7;
                      *(undefined4 *)((longlong)local_60 + uVar21 * 8 + 4) = 0;
                      uVar7 = uVar7 + 1;
                    }
                    else {
                      uVar12 = (*(uint *)((longlong)&(*pprVar22)[-1].index + lVar23) & 0xffffff) +
                               uVar12;
                      uVar17 = _Dst[uVar12];
                      uVar21 = (ulonglong)uVar17;
                      if ((((short)uVar17 < 0) || (uVar2 != param_2->areas[uVar12])) ||
                         (uVar17 == 0)) goto LAB_1446bf2fc;
                    }
                    uVar12 = (uint)*(byte *)((longlong)&prVar5->con + lVar15 + 3);
                    if (uVar12 != 0xff) {
                      uVar12 = ((uint)(*local_68)[iVar14 + (int)uVar20] & 0xffffff) + uVar12;
                      uVar17 = _Dst[uVar12];
                      if (((uVar17 != 0) && (-1 < (short)uVar17)) &&
                         (param_2->areas[uVar18] == param_2->areas[uVar12])) {
                        uVar3 = *(ushort *)((longlong)local_60 + uVar21 * 8 + 6);
                        if ((uVar3 == 0) || (uVar3 == uVar17)) {
                          *(ushort *)((longlong)local_60 + uVar21 * 8 + 6) = uVar17;
                          psVar1 = (short *)((longlong)local_60 + uVar21 * 8 + 4);
                          *psVar1 = *psVar1 + 1;
                          local_80.m_data[uVar17] = local_80.m_data[uVar17] + 1;
                        }
                        else {
                          *(undefined2 *)((longlong)local_60 + uVar21 * 8 + 6) = 0xffff;
                        }
                      }
                    }
                    _Dst[uVar18] = (ushort)uVar21;
                    pprVar22 = local_68;
                  }
                  uVar18 = uVar18 + 1;
                  lVar15 = lVar15 + 0xc;
                  local_res10[0] = uVar7;
                } while ((longlong)uVar18 < (longlong)uVar10);
              }
              uVar12 = (int)uVar20 + 1;
              uVar20 = (ulonglong)uVar12;
              lVar23 = lVar23 + 4;
              param_3 = local_res18;
              pvVar9 = local_60;
              uVar17 = local_98;
            } while ((int)uVar12 < iVar11);
          }
          if (1 < (ulonglong)local_res10[0]) {
            puVar19 = (ushort *)((longlong)pvVar9 + 0xc);
            lVar23 = (ulonglong)local_res10[0] - 1;
            local_98 = uVar17;
            do {
              uVar17 = puVar19[1];
              if ((0xfffd < (ushort)(uVar17 - 1)) || (local_80.m_data[uVar17] != (uint)*puVar19)) {
                uVar17 = local_98;
                local_98 = local_98 + 1;
              }
              puVar19[-1] = uVar17;
              puVar19 = puVar19 + 4;
              lVar23 = lVar23 + -1;
              uVar17 = local_98;
            } while (lVar23 != 0);
          }
          if (param_3.low < iVar11) {
            uVar20 = (ulonglong)(uint)(iVar11 - param_3.low);
            lVar23 = local_88;
            do {
              uVar12 = *(uint *)((longlong)&param_2->cells->index + lVar23);
              uVar8 = uVar12 & 0xffffff;
              uVar10 = (ulonglong)uVar8;
              uVar18 = (ulonglong)(uVar8 + (uVar12 >> 0x18));
              if (uVar10 < uVar18) {
                do {
                  uVar7 = _Dst[uVar10];
                  if ((uVar7 != 0) && (uVar7 < local_res10[0])) {
                    _Dst[uVar10] = *(ushort *)((longlong)pvVar9 + (ulonglong)uVar7 * 8 + 2);
                  }
                  uVar10 = uVar10 + 1;
                } while ((longlong)uVar10 < (longlong)uVar18);
              }
              lVar23 = lVar23 + 4;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          iVar14 = iVar14 + local_70;
          local_88 = local_88 + local_50;
          local_58 = local_58 - 1;
        } while (local_58 != 0);
        local_58 = 0;
      }
      uVar20 = 0;
      if (param_1->m_timerEnabled != false) {
        (**(code **)(param_1->_padding_ + 0x20))(param_1,0x19);
      }
      param_2->maxRegions = uVar17;
      bVar6 = filterSmallRegions(param_1,local_res20,param_5,local_6c,&param_2->maxRegions,param_2,
                                 _Dst);
      if (bVar6) {
        if (param_1->m_timerEnabled != false) {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,0x19);
        }
        uVar10 = uVar20;
        puVar19 = _Dst;
        if (0 < param_2->spanCount) {
          do {
            uVar12 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar12;
            *(ushort *)((longlong)&param_2->spans->reg + uVar10) = *puVar19;
            uVar10 = uVar10 + 0xc;
            puVar19 = puVar19 + 1;
          } while ((int)uVar12 < param_2->spanCount);
        }
        if (param_1->m_timerEnabled != false) {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,0x15);
        }
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      rcFree(local_80.m_data);
    }
    rcFree(pvVar9);
  }
  rcFree(_Dst);
  return bVar6;
}

// rcCacheSpans @ 1446bf5f0

void __cdecl rcCacheSpans(rcContext *param_1,rcHeightfield *param_2,rcSpanCache *param_3)

{
  rcSpan *prVar1;
  rcSpanCache *prVar2;
  int iVar3;
  rcSpanData *prVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_2->height) {
    do {
      iVar3 = param_2->width;
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          prVar2 = param_3;
          for (prVar1 = param_2->spans[iVar3 * iVar6 + iVar5]; prVar1 != (rcSpan *)0x0;
              prVar1 = prVar1->next) {
            prVar4 = &prVar2->data;
            param_3->x = (ushort)iVar5;
            param_3 = param_3 + 1;
            *(short *)((longlong)(prVar4 + -1) + 10) = (short)iVar6;
            prVar2 = (rcSpanCache *)(prVar4 + 1);
            *(undefined8 *)prVar4 = *(undefined8 *)&prVar1->data;
            *(undefined4 *)&prVar4->field_0x8 = *(undefined4 *)&(prVar1->data).field_0x8;
          }
          iVar3 = param_2->width;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2->height);
  }
  return;
}

// rcCopyPolyMesh @ 1446bf680

bool __cdecl rcCopyPolyMesh(rcContext *param_1,rcPolyMesh *param_2,rcPolyMesh *param_3)

{
  ushort *puVar1;
  uchar *_Dst;
  
  param_3->nverts = param_2->nverts;
  param_3->npolys = param_2->npolys;
  param_3->maxpolys = param_2->npolys;
  param_3->nvp = param_2->nvp;
  param_3->bmin[0] = param_2->bmin[0];
  param_3->bmin[1] = param_2->bmin[1];
  param_3->bmin[2] = param_2->bmin[2];
  param_3->bmax[0] = param_2->bmax[0];
  param_3->bmax[1] = param_2->bmax[1];
  param_3->bmax[2] = param_2->bmax[2];
  param_3->cs = param_2->cs;
  param_3->ch = param_2->ch;
  param_3->borderSize = param_2->borderSize;
  puVar1 = rcAlloc(param_2->nverts * 6,RC_ALLOC_PERM);
  param_3->verts = puVar1;
  if (puVar1 == (ushort *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,"rcCopyPolyMesh: Out of memory \'dst.verts\' (%d).");
    return false;
  }
  memcpy(puVar1,param_2->verts,(longlong)param_2->nverts * 6);
  puVar1 = rcAlloc(param_2->nvp * param_2->npolys * 4,RC_ALLOC_PERM);
  param_3->polys = puVar1;
  if (puVar1 == (ushort *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,"rcCopyPolyMesh: Out of memory \'dst.polys\' (%d).");
    return false;
  }
  memcpy(puVar1,param_2->polys,(longlong)param_2->npolys * (longlong)param_2->nvp * 4);
  puVar1 = rcAlloc(param_2->npolys * 2,RC_ALLOC_PERM);
  param_3->regs = puVar1;
  if (puVar1 == (ushort *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,"rcCopyPolyMesh: Out of memory \'dst.regs\' (%d).");
    return false;
  }
  memcpy(puVar1,param_2->regs,(longlong)param_2->npolys * 2);
  _Dst = rcAlloc(param_2->npolys,RC_ALLOC_PERM);
  param_3->areas = _Dst;
  if (_Dst == (uchar *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,"rcCopyPolyMesh: Out of memory \'dst.areas\' (%d).");
    return false;
  }
  memcpy(_Dst,param_2->areas,(longlong)param_2->npolys);
  puVar1 = rcAlloc(param_2->npolys * 2,RC_ALLOC_PERM);
  param_3->flags = puVar1;
  if (puVar1 == (ushort *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,"rcCopyPolyMesh: Out of memory \'dst.flags\' (%d).");
    return false;
  }
  memcpy(puVar1,param_2->flags,(longlong)param_2->npolys);
  return true;
}

// rcCountSpans @ 1446bf8d0

int __cdecl rcCountSpans(rcContext *param_1,rcHeightfield *param_2)

{
  rcSpanPool *prVar1;
  int iVar2;
  rcSpan *prVar3;
  
  if ((param_2->width < 0x10000) && (param_2->height < 0x10000)) {
    iVar2 = 0;
    for (prVar1 = param_2->pools; prVar1 != (rcSpanPool *)0x0; prVar1 = prVar1->next) {
      iVar2 = iVar2 + 0x800;
    }
    prVar3 = param_2->freelist;
    if (prVar3 != (rcSpan *)0x0) {
      do {
        prVar3 = prVar3->next;
        iVar2 = iVar2 + -1;
      } while (prVar3 != (rcSpan *)0x0);
      return iVar2;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

// rcFilterLedgeSpans @ 1446bf930

void __cdecl
rcFilterLedgeSpans(rcContext *param_1,int param_2,int param_3,rcNeighborSlopeFilterMode param_4,
                  double param_5,double param_6,rcHeightfield *param_7)

{
  int iVar1;
  int iVar2;
  
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,8);
  }
  iVar2 = 0;
  iVar1 = param_7->height;
  if (0 < iVar1) {
    do {
      rcFilterLedgeSpansImp(param_1,param_2,param_3,param_4,param_5,param_6,iVar2,param_7);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (param_1->m_timerEnabled == false) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001446bfa16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x28))(param_1,8);
  return;
}

// rcFilterLedgeSpans @ 1446bfa30

void __cdecl
rcFilterLedgeSpans(rcContext *param_1,int param_2,int param_3,rcNeighborSlopeFilterMode param_4,
                  double param_5,double param_6,int param_7,int param_8,rcHeightfield *param_9)

{
  int iVar1;
  
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,8);
  }
  iVar1 = param_9->height;
  if (param_8 + param_7 < param_9->height) {
    iVar1 = param_8 + param_7;
  }
  for (; param_7 < iVar1; param_7 = param_7 + 1) {
    rcFilterLedgeSpansImp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9);
  }
  if (param_1->m_timerEnabled == false) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001446bfb26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x28))(param_1,8);
  return;
}

// rcFilterLedgeSpansImp @ 1446bfb40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
rcFilterLedgeSpansImp
          (rcContext *param_1,int param_2,int param_3,rcNeighborSlopeFilterMode param_4,
          double param_5,double param_6,int param_7,rcHeightfield *param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  rcSpan *prVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  longlong local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = _UNK_150d9fb28;
  local_38 = ___xmm_ffffffff000000000000000100000000;
  uStack_40 = _UNK_150ae1718;
  local_48 = ___xmm_000000000000000100000000ffffffff;
  iVar1 = param_8->height;
  auVar25._0_8_ = (param_5 + param_5) / param_6;
  iVar2 = param_8->width;
  lVar12 = (longlong)auVar25._0_8_;
  if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != auVar25._0_8_)) {
    auVar25._8_8_ = auVar25._0_8_;
    uVar6 = movmskpd(0,auVar25);
    auVar25._0_8_ = (double)(longlong)(lVar12 + (ulonglong)(uVar6 & 1 ^ 1));
  }
  param_5._0_4_ = 0;
  if (0 < iVar2) {
    lVar12 = (longlong)(iVar2 * param_7) << 3;
    do {
      for (lVar4 = *(longlong *)(lVar12 + (longlong)param_8->spans); lVar4 != 0;
          lVar4 = *(longlong *)(lVar4 + 0x10)) {
        uVar6 = *(uint *)(lVar4 + 8);
        if ((uVar6 & 0x3f) != 0) {
          uVar3 = *(uint *)(lVar4 + 4);
          uVar14 = uVar3 & 0x1fffffff;
          if (*(uint **)(lVar4 + 0x10) == (uint *)0x0) {
            uVar15 = 0x1fffffff;
          }
          else {
            uVar15 = **(uint **)(lVar4 + 0x10) & 0x1fffffff;
          }
          local_58 = 2;
          uVar23 = -param_3;
          uVar7 = 0;
          iVar20 = 0x1fffffff;
          uVar21 = uVar14;
          uVar18 = uVar14;
          uVar22 = uVar14;
          uVar19 = uVar14;
          do {
            iVar16 = param_5._0_4_ + *(int *)((longlong)&local_48 + (ulonglong)(uVar7 & 3) * 4);
            iVar10 = param_7 + *(int *)((longlong)&local_38 + (ulonglong)(uVar7 & 3) * 4);
            if ((((iVar16 < 0) || (iVar10 < 0)) || (iVar2 <= iVar16)) || (iVar1 <= iVar10)) {
              iVar10 = -(uVar14 + param_3);
              if (iVar20 < iVar10) {
                iVar10 = iVar20;
              }
            }
            else {
              prVar5 = param_8->spans[iVar10 * iVar2 + iVar16];
              if (prVar5 == (rcSpan *)0x0) {
                uVar11 = 0x1fffffff;
              }
              else {
                uVar11 = prVar5.smin;
              }
              if (uVar15 < uVar11) {
                uVar11 = uVar15;
              }
              uVar8 = uVar23;
              if ((int)uVar23 < (int)uVar14) {
                uVar8 = uVar14;
              }
              iVar10 = iVar20;
              if ((param_2 < (int)(uVar11 - uVar8)) &&
                 (iVar10 = uVar23 - uVar14, iVar20 < (int)(uVar23 - uVar14))) {
                iVar10 = iVar20;
              }
              while (prVar5 != (rcSpan *)0x0) {
                uVar11 = *(uint *)&(prVar5->data).field_0x4;
                prVar5 = prVar5->next;
                uVar8 = ZPULL(uVar11,0,0x1d);
                if (prVar5 == (rcSpan *)0x0) {
                  uVar9 = 0x1fffffff;
                }
                else {
                  uVar9 = prVar5.smin;
                }
                if (uVar8 < uVar14) {
                  uVar11 = uVar3;
                }
                if (uVar15 < uVar9) {
                  uVar9 = uVar15;
                }
                if (param_2 < (int)(uVar9 - (uVar11 & 0x1fffffff))) {
                  iVar16 = uVar8 - uVar14;
                  iVar20 = iVar16;
                  if (iVar10 < iVar16) {
                    iVar20 = iVar10;
                  }
                  iVar10 = iVar20;
                  if (param_4 != RC_SLOPE_FILTER_NONE) {
                    iVar20 = -iVar16;
                    if (-iVar16 < 0) {
                      iVar20 = iVar16;
                    }
                    if (iVar20 <= param_3) {
                      bVar24 = uVar8 < uVar21;
                      uVar21 = uVar22;
                      if (bVar24) {
                        uVar21 = uVar8;
                      }
                      bVar24 = uVar18 < uVar8;
                      uVar18 = uVar19;
                      uVar22 = uVar21;
                      if (bVar24) {
                        uVar18 = uVar8;
                        uVar19 = uVar8;
                      }
                    }
                  }
                }
              }
            }
            iVar20 = -(uVar14 + param_3);
            uVar13 = (ulonglong)(uVar7 + 1 & 3);
            iVar17 = param_5._0_4_ + *(int *)((longlong)&local_48 + uVar13 * 4);
            iVar16 = param_7 + *(int *)((longlong)&local_38 + uVar13 * 4);
            if (((iVar17 < 0) || (iVar16 < 0)) || ((iVar2 <= iVar17 || (iVar1 <= iVar16)))) {
              if (iVar10 < iVar20) {
                iVar20 = iVar10;
              }
            }
            else {
              prVar5 = param_8->spans[iVar16 * iVar2 + iVar17];
              if (prVar5 == (rcSpan *)0x0) {
                uVar11 = 0x1fffffff;
              }
              else {
                uVar11 = prVar5.smin;
              }
              if (uVar15 < uVar11) {
                uVar11 = uVar15;
              }
              uVar8 = uVar23;
              if ((int)uVar23 < (int)uVar14) {
                uVar8 = uVar14;
              }
              iVar20 = iVar10;
              if ((param_2 < (int)(uVar11 - uVar8)) &&
                 (iVar20 = uVar23 - uVar14, iVar10 < (int)(uVar23 - uVar14))) {
                iVar20 = iVar10;
              }
              while (prVar5 != (rcSpan *)0x0) {
                uVar11 = *(uint *)&(prVar5->data).field_0x4;
                prVar5 = prVar5->next;
                uVar8 = ZPULL(uVar11,0,0x1d);
                if (prVar5 == (rcSpan *)0x0) {
                  uVar9 = 0x1fffffff;
                }
                else {
                  uVar9 = prVar5.smin;
                }
                if (uVar8 < uVar14) {
                  uVar11 = uVar3;
                }
                if (uVar15 < uVar9) {
                  uVar9 = uVar15;
                }
                if (param_2 < (int)(uVar9 - (uVar11 & 0x1fffffff))) {
                  iVar16 = uVar8 - uVar14;
                  iVar10 = iVar16;
                  if (iVar20 < iVar16) {
                    iVar10 = iVar20;
                  }
                  iVar20 = iVar10;
                  if (param_4 != RC_SLOPE_FILTER_NONE) {
                    iVar10 = -iVar16;
                    if (-iVar16 < 0) {
                      iVar10 = iVar16;
                    }
                    if (iVar10 <= param_3) {
                      if (uVar8 < uVar21) {
                        uVar21 = uVar8;
                      }
                      uVar22 = uVar21;
                      uVar19 = uVar18;
                      if (uVar18 < uVar8) {
                        uVar18 = uVar8;
                        uVar19 = uVar8;
                      }
                    }
                  }
                }
              }
            }
            uVar7 = uVar7 + 2;
            local_58 = local_58 + -1;
          } while (local_58 != 0);
          if (iVar20 < (int)uVar23) {
            *(uint *)(lVar4 + 8) = uVar6 & 0xffffffc0;
          }
          else {
            iVar20 = uVar18 - uVar21;
            if (param_4 == RC_SLOPE_FILTER_RECAST) {
              iVar10 = iVar20 - param_3;
              bVar24 = iVar20 == param_3;
              iVar16 = param_3;
            }
            else {
              if (param_4 != RC_SLOPE_FILTER_USE_HEIGHT_FROM_WALKABLE_SLOPE) goto LAB_1446bff3a;
              iVar10 = iVar20 - (int)auVar25._0_8_;
              bVar24 = iVar10 == 0;
              iVar16 = (int)auVar25._0_8_;
            }
            if (!bVar24 && SBORROW4(iVar20,iVar16) == iVar10 < 0) {
              *(uint *)(lVar4 + 8) = uVar6 & 0xffffffc0;
            }
          }
        }
LAB_1446bff3a:
      }
      param_5._0_4_ = param_5._0_4_ + 1;
      lVar12 = lVar12 + 8;
    } while (param_5._0_4_ < iVar2);
  }
  return;
}

// rcFilterLowHangingWalkableObstacles @ 1446bfff0

void __cdecl
rcFilterLowHangingWalkableObstacles(rcContext *param_1,int param_2,rcHeightfield *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))();
  }
  uVar1 = param_3->width;
  if (0 < param_3->height) {
    uVar13 = (ulonglong)(uint)param_3->height;
    lVar14 = 0;
    do {
      uVar8 = (ulonglong)uVar1;
      lVar9 = lVar14;
      if (0 < (int)uVar1) {
        do {
          lVar2 = *(longlong *)(lVar9 + (longlong)param_3->spans);
          if (lVar2 != 0) {
            lVar12 = 0;
            bVar4 = false;
            uVar11 = 0;
            do {
              lVar10 = lVar2;
              uVar5 = *(uint *)(lVar10 + 8);
              uVar3 = uVar5 & 0x3f;
              if (((uVar5 & 0x3f) == 0) && (bVar4)) {
                iVar7 = (*(uint *)(lVar10 + 4) & 0x1fffffff) - (*(uint *)(lVar12 + 4) & 0x1fffffff);
                iVar6 = -iVar7;
                if (iVar6 < 0) {
                  iVar6 = iVar7;
                }
                if (iVar6 <= param_2) {
                  uVar5 = (uVar5 ^ uVar11) & 0x3f ^ uVar5;
                  *(uint *)(lVar10 + 8) = uVar5;
                }
              }
              lVar2 = *(longlong *)(lVar10 + 0x10);
              lVar12 = lVar10;
              bVar4 = uVar3 != 0;
              uVar11 = uVar5;
            } while (*(longlong *)(lVar10 + 0x10) != 0);
          }
          uVar8 = uVar8 - 1;
          lVar9 = lVar9 + 8;
        } while (uVar8 != 0);
      }
      lVar14 = lVar14 + (longlong)(int)uVar1 * 8;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (param_1->m_timerEnabled == false) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001446c014c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x28))(param_1,0xb);
  return;
}

// rcFilterWalkableLowHeightSpans @ 1446c0160

void __cdecl rcFilterWalkableLowHeightSpans(rcContext *param_1,int param_2,rcHeightfield *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,9);
  }
  uVar1 = param_3->width;
  if (0 < param_3->height) {
    lVar8 = 0;
    uVar5 = (ulonglong)(uint)param_3->height;
    do {
      lVar6 = lVar8;
      uVar7 = (ulonglong)uVar1;
      if (0 < (int)uVar1) {
        do {
          puVar2 = *(uint **)(lVar6 + (longlong)param_3->spans);
          while (puVar3 = puVar2, puVar3 != (uint *)0x0) {
            puVar2 = *(uint **)(puVar3 + 4);
            if (puVar2 == (uint *)0x0) {
              uVar4 = 0x1fffffff;
            }
            else {
              uVar4 = *puVar2 & 0x1fffffff;
            }
            if ((int)(uVar4 - (puVar3[1] & 0x1fffffff)) < param_2) {
              puVar3[2] = puVar3[2] & 0xffffffc0;
            }
          }
          uVar7 = uVar7 - 1;
          lVar6 = lVar6 + 8;
        } while (uVar7 != 0);
      }
      lVar8 = lVar8 + (longlong)(int)uVar1 * 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_1->m_timerEnabled != false) {
                    /* WARNING: Could not recover jumptable at 0x0001446c024a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x28))(param_1,9);
    return;
  }
  return;
}

// rcFilterWalkableLowHeightSpansSequences @ 1446c0260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
rcFilterWalkableLowHeightSpansSequences(rcContext *param_1,int param_2,rcHeightfield *param_3)

{
  uint uVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  uint uVar6;
  short *psVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar14;
  ushort *puVar15;
  uint *puVar16;
  undefined1 *puVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  undefined1 auStack_388 [32];
  longlong local_368;
  undefined8 local_360;
  rcContext *local_358;
  short local_34c [2];
  undefined1 local_348 [8];
  ushort local_340;
  undefined1 local_33e [758];
  ulonglong local_48;
  ulonglong uVar13;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  local_358 = param_1;
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))();
  }
  uVar1 = param_3->width;
  uVar12 = param_3->height;
  uVar5 = (ulonglong)uVar12;
  memset(local_348,0,0x300);
  dVar4 = __real_41bfffffff000000;
  dVar3 = __real_406fe00000000000;
  if (0 < (int)uVar12) {
    lVar18 = 0;
    local_368 = (longlong)(int)uVar1 * 8;
    do {
      uVar11 = (ulonglong)uVar1;
      lVar19 = lVar18;
      if (0 < (int)uVar1) {
        do {
          uVar10 = 0;
          uVar12 = 0;
          puVar16 = *(uint **)(lVar19 + (longlong)param_3->spans);
          if (puVar16 != (uint *)0x0) {
            puVar17 = local_33e;
            puVar8 = puVar16;
            uVar13 = uVar10;
            do {
              uVar12 = puVar8[1];
              puVar2 = *(uint **)(puVar8 + 4);
              if (puVar2 == (uint *)0x0) {
                uVar6 = 0x1fffffff;
              }
              else {
                uVar6 = *puVar2 & 0x1fffffff;
              }
              dVar20 = (double)(uVar12 & 0x1fffffff);
              if (0.0 <= dVar20) {
                if (dVar4 <= dVar20) {
                  dVar20 = dVar4;
                }
              }
              else {
                dVar20 = 0.0;
              }
              *(int *)(puVar17 + -10) = (int)(longlong)dVar20;
              dVar20 = (double)(uVar6 - (uVar12 & 0x1fffffff));
              if (0.0 <= dVar20) {
                if (dVar3 <= dVar20) {
                  dVar20 = dVar3;
                }
              }
              else {
                dVar20 = 0.0;
              }
              uVar12 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar12;
              uVar10 = uVar10 + 1;
              *puVar17 = (char)(int)dVar20;
              *(ushort *)(puVar17 + -2) = (ushort)puVar8[2] & 0x3f;
              puVar17 = puVar17 + 0xc;
            } while (((longlong)uVar10 < 0x40) && (puVar8 = puVar2, puVar2 != (uint *)0x0));
          }
          lVar9 = 0;
          iVar14 = uVar12 - 1;
          uVar12 = 0x1fffffff;
          if (-1 < iVar14) {
            psVar7 = local_34c + uVar10 * 6;
            do {
              if ((int)(uint)*(byte *)(psVar7 + 1) < param_2) {
                if (*(uint *)(psVar7 + -4) < uVar12) {
                  uVar12 = *(uint *)(psVar7 + -4) - param_2;
                  if ((int)uVar12 < 0) {
                    uVar12 = 0;
                  }
                }
                else {
                  *psVar7 = 0;
                }
              }
              else if (*psVar7 != 0) {
                uVar12 = *(uint *)(psVar7 + -4);
              }
              psVar7 = psVar7 + -6;
              iVar14 = iVar14 + -1;
            } while (-1 < iVar14);
          }
          if (puVar16 != (uint *)0x0) {
            puVar15 = &local_340;
            do {
              if (lVar9 < 0x40) {
                puVar16[2] = puVar16[2] ^ ((uint)*puVar15 ^ puVar16[2]) & 0x3f;
              }
              puVar16 = *(uint **)(puVar16 + 4);
              lVar9 = lVar9 + 1;
              puVar15 = puVar15 + 6;
            } while (puVar16 != (uint *)0x0);
          }
          uVar11 = uVar11 - 1;
          lVar19 = lVar19 + 8;
        } while (uVar11 != 0);
      }
      lVar18 = lVar18 + local_368;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    local_360 = 0;
    param_1 = local_358;
  }
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x28))(param_1,9);
  }
  return;
}

// rcGatherRegionsNoFilter @ 1446c0500

bool __cdecl
rcGatherRegionsNoFilter
          (rcContext *param_1,rcCompactHeightfield *param_2,rcBorderSize param_3,ushort *param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  bool bVar8;
  uint uVar9;
  ushort *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ushort uVar15;
  ushort *puVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  ushort *_Dst;
  ushort uVar20;
  int local_res10 [2];
  rcIntArray local_90;
  longlong local_80;
  longlong local_78;
  ushort *local_70;
  rcIntArray local_68;
  longlong local_58;
  ushort *local_50;
  ushort *local_48;
  
  uVar2 = param_2->width;
  iVar3 = param_2->height;
  local_90.m_data = (int *)0x0;
  local_90.m_size = 0;
  local_90.m_cap = 0;
  rcIntArray::resize(&local_90,0x400);
  local_68.m_data = (int *)0x0;
  local_68.m_size = 0;
  local_68.m_cap = 0;
  rcIntArray::resize(&local_68,0x400);
  iVar13 = param_2->spanCount;
  _Dst = param_4 + iVar13;
  memset(param_4,0,(longlong)iVar13 * 2);
  memset(_Dst,0,(longlong)param_2->spanCount * 2);
  uVar1 = param_2->maxDistance;
  local_res10[0] = CONCAT22(local_res10[0]._2_2_,1);
  UE::Recast::Private::rcMarkBorderRegions
            (param_3,uVar2,iVar3,param_2,param_4,(ushort *)local_res10);
  puVar6 = param_4 + iVar13 * 2;
  puVar7 = param_4 + iVar13 * 3;
  uVar1 = uVar1 + 1 & 0xfffe;
  uVar15 = (ushort)local_res10[0];
  while (uVar1 != 0) {
    uVar20 = uVar1 - 2;
    if (uVar1 < 2) {
      uVar20 = 0;
    }
    if (param_1->m_timerEnabled != false) {
      (**(code **)(param_1->_padding_ + 0x20))(param_1,0x17);
    }
    puVar10 = expandRegions(8,uVar20,param_2,param_4,_Dst,puVar6,puVar7,&local_90);
    puVar16 = puVar6;
    local_50 = param_4;
    puVar5 = puVar7;
    local_48 = _Dst;
    if (puVar10 == param_4) {
      puVar16 = param_4;
      local_50 = puVar6;
      puVar5 = _Dst;
      local_48 = puVar7;
    }
    local_70 = puVar5;
    if ((param_1->m_timerEnabled != false) &&
       ((**(code **)(param_1->_padding_ + 0x28))(param_1,0x17), param_1->m_timerEnabled != false)) {
      (**(code **)(param_1->_padding_ + 0x20))(param_1,0x18);
    }
    local_res10[0] = 0;
    _Dst = puVar5;
    if (0 < iVar3) {
      uVar11 = (ulonglong)(int)uVar2;
      lVar17 = uVar11 << 2;
      local_78 = 0;
      local_58 = lVar17;
      do {
        iVar18 = 0;
        lVar12 = local_78;
        iVar13 = local_res10[0];
        if (0 < (int)uVar11) {
          do {
            uVar4 = *(uint *)((longlong)&param_2->cells->index + lVar12);
            uVar9 = uVar4 & 0xffffff;
            uVar14 = (ulonglong)uVar9;
            uVar19 = (ulonglong)(uVar9 + (uVar4 >> 0x18));
            uVar11 = uVar14;
            local_80 = lVar12;
            if (uVar14 < uVar19) {
              do {
                if ((((uVar20 <= param_2->dist[uVar14]) && (puVar16[uVar14] == 0)) &&
                    (param_2->areas[uVar14] != '\0')) &&
                   (bVar8 = floodRegion(iVar18,iVar13,(int)uVar11,uVar20,uVar15,param_2,puVar16,
                                        local_70,&local_90), iVar13 = local_res10[0], bVar8)) {
                  uVar15 = uVar15 + 1;
                }
                uVar14 = uVar14 + 1;
                uVar11 = (ulonglong)((int)uVar11 + 1);
              } while ((longlong)uVar14 < (longlong)uVar19);
            }
            iVar18 = iVar18 + 1;
            uVar11 = (ulonglong)uVar2;
            local_80 = local_80 + 4;
            lVar12 = local_80;
            lVar17 = local_58;
          } while (iVar18 < (int)uVar2);
        }
        local_res10[0] = iVar13 + 1;
        local_78 = local_78 + lVar17;
        _Dst = local_70;
      } while (local_res10[0] < iVar3);
    }
    puVar6 = local_50;
    puVar7 = local_48;
    uVar1 = uVar20;
    param_4 = puVar16;
    if (param_1->m_timerEnabled != false) {
      (**(code **)(param_1->_padding_ + 0x28))(param_1);
      puVar6 = local_50;
      puVar7 = local_48;
    }
  }
  expandRegions(0x40,0,param_2,param_4,_Dst,puVar6,puVar7,&local_90);
  param_2->maxRegions = uVar15;
  rcFree(local_68.m_data);
  rcFree(local_90.m_data);
  return true;
}

// rcMergePolyMeshDetails @ 1446c0a00

bool __cdecl
rcMergePolyMeshDetails
          (rcContext *param_1,rcPolyMeshDetail **param_2,int param_3,rcPolyMeshDetail *param_4)

{
  rcPolyMeshDetail *prVar1;
  uint *puVar2;
  double *pdVar3;
  bool bVar4;
  uint *puVar5;
  uchar *puVar6;
  double *pdVar7;
  rcPolyMeshDetail **pprVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))();
  }
  iVar12 = 0;
  iVar10 = 0;
  iVar11 = 0;
  if (0 < param_3) {
    uVar9 = (ulonglong)(uint)param_3;
    pprVar8 = param_2;
    do {
      prVar1 = *pprVar8;
      if (prVar1 != (rcPolyMeshDetail *)0x0) {
        iVar12 = iVar12 + prVar1->nverts;
        iVar10 = iVar10 + prVar1->ntris;
        iVar11 = iVar11 + prVar1->nmeshes;
      }
      pprVar8 = pprVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  param_4->nmeshes = 0;
  puVar5 = rcAlloc(iVar11 << 4,RC_ALLOC_PERM);
  param_4->meshes = puVar5;
  if (puVar5 == (uint *)0x0) {
    rcContext::log(param_1,RC_LOG_ERROR,
                   "rcBuildPolyMeshDetail: Out of memory \'pmdtl.meshes\' (%d).");
    bVar4 = false;
  }
  else {
    param_4->ntris = 0;
    puVar6 = rcAlloc(iVar10 * 4,RC_ALLOC_PERM);
    param_4->tris = puVar6;
    if (puVar6 == (uchar *)0x0) {
      rcContext::log(param_1,RC_LOG_ERROR,
                     "rcBuildPolyMeshDetail: Out of memory \'dmesh.tris\' (%d).");
      bVar4 = false;
    }
    else {
      param_4->nverts = 0;
      pdVar7 = rcAlloc(iVar12 * 0x18,RC_ALLOC_PERM);
      param_4->verts = pdVar7;
      if (pdVar7 == (double *)0x0) {
        rcContext::log(param_1,RC_LOG_ERROR,
                       "rcBuildPolyMeshDetail: Out of memory \'dmesh.verts\' (%d).");
        bVar4 = false;
      }
      else {
        if (0 < param_3) {
          lVar13 = 0;
          do {
            prVar1 = param_2[lVar13];
            if (prVar1 != (rcPolyMeshDetail *)0x0) {
              iVar10 = 0;
              if (0 < prVar1->nmeshes) {
                lVar15 = 0;
                do {
                  puVar5 = prVar1->meshes;
                  iVar10 = iVar10 + 1;
                  puVar2 = param_4->meshes;
                  lVar14 = (longlong)(param_4->nmeshes << 2);
                  puVar2[lVar14] = *(int *)(lVar15 + (longlong)puVar5) + param_4->nverts;
                  puVar2[lVar14 + 1] = *(uint *)(lVar15 + 4 + (longlong)puVar5);
                  puVar2[lVar14 + 2] = *(int *)(lVar15 + 8 + (longlong)puVar5) + param_4->ntris;
                  puVar2[lVar14 + 3] = *(uint *)(lVar15 + 0xc + (longlong)puVar5);
                  param_4->nmeshes = param_4->nmeshes + 1;
                  lVar15 = lVar15 + 0x10;
                } while (iVar10 < prVar1->nmeshes);
              }
              iVar10 = 0;
              if (0 < prVar1->nverts) {
                lVar15 = 0;
                do {
                  pdVar7 = prVar1->verts;
                  iVar10 = iVar10 + 1;
                  lVar14 = (longlong)(param_4->nverts * 3);
                  pdVar3 = param_4->verts;
                  pdVar3[lVar14] = *(double *)((longlong)pdVar7 + lVar15);
                  pdVar3[lVar14 + 1] = *(double *)((longlong)pdVar7 + lVar15 + 8);
                  pdVar3[lVar14 + 2] = *(double *)((longlong)pdVar7 + lVar15 + 0x10);
                  param_4->nverts = param_4->nverts + 1;
                  lVar15 = lVar15 + 0x18;
                } while (iVar10 < prVar1->nverts);
              }
              iVar10 = 0;
              if (0 < prVar1->ntris) {
                iVar11 = param_4->ntris;
                lVar15 = 0;
                do {
                  iVar10 = iVar10 + 1;
                  param_4->tris[iVar11 * 4] = prVar1->tris[lVar15];
                  param_4->tris[(longlong)(param_4->ntris << 2) + 1] = prVar1->tris[lVar15 + 1];
                  param_4->tris[(longlong)(param_4->ntris << 2) + 2] = prVar1->tris[lVar15 + 2];
                  param_4->tris[(longlong)(param_4->ntris << 2) + 3] = prVar1->tris[lVar15 + 3];
                  param_4->ntris = param_4->ntris + 1;
                  iVar11 = param_4->ntris;
                  lVar15 = lVar15 + 4;
                } while (iVar10 < prVar1->ntris);
              }
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < param_3);
        }
        if (param_1->m_timerEnabled != false) {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,0x1c);
        }
        bVar4 = true;
      }
    }
  }
  return bVar4;
}

// rcMergePolyMeshes @ 1446c0cd0

bool __cdecl
rcMergePolyMeshes(rcContext *param_1,rcPolyMesh **param_2,int param_3,rcPolyMesh *param_4)

{
  int iVar1;
  rcPolyMesh *prVar2;
  ushort *puVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar10;
  ushort *puVar11;
  uchar *_Dst;
  int *_Dst_00;
  int *_Dst_01;
  rcPolyMesh **pprVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  int iVar17;
  char *pcVar18;
  ulonglong uVar19;
  int iVar20;
  size_t _Size;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  longlong local_68;
  
  if ((param_3 == 0) || (param_2 == (rcPolyMesh **)0x0)) {
    return true;
  }
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))();
  }
  iVar15 = 0;
  iVar17 = 0;
  iVar14 = 0;
  param_4->nvp = (*param_2)->nvp;
  param_4->cs = (*param_2)->cs;
  param_4->ch = (*param_2)->ch;
  prVar2 = *param_2;
  param_4->bmin[0] = prVar2->bmin[0];
  param_4->bmin[1] = prVar2->bmin[1];
  param_4->bmin[2] = prVar2->bmin[2];
  param_4->bmax[0] = prVar2->bmax[0];
  param_4->bmax[1] = prVar2->bmax[1];
  param_4->bmax[2] = prVar2->bmax[2];
  if (0 < param_3) {
    uVar19 = (ulonglong)(uint)param_3;
    pprVar12 = param_2;
    iVar20 = 0;
    do {
      prVar2 = *pprVar12;
      pprVar12 = pprVar12 + 1;
      dVar24 = param_4->bmin[0];
      uVar21 = SUB84(dVar24,0);
      uVar22 = (undefined4)((ulonglong)dVar24 >> 0x20);
      dVar25 = prVar2->bmin[0];
      if (dVar25 <= dVar24) {
        uVar21 = SUB84(dVar25,0);
        uVar22 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      param_4->bmin[0] = (double)CONCAT44(uVar22,uVar21);
      dVar24 = prVar2->bmin[1];
      uVar21 = SUB84(dVar24,0);
      uVar22 = (undefined4)((ulonglong)dVar24 >> 0x20);
      dVar25 = param_4->bmin[1];
      if (dVar25 <= dVar24) {
        uVar21 = SUB84(dVar25,0);
        uVar22 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      param_4->bmin[1] = (double)CONCAT44(uVar22,uVar21);
      dVar24 = prVar2->bmin[2];
      uVar21 = SUB84(dVar24,0);
      uVar22 = (undefined4)((ulonglong)dVar24 >> 0x20);
      dVar25 = param_4->bmin[2];
      if (dVar25 <= dVar24) {
        uVar21 = SUB84(dVar25,0);
        uVar22 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      param_4->bmin[2] = (double)CONCAT44(uVar22,uVar21);
      dVar24 = param_4->bmax[0];
      uVar21 = SUB84(dVar24,0);
      uVar22 = (undefined4)((ulonglong)dVar24 >> 0x20);
      dVar25 = prVar2->bmax[0];
      if (dVar24 <= dVar25) {
        uVar21 = SUB84(dVar25,0);
        uVar22 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      param_4->bmax[0] = (double)CONCAT44(uVar22,uVar21);
      dVar24 = prVar2->bmax[1];
      uVar21 = SUB84(dVar24,0);
      uVar22 = (undefined4)((ulonglong)dVar24 >> 0x20);
      dVar25 = param_4->bmax[1];
      if (dVar24 <= dVar25) {
        uVar21 = SUB84(dVar25,0);
        uVar22 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      param_4->bmax[1] = (double)CONCAT44(uVar22,uVar21);
      dVar24 = prVar2->bmax[2];
      uVar21 = SUB84(dVar24,0);
      uVar22 = (undefined4)((ulonglong)dVar24 >> 0x20);
      dVar25 = param_4->bmax[2];
      if (dVar24 <= dVar25) {
        uVar21 = SUB84(dVar25,0);
        uVar22 = (undefined4)((ulonglong)dVar25 >> 0x20);
      }
      param_4->bmax[2] = (double)CONCAT44(uVar22,uVar21);
      iVar1 = prVar2->nverts;
      iVar14 = iVar1;
      if (iVar1 < iVar20) {
        iVar14 = iVar20;
      }
      iVar17 = iVar17 + prVar2->npolys;
      iVar15 = iVar15 + iVar1;
      uVar19 = uVar19 - 1;
      iVar20 = iVar14;
    } while (uVar19 != 0);
  }
  param_4->nverts = 0;
  puVar11 = rcAlloc(iVar15 * 6,RC_ALLOC_PERM);
  param_4->verts = puVar11;
  if (puVar11 == (ushort *)0x0) {
    pcVar18 = "rcMergePolyMeshes: Out of memory \'mesh.verts\' (%d).";
  }
  else {
    param_4->npolys = 0;
    puVar11 = rcAlloc(iVar17 * param_4->nvp * 4,RC_ALLOC_PERM);
    param_4->polys = puVar11;
    if (puVar11 == (ushort *)0x0) {
      pcVar18 = "rcMergePolyMeshes: Out of memory \'mesh.polys\' (%d).";
    }
    else {
      _Size = (size_t)iVar17;
      memset(puVar11,0xff,(longlong)param_4->nvp * _Size * 4);
      puVar11 = rcAlloc(iVar17 * 2,RC_ALLOC_PERM);
      param_4->regs = puVar11;
      if (puVar11 == (ushort *)0x0) {
        pcVar18 = "rcMergePolyMeshes: Out of memory \'mesh.regs\' (%d).";
      }
      else {
        memset(puVar11,0,_Size * 2);
        _Dst = rcAlloc(iVar17,RC_ALLOC_PERM);
        param_4->areas = _Dst;
        if (_Dst == (uchar *)0x0) {
          pcVar18 = "rcMergePolyMeshes: Out of memory \'mesh.areas\' (%d).";
        }
        else {
          memset(_Dst,0,_Size);
          puVar11 = rcAlloc(iVar17 * 2,RC_ALLOC_PERM);
          param_4->flags = puVar11;
          if (puVar11 != (ushort *)0x0) {
            memset(puVar11,0,_Size * 2);
            _Dst_00 = rcAlloc(iVar15 * 4,RC_ALLOC_TEMP);
            if (_Dst_00 == (int *)0x0) {
              rcContext::log(param_1,RC_LOG_ERROR,
                             "rcMergePolyMeshes: Out of memory \'nextVert\' (%d).");
              rcFree((void *)0x0);
              return false;
            }
            memset(_Dst_00,0,(longlong)iVar15 << 2);
            _Dst_01 = rcAlloc(0x4000,RC_ALLOC_TEMP);
            if (_Dst_01 == (int *)0x0) {
              rcContext::log(param_1,RC_LOG_ERROR,
                             "rcMergePolyMeshes: Out of memory \'firstVert\' (%d).");
              bVar8 = false;
            }
            else {
              memset(_Dst_01,-1,0x4000);
              puVar11 = rcAlloc(iVar14 * 2,RC_ALLOC_PERM);
              if (puVar11 == (ushort *)0x0) {
                rcContext::log(param_1,RC_LOG_ERROR,
                               "rcMergePolyMeshes: Out of memory \'vremap\' (%d).");
                bVar8 = false;
              }
              else {
                memset(puVar11,0,(longlong)iVar14 * 2);
                if (0 < (longlong)param_3) {
                  local_68 = 0;
                  dVar24 = __real_3fe0000000000000;
                  dVar25 = __real_3ff0000000000000;
                  do {
                    dVar23 = dVar25 / param_4->cs;
                    prVar2 = param_2[local_68];
                    dVar5 = (prVar2->bmin[0] - param_4->bmin[0]) * dVar23 + dVar24;
                    lVar13 = (longlong)dVar5;
                    pprVar12 = param_2;
                    if ((lVar13 != -0x8000000000000000) && ((double)lVar13 != dVar5)) {
                      auVar4._8_4_ = SUB84(dVar5,0);
                      auVar4._0_8_ = dVar5;
                      auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
                      uVar10 = movmskpd((int)param_2,auVar4);
                      pprVar12 = (rcPolyMesh **)(ulonglong)(uVar10 & 1);
                      dVar5 = (double)(lVar13 - (longlong)pprVar12);
                    }
                    dVar23 = (prVar2->bmin[2] - param_4->bmin[2]) * dVar23 + dVar24;
                    lVar13 = (longlong)dVar23;
                    if ((lVar13 != -0x8000000000000000) && ((double)lVar13 != dVar23)) {
                      auVar6._8_4_ = SUB84(dVar23,0);
                      auVar6._0_8_ = dVar23;
                      auVar6._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
                      uVar10 = movmskpd((int)pprVar12,auVar6);
                      dVar23 = (double)(longlong)(lVar13 - (ulonglong)(uVar10 & 1));
                    }
                    iVar14 = 0;
                    if (0 < prVar2->nverts) {
                      lVar13 = 0;
                      puVar16 = puVar11;
                      do {
                        puVar3 = prVar2->verts;
                        uVar9 = addVertex((short)(int)dVar5 + *(short *)(lVar13 + (longlong)puVar3),
                                          *(ushort *)(lVar13 + 2 + (longlong)puVar3),
                                          (short)(int)dVar23 +
                                          *(short *)(lVar13 + 4 + (longlong)puVar3),param_4->verts,
                                          _Dst_01,_Dst_00,&param_4->nverts);
                        *puVar16 = uVar9;
                        lVar13 = lVar13 + 6;
                        iVar14 = iVar14 + 1;
                        puVar16 = puVar16 + 1;
                      } while (iVar14 < prVar2->nverts);
                    }
                    iVar14 = 0;
                    lVar13 = 0;
                    if (0 < prVar2->npolys) {
                      do {
                        iVar15 = param_4->nvp;
                        puVar16 = param_4->polys + iVar15 * param_4->npolys * 2;
                        puVar3 = prVar2->polys;
                        param_4->regs[param_4->npolys] = prVar2->regs[lVar13];
                        param_4->areas[param_4->npolys] = prVar2->areas[lVar13];
                        param_4->flags[param_4->npolys] = prVar2->flags[lVar13];
                        iVar17 = 0;
                        param_4->npolys = param_4->npolys + 1;
                        if (0 < param_4->nvp) {
                          lVar7 = (longlong)(iVar15 * iVar14 * 2) * 2 - (longlong)puVar16;
                          do {
                            uVar9 = *(ushort *)((longlong)puVar16 + (longlong)puVar3 + lVar7);
                            if (uVar9 == 0xffff) break;
                            iVar17 = iVar17 + 1;
                            *puVar16 = puVar11[uVar9];
                            puVar16 = puVar16 + 1;
                          } while (iVar17 < param_4->nvp);
                        }
                        iVar14 = iVar14 + 1;
                        lVar13 = lVar13 + 1;
                      } while (iVar14 < prVar2->npolys);
                    }
                    local_68 = local_68 + 1;
                  } while (local_68 < param_3);
                }
                bVar8 = buildMeshAdjacency(param_4->polys,param_4->npolys,param_4->nverts,
                                           param_4->nvp);
                if (bVar8) {
                  if (0xffff < param_4->nverts) {
                    rcContext::log(param_1,RC_LOG_ERROR,
                                   "rcMergePolyMeshes: The resulting mesh has too many vertices %d (max %d). Data can be corrupted."
                                  );
                  }
                  if (0xffff < param_4->npolys) {
                    rcContext::log(param_1,RC_LOG_ERROR,
                                   "rcMergePolyMeshes: The resulting mesh has too many polygons %d (max %d). Data can be corrupted."
                                  );
                  }
                  if (param_1->m_timerEnabled != false) {
                    (**(code **)(param_1->_padding_ + 0x28))(param_1,0xd);
                  }
                  bVar8 = true;
                }
                else {
                  rcContext::log(param_1,RC_LOG_ERROR,"rcMergePolyMeshes: Adjacency failed.");
                  bVar8 = false;
                }
              }
              rcFree(puVar11);
            }
            rcFree(_Dst_01);
            rcFree(_Dst_00);
            return bVar8;
          }
          pcVar18 = "rcMergePolyMeshes: Out of memory \'mesh.flags\' (%d).";
        }
      }
    }
  }
  rcContext::log(param_1,RC_LOG_ERROR,pcVar18);
  return false;
}

// rcRasterizeTriangle @ 1446c1350

void __cdecl
rcRasterizeTriangle(rcContext *param_1,double *param_2,double *param_3,double *param_4,uchar param_5
                   ,rcHeightfield *param_6,int param_7,int param_8,int *param_9)

{
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,2);
  }
  rasterizeTri<AddSpanInHeightfield>
            (param_2,param_3,param_4,param_5,param_6,param_6->bmin,param_6->bmax,param_6->cs,
             __real_3ff0000000000000 / param_6->cs,__real_3ff0000000000000 / param_6->ch,param_7,
             param_8,param_9,(AddSpanInHeightfield *)&param_6);
  if (param_1->m_timerEnabled != false) {
    (**(code **)(param_1->_padding_ + 0x28))(param_1,2);
  }
  return;
}

// rcRasterizeTriangles @ 1446c1450

void __cdecl
rcRasterizeTriangles
          (rcContext *param_1,double *param_2,int param_3,ushort *param_4,uchar *param_5,int param_6
          ,rcHeightfield *param_7,int param_8,int param_9,int *param_10,double *param_11,
          double *param_12)

{
  double dVar1;
  double dVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined4 in_register_00000084;
  longlong lVar6;
  AddSpanInTempColumns local_68 [2];
  
  if ((param_1 != (rcContext *)0x0) && (param_1->m_timerEnabled != false)) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,2,CONCAT44(in_register_00000084,param_3));
  }
  iVar3 = param_9;
  lVar6 = (longlong)param_6;
  dVar1 = __real_3ff0000000000000 / param_7->cs;
  dVar2 = __real_3ff0000000000000 / param_7->ch;
  if ((param_9 & 2U) == 0) {
    if (0 < lVar6) {
      lVar5 = 0;
      puVar4 = param_4 + 1;
      do {
        rasterizeTri<AddSpanInHeightfield>
                  (param_2 + (ulonglong)puVar4[-1] * 3,param_2 + (ulonglong)*puVar4 * 3,
                   param_2 + (ulonglong)puVar4[1] * 3,param_5[lVar5],param_7,param_7->bmin,
                   param_7->bmax,param_7->cs,dVar1,dVar2,param_8,iVar3,param_10,
                   (AddSpanInHeightfield *)&param_9);
        lVar5 = lVar5 + 1;
        puVar4 = puVar4 + 3;
      } while (lVar5 < lVar6);
    }
  }
  else {
    AddSpanInTempColumns::AddSpanInTempColumns
              (local_68,param_1,param_7,(float)dVar1,param_11,param_12);
    if ((0 < local_68[0].ibwidth) && (0 < local_68[0].ibheight)) {
      if (0 < lVar6) {
        lVar5 = 0;
        puVar4 = param_4 + 1;
        do {
          rasterizeTri<AddSpanInTempColumns>
                    (param_2 + (ulonglong)puVar4[-1] * 3,param_2 + (ulonglong)*puVar4 * 3,
                     param_2 + (ulonglong)puVar4[1] * 3,param_5[lVar5],param_7,param_7->bmin,
                     param_7->bmax,param_7->cs,dVar1,dVar2,param_8,iVar3,param_10,local_68);
          lVar5 = lVar5 + 1;
          puVar4 = puVar4 + 3;
        } while (lVar5 < lVar6);
      }
      AddSpanInTempColumns::TransferColumnsToHeightfield(local_68,param_7,(float)param_8);
    }
  }
  if ((param_1 != (rcContext *)0x0) && (param_1->m_timerEnabled != false)) {
    (**(code **)(param_1->_padding_ + 0x28))(param_1,2);
  }
  return;
}

// rcRasterizeTriangles @ 1446c1730

void __cdecl
rcRasterizeTriangles
          (rcContext *param_1,double *param_2,int param_3,int *param_4,uchar *param_5,int param_6,
          rcHeightfield *param_7,int param_8,int param_9,int *param_10,double *param_11,
          double *param_12)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 in_register_00000084;
  int *piVar6;
  AddSpanInTempColumns local_68 [2];
  
  if ((param_1 != (rcContext *)0x0) && (param_1->m_timerEnabled != false)) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,2,CONCAT44(in_register_00000084,param_3));
  }
  iVar3 = param_9;
  lVar4 = (longlong)param_6;
  dVar1 = __real_3ff0000000000000 / param_7->cs;
  dVar2 = __real_3ff0000000000000 / param_7->ch;
  if ((param_9 & 2U) == 0) {
    if (0 < lVar4) {
      lVar5 = 0;
      piVar6 = param_4 + 1;
      do {
        rasterizeTri<AddSpanInHeightfield>
                  (param_2 + piVar6[-1] * 3,param_2 + *piVar6 * 3,param_2 + piVar6[1] * 3,
                   param_5[lVar5],param_7,param_7->bmin,param_7->bmax,param_7->cs,dVar1,dVar2,
                   param_8,iVar3,param_10,(AddSpanInHeightfield *)&param_9);
        lVar5 = lVar5 + 1;
        piVar6 = piVar6 + 3;
      } while (lVar5 < lVar4);
    }
  }
  else {
    AddSpanInTempColumns::AddSpanInTempColumns
              (local_68,param_1,param_7,(float)dVar1,param_11,param_12);
    if ((0 < local_68[0].ibwidth) && (0 < local_68[0].ibheight)) {
      if (0 < lVar4) {
        lVar5 = 0;
        piVar6 = param_4 + 1;
        do {
          rasterizeTri<AddSpanInTempColumns>
                    (param_2 + piVar6[-1] * 3,param_2 + *piVar6 * 3,param_2 + piVar6[1] * 3,
                     param_5[lVar5],param_7,param_7->bmin,param_7->bmax,param_7->cs,dVar1,dVar2,
                     param_8,iVar3,param_10,local_68);
          lVar5 = lVar5 + 1;
          piVar6 = piVar6 + 3;
        } while (lVar5 < lVar4);
      }
      AddSpanInTempColumns::TransferColumnsToHeightfield(local_68,param_7,(float)param_8);
    }
  }
  if ((param_1 != (rcContext *)0x0) && (param_1->m_timerEnabled != false)) {
    (**(code **)(param_1->_padding_ + 0x28))(param_1,2);
  }
  return;
}

// rcRasterizeTriangles @ 1446c1a10

void __cdecl
rcRasterizeTriangles
          (rcContext *param_1,double *param_2,uchar *param_3,int param_4,rcHeightfield *param_5,
          int param_6,int param_7,int *param_8,double *param_9,double *param_10)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  double *pdVar5;
  ulonglong uVar6;
  AddSpanInTempColumns local_68 [2];
  
  uVar6 = (ulonglong)(uint)param_4;
  if ((param_1 != (rcContext *)0x0) && (param_1->m_timerEnabled != false)) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,2);
  }
  piVar4 = param_8;
  iVar3 = param_7;
  dVar1 = __real_3ff0000000000000 / param_5->cs;
  dVar2 = __real_3ff0000000000000 / param_5->ch;
  if ((param_7 & 2U) == 0) {
    if (0 < param_4) {
      pdVar5 = param_2 + 3;
      do {
        rasterizeTri<AddSpanInHeightfield>
                  (pdVar5 + -3,pdVar5,pdVar5 + 3,*param_3,param_5,param_5->bmin,param_5->bmax,
                   param_5->cs,dVar1,dVar2,param_6,iVar3,piVar4,(AddSpanInHeightfield *)&param_7);
        pdVar5 = pdVar5 + 9;
        param_3 = param_3 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else {
    AddSpanInTempColumns::AddSpanInTempColumns
              (local_68,param_1,param_5,(float)dVar1,param_9,param_10);
    if ((0 < local_68[0].ibwidth) && (0 < local_68[0].ibheight)) {
      if (0 < param_4) {
        pdVar5 = param_2 + 3;
        do {
          rasterizeTri<AddSpanInTempColumns>
                    (pdVar5 + -3,pdVar5,pdVar5 + 3,*param_3,param_5,param_5->bmin,param_5->bmax,
                     param_5->cs,dVar1,dVar2,param_6,iVar3,param_8,local_68);
          pdVar5 = pdVar5 + 9;
          param_3 = param_3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      AddSpanInTempColumns::TransferColumnsToHeightfield(local_68,param_5,(float)param_6);
    }
  }
  if ((param_1 != (rcContext *)0x0) && (param_1->m_timerEnabled != false)) {
    (**(code **)(param_1->_padding_ + 0x28))(param_1,2);
  }
  return;
}

// removeAdjacentNeighbours @ 1446c1ca0

void __cdecl removeAdjacentNeighbours(rcRegion *param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  iVar5 = (param_1->connections).m_size;
  uVar4 = 0;
  uVar8 = uVar4;
  if (0 < iVar5) {
    do {
      if (iVar5 < 2) {
        return;
      }
      piVar1 = (param_1->connections).m_data;
      iVar2 = (int)uVar8;
      if (*(int *)(uVar4 + (longlong)piVar1) == piVar1[(iVar2 + 1) % iVar5]) {
        uVar3 = uVar4;
        uVar7 = uVar8;
        if (iVar2 < iVar5 + -1) {
          do {
            piVar1 = (param_1->connections).m_data;
            uVar6 = (int)uVar7 + 1;
            *(undefined4 *)((longlong)piVar1 + uVar3) =
                 *(undefined4 *)((longlong)piVar1 + uVar3 + 4);
            iVar5 = (param_1->connections).m_size;
            uVar3 = uVar3 + 4;
            uVar7 = (ulonglong)uVar6;
          } while ((int)uVar6 < iVar5 + -1);
        }
        if (0 < iVar5) {
          iVar5 = iVar5 + -1;
          (param_1->connections).m_size = iVar5;
        }
      }
      else {
        uVar8 = (ulonglong)(iVar2 + 1);
        uVar4 = uVar4 + 4;
      }
    } while ((int)uVar8 < iVar5);
  }
  return;
}

// removeVertex @ 1446c1d50

bool __cdecl removeVertex(rcContext *param_1,rcPolyMesh *param_2,ushort param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  int *piVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint *puVar13;
  ushort *puVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ushort *puVar19;
  longlong lVar20;
  ushort *puVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  uint *puVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  uint *puVar31;
  longlong lVar32;
  int iVar33;
  int iVar34;
  ulonglong uVar35;
  undefined1 *puVar36;
  int iVar37;
  longlong lVar38;
  int iVar39;
  uint uVar40;
  int *piVar41;
  undefined1 *puVar42;
  longlong lVar43;
  int iVar44;
  int iVar45;
  int local_f8;
  int local_f4;
  ulonglong local_e0;
  uint local_d8;
  int local_b8;
  int local_b4;
  int local_b0 [2];
  uint *local_a8;
  longlong local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  undefined1 *local_80;
  int *local_78;
  int *local_70;
  longlong local_68;
  longlong local_60;
  undefined2 *local_58;
  uint *local_50;
  ushort *local_48;
  
  uVar4 = param_2->nvp;
  puVar42 = (undefined1 *)(longlong)(int)uVar4;
  uVar25 = 0;
  uVar11 = (ulonglong)param_3;
  iVar29 = 0;
  if (0 < param_2->npolys) {
    puVar14 = param_2->polys;
    uVar35 = (ulonglong)(uint)param_2->npolys;
    uVar10 = uVar25;
    do {
      uVar7 = uVar25;
      uVar16 = uVar25;
      uVar40 = uVar4;
      if (0 < (int)uVar4) {
        do {
          uVar40 = (uint)uVar16;
          if (puVar14[uVar7] == 0xffff) break;
          uVar7 = uVar7 + 1;
          uVar16 = (ulonglong)((uint)uVar16 + 1);
          uVar40 = uVar4;
        } while ((longlong)uVar7 < (longlong)puVar42);
      }
      uVar7 = uVar25;
      if (0 < (int)uVar40) {
        do {
          uVar28 = (uint)uVar10 + 1;
          if (puVar14[uVar7] != param_3) {
            uVar28 = (uint)uVar10;
          }
          uVar7 = uVar7 + 1;
          uVar10 = (ulonglong)uVar28;
        } while ((longlong)uVar7 < (longlong)(int)uVar40);
      }
      iVar29 = (int)uVar10;
      puVar14 = puVar14 + (int)(uVar4 * 2);
      uVar35 = uVar35 - 1;
    } while (uVar35 != 0);
  }
  local_f4 = 0;
  local_80 = puVar42;
  piVar8 = rcAlloc(iVar29 * uVar4 * 0x10,RC_ALLOC_TEMP);
  iVar29 = iVar29 * uVar4 * 4;
  local_98 = piVar8;
  if (piVar8 == (int *)0x0) {
    rcContext::log(param_1,RC_LOG_WARNING,"removeVertex: Out of memory \'edges\' (%d).");
    bVar6 = false;
  }
  else {
    piVar9 = rcAlloc(iVar29,RC_ALLOC_TEMP);
    local_78 = piVar9;
    if (piVar9 == (int *)0x0) {
      rcContext::log(param_1,RC_LOG_WARNING,"removeVertex: Out of memory \'hole\' (%d).");
      bVar6 = false;
    }
    else {
      local_88 = rcAlloc(iVar29,RC_ALLOC_TEMP);
      if (local_88 == (int *)0x0) {
        rcContext::log(param_1,RC_LOG_WARNING,"removeVertex: Out of memory \'hreg\' (%d).");
        bVar6 = false;
      }
      else {
        local_90 = rcAlloc(iVar29,RC_ALLOC_TEMP);
        if (local_90 == (int *)0x0) {
          rcContext::log(param_1,RC_LOG_WARNING,"removeVertex: Out of memory \'harea\' (%d).");
          bVar6 = false;
        }
        else {
          uVar10 = 0;
          iVar29 = param_2->npolys;
          puVar36 = puVar42;
          iVar22 = 0;
          if (0 < iVar29) {
            puVar36 = (undefined1 *)(longlong)(int)uVar4;
            puVar42 = puVar36;
            uVar35 = uVar10;
            uVar7 = uVar10;
            do {
              uVar16 = 0;
              iVar44 = (int)uVar7;
              iVar39 = (int)uVar10;
              puVar14 = param_2->polys + iVar39;
              iVar26 = (int)puVar36;
              uVar10 = uVar16;
              uVar7 = uVar16;
              iVar22 = iVar26;
              if (0 < (longlong)puVar42) {
                do {
                  if (puVar14[uVar10] == 0xffff) {
                    iVar29 = param_2->npolys;
                    iVar22 = (int)uVar7;
                    goto LAB_1446c1f9b;
                  }
                  uVar10 = uVar10 + 1;
                  uVar7 = (ulonglong)((int)uVar7 + 1);
                } while ((longlong)uVar10 < (longlong)puVar42);
                iVar29 = param_2->npolys;
              }
LAB_1446c1f9b:
              bVar6 = false;
              lVar32 = (longlong)iVar22;
              bVar5 = false;
              if (0 < iVar22) {
                do {
                  bVar6 = bVar5;
                  if (puVar14[uVar16] == param_3) {
                    bVar6 = true;
                  }
                  uVar16 = uVar16 + 1;
                  bVar5 = bVar6;
                } while ((longlong)uVar16 < lVar32);
                iVar29 = param_2->npolys;
              }
              if (bVar6) {
                if (0 < lVar32) {
                  lVar17 = (longlong)(iVar22 + -1) * 2;
                  puVar12 = (uint *)(local_98 + uVar25 * 4 + 2);
                  puVar19 = puVar14;
                  do {
                    if ((*puVar19 != param_3) &&
                       (*(ushort *)(lVar17 + (longlong)puVar14) != param_3)) {
                      puVar12[-2] = (uint)*(ushort *)(lVar17 + (longlong)puVar14);
                      local_f4 = local_f4 + 1;
                      uVar25 = uVar25 + 1;
                      puVar12[-1] = (uint)*puVar19;
                      *puVar12 = (uint)param_2->regs[uVar35];
                      puVar12[1] = (uint)param_2->areas[uVar35];
                      puVar12 = puVar12 + 4;
                    }
                    lVar17 = (longlong)puVar19 - (longlong)puVar14;
                    lVar32 = lVar32 + -1;
                    puVar19 = puVar19 + 1;
                  } while (lVar32 != 0);
                }
                memcpy(puVar14,param_2->polys + (param_2->npolys * 2 + -2) * iVar26,
                       (longlong)puVar42 * 2);
                memset(puVar14 + (longlong)puVar42,0xff,(longlong)puVar42 * 2);
                iVar44 = iVar44 + -1;
                puVar36 = (undefined1 *)(ulonglong)uVar4;
                iVar39 = iVar39 + uVar4 * -2;
                param_2->regs[uVar35] = param_2->regs[(longlong)param_2->npolys + -1];
                param_2->areas[uVar35] = param_2->areas[(longlong)param_2->npolys + -1];
                param_2->npolys = param_2->npolys + -1;
                iVar29 = param_2->npolys;
                uVar35 = uVar35 - 1;
                puVar42 = local_80;
              }
              uVar10 = (ulonglong)(iVar39 + uVar4 * 2);
              uVar7 = (ulonglong)(iVar44 + 1U);
              uVar35 = uVar35 + 1;
            } while ((int)(iVar44 + 1U) < iVar29);
            puVar42 = (undefined1 *)(ulonglong)uVar4;
            puVar36 = local_80;
            piVar9 = local_78;
            iVar22 = local_f4;
          }
          iVar29 = param_2->nverts;
          uVar40 = (uint)param_3;
          if ((int)uVar40 < iVar29) {
            lVar32 = uVar11 * 6;
            do {
              uVar28 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar28;
              *(undefined2 *)((longlong)param_2->verts + lVar32) =
                   *(undefined2 *)((longlong)param_2->verts + lVar32 + 6);
              *(undefined2 *)((longlong)param_2->verts + lVar32 + 2) =
                   *(undefined2 *)((longlong)param_2->verts + lVar32 + 8);
              *(undefined2 *)((longlong)param_2->verts + lVar32 + 4) =
                   *(undefined2 *)((longlong)param_2->verts + lVar32 + 10);
              iVar29 = param_2->nverts;
              lVar32 = lVar32 + 6;
            } while ((int)uVar28 < iVar29);
          }
          iVar26 = 0;
          param_2->nverts = iVar29 + -1;
          if (0 < param_2->npolys) {
            iVar29 = iVar26;
            do {
              puVar14 = param_2->polys + iVar26;
              uVar11 = 0;
              uVar25 = 0;
              if (0 < (longlong)puVar36) {
                do {
                  if (puVar14[uVar11] == 0xffff) goto LAB_1446c21aa;
                  uVar25 = (ulonglong)((int)uVar25 + 1);
                  uVar11 = uVar11 + 1;
                } while ((longlong)uVar11 < (longlong)puVar36);
              }
              uVar25 = (ulonglong)puVar42 & 0xffffffff;
LAB_1446c21aa:
              if (0 < (int)uVar25) {
                do {
                  if (param_3 < *puVar14) {
                    *puVar14 = *puVar14 - 1;
                  }
                  puVar14 = puVar14 + 1;
                  uVar25 = uVar25 - 1;
                } while (uVar25 != 0);
              }
              iVar29 = iVar29 + 1;
              iVar26 = iVar26 + (int)puVar42 * 2;
              piVar9 = local_78;
            } while (iVar29 < param_2->npolys);
          }
          lVar17 = (longlong)iVar22;
          piVar8 = local_98;
          lVar32 = lVar17;
          if (0 < iVar22) {
            do {
              if ((int)uVar40 < *piVar8) {
                *piVar8 = *piVar8 + -1;
              }
              if ((int)uVar40 < piVar8[1]) {
                piVar8[1] = piVar8[1] + -1;
              }
              lVar32 = lVar32 + -1;
              piVar8 = piVar8 + 4;
            } while (lVar32 != 0);
          }
          if (iVar22 == 0) {
            bVar6 = true;
          }
          else {
            uVar40 = 1;
            *piVar9 = *local_98;
            lVar30 = 1;
            lVar38 = 1;
            lVar32 = 1;
            *local_88 = local_98[2];
            *local_90 = local_98[3];
            while( true ) {
              lVar20 = 0;
              bVar6 = false;
              if (lVar17 < 1) break;
              lVar43 = lVar17 << 4;
              lVar23 = lVar20;
              do {
                iVar29 = *(int *)((longlong)local_98 + lVar20 + 4);
                iVar22 = *(int *)(lVar20 + (longlong)local_98);
                iVar26 = *(int *)((longlong)local_98 + lVar20 + 8);
                iVar39 = *(int *)((longlong)local_98 + lVar20 + 0xc);
                lVar18 = lVar30;
                if (*piVar9 == iVar29) {
                  for (; 0 < lVar18; lVar18 = lVar18 + -1) {
                    piVar9[lVar18] = piVar9[lVar18 + -1];
                  }
                  *piVar9 = iVar22;
                  for (lVar18 = lVar38; 0 < lVar18; lVar18 = lVar18 + -1) {
                    local_88[lVar18] = local_88[lVar18 + -1];
                  }
                  *local_88 = iVar26;
                  for (lVar18 = lVar32; 0 < lVar18; lVar18 = lVar18 + -1) {
                    local_90[lVar18] = local_90[lVar18 + -1];
                  }
                  *local_90 = iVar39;
LAB_1446c2342:
                  uVar40 = uVar40 + 1;
                  lVar17 = lVar17 + -1;
                  lVar23 = lVar23 + -1;
                  lVar30 = lVar30 + 1;
                  *(undefined4 *)(lVar20 + (longlong)local_98) =
                       *(undefined4 *)(lVar43 + -0x10 + (longlong)local_98);
                  lVar38 = lVar38 + 1;
                  *(undefined4 *)(lVar20 + 4 + (longlong)local_98) =
                       *(undefined4 *)(lVar43 + -0xc + (longlong)local_98);
                  *(undefined4 *)(lVar20 + 8 + (longlong)local_98) =
                       *(undefined4 *)(lVar43 + -8 + (longlong)local_98);
                  lVar18 = lVar43 + -4;
                  lVar43 = lVar43 + -0x10;
                  *(undefined4 *)(lVar20 + 0xc + (longlong)local_98) =
                       *(undefined4 *)(lVar18 + (longlong)local_98);
                  lVar20 = lVar20 + -0x10;
                  lVar32 = lVar32 + 1;
                  bVar6 = true;
                }
                else if (piVar9[lVar30 + -1] == iVar22) {
                  piVar9[lVar30] = iVar29;
                  local_88[lVar38] = iVar26;
                  local_90[lVar32] = iVar39;
                  goto LAB_1446c2342;
                }
                lVar23 = lVar23 + 1;
                lVar20 = lVar20 + 0x10;
              } while (lVar23 < lVar17);
              if ((!bVar6) || (lVar17 == 0)) break;
            }
            puVar12 = rcAlloc(uVar40 * 0xc,RC_ALLOC_TEMP);
            local_50 = puVar12;
            if (puVar12 == (uint *)0x0) {
              rcContext::log(param_1,RC_LOG_WARNING,"removeVertex: Out of memory \'tris\' (%d).");
              bVar6 = false;
            }
            else {
              piVar8 = rcAlloc(uVar40 << 4,RC_ALLOC_TEMP);
              if (piVar8 == (int *)0x0) {
                rcContext::log(param_1,RC_LOG_WARNING,"removeVertex: Out of memory \'tverts\' (%d)."
                              );
                bVar6 = false;
              }
              else {
                puVar13 = rcAlloc(uVar40 * 4,RC_ALLOC_TEMP);
                uVar28 = 0;
                lVar32 = (longlong)(int)uVar40;
                if (0 < (int)uVar40) {
                  puVar27 = puVar13;
                  puVar31 = (uint *)(piVar8 + 2);
                  do {
                    lVar17 = (longlong)
                             (*(int *)((longlong)puVar27 + ((longlong)piVar9 - (longlong)puVar13)) *
                             3);
                    puVar31[-2] = (uint)param_2->verts[lVar17];
                    puVar31[-1] = (uint)param_2->verts[lVar17 + 1];
                    *puVar31 = (uint)param_2->verts[lVar17 + 2];
                    puVar31[1] = 0;
                    *puVar27 = uVar28;
                    uVar28 = uVar28 + 1;
                    lVar32 = lVar32 + -1;
                    puVar27 = puVar27 + 1;
                    puVar31 = puVar31 + 4;
                  } while (lVar32 != 0);
                }
                local_f4 = 0;
                local_a8 = puVar12;
                if (0 < (int)uVar40) {
                  iVar22 = 1;
                  uVar11 = 1;
                  iVar29 = 0;
                  do {
                    uVar10 = 0;
                    iVar26 = iVar29 + 1;
                    uVar25 = uVar11;
                    if ((int)uVar40 <= iVar22) {
                      uVar25 = uVar10;
                    }
                    uVar28 = iVar29 + 2;
                    if ((int)uVar40 <= iVar26) {
                      uVar28 = 1;
                    }
                    if ((int)uVar28 < (int)uVar40) {
                      uVar10 = (ulonglong)uVar28;
                    }
                    bVar6 = inCone(iVar29,(int)uVar10,uVar40,piVar8,(int *)puVar13);
                    if ((bVar6) &&
                       (bVar6 = diagonalie(iVar29,(int)uVar10,uVar40,piVar8,(int *)puVar13), bVar6))
                    {
                      puVar13[uVar25] = puVar13[uVar25] | 0x80000000;
                    }
                    iVar22 = iVar22 + 1;
                    uVar11 = uVar11 + 1;
                    iVar29 = iVar26;
                  } while (iVar26 < (int)uVar40);
                }
                while (3 < (int)uVar40) {
                  lVar17 = 0;
                  lVar32 = -1;
                  iVar22 = -1;
                  iVar29 = -1;
                  iVar26 = 1;
                  do {
                    lVar30 = lVar17 + 1;
                    if ((int)uVar40 <= iVar26) {
                      lVar30 = 0;
                    }
                    if ((int)puVar13[lVar30] < 0) {
                      iVar39 = iVar26 + 1;
                      lVar30 = lVar30 + 1;
                      if ((int)uVar40 <= iVar26) {
                        iVar39 = 1;
                      }
                      if ((int)uVar40 <= iVar39) {
                        lVar30 = 0;
                      }
                      uVar11 = (ulonglong)((puVar13[lVar30] & 0xfffffff) << 2);
                      iVar39 = piVar8[uVar11 + 2] -
                               (piVar8 + ((puVar13[lVar17] & 0xfffffff) << 2))[2];
                      iVar44 = piVar8[uVar11] - piVar8[(puVar13[lVar17] & 0xfffffff) << 2];
                      iVar39 = iVar39 * iVar39 + iVar44 * iVar44;
                      if ((iVar22 < 0) || (iVar39 < iVar22)) {
                        iVar29 = iVar26 + -1;
                        lVar32 = lVar17;
                        iVar22 = iVar39;
                      }
                    }
                    lVar17 = lVar17 + 1;
                    bVar6 = iVar26 < (int)uVar40;
                    iVar26 = iVar26 + 1;
                  } while (bVar6);
                  if (lVar32 == -1) {
                    local_f4 = -local_f4;
                    goto LAB_1446c25b4;
                  }
                  uVar28 = iVar29 + 1;
                  local_e0 = lVar32 + 1;
                  if ((int)uVar40 <= (int)uVar28) {
                    local_e0 = 0;
                  }
                  uVar11 = (ulonglong)uVar28;
                  if ((int)uVar40 <= (int)uVar28) {
                    uVar11 = 0;
                  }
                  *local_a8 = puVar13[lVar32] & 0xfffffff;
                  local_d8 = (uint)uVar11;
                  iVar29 = local_d8 + 1;
                  local_a8[1] = puVar13[local_e0] & 0xfffffff;
                  if ((int)uVar40 <= iVar29) {
                    iVar29 = 0;
                  }
                  local_f4 = local_f4 + 1;
                  uVar28 = uVar40 - 1;
                  lVar32 = (longlong)(int)local_d8;
                  local_a8[2] = puVar13[iVar29] & 0xfffffff;
                  local_a8 = local_a8 + 3;
                  local_a0 = (ulonglong)uVar40 - 1;
                  if (lVar32 < local_a0) {
                    puVar12 = puVar13 + lVar32;
                    puVar27 = puVar12;
                    for (lVar32 = local_a0 - lVar32; puVar12 = puVar12 + 1, lVar32 != 0;
                        lVar32 = lVar32 + -1) {
                      *puVar27 = *puVar12;
                      puVar27 = puVar27 + 1;
                    }
                  }
                  if ((int)uVar28 <= (int)local_d8) {
                    local_e0 = 0;
                    local_d8 = 0;
                  }
                  uVar15 = local_d8;
                  if ((int)(local_d8 - 1) < 0) {
                    uVar15 = uVar28;
                  }
                  iVar29 = uVar15 - 1;
                  if ((int)(uVar15 - 2) < 0) {
                    uVar15 = uVar40;
                  }
                  bVar6 = inCone(uVar15 - 2,local_d8,uVar28,piVar8,(int *)puVar13);
                  if (bVar6) {
                    uVar11 = (ulonglong)(int)(uVar15 - 2);
                    piVar9 = piVar8 + ((puVar13[uVar11] & 0xfffffff) << 2);
                    uVar25 = 0;
                    piVar41 = piVar8 + ((puVar13[local_e0] & 0xfffffff) << 2);
                    local_b8 = 1;
                    lVar32 = local_a0;
                    do {
                      uVar10 = uVar25 + 1;
                      if ((int)uVar28 <= local_b8) {
                        uVar10 = 0;
                      }
                      if ((((uVar25 != uVar11) && (uVar10 != uVar11)) && (uVar25 != local_e0)) &&
                         (uVar10 != local_e0)) {
                        iVar22 = *piVar9;
                        uVar40 = (puVar13[uVar25] & 0xfffffff) << 2;
                        iVar26 = piVar8[uVar40];
                        piVar1 = piVar8 + uVar40;
                        piVar2 = piVar8 + ((puVar13[uVar10] & 0xfffffff) << 2);
                        lVar32 = local_a0;
                        local_70 = piVar1;
                        if (((((iVar22 != iVar26) || (piVar9[2] != piVar1[2])) &&
                             ((iVar39 = *piVar41, iVar39 != iVar26 || (piVar41[2] != piVar1[2]))))
                            && ((iVar44 = *piVar2, iVar22 != iVar44 || (piVar9[2] != piVar2[2]))))
                           && ((iVar39 != iVar44 || (piVar41[2] != piVar2[2])))) {
                          iVar34 = piVar1[2];
                          iVar24 = piVar9[2];
                          iVar45 = piVar41[2] - iVar24;
                          iVar33 = (piVar1[2] - iVar24) * (iVar39 - iVar22) -
                                   (iVar26 - iVar22) * iVar45;
                          local_b0[0] = iVar26;
                          if (iVar33 != 0) {
                            iVar45 = (piVar2[2] - iVar24) * (iVar39 - iVar22) -
                                     (iVar44 - iVar22) * iVar45;
                            if (iVar45 != 0) {
                              iVar37 = piVar2[2] - iVar34;
                              iVar22 = (iVar24 - iVar34) * (iVar44 - iVar26) -
                                       (iVar22 - iVar26) * iVar37;
                              if ((((iVar22 != 0) &&
                                   (iVar26 = (piVar41[2] - iVar34) * (iVar44 - iVar26) -
                                             (iVar39 - iVar26) * iVar37, iVar26 != 0)) &&
                                  ((char)((byte)((uint)iVar45 >> 0x18) ^
                                         (byte)((uint)iVar33 >> 0x18)) < '\0')) &&
                                 ((char)((byte)((uint)iVar26 >> 0x18) ^ (byte)((uint)iVar22 >> 0x18)
                                        ) < '\0')) goto LAB_1446c2a0b;
                            }
                          }
                          bVar6 = between(piVar9,piVar41,piVar1);
                          if (((bVar6) || (bVar6 = between(piVar9,piVar41,piVar2), bVar6)) ||
                             ((bVar6 = between(piVar1,piVar2,piVar9), bVar6 ||
                              (bVar6 = between(piVar1,piVar2,piVar41), lVar32 = local_a0, bVar6))))
                          goto LAB_1446c2a0b;
                        }
                      }
                      local_b8 = local_b8 + 1;
                      uVar25 = uVar25 + 1;
                    } while ((longlong)uVar25 < lVar32);
                    uVar40 = puVar13[iVar29] | 0x80000000;
                  }
                  else {
LAB_1446c2a0b:
                    uVar40 = puVar13[iVar29] & 0xfffffff;
                  }
                  iVar22 = local_d8 + 1;
                  puVar13[iVar29] = uVar40;
                  if ((int)uVar28 <= iVar22) {
                    iVar22 = 0;
                  }
                  bVar6 = inCone(iVar29,iVar22,uVar28,piVar8,(int *)puVar13);
                  if (bVar6) {
                    lVar17 = 0;
                    lVar32 = (longlong)iVar22;
                    piVar9 = piVar8 + ((uVar40 & 0xfffffff) << 2);
                    piVar41 = piVar8 + ((puVar13[lVar32] & 0xfffffff) << 2);
                    local_d8 = 1;
                    do {
                      lVar30 = lVar17 + 1;
                      if ((int)uVar28 <= (int)local_d8) {
                        lVar30 = 0;
                      }
                      if (((lVar17 != iVar29) && (lVar30 != iVar29)) &&
                         ((lVar17 != lVar32 && (lVar30 != lVar32)))) {
                        iVar22 = *piVar9;
                        uVar40 = (puVar13[lVar17] & 0xfffffff) << 2;
                        iVar26 = piVar8[uVar40];
                        piVar1 = piVar8 + uVar40;
                        piVar2 = piVar8 + ((puVar13[lVar30] & 0xfffffff) << 2);
                        if ((((iVar22 != iVar26) || (piVar9[2] != piVar1[2])) &&
                            ((iVar39 = *piVar41, iVar39 != iVar26 || (piVar41[2] != piVar1[2])))) &&
                           (((iVar44 = *piVar2, iVar22 != iVar44 || (piVar9[2] != piVar2[2])) &&
                            ((iVar39 != iVar44 || (piVar41[2] != piVar2[2])))))) {
                          iVar34 = piVar9[2];
                          local_b0[0] = iVar39 - iVar22;
                          iVar24 = piVar41[2] - iVar34;
                          iVar26 = (piVar1[2] - iVar34) * local_b0[0] - (iVar26 - iVar22) * iVar24;
                          if (iVar26 != 0) {
                            iVar24 = (piVar2[2] - iVar34) * local_b0[0] - (iVar44 - iVar22) * iVar24
                            ;
                            if (iVar24 != 0) {
                              iVar33 = piVar1[2];
                              iVar37 = piVar2[2] - iVar33;
                              iVar45 = *piVar1;
                              iVar22 = (iVar34 - iVar33) * (iVar44 - iVar45) -
                                       (iVar22 - iVar45) * iVar37;
                              if ((((iVar22 != 0) &&
                                   (iVar39 = (piVar41[2] - iVar33) * (iVar44 - iVar45) -
                                             (iVar39 - iVar45) * iVar37, iVar39 != 0)) &&
                                  ((char)((byte)((uint)iVar24 >> 0x18) ^
                                         (byte)((uint)iVar26 >> 0x18)) < '\0')) &&
                                 ((char)((byte)((uint)iVar39 >> 0x18) ^ (byte)((uint)iVar22 >> 0x18)
                                        ) < '\0')) goto LAB_1446c2c86;
                            }
                          }
                          bVar6 = between(piVar9,piVar41,piVar1);
                          if (((bVar6) || (bVar6 = between(piVar9,piVar41,piVar2), bVar6)) ||
                             ((bVar6 = between(piVar1,piVar2,piVar9), bVar6 ||
                              (bVar6 = between(piVar1,piVar2,piVar41), bVar6)))) goto LAB_1446c2c86;
                        }
                      }
                      local_d8 = local_d8 + 1;
                      lVar17 = lVar17 + 1;
                    } while (lVar17 < local_a0);
                    uVar40 = puVar13[local_e0] | 0x80000000;
                  }
                  else {
LAB_1446c2c86:
                    uVar40 = puVar13[local_e0] & 0xfffffff;
                  }
                  puVar13[local_e0] = uVar40;
                  uVar40 = uVar28;
                }
                *local_a8 = *puVar13 & 0xfffffff;
                local_a8[1] = puVar13[1] & 0xfffffff;
                local_a8[2] = puVar13[2] & 0xfffffff;
                local_f4 = local_f4 + 1;
LAB_1446c25b4:
                if (local_f4 < 0) {
                  local_f4 = -local_f4;
                  rcContext::log(param_1,RC_LOG_WARNING,
                                 "removeVertex: triangulate() returned bad results.");
                }
                puVar14 = rcAlloc((local_f4 + 1) * uVar4 * 2,RC_ALLOC_TEMP);
                if (puVar14 == (ushort *)0x0) {
                  rcContext::log(param_1,RC_LOG_ERROR,"removeVertex: Out of memory \'polys\' (%d).")
                  ;
                  bVar6 = false;
                }
                else {
                  puVar12 = rcAlloc(local_f4 * 2,RC_ALLOC_TEMP);
                  local_a8 = puVar12;
                  if (puVar12 == (uint *)0x0) {
                    rcContext::log(param_1,RC_LOG_ERROR,
                                   "removeVertex: Out of memory \'pregs\' (%d).");
                    bVar6 = false;
                  }
                  else {
                    puVar42 = rcAlloc(local_f4,RC_ALLOC_TEMP);
                    iVar29 = 0;
                    local_48 = puVar14 + (int)(local_f4 * uVar4);
                    local_80 = puVar42;
                    memset(puVar14,0xff,(longlong)(int)(local_f4 * uVar4) * 2);
                    lVar32 = (longlong)local_f4;
                    if (0 < lVar32) {
                      iVar22 = 0;
                      puVar27 = local_50 + 2;
                      do {
                        uVar40 = puVar27[-2];
                        if (((uVar40 != puVar27[-1]) && (uVar40 != *puVar27)) &&
                           (puVar27[-1] != *puVar27)) {
                          iVar29 = iVar29 + 1;
                          puVar14[iVar22] = *(ushort *)(local_78 + (int)uVar40);
                          puVar14[(longlong)iVar22 + 1] = *(ushort *)(local_78 + (int)puVar27[-1]);
                          puVar14[(longlong)iVar22 + 2] = *(ushort *)(local_78 + (int)*puVar27);
                          *(short *)puVar12 = (short)local_88[(int)puVar27[-2]];
                          puVar12 = (uint *)((longlong)puVar12 + 2);
                          *puVar42 = (char)local_90[(int)puVar27[-2]];
                          puVar42 = puVar42 + 1;
                          iVar22 = iVar22 + uVar4;
                        }
                        puVar27 = puVar27 + 3;
                        lVar32 = lVar32 + -1;
                      } while (lVar32 != 0);
                      puVar12 = local_a8;
                      if (iVar29 != 0) {
                        piVar9 = (int *)(longlong)(int)uVar4;
                        if (3 < (int)uVar4) {
                          iVar22 = iVar29 + -1;
                          lVar32 = (longlong)iVar29;
                          local_f8 = iVar22 * uVar4;
                          local_58 = (undefined2 *)((longlong)local_a8 + lVar32 * 2);
                          local_70 = piVar9;
                          while( true ) {
                            local_58 = local_58 + -1;
                            iVar26 = 0;
                            iVar39 = 0;
                            local_d8 = 0;
                            uVar40 = 0;
                            local_b4 = 0;
                            iVar44 = 0;
                            local_b8 = 0;
                            lVar17 = 0;
                            iVar34 = 0;
                            iVar24 = 0;
                            local_60 = lVar32;
                            if (iVar22 < 1) break;
                            local_68 = 1;
                            puVar19 = puVar14;
                            piVar41 = local_70;
                            do {
                              lVar30 = local_68;
                              iVar45 = iVar39;
                              iVar33 = iVar24;
                              iVar37 = iVar44;
                              if (local_68 < lVar32) {
                                do {
                                  iVar33 = iVar33 + 1;
                                  iVar26 = getPolyMergeValue(puVar19,puVar14 + iVar33 * (int)piVar9,
                                                             param_2->verts,local_b0,
                                                             (int *)&local_a0,(int)piVar9);
                                  iVar39 = iVar45;
                                  if (iVar45 < iVar26) {
                                    local_b4 = local_b0[0];
                                    local_b8 = (int)local_a0;
                                    iVar39 = iVar26;
                                    local_d8 = iVar24;
                                  }
                                  piVar9 = (int *)(ulonglong)uVar4;
                                  iVar44 = iVar33;
                                  lVar32 = lVar30;
                                  if (iVar26 <= iVar45) {
                                    iVar44 = iVar37;
                                    lVar32 = lVar17;
                                  }
                                  lVar17 = lVar32;
                                  lVar30 = lVar30 + 1;
                                  piVar41 = local_70;
                                  lVar32 = local_60;
                                  iVar26 = local_b4;
                                  iVar45 = iVar39;
                                  iVar34 = local_b8;
                                  uVar40 = local_d8;
                                  iVar37 = iVar44;
                                } while (lVar30 < local_60);
                              }
                              puVar19 = puVar19 + (longlong)piVar41;
                              local_68 = local_68 + 1;
                              iVar24 = iVar24 + 1;
                            } while (iVar24 < iVar22);
                            if (iVar39 < 1) break;
                            iVar39 = (int)piVar9;
                            mergePolys(puVar14 + (int)(uVar40 * iVar39),puVar14 + iVar44 * iVar39,
                                       iVar26,iVar34,local_48,iVar39);
                            memcpy(puVar14 + iVar44 * iVar39,puVar14 + local_f8,
                                   (longlong)piVar41 * 2);
                            iVar22 = iVar22 + -1;
                            piVar9 = (int *)(ulonglong)uVar4;
                            iVar29 = iVar29 + -1;
                            local_f8 = local_f8 - uVar4;
                            *(undefined2 *)((longlong)local_a8 + lVar17 * 2) = *local_58;
                            lVar30 = lVar32 + -1;
                            lVar32 = lVar32 + -1;
                            local_80[lVar17] = local_80[lVar30];
                          }
                        }
                        puVar12 = local_a8;
                        if (0 < iVar29) {
                          iVar22 = 0;
                          lVar32 = 0;
                          iVar26 = (int)piVar9;
                          do {
                            if (param_4 <= param_2->npolys) break;
                            puVar19 = param_2->polys + param_2->npolys * (int)piVar9 * 2;
                            memset(puVar19,0xff,(longlong)iVar26 * 4);
                            piVar9 = (int *)(longlong)(int)uVar4;
                            lVar17 = 0;
                            if (((int)uVar4 < 1) || (uVar4 < 8)) {
LAB_1446c3105:
                              if (0 < (longlong)piVar9) {
                                puVar21 = puVar14 + iVar22;
                                do {
                                  uVar3 = *puVar21;
                                  puVar21 = puVar21 + 1;
                                  puVar19[lVar17] = uVar3;
                                  lVar17 = lVar17 + 1;
                                } while (lVar17 < (longlong)piVar9);
                              }
                            }
                            else {
                              if ((puVar19 <= puVar14 + (int)(iVar22 + (uVar4 - 1))) &&
                                 (puVar14 + iVar22 <= puVar19 + (int)(uVar4 - 1)))
                              goto LAB_1446c3105;
                              memcpy(puVar19,puVar14 + iVar22,(longlong)iVar26 * 2);
                              piVar9 = (int *)(ulonglong)uVar4;
                            }
                            param_2->regs[param_2->npolys] =
                                 *(ushort *)((longlong)puVar12 + lVar32 * 2);
                            param_2->areas[param_2->npolys] = local_80[lVar32];
                            iVar39 = param_2->npolys + 1;
                            param_2->npolys = iVar39;
                            if (param_4 < iVar39) {
                              rcContext::log(param_1,RC_LOG_ERROR,
                                             "removeVertex: Too many polygons %d (max:%d).");
                              bVar6 = false;
                              goto LAB_1446c319a;
                            }
                            iVar22 = iVar22 + (int)piVar9;
                            lVar32 = lVar32 + 1;
                          } while (lVar32 < iVar29);
                        }
                      }
                    }
                    bVar6 = true;
LAB_1446c319a:
                    rcFree(local_80);
                  }
                  rcFree(puVar12);
                }
                rcFree(puVar14);
                rcFree(puVar13);
                puVar12 = local_50;
                piVar9 = local_78;
              }
              rcFree(piVar8);
            }
            rcFree(puVar12);
          }
        }
        rcFree(local_90);
        piVar8 = local_98;
      }
      rcFree(local_88);
    }
    rcFree(piVar9);
  }
  rcFree(piVar8);
  return bVar6;
}

// replaceNeighbour @ 1446c3240

void __cdecl replaceNeighbour(rcRegion *param_1,ushort param_2,ushort param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  bVar3 = false;
  uVar7 = uVar9;
  uVar8 = uVar9;
  bVar4 = false;
  if (0 < (param_1->connections).m_size) {
    do {
      bVar3 = bVar4;
      piVar1 = (param_1->connections).m_data;
      if (*(uint *)((longlong)piVar1 + uVar8) == (uint)param_2) {
        *(uint *)((longlong)piVar1 + uVar8) = (uint)param_3;
        bVar3 = true;
      }
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
      uVar8 = uVar8 + 4;
      bVar4 = bVar3;
    } while ((int)uVar5 < (param_1->connections).m_size);
  }
  uVar7 = uVar9;
  uVar8 = uVar9;
  if (0 < (param_1->floors).m_size) {
    do {
      piVar1 = (param_1->floors).m_data;
      if (*(uint *)((longlong)piVar1 + uVar8) == (uint)param_2) {
        *(uint *)((longlong)piVar1 + uVar8) = (uint)param_3;
      }
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
      uVar8 = uVar8 + 4;
    } while ((int)uVar5 < (param_1->floors).m_size);
  }
  if ((bVar3) && (iVar6 = (param_1->connections).m_size, uVar7 = uVar9, 0 < iVar6)) {
    do {
      if (iVar6 < 2) {
        return;
      }
      piVar1 = (param_1->connections).m_data;
      iVar2 = (int)uVar7;
      if (*(int *)(uVar9 + (longlong)piVar1) == piVar1[(iVar2 + 1) % iVar6]) {
        uVar8 = uVar9;
        uVar10 = uVar7;
        if (iVar2 < iVar6 + -1) {
          do {
            piVar1 = (param_1->connections).m_data;
            uVar5 = (int)uVar10 + 1;
            *(undefined4 *)((longlong)piVar1 + uVar8) =
                 *(undefined4 *)((longlong)piVar1 + uVar8 + 4);
            iVar6 = (param_1->connections).m_size;
            uVar8 = uVar8 + 4;
            uVar10 = (ulonglong)uVar5;
          } while ((int)uVar5 < iVar6 + -1);
        }
        if (0 < iVar6) {
          iVar6 = iVar6 + -1;
          (param_1->connections).m_size = iVar6;
        }
      }
      else {
        uVar7 = (ulonglong)(iVar2 + 1);
        uVar9 = uVar9 + 4;
      }
    } while ((int)uVar7 < iVar6);
  }
  return;
}

// resizeGrow @ 1446c3350

bool __thiscall
rcScopedDelete<rcLayerSweepSpan>::resizeGrow(rcScopedDelete<rcLayerSweepSpan> *this,int param_1)

{
  rcLayerSweepSpan *prVar1;
  
  if (this->size < param_1) {
    prVar1 = rcAlloc(param_1 * 6,RC_ALLOC_TEMP);
    if ((param_1 != 0) && (prVar1 != (rcLayerSweepSpan *)0x0)) {
      rcMemCpy(prVar1,this->ptr,this->size * 6);
    }
    rcFree(this->ptr);
    this->ptr = prVar1;
    this->size = param_1;
  }
  return this->ptr != (rcLayerSweepSpan *)0x0;
}

// triangulate @ 1446c33d0

int __cdecl triangulate(int param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  int local_res8;
  
  local_res8 = 0;
  if (0 < param_1) {
    iVar10 = 1;
    uVar18 = 1;
    iVar16 = 0;
    do {
      uVar8 = 0;
      iVar6 = iVar16 + 1;
      uVar17 = iVar16 + 2;
      uVar15 = uVar18;
      if (param_1 <= iVar10) {
        uVar15 = uVar8;
      }
      if (param_1 <= iVar6) {
        uVar17 = 1;
      }
      if ((int)uVar17 < param_1) {
        uVar8 = (ulonglong)uVar17;
      }
      bVar2 = inCone(iVar16,(int)uVar8,param_1,param_2,param_3);
      if ((bVar2) && (bVar2 = diagonalie(iVar16,(int)uVar8,param_1,param_2,param_3), bVar2)) {
        param_3[uVar15] = param_3[uVar15] | 0x80000000;
      }
      iVar10 = iVar10 + 1;
      uVar18 = uVar18 + 1;
      iVar16 = iVar6;
    } while (iVar6 < param_1);
  }
  while( true ) {
    if (param_1 < 4) {
      *param_4 = *param_3 & 0xfffffff;
      param_4[1] = param_3[1] & 0xfffffff;
      param_4[2] = param_3[2] & 0xfffffff;
      return local_res8 + 1;
    }
    lVar14 = 0;
    lVar11 = -1;
    iVar10 = -1;
    iVar16 = iVar10;
    iVar6 = 1;
    do {
      lVar5 = lVar14 + 1;
      if (param_1 <= iVar6) {
        lVar5 = 0;
      }
      if (param_3[lVar5] < 0) {
        iVar3 = iVar6 + 1;
        lVar5 = lVar5 + 1;
        if (param_1 <= iVar6) {
          iVar3 = 1;
        }
        if (param_1 <= iVar3) {
          lVar5 = 0;
        }
        uVar18 = (ulonglong)((param_3[lVar5] & 0xfffffffU) << 2);
        iVar3 = param_2[uVar18 + 2] - (param_2 + ((param_3[lVar14] & 0xfffffffU) << 2))[2];
        iVar7 = param_2[uVar18] - param_2[(param_3[lVar14] & 0xfffffffU) << 2];
        iVar3 = iVar3 * iVar3 + iVar7 * iVar7;
        if ((iVar10 < 0) || (iVar3 < iVar10)) {
          iVar16 = iVar6 + -1;
          lVar11 = lVar14;
          iVar10 = iVar3;
        }
      }
      uVar18 = 0;
      lVar14 = lVar14 + 1;
      bVar2 = iVar6 < param_1;
      iVar6 = iVar6 + 1;
    } while (bVar2);
    if (lVar11 == -1) break;
    uVar17 = iVar16 + 1;
    uVar15 = lVar11 + 1;
    if (param_1 <= (int)uVar17) {
      uVar15 = uVar18;
    }
    uVar8 = (ulonglong)uVar17;
    if (param_1 <= (int)uVar17) {
      uVar8 = uVar18;
    }
    *param_4 = param_3[lVar11] & 0xfffffff;
    uVar17 = (uint)uVar8;
    param_4[1] = param_3[uVar15] & 0xfffffff;
    uVar8 = (ulonglong)(uVar17 + 1);
    if (param_1 <= (int)(uVar17 + 1)) {
      uVar8 = uVar18;
    }
    local_res8 = local_res8 + 1;
    uVar9 = param_1 - 1;
    lVar11 = (longlong)(int)uVar17;
    param_4[2] = param_3[(int)uVar8] & 0xfffffff;
    param_4 = param_4 + 3;
    if (lVar11 < (longlong)((ulonglong)(uint)param_1 - 1)) {
      piVar12 = param_3 + lVar11;
      piVar13 = piVar12;
      for (lVar11 = ((ulonglong)(uint)param_1 - 1) - lVar11; piVar12 = piVar12 + 1, lVar11 != 0;
          lVar11 = lVar11 + -1) {
        *piVar13 = *piVar12;
        piVar13 = piVar13 + 1;
      }
    }
    uVar18 = 0;
    uVar1 = 0;
    if ((int)uVar17 < (int)uVar9) {
      uVar18 = uVar15;
      uVar1 = uVar17;
    }
    uVar17 = uVar1;
    if ((int)(uVar1 - 1) < 0) {
      uVar17 = uVar9;
    }
    uVar4 = uVar17;
    if ((int)(uVar17 - 2) < 0) {
      uVar4 = param_1;
    }
    bVar2 = inCone(uVar4 - 2,uVar1,uVar9,param_2,param_3);
    if ((bVar2) && (bVar2 = diagonalie(uVar4 - 2,uVar1,uVar9,param_2,param_3), bVar2)) {
      lVar11 = (longlong)(int)uVar17 + -1;
      uVar4 = param_3[lVar11] | 0x80000000;
    }
    else {
      lVar11 = (longlong)(int)uVar17 + -1;
      uVar4 = param_3[lVar11] & 0xfffffff;
    }
    param_3[lVar11] = uVar4;
    iVar16 = uVar1 + 1;
    if ((int)uVar9 <= (int)(uVar1 + 1)) {
      iVar16 = 0;
    }
    bVar2 = inCone(uVar17 - 1,iVar16,uVar9,param_2,param_3);
    if ((bVar2) && (bVar2 = diagonalie(uVar17 - 1,iVar16,uVar9,param_2,param_3), bVar2)) {
      uVar17 = param_3[uVar18] | 0x80000000;
    }
    else {
      uVar17 = param_3[uVar18] & 0xfffffff;
    }
    param_3[uVar18] = uVar17;
    param_1 = uVar9;
  }
  return -local_res8;
}

// walkContour @ 1446c3720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
walkContour(int param_1,int param_2,int param_3,int param_4,rcCompactHeightfield *param_5,
           ushort *param_6,rcIntArray *param_7)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint local_res8;
  int local_res10;
  ushort local_res18;
  int local_res20;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar6 = _UNK_150d9fb28;
  uVar5 = ___xmm_ffffffff000000000000000100000000;
  uVar4 = _UNK_150ae1718;
  uVar3 = ___xmm_000000000000000100000000ffffffff;
  uVar15 = (ulonglong)param_3;
  uVar10 = 0;
  uVar12 = param_5->spans[uVar15].con >> ((char)param_4 * '\b' & 0x1fU) & 0xff;
  local_res18 = 0;
  if (uVar12 != 0xff) {
    local_90 = ___xmm_ffffffff000000000000000100000000;
    uStack_88 = _UNK_150d9fb28;
    local_80 = ___xmm_000000000000000100000000ffffffff;
    uStack_78 = _UNK_150ae1718;
    local_res18 = param_6[((uint)param_5->cells
                                 [(*(int *)((longlong)&local_90 + (ulonglong)(param_4 & 3) * 4) +
                                  param_2) * param_5->width +
                                  *(int *)((longlong)&local_80 + (ulonglong)(param_4 & 3) * 4) +
                                  param_1] & 0xffffff) + uVar12];
  }
  rcIntArray::resize(param_7,param_7->m_size + 1);
  uVar8 = (ulonglong)(uint)param_1;
  local_res20 = 1;
  param_7->m_data[(longlong)param_7->m_size + -1] = (uint)local_res18;
  uVar12 = param_4;
  local_res8 = param_1;
  local_res10 = param_2;
  do {
    uVar14 = param_5->spans[(int)uVar15].con >> ((char)uVar12 * '\b' & 0x1fU) & 0xff;
    bVar7 = isSolidEdge(param_5,param_6,(int)uVar8,local_res10,(int)uVar15,uVar12);
    if (bVar7) {
      uVar9 = 0;
      if (uVar14 != 0xff) {
        local_80 = uVar5;
        uStack_78 = uVar6;
        local_90 = uVar3;
        uStack_88 = uVar4;
        uVar9 = param_6[((uint)param_5->cells
                               [(*(int *)((longlong)&local_80 + (ulonglong)(uVar12 & 3) * 4) +
                                local_res10) * param_5->width +
                                *(int *)((longlong)&local_90 + (ulonglong)(uVar12 & 3) * 4) +
                                (int)uVar8] & 0xffffff) + uVar14];
      }
      if (uVar9 != local_res18) {
        rcIntArray::resize(param_7,param_7->m_size + 1);
        uVar8 = (ulonglong)local_res8;
        param_7->m_data[(longlong)param_7->m_size + -1] = (uint)uVar9;
        local_res18 = uVar9;
      }
      iVar13 = 1;
    }
    else {
      local_80 = uVar3;
      uStack_78 = uVar4;
      lVar1 = (ulonglong)(uVar12 & 3) * 4;
      local_res8 = (int)uVar8 + *(int *)((longlong)&local_80 + lVar1);
      uVar8 = (ulonglong)local_res8;
      local_80 = uVar5;
      uStack_78 = uVar6;
      local_res10 = local_res10 + *(int *)((longlong)&local_80 + lVar1);
      if (uVar14 == 0xff) {
        return;
      }
      iVar13 = 3;
      uVar15 = (ulonglong)
               (((uint)param_5->cells[(int)(local_res10 * param_5->width + local_res8)] & 0xffffff)
               + uVar14);
    }
    uVar12 = uVar12 + iVar13 & 3;
  } while (((param_3 != (int)uVar15) || (param_4 != uVar12)) &&
          (local_res20 = local_res20 + 1, local_res20 < 40000));
  iVar13 = param_7->m_size;
  uVar15 = uVar10;
  if (1 < iVar13) {
    do {
      iVar2 = (int)uVar10;
      if (*(int *)((longlong)param_7->m_data + uVar15) == param_7->m_data[(iVar2 + 1) % iVar13]) {
        uVar8 = uVar15;
        uVar11 = uVar10;
        if (iVar2 < iVar13 + -1) {
          do {
            uVar12 = (int)uVar11 + 1;
            *(undefined4 *)((longlong)param_7->m_data + uVar8) =
                 *(undefined4 *)((longlong)param_7->m_data + uVar8 + 4);
            iVar13 = param_7->m_size;
            uVar8 = uVar8 + 4;
            uVar11 = (ulonglong)uVar12;
          } while ((int)uVar12 < iVar13 + -1);
        }
        if (0 < iVar13) {
          iVar13 = iVar13 + -1;
          param_7->m_size = iVar13;
        }
      }
      else {
        uVar10 = (ulonglong)(iVar2 + 1);
        uVar15 = uVar15 + 4;
      }
    } while ((int)uVar10 < iVar13);
  }
  return;
}

// walkContour @ 1446c3a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
RecastRegionFunc::walkContour
          (int param_1,int param_2,int param_3,int param_4,rcCompactHeightfield *param_5,
          ushort *param_6,rcIntArray *param_7)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint local_res8;
  int local_res10;
  ushort local_res18;
  int local_res20;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar6 = _UNK_150d9fb28;
  uVar5 = ___xmm_ffffffff000000000000000100000000;
  uVar4 = _UNK_150ae1718;
  uVar3 = ___xmm_000000000000000100000000ffffffff;
  uVar15 = (ulonglong)param_3;
  uVar10 = 0;
  uVar12 = param_5->spans[uVar15].con >> ((char)param_4 * '\b' & 0x1fU) & 0xff;
  local_res18 = 0;
  if (uVar12 != 0xff) {
    local_90 = ___xmm_ffffffff000000000000000100000000;
    uStack_88 = _UNK_150d9fb28;
    local_80 = ___xmm_000000000000000100000000ffffffff;
    uStack_78 = _UNK_150ae1718;
    local_res18 = param_6[((uint)param_5->cells
                                 [(*(int *)((longlong)&local_90 + (ulonglong)(param_4 & 3) * 4) +
                                  param_2) * param_5->width +
                                  *(int *)((longlong)&local_80 + (ulonglong)(param_4 & 3) * 4) +
                                  param_1] & 0xffffff) + uVar12];
  }
  rcIntArray::resize(param_7,param_7->m_size + 1);
  uVar8 = (ulonglong)(uint)param_1;
  local_res20 = 1;
  param_7->m_data[(longlong)param_7->m_size + -1] = (uint)local_res18;
  uVar12 = param_4;
  local_res8 = param_1;
  local_res10 = param_2;
  do {
    uVar14 = param_5->spans[(int)uVar15].con >> ((char)uVar12 * '\b' & 0x1fU) & 0xff;
    bVar7 = isSolidEdge(param_5,param_6,(int)uVar8,local_res10,(int)uVar15,uVar12);
    if (bVar7) {
      uVar9 = 0;
      if (uVar14 != 0xff) {
        local_80 = uVar5;
        uStack_78 = uVar6;
        local_90 = uVar3;
        uStack_88 = uVar4;
        uVar9 = param_6[((uint)param_5->cells
                               [(*(int *)((longlong)&local_80 + (ulonglong)(uVar12 & 3) * 4) +
                                local_res10) * param_5->width +
                                *(int *)((longlong)&local_90 + (ulonglong)(uVar12 & 3) * 4) +
                                (int)uVar8] & 0xffffff) + uVar14];
      }
      if (uVar9 != local_res18) {
        rcIntArray::resize(param_7,param_7->m_size + 1);
        uVar8 = (ulonglong)local_res8;
        param_7->m_data[(longlong)param_7->m_size + -1] = (uint)uVar9;
        local_res18 = uVar9;
      }
      iVar13 = 1;
    }
    else {
      local_80 = uVar3;
      uStack_78 = uVar4;
      lVar1 = (ulonglong)(uVar12 & 3) * 4;
      local_res8 = (int)uVar8 + *(int *)((longlong)&local_80 + lVar1);
      uVar8 = (ulonglong)local_res8;
      local_80 = uVar5;
      uStack_78 = uVar6;
      local_res10 = local_res10 + *(int *)((longlong)&local_80 + lVar1);
      if (uVar14 == 0xff) {
        return;
      }
      iVar13 = 3;
      uVar15 = (ulonglong)
               (((uint)param_5->cells[(int)(local_res10 * param_5->width + local_res8)] & 0xffffff)
               + uVar14);
    }
    uVar12 = uVar12 + iVar13 & 3;
  } while (((param_3 != (int)uVar15) || (param_4 != uVar12)) &&
          (local_res20 = local_res20 + 1, local_res20 < 40000));
  iVar13 = param_7->m_size;
  uVar15 = uVar10;
  if (1 < iVar13) {
    do {
      iVar2 = (int)uVar10;
      if (*(int *)((longlong)param_7->m_data + uVar15) == param_7->m_data[(iVar2 + 1) % iVar13]) {
        uVar8 = uVar15;
        uVar11 = uVar10;
        if (iVar2 < iVar13 + -1) {
          do {
            uVar12 = (int)uVar11 + 1;
            *(undefined4 *)((longlong)param_7->m_data + uVar8) =
                 *(undefined4 *)((longlong)param_7->m_data + uVar8 + 4);
            iVar13 = param_7->m_size;
            uVar8 = uVar8 + 4;
            uVar11 = (ulonglong)uVar12;
          } while ((int)uVar12 < iVar13 + -1);
        }
        if (0 < iVar13) {
          iVar13 = iVar13 + -1;
          param_7->m_size = iVar13;
        }
      }
      else {
        uVar10 = (ulonglong)(iVar2 + 1);
        uVar15 = uVar15 + 4;
      }
    } while ((int)uVar10 < iVar13);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableSpanHeightRasterizationFix'' @ 15036ea50

void __cdecl
UE::Recast::Private::_dynamic_atexit_destructor_for__CVarEnableSpanHeightRasterizationFix__(void)

{
  CVarEnableSpanHeightRasterizationFix._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableSpanHeightRasterizationFix);
  return;
}

