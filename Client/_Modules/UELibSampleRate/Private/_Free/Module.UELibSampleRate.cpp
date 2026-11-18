// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UELibSampleRate
// Functions: 49

// `dynamic_initializer_for_'ModuleRegistrantUELibSampleRate'' @ 140f89c50

void __cdecl _dynamic_initializer_for__ModuleRegistrantUELibSampleRate__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "UELibSampleRate";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"UELibSampleRate",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FLibSampleRateModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 144496000

void * __thiscall
FLibSampleRateModule::_scalar_deleting_destructor_(FLibSampleRateModule *this,uint param_1)

{
  *this = (FLibSampleRateModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// calc_output_hex @ 144496070

void __cdecl
calc_output_hex(SINC_FILTER *param_1,int param_2,int param_3,int param_4,double param_5,
               float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  double *pdVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  float *pfVar16;
  double *pdVar17;
  int iVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  iVar18 = param_1->coeff_half_len * 0x1000;
  iVar12 = (iVar18 - param_4) / param_3;
  uVar19 = iVar12 * param_3 + param_4;
  iVar12 = param_1->b_current - iVar12 * param_2;
  if (iVar12 < 0) {
    iVar15 = 5 - iVar12;
    iVar15 = iVar15 / 6 + (iVar15 >> 0x1f) +
             (int)(((longlong)iVar15 / 6 + ((longlong)iVar15 >> 0x3f) & 0xffffffffU) >> 0x1f);
    uVar19 = uVar19 - iVar15 * param_3;
    iVar12 = iVar12 + iVar15 * 6;
  }
  dVar23 = 0.0;
  dVar24 = 0.0;
  dVar25 = 0.0;
  dVar5 = 0.0;
  dVar6 = 0.0;
  dVar7 = 0.0;
  dVar8 = 0.0;
  if (-1 < (int)uVar19) {
    pfVar16 = param_1->buffer + (longlong)iVar12 + 1;
    dVar8 = 0.0;
    dVar7 = 0.0;
    dVar6 = 0.0;
    dVar5 = 0.0;
    do {
      fVar4 = param_1->coeffs[uVar19 >> 0xc];
      dVar21 = (double)(param_1->coeffs[(ulonglong)(uVar19 >> 0xc) + 1] - fVar4) *
               (double)(uVar19 & 0xfff) * __real_3f30000000000000 + (double)fVar4;
      dVar8 = dVar8 + (double)pfVar16[-1] * dVar21;
      dVar7 = dVar7 + (double)*pfVar16 * dVar21;
      dVar6 = dVar6 + (double)pfVar16[1] * dVar21;
      pfVar1 = pfVar16 + 3;
      dVar5 = dVar5 + (double)pfVar16[2] * dVar21;
      pfVar2 = pfVar16 + 4;
      pfVar16 = pfVar16 + 6;
      uVar19 = uVar19 - param_3;
      dVar25 = dVar25 + (double)*pfVar1 * dVar21;
      dVar24 = dVar24 + (double)*pfVar2 * dVar21;
    } while (-1 < (int)uVar19);
  }
  dVar21 = 0.0;
  dVar9 = 0.0;
  dVar10 = 0.0;
  dVar11 = 0.0;
  iVar12 = (iVar18 - (param_3 - param_4)) / param_3;
  dVar20 = 0.0;
  uVar19 = iVar12 * param_3 + (param_3 - param_4);
  pdVar17 = (double *)
            (param_1->buffer + (longlong)((iVar12 + 1) * param_2 + param_1->b_current) + 1);
  do {
    lVar14 = (longlong)(int)uVar19;
    fVar4 = param_1->coeffs[lVar14 >> 0xc];
    uVar13 = uVar19 & 0xfff;
    uVar19 = uVar19 - param_3;
    dVar22 = (double)(param_1->coeffs[(lVar14 >> 0xc) + 1] - fVar4) * (double)uVar13 *
             __real_3f30000000000000 + (double)fVar4;
    dVar20 = (double)*(float *)((longlong)pdVar17 + -4) * dVar22 + dVar20;
    dVar11 = dVar11 + (double)*(float *)pdVar17 * dVar22;
    dVar10 = dVar10 + (double)*(float *)((longlong)pdVar17 + 4) * dVar22;
    dVar9 = dVar9 + (double)*(float *)(pdVar17 + 1) * dVar22;
    dVar21 = dVar21 + (double)*(float *)((longlong)pdVar17 + 0xc) * dVar22;
    pdVar3 = pdVar17 + 2;
    pdVar17 = pdVar17 + -3;
    dVar23 = dVar23 + (double)*(float *)pdVar3 * dVar22;
  } while (0 < (int)uVar19);
  *param_6 = (float)((dVar8 + dVar20) * param_5);
  param_6[1] = (float)((dVar7 + dVar11) * param_5);
  param_6[2] = (float)((dVar6 + dVar10) * param_5);
  param_6[3] = (float)((dVar5 + dVar9) * param_5);
  param_6[4] = (float)((dVar25 + dVar21) * param_5);
  param_6[5] = (float)((dVar24 + dVar23) * param_5);
  return;
}

// calc_output_multi @ 1444963d0

void __cdecl
calc_output_multi(SINC_FILTER *param_1,int param_2,int param_3,int param_4,double param_5,
                 float *param_6)

{
  float *pfVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  int iVar7;
  int iVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  longlong lVar12;
  ulonglong uVar13;
  float *pfVar14;
  ulonglong uVar15;
  float *pfVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  double dVar23;
  
  pdVar11 = param_1->left_calc;
  iVar21 = param_1->coeff_half_len * 0x1000;
  iVar7 = (iVar21 - param_3) / param_2;
  uVar17 = iVar7 * param_2 + param_3;
  iVar7 = param_1->b_current - iVar7 * param_4;
  if (iVar7 < 0) {
    iVar8 = ((param_4 - iVar7) + -1) / param_4;
    uVar17 = uVar17 - iVar8 * param_2;
    iVar7 = iVar7 + iVar8 * param_4;
  }
  lVar18 = (longlong)param_4;
  memset(pdVar11,0,lVar18 * 8);
  dVar3 = __real_3f30000000000000;
  if (-1 < (int)uVar17) {
    lVar20 = (longlong)iVar7;
    pfVar16 = param_1->buffer + lVar20 + 1;
    do {
      fVar2 = param_1->coeffs[uVar17 >> 0xc];
      dVar23 = (double)(param_1->coeffs[(ulonglong)(uVar17 >> 0xc) + 1] - fVar2) *
               (double)(uVar17 & 0xfff) * dVar3 + (double)fVar2;
      lVar12 = 0;
      if (3 < lVar18) {
        pdVar10 = param_1->left_calc + 2;
        lVar19 = (lVar18 - 4U >> 2) + 1;
        lVar12 = lVar19 * 4;
        pfVar14 = pfVar16;
        do {
          pdVar10[-2] = (double)pfVar14[-1] * dVar23 + pdVar10[-2];
          pdVar10[-1] = (double)*pfVar14 * dVar23 + pdVar10[-1];
          *pdVar10 = (double)pfVar14[1] * dVar23 + *pdVar10;
          pfVar1 = pfVar14 + 2;
          pfVar14 = pfVar14 + 4;
          pdVar10[1] = (double)*pfVar1 * dVar23 + pdVar10[1];
          pdVar10 = pdVar10 + 4;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      if (lVar12 < lVar18) {
        pfVar14 = param_1->buffer + lVar20 + lVar12;
        do {
          fVar2 = *pfVar14;
          pfVar14 = pfVar14 + 1;
          pdVar11[lVar12] = (double)fVar2 * dVar23 + pdVar11[lVar12];
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar18);
      }
      lVar20 = lVar20 + lVar18;
      pfVar16 = pfVar16 + lVar18;
      uVar17 = uVar17 - param_2;
    } while (-1 < (int)uVar17);
  }
  pdVar10 = param_1->right_calc;
  uVar22 = (ulonglong)param_4;
  iVar21 = (iVar21 - (param_2 - param_3)) / param_2;
  uVar17 = iVar21 * param_2 + (param_2 - param_3);
  iVar7 = param_1->b_current;
  memset(pdVar10,0,lVar18 * 8);
  lVar20 = (longlong)((iVar21 + 1) * param_4 + iVar7);
  uVar15 = 0;
  pfVar16 = param_1->buffer + lVar20 + 1;
  do {
    fVar2 = param_1->coeffs[(longlong)(int)uVar17 >> 0xc];
    dVar23 = (double)(param_1->coeffs[((longlong)(int)uVar17 >> 0xc) + 1] - fVar2) *
             (double)(uVar17 & 0xfff) * dVar3 + (double)fVar2;
    uVar13 = uVar15;
    if (3 < lVar18) {
      pdVar9 = param_1->right_calc + 2;
      lVar12 = (lVar18 - 4U >> 2) + 1;
      uVar13 = lVar12 * 4;
      pfVar14 = pfVar16;
      do {
        pdVar9[-2] = (double)pfVar14[-1] * dVar23 + pdVar9[-2];
        pdVar9[-1] = (double)*pfVar14 * dVar23 + pdVar9[-1];
        *pdVar9 = (double)pfVar14[1] * dVar23 + *pdVar9;
        pfVar1 = pfVar14 + 2;
        pfVar14 = pfVar14 + 4;
        pdVar9[1] = (double)*pfVar1 * dVar23 + pdVar9[1];
        pdVar9 = pdVar9 + 4;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if ((longlong)uVar13 < lVar18) {
      pfVar14 = param_1->buffer + uVar13 + lVar20;
      do {
        fVar2 = *pfVar14;
        pfVar14 = pfVar14 + 1;
        pdVar10[uVar13] = (double)fVar2 * dVar23 + pdVar10[uVar13];
        uVar13 = uVar13 + 1;
      } while ((longlong)uVar13 < lVar18);
    }
    uVar17 = uVar17 - param_2;
    lVar20 = lVar20 - lVar18;
    pfVar16 = pfVar16 + -lVar18;
  } while (0 < (int)uVar17);
  uVar17 = 0;
  if ((((0 < param_4) && (7 < (uint)param_4)) &&
      ((uVar17 = 0, pdVar11 + (uVar22 - 1) < param_6 || (param_6 + (uVar22 - 1) < pdVar11)))) &&
     ((pdVar10 + (uVar22 - 1) < param_6 || (param_6 + (uVar22 - 1) < pdVar10)))) {
    pfVar16 = param_6 + 4;
    pdVar10 = param_1->left_calc + 2;
    uVar13 = uVar15;
    do {
      uVar17 = (int)uVar15 + 8;
      uVar15 = (ulonglong)uVar17;
      uVar13 = uVar13 + 8;
      dVar3 = pdVar10[0x80];
      dVar23 = pdVar10[0x81];
      *(ulonglong *)(pfVar16 + -4) =
           CONCAT44((float)((pdVar10[0x7f] + pdVar10[-1]) * param_5),
                    (float)((pdVar10[0x7e] + pdVar10[-2]) * param_5));
      dVar4 = pdVar10[0x82];
      dVar5 = pdVar10[0x83];
      *(ulonglong *)(pfVar16 + -2) =
           CONCAT44((float)((dVar23 + pdVar10[1]) * param_5),(float)((dVar3 + *pdVar10) * param_5));
      dVar3 = pdVar10[0x84];
      dVar23 = pdVar10[0x85];
      *(ulonglong *)pfVar16 =
           CONCAT44((float)((dVar5 + pdVar10[3]) * param_5),(float)((dVar4 + pdVar10[2]) * param_5))
      ;
      pdVar9 = pdVar10 + 4;
      pdVar6 = pdVar10 + 5;
      pdVar10 = pdVar10 + 8;
      *(ulonglong *)(pfVar16 + 2) =
           CONCAT44((float)((dVar23 + *pdVar6) * param_5),(float)((dVar3 + *pdVar9) * param_5));
      pfVar16 = pfVar16 + 8;
    } while ((longlong)uVar13 < (longlong)(uVar22 & 0xfffffffffffffff8));
  }
  lVar20 = (longlong)(int)uVar17;
  if (lVar20 < lVar18) {
    if (3 < lVar18 - lVar20) {
      pdVar10 = param_1->left_calc + lVar20 + 1;
      pfVar16 = param_6 + lVar20 + 2;
      lVar12 = ((lVar18 - lVar20) - 4U >> 2) + 1;
      lVar20 = lVar20 + lVar12 * 4;
      do {
        pfVar16[-2] = (float)((pdVar10[-1] + pdVar10[0x7f]) * param_5);
        pfVar16[-1] = (float)((*pdVar10 + pdVar10[0x80]) * param_5);
        *pfVar16 = (float)((pdVar10[1] + pdVar10[0x81]) * param_5);
        pdVar9 = pdVar10 + 2;
        pdVar6 = pdVar10 + 0x82;
        pdVar10 = pdVar10 + 4;
        pfVar16[1] = (float)((*pdVar9 + *pdVar6) * param_5);
        pfVar16 = pfVar16 + 4;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      if (lVar18 <= lVar20) {
        return;
      }
    }
    pdVar11 = pdVar11 + lVar20;
    do {
      pdVar10 = pdVar11 + 0x80;
      dVar3 = *pdVar11;
      pdVar11 = pdVar11 + 1;
      param_6[lVar20] = (float)((*pdVar10 + dVar3) * param_5);
      lVar20 = lVar20 + 1;
    } while (lVar20 < lVar18);
  }
  return;
}

// calc_output_quad @ 144496930

void __cdecl
calc_output_quad(SINC_FILTER *param_1,int param_2,int param_3,int param_4,double param_5,
                float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  double *pdVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  float *pfVar13;
  double *pdVar14;
  int iVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  iVar15 = param_1->coeff_half_len * 0x1000;
  iVar9 = (iVar15 - param_4) / param_3;
  uVar16 = iVar9 * param_3 + param_4;
  iVar9 = param_1->b_current - iVar9 * param_2;
  if (iVar9 < 0) {
    iVar10 = (int)((3 - iVar9) + (3 - iVar9 >> 0x1f & 3U)) >> 2;
    iVar9 = iVar9 + iVar10 * 4;
    uVar16 = uVar16 - iVar10 * param_3;
  }
  dVar19 = 0.0;
  dVar5 = 0.0;
  dVar6 = 0.0;
  dVar7 = 0.0;
  dVar8 = 0.0;
  if (-1 < (int)uVar16) {
    pfVar13 = param_1->buffer + (longlong)iVar9 + 1;
    dVar8 = 0.0;
    dVar7 = 0.0;
    dVar6 = 0.0;
    dVar5 = 0.0;
    do {
      fVar4 = param_1->coeffs[uVar16 >> 0xc];
      dVar17 = (double)(param_1->coeffs[(ulonglong)(uVar16 >> 0xc) + 1] - fVar4) *
               (double)(uVar16 & 0xfff) * __real_3f30000000000000 + (double)fVar4;
      dVar8 = dVar8 + (double)pfVar13[-1] * dVar17;
      pfVar1 = pfVar13 + 1;
      dVar7 = dVar7 + (double)*pfVar13 * dVar17;
      pfVar2 = pfVar13 + 2;
      pfVar13 = pfVar13 + 4;
      uVar16 = uVar16 - param_3;
      dVar6 = dVar6 + (double)*pfVar1 * dVar17;
      dVar5 = dVar5 + (double)*pfVar2 * dVar17;
    } while (-1 < (int)uVar16);
  }
  dVar20 = 0.0;
  dVar21 = 0.0;
  dVar17 = 0.0;
  iVar9 = (iVar15 - (param_3 - param_4)) / param_3;
  uVar16 = iVar9 * param_3 + (param_3 - param_4);
  pdVar14 = (double *)(param_1->buffer + (longlong)((iVar9 + 1) * param_2 + param_1->b_current) + 1)
  ;
  do {
    lVar12 = (longlong)(int)uVar16;
    fVar4 = param_1->coeffs[lVar12 >> 0xc];
    uVar11 = uVar16 & 0xfff;
    uVar16 = uVar16 - param_3;
    dVar18 = (double)(param_1->coeffs[(lVar12 >> 0xc) + 1] - fVar4) * (double)uVar11 *
             __real_3f30000000000000 + (double)fVar4;
    dVar17 = dVar17 + (double)*(float *)((longlong)pdVar14 + -4) * dVar18;
    pfVar13 = (float *)((longlong)pdVar14 + 4);
    dVar21 = dVar21 + (double)*(float *)pdVar14 * dVar18;
    pdVar3 = pdVar14 + 1;
    pdVar14 = pdVar14 + -2;
    dVar20 = dVar20 + (double)*pfVar13 * dVar18;
    dVar19 = dVar19 + (double)*(float *)pdVar3 * dVar18;
  } while (0 < (int)uVar16);
  *param_6 = (float)((dVar17 + dVar8) * param_5);
  param_6[1] = (float)((dVar21 + dVar7) * param_5);
  param_6[2] = (float)((dVar20 + dVar6) * param_5);
  param_6[3] = (float)((dVar19 + dVar5) * param_5);
  return;
}

// linear_copy @ 144496bd0

SRC_ERR __cdecl linear_copy(SRC_STATE_tag *param_1,SRC_STATE_tag *param_2)

{
  ulong64 _Size;
  void *_Src;
  void *_Dst;
  
  _Src = param_1->private_data;
  if (_Src != (void *)0x0) {
    _Size = (longlong)param_1->channels * 4 + 0x18;
    _Dst = FMemory::Malloc(_Size,0);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,_Src,_Size);
      param_2->private_data = _Dst;
    }
    return (uint)(_Dst == (void *)0x0);
  }
  return SRC_ERR_NO_PRIVATE;
}

// linear_get_description @ 144496c60

char * __cdecl linear_get_description(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_1 == 4) {
    pcVar1 = "Linear interpolator, very fast, poor quality.";
  }
  return pcVar1;
}

// linear_get_name @ 144496c80

char * __cdecl linear_get_name(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_1 == 4) {
    pcVar1 = "Linear Interpolator";
  }
  return pcVar1;
}

// linear_reset @ 144496ca0

void __cdecl linear_reset(SRC_STATE_tag *param_1)

{
  void *pvVar1;
  
  pvVar1 = param_1->private_data;
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)((longlong)pvVar1 + 4) = 0;
    memset((void *)((longlong)pvVar1 + 0x18),0,(longlong)param_1->channels << 2);
    return;
  }
  return;
}

// linear_set_converter @ 144496cd0

SRC_ERR __cdecl linear_set_converter(SRC_STATE_tag *param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  if (param_2 != 4) {
    return SRC_ERR_BAD_CONVERTER;
  }
  if (param_1->private_data != (void *)0x0) {
    FMemory::Free(param_1->private_data);
    param_1->private_data = (void *)0x0;
  }
  puVar2 = FMemory::Malloc((longlong)param_1->channels * 4 + 0x18,0);
  param_1->private_data = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return SRC_ERR_MALLOC_FAILED;
  }
  *puVar2 = 0x787c4fc;
  pvVar1 = param_1->private_data;
  param_1->const_process = linear_vari_process;
  param_1->vari_process = linear_vari_process;
  param_1->reset = linear_reset;
  param_1->copy = linear_copy;
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)((longlong)pvVar1 + 4) = 0;
    memset((void *)((longlong)pvVar1 + 0x18),0,(longlong)param_1->channels << 2);
  }
  return SRC_ERR_NO_ERROR;
}

