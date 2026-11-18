// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 40

// check_value_cast<unsigned_char,unsigned_int> @ 14f3da100

uchar __cdecl oo2::check_value_cast<unsigned_char,unsigned_int>(uint *param_1)

{
  return (uchar)*param_1;
}

// check_value_cast<unsigned_char,__int64> @ 14f3da110

uchar __cdecl oo2::check_value_cast<unsigned_char,__int64>(long64 *param_1)

{
  return (uchar)*param_1;
}

// rrAlignUpPointer<unsigned_char> @ 14f3da120

uchar * __cdecl oo2::rrAlignUpPointer<unsigned_char>(uchar *param_1,long64 param_2)

{
  return (uchar *)((ulonglong)(param_1 + param_2 + -1) & ~(param_2 - 1U));
}

// small_insertion_sort<unsigned_char> @ 14f3da140

void __cdecl oo2::small_insertion_sort<unsigned_char>(uchar *param_1,uchar *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = param_1;
  if (param_1 != param_2) {
    while (pbVar2 = pbVar2 + 1, pbVar2 != param_2) {
      bVar1 = *pbVar2;
      pbVar3 = pbVar2;
      while (param_1 < pbVar3) {
        if (pbVar3[-1] <= bVar1) break;
        *pbVar3 = pbVar3[-1];
        pbVar3 = pbVar3 + -1;
      }
      *pbVar3 = bVar1;
    }
  }
  return;
}

// small_insertion_sort<unsigned_int> @ 14f3da1a0

void __cdecl oo2::small_insertion_sort<unsigned_int>(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar3 = param_1;
  if (param_1 != param_2) {
    while (puVar3 = puVar3 + 1, puVar3 != param_2) {
      uVar1 = *puVar3;
      puVar2 = puVar3;
      while (param_1 < puVar2) {
        if (puVar2[-1] <= uVar1) break;
        *puVar2 = puVar2[-1];
        puVar2 = puVar2 + -1;
      }
      *puVar2 = uVar1;
    }
  }
  return;
}

// RR_GET64_NATIVE @ 14f3da1f0

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT64_NATIVE @ 14f3da200

void __cdecl oo2::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// U8_void @ 14f3da210

uchar * __cdecl oo2::U8_void(void *param_1)

{
  return param_1;
}

// bsr @ 14f3da220

uint __cdecl oo2::bsr(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  return uVar1;
}

// newLZ_decode_alphabet_shape_num_EG @ 14f3da240

int __cdecl
oo2::newLZ_decode_alphabet_shape_num_EG
          (int param_1,ulong64 *param_2,long64 *param_3,uchar **param_4,uchar **param_5)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == 0x100) {
    return 0;
  }
  uVar2 = *param_2;
  if (0x101 - param_1 <= param_1) {
    param_1 = 0x101 - param_1;
  }
  uVar1 = param_1 * 2 - 1;
  uVar3 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> uVar3 == 0; uVar3 = uVar3 - 1) {
    }
  }
  bVar4 = (byte)(uVar3 + 1);
  iVar5 = (1 << (bVar4 & 0x1f)) + param_1 * -2;
  iVar7 = (int)(uVar2 >> (0x40 - bVar4 & 0x3f));
  iVar6 = iVar7 >> 1;
  if (iVar6 < iVar5) {
    *param_2 = uVar2 << ((byte)uVar3 & 0x3f);
    *param_3 = *param_3 + (ulonglong)uVar3;
    return iVar6;
  }
  *param_2 = uVar2 << (bVar4 & 0x3f);
  *param_3 = *param_3 + (ulonglong)(uVar3 + 1);
  return iVar7 - iVar5;
}

