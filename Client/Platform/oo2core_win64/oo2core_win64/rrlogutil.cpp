// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 14

// RR_GET16_NATIVE @ 14f3cb8a0

ushort __cdecl oo2::RR_GET16_NATIVE(void *param_1)

{
  return *(ushort *)param_1;
}

// RR_GET32_NATIVE @ 14f3cb8b0

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14f3cb8c0

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// rrPrintStringWithLength @ 14f3cb8d0

void __cdecl oo2::rrPrintStringWithLength(char *param_1,int param_2)

{
  longlong lVar1;
  _func___cdecl_void_int_char_ptr_int_char_ptr *p_Var2;
  
  if (0 < param_2) {
    lVar1 = 0;
    p_Var2 = g_fp_OodleCore_Plugin_Printf;
    do {
      if (p_Var2 != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*p_Var2)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xf9,"%c");
        p_Var2 = g_fp_OodleCore_Plugin_Printf;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_2);
  }
  return;
}

// rrPrintfArrayGeneric @ 14f3cb940

void __cdecl
oo2::rrPrintfArrayGeneric
          (void *param_1,int param_2,int param_3,int param_4,char *param_5,int param_6,char *param_7
          ,char *param_8)

{
  int iVar1;
  int iVar2;
  _func___cdecl_void_int_char_ptr_int_char_ptr *UNRECOVERED_JUMPTABLE;
  
  if (((g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) &&
      ((*g_fp_OodleCore_Plugin_Printf)
                 (1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0x9e,
                  "\nstatic const int %s_size = %d;\n"),
      g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) &&
     ((*g_fp_OodleCore_Plugin_Printf)
                (1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0x9f,
                 "static const %s %s[] = \n"),
     g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
    (*g_fp_OodleCore_Plugin_Printf)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xa0,"{\n")
    ;
  }
  iVar1 = 0;
  UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
  if (0 < param_4) {
    do {
      if ((iVar1 % param_6 == 0) &&
         (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
        (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xa5,"  ");
        UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
      }
      if (param_3 == 0) {
        if (param_2 < 4) {
          if (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            iVar2 = 0xbd;
LAB_14f3cbaf4:
            (*UNRECOVERED_JUMPTABLE)
                      (1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",iVar2,param_7);
            UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
          }
        }
        else if (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          iVar2 = 0xc1;
          goto LAB_14f3cbaf4;
        }
      }
      else if (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        iVar2 = 0xa9;
        goto LAB_14f3cbaf4;
      }
      if ((iVar1 < param_4 + -1) &&
         (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
        (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xc5,",");
        UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
      }
      if ((iVar1 % param_6 == param_6 + -1) &&
         (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
        (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",199,"\n");
        UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_4);
  }
  if (param_4 % param_6 != 0) {
    if (UNRECOVERED_JUMPTABLE == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      return;
    }
    (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xcb,"\n");
    UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
  }
  if (UNRECOVERED_JUMPTABLE == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f3cbbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xcc,"};\n");
  return;
}

// rrPrintfBin2C @ 14f3cbc20

void __cdecl oo2::rrPrintfBin2C(uchar *param_1,int param_2,char *param_3)

{
  uint uVar1;
  _func___cdecl_void_int_char_ptr_int_char_ptr *UNRECOVERED_JUMPTABLE;
  
  if (((g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) &&
      ((*g_fp_OodleCore_Plugin_Printf)
                 (1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0x8b,
                  "\nstatic const int %s_size = %d;\n"),
      g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) &&
     ((*g_fp_OodleCore_Plugin_Printf)
                (1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0x8c,
                 "static const U8 %s[] = \n"),
     g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
    (*g_fp_OodleCore_Plugin_Printf)
              (1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0x8d,"{\n  ");
  }
  uVar1 = 0;
  UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
  if (0 < param_2) {
    do {
      if (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0x90,"0x%02X")
        ;
        UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
      }
      if (((int)uVar1 < param_2 + -1) &&
         (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
        (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0x92,",");
        UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
      }
      if ((uVar1 % 0x1e == 0x1d) &&
         (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
        (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0x94,"\n");
        UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < param_2);
  }
  if (UNRECOVERED_JUMPTABLE == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f3cbdc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0x96,"\n};\n\n");
  return;
}

// rrPrintfBinary @ 14f3cbde0

void __cdecl oo2::rrPrintfBinary(uint param_1,int param_2)

{
  _func___cdecl_void_int_char_ptr_int_char_ptr *p_Var1;
  int iVar2;
  char *pcVar3;
  
  p_Var1 = g_fp_OodleCore_Plugin_Printf;
  if (param_2 != 0) {
joined_r0x00014f3cbdf5:
    while (param_2 = param_2 + -1, -1 < param_2) {
      if ((param_1 >> ((byte)param_2 & 0x1f) & 1) == 0) goto code_r0x00014f3cbe20;
      if (p_Var1 != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        pcVar3 = "1";
        iVar2 = 0x84;
        goto LAB_14f3cbe32;
      }
    }
  }
  return;
code_r0x00014f3cbe20:
  if (p_Var1 != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    pcVar3 = "0";
    iVar2 = 0x85;
LAB_14f3cbe32:
    (*p_Var1)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",iVar2,pcVar3);
    p_Var1 = g_fp_OodleCore_Plugin_Printf;
  }
  goto joined_r0x00014f3cbdf5;
}

// rrPrintfCommas @ 14f3cbe60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl oo2::rrPrintfCommas(ulong64 param_1)

{
  undefined1 auStack_88 [32];
  char *local_68;
  char local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  rrsprintfcommas(local_58,param_1);
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    local_68 = local_58;
    (*g_fp_OodleCore_Plugin_Printf)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0x70,"%s");
  }
  return;
}

// rrPrintfCommasf @ 14f3cbee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl oo2::rrPrintfCommasf(double param_1,int param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  double dVar6;
  undefined1 auStack_98 [32];
  char *local_78;
  char local_68;
  char local_67 [63];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar5 = (ulonglong)(uint)param_2;
  pcVar4 = &local_68;
  if (param_1 < 0.0) {
    param_1 = (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(param_1,0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_68 = '-';
    pcVar4 = local_67;
  }
  lVar3 = 0;
  dVar6 = param_1;
  if ((__real_43e0000000000000 <= param_1) &&
     (dVar6 = param_1 - __real_43e0000000000000, dVar6 < __real_43e0000000000000)) {
    lVar3 = -0x8000000000000000;
  }
  dVar1 = param_1 - (double)(ulonglong)((longlong)dVar6 + lVar3);
  rrsprintfcommas(pcVar4,(longlong)dVar6 + lVar3);
  if (0 < param_2) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (pcVar4[lVar3] != '\0');
    pcVar4 = pcVar4 + lVar3;
    do {
      iVar2 = (int)(dVar1 * __real_4024000000000000);
      *pcVar4 = (char)iVar2 + '0';
      pcVar4 = pcVar4 + 1;
      dVar1 = dVar1 * __real_4024000000000000 - (double)iVar2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    *pcVar4 = '\0';
  }
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    local_78 = &local_68;
    (*g_fp_OodleCore_Plugin_Printf)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0x77,"%s");
  }
  return;
}

// rrPrintfF32Array @ 14f3cc060

void __cdecl
oo2::rrPrintfF32Array(float *param_1,int param_2,char *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  _func___cdecl_void_int_char_ptr_int_char_ptr *UNRECOVERED_JUMPTABLE;
  
  if (((g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) &&
      ((*g_fp_OodleCore_Plugin_Printf)
                 (1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xe4,
                  "\nstatic const int %s_size = %d;\n"),
      g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) &&
     ((*g_fp_OodleCore_Plugin_Printf)
                (1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xe5,
                 "static const F32 %s[] = \n"),
     g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
    (*g_fp_OodleCore_Plugin_Printf)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xe6,"{\n")
    ;
  }
  iVar1 = 0;
  UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
  if (0 < param_2) {
    do {
      if (iVar1 % param_4 == 0) {
        if (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xea,"  ");
          UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
          goto LAB_14f3cc172;
        }
      }
      else {
LAB_14f3cc172:
        if (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*UNRECOVERED_JUMPTABLE)
                    (1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xeb,"%*.*ff");
          UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
        }
      }
      if ((iVar1 < param_2 + -1) &&
         (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
        (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xed,",");
        UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
      }
      if ((iVar1 % param_4 == param_4 + -1) &&
         (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
        (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xef,"\n");
        UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  if (param_2 % param_4 != 0) {
    if (UNRECOVERED_JUMPTABLE == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      return;
    }
    (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xf1,"\n");
    UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
  }
  if (UNRECOVERED_JUMPTABLE == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f3cc2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xf2,"};\n");
  return;
}

// rrPrintfS32Array @ 14f3cc2c0

void __cdecl oo2::rrPrintfS32Array(int *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  int iVar1;
  _func___cdecl_void_int_char_ptr_int_char_ptr *UNRECOVERED_JUMPTABLE;
  
  if (((g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) &&
      ((*g_fp_OodleCore_Plugin_Printf)
                 (1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xd1,
                  "\nstatic const int %s_size = %d;\n"),
      g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) &&
     ((*g_fp_OodleCore_Plugin_Printf)
                (1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xd2,
                 "static const S32 %s[] = \n"),
     g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
    (*g_fp_OodleCore_Plugin_Printf)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xd3,"{\n")
    ;
  }
  iVar1 = 0;
  UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
  if (0 < param_2) {
    do {
      if (iVar1 % param_4 == 0) {
        if (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xd7,"  ");
          UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
          goto LAB_14f3cc3d5;
        }
      }
      else {
LAB_14f3cc3d5:
        if (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xd8,"%*d");
          UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
        }
      }
      if ((iVar1 < param_2 + -1) &&
         (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
        (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xda,",");
        UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
      }
      if ((iVar1 % param_4 == param_4 + -1) &&
         (UNRECOVERED_JUMPTABLE != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
        (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xdc,"\n");
        UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  if (param_2 % param_4 != 0) {
    if (UNRECOVERED_JUMPTABLE == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      return;
    }
    (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xde,"\n");
    UNRECOVERED_JUMPTABLE = g_fp_OodleCore_Plugin_Printf;
  }
  if (UNRECOVERED_JUMPTABLE == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f3cc4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(1,"v:\\devel\\projects\\oodle2\\core\\rrlogutil.cpp",0xdf,"};\n");
  return;
}

// rrsprintf9km @ 14f3cc520

void __cdecl oo2::rrsprintf9km(char *param_1,long64 param_2)

{
  if (param_2 < 1000000000) {
    rrsprintf(param_1,"%9d");
    return;
  }
  if (param_2 < 100000000000) {
    rrsprintf(param_1,"%8dk");
    return;
  }
  rrsprintf(param_1,"%8dm");
  return;
}

// rrsprintfcommas @ 14f3cc5a0

void __cdecl oo2::rrsprintfcommas(char *param_1,ulong64 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *pcVar8;
  
  if (param_2 == 0) {
    param_1[0] = '0';
    param_1[1] = '\0';
    return;
  }
  uVar6 = 1000;
  uVar7 = uVar6;
  if (999 < param_2) {
    do {
      uVar6 = uVar7 * 1000;
      if (uVar6 < uVar7 || uVar7 * 999 == 0) {
        *(undefined8 *)param_1 = s__U64_overflow_1531e01af._1_8_;
        *(undefined4 *)(param_1 + 8) = s__U64_overflow_1531e01af._9_4_;
        param_1[0xc] = s__U64_overflow_1531e01af[0xd];
        return;
      }
      uVar7 = uVar6;
    } while (uVar6 <= param_2);
  }
  bVar3 = true;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar6;
  lVar4 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar1,8);
  uVar7 = (uVar6 - lVar4 >> 1) + lVar4;
  pcVar8 = param_1;
  do {
    uVar7 = uVar7 >> 9;
    if (uVar7 == 0) {
      s__U64_overflow_1531e01af[1] = (char)s__U64_overflow_1531e01af._1_8_;
      s__U64_overflow_1531e01af[2] = SUB81(s__U64_overflow_1531e01af._1_8_,1);
      s__U64_overflow_1531e01af[3] = SUB81(s__U64_overflow_1531e01af._1_8_,2);
      s__U64_overflow_1531e01af[4] = SUB81(s__U64_overflow_1531e01af._1_8_,3);
      s__U64_overflow_1531e01af[5] = SUB81(s__U64_overflow_1531e01af._1_8_,4);
      s__U64_overflow_1531e01af[6] = SUB81(s__U64_overflow_1531e01af._1_8_,5);
      s__U64_overflow_1531e01af[7] = SUB81(s__U64_overflow_1531e01af._1_8_,6);
      s__U64_overflow_1531e01af[8] = SUB81(s__U64_overflow_1531e01af._1_8_,7);
      s__U64_overflow_1531e01af[9] = (char)s__U64_overflow_1531e01af._9_4_;
      s__U64_overflow_1531e01af[10] = SUB41(s__U64_overflow_1531e01af._9_4_,1);
      s__U64_overflow_1531e01af[0xb] = SUB41(s__U64_overflow_1531e01af._9_4_,2);
      s__U64_overflow_1531e01af[0xc] = SUB41(s__U64_overflow_1531e01af._9_4_,3);
      return;
    }
    if (bVar3) {
      pcVar5 = "%d";
    }
    else {
      *pcVar8 = ',';
      pcVar5 = "%03d";
      pcVar8 = pcVar8 + 1;
    }
    bVar3 = false;
    rrsprintf(pcVar8,pcVar5);
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (pcVar8[lVar4] != '\0');
    pcVar8 = pcVar8 + lVar4;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar7;
    lVar4 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar2,8);
    uVar7 = (uVar7 - lVar4 >> 1) + lVar4;
  } while ((longlong)pcVar8 - (longlong)param_1 < 0x1f);
  return;
}

// rrsprintfcommasf @ 14f3cc700

void __cdecl oo2::rrsprintfcommasf(char *param_1,double param_2,int param_3)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  double dVar6;
  
  uVar4 = (ulonglong)(uint)param_3;
  pcVar5 = param_1;
  if (param_2 < 0.0) {
    param_2 = (double)CONCAT44((uint)((ulonglong)param_2 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(param_2,0) ^ (uint)__xmm_80000000000000008000000000000000);
    pcVar5 = param_1 + 1;
    *param_1 = '-';
  }
  lVar3 = 0;
  dVar6 = param_2;
  if ((__real_43e0000000000000 <= param_2) &&
     (dVar6 = param_2 - __real_43e0000000000000, dVar6 < __real_43e0000000000000)) {
    lVar3 = -0x8000000000000000;
  }
  dVar1 = param_2 - (double)(ulonglong)((longlong)dVar6 + lVar3);
  rrsprintfcommas(pcVar5,(longlong)dVar6 + lVar3);
  dVar6 = __real_4024000000000000;
  if (0 < param_3) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (pcVar5[lVar3] != '\0');
    pcVar5 = pcVar5 + lVar3;
    do {
      iVar2 = (int)(dVar1 * dVar6);
      *pcVar5 = (char)iVar2 + '0';
      pcVar5 = pcVar5 + 1;
      dVar1 = dVar1 * dVar6 - (double)iVar2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *pcVar5 = '\0';
  }
  return;
}