// linear_vari_process @ 144496d90

SRC_ERR __cdecl linear_vari_process(SRC_STATE_tag *param_1,SRC_DATA *param_2)

{
  float fVar1;
  void *pvVar2;
  double dVar3;
  uint uVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float *pfVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong uVar19;
  
  if (param_2->input_frames < 1) {
    return SRC_ERR_NO_ERROR;
  }
  pvVar2 = param_1->private_data;
  if (pvVar2 == (void *)0x0) {
    return SRC_ERR_NO_PRIVATE;
  }
  uVar14 = 0;
  iVar6 = 0;
  if (*(int *)((longlong)pvVar2 + 4) == 0) {
    uVar9 = uVar14;
    uVar13 = uVar14;
    if (0 < param_1->channels) {
      do {
        uVar17 = (int)uVar13 + 1;
        *(undefined4 *)(uVar9 + 0x18 + (longlong)pvVar2) =
             *(undefined4 *)(uVar9 + (longlong)param_2->data_in);
        uVar9 = uVar9 + 4;
        uVar13 = (ulonglong)uVar17;
      } while ((int)uVar17 < param_1->channels);
    }
    *(undefined4 *)((longlong)pvVar2 + 4) = 1;
  }
  iVar7 = param_2->input_frames * param_1->channels;
  *(int *)((longlong)pvVar2 + 8) = iVar7;
  iVar8 = param_2->output_frames * param_1->channels;
  *(undefined4 *)((longlong)pvVar2 + 0x14) = 0;
  *(undefined4 *)((longlong)pvVar2 + 0xc) = 0;
  *(int *)((longlong)pvVar2 + 0x10) = iVar8;
  dVar5 = __real_3bc79ca10c924223;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar3 = __real_3ff0000000000000;
  dVar21 = param_1->last_ratio;
  if ((dVar21 < __real_3f70000000000000) || (__real_4070000000000000 < dVar21)) {
    return SRC_ERR_BAD_INTERNAL_STATE;
  }
  uVar9 = uVar14;
  uVar13 = uVar14;
  for (dVar23 = param_1->last_position;
      ((iVar12 = (int)uVar13, dVar23 < dVar3 && (iVar6 = (int)uVar9, iVar12 < iVar8)) &&
      ((dVar23 + dVar3) * (double)param_1->channels + (double)iVar6 <= (double)iVar7));
      dVar23 = dVar23 + dVar3 / dVar21) {
    if (0 < iVar8) {
      dVar22 = param_1->last_ratio;
      dVar20 = dVar22 - param_2->src_ratio;
      if (dVar5 < (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar4,
                                   SUB84(dVar20,0) & uVar17)) {
        dVar21 = ((param_2->src_ratio - dVar22) * (double)iVar12) / (double)iVar8 + dVar22;
      }
    }
    uVar10 = uVar14;
    uVar16 = uVar14;
    uVar19 = uVar13;
    if (0 < param_1->channels) {
      do {
        fVar1 = *(float *)(uVar10 + 0x18 + (longlong)pvVar2);
        uVar15 = (int)uVar16 + 1;
        param_2->data_out[(int)uVar13] =
             (float)((double)(*(float *)(uVar10 + (longlong)param_2->data_in) - fVar1) * dVar23 +
                    (double)fVar1);
        uVar18 = *(int *)((longlong)pvVar2 + 0x14) + 1;
        uVar19 = (ulonglong)uVar18;
        *(uint *)((longlong)pvVar2 + 0x14) = uVar18;
        uVar13 = (ulonglong)uVar18;
        uVar10 = uVar10 + 4;
        uVar16 = (ulonglong)uVar15;
      } while ((int)uVar15 < param_1->channels);
      iVar8 = *(int *)((longlong)pvVar2 + 0x10);
      uVar9 = (ulonglong)*(uint *)((longlong)pvVar2 + 0xc);
      iVar7 = *(int *)((longlong)pvVar2 + 8);
    }
    iVar6 = (int)uVar9;
    uVar13 = uVar19;
  }
  dVar22 = dVar23 - (double)(int)ROUND(dVar23);
  if (dVar22 < 0.0) {
    dVar22 = dVar22 + dVar3;
  }
  iVar6 = (int)ROUND(dVar23 - dVar22) * param_1->channels + iVar6;
  *(int *)((longlong)pvVar2 + 0xc) = iVar6;
  if (iVar12 < iVar8) {
    do {
      iVar12 = param_1->channels;
      if ((double)iVar7 <= (double)iVar12 * dVar22 + (double)iVar6) break;
      if (0 < iVar8) {
        dVar23 = param_1->last_ratio;
        dVar20 = dVar23 - param_2->src_ratio;
        if (dVar5 < (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar4,
                                     SUB84(dVar20,0) & uVar17)) {
          dVar21 = ((param_2->src_ratio - dVar23) * (double)(int)uVar13) / (double)iVar8 + dVar23;
        }
      }
      uVar9 = uVar14;
      if (0 < iVar12) {
        do {
          iVar6 = (int)uVar9;
          fVar1 = param_2->data_in[(*(int *)((longlong)pvVar2 + 0xc) - iVar12) + iVar6];
          uVar9 = (ulonglong)(iVar6 + 1U);
          param_2->data_out[(int)uVar13] =
               (float)((double)(param_2->data_in[*(int *)((longlong)pvVar2 + 0xc) + iVar6] - fVar1)
                       * dVar22 + (double)fVar1);
          *(int *)((longlong)pvVar2 + 0x14) = *(int *)((longlong)pvVar2 + 0x14) + 1;
          iVar12 = param_1->channels;
          uVar13 = (ulonglong)*(uint *)((longlong)pvVar2 + 0x14);
        } while ((int)(iVar6 + 1U) < iVar12);
        iVar6 = *(int *)((longlong)pvVar2 + 0xc);
        iVar7 = *(int *)((longlong)pvVar2 + 8);
      }
      dVar23 = dVar22 + dVar3 / dVar21;
      dVar22 = dVar23 - (double)(int)ROUND(dVar23);
      if (dVar22 < 0.0) {
        dVar22 = dVar22 + dVar3;
      }
      uVar13 = (ulonglong)*(uint *)((longlong)pvVar2 + 0x14);
      iVar6 = (int)ROUND(dVar23 - dVar22) * iVar12 + iVar6;
      *(int *)((longlong)pvVar2 + 0xc) = iVar6;
      iVar8 = *(int *)((longlong)pvVar2 + 0x10);
    } while ((int)*(uint *)((longlong)pvVar2 + 0x14) < iVar8);
  }
  if (iVar7 < iVar6) {
    iVar8 = param_1->channels;
    *(int *)((longlong)pvVar2 + 0xc) = iVar7;
    dVar22 = dVar22 + (double)((iVar6 - iVar7) / iVar8);
  }
  param_1->last_position = dVar22;
  if ((0 < *(int *)((longlong)pvVar2 + 0xc)) && (iVar6 = param_1->channels, 0 < iVar6)) {
    pfVar11 = (float *)((longlong)pvVar2 + 0x18);
    do {
      iVar7 = (int)uVar14;
      uVar17 = iVar7 + 1;
      uVar14 = (ulonglong)uVar17;
      *pfVar11 = param_2->data_in[(*(int *)((longlong)pvVar2 + 0xc) - iVar6) + iVar7];
      iVar6 = param_1->channels;
      pfVar11 = pfVar11 + 1;
    } while ((int)uVar17 < iVar6);
  }
  param_1->last_ratio = dVar21;
  param_2->input_frames_used = *(int *)((longlong)pvVar2 + 0xc) / param_1->channels;
  param_2->output_frames_gen = *(int *)((longlong)pvVar2 + 0x14) / param_1->channels;
  return SRC_ERR_NO_ERROR;
}

