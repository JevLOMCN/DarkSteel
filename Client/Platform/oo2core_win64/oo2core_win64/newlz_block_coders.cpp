// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 21

// RR_GET32_NATIVE @ 14f3d8fa0

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14f3d8fb0

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT32_NATIVE @ 14f3d8fc0

void __cdecl oo2::RR_PUT32_NATIVE(void *param_1,uint param_2)

{
  *(uint *)param_1 = param_2;
  return;
}

// RR_PUT64_NATIVE @ 14f3d8fd0

void __cdecl oo2::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// decode_alphabet_shape_nonzerorun @ 14f3d8fe0

uint __cdecl
oo2::decode_alphabet_shape_nonzerorun
          (uint param_1,ulong64 *param_2,long64 *param_3,uchar **param_4,uchar **param_5)

{
  ulonglong uVar1;
  byte bVar2;
  
  if (8 < param_1) {
    return 0x1ff;
  }
  uVar1 = *param_2;
  bVar2 = (byte)param_1;
  *param_2 = uVar1 << (bVar2 & 0x3f);
  *param_3 = *param_3 + (ulonglong)param_1;
  return (int)((uVar1 >> 1) >> (0x3f - bVar2 & 0x3f)) + (1 << (bVar2 & 0x1f));
}

// decode_alphabet_shape_zerorun @ 14f3d9030

uint __cdecl
oo2::decode_alphabet_shape_zerorun
          (uint param_1,ulong64 *param_2,long64 *param_3,uchar **param_4,uchar **param_5)

{
  ulonglong uVar1;
  byte bVar2;
  
  if (7 < param_1) {
    return 0x1ff;
  }
  uVar1 = *param_2;
  bVar2 = (byte)(param_1 + 1);
  *param_2 = uVar1 << (bVar2 & 0x3f);
  *param_3 = *param_3 + (ulonglong)(param_1 + 1);
  return (1 << (bVar2 & 0x1f)) + -1 + (int)(uVar1 >> (0x40 - bVar2 & 0x3f));
}

// newLZ_decode_alphabet_shape_runlens @ 14f3d9080

int __cdecl
oo2::newLZ_decode_alphabet_shape_runlens
          (ushort *param_1,uint param_2,uint param_3,uchar *param_4,_rrVarBits_ *param_5)

