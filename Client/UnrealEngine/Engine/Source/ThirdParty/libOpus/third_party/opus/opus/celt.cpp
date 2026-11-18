// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 6

// celt_fatal @ 14f86384c

void celt_fatal(void)

{
  _iobuf *p_Var1;
  
  p_Var1 = (_iobuf *)__acrt_iob_func(2);
  fprintf(p_Var1,"Fatal (internal) error in %s, line %d: %s\n");
                    /* WARNING: Subroutine does not return */
  abort();
}

// comb_filter @ 14f863898

void comb_filter(void *param_1,void *param_2,uint param_3,uint param_4,int param_5,float param_6,
                float param_7,int param_8,int param_9,longlong param_10,int param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((param_6 == 0.0) && (param_7 == 0.0)) {
    if (param_2 == param_1) {
      return;
    }
  }
  else {
    lVar9 = (longlong)param_8;
    uVar8 = 0xf;
    if (0xf < (int)param_3) {
      uVar8 = param_3;
    }
    fVar1 = *(float *)(&DAT_15350e680 + lVar9 * 0xc);
    uVar13 = 0xf;
    if (0xf < (int)param_4) {
      uVar13 = param_4;
    }
    lVar14 = (longlong)param_9;
    fVar2 = *(float *)(&DAT_15350e684 + lVar9 * 0xc);
    fVar3 = *(float *)(&DAT_15350e688 + lVar9 * 0xc);
    fVar4 = *(float *)(&DAT_15350e680 + lVar14 * 0xc);
    fVar5 = *(float *)(&DAT_15350e684 + lVar14 * 0xc);
    fVar6 = *(float *)(&DAT_15350e688 + lVar14 * 0xc);
    if (((param_6 == param_7) && (uVar8 == uVar13)) && (param_8 == param_9)) {
      param_11 = 0;
    }
    lVar9 = (longlong)param_11;
    iVar10 = 0;
    if (0 < param_11) {
      lVar12 = (longlong)(int)uVar8;
      lVar11 = lVar12 * 4 - (longlong)param_2;
      pfVar15 = (float *)((longlong)param_2 + lVar12 * -4 + -4);
      lVar14 = lVar9;
      fVar17 = *(float *)((longlong)param_2 + (longlong)(int)~uVar13 * 4);
      fVar19 = *(float *)((longlong)param_2 + (longlong)(int)(-2 - uVar13) * 4);
      fVar7 = *(float *)((longlong)param_2 + (longlong)(int)(1 - uVar13) * 4);
      fVar21 = *(float *)((longlong)param_2 + (longlong)(int)uVar13 * -4);
      do {
        fVar20 = fVar7;
        fVar18 = fVar17;
        fVar17 = *(float *)(param_10 + lVar11 + 4 + (longlong)pfVar15);
        fVar7 = pfVar15[(lVar12 - (int)uVar13) + 3];
        fVar17 = fVar17 * fVar17;
        fVar16 = __real_3f800000 - fVar17;
        *(float *)((longlong)pfVar15 + (longlong)param_1 + lVar11 + 4) =
             (pfVar15[2] + *pfVar15) * fVar16 * param_6 * fVar2 +
             fVar16 * param_6 * fVar1 * pfVar15[1] + pfVar15[lVar12 + 1] +
             (pfVar15[3] + pfVar15[-1]) * fVar16 * param_6 * fVar3 +
             fVar17 * param_7 * fVar4 * fVar21 + fVar17 * param_7 * fVar5 * (fVar18 + fVar20) +
             (fVar7 + fVar19) * fVar17 * param_7 * fVar6;
        pfVar15 = pfVar15 + 1;
        lVar14 = lVar14 + -1;
        fVar17 = fVar21;
        fVar19 = fVar18;
        fVar21 = fVar20;
        iVar10 = param_11;
      } while (lVar14 != 0);
    }
    if (param_7 != 0.0) {
      comb_filter_const_sse
                ((void *)((longlong)param_1 + (longlong)iVar10 * 4),
                 (void *)((longlong)param_2 + (longlong)iVar10 * 4),uVar13,param_5 - iVar10,
                 param_7 * fVar4,param_7 * fVar5,param_7 * fVar6);
      return;
    }
    if (param_2 == param_1) {
      return;
    }
    param_2 = (void *)((longlong)param_2 + lVar9 * 4);
    param_5 = param_5 - param_11;
    param_1 = (void *)((longlong)param_1 + lVar9 * 4);
  }
  memmove(param_1,param_2,(longlong)param_5 << 2);
  return;
}

// init_caps @ 14f863bec

void init_caps(longlong param_1,int *param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar5 = 0;
  if (0 < iVar2) {
    uVar1 = uVar5;
    do {
      iVar3 = (int)uVar5;
      uVar4 = iVar3 + 1;
      uVar5 = (ulonglong)uVar4;
      *param_2 = (int)(((int)*(short *)(uVar1 + 2 + *(longlong *)(param_1 + 0x20)) -
                        (int)*(short *)(uVar1 + *(longlong *)(param_1 + 0x20)) <<
                       ((byte)param_3 & 0x1f)) *
                       (*(byte *)((longlong)((param_4 + param_3 * 2 + -1) * iVar2 + iVar3) +
                                 *(longlong *)(param_1 + 0x98)) + 0x40) * param_4) >> 2;
      param_2 = param_2 + 1;
      iVar2 = *(int *)(param_1 + 8);
      uVar1 = uVar1 + 2;
    } while ((int)uVar4 < iVar2);
  }
  return;
}

// opus_get_version_string @ 14f863c90

char * opus_get_version_string(void)

{
  return "libopus unknown";
}

// opus_strerror @ 14f863ca0

char * opus_strerror(int param_1)

{
  if (param_1 + 7U < 8) {
    return (&PTR_s_success_15350e6b0)[-(longlong)param_1];
  }
  return "unknown error";
}

// resampling_factor @ 14f863ccc

undefined8 resampling_factor(int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_1 == 8000) {
    uVar2 = 6;
  }
  else if (param_1 == 12000) {
    uVar2 = 4;
  }
  else if (param_1 == 16000) {
    uVar2 = 3;
  }
  else if (param_1 == 24000) {
    uVar2 = 2;
  }
  else {
    if (param_1 != 48000) {
      celt_fatal("assertion failed: 0","../../../third_party/opus/src/celt/celt.c",0x54);
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}