// prepare_data @ 144497210

int __cdecl prepare_data(SINC_FILTER *param_1,int param_2,SRC_DATA *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1->b_real_end < 0) && (param_3->data_in != (float *)0x0)) {
    iVar1 = param_1->b_current;
    iVar4 = param_1->b_len;
    if (iVar1 == 0) {
      param_1->b_end = param_4;
      param_1->b_current = param_4;
      iVar1 = iVar4 + param_4 * -2;
      iVar3 = param_4;
    }
    else {
      iVar3 = param_1->b_end;
      if (iVar3 + param_2 + param_4 < iVar4) {
        iVar1 = (iVar4 - iVar1) - param_4;
        if (iVar1 < 1) {
          iVar1 = 0;
        }
      }
      else {
        iVar3 = (iVar3 - iVar1) + param_4;
        memmove(param_1->buffer,
                (void *)((longlong)param_1 + (((longlong)iVar1 - (longlong)param_4) + 0x212) * 4),
                (longlong)iVar3 << 2);
        iVar4 = param_1->b_len;
        iVar1 = iVar4 + param_4 * -2;
        param_1->b_current = param_4;
        param_1->b_end = iVar3;
        if (iVar1 < 1) {
          iVar1 = 0;
        }
      }
    }
    iVar2 = param_1->in_count - param_1->in_used;
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
    iVar2 = iVar2 - iVar2 % param_2;
    if ((iVar2 < 0) || (iVar4 < iVar3 + iVar2)) {
      iVar1 = 0x15;
    }
    else {
      memcpy(param_1->buffer + iVar3,param_3->data_in + param_1->in_used,(longlong)iVar2 << 2);
      param_1->in_used = param_1->in_used + iVar2;
      iVar2 = param_1->b_end + iVar2;
      param_1->b_end = iVar2;
      if (param_1->in_used == param_1->in_count) {
        iVar1 = iVar2 - param_1->b_current;
        if ((iVar1 < param_4 * 2) && (param_3->end_of_input != 0)) {
          iVar4 = param_4 + 5;
          if (param_1->b_len - iVar2 < iVar4) {
            iVar2 = iVar1 + param_4;
            memmove(param_1->buffer,
                    (void *)((longlong)param_1 +
                            (((longlong)param_1->b_current - (longlong)param_4) + 0x212) * 4),
                    (longlong)iVar2 << 2);
            param_1->b_current = param_4;
            param_1->b_end = iVar2;
          }
          param_1->b_real_end = iVar2;
          if ((iVar4 < 0) || (param_1->b_len < iVar4 + iVar2)) {
            iVar4 = param_1->b_len - iVar2;
          }
          memset(param_1->buffer + iVar2,0,(longlong)iVar4 << 2);
          param_1->b_end = param_1->b_end + iVar4;
        }
      }
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}

// sinc_copy @ 1444973f0

SRC_ERR __cdecl sinc_copy(SRC_STATE_tag *param_1,SRC_STATE_tag *param_2)

{
  ulong64 _Size;
  void *_Src;
  void *_Dst;
  
  _Src = param_1->private_data;
  if (_Src != (void *)0x0) {
    _Size = (longlong)(*(int *)((longlong)_Src + 0x44) + param_1->channels) * 4 + 0x850;
    _Dst = FMemory::Malloc(_Size,0);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,_Src,_Size);
      param_2->private_data = _Dst;
    }
    return (uint)(_Dst == (void *)0x0);
  }
  return SRC_ERR_NO_PRIVATE;
}

// sinc_get_description @ 144497480

char * __cdecl sinc_get_description(int param_1)

{
  if (param_1 == 0) {
    return "Band limited sinc interpolation, best quality, 144dB SNR, 96% BW.";
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return (char *)0x0;
    }
    return "Band limited sinc interpolation, fastest, 97dB SNR, 80% BW.";
  }
  return "Band limited sinc interpolation, medium quality, 121dB SNR, 90% BW.";
}

// sinc_get_name @ 1444974b0

char * __cdecl sinc_get_name(int param_1)

{
  if (param_1 == 0) {
    return "Best Sinc Interpolator";
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return (char *)0x0;
    }
    return "Fastest Sinc Interpolator";
  }
  return "Medium Sinc Interpolator";
}

// sinc_hex_vari_process @ 1444974e0

SRC_ERR __cdecl sinc_hex_vari_process(SRC_STATE_tag *param_1,SRC_DATA *param_2)

{
  double dVar1;
  SINC_FILTER *pSVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  SRC_ERR SVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  pSVar2 = param_1->private_data;
  if (pSVar2 == (SINC_FILTER *)0x0) {
    SVar9 = SRC_ERR_NO_PRIVATE;
  }
  else {
    pSVar2->in_count = param_2->input_frames * param_1->channels;
    iVar12 = param_2->output_frames * param_1->channels;
    pSVar2->out_gen = 0;
    pSVar2->in_used = 0;
    pSVar2->out_count = iVar12;
    dVar5 = __real_3ff0000000000000;
    dVar1 = param_1->last_ratio;
    if ((dVar1 < __real_3f70000000000000) || (__real_4070000000000000 < dVar1)) {
      SVar9 = SRC_ERR_BAD_INTERNAL_STATE;
    }
    else {
      dVar15 = ((double)pSVar2->coeff_half_len + __real_4000000000000000) /
               (double)pSVar2->index_inc;
      dVar13 = param_2->src_ratio;
      if (dVar1 <= param_2->src_ratio) {
        dVar13 = dVar1;
      }
      if (dVar13 < __real_3ff0000000000000) {
        dVar15 = dVar15 / dVar13;
      }
      dVar13 = param_1->last_position;
      iVar11 = ((int)ROUND(dVar15) + 1) * param_1->channels;
      dVar15 = dVar13 - (double)(int)ROUND(dVar13);
      if (dVar15 < 0.0) {
        dVar15 = dVar15 + __real_3ff0000000000000;
      }
      iVar10 = pSVar2->b_len;
      dVar4 = __real_3ff0000000000000 / dVar1 + __real_3bc79ca10c924223;
      lVar3 = (longlong)((int)ROUND(dVar13 - dVar15) * param_1->channels + pSVar2->b_current) %
              (longlong)iVar10;
      pSVar2->b_current = (int)lVar3;
      dVar8 = __real_40b0000000000000;
      dVar13 = __real_3ddb7cdfd9d7bdbb;
      uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      if (0 < iVar12) {
        do {
          iVar12 = (int)lVar3;
          if (((iVar10 - iVar12) + pSVar2->b_end) % iVar10 <= iVar11) {
            SVar9 = prepare_data(pSVar2,param_1->channels,param_2,iVar11);
            param_1->error = SVar9;
            if (SVar9 != SRC_ERR_NO_ERROR) {
              return SVar9;
            }
            iVar12 = pSVar2->b_current;
            if (((pSVar2->b_len - iVar12) + pSVar2->b_end) % pSVar2->b_len <= iVar11) break;
          }
          if ((-1 < pSVar2->b_real_end) &&
             ((double)pSVar2->b_real_end <= (double)iVar12 + dVar15 + dVar4)) break;
          if (0 < pSVar2->out_count) {
            dVar16 = param_1->last_ratio;
            dVar14 = dVar16 - param_2->src_ratio;
            if (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar7,
                                          SUB84(dVar14,0) & uVar6)) {
              dVar1 = ((param_2->src_ratio - dVar16) * (double)pSVar2->out_gen) /
                      (double)pSVar2->out_count + dVar16;
            }
          }
          dVar16 = dVar1;
          if (dVar5 <= dVar1) {
            dVar16 = dVar5;
          }
          dVar16 = dVar16 * (double)pSVar2->index_inc;
          calc_output_hex(pSVar2,param_1->channels,(int)ROUND(dVar16 * dVar8),
                          (int)ROUND(dVar16 * dVar15 * dVar8),dVar16 / (double)pSVar2->index_inc,
                          param_2->data_out + pSVar2->out_gen);
          iVar12 = pSVar2->out_gen + 6;
          pSVar2->out_gen = iVar12;
          dVar16 = dVar15 + dVar5 / dVar1;
          dVar15 = dVar16 - (double)(int)ROUND(dVar16);
          if (dVar15 < 0.0) {
            dVar15 = dVar15 + dVar5;
          }
          iVar10 = pSVar2->b_len;
          lVar3 = (longlong)((int)ROUND(dVar16 - dVar15) * param_1->channels + pSVar2->b_current) %
                  (longlong)iVar10;
          pSVar2->b_current = (int)lVar3;
        } while (iVar12 < pSVar2->out_count);
      }
      param_1->last_position = dVar15;
      param_1->last_ratio = dVar1;
      param_2->input_frames_used = pSVar2->in_used / param_1->channels;
      param_2->output_frames_gen = pSVar2->out_gen / param_1->channels;
      SVar9 = SRC_ERR_NO_ERROR;
    }
  }
  return SVar9;
}

// sinc_mono_vari_process @ 144497840