// newlz_tans_Decoder_Fill @ 14f3da300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2::newlz_tans_Decoder_Fill(newlz_tans_Decoder *param_1,newlz_tans_UnpackedCounts *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  tans_decode_entry_U8 tVar6;
  uint6 uVar7;
  short sVar8;
  uint uVar9;
  tans_decode_entry_U8 *ptVar10;
  byte bVar11;
  longlong lVar12;
  uchar *puVar13;
  tans_decode_entry_U8 tVar14;
  byte bVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uchar uVar22;
  ulonglong uVar23;
  int iVar24;
  uint *puVar25;
  undefined1 local_88 [5];
  undefined1 uStack_83;
  ulonglong local_78;
  tans_decode_entry_U8 *local_68 [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)local_88;
  iVar1 = param_2->num_singles;
  local_68[0] = param_1->decode_table_U8;
  iVar2 = param_1->L;
  iVar3 = param_1->L_bits;
  uVar9 = iVar2 - iVar1;
  uVar17 = uVar9 & 3;
  uVar20 = uVar9 >> 2;
  bVar15 = (byte)iVar3;
  uVar18 = uVar20 + 1;
  if (uVar17 == 0) {
    uVar18 = uVar20;
  }
  local_68[1] = local_68[0] + uVar18;
  uVar4 = uVar18 + uVar20 + 1;
  if (uVar17 < 2) {
    uVar4 = uVar18 + uVar20;
  }
  local_68[2] = local_68[0] + uVar4;
  uVar18 = uVar4 + uVar20 + 1;
  if (uVar17 < 3) {
    uVar18 = uVar4 + uVar20;
  }
  puVar13 = param_2->singles;
  local_68[3] = local_68[0] + uVar18;
  if (puVar13 != param_2->singles + iVar1) {
    tVar6.len = bVar15;
    tVar6.mask = (uint)(ushort)((1 << (bVar15 & 0x1f)) - 1);
    tVar6.sym = uStack_83;
    tVar6.nextst = 0;
    ptVar10 = local_68[0] + uVar9;
    do {
      *ptVar10 = tVar6;
      uVar22 = *puVar13;
      puVar13 = puVar13 + 1;
      ptVar10->sym = uVar22;
      ptVar10 = ptVar10 + 1;
    } while (puVar13 != param_2->singles + iVar1);
  }
  iVar1 = param_2->num_larger;
  iVar24 = 0;
  for (puVar25 = param_2->larger; puVar25 != param_2->larger + iVar1; puVar25 = puVar25 + 1) {
    uVar18 = *puVar25;
    uVar9 = uVar18 & 0xffff;
    uVar22 = (uchar)(uVar18 >> 0x10);
    sVar5 = (short)iVar2;
    if (uVar9 < 5) {
      uVar18 = (1 << ((byte)uVar9 & 0x1f)) + -1 << ((byte)iVar24 & 3);
      uVar18 = uVar18 | uVar18 >> 4;
      if (uVar9 != 0) {
        uVar23 = (ulonglong)uVar9;
        uVar17 = uVar9;
        do {
          iVar21 = 0;
          if (uVar18 != 0) {
            for (; (uVar18 >> iVar21 & 1) == 0; iVar21 = iVar21 + 1) {
            }
          }
          uVar18 = uVar18 & uVar18 - 1;
          ptVar10 = local_68[iVar21];
          ptVar10->sym = uVar22;
          local_68[iVar21] = ptVar10 + 1;
          iVar21 = 0x1f;
          if (uVar17 != 0) {
            for (; uVar17 >> iVar21 == 0; iVar21 = iVar21 + -1) {
            }
          }
          bVar11 = bVar15 - (char)iVar21;
          ptVar10->len = bVar11;
          ptVar10->mask = (uint)(ushort)((1 << (bVar11 & 0x1f)) - 1);
          sVar8 = (short)uVar17;
          uVar17 = uVar17 + 1;
          ptVar10->nextst = sVar8 << (bVar11 & 0x1f) & sVar5 - 1U;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
    }
    else {
      iVar21 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar21 == 0; iVar21 = iVar21 + -1) {
        }
      }
      uVar20 = iVar3 - iVar21;
      iVar19 = 1 << ((byte)uVar20 & 0x1f);
      lVar16 = 0;
      uVar17 = iVar19 - 1;
      tVar14 = (tans_decode_entry_U8)
               ((((ulonglong)(ushort)((short)uVar18 << ((byte)uVar20 & 0x1f) & sVar5 - 1U) << 8 |
                 (ulonglong)(uVar18 >> 0x10) & 0xff) << 8 | (ulonglong)(uVar20 & 0xff)) << 0x20 |
               (ulonglong)uVar17 & 0xffff);
      local_78 = (ulonglong)(ushort)iVar19 << 0x30;
      uVar18 = (1 << ((char)iVar21 + 1U & 0x1f)) - uVar9;
      do {
        ptVar10 = local_68[lVar16];
        uVar23 = (ulonglong)((iVar24 + 3) - (int)lVar16 & 3) + (ulonglong)uVar9 >> 2;
        iVar21 = (int)uVar23;
        if ((int)uVar18 < iVar21) {
          lVar12 = (longlong)(int)uVar18;
          if (0 < (int)uVar18) {
            do {
              *ptVar10 = tVar14;
              ptVar10 = ptVar10 + 1;
              tVar14 = (tans_decode_entry_U8)((longlong)tVar14 + local_78);
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
          local_78 = local_78 >> 1;
          uVar20 = uVar20 - 1;
          iVar21 = iVar21 - uVar18;
          uVar7 = CONCAT15(uVar22,CONCAT14((char)uVar20,uVar17 >> 1)) & 0xffff0000ffff;
          tVar14.nextst = 0;
          tVar14.mask = (int)uVar7;
          tVar14.len = (char)(uVar7 >> 0x20);
          tVar14.sym = (char)(uVar7 >> 0x28);
          lVar12 = (longlong)iVar21;
          uVar18 = uVar9;
          if (0 < iVar21) {
            do {
              *ptVar10 = tVar14;
              ptVar10 = ptVar10 + 1;
              tVar14 = (tans_decode_entry_U8)((longlong)tVar14 + local_78);
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
        else {
          if (iVar21 != 0) {
            do {
              *ptVar10 = tVar14;
              ptVar10 = ptVar10 + 1;
              tVar14 = (tans_decode_entry_U8)((longlong)tVar14 + local_78);
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
          uVar18 = uVar18 - iVar21;
        }
        local_68[lVar16] = ptVar10;
        lVar16 = lVar16 + 1;
      } while (lVar16 < 4);
    }
    iVar24 = iVar24 + uVar9;
  }
  return;
}

// newlz_tans_Decoder_Init @ 14f3da680

newlz_tans_Decoder * __cdecl oo2::newlz_tans_Decoder_Init(void *param_1,long64 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 1 << ((byte)param_3 & 0x1f);
  if (param_2 < (longlong)((longlong)iVar1 * 8 + 0x1fU & 0xfffffffffffffff0)) {
    return (newlz_tans_Decoder *)0x0;
  }
  *(int *)param_1 = iVar1;
  *(int *)((longlong)param_1 + 4) = param_3;
  *(ulonglong *)((longlong)param_1 + 8) = (longlong)param_1 + 0x1fU & 0xfffffffffffffff0;
  return param_1;
}

// newlz_tans_Decoder_Size @ 14f3da6d0

long64 __cdecl oo2::newlz_tans_Decoder_Size(int param_1)

{
  return (longlong)(1 << ((byte)param_1 & 0x1f)) * 8 + 0x1fU & 0xfffffffffffffff0;
}

// newlz_tans_Encoder_Fill @ 14f3da700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl oo2::newlz_tans_Encoder_Fill(newlz_tans_Encoder *param_1,uint *param_2,int param_3)

{
  int iVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ushort *puVar9;
  ushort *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint local_78;
  int local_58 [8];
  
  lVar4 = (longlong)param_3;
  if (0 < param_3) {
    puVar13 = param_2 + lVar4 + -1;
    do {
      if (*puVar13 != 0) break;
      param_3 = param_3 + -1;
      lVar4 = lVar4 + -1;
      puVar13 = puVar13 + -1;
    } while (0 < lVar4);
  }
  uVar12 = param_1->L;
  uVar14 = (ulonglong)(int)uVar12;
  iVar1 = param_1->L_bits;
  uVar16 = 0;
  param_1->alphabet = param_3;
  sVar2 = (short)uVar12;
  if (param_2[(longlong)param_3 + -1] == uVar12) {
    param_1->encode_sym_table[(longlong)param_3 + -1].max_state_numbits = 0;
    iVar1 = uVar12 * 2;
    param_1->encode_sym_table[(longlong)param_3 + -1].max_state_thresh = sVar2 * 2;
    param_1->encode_sym_table[(longlong)param_3 + -1].packed_table_ptr_uinta =
         (ulong64)(param_1->encode_table_packed + -uVar14);
    lVar4 = uVar14 * 2;
    while ((int)uVar12 < iVar1) {
      *(short *)(lVar4 + param_1->encode_sym_table[(longlong)param_3 + -1].packed_table_ptr_uinta) =
           (short)uVar14;
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
      lVar4 = lVar4 + 2;
    }
    return;
  }
  uVar14 = (ulonglong)param_3;
  uVar7 = 0;
  if (0 < param_3) {
    uVar6 = uVar16;
    uVar8 = uVar16;
    if (7 < uVar14) {
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar7 = param_3 >> 0x1f & 7;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      do {
        puVar13 = param_2 + uVar6;
        uVar22 = ___xmm_00000001000000010000000100000001 + uVar22 &
                 -(uint)(*puVar13 == ___xmm_00000001000000010000000100000001) |
                 ~-(uint)(*puVar13 == ___xmm_00000001000000010000000100000001) & uVar22;
        uVar23 = _UNK_150631da4 + uVar23 & -(uint)(puVar13[1] == _UNK_150631da4) |
                 ~-(uint)(puVar13[1] == _UNK_150631da4) & uVar23;
        uVar24 = _UNK_150631da8 + uVar24 & -(uint)(puVar13[2] == _UNK_150631da8) |
                 ~-(uint)(puVar13[2] == _UNK_150631da8) & uVar24;
        uVar25 = _UNK_150631dac + uVar25 & -(uint)(puVar13[3] == _UNK_150631dac) |
                 ~-(uint)(puVar13[3] == _UNK_150631dac) & uVar25;
        puVar13 = param_2 + uVar6 + 4;
        uVar6 = uVar6 + 8;
        uVar18 = ___xmm_00000001000000010000000100000001 + uVar18 &
                 -(uint)(*puVar13 == ___xmm_00000001000000010000000100000001) |
                 ~-(uint)(*puVar13 == ___xmm_00000001000000010000000100000001) & uVar18;
        uVar19 = _UNK_150631da4 + uVar19 & -(uint)(puVar13[1] == _UNK_150631da4) |
                 ~-(uint)(puVar13[1] == _UNK_150631da4) & uVar19;
        uVar20 = _UNK_150631da8 + uVar20 & -(uint)(puVar13[2] == _UNK_150631da8) |
                 ~-(uint)(puVar13[2] == _UNK_150631da8) & uVar20;
        uVar21 = _UNK_150631dac + uVar21 & -(uint)(puVar13[3] == _UNK_150631dac) |
                 ~-(uint)(puVar13[3] == _UNK_150631dac) & uVar21;
      } while ((longlong)uVar6 <
               (longlong)(uVar14 - ((ulonglong)(param_3 + uVar7 & 7) - (ulonglong)uVar7)));
      uVar7 = uVar18 + uVar22 + uVar20 + uVar24 + uVar19 + uVar23 + uVar21 + uVar25;
      uVar8 = (ulonglong)uVar7;
      if ((longlong)uVar14 <= (longlong)uVar6) goto LAB_14f3da8b3;
    }
    do {
      uVar17 = (ulonglong)((int)uVar8 + 1);
      if (param_2[uVar6] != 1) {
        uVar17 = uVar8;
      }
      uVar8 = uVar17;
      uVar7 = (uint)uVar8;
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)uVar14);
  }
LAB_14f3da8b3:
  local_58[0] = 0;
  uVar12 = uVar12 - uVar7;
  uVar8 = (ulonglong)uVar12;
  local_78 = 0;
  uVar7 = uVar12 >> 2;
  uVar12 = uVar12 & 3;
  local_58[1] = uVar7 + 1;
  if (uVar12 == 0) {
    local_58[1] = uVar7;
  }
  local_58[2] = local_58[1] + uVar7 + 1;
  if (uVar12 < 2) {
    local_58[2] = local_58[1] + uVar7;
  }
  local_58[3] = local_58[2] + uVar7 + 1;
  if (uVar12 < 3) {
    local_58[3] = local_58[2] + uVar7;
  }
  if (0 < (longlong)uVar14) {
    puVar10 = &param_1->encode_sym_table[0].max_state_thresh;
    uVar6 = uVar16;
    uVar17 = uVar16;
    do {
      uVar12 = param_2[uVar17];
      if (uVar12 == 0) {
        ((tans_encode_entry *)(puVar10 + -4))->packed_table_ptr_uinta = 0;
      }
      else if (uVar12 == 1) {
        puVar10[1] = (ushort)iVar1 & 0xff;
        *puVar10 = sVar2 * 2;
        puVar9 = param_1->encode_table_packed;
        ((tans_encode_entry *)(puVar10 + -4))->packed_table_ptr_uinta =
             (ulong64)(puVar9 + uVar8 + -1);
        puVar9[uVar8] = sVar2 + (short)uVar8;
        uVar8 = (ulonglong)((int)uVar8 + 1);
      }
      else {
        uVar7 = 0;
        if (1 < uVar12) {
          iVar5 = 0x1f;
          if (uVar12 - 1 != 0) {
            for (; uVar12 - 1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          uVar7 = iVar5 + 1;
        }
        iVar5 = iVar1 - uVar7;
        puVar10[1] = (ushort)iVar5 & 0xff;
        *puVar10 = (short)uVar12 * 2 << ((byte)iVar5 & 0x1f);
        puVar9 = param_1->encode_table_packed + (int)uVar6;
        uVar7 = (int)uVar6 + 3;
        ((tans_encode_entry *)(puVar10 + -4))->packed_table_ptr_uinta =
             (ulong64)(puVar9 + -(ulonglong)uVar12);
        uVar6 = uVar16;
        do {
          iVar5 = local_58[uVar6];
          uVar15 = (ulonglong)(uVar7 & 3) + (ulonglong)uVar12 >> 2;
          iVar3 = iVar5;
          for (uVar11 = uVar15; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar9 = sVar2 + (short)iVar3;
            iVar3 = iVar3 + 1;
            puVar9 = puVar9 + 1;
          }
          uVar7 = uVar7 - 1;
          local_58[uVar6] = iVar5 + (int)uVar15;
          uVar6 = uVar6 + 1;
        } while ((longlong)uVar6 < 4);
        local_78 = local_78 + uVar12;
        uVar6 = (ulonglong)local_78;
      }
      uVar17 = uVar17 + 1;
      puVar10 = puVar10 + 6;
    } while ((longlong)uVar17 < (longlong)uVar14);
  }
  return;
}

// newlz_tans_Encoder_Init @ 14f3daa80

newlz_tans_Encoder * __cdecl oo2::newlz_tans_Encoder_Init(void *param_1,long64 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 1 << ((byte)param_3 & 0x1f);
  if (param_2 < (longlong)((longlong)iVar1 * 2 + 0xc2fU & 0xfffffffffffffff0)) {
    return (newlz_tans_Encoder *)0x0;
  }
  *(undefined4 *)((longlong)param_1 + 8) = 0x100;
  *(int *)param_1 = iVar1;
  *(ulonglong *)((longlong)param_1 + 0xc10) = (longlong)param_1 + 0xc27U & 0xfffffffffffffff0;
  *(int *)((longlong)param_1 + 4) = param_3;
  return param_1;
}

// newlz_tans_Encoder_Size @ 14f3daae0

long64 __cdecl oo2::newlz_tans_Encoder_Size(int param_1)

{
  return (longlong)(1 << ((byte)param_1 & 0x1f)) * 2 + 0xc2fU & 0xfffffffffffffff0;
}

// newlz_tans_PackCounts4 @ 14f3dab00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2::newlz_tans_PackCounts4
          (int param_1,uint *param_2,int param_3,int param_4,ulong64 *param_5,long64 *param_6,
          uchar **param_7,uchar **param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 local_58;
  uint local_54 [7];
  ulonglong local_38;
  
  puVar8 = &local_58;
  local_38 = __security_cookie.value ^ (ulonglong)&local_58;
  uVar10 = 0;
  uVar4 = 0;
  lVar13 = 0x3f - *param_6 >> 3;
  uVar7 = *param_5 << ((char)*param_6 + 1U & 0x3f);
  *(ulonglong *)*param_7 =
       uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
       (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
       (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
  *param_7 = *param_7 + lVar13;
  *param_6 = *param_6 + lVar13 * 8;
  *param_5 = (longlong)(param_4 + -2) | *param_5 << 3;
  *param_6 = *param_6 + -3;
  uVar7 = uVar10;
  uVar9 = uVar10;
  uVar2 = uVar4;
  if (0 < param_3) {
    do {
      if (*param_2 != 0) {
        uVar9 = (ulonglong)((int)uVar9 + 1);
        *puVar8 = *param_2 << 0x10 | (uint)uVar7;
        puVar8 = puVar8 + 1;
      }
      uVar2 = (uint)uVar9;
      uVar6 = (uint)uVar7 + 1;
      param_2 = param_2 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < param_3);
  }
  if (&local_58 != local_54 + (longlong)(int)uVar2 + -1) {
    for (puVar8 = local_54; puVar8 != local_54 + (longlong)(int)uVar2 + -1; puVar8 = puVar8 + 1) {
      uVar6 = *puVar8;
      puVar5 = puVar8;
      if (&local_58 < puVar8) {
        do {
          if (puVar5[-1] <= uVar6) break;
          *puVar5 = puVar5[-1];
          puVar5 = puVar5 + -1;
        } while (&local_58 < puVar5);
      }
      *puVar5 = uVar6;
    }
  }
  lVar13 = (longlong)param_4 + -1;
  uVar7 = uVar10;
  uVar9 = uVar10;
  uVar12 = uVar10;
  if (0 < lVar13) {
    do {
      uVar2 = (uint)*(ushort *)((longlong)local_54 + uVar7 * 4 + -2);
      uVar6 = uVar2 - (int)uVar12;
      iVar1 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      uVar3 = uVar4;
      if (uVar6 != 0) {
        uVar3 = iVar1 + 1;
      }
      if ((int)uVar3 < (int)(uint)uVar9) {
        uVar3 = (uint)uVar9;
      }
      uVar7 = uVar7 + 1;
      uVar9 = (ulonglong)uVar3;
      uVar12 = (ulonglong)uVar2;
    } while ((longlong)uVar7 < lVar13);
    if (uVar3 != 0) goto LAB_14f3dac8a;
  }
  uVar3 = 1;
LAB_14f3dac8a:
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; (uint)param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 != 0) {
    uVar4 = iVar1 + 1;
  }
  *param_5 = *param_5 << ((byte)uVar4 & 0x3f) | (longlong)(int)uVar3;
  *param_6 = *param_6 - (ulonglong)uVar4;
  lVar11 = *param_6;
  uVar7 = uVar10;
  if (0 < lVar13) {
    do {
      uVar2 = local_54[uVar10 - 1];
      uVar10 = uVar10 + 1;
      uVar4 = uVar2 >> 0x10;
      lVar11 = 0x3f - *param_6 >> 3;
      uVar9 = *param_5 << ((char)*param_6 + 1U & 0x3f);
      *(ulonglong *)*param_7 =
           uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
           (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
           (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38;
      *param_7 = *param_7 + lVar11;
      *param_6 = *param_6 + lVar11 * 8;
      *param_5 = (ulonglong)(uVar2 & 0xff) | *param_5 << 8;
      *param_6 = *param_6 + -8;
      *param_5 = *param_5 << ((byte)uVar3 & 0x3f) | (ulonglong)(uVar4 - (int)uVar7);
      lVar11 = *param_6 - (longlong)(int)uVar3;
      *param_6 = lVar11;
      uVar7 = (ulonglong)uVar4;
    } while ((longlong)uVar10 < lVar13);
  }
  uVar7 = *param_5 << ((char)lVar11 + 1U & 0x3f);
  uVar2 = local_54[(longlong)param_4 + -2];
  lVar13 = 0x3f - lVar11 >> 3;
  *(ulonglong *)*param_7 =
       uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
       (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
       (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
  *param_7 = *param_7 + lVar13;
  *param_6 = *param_6 + lVar13 * 8;
  *param_5 = (ulonglong)(byte)uVar2 | *param_5 << 8;
  *param_6 = *param_6 + -8;
  return;
}

// newlz_tans_PackCounts @ 14f3dadc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2::newlz_tans_PackCounts(_rrVarBits_ *param_1,int param_2,uint *param_3,int param_4,int param_5)

{
  longlong lVar1;
  ulong64 uVar2;
  _rrVarBits_ *p_Var3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  _rrVarBits_ *p_Var8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  _rrVarBits_ *p_Var15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong *puVar25;
  undefined1 auStackY_f68 [32];
  uint local_f38;
  int local_f34;
  int local_f30;
  uchar *local_f20;
  int *local_f18;
  _rrVarBits_ local_ef8;
  uint auStack_ed8 [32];
  uint local_e58 [128];
  uint auStack_c58 [255];
  int aiStack_85c [261];
  byte local_448 [256];
  uchar local_348 [256];
  uchar local_248 [256];
  uchar local_148 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f68;
  lVar20 = param_1->m_inv_bitlen;
  local_f20 = param_1->m_end;
  uVar2 = param_1->m_bits;
  puVar25 = (ulonglong *)param_1->m_cur;
  lVar14 = 0x3f - lVar20 >> 3;
  uVar7 = uVar2 << ((char)lVar20 + 1U & 0x3f);
  *puVar25 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
             (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
             (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
  puVar25 = (ulonglong *)((longlong)puVar25 + lVar14);
  lVar20 = lVar20 + lVar14 * 8;
  if (7 < param_5) {
    uVar9 = uVar2 * 2 | 1;
    memset(local_e58,0,0x200);
    uVar22 = 0;
    local_f34 = 0;
    local_f38 = 0;
    iVar21 = 0;
    local_f30 = 1;
    uVar10 = uVar22;
    uVar7 = uVar22;
    if (0 < param_4) {
      do {
        if (param_3[uVar10] != 0) break;
        uVar7 = (ulonglong)((int)uVar7 + 1);
        uVar10 = uVar10 + 1;
      } while ((longlong)uVar10 < (longlong)param_4);
    }
    iVar18 = (int)uVar7;
    aiStack_85c[1] = iVar18;
    iVar24 = 6;
    if (iVar18 < param_4) {
      local_f18 = aiStack_85c + 3;
      lVar14 = (longlong)iVar18;
      uVar10 = uVar22;
      uVar17 = uVar22;
      uVar23 = uVar22;
      do {
        iVar18 = (int)uVar7;
        do {
          uVar19 = (uint)uVar22;
          if (param_3[lVar14] == 0) break;
          uVar13 = param_3[lVar14] - 1;
          iVar21 = iVar24 >> 2;
          uVar4 = iVar21 * 2;
          uVar12 = uVar13;
          if ((int)uVar13 <= (int)uVar4) {
            uVar12 = (int)(uVar13 - iVar21) >> 0x1f ^ (uVar13 - iVar21) * 2;
            uVar19 = local_f38;
          }
          local_f38 = uVar19 + 1;
          auStack_c58[uVar10] = uVar12;
          uVar10 = uVar10 + 1;
          if (uVar12 < 0x80) {
            local_e58[uVar12] = local_e58[uVar12] + 1;
          }
          else {
            uVar17 = (ulonglong)((int)uVar17 + 1);
            auStack_ed8[uVar23] = uVar12;
            uVar23 = uVar23 + 1;
          }
          uVar22 = (ulonglong)local_f38;
          if ((int)uVar4 <= (int)uVar13) {
            uVar13 = uVar4;
          }
          local_f34 = local_f34 + 1;
          uVar19 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar19;
          iVar24 = iVar24 + (uVar13 - iVar21);
          lVar14 = lVar14 + 1;
        } while ((int)uVar19 < param_4);
        iVar21 = (int)uVar17;
        iVar5 = (int)uVar7;
        local_f18[-1] = iVar5 - iVar18;
        for (; (iVar18 = (int)uVar7, lVar14 < param_4 && (param_3[lVar14] == 0));
            lVar14 = lVar14 + 1) {
          uVar7 = (ulonglong)(iVar18 + 1);
        }
        local_f30 = local_f30 + 2;
        uVar22 = (ulonglong)local_f38;
        *local_f18 = iVar18 - iVar5;
        local_f18 = local_f18 + 2;
      } while (iVar18 < param_4);
    }
    uVar10 = 0;
    lVar14 = 0x40 - lVar20 >> 3;
    uVar22 = 1;
    aiStack_85c[local_f30] = aiStack_85c[local_f30] + (0x100 - iVar18);
    iVar18 = 0x7fffffff;
    uVar7 = uVar9 << ((byte)lVar20 & 0x3f);
    *puVar25 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18
               | (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 |
               (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
    uVar7 = uVar10;
    do {
      iVar5 = (int)uVar7;
      iVar24 = EntropyOfCountsExpGolomb(local_e58,0x80,iVar5);
      uVar17 = uVar10;
      if (0 < iVar21) {
        do {
          uVar19 = (auStack_ed8[uVar17] >> ((byte)uVar7 & 0x1f)) + 1;
          uVar17 = uVar17 + 1;
          iVar6 = 0x1f;
          if (uVar19 != 0) {
            for (; uVar19 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          iVar24 = iVar24 + 1 + iVar5 + iVar6 * 2;
        } while ((longlong)uVar17 < (longlong)iVar21);
      }
      iVar6 = iVar5;
      if (iVar18 <= iVar24) {
        iVar6 = (int)uVar22;
      }
      uVar7 = (ulonglong)(iVar5 + 1U);
      uVar22 = (ulonglong)iVar6;
      if (iVar18 <= iVar24) {
        iVar24 = iVar18;
      }
      iVar18 = iVar24;
    } while ((int)(iVar5 + 1U) < 8);
    iVar21 = newLZ_encode_alphabet_shape_runlens_split
                       (local_348,local_148,local_248,local_f34,aiStack_85c + 1,local_f30);
    lVar1 = lVar20 + lVar14 * 8;
    local_ef8.m_bits = (uVar9 * 8 | uVar22) << 8 | (longlong)(local_f34 + -1);
    lVar16 = 0x4b - lVar1 >> 3;
    uVar7 = local_ef8.m_bits << ((char)lVar1 - 0xbU & 0x3f);
    *(ulonglong *)((longlong)puVar25 + lVar14) =
         uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
         (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
         (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
    local_ef8.m_inv_bitlen = lVar20 + -0xc + (lVar14 + lVar16) * 8;
    local_ef8.m_cur = (uchar *)(lVar16 + (longlong)puVar25 + lVar14);
    local_ef8.m_end = local_f20;
    newLZ_encode_alphabet_shape_num_EG(&local_ef8,iVar21,local_f34);
    lVar20 = (longlong)(int)local_f38;
    bVar11 = (byte)iVar6;
    uVar7 = uVar10;
    if (0 < lVar20) {
      do {
        uVar4 = auStack_c58[uVar7] + (1 << (bVar11 & 0x1f));
        uVar19 = uVar4 >> (bVar11 & 0x1f);
        iVar18 = 0x1f;
        if (uVar19 != 0) {
          for (; uVar19 >> iVar18 == 0; iVar18 = iVar18 + -1) {
          }
        }
        local_448[uVar7] = (byte)iVar18;
        auStack_c58[uVar7] = (1 << ((byte)iVar18 + bVar11 & 0x1f)) - 1U & uVar4;
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < lVar20);
    }
    newLZ_encode_unary_block(&local_ef8,local_448,lVar20);
    newLZ_encode_unary_block(&local_ef8,local_348,(longlong)iVar21);
    newLZ_encode_variable_U8_block(&local_ef8,local_148,local_248,(longlong)iVar21);
    local_f20 = local_ef8.m_end;
    if (0 < lVar20) {
      do {
        uVar19 = (uint)local_448[uVar10] + iVar6;
        if (uVar19 != 0) {
          uVar7 = local_ef8.m_bits << ((char)local_ef8.m_inv_bitlen + 1U & 0x3f);
          *(ulonglong *)local_ef8.m_cur =
               uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18
               | (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 |
               (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
          lVar14 = 0x3f - local_ef8.m_inv_bitlen >> 3;
          local_ef8.m_cur = (uchar *)((longlong)local_ef8.m_cur + lVar14);
          local_ef8.m_bits =
               local_ef8.m_bits << ((byte)uVar19 & 0x3f) | (ulonglong)auStack_c58[uVar10];
          local_ef8.m_inv_bitlen = local_ef8.m_inv_bitlen + (lVar14 * 8 - (ulonglong)uVar19);
        }
        uVar10 = uVar10 + 1;
      } while ((longlong)uVar10 < lVar20);
    }
    lVar20 = 0x3f - local_ef8.m_inv_bitlen >> 3;
    uVar7 = local_ef8.m_bits << ((char)local_ef8.m_inv_bitlen + 1U & 0x3f);
    *(ulonglong *)local_ef8.m_cur =
         uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
         (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
         (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
    puVar25 = (ulonglong *)((longlong)local_ef8.m_cur + lVar20);
    local_ef8.m_inv_bitlen = local_ef8.m_inv_bitlen + lVar20 * 8;
    goto LAB_14f3db446;
  }
  uVar10 = 0;
  uVar7 = uVar2 * 2 << ((byte)lVar20 & 0x3f);
  lVar14 = 0x40 - lVar20 >> 3;
  uVar4 = 0;
  *puVar25 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
             (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
             (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
  puVar25 = (ulonglong *)((longlong)puVar25 + lVar14);
  uVar19 = uVar4;
  if (0 < param_4) {
    p_Var15 = &local_ef8;
    uVar7 = uVar10;
    uVar22 = uVar10;
    do {
      if (*param_3 != 0) {
        uVar22 = (ulonglong)((int)uVar22 + 1);
        *(uint *)&p_Var15->m_cur = *param_3 << 0x10 | (uint)uVar7;
        p_Var15 = (_rrVarBits_ *)((longlong)&p_Var15->m_cur + 4);
      }
      uVar19 = (uint)uVar22;
      uVar12 = (uint)uVar7 + 1;
      uVar7 = (ulonglong)uVar12;
      param_3 = param_3 + 1;
    } while ((int)uVar12 < param_4);
  }
  p_Var15 = (_rrVarBits_ *)((longlong)&local_ef8.m_cur + (longlong)(int)uVar19 * 4);
  if (&local_ef8 != p_Var15) {
    p_Var3 = (_rrVarBits_ *)((longlong)&local_ef8.m_cur + 4);
    p_Var8 = (_rrVarBits_ *)((longlong)&local_ef8.m_cur + 4);
    while (p_Var8 != p_Var15) {
      uVar19 = *(uint *)&p_Var3->m_cur;
      p_Var8 = p_Var3;
      if (&local_ef8 < p_Var3) {
        do {
          uVar12 = *(uint *)((longlong)&p_Var8[-1].m_inv_bitlen + 4);
          if (uVar12 <= uVar19) break;
          *(uint *)&p_Var8->m_cur = uVar12;
          p_Var8 = (_rrVarBits_ *)((longlong)&p_Var8[-1].m_inv_bitlen + 4);
        } while (&local_ef8 < p_Var8);
      }
      *(uint *)&p_Var8->m_cur = uVar19;
      p_Var3 = (_rrVarBits_ *)((longlong)&p_Var3->m_cur + 4);
      p_Var8 = p_Var3;
    }
  }
  lVar1 = (longlong)param_5 + -1;
  uVar7 = uVar10;
  uVar22 = uVar10;
  uVar9 = uVar10;
  if (lVar1 < 1) {
LAB_14f3daf70:
    uVar13 = 1;
  }
  else {
    do {
      uVar19 = (uint)*(ushort *)((longlong)&local_ef8.m_cur + uVar7 * 4 + 2);
      uVar12 = uVar19 - (int)uVar22;
      iVar21 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar21 == 0; iVar21 = iVar21 + -1) {
        }
      }
      uVar13 = uVar4;
      if (uVar12 != 0) {
        uVar13 = iVar21 + 1;
      }
      if ((int)uVar13 < (int)(uint)uVar9) {
        uVar13 = (uint)uVar9;
      }
      uVar7 = uVar7 + 1;
      uVar22 = (ulonglong)uVar19;
      uVar9 = (ulonglong)uVar13;
    } while ((longlong)uVar7 < lVar1);
    if (uVar13 == 0) goto LAB_14f3daf70;
  }
  iVar21 = 0x1f;
  if (param_2 != 0) {
    for (; (uint)param_2 >> iVar21 == 0; iVar21 = iVar21 + -1) {
    }
  }
  if (param_2 != 0) {
    uVar4 = iVar21 + 1;
  }
  local_ef8.m_inv_bitlen = (lVar20 + lVar14 * 8 + -4) - (ulonglong)uVar4;
  uVar22 = ((longlong)(param_5 + -2) | uVar2 << 4) << ((byte)uVar4 & 0x3f) | (longlong)(int)uVar13;
  uVar7 = uVar10;
  if (0 < lVar1) {
    do {
      uVar19 = *(uint *)((longlong)&local_ef8.m_cur + uVar7 * 4);
      uVar4 = uVar19 >> 0x10;
      lVar20 = 0x3f - local_ef8.m_inv_bitlen >> 3;
      iVar21 = (int)uVar10;
      uVar10 = (ulonglong)uVar4;
      uVar7 = uVar7 + 1;
      uVar9 = uVar22 << ((char)local_ef8.m_inv_bitlen + 1U & 0x3f);
      *puVar25 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                 (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                 (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28 |
                 uVar9 << 0x38;
      puVar25 = (ulonglong *)((longlong)puVar25 + lVar20);
      uVar22 = (uVar22 << 8 | (ulonglong)(uVar19 & 0xff)) << ((byte)uVar13 & 0x3f) |
               (ulonglong)(uVar4 - iVar21);
      local_ef8.m_inv_bitlen = local_ef8.m_inv_bitlen + -8 + (lVar20 * 8 - (longlong)(int)uVar13);
    } while ((longlong)uVar7 < lVar1);
  }
  bVar11 = *(byte *)((longlong)&local_ef8 + lVar1 * 4);
  uVar7 = uVar22 << ((char)local_ef8.m_inv_bitlen + 1U & 0x3f);
  lVar20 = 0x3f - local_ef8.m_inv_bitlen >> 3;
  *puVar25 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
             (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
             (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
  puVar25 = (ulonglong *)((longlong)puVar25 + lVar20);
  local_ef8.m_bits = (ulonglong)bVar11 | uVar22 << 8;
  local_ef8.m_inv_bitlen = local_ef8.m_inv_bitlen + (lVar20 + -1) * 8;
LAB_14f3db446:
  lVar20 = 0x3f - local_ef8.m_inv_bitlen >> 3;
  uVar7 = local_ef8.m_bits << ((char)local_ef8.m_inv_bitlen + 1U & 0x3f);
  *puVar25 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
             (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
             (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
  param_1->m_inv_bitlen = local_ef8.m_inv_bitlen + lVar20 * 8;
  param_1->m_cur = (uchar *)(lVar20 + (longlong)puVar25);
  param_1->m_end = local_f20;
  param_1->m_bits = local_ef8.m_bits;
  return;
}

// newlz_tans_PackCounts_CountDelta @ 14f3db4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2::newlz_tans_PackCounts_CountDelta
          (int param_1,uint *param_2,int param_3,int param_4,ulong64 *param_5,long64 *param_6,
          uchar **param_7,uchar **param_8)

{
  ulong64 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStackY_f58 [32];
  int local_f28;
  uint local_f24;
  int local_f20;
  int *local_f00;
  _rrVarBits_ local_ee8;
  uint auStack_ec8 [32];
  uint local_e48 [128];
  uint auStack_c48 [255];
  int aiStack_84c [261];
  byte local_438 [256];
  uchar local_338 [256];
  uchar local_238 [256];
  uchar local_138 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f58;
  memset(local_e48,0,0x200);
  uVar18 = (ulonglong)param_3;
  uVar21 = 0;
  iVar17 = 0;
  local_f20 = 0;
  local_f24 = 0;
  local_f28 = 1;
  uVar6 = uVar21;
  uVar10 = uVar21;
  if (0 < param_3) {
    do {
      if (param_2[uVar6] != 0) break;
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)uVar18);
  }
  iVar4 = (int)uVar10;
  aiStack_84c[1] = iVar4;
  iVar12 = 6;
  if (iVar4 < param_3) {
    local_f00 = aiStack_84c + 3;
    lVar14 = (longlong)iVar4;
    uVar6 = uVar21;
    uVar11 = uVar21;
    uVar13 = uVar21;
    uVar19 = uVar18;
    uVar20 = uVar21;
    do {
      iVar4 = (int)uVar10;
      do {
        uVar16 = (uint)uVar6;
        if (param_2[lVar14] == 0) break;
        uVar8 = param_2[lVar14] - 1;
        iVar17 = iVar12 >> 2;
        uVar9 = iVar17 * 2;
        uVar2 = uVar8;
        if ((int)uVar8 <= (int)uVar9) {
          uVar2 = (int)(uVar8 - iVar17) >> 0x1f ^ (uVar8 - iVar17) * 2;
          uVar16 = local_f24;
        }
        local_f24 = uVar16 + 1;
        auStack_c48[uVar11] = uVar2;
        uVar11 = uVar11 + 1;
        if (uVar2 < 0x80) {
          local_e48[uVar2] = local_e48[uVar2] + 1;
        }
        else {
          uVar20 = (ulonglong)((int)uVar20 + 1);
          auStack_ec8[uVar13] = uVar2;
          uVar13 = uVar13 + 1;
        }
        uVar6 = (ulonglong)local_f24;
        if ((int)uVar9 <= (int)uVar8) {
          uVar8 = uVar9;
        }
        local_f20 = local_f20 + 1;
        uVar16 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar16;
        uVar19 = (ulonglong)(uint)param_3;
        iVar12 = iVar12 + (uVar8 - iVar17);
        lVar14 = lVar14 + 1;
      } while ((int)uVar16 < param_3);
      iVar17 = (int)uVar20;
      iVar3 = (int)uVar10;
      local_f00[-1] = iVar3 - iVar4;
      for (; (iVar4 = (int)uVar10, lVar14 < (longlong)uVar18 && (param_2[lVar14] == 0));
          lVar14 = lVar14 + 1) {
        uVar10 = (ulonglong)(iVar4 + 1);
      }
      *local_f00 = iVar4 - iVar3;
      local_f00 = local_f00 + 2;
      local_f28 = local_f28 + 2;
    } while (iVar4 < (int)uVar19);
  }
  iVar12 = 0x7fffffff;
  uVar1 = *param_5;
  uVar6 = 1;
  aiStack_84c[local_f28] = aiStack_84c[local_f28] + (0x100 - iVar4);
  lVar14 = 0x3f - *param_6 >> 3;
  uVar10 = uVar1 << ((char)*param_6 + 1U & 0x3f);
  *(ulonglong *)*param_7 =
       uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 | (uVar10 & 0xff0000000000) >> 0x18 |
       (uVar10 & 0xff00000000) >> 8 | (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
       (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38;
  *param_7 = *param_7 + lVar14;
  *param_6 = *param_6 + lVar14 * 8;
  uVar10 = uVar21;
  do {
    iVar3 = (int)uVar10;
    iVar4 = EntropyOfCountsExpGolomb(local_e48,0x80,iVar3);
    uVar18 = uVar21;
    if (0 < iVar17) {
      do {
        uVar16 = (auStack_ec8[uVar18] >> ((byte)uVar10 & 0x1f)) + 1;
        uVar18 = uVar18 + 1;
        iVar5 = 0x1f;
        if (uVar16 != 0) {
          for (; uVar16 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar4 = iVar4 + 1 + iVar3 + iVar5 * 2;
      } while ((longlong)uVar18 < (longlong)iVar17);
    }
    iVar5 = iVar3;
    if (iVar12 <= iVar4) {
      iVar5 = (int)uVar6;
    }
    uVar10 = (ulonglong)(iVar3 + 1U);
    uVar6 = (ulonglong)iVar5;
    if (iVar12 <= iVar4) {
      iVar4 = iVar12;
    }
    iVar12 = iVar4;
  } while ((int)(iVar3 + 1U) < 8);
  *param_5 = *param_5 << 3 | uVar6;
  *param_6 = *param_6 + -3;
  iVar17 = newLZ_encode_alphabet_shape_runlens_split
                     (local_338,local_138,local_238,local_f20,aiStack_84c + 1,local_f28);
  *param_5 = (longlong)(local_f20 + -1) | *param_5 << 8;
  *param_6 = *param_6 + -8;
  uVar10 = *param_5 << ((char)*param_6 + 1U & 0x3f);
  lVar14 = 0x3f - *param_6 >> 3;
  *(ulonglong *)*param_7 =
       uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 | (uVar10 & 0xff0000000000) >> 0x18 |
       (uVar10 & 0xff00000000) >> 8 | (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
       (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38;
  *param_7 = *param_7 + lVar14;
  *param_6 = *param_6 + lVar14 * 8;
  local_ee8.m_bits = *param_5;
  local_ee8.m_inv_bitlen = *param_6;
  local_ee8.m_cur = *param_7;
  local_ee8.m_end = *param_8;
  newLZ_encode_alphabet_shape_num_EG(&local_ee8,iVar17,local_f20);
  lVar14 = (longlong)(int)local_f24;
  bVar7 = (byte)iVar5;
  uVar10 = uVar21;
  if (0 < lVar14) {
    do {
      uVar9 = auStack_c48[uVar10] + (1 << (bVar7 & 0x1f));
      uVar16 = uVar9 >> (bVar7 & 0x1f);
      iVar12 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      local_438[uVar10] = (byte)iVar12;
      auStack_c48[uVar10] = (1 << ((byte)iVar12 + bVar7 & 0x1f)) - 1U & uVar9;
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < lVar14);
  }
  newLZ_encode_unary_block(&local_ee8,local_438,lVar14);
  newLZ_encode_unary_block(&local_ee8,local_338,(longlong)iVar17);
  newLZ_encode_variable_U8_block(&local_ee8,local_138,local_238,(longlong)iVar17);
  *param_5 = local_ee8.m_bits;
  *param_6 = local_ee8.m_inv_bitlen;
  *param_7 = local_ee8.m_cur;
  *param_8 = local_ee8.m_end;
  if (0 < lVar14) {
    do {
      uVar16 = (uint)local_438[uVar21] + iVar5;
      if (uVar16 != 0) {
        lVar15 = 0x3f - *param_6 >> 3;
        uVar10 = *param_5 << ((char)*param_6 + 1U & 0x3f);
        *(ulonglong *)*param_7 =
             uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
             (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
             (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28 |
             uVar10 << 0x38;
        *param_7 = *param_7 + lVar15;
        *param_6 = *param_6 + lVar15 * 8;
        *param_5 = (ulonglong)auStack_c48[uVar21] | *param_5 << ((byte)uVar16 & 0x3f);
        *param_6 = *param_6 - (ulonglong)uVar16;
      }
      uVar21 = uVar21 + 1;
    } while ((longlong)uVar21 < lVar14);
  }
  lVar14 = 0x3f - *param_6 >> 3;
  uVar10 = *param_5 << ((char)*param_6 + 1U & 0x3f);
  *(ulonglong *)*param_7 =
       uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 | (uVar10 & 0xff0000000000) >> 0x18 |
       (uVar10 & 0xff00000000) >> 8 | (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
       (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38;
  *param_7 = *param_7 + lVar14;
  *param_6 = *param_6 + lVar14 * 8;
  return;
}

// newlz_tans_UnPackCounts4 @ 14f3db9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
oo2::newlz_tans_UnPackCounts4
          (int param_1,newlz_tans_UnpackedCounts *param_2,ulong64 *param_3,long64 *param_4,
          uchar **param_5,uchar **param_6)

{
  uchar *puVar1;
  ulonglong *puVar2;
  ulong64 uVar3;
  uchar *puVar4;
  uchar *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  byte bVar20;
  longlong lVar21;
  char *pcVar22;
  long64 lVar23;
  ulonglong uVar24;
  uint uVar25;
  uchar *puVar26;
  uint *puVar27;
  undefined1 auStack_1b8 [32];
  uint local_198;
  uint local_194;
  uint local_190;
  uchar **local_188;
  int local_180;
  int local_17c;
  longlong local_178;
  uint *local_170;
  newlz_tans_UnpackedCounts *local_168;
  char local_158 [256];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_188 = param_5;
  local_168 = param_2;
  memset(local_158,0,0x100);
  lVar10 = *param_4;
  local_190 = 1 << ((byte)param_1 & 0x1f);
  puVar2 = (ulonglong *)*param_5;
  uVar17 = 0;
  lVar19 = lVar10 >> 3;
  lVar21 = (longlong)*param_6 - (longlong)puVar2;
  if (lVar21 < 8) {
    uVar14 = uVar17;
    if (0 < lVar21) {
      uVar14 = (ulonglong)(byte)*puVar2;
    }
    uVar16 = uVar17;
    if (lVar21 != 1 && -1 < lVar21 + -1) {
      uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
    }
    uVar24 = uVar17;
    if (lVar21 != 2 && -1 < lVar21 + -2) {
      uVar24 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
    }
    uVar8 = uVar17;
    if (lVar21 != 3 && -1 < lVar21 + -3) {
      uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
    }
    lVar10 = (longlong)*param_6 - ((longlong)puVar2 + 4);
    uVar18 = uVar17;
    if (0 < lVar10) {
      uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
    }
    uVar7 = uVar17;
    if (lVar10 != 1 && -1 < lVar10 + -1) {
      uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
    }
    uVar11 = uVar17;
    if (lVar10 != 2 && -1 < lVar10 + -2) {
      uVar11 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
    }
    uVar13 = uVar17;
    if (lVar10 != 3 && -1 < lVar10 + -3) {
      uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
    }
    lVar10 = *param_4;
    uVar13 = ((((((uVar14 << 8 | uVar16) << 8 | uVar24) << 8 | uVar8) << 8 | uVar18) << 8 | uVar7)
              << 8 | uVar11) << 8 | uVar13;
  }
  else {
    uVar14 = *puVar2;
    uVar13 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
             (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
             (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 | (uVar14 & 0xff00) << 0x28 |
             uVar14 << 0x38;
  }
  *param_3 = *param_3 | uVar13 >> (0x3fU - (char)lVar10 & 0x3f);
  *param_5 = *param_5 + lVar19;
  *param_4 = *param_4 + lVar19 * -8;
  uVar3 = *param_3;
  iVar12 = 0x1f;
  if (param_1 != 0) {
    for (; (uint)param_1 >> iVar12 == 0; iVar12 = iVar12 + -1) {
    }
  }
  *param_3 = uVar3 * 8;
  *param_4 = *param_4 + 3;
  uVar25 = 0;
  uVar6 = uVar25;
  if (param_1 != 0) {
    uVar6 = iVar12 + 1;
  }
  uVar14 = *param_3;
  *param_3 = uVar14 << ((byte)uVar6 & 0x3f);
  lVar23 = *param_4 + (ulonglong)uVar6;
  *param_4 = lVar23;
  uVar14 = uVar14 >> (0x40 - (byte)uVar6 & 0x3f);
  iVar12 = (int)uVar14;
  if (iVar12 == 0) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3dc0a2;
    pcVar22 = "OODLE ERROR : max_delta_bits == 0\n";
    iVar12 = 0x318;
  }
  else if (param_1 < iVar12) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3dc0a2;
    pcVar22 = "OODLE ERROR : max_delta_bits > L_bits\n";
    iVar12 = 0x31d;
  }
  else {
    local_170 = param_2->larger;
    local_198 = 0;
    puVar1 = param_2->singles;
    local_194 = 0;
    local_17c = (uint)(uVar3 >> 0x3d) + 1;
    puVar26 = puVar1;
    puVar27 = local_170;
    if (local_17c != 0) {
      local_180 = 0x40 - iVar12;
      local_178 = (longlong)iVar12;
      uVar16 = uVar17;
      uVar24 = uVar17;
      do {
        lVar10 = *param_4;
        puVar2 = (ulonglong *)*local_188;
        lVar19 = (longlong)*param_6 - (longlong)puVar2;
        lVar21 = lVar10 >> 3;
        if (lVar19 < 8) {
          uVar16 = uVar17;
          if (0 < lVar19) {
            uVar16 = (ulonglong)(byte)*puVar2;
          }
          uVar8 = uVar17;
          if (lVar19 != 1 && -1 < lVar19 + -1) {
            uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
          }
          uVar18 = uVar17;
          if (lVar19 != 2 && -1 < lVar19 + -2) {
            uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
          }
          uVar7 = uVar17;
          if (lVar19 != 3 && -1 < lVar19 + -3) {
            uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
          }
          lVar10 = (longlong)*param_6 - ((longlong)puVar2 + 4);
          uVar11 = uVar17;
          if (0 < lVar10) {
            uVar11 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
          }
          uVar13 = uVar17;
          if (lVar10 != 1 && -1 < lVar10 + -1) {
            uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
          }
          uVar9 = uVar17;
          if (lVar10 != 2 && -1 < lVar10 + -2) {
            uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
          }
          uVar15 = uVar17;
          if (lVar10 != 3 && -1 < lVar10 + -3) {
            uVar15 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
          }
          lVar10 = *param_4;
          uVar15 = ((((((uVar16 << 8 | uVar8) << 8 | uVar18) << 8 | uVar7) << 8 | uVar11) << 8 |
                    uVar13) << 8 | uVar9) << 8 | uVar15;
          uVar6 = local_194;
        }
        else {
          uVar8 = *puVar2;
          uVar15 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                   (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                   (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 | (uVar8 & 0xff00) << 0x28
                   | uVar8 << 0x38;
          uVar6 = (uint)uVar16;
        }
        *param_3 = *param_3 | uVar15 >> (0x3fU - (char)lVar10 & 0x3f);
        *local_188 = *local_188 + lVar21;
        *param_4 = *param_4 + lVar21 * -8;
        uVar16 = *param_3;
        *param_3 = uVar16 << 8;
        *param_4 = *param_4 + 8;
        if (local_158[uVar16 >> 0x38] != '\0') {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3dc0a2;
          pcVar22 = "OODLE ERROR : corruption : ! seen[sym]\n";
          iVar12 = 0x32c;
          goto LAB_14f3dc095;
        }
        uVar8 = *param_3;
        *param_3 = uVar8 << ((byte)uVar14 & 0x3f);
        *param_4 = *param_4 + local_178;
        uVar25 = (int)uVar24 + (int)(uVar8 >> ((byte)local_180 & 0x3f));
        uVar24 = (ulonglong)uVar25;
        if (uVar25 == 0) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3dc0a2;
          pcVar22 = "OODLE ERROR : corruption : cur > 0\n";
          iVar12 = 0x332;
          goto LAB_14f3dc095;
        }
        local_158[uVar16 >> 0x38] = '\x01';
        bVar20 = (byte)(uVar16 >> 0x38);
        if (uVar25 == 1) {
          *puVar26 = bVar20;
          puVar26 = puVar26 + 1;
        }
        else {
          *puVar27 = (uint)bVar20 << 0x10 | uVar25;
          puVar27 = puVar27 + 1;
        }
        local_198 = local_198 + uVar25;
        if (local_190 <= local_198) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3dc0a2;
          pcVar22 = "OODLE ERROR : corruption : sum < L\n";
          iVar12 = 0x33b;
          goto LAB_14f3dc095;
        }
        local_194 = uVar6 + 1;
        uVar16 = (ulonglong)local_194;
      } while ((int)local_194 < local_17c);
      lVar23 = *param_4;
    }
    lVar19 = lVar23 >> 3;
    puVar2 = (ulonglong *)*local_188;
    lVar10 = (longlong)*param_6 - (longlong)puVar2;
    if (lVar10 < 8) {
      uVar14 = uVar17;
      if (0 < lVar10) {
        uVar14 = (ulonglong)(byte)*puVar2;
      }
      uVar16 = uVar17;
      if (lVar10 != 1 && -1 < lVar10 + -1) {
        uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
      }
      uVar24 = uVar17;
      if (lVar10 != 2 && -1 < lVar10 + -2) {
        uVar24 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
      }
      uVar8 = uVar17;
      if (lVar10 != 3 && -1 < lVar10 + -3) {
        uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
      }
      lVar10 = (longlong)*param_6 - ((longlong)puVar2 + 4);
      uVar18 = uVar17;
      if (0 < lVar10) {
        uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
      }
      uVar7 = uVar17;
      if (lVar10 != 1 && -1 < lVar10 + -1) {
        uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
      }
      uVar11 = uVar17;
      if (lVar10 != 2 && -1 < lVar10 + -2) {
        uVar11 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
      }
      if (lVar10 != 3 && -1 < lVar10 + -3) {
        uVar17 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
      }
      lVar23 = *param_4;
      uVar17 = ((((((uVar14 << 8 | uVar16) << 8 | uVar24) << 8 | uVar8) << 8 | uVar18) << 8 | uVar7)
                << 8 | uVar11) << 8 | uVar17;
    }
    else {
      uVar17 = *puVar2;
      uVar17 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
               (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
               (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 | (uVar17 & 0xff00) << 0x28
               | uVar17 << 0x38;
    }
    *param_3 = *param_3 | uVar17 >> (0x3fU - (char)lVar23 & 0x3f);
    *local_188 = *local_188 + lVar19;
    *param_4 = *param_4 + lVar19 * -8;
    uVar17 = *param_3;
    *param_3 = uVar17 << 8;
    *param_4 = *param_4 + 8;
    if (local_158[uVar17 >> 0x38] == '\0') {
      uVar6 = local_190 - local_198;
      if ((uVar25 <= uVar6) && (1 < uVar6)) {
        *puVar27 = (uint)(byte)(uVar17 >> 0x38) << 0x10 | uVar6;
        if (puVar1 != puVar26) {
          puVar5 = param_2->singles;
          while (puVar5 = puVar5 + 1, puVar5 != puVar26) {
            bVar20 = *puVar5;
            puVar4 = puVar5;
            while (puVar1 < puVar4) {
              if (puVar4[-1] <= bVar20) break;
              *puVar4 = puVar4[-1];
              puVar4 = puVar4 + -1;
            }
            *puVar4 = bVar20;
          }
        }
        small_insertion_sort<unsigned_int>(local_170,puVar27 + 1);
        local_168->num_larger = (int)((longlong)(puVar27 + 1) + (-0x108 - (longlong)local_168) >> 2)
        ;
        local_168->num_singles = ((int)puVar26 - (int)local_168) + -8;
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3dc0a2;
      pcVar22 = "OODLE ERROR : last too small\n";
      iVar12 = 0x34b;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3dc0a2;
      pcVar22 = "OODLE ERROR : corruption : ! seen[mps]\n";
      iVar12 = 0x342;
    }
  }
LAB_14f3dc095:
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlz_tans.cpp",iVar12,pcVar22);
LAB_14f3dc0a2:
  ooLogErrorPost();
  return false;
}

// newlz_tans_UnPackCounts @ 14f3dc0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl
oo2::newlz_tans_UnPackCounts(_rrVarBits_ *param_1,int param_2,newlz_tans_UnpackedCounts *param_3)

{
  uint uVar1;
  uchar *puVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  uchar *puVar6;
  uchar *puVar7;
  long64 lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  int iVar24;
  char *pcVar25;
  ulonglong uVar26;
  ushort uVar27;
  uint *puVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  ulong64 uVar32;
  uchar *puVar33;
  undefined1 auStackY_548 [32];
  uint local_518;
  longlong local_510;
  uint local_508;
  ulonglong local_500;
  byte *local_4f8;
  longlong local_4e8;
  _rrVarBits_ local_4d0;
  ulonglong local_4b0;
  byte *local_4a8;
  uchar *local_4a0;
  BlockBitReader local_498;
  _rrVarBits_ *local_480;
  byte local_478 [8];
  undefined8 auStack_470 [65];
  ushort local_268 [272];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_548;
  lVar20 = param_1->m_inv_bitlen;
  local_4f8 = param_1->m_end;
  puVar22 = (ulonglong *)param_1->m_cur;
  uVar19 = 0;
  lVar13 = (longlong)local_4f8 - (longlong)puVar22;
  if (lVar13 < 8) {
    uVar16 = uVar19;
    if (0 < lVar13) {
      uVar16 = (ulonglong)(byte)*puVar22;
    }
    uVar17 = uVar19;
    if (lVar13 != 1 && -1 < lVar13 + -1) {
      uVar17 = (ulonglong)*(byte *)((longlong)puVar22 + 1);
    }
    uVar23 = uVar19;
    if (lVar13 != 2 && -1 < lVar13 + -2) {
      uVar23 = (ulonglong)*(byte *)((longlong)puVar22 + 2);
    }
    uVar10 = uVar19;
    if (lVar13 != 3 && -1 < lVar13 + -3) {
      uVar10 = (ulonglong)*(byte *)((longlong)puVar22 + 3);
    }
    lVar13 = (longlong)local_4f8 - ((longlong)puVar22 + 4);
    uVar11 = uVar19;
    if (0 < lVar13) {
      uVar11 = (ulonglong)*(byte *)((longlong)puVar22 + 4);
    }
    uVar21 = uVar19;
    if (lVar13 != 1 && -1 < lVar13 + -1) {
      uVar21 = (ulonglong)*(byte *)((longlong)puVar22 + 5);
    }
    uVar26 = uVar19;
    if (lVar13 != 2 && -1 < lVar13 + -2) {
      uVar26 = (ulonglong)*(byte *)((longlong)puVar22 + 6);
    }
    uVar15 = uVar19;
    if (lVar13 != 3 && -1 < lVar13 + -3) {
      uVar15 = (ulonglong)*(byte *)((longlong)puVar22 + 7);
    }
    uVar15 = ((((((uVar16 << 8 | uVar17) << 8 | uVar23) << 8 | uVar10) << 8 | uVar11) << 8 | uVar21)
              << 8 | uVar26) << 8 | uVar15;
  }
  else {
    uVar16 = *puVar22;
    uVar15 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
             (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
             (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 | (uVar16 & 0xff00) << 0x28 |
             uVar16 << 0x38;
  }
  puVar22 = (ulonglong *)((longlong)puVar22 + (lVar20 >> 3));
  uVar16 = uVar15 >> (0x3fU - (char)lVar20 & 0x3f) | param_1->m_bits;
  lVar20 = lVar20 + (lVar20 >> 3) * -8 + 1;
  uVar14 = 0;
  local_480 = param_1;
  if ((longlong)uVar16 < 0) {
    lVar20 = lVar20 + 0xb;
    local_4b0 = (uVar16 & 0x7fffffffffffffff) >> 0x3c;
    uVar31 = (byte)((uVar16 << 4) >> 0x38) + 1;
    if (uVar31 < 2) {
      return false;
    }
    uVar29 = uVar14;
    if (uVar31 != 0x100) {
      uVar29 = 0x101 - uVar31;
      if ((int)uVar31 < (int)(0x101 - uVar31)) {
        uVar29 = uVar31;
      }
      uVar1 = uVar29 * 2 - 1;
      uVar4 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> uVar4 == 0; uVar4 = uVar4 - 1) {
        }
      }
      bVar12 = (byte)(uVar4 + 1);
      iVar9 = (1 << (bVar12 & 0x1f)) + uVar29 * -2;
      iVar30 = (int)((uVar16 << 0xc) >> (0x40 - bVar12 & 0x3f));
      uVar29 = iVar30 >> 1;
      if ((int)uVar29 < iVar9) {
        lVar20 = lVar20 + (ulonglong)uVar4;
      }
      else {
        uVar29 = iVar30 - iVar9;
        lVar20 = lVar20 + (ulonglong)(uVar4 + 1);
      }
    }
    local_498.pos_in_byte = -((int)-lVar20 + 0x3f) & 7;
    local_498.ptr = (uchar *)((longlong)puVar22 - (-lVar20 + 0x46U >> 3));
    uVar17 = (ulonglong)(uVar29 + uVar31);
    local_498.end = local_4f8;
    uVar16 = newLZ_decode_unary_block(local_478,(ulonglong)(uVar29 + uVar31),&local_498);
    if (uVar16 != uVar17) {
      return false;
    }
    pbVar3 = local_478 + uVar17;
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    *(undefined8 *)((longlong)auStack_470 + uVar17) = 0;
    local_4d0.m_end = local_498.end;
    uVar16 = uVar19;
    if (local_498.end != local_498.ptr && -1 < (longlong)local_498.end - (longlong)local_498.ptr) {
      uVar16 = (ulonglong)*local_498.ptr;
    }
    puVar22 = (ulonglong *)(local_498.ptr + 1);
    lVar20 = (longlong)local_498.end - (longlong)puVar22;
    if (lVar20 < 8) {
      uVar17 = uVar19;
      if (0 < lVar20) {
        uVar17 = (ulonglong)(byte)*puVar22;
      }
      uVar23 = uVar19;
      if (lVar20 != 1 && -1 < lVar20 + -1) {
        uVar23 = (ulonglong)local_498.ptr[2];
      }
      uVar10 = uVar19;
      if (lVar20 != 2 && -1 < lVar20 + -2) {
        uVar10 = (ulonglong)local_498.ptr[3];
      }
      uVar11 = uVar19;
      if (lVar20 != 3 && -1 < lVar20 + -3) {
        uVar11 = (ulonglong)local_498.ptr[4];
      }
      lVar20 = (longlong)local_498.end - (longlong)(local_498.ptr + 5);
      uVar21 = uVar19;
      if (0 < lVar20) {
        uVar21 = (ulonglong)local_498.ptr[5];
      }
      uVar26 = uVar19;
      if (lVar20 != 1 && -1 < lVar20 + -1) {
        uVar26 = (ulonglong)local_498.ptr[6];
      }
      uVar15 = uVar19;
      if (lVar20 != 2 && -1 < lVar20 + -2) {
        uVar15 = (ulonglong)local_498.ptr[7];
      }
      uVar17 = ((((((uVar17 << 8 | uVar23) << 8 | uVar10) << 8 | uVar11) << 8 | uVar21) << 8 |
                uVar26) << 8 | uVar15) << 8;
    }
    else {
      uVar17 = *puVar22;
      uVar17 = (uVar17 & 0xff000000000000) >> 0x28 | (uVar17 & 0xff0000000000) >> 0x18 |
               (uVar17 & 0xff00000000) >> 8 | (uVar17 & 0xff000000) << 8 |
               (uVar17 & 0xff0000) << 0x18 | (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
    }
    local_4d0.m_cur = local_498.ptr + 7;
    local_4d0.m_bits = (uVar17 >> 8 | uVar16 << 0x38) << ((byte)local_498.pos_in_byte & 0x3f);
    local_4d0.m_inv_bitlen = (ulonglong)local_498.pos_in_byte + 7;
    iVar9 = newLZ_decode_alphabet_shape_runlens
                      (local_268,uVar31,uVar29,local_478 + uVar31,&local_4d0);
    lVar8 = local_4d0.m_inv_bitlen;
    puVar33 = local_4d0.m_end;
    puVar2 = local_4d0.m_cur;
    if (iVar9 < 0) {
      return false;
    }
    lVar20 = local_4d0.m_inv_bitlen >> 3;
    local_4f8 = local_4d0.m_end;
    if ((longlong)local_4d0.m_end - (longlong)local_4d0.m_cur < 8) {
      uVar32 = rrVB_Get64BE_Masked(local_4d0.m_cur,local_4d0.m_end);
    }
    else {
      uVar16 = *(ulonglong *)local_4d0.m_cur;
      uVar32 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
               (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
               (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 | (uVar16 & 0xff00) << 0x28
               | uVar16 << 0x38;
    }
    local_518 = 6;
    uVar32 = uVar32 >> (0x3fU - (char)lVar8 & 0x3f) | local_4d0.m_bits;
    local_4a0 = param_3->singles;
    local_4e8 = 0;
    puVar28 = param_3->larger;
    local_510 = lVar8 + lVar20 * -8;
    puVar22 = (ulonglong *)((longlong)puVar2 + lVar20);
    local_4a8 = local_478;
    uVar31 = 0;
    if (0 < iVar9) {
      do {
        uVar14 = uVar31;
        uVar27 = local_268[local_4e8 * 2];
        iVar30 = (uint)uVar27 << 0x10;
        local_508 = (uint)local_268[local_4e8 * 2 + 1];
        do {
          lVar20 = (longlong)puVar33 - (longlong)puVar22;
          if (lVar20 < 8) {
            uVar16 = uVar19;
            if (0 < lVar20) {
              uVar16 = (ulonglong)(byte)*puVar22;
            }
            uVar17 = uVar19;
            if (lVar20 != 1 && -1 < lVar20 + -1) {
              uVar17 = (ulonglong)*(byte *)((longlong)puVar22 + 1);
            }
            uVar23 = uVar19;
            if (lVar20 != 2 && -1 < lVar20 + -2) {
              uVar23 = (ulonglong)*(byte *)((longlong)puVar22 + 2);
            }
            uVar10 = uVar19;
            if (lVar20 != 3 && -1 < lVar20 + -3) {
              uVar10 = (ulonglong)*(byte *)((longlong)puVar22 + 3);
            }
            lVar20 = (longlong)puVar33 - ((longlong)puVar22 + 4);
            uVar11 = uVar19;
            if (0 < lVar20) {
              uVar11 = (ulonglong)*(byte *)((longlong)puVar22 + 4);
            }
            uVar21 = uVar19;
            if (lVar20 != 1 && -1 < lVar20 + -1) {
              uVar21 = (ulonglong)*(byte *)((longlong)puVar22 + 5);
            }
            uVar26 = uVar19;
            if (lVar20 != 2 && -1 < lVar20 + -2) {
              uVar26 = (ulonglong)*(byte *)((longlong)puVar22 + 6);
            }
            uVar15 = uVar19;
            if (lVar20 != 3 && -1 < lVar20 + -3) {
              uVar15 = (ulonglong)*(byte *)((longlong)puVar22 + 7);
            }
            uVar15 = ((((((uVar16 << 8 | uVar17) << 8 | uVar23) << 8 | uVar10) << 8 | uVar11) << 8 |
                      uVar21) << 8 | uVar26) << 8 | uVar15;
          }
          else {
            uVar16 = *puVar22;
            uVar15 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                     (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                     (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                     (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
          }
          puVar22 = (ulonglong *)((longlong)puVar22 + (local_510 >> 3));
          uVar16 = uVar32 | uVar15 >> (0x3fU - (char)local_510 & 0x3f);
          iVar24 = (int)local_518 >> 2;
          bVar12 = *local_4a8;
          local_4a8 = local_4a8 + 1;
          uVar31 = (uint)bVar12 + (int)local_4b0;
          if (0xf < uVar31) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3dcea9;
            pcVar25 = "OODLE ERROR : corruption : nextra <= 15\n";
            iVar9 = 0x491;
            goto LAB_14f3dce9e;
          }
          bVar12 = (byte)uVar31;
          uVar32 = uVar16 << (bVar12 & 0x3f);
          local_510 = local_510 + (local_510 >> 3) * -8 + (ulonglong)uVar31;
          uVar31 = iVar24 * 2;
          uVar29 = ((1 << (bVar12 & 0x1f)) - (1 << ((byte)local_4b0 & 0x1f))) +
                   (int)((uVar16 >> 1) >> (0x3f - bVar12 & 0x3f));
          if (((int)uVar29 <= (int)uVar31) &&
             (uVar29 = (uVar29 >> 1 ^ -(uVar29 & 1)) + iVar24, (int)uVar29 < (int)uVar31)) {
            uVar31 = uVar29;
          }
          *local_4a0 = (uchar)uVar27;
          local_518 = local_518 + (uVar31 - iVar24);
          iVar24 = uVar29 + 1;
          *puVar28 = iVar30 + iVar24;
          local_4a0 = local_4a0 + (iVar24 == 1);
          uVar16 = uVar19;
          if (1 < iVar24) {
            uVar16 = 4;
          }
          uVar14 = uVar14 + iVar24;
          uVar27 = uVar27 + 1;
          puVar28 = (uint *)((longlong)puVar28 + uVar16);
          iVar30 = iVar30 + 0x10000;
          local_508 = local_508 - 1;
        } while (local_508 != 0);
        local_4e8 = local_4e8 + 1;
        uVar31 = uVar14;
      } while (local_4e8 < iVar9);
    }
    param_3->num_singles = ((int)local_4a0 - (int)param_3) + -8;
    param_3->num_larger = (int)((longlong)puVar28 + (-0x108 - (longlong)param_3) >> 2);
    if (uVar14 == 1 << ((byte)param_2 & 0x1f)) {
LAB_14f3dce5f:
      local_480->m_end = local_4f8;
      local_480->m_bits = uVar32;
      local_480->m_inv_bitlen = local_510;
      local_480->m_cur = (uchar *)puVar22;
      return true;
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3dcea9;
    pcVar25 = "OODLE ERROR : corruption : count_sum == L\n";
    iVar9 = 0x4b7;
  }
  else {
    memset(local_478,0,0x100);
    uVar31 = 1 << ((byte)param_2 & 0x1f);
    lVar13 = (longlong)local_4f8 - (longlong)puVar22;
    if (lVar13 < 8) {
      uVar17 = uVar19;
      if (0 < lVar13) {
        uVar17 = (ulonglong)(byte)*puVar22;
      }
      uVar23 = uVar19;
      if (lVar13 != 1 && -1 < lVar13 + -1) {
        uVar23 = (ulonglong)*(byte *)((longlong)puVar22 + 1);
      }
      uVar10 = uVar19;
      if (lVar13 != 2 && -1 < lVar13 + -2) {
        uVar10 = (ulonglong)*(byte *)((longlong)puVar22 + 2);
      }
      uVar11 = uVar19;
      if (lVar13 != 3 && -1 < lVar13 + -3) {
        uVar11 = (ulonglong)*(byte *)((longlong)puVar22 + 3);
      }
      lVar13 = (longlong)local_4f8 - ((longlong)puVar22 + 4);
      uVar21 = uVar19;
      if (0 < lVar13) {
        uVar21 = (ulonglong)*(byte *)((longlong)puVar22 + 4);
      }
      uVar26 = uVar19;
      if (lVar13 != 1 && -1 < lVar13 + -1) {
        uVar26 = (ulonglong)*(byte *)((longlong)puVar22 + 5);
      }
      uVar15 = uVar19;
      if (lVar13 != 2 && -1 < lVar13 + -2) {
        uVar15 = (ulonglong)*(byte *)((longlong)puVar22 + 6);
      }
      uVar18 = uVar19;
      if (lVar13 != 3 && -1 < lVar13 + -3) {
        uVar18 = (ulonglong)*(byte *)((longlong)puVar22 + 7);
      }
      uVar18 = ((((((uVar17 << 8 | uVar23) << 8 | uVar10) << 8 | uVar11) << 8 | uVar21) << 8 |
                uVar26) << 8 | uVar15) << 8 | uVar18;
    }
    else {
      uVar17 = *puVar22;
      uVar18 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
               (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
               (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 | (uVar17 & 0xff00) << 0x28
               | uVar17 << 0x38;
    }
    puVar22 = (ulonglong *)((longlong)puVar22 + (lVar20 >> 3));
    uVar16 = uVar16 * 2 | uVar18 >> (0x3fU - (char)lVar20 & 0x3f);
    local_500 = uVar16 << 3;
    iVar9 = 0x1f;
    if (param_2 != 0) {
      for (; (uint)param_2 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    uVar29 = uVar14;
    if (param_2 != 0) {
      uVar29 = iVar9 + 1;
    }
    uVar17 = local_500 >> (0x40 - (byte)uVar29 & 0x3f);
    local_510 = lVar20 + (lVar20 >> 3) * -8 + 3 + (ulonglong)uVar29;
    local_500 = local_500 << ((byte)uVar29 & 0x3f);
    iVar9 = (int)uVar17;
    if (iVar9 == 0) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3dcea9;
      pcVar25 = "OODLE ERROR : max_delta_bits == 0\n";
      iVar9 = 0x318;
    }
    else if (param_2 < iVar9) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3dcea9;
      pcVar25 = "OODLE ERROR : max_delta_bits > L_bits\n";
      iVar9 = 0x31d;
    }
    else {
      local_518 = 0;
      local_508 = 0;
      puVar2 = param_3->singles;
      puVar28 = param_3->larger;
      uVar29 = (uint)(uVar16 >> 0x3d);
      puVar33 = puVar2;
      if (uVar29 != 0xffffffff) {
        bVar12 = (byte)uVar17;
        uVar16 = uVar19;
        uVar17 = uVar19;
        uVar23 = uVar19;
        do {
          lVar20 = (longlong)local_4f8 - (longlong)puVar22;
          if (lVar20 < 8) {
            uVar16 = uVar19;
            if (0 < lVar20) {
              uVar16 = (ulonglong)(byte)*puVar22;
            }
            uVar17 = uVar19;
            if (lVar20 != 1 && -1 < lVar20 + -1) {
              uVar17 = (ulonglong)*(byte *)((longlong)puVar22 + 1);
            }
            uVar10 = uVar19;
            if (lVar20 != 2 && -1 < lVar20 + -2) {
              uVar10 = (ulonglong)*(byte *)((longlong)puVar22 + 2);
            }
            uVar11 = uVar19;
            if (lVar20 != 3 && -1 < lVar20 + -3) {
              uVar11 = (ulonglong)*(byte *)((longlong)puVar22 + 3);
            }
            lVar20 = (longlong)local_4f8 - ((longlong)puVar22 + 4);
            uVar21 = uVar19;
            if (0 < lVar20) {
              uVar21 = (ulonglong)*(byte *)((longlong)puVar22 + 4);
            }
            uVar26 = uVar19;
            if (lVar20 != 1 && -1 < lVar20 + -1) {
              uVar26 = (ulonglong)*(byte *)((longlong)puVar22 + 5);
            }
            uVar15 = uVar19;
            if (lVar20 != 2 && -1 < lVar20 + -2) {
              uVar15 = (ulonglong)*(byte *)((longlong)puVar22 + 6);
            }
            uVar18 = uVar19;
            if (lVar20 != 3 && -1 < lVar20 + -3) {
              uVar18 = (ulonglong)*(byte *)((longlong)puVar22 + 7);
            }
            uVar18 = ((((((uVar16 << 8 | uVar17) << 8 | uVar10) << 8 | uVar11) << 8 | uVar21) << 8 |
                      uVar26) << 8 | uVar15) << 8 | uVar18;
          }
          else {
            uVar10 = *puVar22;
            uVar18 = uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
                     (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
                     (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
                     (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38;
            local_518 = (uint)uVar16;
            local_508 = (uint)uVar17;
          }
          puVar22 = (ulonglong *)((longlong)puVar22 + (local_510 >> 3));
          uVar16 = local_500 | uVar18 >> (0x3fU - (char)local_510 & 0x3f);
          if (local_478[uVar16 >> 0x38] != 0) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3dcea9;
            pcVar25 = "OODLE ERROR : corruption : ! seen[sym]\n";
            iVar9 = 0x32c;
            goto LAB_14f3dce9e;
          }
          local_510 = local_510 + (local_510 >> 3) * -8 + 8 + (longlong)iVar9;
          local_500 = (uVar16 << 8) << (bVar12 & 0x3f);
          uVar14 = (int)uVar23 + (int)((uVar16 << 8) >> (0x40 - bVar12 & 0x3f));
          uVar23 = (ulonglong)uVar14;
          if (uVar14 == 0) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3dcea9;
            pcVar25 = "OODLE ERROR : corruption : cur > 0\n";
            iVar9 = 0x332;
            goto LAB_14f3dce9e;
          }
          local_478[uVar16 >> 0x38] = 1;
          bVar5 = (byte)(uVar16 >> 0x38);
          if (uVar14 == 1) {
            *puVar33 = bVar5;
            puVar33 = puVar33 + 1;
          }
          else {
            *puVar28 = (uint)bVar5 << 0x10 | uVar14;
            puVar28 = puVar28 + 1;
          }
          local_518 = local_518 + uVar14;
          uVar16 = (ulonglong)local_518;
          if (uVar31 <= local_518) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3dcea9;
            pcVar25 = "OODLE ERROR : corruption : sum < L\n";
            iVar9 = 0x33b;
            goto LAB_14f3dce9e;
          }
          local_508 = local_508 + 1;
          uVar17 = (ulonglong)local_508;
        } while ((int)local_508 < (int)(uVar29 + 1));
      }
      lVar20 = (longlong)local_4f8 - (longlong)puVar22;
      if (lVar20 < 8) {
        uVar16 = uVar19;
        if (0 < lVar20) {
          uVar16 = (ulonglong)(byte)*puVar22;
        }
        uVar17 = uVar19;
        if (lVar20 != 1 && -1 < lVar20 + -1) {
          uVar17 = (ulonglong)*(byte *)((longlong)puVar22 + 1);
        }
        uVar23 = uVar19;
        if (lVar20 != 2 && -1 < lVar20 + -2) {
          uVar23 = (ulonglong)*(byte *)((longlong)puVar22 + 2);
        }
        uVar10 = uVar19;
        if (lVar20 != 3 && -1 < lVar20 + -3) {
          uVar10 = (ulonglong)*(byte *)((longlong)puVar22 + 3);
        }
        lVar20 = (longlong)local_4f8 - ((longlong)puVar22 + 4);
        uVar11 = uVar19;
        if (0 < lVar20) {
          uVar11 = (ulonglong)*(byte *)((longlong)puVar22 + 4);
        }
        uVar21 = uVar19;
        if (lVar20 != 1 && -1 < lVar20 + -1) {
          uVar21 = (ulonglong)*(byte *)((longlong)puVar22 + 5);
        }
        uVar26 = uVar19;
        if (lVar20 != 2 && -1 < lVar20 + -2) {
          uVar26 = (ulonglong)*(byte *)((longlong)puVar22 + 6);
        }
        if (lVar20 != 3 && -1 < lVar20 + -3) {
          uVar19 = (ulonglong)*(byte *)((longlong)puVar22 + 7);
        }
        uVar19 = ((((((uVar16 << 8 | uVar17) << 8 | uVar23) << 8 | uVar10) << 8 | uVar11) << 8 |
                  uVar21) << 8 | uVar26) << 8 | uVar19;
      }
      else {
        uVar19 = *puVar22;
        uVar19 = uVar19 >> 0x38 | (uVar19 & 0xff000000000000) >> 0x28 |
                 (uVar19 & 0xff0000000000) >> 0x18 | (uVar19 & 0xff00000000) >> 8 |
                 (uVar19 & 0xff000000) << 8 | (uVar19 & 0xff0000) << 0x18 |
                 (uVar19 & 0xff00) << 0x28 | uVar19 << 0x38;
      }
      puVar22 = (ulonglong *)((longlong)puVar22 + (local_510 >> 3));
      local_500 = local_500 | uVar19 >> (0x3fU - (char)local_510 & 0x3f);
      uVar32 = local_500 << 8;
      local_510 = local_510 + (local_510 >> 3) * -8 + 8;
      if (local_478[local_500 >> 0x38] == 0) {
        uVar31 = uVar31 - local_518;
        if ((uVar14 <= uVar31) && (1 < uVar31)) {
          *puVar28 = (uint)(byte)(local_500 >> 0x38) << 0x10 | uVar31;
          if (puVar2 != puVar33) {
            puVar7 = param_3->singles;
            while (puVar7 = puVar7 + 1, puVar7 != puVar33) {
              bVar12 = *puVar7;
              puVar6 = puVar7;
              while (puVar2 < puVar6) {
                if (puVar6[-1] <= bVar12) break;
                *puVar6 = puVar6[-1];
                puVar6 = puVar6 + -1;
              }
              *puVar6 = bVar12;
            }
          }
          small_insertion_sort<unsigned_int>(param_3->larger,puVar28 + 1);
          param_3->num_larger = (int)((longlong)(puVar28 + 1) + (-0x108 - (longlong)param_3) >> 2);
          param_3->num_singles = ((int)puVar33 - (int)param_3) + -8;
          goto LAB_14f3dce5f;
        }
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3dcea9;
        pcVar25 = "OODLE ERROR : last too small\n";
        iVar9 = 0x34b;
      }
      else {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3dcea9;
        pcVar25 = "OODLE ERROR : corruption : ! seen[mps]\n";
        iVar9 = 0x342;
      }
    }
  }
LAB_14f3dce9e:
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlz_tans.cpp",iVar9,pcVar25);
LAB_14f3dcea9:
  ooLogErrorPost();
  return false;
}

// newlz_tans_UnPackCounts_CountDelta @ 14f3dcee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
oo2::newlz_tans_UnPackCounts_CountDelta
          (int param_1,newlz_tans_UnpackedCounts *param_2,ulong64 *param_3,long64 *param_4,
          uchar **param_5,uchar **param_6)

{
  byte *pbVar1;
  ulong64 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  longlong lVar20;
  int iVar21;
  char *pcVar22;
  ulonglong uVar23;
  ushort uVar24;
  uchar *puVar25;
  undefined1 auStackY_538 [32];
  int local_508;
  int local_504;
  uint local_500;
  _rrVarBits_ local_4e0;
  ulonglong local_4c0;
  byte *local_4b8;
  longlong local_4b0;
  newlz_tans_UnpackedCounts *local_4a8;
  BlockBitReader local_4a0;
  longlong local_488;
  byte local_478 [8];
  undefined8 auStack_470 [65];
  ushort local_268 [272];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_538;
  local_4c0 = *param_3;
  *param_3 = local_4c0 * 8;
  *param_4 = *param_4 + 3;
  uVar2 = *param_3;
  local_4c0 = local_4c0 >> 0x3d;
  *param_3 = uVar2 << 8;
  uVar16 = (byte)(uVar2 >> 0x38) + 1;
  *param_4 = *param_4 + 8;
  if (1 < uVar16) {
    local_4a8 = param_2;
    uVar3 = newLZ_decode_alphabet_shape_num_EG(uVar16,param_3,param_4,param_5,param_6);
    uVar14 = (ulonglong)(uVar3 + uVar16);
    local_4a0.pos_in_byte = -((int)-*param_4 + 0x3f) & 7;
    local_4a0.ptr = *param_5 + -(-*param_4 + 0x46U >> 3);
    local_4a0.end = *param_6;
    uVar6 = newLZ_decode_unary_block(local_478,(ulonglong)(uVar3 + uVar16),&local_4a0);
    if (uVar6 == uVar14) {
      uVar8 = 0;
      pbVar1 = local_478 + uVar14;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      *(undefined8 *)((longlong)auStack_470 + uVar14) = 0;
      local_4e0.m_end = local_4a0.end;
      uVar6 = uVar8;
      if (local_4a0.end != local_4a0.ptr && -1 < (longlong)local_4a0.end - (longlong)local_4a0.ptr)
      {
        uVar6 = (ulonglong)*local_4a0.ptr;
      }
      puVar12 = (ulonglong *)(local_4a0.ptr + 1);
      lVar20 = (longlong)local_4a0.end - (longlong)puVar12;
      if (lVar20 < 8) {
        uVar14 = uVar8;
        if (0 < lVar20) {
          uVar14 = (ulonglong)(byte)*puVar12;
        }
        uVar9 = uVar8;
        if (lVar20 != 1 && -1 < lVar20 + -1) {
          uVar9 = (ulonglong)local_4a0.ptr[2];
        }
        uVar23 = uVar8;
        if (lVar20 != 2 && -1 < lVar20 + -2) {
          uVar23 = (ulonglong)local_4a0.ptr[3];
        }
        uVar7 = uVar8;
        if (lVar20 != 3 && -1 < lVar20 + -3) {
          uVar7 = (ulonglong)local_4a0.ptr[4];
        }
        lVar20 = (longlong)local_4a0.end - (longlong)(local_4a0.ptr + 5);
        uVar13 = uVar8;
        if (0 < lVar20) {
          uVar13 = (ulonglong)local_4a0.ptr[5];
        }
        uVar15 = uVar8;
        if (lVar20 != 1 && -1 < lVar20 + -1) {
          uVar15 = (ulonglong)local_4a0.ptr[6];
        }
        if (lVar20 != 2 && -1 < lVar20 + -2) {
          uVar8 = (ulonglong)local_4a0.ptr[7];
        }
        uVar14 = ((((((uVar14 << 8 | uVar9) << 8 | uVar23) << 8 | uVar7) << 8 | uVar13) << 8 |
                  uVar15) << 8 | uVar8) << 8;
      }
      else {
        uVar14 = *puVar12;
        uVar14 = (uVar14 & 0xff000000000000) >> 0x28 | (uVar14 & 0xff0000000000) >> 0x18 |
                 (uVar14 & 0xff00000000) >> 8 | (uVar14 & 0xff000000) << 8 |
                 (uVar14 & 0xff0000) << 0x18 | (uVar14 & 0xff00) << 0x28 | uVar14 << 0x38;
      }
      local_4e0.m_cur = local_4a0.ptr + 7;
      local_4e0.m_bits = (uVar14 >> 8 | uVar6 << 0x38) << ((byte)local_4a0.pos_in_byte & 0x3f);
      local_4e0.m_inv_bitlen = (ulonglong)local_4a0.pos_in_byte + 7;
      iVar4 = newLZ_decode_alphabet_shape_runlens
                        (local_268,uVar16,uVar3,local_478 + uVar16,&local_4e0);
      local_488 = (longlong)iVar4;
      if (-1 < iVar4) {
        *param_3 = local_4e0.m_bits;
        *param_4 = local_4e0.m_inv_bitlen;
        *param_5 = local_4e0.m_cur;
        *param_6 = local_4e0.m_end;
        lVar20 = *param_4;
        puVar12 = (ulonglong *)*param_5;
        lVar17 = lVar20 >> 3;
        if ((longlong)local_4e0.m_end - (longlong)puVar12 < 8) {
          uVar6 = rrVB_Get64BE_Masked((uchar *)puVar12,local_4e0.m_end);
        }
        else {
          uVar6 = *puVar12;
          uVar6 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                  (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                  (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 | (uVar6 & 0xff00) << 0x28
                  | uVar6 << 0x38;
        }
        local_508 = 6;
        *param_3 = *param_3 | uVar6 >> (0x3fU - (char)lVar20 & 0x3f);
        *param_5 = *param_5 + lVar17;
        *param_4 = *param_4 + lVar17 * -8;
        puVar25 = local_4a8->singles;
        iVar5 = 0;
        local_504 = 0;
        puVar19 = local_4a8->larger;
        local_4b8 = local_478;
        local_4b0 = 0;
        if (0 < iVar4) {
          do {
            uVar24 = local_268[local_4b0 * 2];
            iVar4 = (uint)uVar24 << 0x10;
            local_500 = (uint)local_268[local_4b0 * 2 + 1];
            do {
              lVar20 = *param_4;
              puVar12 = (ulonglong *)*param_5;
              lVar18 = lVar20 >> 3;
              lVar17 = (longlong)*param_6 - (longlong)puVar12;
              if (lVar17 < 8) {
                if (lVar17 < 1) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = (ulonglong)(byte)*puVar12;
                }
                if (lVar17 == 1 || lVar17 + -1 < 0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = (ulonglong)*(byte *)((longlong)puVar12 + 1);
                }
                if (lVar17 == 2 || lVar17 + -2 < 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = (ulonglong)*(byte *)((longlong)puVar12 + 2);
                }
                if (lVar17 == 3 || lVar17 + -3 < 0) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = (ulonglong)*(byte *)((longlong)puVar12 + 3);
                }
                lVar20 = (longlong)*param_6 - ((longlong)puVar12 + 4);
                if (lVar20 < 1) {
                  uVar23 = 0;
                }
                else {
                  uVar23 = (ulonglong)*(byte *)((longlong)puVar12 + 4);
                }
                if (lVar20 == 1 || lVar20 + -1 < 0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = (ulonglong)*(byte *)((longlong)puVar12 + 5);
                }
                if (lVar20 == 2 || lVar20 + -2 < 0) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = (ulonglong)*(byte *)((longlong)puVar12 + 6);
                }
                if (lVar20 == 3 || lVar20 + -3 < 0) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = (ulonglong)*(byte *)((longlong)puVar12 + 7);
                }
                lVar20 = *param_4;
                uVar15 = ((((((uVar6 << 8 | uVar14) << 8 | uVar8) << 8 | uVar9) << 8 | uVar23) << 8
                          | uVar7) << 8 | uVar13) << 8 | uVar15;
              }
              else {
                uVar6 = *puVar12;
                uVar15 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                         (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                         (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
                         (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
              }
              *param_3 = *param_3 | uVar15 >> (0x3fU - (char)lVar20 & 0x3f);
              *param_5 = *param_5 + lVar18;
              *param_4 = *param_4 + lVar18 * -8;
              iVar21 = local_508 >> 2;
              bVar10 = *local_4b8;
              local_4b8 = local_4b8 + 1;
              uVar16 = (uint)bVar10 + (int)local_4c0;
              if (0xf < uVar16) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto code_r0x00014f3dd480;
                pcVar22 = "OODLE ERROR : corruption : nextra <= 15\n";
                iVar4 = 0x491;
                goto LAB_14f3dd472;
              }
              uVar6 = *param_3;
              bVar10 = (byte)uVar16;
              *param_3 = uVar6 << (bVar10 & 0x3f);
              *param_4 = *param_4 + (ulonglong)uVar16;
              uVar16 = iVar21 * 2;
              uVar3 = ((int)((uVar6 >> 1) >> (0x3f - bVar10 & 0x3f)) + (1 << (bVar10 & 0x1f))) -
                      (1 << ((byte)local_4c0 & 0x1f));
              if ((int)uVar3 <= (int)uVar16) {
                uVar3 = (uVar3 >> 1 ^ -(uVar3 & 1)) + iVar21;
              }
              *puVar25 = (uchar)uVar24;
              uVar11 = uVar3;
              if ((int)uVar16 <= (int)uVar3) {
                uVar11 = uVar16;
              }
              iVar5 = uVar3 + 1;
              local_508 = local_508 + (uVar11 - iVar21);
              *puVar19 = iVar4 + iVar5;
              puVar25 = puVar25 + (iVar5 == 1);
              lVar20 = 0;
              if (1 < iVar5) {
                lVar20 = 4;
              }
              iVar5 = local_504 + iVar5;
              puVar19 = (uint *)((longlong)puVar19 + lVar20);
              uVar24 = uVar24 + 1;
              iVar4 = iVar4 + 0x10000;
              local_500 = local_500 - 1;
              local_504 = iVar5;
            } while (local_500 != 0);
            local_4b0 = local_4b0 + 1;
          } while (local_4b0 < local_488);
        }
        local_4a8->num_singles = ((int)puVar25 - (int)local_4a8) + -8;
        local_4a8->num_larger = (int)((longlong)puVar19 + (-0x108 - (longlong)local_4a8) >> 2);
        if (iVar5 == 1 << ((byte)param_1 & 0x1f)) {
          return true;
        }
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          pcVar22 = "OODLE ERROR : corruption : count_sum == L\n";
          iVar4 = 0x4b7;
LAB_14f3dd472:
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlz_tans.cpp",iVar4,pcVar22);
        }
code_r0x00014f3dd480:
        ooLogErrorPost();
      }
    }
  }
  return false;
}

// rrAlignUp64 @ 14f3dd4e0

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3dd500

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3dd520

ulong64 __cdecl oo2::rrAlignUpA(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrClz32 @ 14f3dd540

uint __cdecl oo2::rrClz32(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return 0x1f - iVar1;
}

// rrCtz32 @ 14f3dd560

uint __cdecl oo2::rrCtz32(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return uVar1;
}

// rrFoldDeltaClamped @ 14f3dd570

uint __cdecl oo2::rrFoldDeltaClamped(int param_1,int param_2)

{
  if (param_1 <= param_2 * 2) {
    return param_1 - param_2 >> 0x1f ^ (param_1 - param_2) * 2;
  }
  return param_1;
}

// rrFoldUpNegatives @ 14f3dd590

uint __cdecl oo2::rrFoldUpNegatives(int param_1)

{
  return param_1 >> 0x1f ^ param_1 * 2;
}

// rrGetBitLevel_V @ 14f3dd5a0

uint __cdecl oo2::rrGetBitLevel_V(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 != 0) {
    return iVar1 + 1;
  }
  return 0;
}

// rrGetBitLevel_V_NonZero @ 14f3dd5c0

uint __cdecl oo2::rrGetBitLevel_V_NonZero(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 + 1;
}

// rrIlog2ceil @ 14f3dd5d0

uint __cdecl oo2::rrIlog2ceil(uint param_1)

{
  int iVar1;
  
  if (param_1 < 2) {
    return 0;
  }
  iVar1 = 0x1f;
  if (param_1 - 1 != 0) {
    for (; param_1 - 1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 + 1;
}

// rrPtrDiff32 @ 14f3dd5f0

int __cdecl oo2::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rrPtrDiff @ 14f3dd600

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// rrUnfoldDeltaClamped @ 14f3dd610

int __cdecl oo2::rrUnfoldDeltaClamped(uint param_1,int param_2)

{
  if ((int)param_1 <= param_2 * 2) {
    param_1 = (param_1 >> 1 ^ -(param_1 & 1)) + param_2;
  }
  return param_1;
}

// rrUnfoldNegatives @ 14f3dd630

int __cdecl oo2::rrUnfoldNegatives(uint param_1)

{
  return -(param_1 & 1) ^ param_1 >> 1;
}

// rrVB_Get32BE_Masked @ 14f3dd660

uint __cdecl oo2::rrVB_Get32BE_Masked(uchar *param_1,uchar *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  uVar3 = 0;
  if (lVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*param_1;
  }
  if (lVar1 == 1 || lVar1 + -1 < 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)param_1[1];
  }
  if (lVar1 == 2 || lVar1 + -2 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)param_1[2];
  }
  if (lVar1 != 3 && -1 < lVar1 + -3) {
    uVar3 = (uint)param_1[3];
  }
  return ((uVar2 << 8 | uVar5) << 8 | uVar4) << 8 | uVar3;
}

// rrVB_Get64BE_Masked @ 14f3dd6e0

ulong64 __cdecl oo2::rrVB_Get64BE_Masked(uchar *param_1,uchar *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = 0;
  lVar6 = (longlong)param_2 - (longlong)param_1;
  uVar4 = uVar5;
  if (0 < lVar6) {
    uVar4 = (ulonglong)*param_1;
  }
  uVar2 = uVar5;
  if (lVar6 != 1 && -1 < lVar6 + -1) {
    uVar2 = (ulonglong)param_1[1];
  }
  uVar8 = uVar5;
  if (lVar6 != 2 && -1 < lVar6 + -2) {
    uVar8 = (ulonglong)param_1[2];
  }
  uVar1 = uVar5;
  if (lVar6 != 3 && -1 < lVar6 + -3) {
    uVar1 = (ulonglong)param_1[3];
  }
  lVar6 = (longlong)param_2 - (longlong)(param_1 + 4);
  uVar3 = uVar5;
  if (0 < lVar6) {
    uVar3 = (ulonglong)param_1[4];
  }
  uVar9 = uVar5;
  if (lVar6 != 1 && -1 < lVar6 + -1) {
    uVar9 = (ulonglong)param_1[5];
  }
  uVar7 = uVar5;
  if (lVar6 != 2 && -1 < lVar6 + -2) {
    uVar7 = (ulonglong)param_1[6];
  }
  if (lVar6 != 3 && -1 < lVar6 + -3) {
    uVar5 = (ulonglong)param_1[7];
  }
  return ((((((uVar4 << 8 | uVar2) << 8 | uVar8) << 8 | uVar1) << 8 | uVar3) << 8 | uVar9) << 8 |
         uVar7) << 8 | uVar5;
}

// rrVarBits_CountBits_EliasGamma @ 14f3dd7c0

int __cdecl oo2::rrVarBits_CountBits_EliasGamma(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 + 1 != 0) {
    for (; param_1 + 1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 * 2 + 1;
}

// rrVarBits_CountBits_ExpGolomb @ 14f3dd7e0

int __cdecl oo2::rrVarBits_CountBits_ExpGolomb(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_1 >> ((byte)param_2 & 0x1f)) + 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 * 2 + 1 + param_2;
}