{
  byte bVar1;
  ushort *puVar2;
  bool bVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  char cVar21;
  longlong lVar22;
  uint uVar23;
  BlockBitReader local_58;
  
  uVar12 = 0;
  uVar23 = param_3 >> 1;
  uVar11 = 0;
  uVar17 = param_5->m_bits;
  lVar22 = param_5->m_inv_bitlen;
  puVar16 = (ulonglong *)param_5->m_cur;
  local_58.end = param_5->m_end;
  uVar14 = uVar12;
  if ((param_3 & 1) != 0) {
    lVar8 = (longlong)local_58.end - (longlong)puVar16;
    if (lVar8 < 8) {
      if (0 < lVar8) {
        uVar14 = (ulonglong)(byte)*puVar16;
      }
      uVar18 = uVar12;
      if (lVar8 != 1 && -1 < lVar8 + -1) {
        uVar18 = (ulonglong)*(byte *)((longlong)puVar16 + 1);
      }
      uVar15 = uVar12;
      if (lVar8 != 2 && -1 < lVar8 + -2) {
        uVar15 = (ulonglong)*(byte *)((longlong)puVar16 + 2);
      }
      uVar5 = uVar12;
      if (lVar8 != 3 && -1 < lVar8 + -3) {
        uVar5 = (ulonglong)*(byte *)((longlong)puVar16 + 3);
      }
      lVar8 = (longlong)local_58.end - ((longlong)puVar16 + 4);
      uVar6 = uVar12;
      if (0 < lVar8) {
        uVar6 = (ulonglong)*(byte *)((longlong)puVar16 + 4);
      }
      uVar7 = uVar12;
      if (lVar8 != 1 && -1 < lVar8 + -1) {
        uVar7 = (ulonglong)*(byte *)((longlong)puVar16 + 5);
      }
      uVar13 = uVar12;
      if (lVar8 != 2 && -1 < lVar8 + -2) {
        uVar13 = (ulonglong)*(byte *)((longlong)puVar16 + 6);
      }
      uVar9 = uVar12;
      if (lVar8 != 3 && -1 < lVar8 + -3) {
        uVar9 = (ulonglong)*(byte *)((longlong)puVar16 + 7);
      }
      uVar9 = ((((((uVar14 << 8 | uVar18) << 8 | uVar15) << 8 | uVar5) << 8 | uVar6) << 8 | uVar7)
               << 8 | uVar13) << 8 | uVar9;
    }
    else {
      uVar14 = *puVar16;
      uVar9 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
              (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
              (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 | (uVar14 & 0xff00) << 0x28 |
              uVar14 << 0x38;
    }
    cVar21 = (char)lVar22;
    puVar16 = (ulonglong *)((longlong)puVar16 + (lVar22 >> 3));
    lVar22 = lVar22 + (lVar22 >> 3) * -8;
    uVar17 = uVar17 | uVar9 >> (0x3fU - cVar21 & 0x3f);
    if (*param_4 < 8) {
      uVar20 = *param_4 + 1;
      bVar1 = (byte)uVar20;
      uVar14 = uVar17 >> (0x40 - bVar1 & 0x3f);
      uVar17 = uVar17 << (bVar1 & 0x3f);
      lVar22 = lVar22 + (ulonglong)uVar20;
      uVar20 = (1 << (bVar1 & 0x1f)) + -1 + (int)uVar14;
    }
    else {
      uVar20 = 0x1ff;
    }
    param_4 = param_4 + 1;
    uVar14 = (ulonglong)(uVar20 & 0xffff);
  }
  uVar20 = (uint)uVar14;
  if ((g_has_newlz_decode_alphabet_shape_run_pairs_ssse3) &&
     (((byte)g_rrCPUx86_feature_flags & 4) != 0)) {
    local_58.pos_in_byte = -((int)-lVar22 + 0x3f) & 7;
    local_58.ptr = (uchar *)((longlong)puVar16 - (-lVar22 + 0x46U >> 3));
    bVar3 = newLZ_decode_alphabet_shape_run_pairs_ssse3(param_1 + 1,&local_58,param_4,uVar23);
    if (!bVar3) {
      return -1;
    }
    uVar17 = uVar12;
    if (local_58.end != local_58.ptr && -1 < (longlong)local_58.end - (longlong)local_58.ptr) {
      uVar17 = (ulonglong)*local_58.ptr;
    }
    puVar16 = (ulonglong *)(local_58.ptr + 1);
    lVar22 = (longlong)local_58.end - (longlong)puVar16;
    if (lVar22 < 8) {
      uVar18 = uVar12;
      if (0 < lVar22) {
        uVar18 = (ulonglong)(byte)*puVar16;
      }
      uVar15 = uVar12;
      if (lVar22 != 1 && -1 < lVar22 + -1) {
        uVar15 = (ulonglong)local_58.ptr[2];
      }
      uVar5 = uVar12;
      if (lVar22 != 2 && -1 < lVar22 + -2) {
        uVar5 = (ulonglong)local_58.ptr[3];
      }
      uVar6 = uVar12;
      if (lVar22 != 3 && -1 < lVar22 + -3) {
        uVar6 = (ulonglong)local_58.ptr[4];
      }
      lVar22 = (longlong)local_58.end - (longlong)(local_58.ptr + 5);
      uVar7 = uVar12;
      if (0 < lVar22) {
        uVar7 = (ulonglong)local_58.ptr[5];
      }
      uVar13 = uVar12;
      if (lVar22 != 1 && -1 < lVar22 + -1) {
        uVar13 = (ulonglong)local_58.ptr[6];
      }
      uVar9 = uVar12;
      if (lVar22 != 2 && -1 < lVar22 + -2) {
        uVar9 = (ulonglong)local_58.ptr[7];
      }
      uVar18 = ((((((uVar18 << 8 | uVar15) << 8 | uVar5) << 8 | uVar6) << 8 | uVar7) << 8 | uVar13)
                << 8 | uVar9) << 8;
    }
    else {
      uVar18 = *puVar16;
      uVar18 = (uVar18 & 0xff000000000000) >> 0x28 | (uVar18 & 0xff0000000000) >> 0x18 |
               (uVar18 & 0xff00000000) >> 8 | (uVar18 & 0xff000000) << 8 |
               (uVar18 & 0xff0000) << 0x18 | (uVar18 & 0xff00) << 0x28 | uVar18 << 0x38;
    }
    puVar16 = (ulonglong *)(local_58.ptr + 7);
    uVar17 = (uVar18 >> 8 | uVar17 << 0x38) << ((byte)local_58.pos_in_byte & 0x3f);
    lVar22 = (ulonglong)local_58.pos_in_byte + 7;
LAB_14f3d939d:
    if (param_3 >> 1 == 0) goto LAB_14f3d93cd;
  }
  else {
    uVar18 = (ulonglong)uVar23;
    puVar2 = param_1;
    if (param_3 >> 1 == 0) goto LAB_14f3d939d;
    do {
      lVar8 = (longlong)local_58.end - (longlong)puVar16;
      if (lVar8 < 8) {
        uVar15 = uVar12;
        if (0 < lVar8) {
          uVar15 = (ulonglong)(byte)*puVar16;
        }
        uVar5 = uVar12;
        if (lVar8 != 1 && -1 < lVar8 + -1) {
          uVar5 = (ulonglong)*(byte *)((longlong)puVar16 + 1);
        }
        uVar6 = uVar12;
        if (lVar8 != 2 && -1 < lVar8 + -2) {
          uVar6 = (ulonglong)*(byte *)((longlong)puVar16 + 2);
        }
        uVar7 = uVar12;
        if (lVar8 != 3 && -1 < lVar8 + -3) {
          uVar7 = (ulonglong)*(byte *)((longlong)puVar16 + 3);
        }
        lVar8 = (longlong)local_58.end - ((longlong)puVar16 + 4);
        uVar13 = uVar12;
        if (0 < lVar8) {
          uVar13 = (ulonglong)*(byte *)((longlong)puVar16 + 4);
        }
        uVar9 = uVar12;
        if (lVar8 != 1 && -1 < lVar8 + -1) {
          uVar9 = (ulonglong)*(byte *)((longlong)puVar16 + 5);
        }
        uVar19 = uVar12;
        if (lVar8 != 2 && -1 < lVar8 + -2) {
          uVar19 = (ulonglong)*(byte *)((longlong)puVar16 + 6);
        }
        uVar10 = uVar12;
        if (lVar8 != 3 && -1 < lVar8 + -3) {
          uVar10 = (ulonglong)*(byte *)((longlong)puVar16 + 7);
        }
        uVar10 = ((((((uVar15 << 8 | uVar5) << 8 | uVar6) << 8 | uVar7) << 8 | uVar13) << 8 | uVar9)
                  << 8 | uVar19) << 8 | uVar10;
      }
      else {
        uVar15 = *puVar16;
        uVar10 = uVar15 >> 0x38 | (uVar15 & 0xff000000000000) >> 0x28 |
                 (uVar15 & 0xff0000000000) >> 0x18 | (uVar15 & 0xff00000000) >> 8 |
                 (uVar15 & 0xff000000) << 8 | (uVar15 & 0xff0000) << 0x18 |
                 (uVar15 & 0xff00) << 0x28 | uVar15 << 0x38;
      }
      bVar1 = *param_4;
      puVar16 = (ulonglong *)((longlong)puVar16 + (lVar22 >> 3));
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + (lVar22 >> 3) * -8;
      uVar17 = uVar17 | uVar10 >> (0x3fU - cVar21 & 0x3f);
      if (bVar1 < 9) {
        uVar15 = uVar17 >> 1;
        lVar22 = lVar22 + (ulonglong)bVar1;
        uVar17 = uVar17 << (bVar1 & 0x3f);
        uVar4 = (short)(1 << (bVar1 & 0x1f)) + (short)(uVar15 >> (0x3f - bVar1 & 0x3f));
      }
      else {
        uVar4 = 0x1ff;
      }
      puVar2[1] = uVar4;
      if (param_4[1] < 8) {
        uVar11 = param_4[1] + 1;
        bVar1 = (byte)uVar11;
        uVar15 = uVar17 >> (0x40 - bVar1 & 0x3f);
        uVar17 = uVar17 << (bVar1 & 0x3f);
        lVar22 = lVar22 + (ulonglong)uVar11;
        uVar4 = (short)(1 << (bVar1 & 0x1f)) + -1 + (short)uVar15;
      }
      else {
        uVar4 = 0x1ff;
      }
      puVar2[2] = uVar4;
      param_4 = param_4 + 2;
      uVar18 = uVar18 - 1;
      puVar2 = puVar2 + 2;
    } while (uVar18 != 0);
  }
  uVar18 = (ulonglong)uVar23;
  puVar2 = param_1;
  do {
    uVar11 = (int)uVar12 + (uint)puVar2[1];
    uVar12 = (ulonglong)uVar11;
    *puVar2 = (ushort)uVar14;
    uVar20 = (int)uVar14 + (uint)puVar2[2] + (uint)puVar2[1];
    uVar14 = (ulonglong)uVar20;
    uVar18 = uVar18 - 1;
    puVar2 = puVar2 + 2;
  } while (uVar18 != 0);
LAB_14f3d93cd:
  if (((uVar20 < 0x100) && (uVar11 < param_2)) && ((param_2 - uVar11) + uVar20 < 0x101)) {
    param_1[(int)(uVar23 * 2)] = (ushort)uVar20;
    param_1[(longlong)(int)(uVar23 * 2) + 1] = (ushort)(param_2 - uVar11);
    param_5->m_bits = uVar17;
    param_5->m_inv_bitlen = lVar22;
    param_5->m_cur = (uchar *)puVar16;
    param_5->m_end = local_58.end;
    return uVar23 + 1;
  }
  return -1;
}

// newLZ_decode_rice_U8_bottom_block @ 14f3d9620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::newLZ_decode_rice_U8_bottom_block
          (uchar *param_1,long64 param_2,int param_3,BlockBitReader *param_4)

{
  longlong *plVar1;
  uint uVar2;
  uint *puVar3;
  code *pcVar4;
  char cVar5;
  long64 lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  size_t sVar11;
  uint *_Src;
  size_t _Size;
  longlong lVar12;
  undefined1 auStack_88 [32];
  long64 local_68;
  longlong local_58;
  uint local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((uint)param_3 < 4) {
    if (param_3 == 0) {
      return param_2;
    }
    uVar2 = param_4->pos_in_byte;
    puVar3 = (uint *)param_4->ptr;
    lVar12 = param_3 * param_2 + (ulonglong)uVar2;
    sVar11 = lVar12 + 7 >> 3;
    if ((longlong)sVar11 <= (longlong)param_4->end - (longlong)puVar3) {
      local_58 = *(longlong *)(param_1 + param_2);
      _Size = 4;
      if ((longlong)sVar11 < 4) {
        _Size = sVar11;
      }
      local_50[0] = 0;
      local_50[1] = 0;
      plVar1 = (longlong *)(param_1 + param_2);
      _Src = (uint *)((sVar11 - _Size) + (longlong)puVar3);
      local_68 = param_2;
      if (0 < (longlong)_Size) {
        memcpy(local_50,_Src,_Size);
      }
      cVar5 = (char)uVar2;
      if (param_3 == 1) {
        puVar10 = puVar3;
        do {
          if (_Src <= puVar10) {
            lVar7 = (longlong)local_50 - (longlong)_Src;
            _Src = local_50 + 1;
            puVar10 = (uint *)((longlong)puVar10 + lVar7);
          }
          uVar2 = *puVar10;
          puVar10 = (uint *)((longlong)puVar10 + 1);
          uVar8 = (ulonglong)
                  ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
                  >> (0x18U - cVar5 & 0x3f));
          uVar9 = (uVar8 << 0x1c ^ uVar8) & 0xf0000000f;
          uVar8 = uVar9 ^ uVar9 << 0xe;
          uVar8 = uVar8 << 7 ^ uVar8;
          *(ulonglong *)param_1 =
               (uVar9 >> 0x23 | (uVar8 & 0x1000000000000) >> 0x28 | (uVar8 & 0x10000000000) >> 0x18
                | (uVar8 & 0x100000000) >> 8 | (uVar8 & 0x1000000) << 8 | (uVar8 & 0x10000) << 0x18
                | (uVar8 & 0x100) << 0x28 | (uVar8 & 1) << 0x38) + *(longlong *)param_1 * 2;
          param_1 = (uchar *)((longlong)param_1 + 8);
        } while (param_1 < plVar1);
      }
      else if (param_3 == 2) {
        puVar10 = puVar3;
        do {
          if (_Src <= puVar10) {
            lVar7 = (longlong)local_50 - (longlong)_Src;
            _Src = local_50 + 1;
            puVar10 = (uint *)((longlong)puVar10 + lVar7);
          }
          uVar2 = *puVar10;
          puVar10 = (uint *)((longlong)puVar10 + 2);
          uVar8 = (ulonglong)
                  ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
                  >> (0x10U - cVar5 & 0x3f));
          uVar9 = (uVar8 << 0x18 ^ uVar8) & 0xff000000ff;
          uVar8 = uVar9 ^ uVar9 << 0xc;
          uVar8 = uVar8 << 6 ^ uVar8;
          *(ulonglong *)param_1 =
               (uVar9 >> 0x26 | (uVar8 & 0x3000000000000) >> 0x28 | (uVar8 & 0x30000000000) >> 0x18
                | (uVar8 & 0x300000000) >> 8 | (uVar8 & 0x3000000) << 8 | (uVar8 & 0x30000) << 0x18
                | (uVar8 & 0x300) << 0x28 | (uVar8 & 3) << 0x38) + *(longlong *)param_1 * 4;
          param_1 = (uchar *)((longlong)param_1 + 8);
        } while (param_1 < plVar1);
      }
      else {
        if (param_3 != 3) {
          pcVar4 = (code *)swi(3);
          lVar6 = (*pcVar4)();
          return lVar6;
        }
        puVar10 = puVar3;
        do {
          if (_Src <= puVar10) {
            lVar7 = (longlong)local_50 - (longlong)_Src;
            _Src = local_50 + 1;
            puVar10 = (uint *)((longlong)puVar10 + lVar7);
          }
          uVar2 = *puVar10;
          puVar10 = (uint *)((longlong)puVar10 + 3);
          uVar8 = (ulonglong)
                  ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
                  >> (8U - cVar5 & 0x3f));
          uVar8 = (uVar8 << 0x14 ^ uVar8) & 0xfff00000fff;
          uVar9 = (uVar8 << 10 ^ uVar8) & 0x3f003f003f003f;
          uVar9 = uVar9 << 5 ^ uVar9;
          *(ulonglong *)param_1 =
               (uVar8 >> 0x29 | (uVar9 & 0x7000000000000) >> 0x28 | (uVar9 & 0x70000000000) >> 0x18
                | (uVar9 & 0x700000000) >> 8 | (uVar9 & 0x7000000) << 8 | (uVar9 & 0x70000) << 0x18
                | (uVar9 & 0x700) << 0x28 | (uVar9 & 7) << 0x38) + *(longlong *)param_1 * 8;
          param_1 = (uchar *)((longlong)param_1 + 8);
        } while (param_1 < plVar1);
      }
      *plVar1 = local_58;
      param_4->ptr = (uchar *)((lVar12 >> 3) + (longlong)puVar3);
      param_4->pos_in_byte = (uint)lVar12 & 7;
      return local_68;
    }
  }
  return -1;
}