SRC_ERR __cdecl sinc_mono_vari_process(SRC_STATE_tag *param_1,SRC_DATA *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  SINC_FILTER *pSVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  SRC_ERR SVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  pSVar4 = param_1->private_data;
  if (pSVar4 == (SINC_FILTER *)0x0) {
    SVar11 = SRC_ERR_NO_PRIVATE;
  }
  else {
    pSVar4->in_count = param_2->input_frames * param_1->channels;
    iVar19 = param_2->output_frames * param_1->channels;
    pSVar4->out_gen = 0;
    pSVar4->in_used = 0;
    pSVar4->out_count = iVar19;
    dVar6 = __real_3ff0000000000000;
    dVar3 = param_1->last_ratio;
    if ((dVar3 < __real_3f70000000000000) || (__real_4070000000000000 < dVar3)) {
      SVar11 = SRC_ERR_BAD_INTERNAL_STATE;
    }
    else {
      dVar25 = ((double)pSVar4->coeff_half_len + __real_4000000000000000) /
               (double)pSVar4->index_inc;
      dVar23 = param_2->src_ratio;
      if (dVar3 <= param_2->src_ratio) {
        dVar23 = dVar3;
      }
      if (dVar23 < __real_3ff0000000000000) {
        dVar25 = dVar25 / dVar23;
      }
      dVar23 = param_1->last_position;
      iVar18 = ((int)ROUND(dVar25) + 1) * param_1->channels;
      dVar25 = dVar23 - (double)(int)ROUND(dVar23);
      if (dVar25 < 0.0) {
        dVar25 = dVar25 + __real_3ff0000000000000;
      }
      iVar12 = pSVar4->b_len;
      dVar5 = __real_3ff0000000000000 / dVar3 + __real_3bc79ca10c924223;
      lVar15 = (longlong)((int)ROUND(dVar23 - dVar25) * param_1->channels + pSVar4->b_current) %
               (longlong)iVar12;
      pSVar4->b_current = (int)lVar15;
      dVar10 = __real_40b0000000000000;
      dVar9 = __real_3f30000000000000;
      dVar23 = __real_3ddb7cdfd9d7bdbb;
      uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      if (0 < iVar19) {
        do {
          iVar19 = (int)lVar15;
          if (((iVar12 - iVar19) + pSVar4->b_end) % iVar12 <= iVar18) {
            SVar11 = prepare_data(pSVar4,param_1->channels,param_2,iVar18);
            param_1->error = SVar11;
            if (SVar11 != SRC_ERR_NO_ERROR) {
              return SVar11;
            }
            iVar19 = pSVar4->b_current;
            if (((pSVar4->b_len - iVar19) + pSVar4->b_end) % pSVar4->b_len <= iVar18) break;
          }
          if ((-1 < pSVar4->b_real_end) &&
             ((double)pSVar4->b_real_end < (double)iVar19 + dVar25 + dVar5)) break;
          if (0 < pSVar4->out_count) {
            dVar27 = param_1->last_ratio;
            dVar24 = dVar27 - param_2->src_ratio;
            if (dVar23 < (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar8,
                                          SUB84(dVar24,0) & uVar7)) {
              dVar3 = ((param_2->src_ratio - dVar27) * (double)pSVar4->out_gen) /
                      (double)pSVar4->out_count + dVar27;
            }
          }
          dVar27 = dVar3;
          if (dVar6 <= dVar3) {
            dVar27 = dVar6;
          }
          iVar21 = pSVar4->coeff_half_len * 0x1000;
          dVar27 = dVar27 * (double)pSVar4->index_inc;
          iVar20 = (int)ROUND(dVar27 * dVar10);
          iVar22 = (int)ROUND(dVar27 * dVar25 * dVar10);
          iVar12 = (iVar21 - iVar22) / iVar20;
          uVar16 = iVar12 * iVar20 + iVar22;
          iVar19 = iVar19 - iVar12;
          if (iVar19 < 0) {
            uVar16 = uVar16 + iVar19 * iVar20;
          }
          dVar24 = 0.0;
          iVar12 = 0;
          if (-1 < iVar19) {
            iVar12 = iVar19;
          }
          if (-1 < (int)uVar16) {
            pfVar17 = pSVar4->buffer + iVar12;
            do {
              uVar14 = uVar16 >> 0xc;
              fVar1 = pSVar4->coeffs[uVar14];
              uVar13 = uVar16 & 0xfff;
              fVar2 = *pfVar17;
              pfVar17 = pfVar17 + 1;
              uVar16 = uVar16 - iVar20;
              dVar24 = dVar24 + ((double)(pSVar4->coeffs[(ulonglong)uVar14 + 1] - fVar1) *
                                 (double)uVar13 * dVar9 + (double)fVar1) * (double)fVar2;
            } while (-1 < (int)uVar16);
          }
          dVar26 = 0.0;
          iVar19 = (iVar21 - (iVar20 - iVar22)) / iVar20;
          uVar16 = iVar19 * iVar20 + (iVar20 - iVar22);
          pfVar17 = pSVar4->buffer + (iVar19 + pSVar4->b_current + 1);
          do {
            lVar15 = (longlong)(int)uVar16;
            fVar1 = pSVar4->coeffs[lVar15 >> 0xc];
            uVar14 = uVar16 & 0xfff;
            uVar16 = uVar16 - iVar20;
            fVar2 = *pfVar17;
            pfVar17 = pfVar17 + -1;
            dVar26 = dVar26 + ((double)(pSVar4->coeffs[(lVar15 >> 0xc) + 1] - fVar1) *
                               (double)uVar14 * dVar9 + (double)fVar1) * (double)fVar2;
          } while (0 < (int)uVar16);
          param_2->data_out[pSVar4->out_gen] =
               (float)((dVar27 / (double)pSVar4->index_inc) * (dVar26 + dVar24));
          iVar19 = pSVar4->out_gen + 1;
          pSVar4->out_gen = iVar19;
          dVar27 = dVar25 + dVar6 / dVar3;
          dVar25 = dVar27 - (double)(int)ROUND(dVar27);
          if (dVar25 < 0.0) {
            dVar25 = dVar25 + dVar6;
          }
          iVar12 = pSVar4->b_len;
          lVar15 = (longlong)((int)ROUND(dVar27 - dVar25) * param_1->channels + pSVar4->b_current) %
                   (longlong)iVar12;
          pSVar4->b_current = (int)lVar15;
        } while (iVar19 < pSVar4->out_count);
      }
      param_1->last_position = dVar25;
      param_1->last_ratio = dVar3;
      param_2->input_frames_used = pSVar4->in_used / param_1->channels;
      param_2->output_frames_gen = pSVar4->out_gen / param_1->channels;
      SVar11 = SRC_ERR_NO_ERROR;
    }
  }
  return SVar11;
}

// sinc_multichan_vari_process @ 144497d00

SRC_ERR __cdecl sinc_multichan_vari_process(SRC_STATE_tag *param_1,SRC_DATA *param_2)

{
  double dVar1;
  SINC_FILTER *pSVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  SRC_ERR SVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  pSVar2 = param_1->private_data;
  if (pSVar2 == (SINC_FILTER *)0x0) {
    SVar9 = SRC_ERR_NO_PRIVATE;
  }
  else {
    pSVar2->in_count = param_2->input_frames * param_1->channels;
    iVar12 = param_2->output_frames * param_1->channels;
    pSVar2->out_gen = 0;
    pSVar2->in_used = 0;
    pSVar2->out_count = iVar12;
    dVar5 = __real_3ff0000000000000;
    dVar1 = param_1->last_ratio;
    if ((dVar1 < __real_3f70000000000000) || (__real_4070000000000000 < dVar1)) {
      SVar9 = SRC_ERR_BAD_INTERNAL_STATE;
    }
    else {
      dVar15 = ((double)pSVar2->coeff_half_len + __real_4000000000000000) /
               (double)pSVar2->index_inc;
      dVar13 = param_2->src_ratio;
      if (dVar1 <= param_2->src_ratio) {
        dVar13 = dVar1;
      }
      if (dVar13 < __real_3ff0000000000000) {
        dVar15 = dVar15 / dVar13;
      }
      dVar13 = param_1->last_position;
      iVar11 = ((int)ROUND(dVar15) + 1) * param_1->channels;
      dVar15 = dVar13 - (double)(int)ROUND(dVar13);
      if (dVar15 < 0.0) {
        dVar15 = dVar15 + __real_3ff0000000000000;
      }
      iVar10 = pSVar2->b_len;
      dVar4 = __real_3ff0000000000000 / dVar1 + __real_3bc79ca10c924223;
      lVar3 = (longlong)((int)ROUND(dVar13 - dVar15) * param_1->channels + pSVar2->b_current) %
              (longlong)iVar10;
      pSVar2->b_current = (int)lVar3;
      dVar8 = __real_40b0000000000000;
      dVar13 = __real_3ddb7cdfd9d7bdbb;
      uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      if (0 < iVar12) {
        do {
          iVar12 = (int)lVar3;
          if (((iVar10 - iVar12) + pSVar2->b_end) % iVar10 <= iVar11) {
            SVar9 = prepare_data(pSVar2,param_1->channels,param_2,iVar11);
            param_1->error = SVar9;
            if (SVar9 != SRC_ERR_NO_ERROR) {
              return SVar9;
            }
            iVar12 = pSVar2->b_current;
            if (((pSVar2->b_len - iVar12) + pSVar2->b_end) % pSVar2->b_len <= iVar11) break;
          }
          if ((-1 < pSVar2->b_real_end) &&
             ((double)pSVar2->b_real_end <= (double)iVar12 + dVar15 + dVar4)) break;
          if (0 < pSVar2->out_count) {
            dVar16 = param_1->last_ratio;
            dVar14 = dVar16 - param_2->src_ratio;
            if (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar7,
                                          SUB84(dVar14,0) & uVar6)) {
              dVar1 = ((param_2->src_ratio - dVar16) * (double)pSVar2->out_gen) /
                      (double)pSVar2->out_count + dVar16;
            }
          }
          dVar16 = dVar1;
          if (dVar5 <= dVar1) {
            dVar16 = dVar5;
          }
          dVar16 = dVar16 * (double)pSVar2->index_inc;
          calc_output_multi(pSVar2,(int)ROUND(dVar16 * dVar8),(int)ROUND(dVar16 * dVar15 * dVar8),
                            param_1->channels,dVar16 / (double)pSVar2->index_inc,
                            param_2->data_out + pSVar2->out_gen);
          iVar12 = param_1->channels + pSVar2->out_gen;
          pSVar2->out_gen = iVar12;
          dVar16 = dVar15 + dVar5 / dVar1;
          dVar15 = dVar16 - (double)(int)ROUND(dVar16);
          if (dVar15 < 0.0) {
            dVar15 = dVar15 + dVar5;
          }
          iVar10 = pSVar2->b_len;
          lVar3 = (longlong)((int)ROUND(dVar16 - dVar15) * param_1->channels + pSVar2->b_current) %
                  (longlong)iVar10;
          pSVar2->b_current = (int)lVar3;
        } while (iVar12 < pSVar2->out_count);
      }
      param_1->last_position = dVar15;
      param_1->last_ratio = dVar1;
      param_2->input_frames_used = pSVar2->in_used / param_1->channels;
      param_2->output_frames_gen = pSVar2->out_gen / param_1->channels;
      SVar9 = SRC_ERR_NO_ERROR;
    }
  }
  return SVar9;
}

// sinc_quad_vari_process @ 144498060

SRC_ERR __cdecl sinc_quad_vari_process(SRC_STATE_tag *param_1,SRC_DATA *param_2)

{
  double dVar1;
  SINC_FILTER *pSVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  SRC_ERR SVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  pSVar2 = param_1->private_data;
  if (pSVar2 == (SINC_FILTER *)0x0) {
    SVar9 = SRC_ERR_NO_PRIVATE;
  }
  else {
    pSVar2->in_count = param_2->input_frames * param_1->channels;
    iVar12 = param_2->output_frames * param_1->channels;
    pSVar2->out_gen = 0;
    pSVar2->in_used = 0;
    pSVar2->out_count = iVar12;
    dVar5 = __real_3ff0000000000000;
    dVar1 = param_1->last_ratio;
    if ((dVar1 < __real_3f70000000000000) || (__real_4070000000000000 < dVar1)) {
      SVar9 = SRC_ERR_BAD_INTERNAL_STATE;
    }
    else {
      dVar15 = ((double)pSVar2->coeff_half_len + __real_4000000000000000) /
               (double)pSVar2->index_inc;
      dVar13 = param_2->src_ratio;
      if (dVar1 <= param_2->src_ratio) {
        dVar13 = dVar1;
      }
      if (dVar13 < __real_3ff0000000000000) {
        dVar15 = dVar15 / dVar13;
      }
      dVar13 = param_1->last_position;
      iVar11 = ((int)ROUND(dVar15) + 1) * param_1->channels;
      dVar15 = dVar13 - (double)(int)ROUND(dVar13);
      if (dVar15 < 0.0) {
        dVar15 = dVar15 + __real_3ff0000000000000;
      }
      iVar10 = pSVar2->b_len;
      dVar4 = __real_3ff0000000000000 / dVar1 + __real_3bc79ca10c924223;
      lVar3 = (longlong)((int)ROUND(dVar13 - dVar15) * param_1->channels + pSVar2->b_current) %
              (longlong)iVar10;
      pSVar2->b_current = (int)lVar3;
      dVar8 = __real_40b0000000000000;
      dVar13 = __real_3ddb7cdfd9d7bdbb;
      uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      if (0 < iVar12) {
        do {
          iVar12 = (int)lVar3;
          if (((iVar10 - iVar12) + pSVar2->b_end) % iVar10 <= iVar11) {
            SVar9 = prepare_data(pSVar2,param_1->channels,param_2,iVar11);
            param_1->error = SVar9;
            if (SVar9 != SRC_ERR_NO_ERROR) {
              return SVar9;
            }
            iVar12 = pSVar2->b_current;
            if (((pSVar2->b_len - iVar12) + pSVar2->b_end) % pSVar2->b_len <= iVar11) break;
          }
          if ((-1 < pSVar2->b_real_end) &&
             ((double)pSVar2->b_real_end <= (double)iVar12 + dVar15 + dVar4)) break;
          if (0 < pSVar2->out_count) {
            dVar16 = param_1->last_ratio;
            dVar14 = dVar16 - param_2->src_ratio;
            if (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar7,
                                          SUB84(dVar14,0) & uVar6)) {
              dVar1 = ((param_2->src_ratio - dVar16) * (double)pSVar2->out_gen) /
                      (double)pSVar2->out_count + dVar16;
            }
          }
          dVar16 = dVar1;
          if (dVar5 <= dVar1) {
            dVar16 = dVar5;
          }
          dVar16 = dVar16 * (double)pSVar2->index_inc;
          calc_output_quad(pSVar2,param_1->channels,(int)ROUND(dVar16 * dVar8),
                           (int)ROUND(dVar16 * dVar15 * dVar8),dVar16 / (double)pSVar2->index_inc,
                           param_2->data_out + pSVar2->out_gen);
          iVar12 = pSVar2->out_gen + 4;
          pSVar2->out_gen = iVar12;
          dVar16 = dVar15 + dVar5 / dVar1;
          dVar15 = dVar16 - (double)(int)ROUND(dVar16);
          if (dVar15 < 0.0) {
            dVar15 = dVar15 + dVar5;
          }
          iVar10 = pSVar2->b_len;
          lVar3 = (longlong)((int)ROUND(dVar16 - dVar15) * param_1->channels + pSVar2->b_current) %
                  (longlong)iVar10;
          pSVar2->b_current = (int)lVar3;
        } while (iVar12 < pSVar2->out_count);
      }
      param_1->last_position = dVar15;
      param_1->last_ratio = dVar1;
      param_2->input_frames_used = pSVar2->in_used / param_1->channels;
      param_2->output_frames_gen = pSVar2->out_gen / param_1->channels;
      SVar9 = SRC_ERR_NO_ERROR;
    }
  }
  return SVar9;
}

