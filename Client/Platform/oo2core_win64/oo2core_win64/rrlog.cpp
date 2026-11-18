// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 12

// rrLog_Disable @ 14f32c1b0

void __cdecl oo2::rrLog_Disable(void)

{
  g_fp_OodleCore_Plugin_Printf = (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0;
  return;
}

// rrOutputDebugString @ 14f32c1d0

void __stdcall oo2::rrOutputDebugString(LPCSTR lpOutputString)

{
                    /* WARNING: Could not recover jumptable at 0x00014f32c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OutputDebugStringA(lpOutputString);
  return;
}

// rrclampcallback @ 14f32c1e0

char * __cdecl oo2::rrclampcallback(char *param_1,void *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = *(int *)((longlong)param_2 + 8);
  if (iVar3 < param_3) {
    param_3 = iVar3;
  }
  if (param_3 != 0) {
    pcVar2 = *(char **)param_2;
    if (param_1 != pcVar2) {
      pcVar4 = param_1 + param_3;
      do {
        cVar1 = *param_1;
        param_1 = param_1 + 1;
        *pcVar2 = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (param_1 < pcVar4);
      pcVar2 = *(char **)param_2;
      iVar3 = *(int *)((longlong)param_2 + 8);
    }
    iVar3 = iVar3 - param_3;
    *(char **)param_2 = pcVar2 + param_3;
    *(int *)((longlong)param_2 + 8) = iVar3;
  }
  if (0x1ff < iVar3) {
    return *(char **)param_2;
  }
  return (char *)((longlong)param_2 + 0xc);
}

// rrraise_to_power10 @ 14f32c260

void __cdecl oo2::rrraise_to_power10(double *param_1,double *param_2,double param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  uint5 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double local_res10;
  
  if ((uint)param_4 < 0x17) {
    local_res10 = (double)(((ulonglong)param_3 >> 0x18 & 0xfffffffff8) << 0x18);
    dVar2 = local_res10;
    lVar10 = (longlong)param_4;
    dVar13 = param_3 - local_res10;
    dVar3 = rrbot[lVar10] * param_3;
    local_res10 = (double)(((ulonglong)
                            CONCAT14(*(undefined1 *)((longlong)rrbot + lVar10 * 8 + 7),
                                     CONCAT13(*(undefined1 *)((longlong)rrbot + lVar10 * 8 + 6),
                                              CONCAT12(*(undefined1 *)
                                                        ((longlong)rrbot + lVar10 * 8 + 5),
                                                       CONCAT11(*(undefined1 *)
                                                                 ((longlong)rrbot + lVar10 * 8 + 4),
                                                                *(undefined1 *)
                                                                 ((longlong)rrbot + lVar10 * 8 + 3))
                                                      ))) & 0xfffffffff8) << 0x18);
    dVar11 = rrbot[lVar10] - local_res10;
    dVar2 = (local_res10 * dVar2 - dVar3) + dVar11 * dVar2 + dVar13 * local_res10 + dVar11 * dVar13;
  }
  else {
    iVar9 = (param_4 ^ param_4 >> 0x1f) - (param_4 >> 0x1f);
    dVar2 = 0.0;
    iVar8 = iVar9 * 0x2c9 >> 0xe;
    if (0xd < iVar8) {
      iVar8 = 0xd;
    }
    iVar9 = iVar9 + iVar8 * -0x17;
    dVar3 = param_3;
    if (param_4 < 0) {
      if (iVar9 != 0) {
        local_res10 = (double)(((ulonglong)param_3 >> 0x18 & 0xfffffffff8) << 0x18);
        dVar2 = local_res10;
        lVar10 = (longlong)iVar9;
        dVar11 = param_3 - local_res10;
        local_res10 = (double)(((ulonglong)
                                CONCAT14((&DAT_1531d952f)[lVar10 * 8],
                                         CONCAT13((&DAT_1531d952e)[lVar10 * 8],
                                                  CONCAT12((&DAT_1531d952d)[lVar10 * 8],
                                                           CONCAT11((&DAT_1531d952c)[lVar10 * 8],
                                                                    (&DAT_1531d952b)[lVar10 * 8]))))
                               & 0xfffffffff8) << 0x18);
        dVar13 = *(double *)(&DAT_1531d9528 + lVar10 * 8) - local_res10;
        dVar3 = *(double *)(&DAT_1531d9528 + lVar10 * 8) * param_3;
        dVar2 = (local_res10 * dVar2 - dVar3) + dVar13 * dVar2 + dVar11 * local_res10 +
                dVar13 * dVar11 + param_3 * rrnegbot[lVar10 + 0x15];
      }
      if (iVar8 == 0) goto LAB_14f32cbe6;
      lVar10 = (longlong)iVar8;
      dVar13 = dVar2 + dVar3;
      dVar11 = *(double *)(&UNK_1531d96f8 + lVar10 * 8);
      uVar14 = SUB84(dVar11,0);
      uVar15 = (undefined4)((ulonglong)dVar11 >> 0x20);
      dVar2 = dVar2 - (dVar13 - dVar3);
      uVar5 = (uint5)((ulonglong)dVar13 >> 0x18);
      uVar4 = CONCAT13((&UNK_1531d96fe)[lVar10 * 8],
                       CONCAT12((&UNK_1531d96fd)[lVar10 * 8],
                                CONCAT11((&UNK_1531d96fc)[lVar10 * 8],(&UNK_1531d96fb)[lVar10 * 8]))
                      );
      uVar6 = (&UNK_1531d96ff)[lVar10 * 8];
      dVar3 = dVar11 * dVar13;
      dVar1 = dVar13 * *(double *)(&UNK_1531d97d8 + lVar10 * 8);
    }
    else {
      if (iVar9 != 0) {
        iVar7 = iVar9;
        if (0x16 < iVar9) {
          iVar7 = 0x16;
        }
        lVar10 = (longlong)iVar7;
        local_res10 = (double)(((ulonglong)param_3 >> 0x18 & 0xfffffffff8) << 0x18);
        dVar2 = local_res10;
        local_res10 = (double)(((ulonglong)
                                CONCAT14(*(undefined1 *)((longlong)rrbot + lVar10 * 8 + 7),
                                         CONCAT13(*(undefined1 *)((longlong)rrbot + lVar10 * 8 + 6),
                                                  CONCAT12(*(undefined1 *)
                                                            ((longlong)rrbot + lVar10 * 8 + 5),
                                                           CONCAT11(*(undefined1 *)
                                                                     ((longlong)rrbot +
                                                                     lVar10 * 8 + 4),
                                                                    *(undefined1 *)
                                                                     ((longlong)rrbot +
                                                                     lVar10 * 8 + 3))))) &
                               0xfffffffff8) << 0x18);
        dVar3 = rrbot[lVar10] * param_3;
        dVar11 = rrbot[lVar10] - local_res10;
        dVar2 = (local_res10 * dVar2 - dVar3) + dVar11 * dVar2 + (param_3 - dVar2) * local_res10 +
                dVar11 * (param_3 - dVar2);
        if (iVar9 - iVar7 != 0) {
          lVar10 = (longlong)(iVar9 - iVar7);
          dVar13 = dVar2 + dVar3;
          dVar11 = rrbot[lVar10];
          dVar12 = dVar13 - dVar3;
          local_res10 = (double)(((ulonglong)dVar13 >> 0x18 & 0xfffffffff8) << 0x18);
          dVar1 = local_res10;
          local_res10 = (double)(((ulonglong)
                                  CONCAT14(*(undefined1 *)((longlong)rrbot + lVar10 * 8 + 7),
                                           CONCAT13(*(undefined1 *)
                                                     ((longlong)rrbot + lVar10 * 8 + 6),
                                                    CONCAT12(*(undefined1 *)
                                                              ((longlong)rrbot + lVar10 * 8 + 5),
                                                             CONCAT11(*(undefined1 *)
                                                                       ((longlong)rrbot +
                                                                       lVar10 * 8 + 4),
                                                                      *(undefined1 *)
                                                                       ((longlong)rrbot +
                                                                       lVar10 * 8 + 3))))) &
                                 0xfffffffff8) << 0x18);
          dVar3 = dVar11 * dVar13;
          dVar2 = (local_res10 * dVar1 - dVar3) + (dVar11 - local_res10) * dVar1 +
                  (dVar13 - dVar1) * local_res10 + (dVar11 - local_res10) * (dVar13 - dVar1) +
                  dVar11 * (dVar2 - dVar12);
        }
      }
      if (iVar8 == 0) goto LAB_14f32cbe6;
      lVar10 = (longlong)iVar8;
      dVar13 = dVar2 + dVar3;
      dVar11 = rrnegboterr[lVar10 + 0x15];
      uVar14 = SUB84(dVar11,0);
      uVar15 = (undefined4)((ulonglong)dVar11 >> 0x20);
      dVar1 = dVar13 * *(double *)(&UNK_1531d9768 + lVar10 * 8);
      dVar2 = dVar2 - (dVar13 - dVar3);
      uVar5 = (uint5)((ulonglong)dVar13 >> 0x18);
      uVar4 = CONCAT13(*(undefined1 *)((longlong)rrnegboterr + lVar10 * 8 + 0xae),
                       CONCAT12(*(undefined1 *)((longlong)rrnegboterr + lVar10 * 8 + 0xad),
                                CONCAT11(*(undefined1 *)((longlong)rrnegboterr + lVar10 * 8 + 0xac),
                                         *(undefined1 *)((longlong)rrnegboterr + lVar10 * 8 + 0xab))
                               ));
      uVar6 = *(undefined1 *)((longlong)rrnegboterr + lVar10 * 8 + 0xaf);
      dVar3 = dVar13 * dVar11;
    }
    local_res10 = (double)((ulonglong)(uVar5 & 0xfffffffff8) << 0x18);
    dVar11 = local_res10;
    dVar13 = dVar13 - local_res10;
    local_res10 = (double)(((ulonglong)CONCAT14(uVar6,uVar4) & 0xfffffffff8) << 0x18);
    dVar12 = (double)CONCAT44(uVar15,uVar14) - local_res10;
    dVar2 = (local_res10 * dVar11 - dVar3) + dVar12 * dVar11 + dVar13 * local_res10 +
            dVar12 * dVar13 + dVar1 + (double)CONCAT44(uVar15,uVar14) * dVar2;
  }
LAB_14f32cbe6:
  *param_1 = dVar2 + dVar3;
  *param_2 = dVar2 - ((dVar2 + dVar3) - dVar3);
  return;
}

// rrreal_to_parts @ 14f32cc20

int __cdecl oo2::rrreal_to_parts(long64 *param_1,int *param_2,double param_3)

{
  int iVar1;
  
  *param_1 = (ulonglong)param_3 & 0xfffffffffffff;
  iVar1 = (int)((ulonglong)param_3 >> 0x20);
  *param_2 = (iVar1 >> 0x14 & 0x7ffU) - 0x3ff;
  return iVar1 >> 0x1f;
}

// rrreal_to_str @ 14f32ccc0

int __cdecl
oo2::rrreal_to_str(char **param_1,uint *param_2,char *param_3,int *param_4,double param_5,
                  uint param_6)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double local_28 [2];
  
  local_28[0] = param_5;
  uVar2 = (uint)((ulonglong)param_5 >> 0x20);
  uVar6 = (int)uVar2 >> 0x14 & 0x7ff;
  dVar11 = param_5;
  if ((longlong)param_5 < 0) {
    dVar11 = (double)CONCAT44(uVar2 ^ __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(param_5,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  if (uVar6 == 0x7ff) {
    pcVar7 = "Inf";
    if (((ulonglong)param_5 & 0xfffffffffffff) != 0) {
      pcVar7 = "NaN";
    }
    *param_1 = pcVar7;
    *param_4 = 0x7000;
    *param_2 = 3;
  }
  else {
    if (uVar6 == 0) {
      if (ABS(param_5) == 0.0) {
        *param_4 = 1;
        *param_1 = param_3;
        *param_3 = '0';
        *param_2 = 1;
        return (int)uVar2 >> 0x1f;
      }
      uVar4 = 0x8000000000000;
      uVar5 = (ulonglong)param_5 & 0x8000000000000;
      while (uVar5 == 0) {
        uVar6 = uVar6 - 1;
        uVar4 = (longlong)uVar4 >> 1;
        uVar5 = (ulonglong)param_5 & uVar4;
      }
    }
    iVar8 = uVar6 - 0x3ff;
    if (iVar8 < 0) {
      iVar8 = (int)((iVar8 * 0x269 >> 0x1f & 0x7ffU) + iVar8 * 0x269) >> 0xb;
    }
    else {
      iVar8 = ((int)((iVar8 * 0x4d1 >> 0x1f & 0xfffU) + iVar8 * 0x4d1) >> 0xc) + 1;
    }
    rrraise_to_power10(&param_5,local_28,dVar11,0x12 - iVar8);
    dVar11 = (double)(longlong)param_5;
    dVar12 = param_5 - dVar11;
    param_5 = (double)((longlong)
                       (((param_5 - (dVar12 - (dVar12 - param_5))) - ((dVar12 - param_5) + dVar11))
                        + dVar12 + local_28[0]) + (longlong)param_5);
    iVar3 = iVar8 + 1;
    if ((ulonglong)param_5 < 1000000000000000000) {
      iVar3 = iVar8;
    }
    if ((int)param_6 < 0) {
      uVar6 = (param_6 & 0x7ffffff) + 1;
    }
    else {
      uVar6 = param_6 + iVar3;
    }
    iVar8 = iVar3;
    if (uVar6 < 0x18) {
      uVar5 = 10;
      if ((ulonglong)param_5 < 1000000000) {
        uVar5 = 1;
      }
      dVar11 = (double)rrpot[uVar5];
      while (uVar9 = (uint)uVar5, (ulonglong)dVar11 <= (ulonglong)param_5) {
        uVar5 = (ulonglong)(uVar9 + 1);
        if (uVar9 + 1 == 0x14) goto LAB_14f32cf38;
        dVar11 = (double)rrpot[uVar5];
      }
      if ((uVar6 < uVar9) && (uVar9 - uVar6 < 0x18)) {
        uVar4 = (rrpot[(int)(uVar9 - uVar6)] >> 1) + (longlong)param_5;
        param_5 = (double)(uVar4 / rrpot[(int)(uVar9 - uVar6)]);
        iVar8 = iVar3 + 1;
        if (uVar4 < rrpot[uVar5]) {
          iVar8 = iVar3;
        }
      }
    }
LAB_14f32cf38:
    dVar11 = param_5;
    if (param_5 != 0.0) {
      do {
        if ((longlong)dVar11 < 0x100000000) {
          param_5._0_4_ = SUB84(dVar11,0);
          dVar12 = (double)(((ulonglong)dVar11 & 0xffffffff) / 1000);
          bVar10 = param_5._0_4_ == SUB84(dVar12,0) * 1000;
          param_5 = (double)((ulonglong)dVar11 & 0xffffffff);
          if (bVar10) {
            do {
              param_5 = dVar12;
              dVar12 = (double)((ulonglong)param_5 / 1000);
            } while (SUB84(param_5,0) == (int)((ulonglong)param_5 / 1000) * 1000);
          }
          break;
        }
        bVar10 = dVar11 == (double)(((longlong)dVar11 / 1000) * 1000);
        param_5 = dVar11;
        dVar11 = (double)((longlong)dVar11 / 1000);
      } while (bVar10);
    }
    pcVar7 = param_3 + 0x40;
    uVar6 = 0;
    while( true ) {
      pcVar1 = pcVar7 + -8;
      if ((longlong)param_5 < 100000000) {
        uVar9 = param_5._0_4_;
        param_5 = 0.0;
      }
      else {
        uVar9 = param_5._0_4_ + (int)((longlong)param_5 / 100000000) * -100000000;
        param_5 = (double)((longlong)param_5 / 100000000);
      }
      for (; uVar9 != 0; uVar9 = uVar9 / 100) {
        pcVar7 = pcVar7 + -2;
        uVar6 = uVar6 + 2;
        *(undefined2 *)pcVar7 = *(undefined2 *)(rrdiglookup + (uVar9 % 100) * 2);
      }
      if (param_5 == 0.0) break;
      if (pcVar7 != pcVar1) {
        uVar6 = uVar6 + ((int)pcVar7 - (int)pcVar1);
        do {
          pcVar7 = pcVar7 + -1;
          *pcVar7 = '0';
        } while (pcVar7 != pcVar1);
      }
    }
    if ((uVar6 != 0) && (*pcVar7 == '0')) {
      pcVar7 = pcVar7 + 1;
      uVar6 = uVar6 - 1;
    }
    *param_4 = iVar8;
    *param_1 = pcVar7;
    *param_2 = uVar6;
  }
  return (int)uVar2 >> 0x1f;
}

// rrsetseparators @ 14f32d0d0

void __cdecl oo2::rrsetseparators(char param_1,char param_2)

{
  RRperiod = param_2;
  RRcomma = param_1;
  return;
}

// rrsnprintf @ 14f32d100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl oo2::rrsnprintf(char *param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char local_res20 [8];
  undefined1 auStackY_268 [32];
  char *local_238;
  int local_230;
  char local_22c [516];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pcVar3 = (char *)0x0;
  iVar2 = param_2;
  if (-1 < param_2) {
    iVar2 = 0;
  }
  local_238 = param_1;
  local_230 = param_2;
  if (iVar2 != 0) {
    if (param_1 != (char *)0x0) {
      pcVar5 = param_1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (pcVar3 < (char *)(longlong)iVar2);
    }
    local_238 = param_1 + iVar2;
    local_230 = param_2 - iVar2;
  }
  pcVar3 = local_22c;
  if (0x1ff < local_230) {
    pcVar3 = local_238;
  }
  iVar2 = rrvsprintfcb(rrclampcallback,&local_238,pcVar3,param_3,local_res20);
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    iVar4 = iVar2;
    if (param_2 <= iVar2) {
      iVar4 = param_2 + -1;
    }
    param_1[iVar4] = '\0';
  }
  return iVar2;
}

// rrsprintf @ 14f32d210

int __cdecl oo2::rrsprintf(char *param_1,char *param_2)

{
  int iVar1;
  char local_res18 [16];
  
  iVar1 = rrvsprintfcb((_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0,(void *)0x0,param_1,
                       param_2,local_res18);
  return iVar1;
}

// rrvsnprintf @ 14f32d260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl oo2::rrvsnprintf(char *param_1,int param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auStackY_268 [32];
  char *local_238;
  int local_230;
  char local_22c [516];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pcVar3 = (char *)0x0;
  iVar2 = param_2;
  if (-1 < param_2) {
    iVar2 = 0;
  }
  local_238 = param_1;
  local_230 = param_2;
  if (iVar2 != 0) {
    if (param_1 != (char *)0x0) {
      pcVar5 = param_1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (pcVar3 < (char *)(longlong)iVar2);
    }
    local_238 = param_1 + iVar2;
    local_230 = param_2 - iVar2;
  }
  pcVar3 = local_22c;
  if (0x1ff < local_230) {
    pcVar3 = local_238;
  }
  iVar2 = rrvsprintfcb(rrclampcallback,&local_238,pcVar3,param_3,param_4);
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    iVar4 = iVar2;
    if (param_2 <= iVar2) {
      iVar4 = param_2 + -1;
    }
    param_1[iVar4] = '\0';
  }
  return iVar2;
}

// rrvsprintf @ 14f32d360

int __cdecl oo2::rrvsprintf(char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = rrvsprintfcb((_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0,(void *)0x0,param_1,
                       param_2,param_3);
  return iVar1;
}

// rrvsprintfcb @ 14f32d3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
oo2::rrvsprintfcb(_func___cdecl_char_ptr_char_ptr_void_ptr_int *param_1,void *param_2,char *param_3,
                 char *param_4,char *param_5)

{
  char cVar1;
  int *piVar2;
  _func___cdecl_char_ptr_char_ptr_void_ptr_int *p_Var3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  _func___cdecl_char_ptr_char_ptr_void_ptr_int *p_Var8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  char *pcVar16;
  char *pcVar17;
  uint *puVar18;
  ulonglong uVar19;
  void *pvVar20;
  void *pvVar21;
  byte *pbVar22;
  ulonglong uVar23;
  char *pcVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  char *pcVar28;
  double dVar29;
  double *pdVar30;
  ulonglong *puVar31;
  double dVar32;
  char cVar33;
  longlong lVar34;
  ulonglong *puVar35;
  uint uVar36;
  undefined1 auStackY_338 [32];
  uint local_308;
  uint local_304;
  int local_300;
  uint local_2fc;
  ulonglong *local_2f8;
  undefined8 local_2f0;
  uint local_2e8 [2];
  uint *local_2e0;
  uint local_2d8;
  byte *local_2d0;
  double *local_2c8;
  uint local_2c0;
  void *local_2b8;
  uint local_2b0;
  undefined1 local_2a8;
  undefined1 uStack_2a7;
  undefined1 uStack_2a6;
  undefined1 uStack_2a5;
  undefined1 uStack_2a4;
  undefined1 uStack_2a3;
  undefined1 uStack_2a2;
  undefined1 uStack_2a1;
  _func___cdecl_char_ptr_char_ptr_void_ptr_int *local_2a0;
  undefined2 local_298;
  char local_296 [6];
  undefined1 local_290 [2];
  char local_28e;
  char acStack_28d [5];
  char local_288 [64];
  undefined8 local_248;
  undefined1 local_238 [430];
  undefined1 local_8a [2];
  ulonglong local_88 [9];
  
  dVar7 = __real_c090000000000000;
  dVar6 = __real_4090000000000000;
  dVar5 = __real_3f50000000000000;
  local_88[0] = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2c8 = (double *)param_5;
  local_300 = 0;
  puVar18 = (uint *)param_3;
  iVar25 = 0;
  local_2e0 = (uint *)param_3;
  local_2b8 = param_2;
  local_2a0 = param_1;
LAB_14f32d426:
  do {
    iVar27 = (int)puVar18;
    if (((ulonglong)param_4 & 3) == 0) {
      uVar9 = *(uint *)param_4;
      uVar15 = ~uVar9 & 0x80808080;
      uVar26 = uVar15 & (uVar9 ^ 0x25252525) + 0xfefefeff;
      while (uVar26 == 0) {
        if ((uVar15 & uVar9 + 0xfefefeff) != 0) {
          cVar33 = (char)*(uint *)param_4;
          goto LAB_14f32d4a4;
        }
        if ((param_1 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
           ((iVar27 - (int)param_3) + 0x200 < 4)) break;
        param_4 = (char *)((longlong)param_4 + 4);
        *(uint *)param_3 = uVar9;
        param_3 = (char *)((longlong)param_3 + 4);
        uVar9 = *(uint *)param_4;
        uVar15 = ~uVar9 & 0x80808080;
        uVar26 = uVar15 & (uVar9 ^ 0x25252525) + 0xfefefeff;
      }
    }
    cVar33 = (char)*(uint *)param_4;
    if (cVar33 == '%') {
      uVar13 = 0;
      local_2d0 = (byte *)((longlong)param_4 + 1);
      local_2d8 = 0;
      uVar9 = (int)*(char *)((longlong)param_4 + 1) - 0x20;
      local_308 = 0;
      local_2c0 = 0;
      local_304 = 0xffffffff;
      pbVar22 = local_2d0;
      uVar19 = uVar13;
      if (uVar9 < 0x11) {
        do {
          local_2d0 = pbVar22;
          switch(uVar9) {
          case 0:
            local_308 = 4;
            break;
          default:
            goto switchD_14f32d54d_caseD_1;
          case 3:
            local_308 = 8;
            break;
          case 4:
            local_308 = 0x100;
            break;
          case 7:
            local_308 = 0x40;
            break;
          case 0xb:
            local_308 = 2;
            break;
          case 0xd:
            local_308 = 1;
            break;
          case 0x10:
            uVar19 = (ulonglong)((uint)uVar19 | 0x10);
            goto LAB_14f32d59a;
          }
          local_308 = (uint)uVar19 | local_308;
          uVar19 = (ulonglong)local_308;
          uVar9 = (int)(char)local_2d0[1] - 0x20;
          pbVar22 = local_2d0 + 1;
        } while (uVar9 < 0x11);
LAB_14f32d59a:
        local_2d0 = local_2d0 + 1;
        local_308 = (uint)uVar19;
      }
switchD_14f32d54d_caseD_1:
      bVar14 = *local_2d0;
      uVar23 = uVar13;
      if (bVar14 == 0x2a) {
        bVar14 = local_2d0[1];
        local_2d0 = local_2d0 + 1;
        local_2d8 = *(uint *)local_2c8;
        local_2c8 = local_2c8 + 1;
      }
      else {
        while (('/' < (char)bVar14 && (local_2d8 = (uint)uVar23, bVar14 < 0x3a))) {
          pbVar22 = local_2d0 + 1;
          local_2d0 = local_2d0 + 1;
          local_2d8 = (uint)bVar14 + (local_2d8 * 5 + -0x18) * 2;
          uVar23 = (ulonglong)local_2d8;
          bVar14 = *pbVar22;
        }
      }
      if (bVar14 == 0x2e) {
        bVar14 = local_2d0[1];
        local_304 = 0;
        if (bVar14 == 0x2a) {
          bVar14 = local_2d0[2];
          local_2d0 = local_2d0 + 2;
          local_304 = *(uint *)local_2c8;
          local_2c8 = local_2c8 + 1;
        }
        else {
          while ((local_2d0 = local_2d0 + 1, '/' < (char)bVar14 &&
                 (uVar9 = (uint)bVar14, bVar14 < 0x3a))) {
            local_304 = uVar9 + (local_304 * 5 + -0x18) * 2;
            bVar14 = local_2d0[1];
          }
        }
      }
      uVar9 = (uint)uVar19;
      switch(bVar14) {
      case 0x49:
        if (local_2d0[1] == 0x36) {
          if (local_2d0[2] != 0x34) goto LAB_14f32d708;
          uVar19 = (ulonglong)(uVar9 | 0x20);
          local_2d0 = local_2d0 + 3;
        }
        else {
          if ((local_2d0[1] == 0x33) && (local_2d0[2] == 0x32)) {
            local_2d0 = local_2d0 + 3;
            goto switchD_14f32d681_caseD_4a;
          }
LAB_14f32d708:
          uVar19 = (ulonglong)(uVar9 | 0x20);
          local_2d0 = local_2d0 + 1;
        }
        break;
      default:
        goto switchD_14f32d681_caseD_4a;
      case 0x68:
        uVar19 = (ulonglong)(uVar9 | 0x200);
        local_2d0 = local_2d0 + 1;
        break;
      case 0x6a:
      case 0x74:
      case 0x7a:
        uVar19 = (ulonglong)(uVar9 | 0x20);
        local_2d0 = local_2d0 + 1;
        break;
      case 0x6c:
        pbVar22 = local_2d0 + 1;
        if (local_2d0[1] == 0x6c) {
          pbVar22 = local_2d0 + 2;
        }
        local_308 = uVar9 | 0x20;
        if (local_2d0[1] != 0x6c) {
          local_308 = uVar9;
        }
        uVar19 = (ulonglong)local_308;
        local_2d0 = pbVar22;
        goto switchD_14f32d681_caseD_4a;
      }
      local_308 = (uint)uVar19;
switchD_14f32d681_caseD_4a:
      uVar9 = (uint)uVar19;
      bVar14 = *local_2d0;
      switch(bVar14) {
      case 0x41:
        pcVar24 = hexu;
        break;
      case 0x42:
        pcVar24 = hexu;
        goto LAB_14f32de09;
      default:
        local_8a[1] = bVar14;
        local_308 = 0;
        local_2d8 = 0;
        goto LAB_14f32e643;
      case 0x45:
        pcVar24 = hexu;
        goto LAB_14f32dc15;
      case 0x47:
        pcVar24 = hexu;
        goto LAB_14f32daee;
      case 0x61:
        pcVar24 = hex;
        break;
      case 0x62:
        pcVar24 = hex;
LAB_14f32de09:
        cVar33 = '\0';
        local_298 = (ushort)local_298._1_1_ << 8;
        if ((uVar19 & 8) != 0) {
          cVar33 = '\x02';
          local_296[0] = pcVar24[0xb];
          local_298 = 0x3002;
        }
        uVar9 = 0x180;
LAB_14f32de9d:
        if ((uVar19 & 0x20) == 0) {
          dVar29 = (double)(ulonglong)*(uint *)local_2c8;
        }
        else {
          dVar29 = *local_2c8;
        }
        local_2e8[0] = 0;
        puVar35 = local_88;
        local_290 = (undefined1  [2])((ushort)local_290[1] << 8);
        if (dVar29 != 0.0) {
LAB_14f32df10:
          while( true ) {
            puVar31 = puVar35;
            local_2f8 = (ulonglong *)((longlong)puVar31 + -1);
            bVar14 = (byte)(uVar9 >> 8);
            uVar13 = (longlong)(1 << (bVar14 & 0x1f)) - 1U & (ulonglong)dVar29;
            dVar29 = (double)((ulonglong)dVar29 >> (bVar14 & 0x3f));
            *(char *)local_2f8 = pcVar24[uVar13];
            puVar35 = local_2f8;
            if ((dVar29 == 0.0) &&
               (iVar25 = (int)local_2f8, (int)local_304 <= (int)local_88 - iVar25)) break;
            if (((uVar19 & 0x40) != 0) && (uVar9 = uVar9 + 1, ((uVar9 >> 4 ^ uVar9) & 0xf) == 0)) {
              uVar9 = uVar9 & 0xfffffff0;
              *(char *)((longlong)puVar31 + -2) = RRcomma;
              puVar35 = (ulonglong *)((longlong)puVar31 + -2);
            }
          }
          uVar13 = (ulonglong)((int)local_238 + 0x1b0 + ((uVar9 & 0xf0) * 0x100000 - iVar25));
          local_2fc = (int)local_88 - iVar25;
          local_2f0 = (ulonglong)local_2fc;
          puVar18 = local_2e0;
          uVar9 = local_304;
          local_2c8 = local_2c8 + 1;
          goto LAB_14f32e62c;
        }
        cVar33 = '\0';
        local_298 = local_298 & 0xff00;
        if (local_304 != 0) goto LAB_14f32df10;
        uVar13 = 0;
        local_2fc = 0;
        local_2f0 = 0;
        local_2f8 = puVar35;
        local_2c8 = local_2c8 + 1;
        goto LAB_14f32e675;
      case 99:
        local_8a[1] = *(byte *)local_2c8;
        local_2c8 = local_2c8 + 1;
LAB_14f32e643:
        local_2e8[0] = 0;
        cVar33 = '\0';
        local_2fc = 1;
        puVar35 = (ulonglong *)(local_8a + 1);
        local_298 = (ushort)local_298._1_1_ << 8;
        local_2f0 = 1;
        local_290 = (undefined1  [2])((ushort)local_290[1] << 8);
        local_2f8 = puVar35;
        goto LAB_14f32e672;
      case 100:
      case 0x69:
      case 0x75:
        pdVar30 = local_2c8 + 1;
        if ((uVar19 & 0x20) == 0) {
          uVar26 = *(uint *)local_2c8;
          dVar29 = (double)(ulonglong)uVar26;
          if ((bVar14 != 0x75) && ((int)uVar26 < 0)) {
            dVar29 = (double)(ulonglong)-uVar26;
            goto LAB_14f32dfe4;
          }
        }
        else {
          dVar29 = *local_2c8;
          if ((bVar14 != 0x75) && ((longlong)dVar29 < 0)) {
            dVar29 = (double)-(longlong)dVar29;
LAB_14f32dfe4:
            local_308 = uVar9 | 0x80;
            uVar19 = (ulonglong)local_308;
          }
        }
        if (((uint)uVar19 >> 8 & 1) != 0) {
          uVar9 = 0;
          if ((0x3ff < (ulonglong)dVar29) && (uVar9 = local_304, local_304 == 0xffffffff)) {
            uVar9 = 1;
          }
          local_304 = uVar9;
          dVar29 = (double)(longlong)dVar29;
          goto LAB_14f32e01d;
        }
        puVar35 = local_88;
        iVar25 = 0;
        local_2b0 = (uint)uVar19 & 0x40;
        local_2f8 = puVar35;
        while( true ) {
          puVar31 = puVar35 + -1;
          uVar13 = (ulonglong)dVar29 & 0xffffffff;
          if ((ulonglong)dVar29 < 100000000) {
            dVar32 = 0.0;
          }
          else {
            dVar32 = (double)((ulonglong)dVar29 / 100000000);
            uVar13 = (ulonglong)(uint)(SUB84(dVar29,0) + SUB84(dVar32,0) * -100000000);
          }
          if ((int)uVar13 != 0) {
            if ((uVar19 & 0x40) == 0) {
              do {
                puVar35 = (ulonglong *)((longlong)puVar35 + -2);
                iVar27 = (int)(uVar13 / 100);
                *(undefined2 *)puVar35 =
                     *(undefined2 *)(rrdiglookup + (uint)(((int)uVar13 + iVar27 * -100) * 2));
                uVar13 = uVar13 / 100;
                local_2f8 = puVar35;
              } while (iVar27 != 0);
            }
            else {
              do {
                puVar35 = (ulonglong *)((longlong)puVar35 + -1);
                if (iVar25 == 3) {
                  *(char *)puVar35 = RRcomma;
                  puVar31 = (ulonglong *)((longlong)puVar31 + -1);
                  uVar23 = uVar13;
                  iVar25 = 0;
                }
                else {
                  uVar23 = uVar13 / 10;
                  *(char *)puVar35 = (char)uVar13 + (char)uVar23 * -10 + '0';
                  iVar25 = iVar25 + 1;
                }
                uVar13 = uVar23;
                local_2f8 = puVar35;
              } while ((int)uVar23 != 0);
            }
          }
          if (dVar32 == 0.0) break;
          dVar29 = dVar32;
          if (puVar35 != puVar31) {
            do {
              iVar27 = iVar25;
              if (((uVar19 & 0x40) == 0) || (iVar27 = iVar25 + 1, iVar25 != 3)) {
                *(char *)((longlong)puVar35 + -1) = '0';
                iVar25 = iVar27;
              }
              else {
                puVar31 = (ulonglong *)((longlong)puVar31 + -1);
                *(char *)((longlong)puVar35 + -1) = RRcomma;
                iVar25 = 0;
              }
              puVar35 = (ulonglong *)((longlong)puVar35 + -1);
              local_2f8 = puVar35;
            } while (puVar35 != puVar31);
          }
        }
        if ((puVar35 != local_88) && ((char)*puVar35 == '0')) {
          puVar35 = (ulonglong *)((longlong)puVar35 + 1);
          local_2f8 = puVar35;
        }
        cVar33 = '\0';
        local_290 = (undefined1  [2])((ushort)local_290 & 0xff00);
        local_298 = local_298 & 0xff00;
        if ((char)local_308 < '\0') {
          local_298 = 0x2d01;
LAB_14f32e5cc:
          cVar33 = '\x01';
        }
        else {
          if ((local_308 & 4) != 0) {
            local_298 = 0x2001;
            goto LAB_14f32e5cc;
          }
          if ((local_308 & 2) != 0) {
            local_298 = 0x2b01;
            goto LAB_14f32e5cc;
          }
        }
        local_2fc = (int)local_88 - (int)puVar35;
        local_2f0 = (ulonglong)local_2fc;
        if (local_2fc == 0) {
          *(char *)((longlong)puVar35 + -1) = '0';
          puVar35 = (ulonglong *)((longlong)puVar35 + -1);
          local_2fc = 1;
          local_2f0 = 1;
          local_2f8 = puVar35;
        }
        uVar13 = (ulonglong)(local_2fc + 0x3000000);
        puVar18 = local_2e0;
        uVar9 = 0;
        local_2c8 = pdVar30;
        if (-1 < (int)local_304) {
          uVar9 = local_304;
        }
        goto LAB_14f32e62c;
      case 0x65:
        pcVar24 = hex;
LAB_14f32dc15:
        dVar29 = *local_2c8;
        local_2c8 = local_2c8 + 1;
        if (local_304 == 0xffffffff) {
          local_304 = 6;
        }
        iVar25 = rrreal_to_str((char **)&local_2f8,&local_2fc,local_288,(int *)local_2e8,dVar29,
                               local_304 | 0x80000000);
        if (iVar25 != 0) {
          local_308 = uVar9 | 0x80;
        }
        local_2f0 = (ulonglong)local_2fc;
LAB_14f32dc86:
        uVar9 = (uint)local_2f0;
        cVar33 = '\0';
        local_290 = (undefined1  [2])((ushort)local_290 & 0xff00);
        local_298 = local_298 & 0xff00;
        if ((char)local_308 < '\0') {
          local_298 = 0x2d01;
LAB_14f32dcb8:
          cVar33 = '\x01';
        }
        else {
          if ((local_308 & 4) != 0) {
            local_298 = 0x2001;
            goto LAB_14f32dcb8;
          }
          if ((local_308 & 2) != 0) {
            local_298 = 0x2b01;
            goto LAB_14f32dcb8;
          }
        }
        if (local_2e8[0] == 0x7000) {
          uVar13 = 0;
          puVar18 = local_2e0;
          puVar35 = local_2f8;
          uVar9 = 0;
        }
        else {
          pcVar17 = (char *)((longlong)&local_248 + 1);
          local_248._0_1_ = (char)*local_2f8;
          pcVar16 = (char *)((longlong)&local_248 + 1);
          if (local_304 != 0) {
            pcVar17 = (char *)((longlong)&local_248 + 2);
            local_248._1_1_ = RRperiod;
            pcVar16 = (char *)((longlong)&local_248 + 2);
          }
          if (local_304 < uVar9 - 1) {
            uVar9 = local_304 + 1;
          }
          if (1 < uVar9) {
            uVar19 = (ulonglong)(uVar9 - 1);
            pcVar17 = pcVar16;
            do {
              local_2f8 = (ulonglong *)((longlong)local_2f8 + 1);
              *pcVar17 = *(char *)local_2f8;
              pcVar17 = pcVar17 + 1;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          iVar25 = (int)pcVar17;
          local_2c0 = (local_304 - uVar9) + 1;
          iVar27 = local_2e8[0] - 1;
          if (iVar27 < 0) {
            local_28e = '-';
            iVar27 = -iVar27;
          }
          else {
            local_28e = '+';
          }
          uVar9 = (99 < iVar27) + 4;
          uVar19 = (ulonglong)uVar9;
          local_290[1] = pcVar24[0xe];
          local_290[0] = (char)uVar9;
          local_290[uVar19] = (char)iVar27 + (char)(iVar27 / 10) * -10 + '0';
          uVar9 = iVar27 / 10;
          do {
            local_2e8[0] = uVar9;
            uVar26 = (int)uVar19 - 1;
            uVar19 = (ulonglong)uVar26;
            local_290[uVar19] = (char)local_2e8[0] + (char)((int)local_2e8[0] / 10) * -10 + '0';
            uVar9 = (int)local_2e8[0] / 10;
          } while (3 < uVar26);
          uVar13 = 0x3000001;
LAB_14f32e409:
          local_2f8 = &local_248;
          local_2fc = (iVar25 - (int)local_288) - 0x40;
          local_2f0 = (ulonglong)local_2fc;
          puVar18 = local_2e0;
          puVar35 = local_2f8;
          uVar9 = 0;
        }
        goto LAB_14f32e62c;
      case 0x66:
        dVar29 = *local_2c8;
LAB_14f32e01d:
        local_2c8 = local_2c8 + 1;
        uVar9 = (uint)uVar19;
        if ((uVar9 >> 8 & 1) != 0) {
          for (; (uVar9 < 0x4000000 &&
                 ((uVar9 = (uint)uVar19, dVar6 <= dVar29 || (local_308 = uVar9, dVar29 <= dVar7))));
              dVar29 = dVar29 * dVar5) {
            uVar9 = uVar9 + 0x1000000;
            uVar19 = (ulonglong)uVar9;
            local_308 = uVar9;
          }
        }
        puVar18 = &local_2fc;
        if (local_304 == 0xffffffff) {
          local_304 = 6;
        }
        iVar25 = rrreal_to_str((char **)&local_2f8,puVar18,local_288,(int *)local_2e8,dVar29,
                               local_304);
        if (iVar25 != 0) {
          local_308 = uVar9 | 0x80;
        }
        local_2f0 = (ulonglong)local_2fc;
        goto LAB_14f32e0ac;
      case 0x67:
        pcVar24 = hex;
LAB_14f32daee:
        dVar29 = *local_2c8;
        local_2c8 = local_2c8 + 1;
        if (local_304 == 0xffffffff) {
          puVar18 = (uint *)&DAT_00000006;
        }
        else {
          puVar18 = (uint *)(ulonglong)local_304;
          if (local_304 == 0) {
            puVar18 = (uint *)&DAT_00000001;
          }
        }
        uVar26 = (uint)puVar18;
        iVar25 = rrreal_to_str((char **)&local_2f8,&local_2fc,local_288,(int *)local_2e8,dVar29,
                               uVar26 - 1 | 0x80000000);
        if (iVar25 != 0) {
          local_308 = uVar9 | 0x80;
        }
        puVar12 = puVar18;
        local_304 = uVar26;
        if (uVar26 < local_2fc) {
          local_2fc = uVar26;
        }
        while (((local_2f0 = (ulonglong)local_2fc, 1 < local_2fc &&
                (local_304 = (uint)puVar12, local_304 != 0)) &&
               (*(char *)((ulonglong)(local_2fc - 1) + (longlong)local_2f8) == '0'))) {
          puVar12 = (uint *)(ulonglong)(local_304 - 1);
          local_304 = local_304 - 1;
          local_2fc = local_2fc - 1;
        }
        if (((int)local_2e8[0] < -3) || ((int)uVar26 < (int)local_2e8[0])) {
          if ((int)local_2fc < (int)local_304) {
            local_304 = local_2fc - 1;
          }
          else if (local_304 == 0) {
            local_304 = 0;
          }
          else {
            local_304 = local_304 - 1;
          }
          goto LAB_14f32dc86;
        }
        if ((int)local_2e8[0] < 1) {
          if ((int)local_2fc < (int)local_304) {
            local_304 = local_2fc;
          }
          local_304 = local_304 - local_2e8[0];
        }
        else if ((int)local_2e8[0] < (int)local_2fc) {
          local_304 = local_2fc - local_2e8[0];
        }
        else {
          local_304 = 0;
        }
LAB_14f32e0ac:
        puVar35 = local_2f8;
        cVar33 = '\0';
        local_290 = (undefined1  [2])((ushort)local_290 & 0xff00);
        local_298 = local_298 & 0xff00;
        if ((char)local_308 < '\0') {
          local_298 = 0x2d01;
LAB_14f32e0dd:
          cVar33 = '\x01';
        }
        else {
          if ((local_308 & 4) != 0) {
            local_298 = 0x2001;
            goto LAB_14f32e0dd;
          }
          if ((local_308 & 2) != 0) {
            local_298 = 0x2b01;
            goto LAB_14f32e0dd;
          }
        }
        if (local_2e8[0] != 0x7000) {
          pcVar24 = (char *)&local_248;
          if ((int)local_2e8[0] < 1) {
            local_248._0_1_ = '0';
            pcVar24 = (char *)((longlong)&local_248 + 1);
            if (local_304 != 0) {
              pcVar24 = (char *)((longlong)&local_248 + 2);
              local_248._1_1_ = RRperiod;
            }
            uVar15 = -local_2e8[0];
            uVar26 = local_304;
            uVar9 = local_304;
            if ((int)uVar15 <= (int)local_304) {
              uVar26 = uVar15;
              uVar9 = uVar15;
            }
            for (; (uVar26 != 0 && (((ulonglong)pcVar24 & 3) != 0)); pcVar24 = pcVar24 + 1) {
              *pcVar24 = '0';
              uVar26 = uVar26 - 1;
            }
            if (3 < (int)uVar26) {
              puVar18 = (uint *)0x30303030;
              uVar15 = uVar26 >> 2;
              memset(pcVar24,0x30303030,(ulonglong)uVar15 << 2);
              pcVar24 = pcVar24 + (ulonglong)uVar15 * 4;
              uVar26 = uVar26 + uVar15 * -4;
            }
            if (uVar26 != 0) {
              memset(pcVar24,(int)CONCAT71((int7)((ulonglong)puVar18 >> 8),0x30),(ulonglong)uVar26);
              pcVar24 = pcVar24 + uVar26;
            }
            if ((int)local_304 < (int)((int)local_2f0 + uVar9)) {
              local_2f0 = (ulonglong)(local_304 - uVar9);
            }
            uVar19 = local_2f0 & 0xffffffff;
            if ((int)local_2f0 != 0) {
              lVar34 = (longlong)puVar35 - (longlong)pcVar24;
              do {
                *pcVar24 = pcVar24[lVar34];
                pcVar24 = pcVar24 + 1;
                uVar26 = (int)uVar19 - 1;
                uVar19 = (ulonglong)uVar26;
              } while (uVar26 != 0);
            }
            uVar13 = 0x3000001;
            local_2c0 = (local_304 - uVar9) - (int)local_2f0;
          }
          else {
            uVar9 = local_308 & 0x40;
            if (uVar9 == 0) {
              uVar26 = 0;
            }
            else {
              uVar26 = (600 - local_2e8[0]) % 3;
            }
            uVar19 = 0;
            uVar15 = (uint)local_2f0;
            if (local_2e8[0] < uVar15) {
              do {
                while ((pcVar17 = pcVar24, uVar9 != 0 && (uVar26 = uVar26 + 1, uVar26 == 4))) {
                  *pcVar17 = RRcomma;
                  pcVar24 = pcVar17 + 1;
                  uVar26 = 0;
                }
                pcVar24 = pcVar17 + 1;
                *pcVar17 = *(char *)(uVar19 + (longlong)local_2f8);
                uVar10 = (int)uVar19 + 1;
                uVar19 = (ulonglong)uVar10;
              } while (uVar10 < local_2e8[0]);
              uVar13 = (ulonglong)(((int)pcVar24 - (int)local_288) + 0x2ffffc0);
              if (local_304 != 0) {
                *pcVar24 = RRperiod;
                pcVar24 = pcVar17 + 2;
              }
              if (local_304 < uVar15 - local_2e8[0]) {
                uVar15 = local_2e8[0] + local_304;
              }
              if (uVar10 < uVar15) {
                pcVar17 = (char *)(uVar19 + (longlong)local_2f8);
                uVar19 = (ulonglong)(uVar15 - uVar10);
                do {
                  cVar33 = *pcVar17;
                  pcVar17 = pcVar17 + 1;
                  *pcVar24 = cVar33;
                  pcVar24 = pcVar24 + 1;
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
              }
              local_2c0 = (local_2e8[0] - uVar15) + local_304;
              cVar33 = (char)local_298;
            }
            else {
              do {
                while ((uVar9 != 0 && (uVar26 = uVar26 + 1, uVar26 == 4))) {
                  *pcVar24 = RRcomma;
                  pcVar24 = pcVar24 + 1;
                  uVar26 = 0;
                }
                pcVar17 = (char *)(uVar19 + (longlong)local_2f8);
                uVar10 = (int)uVar19 + 1;
                uVar19 = (ulonglong)uVar10;
                *pcVar24 = *pcVar17;
                pcVar24 = pcVar24 + 1;
              } while (uVar10 < uVar15);
              if (uVar10 < local_2e8[0]) {
                uVar10 = local_2e8[0] - uVar10;
                if (uVar9 == 0) {
                  for (; (uVar10 != 0 && (((ulonglong)pcVar24 & 3) != 0)); pcVar24 = pcVar24 + 1) {
                    *pcVar24 = '0';
                    uVar10 = uVar10 - 1;
                  }
                  if (3 < uVar10) {
                    uVar19 = (ulonglong)(uVar10 >> 2);
                    memset(pcVar24,0x30303030,uVar19 << 2);
                    pcVar24 = pcVar24 + uVar19 * 4;
                    do {
                      uVar10 = uVar10 - 4;
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                }
                if (uVar10 != 0) {
                  do {
                    if ((uVar9 == 0) || (uVar26 = uVar26 + 1, uVar26 != 4)) {
                      *pcVar24 = '0';
                      uVar10 = uVar10 - 1;
                    }
                    else {
                      uVar26 = 0;
                      *pcVar24 = RRcomma;
                    }
                    pcVar24 = pcVar24 + 1;
                  } while (uVar10 != 0);
                  cVar33 = (char)local_298;
                }
              }
              uVar13 = (ulonglong)(((int)pcVar24 - (int)local_288) + 0x2ffffc0);
              if (local_304 != 0) {
                *pcVar24 = RRperiod;
                pcVar24 = pcVar24 + 1;
                local_2c0 = local_304;
              }
            }
          }
          iVar25 = (int)pcVar24;
          if (((local_308 >> 8 & 1) != 0) &&
             (local_290 = (undefined1  [2])0x2001, 0xffffff < local_308)) {
            local_290 = (undefined1  [2])0x2002;
            local_28e = "_kmgt"[local_308 >> 0x18];
          }
          goto LAB_14f32e409;
        }
        uVar13 = 0;
        puVar18 = local_2e0;
        uVar9 = 0;
        goto LAB_14f32e62c;
      case 0x6e:
        goto switchD_14f32d740_caseD_6e;
      case 0x6f:
        pcVar24 = hexu;
        local_298 = (ushort)local_298._1_1_ << 8;
        cVar33 = (uVar19 & 8) != 0;
        if ((bool)cVar33) {
          local_298 = 0x3001;
        }
        uVar9 = 0x330;
        goto LAB_14f32de9d;
      case 0x70:
        local_304 = 0x10;
        local_308 = uVar9 & 0xffffffef | 0x20;
        uVar19 = (ulonglong)local_308;
      case 0x58:
        pcVar24 = hexu;
        goto LAB_14f32de79;
      case 0x73:
        puVar35 = (ulonglong *)*local_2c8;
        puVar31 = (ulonglong *)&s_null;
        local_2f8 = (ulonglong *)&s_null;
        if (puVar35 != (ulonglong *)0x0) {
          puVar31 = puVar35;
          local_2f8 = puVar35;
        }
        do {
          if (((ulonglong)puVar31 & 3) == 0) {
            uVar9 = 0xffffffff;
            if (-1 < (int)local_304) {
              uVar26 = (int)puVar31 - (int)local_2f8;
              if (local_304 <= uVar26) goto LAB_14f32d7bc;
              uVar26 = local_304 - uVar26;
              uVar9 = uVar26 >> 2;
              if (uVar26 >> 2 == 0) goto LAB_14f32d7b1;
            }
            do {
              if (((uint)*puVar31 + 0xfefefeff & ~(uint)*puVar31 & 0x80808080) != 0) break;
              puVar31 = (ulonglong *)((longlong)puVar31 + 4);
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
LAB_14f32d7b1:
          if ((char)*puVar31 == '\0') goto LAB_14f32d7bc;
          puVar31 = (ulonglong *)((longlong)puVar31 + 1);
        } while( true );
      case 0x78:
        pcVar24 = hex;
LAB_14f32de79:
        cVar33 = '\0';
        uVar9 = 0x440;
        local_298 = (ushort)local_298._1_1_ << 8;
        if ((uVar19 & 8) != 0) {
          cVar33 = '\x02';
          local_296[0] = pcVar24[0x10];
          local_298 = 0x3002;
        }
        goto LAB_14f32de9d;
      }
      dVar29 = *local_2c8;
      local_2f0._0_1_ = SUB81(dVar29,0);
      local_2a8 = (undefined1)local_2f0;
      local_2f0._1_1_ = (undefined1)((ulonglong)dVar29 >> 8);
      uStack_2a7 = local_2f0._1_1_;
      local_2f0._2_1_ = (undefined1)((ulonglong)dVar29 >> 0x10);
      uStack_2a6 = local_2f0._2_1_;
      local_2f0._3_1_ = (undefined1)((ulonglong)dVar29 >> 0x18);
      uStack_2a5 = local_2f0._3_1_;
      local_2f0._4_1_ = (undefined1)((ulonglong)dVar29 >> 0x20);
      uStack_2a4 = local_2f0._4_1_;
      local_2f0._5_1_ = (undefined1)((ulonglong)dVar29 >> 0x28);
      uStack_2a3 = local_2f0._5_1_;
      local_2f0._6_1_ = (undefined1)((ulonglong)dVar29 >> 0x30);
      uStack_2a2 = local_2f0._6_1_;
      local_2f0._7_1_ = (undefined1)((ulonglong)dVar29 >> 0x38);
      uStack_2a1 = local_2f0._7_1_;
      if (local_304 == 0xffffffff) {
        local_304 = 6;
      }
      uVar19 = (ulonglong)dVar29 & 0xfffffffffffff;
      uVar26 = ((uint)((longlong)dVar29 >> 0x34) & 0x7ff) - 0x3ff;
      local_308 = uVar9 | 0x80;
      if (-1 < (longlong)dVar29) {
        local_308 = uVar9;
      }
      cVar33 = '\0';
      local_298 = (ushort)local_298._1_1_ << 8;
      if ((char)local_308 < '\0') {
        local_298 = 0x2d01;
LAB_14f32d902:
        cVar33 = '\x01';
      }
      else {
        if ((local_308 & 4) != 0) {
          local_298 = 0x2001;
          goto LAB_14f32d902;
        }
        if ((local_308 & 2) != 0) {
          local_298 = 0x2b01;
          goto LAB_14f32d902;
        }
      }
      if (uVar26 == 0xfffffc01) {
        uVar26 = -(uint)(uVar19 != 0) & 0xfffffc02;
      }
      else {
        uVar19 = uVar19 | 0x10000000000000;
      }
      uVar19 = uVar19 * 0x100;
      if ((int)local_304 < 0xf) {
        uVar19 = uVar19 + (0x800000000000000U >> ((char)local_304 * '\x04' & 0x3fU));
      }
      pcVar17 = (char *)((longlong)&local_248 + 1);
      local_296[(longlong)cVar33 + -1] = '0';
      local_296[(char)local_298] = 'x';
      cVar33 = (char)local_298 + '\x02';
      local_298 = CONCAT11(local_298._1_1_,cVar33);
      local_248._0_1_ = pcVar24[uVar19 >> 0x3c];
      pcVar16 = (char *)((longlong)&local_248 + 1);
      if (local_304 != 0) {
        pcVar17 = (char *)((longlong)&local_248 + 2);
        local_248._1_1_ = RRperiod;
        pcVar16 = (char *)((longlong)&local_248 + 2);
      }
      uVar9 = local_304;
      pcVar28 = pcVar16;
      if ((local_304 < 0xe) || (uVar9 = 0xd, (int)local_304 < 0xe)) {
        local_2c0 = 0;
        goto joined_r0x00014f32d9c7;
      }
      local_2c0 = local_304 - 0xd;
      do {
        *pcVar28 = pcVar24[(uVar19 & 0xfffffffffffffff) >> 0x38];
        pcVar28 = pcVar28 + 1;
        uVar9 = uVar9 - 1;
        uVar19 = uVar19 << 4;
        pcVar17 = pcVar28;
joined_r0x00014f32d9c7:
      } while (uVar9 != 0);
      if ((int)uVar26 < 0) {
        local_28e = '-';
        uVar26 = -uVar26;
      }
      else {
        local_28e = '+';
      }
      if ((int)uVar26 < 1000) {
        if ((int)uVar26 < 100) {
          uVar19 = (ulonglong)((9 < (int)uVar26) + 3);
        }
        else {
          uVar19 = 5;
        }
      }
      else {
        uVar19 = 6;
      }
      local_290[1] = pcVar24[0x11];
      local_290[0] = (char)uVar19;
      pcVar24 = local_290 + uVar19;
      *pcVar24 = (char)uVar26 + (char)((int)uVar26 / 10) * -10 + '0';
      if (3 < (uint)uVar19) {
        uVar19 = (ulonglong)((uint)uVar19 - 3);
        iVar25 = (int)uVar26 / 10;
        do {
          pcVar24 = pcVar24 + -1;
          *pcVar24 = (char)iVar25 + (char)(iVar25 / 10) * -10 + '0';
          uVar19 = uVar19 - 1;
          iVar25 = iVar25 / 10;
        } while (uVar19 != 0);
      }
      local_2f8 = &local_248;
      local_2e8[0] = (int)pcVar17 - (int)pcVar16;
      uVar13 = 0x3000001;
      local_2fc = ((int)pcVar17 - (int)local_288) - 0x40;
      local_2f0 = (ulonglong)local_2fc;
      puVar18 = local_2e0;
      puVar35 = local_2f8;
      uVar9 = 0;
      local_2c8 = local_2c8 + 1;
      goto LAB_14f32e62c;
    }
LAB_14f32d4a4:
    if (cVar33 == '\0') {
      if (param_1 == (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) {
        *param_3 = '\0';
      }
      else {
        iVar27 = (int)param_3 - iVar27;
        if (0x1ff < iVar27 + 0x1ff) {
          iVar25 = iVar25 + iVar27;
          param_3 = (*param_1)((char *)puVar18,param_2,iVar27);
          puVar18 = (uint *)param_3;
        }
      }
LAB_14f32eda6:
      return iVar25 + ((int)param_3 - (int)puVar18);
    }
    puVar12 = (uint *)param_3;
    if ((param_1 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
       (iVar27 = (int)param_3 - iVar27, 0x1ff < iVar27 + 1)) {
      iVar25 = iVar25 + iVar27;
      puVar12 = (uint *)(*param_1)((char *)puVar18,param_2,iVar27);
      param_3 = (char *)0x0;
      param_2 = local_2b8;
      puVar18 = puVar12;
      local_300 = iVar25;
      local_2e0 = puVar12;
      if (puVar12 == (uint *)0x0) goto LAB_14f32eda6;
    }
    *(char *)puVar12 = (char)*(uint *)param_4;
    param_3 = (char *)((longlong)puVar12 + 1);
    param_4 = (char *)((longlong)param_4 + 1);
  } while( true );
LAB_14f32d7bc:
  local_2fc = (int)puVar31 - (int)local_2f8;
  local_290 = (undefined1  [2])((ushort)local_290[1] << 8);
  local_2e8[0] = 0;
  if (local_304 < local_2fc) {
    local_2fc = local_304;
  }
  local_2f0 = (ulonglong)local_2fc;
  cVar33 = '\0';
  local_298 = (ushort)local_298._1_1_ << 8;
  puVar35 = local_2f8;
  uVar9 = 0;
  local_2c8 = local_2c8 + 1;
LAB_14f32e62c:
  local_304 = uVar9;
  if ((int)local_304 < (int)local_2f0) {
LAB_14f32e672:
    local_304 = (uint)local_2f0;
  }
LAB_14f32e675:
  p_Var8 = local_2a0;
  pvVar20 = local_2b8;
  uVar9 = (int)cVar33 + (int)local_290[0] + local_2c0 + local_304;
  if ((int)local_2d8 < (int)uVar9) {
    local_2d8 = uVar9;
  }
  local_304 = local_304 - (int)local_2f0;
  local_2d8 = local_2d8 - uVar9;
  pvVar21 = (void *)(ulonglong)local_2d8;
  if ((local_308 & 1) == 0) {
    if ((local_308 & 0x10) == 0) {
      local_308 = local_308 & 0xffffffbf;
    }
    else {
      if ((int)local_304 < (int)local_2d8) {
        local_304 = local_2d8;
      }
      local_2d8 = 0;
      pvVar21 = (void *)0x0;
    }
  }
  if (local_304 + (int)pvVar21 != 0) {
    if (((local_308 & 1) == 0) && (0 < (int)pvVar21)) {
      do {
        iVar25 = (int)pvVar21;
        if ((p_Var8 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
           (uVar9 = ((int)puVar18 - (int)param_3) + 0x200, (int)uVar9 < iVar25)) {
          pvVar21 = (void *)(ulonglong)uVar9;
        }
        uVar9 = (uint)pvVar21;
        local_2d8 = iVar25 - uVar9;
        uVar19 = (ulonglong)local_2d8;
        for (; (uVar26 = (uint)pvVar21, uVar9 != 0 && (((ulonglong)param_3 & 3) != 0));
            param_3 = (char *)((longlong)param_3 + 1)) {
          *param_3 = ' ';
          uVar9 = uVar26 - 1;
          pvVar21 = (void *)(ulonglong)uVar9;
        }
        if (3 < (int)uVar26) {
          uVar19 = 0x20202020;
          uVar23 = (ulonglong)pvVar21 >> 2;
          memset(param_3,0x20202020,uVar23 << 2);
          param_3 = (char *)((longlong)param_3 + uVar23 * 4);
          uVar26 = uVar26 + (int)uVar23 * -4;
        }
        if (uVar26 != 0) {
          memset(param_3,(int)CONCAT71((int7)(uVar19 >> 8),0x20),(ulonglong)uVar26);
          param_3 = (char *)((longlong)param_3 + (ulonglong)uVar26);
        }
        if ((p_Var8 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
           (iVar27 = (int)param_3 - (int)local_2e0, 0x1ff < iVar27 + 1)) {
          iVar25 = local_300 + iVar27;
          param_3 = (*p_Var8)((char *)local_2e0,pvVar20,iVar27);
          puVar18 = (uint *)param_3;
          local_300 = iVar25;
          local_2e0 = (uint *)param_3;
          if ((uint *)param_3 == (uint *)0x0) goto LAB_14f32eda6;
        }
        pvVar21 = (void *)(ulonglong)local_2d8;
        puVar18 = local_2e0;
      } while (0 < (int)local_2d8);
      cVar33 = (char)local_298;
    }
    pcVar24 = (char *)((longlong)&local_298 + 1);
    pvVar20 = local_2b8;
    p_Var3 = local_2a0;
    while (local_2b8 = pvVar20, local_2a0 = p_Var3, cVar33 != '\0') {
      iVar25 = (int)cVar33;
      if ((p_Var8 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
         (iVar27 = ((int)puVar18 - (int)param_3) + 0x200, iVar27 < iVar25)) {
        iVar25 = iVar27;
      }
      cVar33 = cVar33 - (char)iVar25;
      local_298._1_1_ = (byte)(local_298 >> 8);
      local_298 = CONCAT11(local_298._1_1_,cVar33);
      for (; iVar25 != 0; iVar25 = iVar25 + -1) {
        cVar1 = *pcVar24;
        pcVar24 = pcVar24 + 1;
        *param_3 = cVar1;
        param_3 = (char *)((longlong)param_3 + 1);
      }
      if ((p_Var8 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
         (iVar27 = (int)param_3 - (int)puVar18, 0x1ff < iVar27 + 1)) {
        iVar25 = local_300 + iVar27;
        param_3 = (*p_Var8)((char *)puVar18,pvVar20,iVar27);
        puVar18 = (uint *)param_3;
        if ((uint *)param_3 == (uint *)0x0) goto LAB_14f32eda6;
        pvVar21 = pvVar20;
        cVar33 = (char)local_298;
        local_300 = iVar25;
        local_2e0 = (uint *)param_3;
        pvVar20 = local_2b8;
        p_Var3 = local_2a0;
      }
    }
    uVar19 = uVar13 >> 0x18;
    local_2b0 = (uint)(uVar13 >> 0x18);
    uVar9 = local_308 & 0x40;
    if (uVar9 == 0) {
      uVar26 = 0;
    }
    else {
      pvVar21 = (void *)((ulonglong)(local_304 + ((uint)uVar13 & 0xffffff)) %
                        (ulonglong)(local_2b0 + 1));
      uVar26 = local_2b0 - (int)pvVar21;
    }
    cVar33 = '\0';
    if (0 < (int)local_304) {
      do {
        uVar15 = local_304;
        if ((p_Var3 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
           (uVar10 = ((int)puVar18 - (int)param_3) + 0x200, (int)uVar10 < (int)local_304)) {
          uVar15 = uVar10;
        }
        local_304 = local_304 - uVar15;
        cVar33 = RRcomma;
        uVar10 = (uint)uVar19;
        if (uVar9 == 0) {
          for (; (uVar15 != 0 && (((ulonglong)param_3 & 3) != 0));
              param_3 = (char *)((longlong)param_3 + 1)) {
            *param_3 = '0';
            uVar15 = uVar15 - 1;
          }
          cVar33 = RRcomma;
          if (3 < (int)uVar15) {
            pvVar21 = (void *)0x30303030;
            uVar10 = uVar15 >> 2;
            memset(param_3,0x30303030,(ulonglong)uVar10 << 2);
            param_3 = (char *)((longlong)param_3 + (ulonglong)uVar10 * 4);
            uVar15 = uVar15 + uVar10 * -4;
            cVar33 = RRcomma;
            uVar10 = local_2b0;
          }
        }
        for (; cVar1 = RRcomma, uVar15 != 0; uVar15 = uVar15 - 1) {
          uVar36 = uVar26;
          if ((uVar9 == 0) || (uVar36 = uVar26 + 1, uVar26 != uVar10)) {
            RRcomma = cVar33;
            *param_3 = '0';
          }
          else {
            uVar36 = 0;
            *param_3 = RRcomma;
            RRcomma = cVar33;
          }
          param_3 = (char *)((longlong)param_3 + 1);
          puVar35 = local_2f8;
          uVar26 = uVar36;
          cVar33 = RRcomma;
          RRcomma = cVar1;
        }
        RRcomma = cVar33;
        if ((p_Var3 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
           (iVar27 = (int)param_3 - (int)local_2e0, 0x1ff < iVar27 + 1)) {
          iVar25 = local_300 + iVar27;
          pvVar21 = local_2b8;
          param_3 = (*p_Var3)((char *)local_2e0,local_2b8,iVar27);
          puVar18 = (uint *)param_3;
          local_300 = iVar25;
          local_2e0 = (uint *)param_3;
          if ((uint *)param_3 == (uint *)0x0) goto LAB_14f32eda6;
        }
        uVar19 = (ulonglong)local_2b0;
        puVar18 = local_2e0;
      } while (0 < (int)local_304);
      cVar33 = (char)local_298;
    }
  }
  param_1 = local_2a0;
  uVar19 = local_2f0;
  pcVar24 = (char *)((longlong)&local_298 + 1);
  iVar25 = local_300;
  pvVar20 = local_2b8;
  while (cVar33 != '\0') {
    iVar27 = (int)cVar33;
    if ((param_1 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
       (iVar11 = ((int)puVar18 - (int)param_3) + 0x200, iVar11 < iVar27)) {
      iVar27 = iVar11;
    }
    cVar33 = cVar33 - (char)iVar27;
    local_298._1_1_ = (byte)(local_298 >> 8);
    local_298 = CONCAT11(local_298._1_1_,cVar33);
    for (; iVar27 != 0; iVar27 = iVar27 + -1) {
      cVar1 = *pcVar24;
      pcVar24 = pcVar24 + 1;
      *param_3 = cVar1;
      param_3 = (char *)((longlong)param_3 + 1);
    }
    if ((param_1 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
       (iVar27 = (int)param_3 - (int)puVar18, 0x1ff < iVar27 + 1)) {
      iVar25 = iVar25 + iVar27;
      local_2b8 = pvVar20;
      param_3 = (*param_1)((char *)puVar18,pvVar20,iVar27);
      puVar18 = (uint *)param_3;
      if ((uint *)param_3 == (uint *)0x0) goto LAB_14f32eda6;
      pvVar21 = pvVar20;
      cVar33 = (char)local_298;
      local_2e0 = (uint *)param_3;
      pvVar20 = local_2b8;
    }
  }
  uVar9 = (uint)uVar19;
  while (local_2b8 = pvVar20, uVar26 = local_2c0, uVar9 != 0) {
    uVar13 = uVar19 & 0xffffffff;
    if ((param_1 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
       (uVar9 = ((int)puVar18 - (int)param_3) + 0x200, (int)uVar9 < (int)uVar19)) {
      uVar13 = (ulonglong)uVar9;
    }
    iVar27 = (int)uVar13;
    uVar9 = (int)uVar19 - iVar27;
    uVar19 = (ulonglong)uVar9;
    if (3 < iVar27) {
      uVar23 = uVar13 >> 2;
      uVar13 = (ulonglong)(uint)(iVar27 + (int)uVar23 * -4);
      do {
        uVar4 = *puVar35;
        puVar35 = (ulonglong *)((longlong)puVar35 + 4);
        *(uint *)param_3 = (uint)uVar4;
        param_3 = (char *)((longlong)param_3 + 4);
        uVar23 = uVar23 - 1;
        pvVar21 = (void *)0x0;
      } while (uVar23 != 0);
    }
    uVar26 = (uint)uVar13;
    while (uVar26 != 0) {
      uVar23 = *puVar35;
      puVar35 = (ulonglong *)((longlong)puVar35 + 1);
      *param_3 = (char)uVar23;
      param_3 = (char *)((longlong)param_3 + 1);
      uVar26 = (int)uVar13 - 1;
      uVar13 = (ulonglong)uVar26;
    }
    if ((param_1 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
       (iVar27 = (int)param_3 - (int)puVar18, 0x1ff < iVar27 + 1)) {
      iVar25 = iVar25 + iVar27;
      param_3 = (*param_1)((char *)puVar18,pvVar20,iVar27);
      puVar18 = (uint *)param_3;
      pvVar21 = pvVar20;
      local_2e0 = (uint *)param_3;
      pvVar20 = local_2b8;
      if ((uint *)param_3 == (uint *)0x0) goto LAB_14f32eda6;
    }
  }
  while (uVar26 != 0) {
    uVar19 = (ulonglong)uVar26;
    if ((param_1 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
       (uVar9 = ((int)puVar18 - (int)param_3) + 0x200, (int)uVar9 < (int)uVar26)) {
      uVar19 = (ulonglong)uVar9;
    }
    uVar9 = (uint)uVar19;
    uVar26 = uVar26 - uVar9;
    for (; (uVar15 = (uint)uVar19, uVar9 != 0 && (((ulonglong)param_3 & 3) != 0));
        param_3 = (char *)((longlong)param_3 + 1)) {
      *param_3 = '0';
      uVar9 = uVar15 - 1;
      uVar19 = (ulonglong)uVar9;
    }
    if (3 < (int)uVar15) {
      pvVar21 = (void *)0x30303030;
      uVar19 = uVar19 >> 2;
      memset(param_3,0x30303030,uVar19 << 2);
      param_3 = (char *)((longlong)param_3 + uVar19 * 4);
      uVar15 = uVar15 + (int)uVar19 * -4;
    }
    if (uVar15 != 0) {
      pvVar21 = (void *)CONCAT71((int7)((ulonglong)pvVar21 >> 8),0x30);
      memset(param_3,(int)pvVar21,(ulonglong)uVar15);
      param_3 = (char *)((longlong)param_3 + (ulonglong)uVar15);
    }
    puVar18 = local_2e0;
    if ((param_1 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
       (iVar27 = (int)param_3 - (int)local_2e0, 0x1ff < iVar27 + 1)) {
      iVar25 = iVar25 + iVar27;
      pvVar21 = local_2b8;
      param_3 = (*param_1)((char *)local_2e0,local_2b8,iVar27);
      puVar18 = (uint *)param_3;
      local_2e0 = (uint *)param_3;
      if ((uint *)param_3 == (uint *)0x0) goto LAB_14f32eda6;
    }
  }
  puVar35 = (ulonglong *)(local_290 + 1);
  local_2f8 = puVar35;
  local_300 = iVar25;
  uVar9 = local_2d8;
  pvVar20 = local_2b8;
  while (local_2d8 = uVar9, local_2b8 = pvVar20, local_290[0] != '\0') {
    iVar25 = (int)local_290[0];
    if ((param_1 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
       (iVar27 = ((int)puVar18 - (int)param_3) + 0x200, iVar27 < iVar25)) {
      iVar25 = iVar27;
    }
    local_290[1] = (byte)((ushort)local_290 >> 8);
    local_290[0] = local_290[0] - (char)iVar25;
    for (; iVar25 != 0; iVar25 = iVar25 + -1) {
      uVar19 = *puVar35;
      puVar35 = (ulonglong *)((longlong)puVar35 + 1);
      *param_3 = (char)uVar19;
      param_3 = (char *)((longlong)param_3 + 1);
      local_2f8 = puVar35;
    }
    if ((param_1 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
       (iVar27 = (int)param_3 - (int)puVar18, 0x1ff < iVar27 + 1)) {
      iVar25 = local_300 + iVar27;
      param_3 = (*param_1)((char *)puVar18,pvVar20,iVar27);
      pvVar21 = pvVar20;
      puVar18 = (uint *)param_3;
      local_300 = iVar25;
      local_2e0 = (uint *)param_3;
      if ((uint *)param_3 == (uint *)0x0) goto LAB_14f32eda6;
    }
    uVar9 = local_2d8;
    pvVar20 = local_2b8;
  }
  if (((local_308 & 1) != 0) && (0 < (int)uVar9)) {
    do {
      uVar19 = (ulonglong)uVar9;
      if ((param_1 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
         (uVar26 = ((int)puVar18 - (int)param_3) + 0x200, (int)uVar26 < (int)uVar9)) {
        uVar19 = (ulonglong)uVar26;
      }
      uVar26 = (uint)uVar19;
      uVar9 = uVar9 - uVar26;
      for (; (uVar15 = (uint)uVar19, uVar26 != 0 && (((ulonglong)param_3 & 3) != 0));
          param_3 = (char *)((longlong)param_3 + 1)) {
        *param_3 = ' ';
        uVar26 = uVar15 - 1;
        uVar19 = (ulonglong)uVar26;
      }
      if (3 < (int)uVar15) {
        pvVar21 = (void *)0x20202020;
        uVar19 = uVar19 >> 2;
        memset(param_3,0x20202020,uVar19 << 2);
        param_3 = (char *)((longlong)param_3 + uVar19 * 4);
        uVar15 = uVar15 + (int)uVar19 * -4;
      }
      if (uVar15 != 0) {
        pvVar21 = (void *)CONCAT71((int7)((ulonglong)pvVar21 >> 8),0x20);
        memset(param_3,(int)pvVar21,(ulonglong)uVar15);
        param_3 = (char *)((longlong)param_3 + (ulonglong)uVar15);
      }
      if ((param_1 != (_func___cdecl_char_ptr_char_ptr_void_ptr_int *)0x0) &&
         (iVar27 = (int)param_3 - (int)local_2e0, 0x1ff < iVar27 + 1)) {
        iVar25 = local_300 + iVar27;
        pvVar21 = local_2b8;
        param_3 = (*param_1)((char *)local_2e0,local_2b8,iVar27);
        puVar18 = (uint *)param_3;
        local_300 = iVar25;
        local_2e0 = (uint *)param_3;
        if ((uint *)param_3 == (uint *)0x0) goto LAB_14f32eda6;
      }
      puVar18 = local_2e0;
    } while (uVar9 != 0);
  }
  param_4 = (char *)(local_2d0 + 1);
  param_2 = local_2b8;
  iVar25 = local_300;
  goto LAB_14f32d426;
switchD_14f32d740_caseD_6e:
  piVar2 = (int *)*local_2c8;
  local_2c8 = local_2c8 + 1;
  *piVar2 = ((int)param_3 - iVar27) + local_300;
  param_4 = (char *)(local_2d0 + 1);
  iVar25 = local_300;
  goto LAB_14f32d426;
}