// newLZ_decode_unary_block @ 14f3d9900

long64 __cdecl oo2::newLZ_decode_unary_block(uchar *param_1,long64 param_2,BlockBitReader *param_3)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  longlong lVar9;
  uint uVar10;
  
  if (param_2 < 1) {
    return param_2;
  }
  pbVar3 = param_3->ptr;
  piVar1 = (int *)(param_1 + param_2);
  pbVar4 = param_3->end;
  if (pbVar3 < pbVar4) {
    uVar7 = -param_3->pos_in_byte;
    bVar6 = (byte)(0xff >> ((byte)param_3->pos_in_byte & 0x1f)) & *pbVar3;
    uVar10 = 0;
    while( true ) {
      pbVar8 = pbVar3 + 1;
      if (bVar6 == 0) {
        uVar7 = uVar7 + 8;
      }
      else {
        uVar2 = unary_tab[bVar6];
        *(uint *)param_1 = (uVar2 & 0xf0f0f0f) + uVar7;
        *(uint *)((longlong)param_1 + 4) = uVar2 >> 4 & 0xf0f0f0f;
        param_1 = (uchar *)((longlong)param_1 + (ulonglong)""[bVar6]);
        if (piVar1 <= param_1) {
          if (piVar1 < param_1) {
            lVar9 = (longlong)param_1 - (longlong)piVar1;
            do {
              bVar6 = bVar6 & bVar6 - 1;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          if ((bVar6 & 1) == 0) {
            iVar5 = 0;
            if (bVar6 != 0) {
              for (; (bVar6 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
              }
            }
            uVar10 = 8 - iVar5;
            pbVar8 = pbVar3;
          }
          param_3->ptr = pbVar8;
          param_3->pos_in_byte = uVar10;
          return param_2;
        }
        uVar7 = uVar2 >> 0x1c;
      }
      if (pbVar4 <= pbVar8) break;
      bVar6 = *pbVar8;
      pbVar3 = pbVar8;
    }
  }
  return -1;
}

// newLZ_encode_alphabet_shape_num_EG @ 14f3d9a40

void __cdecl oo2::newLZ_encode_alphabet_shape_num_EG(_rrVarBits_ *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_3 != 0x100) {
    if (0x101 - param_3 <= param_3) {
      param_3 = 0x101 - param_3;
    }
    uVar3 = param_3 * 2 - 1;
    uVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    uVar3 = uVar1 + 1;
    iVar2 = (1 << ((byte)uVar3 & 0x1f)) + param_3 * -2;
    if (param_2 < iVar2) {
      uVar5 = param_1->m_bits << ((byte)uVar1 & 0x3f) | (longlong)param_2;
      uVar3 = uVar1;
    }
    else {
      uVar5 = param_1->m_bits << ((byte)uVar3 & 0x3f) | (longlong)(iVar2 + param_2);
    }
    lVar7 = param_1->m_inv_bitlen - (ulonglong)uVar3;
    param_1->m_bits = uVar5;
    lVar6 = 0x3f - lVar7 >> 3;
    uVar4 = param_1->m_bits << ((char)lVar7 + 1U & 0x3f);
    param_1->m_inv_bitlen = lVar7;
    *(ulonglong *)param_1->m_cur =
         uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
         (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
         (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
    param_1->m_cur = param_1->m_cur + lVar6;
    param_1->m_inv_bitlen = param_1->m_inv_bitlen + lVar6 * 8;
  }
  return;
}

// newLZ_encode_alphabet_shape_runlens_split @ 14f3d9b00

int __cdecl
oo2::newLZ_encode_alphabet_shape_runlens_split
          (uchar *param_1,uchar *param_2,uchar *param_3,int param_4,int *param_5,int param_6)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  
  if (0xff < param_4) {
    return 0;
  }
  uVar3 = (uint)(*param_5 != 0);
  iVar8 = -uVar3;
  iVar9 = uVar3 + ((param_6 + -3) / 2) * 2;
  if (0 < iVar9) {
    pbVar7 = param_2;
    do {
      iVar8 = iVar8 + 1;
      pbVar1 = pbVar7 + 1;
      bVar5 = ~(byte)iVar8 & 1;
      uVar6 = (1 << bVar5) +
              param_5[(longlong)(pbVar7 + (1 - (ulonglong)uVar3) + -(longlong)param_2)] + -1;
      uVar4 = uVar6 >> bVar5;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      pbVar1[(longlong)(param_1 + (-1 - (longlong)param_2))] = (byte)iVar2;
      bVar5 = bVar5 + (byte)iVar2;
      *pbVar7 = ('\x01' << (bVar5 & 0x1f)) - 1U & (byte)uVar6;
      pbVar1[(longlong)(param_3 + (-1 - (longlong)param_2))] = bVar5;
      pbVar7 = pbVar1;
    } while (-(longlong)param_2 + (longlong)pbVar1 < (longlong)iVar9);
  }
  return iVar9;
}

// newLZ_encode_rice_U8_split @ 14f3d9c10

void __cdecl
oo2::newLZ_encode_rice_U8_split
          (uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  
  if (0 < param_4) {
    pbVar2 = param_1;
    do {
      bVar1 = pbVar2[(longlong)param_3 - (longlong)param_1];
      *pbVar2 = bVar1 >> ((byte)param_5 & 0x1f);
      (pbVar2 + 1)[(longlong)(param_2 + (-1 - (longlong)param_1))] =
           (char)(1 << ((byte)param_5 & 0x1f)) - 1U & bVar1;
      param_4 = param_4 + -1;
      pbVar2 = pbVar2 + 1;
    } while (param_4 != 0);
  }
  return;
}

// newLZ_encode_unary_block @ 14f3d9c80

void __cdecl oo2::newLZ_encode_unary_block(_rrVarBits_ *param_1,uchar *param_2,long64 param_3)

{
  byte bVar1;
  uchar *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulong64 uVar10;
  
  lVar7 = param_1->m_inv_bitlen;
  uVar10 = param_1->m_bits;
  puVar5 = (ulonglong *)param_1->m_cur;
  puVar2 = param_1->m_end;
  lVar9 = 0x3f - lVar7 >> 3;
  lVar6 = 0;
  uVar3 = uVar10 << ((char)lVar7 + 1U & 0x3f);
  *puVar5 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
            (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
            (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  puVar5 = (ulonglong *)((longlong)puVar5 + lVar9);
  lVar7 = lVar7 + lVar9 * 8;
  if (0 < param_3) {
    do {
      bVar1 = param_2[lVar6];
      uVar8 = (uint)bVar1;
      if (0x17 < bVar1) {
        uVar3 = (ulonglong)(uint)bVar1 / 0x18;
        do {
          uVar10 = uVar10 << 0x18;
          uVar4 = uVar10 << ((char)lVar7 - 0x17U & 0x3f);
          lVar9 = 0x57 - lVar7 >> 3;
          uVar8 = uVar8 - 0x18;
          *puVar5 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                    (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                    (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                    (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
          puVar5 = (ulonglong *)((longlong)puVar5 + lVar9);
          lVar7 = lVar7 + lVar9 * 8 + -0x18;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      lVar7 = lVar7 - (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 << ((byte)(uVar8 + 1) & 0x3f) | 1;
      lVar9 = 0x3f - lVar7 >> 3;
      lVar6 = lVar6 + 1;
      uVar3 = uVar10 << ((char)lVar7 + 1U & 0x3f);
      *puVar5 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 | (uVar3 & 0xff00) << 0x28 |
                uVar3 << 0x38;
      lVar7 = lVar7 + lVar9 * 8;
      puVar5 = (ulonglong *)((longlong)puVar5 + lVar9);
    } while (lVar6 < param_3);
  }
  param_1->m_cur = (uchar *)puVar5;
  param_1->m_bits = uVar10;
  param_1->m_inv_bitlen = lVar7;
  param_1->m_end = puVar2;
  return;
}

// newLZ_encode_uniform_U8_block @ 14f3d9da0

void __cdecl
oo2::newLZ_encode_uniform_U8_block(_rrVarBits_ *param_1,uchar *param_2,long64 param_3,int param_4)

{
  uchar *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = param_1->m_inv_bitlen;
    uVar3 = param_1->m_bits;
    lVar6 = 0x3f - lVar7 >> 3;
    puVar5 = (ulonglong *)param_1->m_cur;
    puVar1 = param_1->m_end;
    uVar2 = uVar3 << ((char)lVar7 + 1U & 0x3f);
    *puVar5 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
              | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18
              | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    puVar5 = (ulonglong *)((longlong)puVar5 + lVar6);
    lVar7 = lVar7 + lVar6 * 8;
    lVar6 = 0;
    if (0 < param_3) {
      do {
        lVar7 = lVar7 - param_4;
        uVar3 = (ulonglong)param_2[lVar6] | uVar3 << ((byte)param_4 & 0x3f);
        lVar4 = 0x3f - lVar7 >> 3;
        uVar2 = uVar3 << ((char)lVar7 + 1U & 0x3f);
        lVar6 = lVar6 + 1;
        *puVar5 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                  (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                  (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28
                  | uVar2 << 0x38;
        lVar7 = lVar7 + lVar4 * 8;
        puVar5 = (ulonglong *)((longlong)puVar5 + lVar4);
      } while (lVar6 < param_3);
    }
    param_1->m_bits = uVar3;
    param_1->m_cur = (uchar *)puVar5;
    param_1->m_end = puVar1;
    param_1->m_inv_bitlen = lVar7;
  }
  return;
}

// newLZ_encode_variable_U8_block @ 14f3d9e80

void __cdecl
oo2::newLZ_encode_variable_U8_block
          (_rrVarBits_ *param_1,uchar *param_2,uchar *param_3,long64 param_4)

{
  byte *pbVar1;
  byte bVar2;
  uchar *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulong64 uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = param_1->m_inv_bitlen;
  uVar6 = param_1->m_bits;
  puVar7 = (ulonglong *)param_1->m_cur;
  puVar3 = param_1->m_end;
  lVar9 = 0x3f - lVar8 >> 3;
  uVar4 = uVar6 << ((char)lVar8 + 1U & 0x3f);
  *puVar7 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
            (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
            (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
  puVar7 = (ulonglong *)((longlong)puVar7 + lVar9);
  lVar8 = lVar8 + lVar9 * 8;
  if (0 < param_4) {
    lVar9 = (longlong)param_3 - (longlong)param_2;
    do {
      pbVar1 = param_2 + lVar9;
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      lVar8 = lVar8 - (ulonglong)*pbVar1;
      uVar6 = uVar6 << (*pbVar1 & 0x3f) | (ulonglong)bVar2;
      lVar5 = 0x3f - lVar8 >> 3;
      uVar4 = uVar6 << ((char)lVar8 + 1U & 0x3f);
      *puVar7 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 |
                uVar4 << 0x38;
      lVar8 = lVar8 + lVar5 * 8;
      puVar7 = (ulonglong *)((longlong)puVar7 + lVar5);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  param_1->m_bits = uVar6;
  param_1->m_cur = (uchar *)puVar7;
  param_1->m_inv_bitlen = lVar8;
  param_1->m_end = puVar3;
  return;
}

// rrCPUx86_feature_present @ 14f3d9f50

int __cdecl oo2::rrCPUx86_feature_present(uint param_1)

{
  return g_rrCPUx86_feature_flags & param_1;
}

// rrClz32 @ 14f3d9f60

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

// rrCtz32 @ 14f3d9f80

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

// rrPtrDiff @ 14f3d9f90

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// rrVB_Get32BE_Masked @ 14f3d9fa0

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

// rrVB_Get64BE_Masked @ 14f3da020

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