// sinc_reset @ 1444983c0

void __cdecl sinc_reset(SRC_STATE_tag *param_1)

{
  void *pvVar1;
  
  pvVar1 = param_1->private_data;
  if (pvVar1 != (void *)0x0) {
    *(undefined8 *)((longlong)pvVar1 + 0x38) = 0;
    *(undefined4 *)((longlong)pvVar1 + 0x40) = 0xffffffff;
    *(undefined8 *)((longlong)pvVar1 + 0x28) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x20) = 0;
    memset((void *)((longlong)pvVar1 + 0x848),0,(longlong)*(int *)((longlong)pvVar1 + 0x44) << 2);
    memset((void *)((longlong)pvVar1 + ((longlong)*(int *)((longlong)pvVar1 + 0x44) + 0x212) * 4),
           0xaa,(longlong)param_1->channels << 2);
  }
  return;
}

// sinc_set_converter @ 144498440

SRC_ERR __cdecl sinc_set_converter(SRC_STATE_tag *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  SRC_ERR SVar3;
  SRC_ERR SVar4;
  code *pcVar5;
  void *_Dst;
  SRC_ERR SVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_858;
  undefined1 local_854 [16];
  int local_844;
  int local_840;
  undefined8 local_828;
  int local_814;
  
  SVar4 = SRC_ERR_NO_ERROR;
  if (param_1->private_data != (void *)0x0) {
    FMemory::Free(param_1->private_data);
    param_1->private_data = (void *)0x0;
  }
  memset(local_854,0,0x84c);
  iVar1 = param_1->channels;
  local_840 = 0x80;
  local_858 = 0x26a5050;
  if (iVar1 < 0x81) {
    if (iVar1 == 1) {
      pcVar5 = sinc_mono_vari_process;
    }
    else if (iVar1 == 2) {
      pcVar5 = sinc_stereo_vari_process;
    }
    else if (iVar1 == 4) {
      pcVar5 = sinc_quad_vari_process;
    }
    else {
      pcVar5 = sinc_multichan_vari_process;
      if (iVar1 == 6) {
        pcVar5 = sinc_hex_vari_process;
      }
    }
    param_1->const_process = pcVar5;
    param_1->vari_process = pcVar5;
    param_1->reset = sinc_reset;
    param_1->copy = sinc_copy;
    if (param_2 == 0) {
      local_840 = 0x94d;
      local_828 = 0x150c03144;
      local_844 = 0x5310d;
    }
    else if (param_2 == 1) {
      local_840 = 0x1eb;
      local_828 = 0x150bed2a4;
      local_844 = 0x57a4;
    }
    else {
      if (param_2 != 2) {
        return SRC_ERR_BAD_CONVERTER;
      }
      local_828 = 0x150beac14;
      local_844 = 0x99e;
    }
    iVar2 = (int)ROUND((((double)local_844 + __real_4000000000000000) / (double)local_840) *
                       __real_4070000000000000 + __real_3ff0000000000000) * 3;
    iVar7 = 0x1000;
    if (0x1000 < iVar2) {
      iVar7 = iVar2;
    }
    local_814 = iVar7 * iVar1 + 1;
    _Dst = FMemory::Malloc((longlong)(iVar7 * iVar1 + iVar1) * 4 + 0x854,0);
    if (_Dst == (void *)0x0) {
      SVar4 = SRC_ERR_MALLOC_FAILED;
    }
    else {
      memcpy(_Dst,&local_858,0x850);
      param_1->private_data = _Dst;
      *(undefined8 *)((longlong)_Dst + 0x38) = 0;
      *(undefined4 *)((longlong)_Dst + 0x40) = 0xffffffff;
      *(undefined8 *)((longlong)_Dst + 0x28) = 0;
      *(undefined8 *)((longlong)_Dst + 0x20) = 0;
      memset((void *)((longlong)_Dst + 0x848),0,(longlong)*(int *)((longlong)_Dst + 0x44) << 2);
      memset((void *)((longlong)_Dst + ((longlong)*(int *)((longlong)_Dst + 0x44) + 0x212) * 4),0xaa
             ,(longlong)param_1->channels << 2);
      uVar8 = *(uint *)((longlong)_Dst + 0x14);
      SVar3 = SVar4;
      if ((int)uVar8 < 2) {
        SVar4 = SRC_ERR_NO_ERROR;
      }
      else {
        do {
          SVar6 = SVar3;
          uVar8 = uVar8 | 1 << (SVar6 & (SRC_ERR_DATA_OVERLAP|SRC_ERR_BAD_SINC_STATE));
          SVar3 = SVar6 + SRC_ERR_MALLOC_FAILED;
        } while (1 << ((byte)(SVar6 + SRC_ERR_MALLOC_FAILED) & 0x1f) < (int)uVar8);
        if (0x1f < SVar6 + SRC_ERR_SINC_BAD_BUFFER_LEN) {
          SVar4 = SRC_ERR_FILTER_LEN;
        }
      }
    }
  }
  else {
    SVar4 = SRC_ERR_BAD_CHANNEL_COUNT;
  }
  return SVar4;
}

// sinc_stereo_vari_process @ 144498690

SRC_ERR __cdecl sinc_stereo_vari_process(SRC_STATE_tag *param_1,SRC_DATA *param_2)

{
  float *pfVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  SINC_FILTER *pSVar5;
  float *pfVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  SRC_ERR SVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  float *pfVar17;
  double *pdVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  
  pSVar5 = param_1->private_data;
  if (pSVar5 == (SINC_FILTER *)0x0) {
    return SRC_ERR_NO_PRIVATE;
  }
  pSVar5->in_count = param_2->input_frames * param_1->channels;
  iVar20 = param_2->output_frames * param_1->channels;
  pSVar5->out_gen = 0;
  pSVar5->in_used = 0;
  pSVar5->out_count = iVar20;
  dVar8 = __real_3ff0000000000000;
  dVar3 = param_1->last_ratio;
  if ((dVar3 < __real_3f70000000000000) || (__real_4070000000000000 < dVar3)) {
    SVar12 = SRC_ERR_BAD_INTERNAL_STATE;
  }
  else {
    dVar27 = ((double)pSVar5->coeff_half_len + __real_4000000000000000) / (double)pSVar5->index_inc;
    dVar25 = param_2->src_ratio;
    if (dVar3 <= param_2->src_ratio) {
      dVar25 = dVar3;
    }
    if (dVar25 < __real_3ff0000000000000) {
      dVar27 = dVar27 / dVar25;
    }
    dVar25 = param_1->last_position;
    iVar19 = ((int)ROUND(dVar27) + 1) * param_1->channels;
    dVar27 = dVar25 - (double)(int)ROUND(dVar25);
    if (dVar27 < 0.0) {
      dVar27 = dVar27 + __real_3ff0000000000000;
    }
    iVar16 = pSVar5->b_len;
    dVar7 = __real_3ff0000000000000 / dVar3 + __real_3bc79ca10c924223;
    lVar15 = (longlong)((int)ROUND(dVar25 - dVar27) * param_1->channels + pSVar5->b_current) %
             (longlong)iVar16;
    pSVar5->b_current = (int)lVar15;
    dVar11 = __real_3f30000000000000;
    dVar25 = __real_3ddb7cdfd9d7bdbb;
    uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    if (0 < iVar20) {
      do {
        iVar20 = (int)lVar15;
        if (((iVar16 - iVar20) + pSVar5->b_end) % iVar16 <= iVar19) {
          SVar12 = prepare_data(pSVar5,param_1->channels,param_2,iVar19);
          param_1->error = SVar12;
          if (SVar12 != SRC_ERR_NO_ERROR) {
            return SVar12;
          }
          iVar20 = pSVar5->b_current;
          if (((pSVar5->b_end - iVar20) + pSVar5->b_len) % pSVar5->b_len <= iVar19) break;
        }
        if ((-1 < pSVar5->b_real_end) &&
           ((double)pSVar5->b_real_end <= (double)iVar20 + dVar27 + dVar7)) break;
        if (0 < pSVar5->out_count) {
          dVar4 = param_1->last_ratio;
          dVar26 = dVar4 - param_2->src_ratio;
          if (dVar25 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar10,
                                        SUB84(dVar26,0) & uVar9)) {
            dVar3 = ((param_2->src_ratio - dVar4) * (double)pSVar5->out_gen) /
                    (double)pSVar5->out_count + dVar4;
          }
        }
        dVar4 = dVar3;
        if (dVar8 <= dVar3) {
          dVar4 = dVar8;
        }
        iVar16 = pSVar5->out_gen;
        pfVar6 = param_2->data_out;
        iVar23 = pSVar5->coeff_half_len * 0x1000;
        dVar4 = dVar4 * (double)pSVar5->index_inc;
        dVar26 = dVar4 / (double)pSVar5->index_inc;
        iVar22 = (int)ROUND(dVar4 * __real_40b0000000000000);
        iVar24 = (int)ROUND(dVar4 * dVar27 * __real_40b0000000000000);
        iVar13 = (iVar23 - iVar24) / iVar22;
        uVar21 = iVar13 * iVar22 + iVar24;
        iVar20 = iVar20 - param_1->channels * iVar13;
        if (iVar20 < 0) {
          iVar13 = (1 - iVar20) / 2;
          iVar20 = iVar20 + iVar13 * 2;
          uVar21 = uVar21 - iVar13 * iVar22;
        }
        dVar31 = 0.0;
        dVar4 = 0.0;
        if (-1 < (int)uVar21) {
          pfVar17 = pSVar5->buffer + (longlong)iVar20 + 1;
          dVar4 = 0.0;
          do {
            fVar2 = pSVar5->coeffs[uVar21 >> 0xc];
            pfVar1 = pfVar17 + -1;
            dVar28 = (double)(pSVar5->coeffs[(ulonglong)(uVar21 >> 0xc) + 1] - fVar2) *
                     (double)(uVar21 & 0xfff) * dVar11 + (double)fVar2;
            fVar2 = *pfVar17;
            pfVar17 = pfVar17 + 2;
            uVar21 = uVar21 - iVar22;
            dVar4 = dVar4 + (double)*pfVar1 * dVar28;
            dVar31 = dVar31 + (double)fVar2 * dVar28;
          } while (-1 < (int)uVar21);
        }
        dVar28 = 0.0;
        dVar30 = 0.0;
        iVar20 = (iVar23 - (iVar22 - iVar24)) / iVar22;
        uVar21 = iVar20 * iVar22 + (iVar22 - iVar24);
        pdVar18 = (double *)
                  (pSVar5->buffer +
                  (longlong)((iVar20 + 1) * param_1->channels + pSVar5->b_current) + 1);
        do {
          lVar15 = (longlong)(int)uVar21;
          fVar2 = pSVar5->coeffs[lVar15 >> 0xc];
          uVar14 = uVar21 & 0xfff;
          uVar21 = uVar21 - iVar22;
          pfVar17 = (float *)((longlong)pdVar18 + -4);
          dVar29 = (double)(pSVar5->coeffs[(lVar15 >> 0xc) + 1] - fVar2) * (double)uVar14 * dVar11 +
                   (double)fVar2;
          fVar2 = *(float *)pdVar18;
          pdVar18 = pdVar18 + -1;
          dVar30 = dVar30 + (double)*pfVar17 * dVar29;
          dVar28 = dVar28 + (double)fVar2 * dVar29;
        } while (0 < (int)uVar21);
        pfVar6[iVar16] = (float)((dVar30 + dVar4) * dVar26);
        pfVar6[(longlong)iVar16 + 1] = (float)((dVar28 + dVar31) * dVar26);
        iVar20 = pSVar5->out_gen + 2;
        pSVar5->out_gen = iVar20;
        dVar4 = dVar27 + dVar8 / dVar3;
        dVar27 = dVar4 - (double)(int)ROUND(dVar4);
        if (dVar27 < 0.0) {
          dVar27 = dVar27 + dVar8;
        }
        iVar16 = pSVar5->b_len;
        lVar15 = (longlong)((int)ROUND(dVar4 - dVar27) * param_1->channels + pSVar5->b_current) %
                 (longlong)iVar16;
        pSVar5->b_current = (int)lVar15;
      } while (iVar20 < pSVar5->out_count);
    }
    param_1->last_position = dVar27;
    param_1->last_ratio = dVar3;
    param_2->input_frames_used = pSVar5->in_used / param_1->channels;
    param_2->output_frames_gen = pSVar5->out_gen / param_1->channels;
    SVar12 = SRC_ERR_NO_ERROR;
  }
  return SVar12;
}

// zoh_copy @ 144498bd0

SRC_ERR __cdecl zoh_copy(SRC_STATE_tag *param_1,SRC_STATE_tag *param_2)

{
  ulong64 _Size;
  void *_Src;
  void *_Dst;
  
  _Src = param_1->private_data;
  if (_Src != (void *)0x0) {
    _Size = (longlong)param_1->channels * 4 + 0x18;
    _Dst = FMemory::Malloc(_Size,0);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,_Src,_Size);
      param_2->private_data = _Dst;
    }
    return (uint)(_Dst == (void *)0x0);
  }
  return SRC_ERR_NO_PRIVATE;
}

// zoh_get_description @ 144498c60

char * __cdecl zoh_get_description(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_1 == 3) {
    pcVar1 = "Zero order hold interpolator, very fast, poor quality.";
  }
  return pcVar1;
}

// zoh_get_name @ 144498c80

char * __cdecl zoh_get_name(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_1 == 3) {
    pcVar1 = "ZOH Interpolator";
  }
  return pcVar1;
}

// zoh_reset @ 144498ca0

void __cdecl zoh_reset(SRC_STATE_tag *param_1)

{
  void *pvVar1;
  
  pvVar1 = param_1->private_data;
  if (pvVar1 != (void *)0x0) {
    *(undefined1 *)((longlong)pvVar1 + 4) = 0;
    memset((void *)((longlong)pvVar1 + 0x18),0,(longlong)param_1->channels << 2);
    return;
  }
  return;
}

// zoh_set_converter @ 144498cd0

SRC_ERR __cdecl zoh_set_converter(SRC_STATE_tag *param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  if (param_2 != 3) {
    return SRC_ERR_BAD_CONVERTER;
  }
  if (param_1->private_data != (void *)0x0) {
    FMemory::Free(param_1->private_data);
    param_1->private_data = (void *)0x0;
  }
  puVar2 = FMemory::Malloc((longlong)param_1->channels * 4 + 0x18,0);
  param_1->private_data = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return SRC_ERR_MALLOC_FAILED;
  }
  *puVar2 = 0x6f70a93;
  pvVar1 = param_1->private_data;
  param_1->const_process = zoh_vari_process;
  param_1->vari_process = zoh_vari_process;
  param_1->reset = zoh_reset;
  param_1->copy = zoh_copy;
  if (pvVar1 != (void *)0x0) {
    *(undefined1 *)((longlong)pvVar1 + 4) = 0;
    memset((void *)((longlong)pvVar1 + 0x18),0,(longlong)param_1->channels << 2);
  }
  return SRC_ERR_NO_ERROR;
}

// zoh_vari_process @ 144498d80

SRC_ERR __cdecl zoh_vari_process(SRC_STATE_tag *param_1,SRC_DATA *param_2)

{
  void *pvVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  if (param_2->input_frames < 1) {
    return SRC_ERR_NO_ERROR;
  }
  pvVar1 = param_1->private_data;
  if (pvVar1 == (void *)0x0) {
    return SRC_ERR_NO_PRIVATE;
  }
  iVar13 = 0;
  if (*(char *)((longlong)pvVar1 + 4) == '\0') {
    iVar11 = 0;
    if (0 < param_1->channels) {
      lVar9 = 0;
      do {
        iVar11 = iVar11 + 1;
        *(undefined4 *)((longlong)pvVar1 + lVar9 + 0x18) =
             *(undefined4 *)(lVar9 + (longlong)param_2->data_in);
        lVar9 = lVar9 + 4;
      } while (iVar11 < param_1->channels);
    }
    *(undefined1 *)((longlong)pvVar1 + 4) = 1;
  }
  iVar11 = param_1->channels * param_2->input_frames;
  *(int *)((longlong)pvVar1 + 8) = iVar11;
  iVar8 = param_2->output_frames * param_1->channels;
  *(undefined4 *)((longlong)pvVar1 + 0x14) = 0;
  *(undefined4 *)((longlong)pvVar1 + 0xc) = 0;
  *(int *)((longlong)pvVar1 + 0x10) = iVar8;
  dVar5 = __real_3bc79ca10c924223;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3ff0000000000000;
  dVar15 = param_1->last_ratio;
  if ((dVar15 < __real_3f70000000000000) || (__real_4070000000000000 < dVar15)) {
    return SRC_ERR_BAD_INTERNAL_STATE;
  }
  dVar17 = param_1->last_position;
  iVar7 = 0;
  iVar6 = 0;
  if (dVar17 < __real_3ff0000000000000) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      if ((iVar8 <= iVar7) || ((double)iVar11 <= (double)param_1->channels * dVar17 + (double)iVar6)
         ) break;
      if (0 < iVar8) {
        dVar16 = param_1->last_ratio;
        dVar14 = dVar16 - param_2->src_ratio;
        if (dVar5 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar4,
                                     SUB84(dVar14,0) & uVar3)) {
          dVar15 = ((param_2->src_ratio - dVar16) * (double)iVar7) / (double)iVar8 + dVar16;
        }
      }
      iVar12 = 0;
      if (0 < param_1->channels) {
        pfVar10 = (float *)((longlong)pvVar1 + 0x18);
        do {
          iVar12 = iVar12 + 1;
          param_2->data_out[iVar7] = *pfVar10;
          iVar7 = *(int *)((longlong)pvVar1 + 0x14) + 1;
          *(int *)((longlong)pvVar1 + 0x14) = iVar7;
          pfVar10 = pfVar10 + 1;
        } while (iVar12 < param_1->channels);
        iVar8 = *(int *)((longlong)pvVar1 + 0x10);
        iVar6 = *(int *)((longlong)pvVar1 + 0xc);
        iVar11 = *(int *)((longlong)pvVar1 + 8);
      }
      dVar17 = dVar17 + dVar2 / dVar15;
    } while (dVar17 < dVar2);
  }
  dVar16 = dVar17 - (double)(int)ROUND(dVar17);
  if (dVar16 < 0.0) {
    dVar16 = dVar16 + dVar2;
  }
  iVar6 = (int)ROUND(dVar17 - dVar16) * param_1->channels + iVar6;
  *(int *)((longlong)pvVar1 + 0xc) = iVar6;
  if (iVar7 < iVar8) {
    do {
      iVar12 = param_1->channels;
      if ((double)iVar11 < (double)iVar12 * dVar16 + (double)iVar6) break;
      if (0 < iVar8) {
        dVar17 = param_1->last_ratio;
        dVar14 = dVar17 - param_2->src_ratio;
        if (dVar5 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar4,
                                     SUB84(dVar14,0) & uVar3)) {
          dVar15 = ((param_2->src_ratio - dVar17) * (double)iVar7) / (double)iVar8 + dVar17;
        }
      }
      iVar8 = 0;
      if (0 < iVar12) {
        do {
          iVar11 = (*(int *)((longlong)pvVar1 + 0xc) - iVar12) + iVar8;
          iVar8 = iVar8 + 1;
          param_2->data_out[iVar7] = param_2->data_in[iVar11];
          *(int *)((longlong)pvVar1 + 0x14) = *(int *)((longlong)pvVar1 + 0x14) + 1;
          iVar12 = param_1->channels;
          iVar7 = *(int *)((longlong)pvVar1 + 0x14);
        } while (iVar8 < iVar12);
        iVar6 = *(int *)((longlong)pvVar1 + 0xc);
        iVar11 = *(int *)((longlong)pvVar1 + 8);
      }
      dVar17 = dVar16 + dVar2 / dVar15;
      dVar16 = dVar17 - (double)(int)ROUND(dVar17);
      if (dVar16 < 0.0) {
        dVar16 = dVar16 + dVar2;
      }
      iVar7 = *(int *)((longlong)pvVar1 + 0x14);
      iVar6 = (int)ROUND(dVar17 - dVar16) * iVar12 + iVar6;
      *(int *)((longlong)pvVar1 + 0xc) = iVar6;
      iVar8 = *(int *)((longlong)pvVar1 + 0x10);
    } while (iVar7 < iVar8);
  }
  if (iVar11 < iVar6) {
    iVar8 = param_1->channels;
    *(int *)((longlong)pvVar1 + 0xc) = iVar11;
    dVar16 = dVar16 + (double)((iVar6 - iVar11) / iVar8);
  }
  param_1->last_position = dVar16;
  if ((0 < *(int *)((longlong)pvVar1 + 0xc)) && (iVar11 = param_1->channels, 0 < iVar11)) {
    pfVar10 = (float *)((longlong)pvVar1 + 0x18);
    do {
      iVar11 = (*(int *)((longlong)pvVar1 + 0xc) - iVar11) + iVar13;
      iVar13 = iVar13 + 1;
      *pfVar10 = param_2->data_in[iVar11];
      iVar11 = param_1->channels;
      pfVar10 = pfVar10 + 1;
    } while (iVar13 < iVar11);
  }
  param_1->last_ratio = dVar15;
  param_2->input_frames_used = *(int *)((longlong)pvVar1 + 0xc) / param_1->channels;
  param_2->output_frames_gen = *(int *)((longlong)pvVar1 + 0x14) / param_1->channels;
  return SRC_ERR_NO_ERROR;
}

// IMPLEMENT_MODULE_UELibSampleRate @ 1444991a0

void __cdecl IMPLEMENT_MODULE_UELibSampleRate(void)

{
  return;
}

// src_callback_new @ 1444991b0

SRC_STATE_tag * __cdecl
src_callback_new(_func___cdecl_long_void_ptr_float_ptr_ptr *param_1,int param_2,int param_3,
                int *param_4,void *param_5)

{
  SRC_STATE_tag *pSVar1;
  
                    /* 0x44991b0  190  src_callback_new */
  if (param_1 == (_func___cdecl_long_void_ptr_float_ptr_ptr *)0x0) {
    if (param_4 != (int *)0x0) {
      *param_4 = 0x11;
      return (SRC_STATE_tag *)0x0;
    }
  }
  else {
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    pSVar1 = src_new(param_2,param_3,param_4);
    if (pSVar1 != (SRC_STATE_tag *)0x0) {
      if (pSVar1->reset != (_func___cdecl_void_SRC_STATE_tag_ptr *)0x0) {
        (*pSVar1->reset)(pSVar1);
      }
      pSVar1->user_callback_data = param_5;
      pSVar1->last_position = 0.0;
      pSVar1->last_ratio = 0.0;
      pSVar1->saved_data = (float *)0x0;
      pSVar1->saved_frames = 0;
      pSVar1->error = SRC_ERR_NO_ERROR;
      pSVar1->mode = SRC_MODE_CALLBACK;
      pSVar1->callback_func = param_1;
      return pSVar1;
    }
  }
  return (SRC_STATE_tag *)0x0;
}

// src_callback_read @ 144499270

long __cdecl src_callback_read(SRC_STATE_tag *param_1,double param_2,long param_3,float *param_4)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lVar7;
  int iVar8;
  SRC_ERR SVar9;
  int iVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float local_res8 [2];
  float *local_a8;
  SRC_DATA local_a0 [2];
  
  dVar6 = __real_4070000000000000;
  dVar5 = __real_3f70000000000000;
  dVar4 = __real_3cd203af9ee75616;
  uVar3 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
                    /* 0x4499270  191  src_callback_read */
  uVar2 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((param_1 != (SRC_STATE_tag *)0x0) && (0 < param_3)) {
    if (param_1->mode == SRC_MODE_CALLBACK) {
      if (param_1->callback_func == (_func___cdecl_long_void_ptr_float_ptr_ptr *)0x0) {
        param_1->error = SRC_ERR_NULL_CALLBACK;
        return 0;
      }
      lVar11 = 0;
      local_a0[0].input_frames_used = 0;
      local_a0[0].output_frames_gen = 0;
      local_a0[0].end_of_input = 0;
      local_a0[0]._36_4_ = 0;
      if ((param_2 < __real_3f70000000000000) || (__real_4070000000000000 < param_2)) {
        param_1->error = SRC_ERR_BAD_SRC_RATIO;
        return 0;
      }
      local_a0[0].data_in = param_1->saved_data;
      lVar7 = param_1->saved_frames;
      local_a0[0].output_frames = param_3;
      local_a0[0].src_ratio = param_2;
      do {
        local_a0[0].data_out = param_4;
        if (lVar7 == 0) {
          local_a8 = local_res8;
          local_a0[0].input_frames = lVar7;
          lVar7 = (*param_1->callback_func)(param_1->user_callback_data,&local_a8);
          iVar10 = local_a0[0].end_of_input;
          if (lVar7 == 0) {
            iVar10 = 1;
          }
          local_a0[0].end_of_input = iVar10;
          local_a0[0].data_in = local_a8;
        }
        param_1->mode = SRC_MODE_PROCESS;
        if ((param_1->vari_process == (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_DATA_ptr *)0x0)
           || (param_1->const_process == (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_DATA_ptr *)0x0
              )) {
          SVar9 = SRC_ERR_BAD_PROC_PTR;
LAB_144499592:
          param_1->mode = SRC_MODE_CALLBACK;
          param_1->saved_frames = lVar7;
          param_1->saved_data = local_a0[0].data_in;
          goto LAB_14449959d;
        }
        if (((local_a0[0].data_in == (float *)0x0) && (0 < lVar7)) ||
           ((local_a0[0].data_out == (float *)0x0 && (0 < local_a0[0].output_frames)))) {
          SVar9 = SRC_ERR_BAD_DATA_PTR;
          goto LAB_144499592;
        }
        if ((local_a0[0].src_ratio < dVar5) || (dVar6 < local_a0[0].src_ratio)) {
          SVar9 = SRC_ERR_BAD_SRC_RATIO;
          goto LAB_144499592;
        }
        local_a0[0].input_frames = 0;
        if (-1 < lVar7) {
          local_a0[0].input_frames = lVar7;
        }
        iVar10 = local_a0[0].output_frames;
        if (local_a0[0].output_frames < 0) {
          iVar10 = 0;
        }
        if (local_a0[0].data_in < local_a0[0].data_out) {
          bVar12 = local_a0[0].data_in + param_1->channels * local_a0[0].input_frames <
                   local_a0[0].data_out;
          bVar13 = local_a0[0].data_in + param_1->channels * local_a0[0].input_frames ==
                   local_a0[0].data_out;
        }
        else {
          iVar8 = 0;
          if (-1 < local_a0[0].output_frames) {
            iVar8 = local_a0[0].output_frames;
          }
          bVar12 = local_a0[0].data_out + iVar8 * param_1->channels < local_a0[0].data_in;
          bVar13 = local_a0[0].data_out + iVar8 * param_1->channels == local_a0[0].data_in;
        }
        if (!bVar12 && !bVar13) {
          param_1->mode = SRC_MODE_CALLBACK;
          param_1->error = SRC_ERR_DATA_OVERLAP;
          param_1->saved_frames = local_a0[0].input_frames;
          param_1->saved_data = local_a0[0].data_in;
          return 0;
        }
        dVar1 = param_1->last_ratio;
        uVar14 = SUB84(dVar1,0);
        uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
        local_a0[0].input_frames_used = 0;
        local_a0[0].output_frames_gen = 0;
        if (dVar1 < dVar5) {
          param_1->last_ratio = local_a0[0].src_ratio;
          uVar14 = SUB84(local_a0[0].src_ratio,0);
          uVar15 = (undefined4)((ulonglong)local_a0[0].src_ratio >> 0x20);
        }
        dVar1 = (double)CONCAT44(uVar15,uVar14) - local_a0[0].src_ratio;
        local_a0[0].output_frames = iVar10;
        if (dVar4 <= (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar3,
                                      SUB84(dVar1,0) & uVar2)) {
          SVar9 = (*param_1->vari_process)(param_1,local_a0);
        }
        else {
          SVar9 = (*param_1->const_process)(param_1,local_a0);
        }
        param_1->mode = SRC_MODE_CALLBACK;
        if (SVar9 != SRC_ERR_NO_ERROR) {
LAB_14449952b:
          param_1->saved_data = local_a0[0].data_in;
          param_1->saved_frames = local_a0[0].input_frames;
          if (SVar9 != SRC_ERR_NO_ERROR) {
LAB_14449959d:
            param_1->error = SVar9;
            lVar11 = 0;
          }
          return lVar11;
        }
        lVar11 = lVar11 + local_a0[0].output_frames_gen;
        lVar7 = local_a0[0].input_frames - local_a0[0].input_frames_used;
        local_a0[0].data_in =
             local_a0[0].data_in + param_1->channels * local_a0[0].input_frames_used;
        param_4 = local_a0[0].data_out + param_1->channels * local_a0[0].output_frames_gen;
        local_a0[0].output_frames = local_a0[0].output_frames - local_a0[0].output_frames_gen;
        local_a0[0].input_frames = lVar7;
        if (((local_a0[0].end_of_input == 1) && (local_a0[0].output_frames_gen == 0)) ||
           (param_3 <= lVar11)) goto LAB_14449952b;
      } while( true );
    }
    param_1->error = SRC_ERR_BAD_MODE;
  }
  return 0;
}

// src_clone @ 1444995c0

SRC_STATE_tag * __cdecl src_clone(SRC_STATE_tag *param_1,int *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  double dVar4;
  _func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_DATA_ptr *p_Var5;
  _func___cdecl_void_SRC_STATE_tag_ptr *p_Var6;
  _func___cdecl_long_void_ptr_float_ptr_ptr *p_Var7;
  int iVar8;
  SRC_MODE SVar9;
  SRC_ERR SVar10;
  SRC_STATE_tag *pSVar11;
  
                    /* 0x44995c0  192  src_clone */
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  pSVar11 = FMemory::Malloc(0x68,0);
  if (pSVar11 == (SRC_STATE_tag *)0x0) {
    if (param_2 != (int *)0x0) {
      *param_2 = 1;
    }
    return (SRC_STATE_tag *)0x0;
  }
  dVar4 = param_1->last_position;
  pSVar11->last_ratio = param_1->last_ratio;
  pSVar11->last_position = dVar4;
  iVar8 = param_1->channels;
  SVar9 = param_1->mode;
  uVar1 = *(undefined4 *)&param_1->field_0x1c;
  pSVar11->error = param_1->error;
  pSVar11->channels = iVar8;
  pSVar11->mode = SVar9;
  *(undefined4 *)&pSVar11->field_0x1c = uVar1;
  p_Var5 = param_1->vari_process;
  pSVar11->private_data = param_1->private_data;
  pSVar11->vari_process = p_Var5;
  p_Var6 = param_1->reset;
  pSVar11->const_process = param_1->const_process;
  pSVar11->reset = p_Var6;
  p_Var7 = param_1->callback_func;
  pSVar11->copy = param_1->copy;
  pSVar11->callback_func = p_Var7;
  uVar1 = *(undefined4 *)((longlong)&param_1->user_callback_data + 4);
  lVar2 = param_1->saved_frames;
  uVar3 = *(undefined4 *)&param_1->field_0x5c;
  *(undefined4 *)&pSVar11->user_callback_data = *(undefined4 *)&param_1->user_callback_data;
  *(undefined4 *)((longlong)&pSVar11->user_callback_data + 4) = uVar1;
  pSVar11->saved_frames = lVar2;
  *(undefined4 *)&pSVar11->field_0x5c = uVar3;
  pSVar11->saved_data = param_1->saved_data;
  SVar10 = (*param_1->copy)(param_1,pSVar11);
  if (SVar10 != SRC_ERR_NO_ERROR) {
    if (param_2 != (int *)0x0) {
      *param_2 = SVar10;
    }
    FMemory::Free(pSVar11);
    pSVar11 = (SRC_STATE_tag *)0x0;
  }
  return pSVar11;
}

// src_delete @ 144499690

SRC_STATE_tag * __cdecl src_delete(SRC_STATE_tag *param_1)

{
                    /* 0x4499690  193  src_delete */
  if (param_1 != (SRC_STATE_tag *)0x0) {
    if (param_1->private_data != (void *)0x0) {
      FMemory::Free(param_1->private_data);
    }
    param_1->last_ratio = 0.0;
    param_1->last_position = 0.0;
    param_1->error = SRC_ERR_NO_ERROR;
    param_1->channels = 0;
    *(undefined8 *)&param_1->mode = 0;
    param_1->private_data = (void *)0x0;
    param_1->vari_process = (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_DATA_ptr *)0x0;
    param_1->const_process = (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_DATA_ptr *)0x0;
    param_1->reset = (_func___cdecl_void_SRC_STATE_tag_ptr *)0x0;
    param_1->copy = (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_STATE_tag_ptr *)0x0;
    param_1->callback_func = (_func___cdecl_long_void_ptr_float_ptr_ptr *)0x0;
    param_1->user_callback_data = (void *)0x0;
    *(undefined8 *)&param_1->saved_frames = 0;
    param_1->saved_data = (float *)0x0;
    FMemory::Free(param_1);
  }
  return (SRC_STATE_tag *)0x0;
}

// src_error @ 1444996f0

int __cdecl src_error(SRC_STATE_tag *param_1)

{
                    /* 0x44996f0  194  src_error */
  if (param_1 != (SRC_STATE_tag *)0x0) {
    return param_1->error;
  }
  return 0;
}

// src_float_to_int_array @ 144499710

void __cdecl src_float_to_int_array(float *param_1,int *param_2,int param_3)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int *piVar6;
  double dVar7;
  
  dVar4 = __real_41e0000000000000;
  dVar3 = __real_c1e0000000000000;
  dVar2 = __real_41dfffffffc00000;
                    /* 0x4499710  195  src_float_to_int_array */
  if (param_3 != 0) {
    piVar6 = param_2 + param_3;
    do {
      pfVar1 = (float *)((longlong)piVar6 + (longlong)param_1 + (-4 - (longlong)param_2));
      piVar6 = piVar6 + -1;
      param_3 = param_3 + -1;
      dVar7 = (double)*pfVar1 * dVar4;
      if (dVar7 < dVar2) {
        iVar5 = -0x80000000;
        if (dVar3 < dVar7) {
          iVar5 = (int)ROUND(dVar7);
        }
      }
      else {
        iVar5 = 0x7fffffff;
      }
      *piVar6 = iVar5;
    } while (param_3 != 0);
  }
  return;
}

// src_float_to_short_array @ 144499780

void __cdecl src_float_to_short_array(float *param_1,short *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  float *pfVar6;
  short *psVar7;
  float fVar8;
  
  fVar4 = __real_c7000000;
  fVar3 = __real_47000000;
  fVar2 = __real_46fffe00;
                    /* 0x4499780  196  src_float_to_short_array */
  if (param_3 != 0) {
    psVar7 = param_2 + param_3;
    pfVar6 = param_1 + param_3;
    do {
      pfVar1 = pfVar6 + -1;
      pfVar6 = pfVar6 + -1;
      fVar8 = *pfVar1 * fVar3;
      psVar7 = psVar7 + -1;
      param_3 = param_3 + -1;
      if (fVar8 < fVar2) {
        sVar5 = -0x8000;
        if (fVar4 < fVar8) {
          sVar5 = (short)(int)ROUND(fVar8);
        }
      }
      else {
        sVar5 = 0x7fff;
      }
      *psVar7 = sVar5;
    } while (param_3 != 0);
  }
  return;
}

// src_get_channels @ 1444997f0

int __cdecl src_get_channels(SRC_STATE_tag *param_1)

{
                    /* 0x44997f0  197  src_get_channels */
  if (param_1 == (SRC_STATE_tag *)0x0) {
    return -2;
  }
  if ((param_1->vari_process != (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_DATA_ptr *)0x0) &&
     (param_1->const_process != (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_DATA_ptr *)0x0)) {
    return param_1->channels;
  }
  return -7;
}

// src_get_description @ 144499820

char * __cdecl src_get_description(int param_1)

{
  char *pcVar1;
  
                    /* 0x4499820  198  src_get_description */
  if (param_1 == 0) {
    pcVar1 = "Band limited sinc interpolation, best quality, 144dB SNR, 96% BW.";
  }
  else {
    if (param_1 == 1) {
      return "Band limited sinc interpolation, medium quality, 121dB SNR, 90% BW.";
    }
    if (param_1 == 2) {
      return "Band limited sinc interpolation, fastest, 97dB SNR, 80% BW.";
    }
    pcVar1 = "Zero order hold interpolator, very fast, poor quality.";
    if (param_1 != 3) {
      pcVar1 = (char *)0x0;
    }
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "Linear interpolator, very fast, poor quality.";
      if (param_1 != 4) {
        pcVar1 = (char *)0x0;
      }
      return pcVar1;
    }
  }
  return pcVar1;
}

// src_get_name @ 144499880

char * __cdecl src_get_name(int param_1)

{
  char *pcVar1;
  
                    /* 0x4499880  199  src_get_name */
  if (param_1 == 0) {
    pcVar1 = "Best Sinc Interpolator";
  }
  else {
    if (param_1 == 1) {
      return "Medium Sinc Interpolator";
    }
    if (param_1 == 2) {
      return "Fastest Sinc Interpolator";
    }
    pcVar1 = "ZOH Interpolator";
    if (param_1 != 3) {
      pcVar1 = (char *)0x0;
    }
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "Linear Interpolator";
      if (param_1 != 4) {
        pcVar1 = (char *)0x0;
      }
      return pcVar1;
    }
  }
  return pcVar1;
}

// src_get_version @ 1444998e0

char * __cdecl src_get_version(void)

{
                    /* 0x44998e0  200  src_get_version */
  return "libsamplerate-0.1.8 (c) 2002-2008 Erik de Castro Lopo";
}

// src_int_to_float_array @ 1444998f0

void __cdecl src_int_to_float_array(int *param_1,float *param_2,int param_3)

{
  int *piVar1;
  double dVar2;
  float *pfVar3;
  
  dVar2 = __real_3e00000000000000;
                    /* 0x44998f0  201  src_int_to_float_array */
  if (param_3 != 0) {
    pfVar3 = param_2 + param_3;
    do {
      piVar1 = (int *)((longlong)pfVar3 + (longlong)param_1 + (-4 - (longlong)param_2));
      pfVar3 = pfVar3 + -1;
      *pfVar3 = (float)((double)*piVar1 * dVar2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// src_is_valid_ratio @ 144499940

int __cdecl src_is_valid_ratio(double param_1)

{
                    /* 0x4499940  202  src_is_valid_ratio */
  if ((__real_3f70000000000000 <= param_1) && (param_1 <= __real_4070000000000000)) {
    return 1;
  }
  return 0;
}

// src_new @ 144499970

SRC_STATE_tag * __cdecl src_new(int param_1,int param_2,int *param_3)

{
  _func___cdecl_void_SRC_STATE_tag_ptr *p_Var1;
  SRC_ERR SVar2;
  SRC_STATE_tag *pSVar3;
  undefined4 *puVar4;
  void *pvVar5;
  
                    /* 0x4499970  203  src_new */
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_2 < 1) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0xb;
      return (SRC_STATE_tag *)0x0;
    }
  }
  else {
    pSVar3 = FMemory::Malloc(0x68,0);
    if (pSVar3 != (SRC_STATE_tag *)0x0) {
      pSVar3->last_ratio = 0.0;
      pSVar3->last_position = 0.0;
      pSVar3->error = SRC_ERR_NO_ERROR;
      pSVar3->channels = 0;
      *(undefined8 *)&pSVar3->mode = 0;
      pSVar3->private_data = (void *)0x0;
      pSVar3->vari_process = (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_DATA_ptr *)0x0;
      pSVar3->const_process = (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_DATA_ptr *)0x0;
      pSVar3->reset = (_func___cdecl_void_SRC_STATE_tag_ptr *)0x0;
      pSVar3->copy = (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_STATE_tag_ptr *)0x0;
      pSVar3->callback_func = (_func___cdecl_long_void_ptr_float_ptr_ptr *)0x0;
      pSVar3->user_callback_data = (void *)0x0;
      *(undefined8 *)&pSVar3->saved_frames = 0;
      pSVar3->saved_data = (float *)0x0;
      pSVar3->channels = param_2;
      SVar2 = sinc_set_converter(pSVar3,param_1);
      if (SVar2 != SRC_ERR_NO_ERROR) {
        if (param_1 == 3) {
          if (pSVar3->private_data != (void *)0x0) {
            FMemory::Free(pSVar3->private_data);
            pSVar3->private_data = (void *)0x0;
          }
          puVar4 = FMemory::Malloc((longlong)pSVar3->channels * 4 + 0x18,0);
          pSVar3->private_data = puVar4;
          if (puVar4 == (undefined4 *)0x0) goto LAB_144499b54;
          *puVar4 = 0x6f70a93;
          pvVar5 = pSVar3->private_data;
          pSVar3->const_process = zoh_vari_process;
          pSVar3->vari_process = zoh_vari_process;
          pSVar3->reset = zoh_reset;
          pSVar3->copy = zoh_copy;
          if (pvVar5 == (void *)0x0) goto LAB_144499b0a;
          *(undefined1 *)((longlong)pvVar5 + 4) = 0;
        }
        else {
          if (param_1 != 4) {
LAB_144499b54:
            if (param_3 != (int *)0x0) {
              *param_3 = 10;
            }
            FMemory::Free(pSVar3);
            return (SRC_STATE_tag *)0x0;
          }
          if (pSVar3->private_data != (void *)0x0) {
            FMemory::Free(pSVar3->private_data);
            pSVar3->private_data = (void *)0x0;
          }
          puVar4 = FMemory::Malloc((longlong)pSVar3->channels * 4 + 0x18,0);
          pSVar3->private_data = puVar4;
          if (puVar4 == (undefined4 *)0x0) goto LAB_144499b54;
          *puVar4 = 0x787c4fc;
          pvVar5 = pSVar3->private_data;
          pSVar3->const_process = linear_vari_process;
          pSVar3->vari_process = linear_vari_process;
          pSVar3->copy = linear_copy;
          pSVar3->reset = linear_reset;
          if (pvVar5 == (void *)0x0) goto LAB_144499b0a;
          *(undefined4 *)((longlong)pvVar5 + 4) = 0;
        }
        memset((void *)((longlong)pvVar5 + 0x18),0,(longlong)pSVar3->channels << 2);
      }
LAB_144499b0a:
      p_Var1 = pSVar3->reset;
      if (p_Var1 != (_func___cdecl_void_SRC_STATE_tag_ptr *)0x0) {
        if (p_Var1 == linear_reset) {
          pvVar5 = pSVar3->private_data;
          if (pvVar5 != (void *)0x0) {
            *(undefined4 *)((longlong)pvVar5 + 4) = 0;
            memset((void *)((longlong)pvVar5 + 0x18),0,(longlong)pSVar3->channels << 2);
          }
        }
        else {
          (*p_Var1)(pSVar3);
        }
      }
      pSVar3->last_position = 0.0;
      pSVar3->last_ratio = 0.0;
      pSVar3->saved_data = (float *)0x0;
      pSVar3->saved_frames = 0;
      pSVar3->error = SRC_ERR_NO_ERROR;
      return pSVar3;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = 1;
    }
  }
  return (SRC_STATE_tag *)0x0;
}

// src_process @ 144499b90

int __cdecl src_process(SRC_STATE_tag *param_1,SRC_DATA *param_2)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  SRC_ERR SVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  
                    /* 0x4499b90  204  src_process */
  dVar3 = __real_3f70000000000000;
  if (param_1 == (SRC_STATE_tag *)0x0) {
    return 2;
  }
  if ((param_1->vari_process == (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_DATA_ptr *)0x0) ||
     (param_1->const_process == (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_DATA_ptr *)0x0)) {
    return 7;
  }
  if (param_1->mode != SRC_MODE_PROCESS) {
    return 0x12;
  }
  if (param_2 != (SRC_DATA *)0x0) {
    if (((param_2->data_in == (float *)0x0) && (0 < param_2->input_frames)) ||
       ((pfVar1 = param_2->data_out, pfVar1 == (float *)0x0 && (0 < param_2->output_frames)))) {
      return 4;
    }
    if ((param_2->src_ratio < __real_3f70000000000000) ||
       (__real_4070000000000000 < param_2->src_ratio)) {
      return 6;
    }
    iVar5 = param_2->input_frames;
    if (param_2->input_frames < 0) {
      param_2->input_frames = 0;
      iVar5 = 0;
    }
    iVar6 = param_2->output_frames;
    if (param_2->output_frames < 0) {
      param_2->output_frames = 0;
      iVar6 = 0;
    }
    pfVar2 = param_2->data_in;
    if (pfVar2 < pfVar1) {
      if (pfVar1 < pfVar2 + param_1->channels * iVar5) {
        return 0x10;
      }
    }
    else if (pfVar2 < pfVar1 + param_1->channels * iVar6) {
      return 0x10;
    }
    param_2->input_frames_used = 0;
    param_2->output_frames_gen = 0;
    dVar7 = param_1->last_ratio;
    if (dVar7 < dVar3) {
      dVar7 = param_2->src_ratio;
      param_1->last_ratio = dVar7;
    }
    dVar7 = dVar7 - param_2->src_ratio;
    if (__real_3cd203af9ee75616 <=
        (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
                    /* WARNING: Could not recover jumptable at 0x000144499cea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      SVar4 = (*param_1->vari_process)(param_1,param_2);
      return SVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x000144499cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SVar4 = (*param_1->const_process)(param_1,param_2);
    return SVar4;
  }
  return 3;
}

// src_reset @ 144499d10

int __cdecl src_reset(SRC_STATE_tag *param_1)

{
                    /* 0x4499d10  205  src_reset */
  if (param_1 == (SRC_STATE_tag *)0x0) {
    return 2;
  }
  if (param_1->reset != (_func___cdecl_void_SRC_STATE_tag_ptr *)0x0) {
    (*param_1->reset)(param_1);
  }
  param_1->last_position = 0.0;
  param_1->last_ratio = 0.0;
  param_1->saved_data = (float *)0x0;
  param_1->saved_frames = 0;
  param_1->error = SRC_ERR_NO_ERROR;
  return 0;
}

// src_set_ratio @ 144499d60

int __cdecl src_set_ratio(SRC_STATE_tag *param_1,double param_2)

{
                    /* 0x4499d60  206  src_set_ratio */
  if (param_1 == (SRC_STATE_tag *)0x0) {
    return 2;
  }
  if ((param_1->vari_process != (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_DATA_ptr *)0x0) &&
     (param_1->const_process != (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_DATA_ptr *)0x0)) {
    if ((__real_3f70000000000000 <= param_2) && (param_2 <= __real_4070000000000000)) {
      param_1->last_ratio = param_2;
      return 0;
    }
    return 6;
  }
  return 7;
}

// src_short_to_float_array @ 144499db0

void __cdecl src_short_to_float_array(short *param_1,float *param_2,int param_3)

{
  short *psVar1;
  double dVar2;
  short *psVar3;
  float *pfVar4;
  
  dVar2 = __real_3f00000000000000;
                    /* 0x4499db0  207  src_short_to_float_array */
  if (param_3 != 0) {
    pfVar4 = param_2 + param_3;
    psVar3 = param_1 + param_3;
    do {
      psVar1 = psVar3 + -1;
      psVar3 = psVar3 + -1;
      pfVar4 = pfVar4 + -1;
      *pfVar4 = (float)((double)(int)*psVar1 * dVar2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// src_simple @ 144499e00

int __cdecl src_simple(SRC_DATA *param_1,int param_2,int param_3)

{
  int iVar1;
  SRC_STATE_tag *pSVar2;
  int local_res20 [2];
  
                    /* 0x4499e00  208  src_simple */
  pSVar2 = src_new(param_2,param_3,local_res20);
  if (pSVar2 == (SRC_STATE_tag *)0x0) {
    return local_res20[0];
  }
  param_1->end_of_input = 1;
  iVar1 = src_process(pSVar2,param_1);
  if (pSVar2->private_data != (void *)0x0) {
    FMemory::Free(pSVar2->private_data);
  }
  pSVar2->last_ratio = 0.0;
  pSVar2->last_position = 0.0;
  pSVar2->error = SRC_ERR_NO_ERROR;
  pSVar2->channels = 0;
  *(undefined8 *)&pSVar2->mode = 0;
  pSVar2->private_data = (void *)0x0;
  pSVar2->vari_process = (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_DATA_ptr *)0x0;
  pSVar2->const_process = (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_DATA_ptr *)0x0;
  pSVar2->reset = (_func___cdecl_void_SRC_STATE_tag_ptr *)0x0;
  pSVar2->copy = (_func___cdecl_SRC_ERR_SRC_STATE_tag_ptr_SRC_STATE_tag_ptr *)0x0;
  pSVar2->callback_func = (_func___cdecl_long_void_ptr_float_ptr_ptr *)0x0;
  pSVar2->user_callback_data = (void *)0x0;
  *(undefined8 *)&pSVar2->saved_frames = 0;
  pSVar2->saved_data = (float *)0x0;
  FMemory::Free(pSVar2);
  return iVar1;
}

// src_strerror @ 144499ea0

char * __cdecl src_strerror(int param_1)

{
                    /* 0x4499ea0  209  src_strerror */
  switch(param_1) {
  case 0:
    return "No error.";
  case 1:
    return "Malloc failed.";
  case 2:
    return "SRC_STATE pointer is NULL.";
  case 3:
    return "SRC_DATA pointer is NULL.";
  case 4:
    return "SRC_DATA->data_out or SRC_DATA->data_in is NULL.";
  case 5:
    return "Internal error. No private data.";
  case 6:
    return "SRC ratio outside [1/256, 256] range.";
  case 7:
    return "Internal error. No process pointer.";
  case 8:
    return "Internal error. SHIFT_BITS too large.";
  case 9:
    return "Internal error. Filter length too large.";
  case 10:
    return "Bad converter number.";
  case 0xb:
    return "Channel count must be >= 1.";
  case 0xc:
    return "Internal error. Bad buffer length. Please report this.";
  case 0xd:
    return "Internal error. Input data / internal buffer size difference. Please report this.";
  case 0xe:
    return "Internal error. Private pointer is NULL. Please report this.";
  case 0xf:
    return "src_process() called without reset after end_of_input.";
  case 0x10:
    return "Input and output data arrays overlap.";
  case 0x11:
    return "Supplied callback function pointer is NULL.";
  case 0x12:
    return "Calling mode differs from initialisation mode (ie process v callback).";
  case 0x13:
    return "Callback function pointer is NULL in src_callback_read ().";
  case 0x14:
    return "This converter only allows constant conversion ratios.";
  case 0x15:
    return "Internal error : Bad length in prepare_data ().";
  case 0x16:
    return "Error : Someone is trampling on my internal state.";
  case 0x17:
    return "Placeholder. No error defined for this error number.";
  default:
    return (char *)0x0;
  }
}

