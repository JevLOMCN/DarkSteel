// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2net_win64
// Functions: 53

// ByteCopy<int,int> @ 14ff512a0

void __cdecl oo2net::ByteCopy<int,int>(int *param_1,int *param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteCopy<unsigned_int,unsigned_int> @ 14ff512b0

void __cdecl oo2net::ByteCopy<unsigned_int,unsigned_int>(uint *param_1,uint *param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteCopy<oo2net::Bytes<4>,oo2net::Bytes<4>_> @ 14ff512c0

void __cdecl
oo2net::ByteCopy<oo2net::Bytes<4>,oo2net::Bytes<4>_>(Bytes<4> *param_1,Bytes<4> *param_2)

{
  *(undefined4 *)param_1->bytes = *(undefined4 *)param_2->bytes;
  return;
}

// ByteSwap<int> @ 14ff512d0

void __cdecl oo2net::ByteSwap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// ByteSwap<unsigned_int> @ 14ff512f0

void __cdecl oo2net::ByteSwap<unsigned_int>(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// check_value_cast<unsigned_char,unsigned_int> @ 14ff51310

uchar __cdecl oo2net::check_value_cast<unsigned_char,unsigned_int>(uint *param_1)

{
  return (uchar)*param_1;
}

// check_value_cast<unsigned_char,__int64> @ 14ff51320

uchar __cdecl oo2net::check_value_cast<unsigned_char,__int64>(long64 *param_1)

{
  return (uchar)*param_1;
}

// check_value_cast<unsigned_short,unsigned_int> @ 14ff51330

ushort __cdecl oo2net::check_value_cast<unsigned_short,unsigned_int>(uint *param_1)

{
  return (ushort)*param_1;
}

// check_value_cast<unsigned_short,__int64> @ 14ff51340

ushort __cdecl oo2net::check_value_cast<unsigned_short,__int64>(long64 *param_1)

{
  return (ushort)*param_1;
}

// rrAlignUpPointer<unsigned_char> @ 14ff51350

uchar * __cdecl oo2net::rrAlignUpPointer<unsigned_char>(uchar *param_1,long64 param_2)

{
  return (uchar *)((ulonglong)(param_1 + param_2 + -1) & ~(param_2 - 1U));
}

// swap<int> @ 14ff51370

void __cdecl oo2net::swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// swap<unsigned_int> @ 14ff51390

void __cdecl oo2net::swap<unsigned_int>(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// operator() @ 14ff513b0

void __thiscall
oo2net::swap_functor<int>::operator()(swap_functor<int> *this,int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// operator() @ 14ff513d0

void __thiscall
oo2net::swap_functor<unsigned_int>::operator()
          (swap_functor<unsigned_int> *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// RR_GET64_NATIVE @ 14ff513f0

ulong64 __cdecl oo2net::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT64_NATIVE @ 14ff51400

void __cdecl oo2net::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// U8_void @ 14ff51410

uchar * __cdecl oo2net::U8_void(void *param_1)

{
  return param_1;
}

// rrAlignUp64 @ 14ff51420

ulong64 __cdecl oo2net::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14ff51440

long64 __cdecl oo2net::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14ff51460

ulong64 __cdecl oo2net::rrAlignUpA(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrClz32 @ 14ff51480

uint __cdecl oo2net::rrClz32(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return 0x1f - iVar1;
}

// rrClz64 @ 14ff514a0

uint __cdecl oo2net::rrClz64(ulong64 param_1)

{
  longlong lVar1;
  
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return 0x3f - (int)lVar1;
}

// rrFoldUpNegatives @ 14ff514c0

uint __cdecl oo2net::rrFoldUpNegatives(int param_1)

{
  return param_1 >> 0x1f ^ param_1 * 2;
}

// rrGetBitLevel_V @ 14ff514d0

uint __cdecl oo2net::rrGetBitLevel_V(uint param_1)

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

// rrGetBitLevel_V_NonZero @ 14ff514f0

uint __cdecl oo2net::rrGetBitLevel_V_NonZero(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 + 1;
}

// rrIlog2ceil @ 14ff51500

uint __cdecl oo2net::rrIlog2ceil(uint param_1)

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

// rrPtrDiff @ 14ff51520

long64 __cdecl oo2net::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// rrTANS_Decoder_Fill @ 14ff51540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl oo2net::rrTANS_Decoder_Fill(rrTANS_Decoder *param_1,uint *param_2,int param_3)

{
  rrtans_decode_entry_U8 *prVar1;
  uint uVar2;
  tans_decode_entry_U16 *ptVar3;
  rrtans_decode_entry_U8 *prVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  byte bVar12;
  uint uVar13;
  ushort *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  short sVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 auStack_478 [32];
  uint local_458 [248];
  undefined1 local_78 [28];
  uint local_5c;
  int local_58 [2];
  uint *local_50;
  uint local_48;
  longlong local_40;
  rrTANS_Decoder *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)local_58;
  uVar17 = (ulonglong)param_3;
  local_50 = param_2;
  local_38 = param_1;
  if (param_1->max_alphabet < param_3) {
    local_458[0xf6] = 0x4ff515a5;
    local_458[0xf7] = 1;
    iVar7 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x150,
                               "oo2net::rrTANS_Decoder_Fill","alphabet <= tables->max_alphabet");
    if (iVar7 != 0) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (0 < param_3) {
    puVar11 = param_2 + (uVar17 - 1);
    do {
      param_3 = (int)uVar17;
      if (*puVar11 != 0) goto LAB_14ff515ea;
      param_3 = param_3 - 1;
      uVar17 = (ulonglong)(uint)param_3;
      puVar11 = puVar11 + -1;
    } while (0 < param_3);
  }
  local_458[0xf6] = 0x4ff515e5;
  local_458[0xf7] = 1;
  iVar7 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x158,
                             "oo2net::rrTANS_Decoder_Fill","alphabet > 0");
  if (iVar7 != 0) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14ff515ea:
  uVar21 = param_1->L;
  iVar7 = param_1->L_bits;
  iVar9 = param_1->max_alphabet;
  local_40 = (longlong)param_3;
  param_1->alphabet = param_3;
  local_58[0] = iVar7;
  local_48 = uVar21;
  if (param_2[local_40 + -1] == uVar21) {
    if (iVar9 < 0x101) {
      prVar4 = param_1->decode_table_U8;
      if (prVar4 == (rrtans_decode_entry_U8 *)0x0) {
        local_458[0xf6] = 0x4ff516b9;
        local_458[0xf7] = 1;
        iVar7 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x17c,
                                   "oo2net::rrTANS_Decoder_Fill","detable != NULL");
        if (iVar7 != 0) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar15 = 0;
      puVar18 = local_78;
      if (0 < (int)uVar21) {
        puVar14 = &prVar4->next_state;
        do {
          sVar19 = (short)lVar15;
          ((rrtans_decode_entry_U8 *)(puVar14 + -1))->sym = (uchar)(param_3 - 1U);
          lVar15 = lVar15 + 1;
          *(uchar *)((longlong)puVar14 + -1) = '\0';
          *puVar14 = (short)uVar21 + sVar19;
          puVar14 = puVar14 + 2;
          puVar18 = local_78;
        } while (lVar15 < (int)uVar21);
      }
    }
    else {
      ptVar3 = param_1->decode_table_U16;
      if (ptVar3 == (tans_decode_entry_U16 *)0x0) {
        local_458[0xf6] = 0x4ff51652;
        local_458[0xf7] = 1;
        iVar7 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x16d,
                                   "oo2net::rrTANS_Decoder_Fill","detable != NULL");
        if (iVar7 != 0) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar15 = 0;
      puVar18 = local_78;
      if (0 < (int)uVar21) {
        puVar14 = &ptVar3->next_state;
        do {
          sVar19 = (short)lVar15;
          ((tans_decode_entry_U16 *)(puVar14 + -2))->sym = (ushort)(param_3 - 1U);
          lVar15 = lVar15 + 1;
          puVar14[-1] = 0;
          *puVar14 = sVar19 + (short)uVar21;
          puVar14 = puVar14 + 3;
          puVar18 = local_78;
        } while (lVar15 < (int)uVar21);
      }
    }
  }
  else {
    memset(local_458,0,0x400);
    uVar13 = local_48;
    uVar20 = 0;
    puVar11 = local_50;
    uVar17 = uVar20;
    uVar16 = uVar20;
    lVar15 = local_40;
    uVar23 = uVar20;
    if (0 < local_40) {
      do {
        uVar21 = puVar11[uVar23];
        lVar22 = (longlong)(int)uVar21;
        if (uVar21 != 0) {
          uVar17 = 0xff00 / (ulonglong)uVar21;
          iVar7 = (int)uVar17;
          if (((iVar7 == 0) && (uVar21 != uVar13)) &&
             (iVar8 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x19c,
                                         "oo2net::rrTANS_Decoder_Fill","invp > 0 || count == (U32)L"
                                        ), lVar15 = local_40, iVar8 != 0)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar11 = local_50;
          if (0 < (int)uVar21) {
            do {
              puVar11 = local_458 + (uVar17 >> 8);
              *puVar11 = *puVar11 + 1;
              lVar22 = lVar22 + -1;
              puVar11 = local_50;
              uVar17 = (ulonglong)(uint)((int)uVar17 + iVar7);
            } while (lVar22 != 0);
          }
        }
        uVar23 = uVar23 + 1;
        uVar17 = uVar20;
        uVar21 = local_48;
        param_1 = local_38;
        iVar7 = local_58[0];
      } while ((longlong)uVar23 < lVar15);
    }
    do {
      uVar13 = local_458[uVar16];
      local_458[uVar16] = (uint)uVar17;
      uVar13 = (uint)uVar17 + uVar13;
      uVar2 = local_458[uVar16 + 1];
      local_458[uVar16 + 1] = uVar13;
      uVar13 = uVar13 + uVar2;
      uVar16 = uVar16 + 2;
      uVar17 = (ulonglong)uVar13;
    } while ((longlong)uVar16 < 0x100);
    if ((uVar13 != uVar21) &&
       (iVar8 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x1b0,
                                   "oo2net::rrTANS_Decoder_Fill","radix_cum == L"), iVar8 != 0)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (iVar9 < 0x101) {
      prVar4 = param_1->decode_table_U8;
      if ((prVar4 == (rrtans_decode_entry_U8 *)0x0) &&
         (iVar9 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",500,
                                     "oo2net::rrTANS_Decoder_Fill","detable != NULL"), iVar9 != 0))
      {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar11 = local_50;
      puVar18 = auStack_478;
      if (0 < local_40) {
        do {
          iVar9 = local_58[0];
          uVar21 = puVar11[uVar20];
          uVar17 = (ulonglong)uVar21;
          if (uVar21 != 0) {
            puVar11 = local_50;
            if (uVar21 == 1) {
              uVar17 = (ulonglong)local_5c;
              local_5c = local_5c + 1;
              prVar4[uVar17].next_state = (ushort)local_48;
              prVar4[uVar17].num_bits = (uchar)iVar7;
              prVar4[uVar17].sym = (uchar)uVar20;
            }
            else {
              uVar16 = 0xff00 / (ulonglong)uVar21;
              iVar7 = (int)uVar16;
              uVar23 = uVar17;
              if (0 < (int)uVar21) {
                do {
                  uVar21 = local_458[uVar16 >> 8];
                  local_458[uVar16 >> 8] = uVar21 + 1;
                  iVar8 = 0x1f;
                  uVar13 = (uint)uVar17;
                  if (uVar13 != 0) {
                    for (; uVar13 >> iVar8 == 0; iVar8 = iVar8 + -1) {
                    }
                  }
                  cVar6 = '\0';
                  if (uVar13 != 0) {
                    cVar6 = (char)iVar8 + '\x01';
                  }
                  prVar1 = prVar4 + uVar21;
                  prVar1->sym = (uchar)uVar20;
                  bVar12 = ((char)iVar9 - cVar6) + 1;
                  sVar19 = (short)uVar17;
                  uVar16 = (ulonglong)(uint)((int)uVar16 + iVar7);
                  uVar17 = (ulonglong)(uVar13 + 1);
                  prVar1->num_bits = bVar12;
                  prVar1->next_state = sVar19 << (bVar12 & 0x1f);
                  uVar23 = uVar23 - 1;
                  puVar11 = local_50;
                } while (uVar23 != 0);
              }
            }
          }
          uVar20 = uVar20 + 1;
          puVar18 = auStack_478;
          iVar7 = local_58[0];
        } while ((longlong)uVar20 < local_40);
      }
    }
    else {
      ptVar3 = param_1->decode_table_U16;
      if ((ptVar3 == (tans_decode_entry_U16 *)0x0) &&
         (iVar9 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x1b8,
                                     "oo2net::rrTANS_Decoder_Fill","detable != NULL"), iVar9 != 0))
      {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar11 = local_50;
      puVar18 = auStack_478;
      if (0 < local_40) {
        do {
          iVar9 = local_58[0];
          uVar21 = puVar11[uVar20];
          uVar17 = (ulonglong)uVar21;
          if (uVar21 != 0) {
            puVar11 = local_50;
            if (uVar21 == 1) {
              uVar17 = (ulonglong)local_5c;
              local_5c = local_5c + 1;
              ptVar3[uVar17].next_state = (ushort)local_48;
              ptVar3[uVar17].num_bits = (ushort)iVar7 & 0xff;
              ptVar3[uVar17].sym = (ushort)uVar20;
            }
            else {
              uVar16 = 0xff00 / (ulonglong)uVar21;
              iVar7 = (int)uVar16;
              uVar23 = uVar17;
              if (0 < (int)uVar21) {
                do {
                  uVar21 = local_458[uVar16 >> 8];
                  local_458[uVar16 >> 8] = uVar21 + 1;
                  iVar8 = 0x1f;
                  uVar13 = (uint)uVar17;
                  if (uVar13 != 0) {
                    for (; uVar13 >> iVar8 == 0; iVar8 = iVar8 + -1) {
                    }
                  }
                  iVar10 = 0;
                  if (uVar13 != 0) {
                    iVar10 = iVar8 + 1;
                  }
                  ptVar3[uVar21].sym = (ushort)uVar20;
                  iVar8 = (iVar9 - iVar10) + 1;
                  uVar16 = (ulonglong)(uint)((int)uVar16 + iVar7);
                  ptVar3[uVar21].num_bits = (ushort)iVar8 & 0xff;
                  sVar19 = (short)uVar17;
                  uVar17 = (ulonglong)(uVar13 + 1);
                  ptVar3[uVar21].next_state = sVar19 << ((byte)iVar8 & 0x1f);
                  uVar23 = uVar23 - 1;
                  puVar11 = local_50;
                } while (uVar23 != 0);
              }
            }
          }
          uVar20 = uVar20 + 1;
          puVar18 = auStack_478;
          iVar7 = local_58[0];
        } while ((longlong)uVar20 < local_40);
      }
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x14ff51a56;
  return;
}

// rrTANS_Decoder_Init @ 14ff51a80

rrTANS_Decoder * __cdecl
oo2net::rrTANS_Decoder_Init(void *param_1,long64 param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 1 << ((byte)param_3 & 0x1f);
  lVar5 = 6;
  if (param_4 < 0x101) {
    lVar5 = 4;
  }
  if ((longlong)(lVar5 * iVar4 + 0x2fU & 0xfffffffffffffff0) <= param_2) {
    *(int *)param_1 = iVar4;
    *(int *)((longlong)param_1 + 8) = param_4;
    uVar2 = (longlong)param_1 + 0x2fU & 0xfffffffffffffff0;
    *(int *)((longlong)param_1 + 0xc) = param_4;
    *(int *)((longlong)param_1 + 4) = param_3;
    uVar3 = uVar2;
    uVar1 = 0;
    if (param_4 < 0x101) {
      uVar3 = 0;
      uVar1 = uVar2;
    }
    *(ulonglong *)((longlong)param_1 + 0x18) = uVar3;
    *(ulonglong *)((longlong)param_1 + 0x10) = uVar1;
    return param_1;
  }
  return (rrTANS_Decoder *)0x0;
}

// rrTANS_Decoder_IsU16 @ 14ff51b10

int __cdecl oo2net::rrTANS_Decoder_IsU16(rrTANS_Decoder *param_1)

{
  return (int)(0x100 < param_1->max_alphabet);
}

// rrTANS_Decoder_Size @ 14ff51b30

long64 __cdecl oo2net::rrTANS_Decoder_Size(int param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 6;
  if (param_2 < 0x101) {
    lVar1 = 4;
  }
  return (1 << ((byte)param_1 & 0x1f)) * lVar1 + 0x2fU & 0xfffffffffffffff0;
}

// rrTANS_Encoder_Fill @ 14ff51b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl oo2net::rrTANS_Encoder_Fill(rrTANS_Encoder *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  rrtans_encode_entry *prVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  ushort *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_478 [32];
  uint local_458 [248];
  undefined1 local_78 [28];
  int local_5c;
  int local_58 [2];
  longlong local_50;
  ulonglong local_48;
  uint *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)local_58;
  uVar14 = (ulonglong)param_3;
  local_40 = param_2;
  if (param_1->max_alphabet < param_3) {
    local_458[0xf6] = 0x4ff51bde;
    local_458[0xf7] = 1;
    iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0xaf,
                               "oo2net::rrTANS_Encoder_Fill","alphabet <= tables->max_alphabet");
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (0 < param_3) {
    puVar10 = param_2 + (uVar14 - 1);
    do {
      param_3 = (int)uVar14;
      if (*puVar10 != 0) goto LAB_14ff51c2a;
      param_3 = param_3 - 1;
      uVar14 = (ulonglong)(uint)param_3;
      puVar10 = puVar10 + -1;
    } while (0 < param_3);
  }
  local_458[0xf6] = 0x4ff51c25;
  local_458[0xf7] = 1;
  iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0xb7,
                             "oo2net::rrTANS_Encoder_Fill","alphabet > 0");
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ff51c2a:
  uVar12 = param_1->L;
  uVar14 = (ulonglong)(int)uVar12;
  local_58[0] = param_1->L_bits;
  param_1->alphabet = param_3;
  sVar4 = (short)uVar12;
  if (param_2[(longlong)param_3 + -1] == uVar12) {
    iVar5 = uVar12 * 2;
    prVar11 = param_1->encode_sym_table + (longlong)param_3 + -1;
    prVar11->max_state_thresh = sVar4 * 2;
    prVar11->max_state_numbits = '\0';
    prVar11->packed_table_ptr = param_1->encode_table_packed + -uVar14;
    lVar17 = uVar14 * 2;
    while (puVar13 = local_78, (int)uVar12 < iVar5) {
      *(short *)(lVar17 + (longlong)prVar11->packed_table_ptr) = (short)uVar14;
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
      lVar17 = lVar17 + 2;
    }
  }
  else {
    memset(local_458,0,0x400);
    lVar20 = 0;
    lVar17 = (longlong)param_3;
    local_50 = lVar17;
    if (0 < param_3) {
      do {
        uVar9 = param_2[lVar20];
        lVar19 = (longlong)(int)uVar9;
        if (uVar9 != 0) {
          uVar7 = 0xff00 / (ulonglong)uVar9;
          iVar5 = (int)uVar7;
          if (((iVar5 == 0) && (uVar9 != uVar12)) &&
             (iVar6 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0xe8,
                                         "oo2net::rrTANS_Encoder_Fill","invp > 0 || count == (U32)L"
                                        ), lVar17 = local_50, iVar6 != 0)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (0 < (int)uVar9) {
            do {
              puVar10 = local_458 + (uVar7 >> 8);
              *puVar10 = *puVar10 + 1;
              lVar19 = lVar19 + -1;
              uVar7 = (ulonglong)(uint)((int)uVar7 + iVar5);
            } while (lVar19 != 0);
          }
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < lVar17);
    }
    uVar9 = 0;
    lVar17 = 0;
    do {
      uVar1 = local_458[lVar17];
      local_458[lVar17] = uVar9;
      uVar9 = uVar9 + uVar1;
      uVar1 = local_458[lVar17 + 1];
      local_458[lVar17 + 1] = uVar9;
      uVar9 = uVar9 + uVar1;
      lVar17 = lVar17 + 2;
    } while (lVar17 < 0x100);
    if ((uVar9 != uVar12) &&
       (iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0xfc,
                                   "oo2net::rrTANS_Encoder_Fill","radix_cum == L"), iVar5 != 0)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = 0;
    lVar17 = 0;
    if (0 < local_50) {
      lVar20 = 0;
      do {
        iVar5 = local_5c;
        uVar12 = param_2[lVar17];
        lVar19 = (longlong)(int)uVar12;
        if (uVar12 == 0) {
          *(undefined8 *)((longlong)&param_1->encode_sym_table->packed_table_ptr + lVar20) = 0;
        }
        else if (uVar12 == 1) {
          plVar15 = (longlong *)((longlong)&param_1->encode_sym_table->packed_table_ptr + lVar20);
          *(char *)((longlong)plVar15 + 10) = (char)local_58[0];
          *(short *)(plVar15 + 1) = sVar4 * 2;
          *plVar15 = (longlong)(param_1->encode_table_packed + (uVar7 - 1));
          local_5c = local_5c + 1;
          *(short *)(*plVar15 + 2) = (short)iVar5 + sVar4;
          uVar7 = uVar7 + 1;
        }
        else {
          if (uVar12 < 2) {
            cVar3 = '\0';
          }
          else {
            iVar5 = 0x1f;
            if (uVar12 - 1 != 0) {
              for (; uVar12 - 1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
              }
            }
            cVar3 = (char)iVar5 + '\x01';
          }
          prVar11 = param_1->encode_sym_table;
          bVar8 = (char)local_58[0] - cVar3;
          uVar16 = (ulonglong)uVar12;
          (&prVar11->max_state_numbits)[lVar20] = bVar8;
          *(short *)((longlong)&prVar11->max_state_thresh + lVar20) =
               (short)uVar12 * 2 << (bVar8 & 0x1f);
          puVar18 = param_1->encode_table_packed;
          local_48 = uVar7 + uVar16;
          *(ushort **)((longlong)&prVar11->packed_table_ptr + lVar20) = puVar18 + (uVar7 - uVar16);
          puVar18 = puVar18 + (uVar7 - uVar16) + uVar16;
          uVar16 = 0xff00 / (ulonglong)uVar12;
          iVar5 = (int)uVar16;
          uVar7 = local_48;
          param_2 = local_40;
          if (0 < (int)uVar12) {
            do {
              uVar7 = uVar16 >> 8;
              uVar16 = (ulonglong)(uint)((int)uVar16 + iVar5);
              uVar12 = local_458[uVar7];
              local_458[uVar7] = uVar12 + 1;
              *puVar18 = (short)uVar12 + sVar4;
              lVar19 = lVar19 + -1;
              uVar7 = local_48;
              puVar18 = puVar18 + 1;
              param_2 = local_40;
            } while (lVar19 != 0);
          }
        }
        lVar17 = lVar17 + 1;
        lVar20 = lVar20 + 0x10;
      } while (lVar17 < local_50);
    }
    puVar13 = auStack_478;
    if ((uVar7 != uVar14) &&
       (iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x14a,
                                   "oo2net::rrTANS_Encoder_Fill","cumulative_count == (SINTa)L"),
       puVar13 = auStack_478, iVar5 != 0)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x14ff51f05;
  return;
}

// rrTANS_Encoder_Init @ 14ff51f40

rrTANS_Encoder * __cdecl
oo2net::rrTANS_Encoder_Init(void *param_1,long64 param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 1 << ((byte)param_3 & 0x1f);
  if (param_2 < (longlong)
                (((longlong)iVar2 * 2 + 0x2fU & 0xfffffffffffffff0) + (longlong)param_4 * 0x10)) {
    return (rrTANS_Encoder *)0x0;
  }
  *(int *)((longlong)param_1 + 8) = param_4;
  uVar1 = (longlong)param_1 + 0x2fU & 0xfffffffffffffff0;
  *(int *)((longlong)param_1 + 0xc) = param_4;
  *(ulonglong *)((longlong)param_1 + 0x18) = uVar1;
  *(int *)param_1 = iVar2;
  *(int *)((longlong)param_1 + 4) = param_3;
  *(ulonglong *)((longlong)param_1 + 0x10) = uVar1 + (longlong)param_4 * 0x10;
  return param_1;
}

// rrTANS_Encoder_Size @ 14ff51fc0

long64 __cdecl oo2net::rrTANS_Encoder_Size(int param_1,int param_2)

{
  return ((longlong)(1 << ((byte)param_1 & 0x1f)) * 2 + 0x2fU & 0xfffffffffffffff0) +
         (longlong)param_2 * 0x10;
}

// rrTANS_PackCounts4 @ 14ff52000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2net::rrTANS_PackCounts4
          (int param_1,int param_2,uint *param_3,int param_4,int param_5,ulong64 *param_6,
          long64 *param_7,uchar **param_8,uchar **param_9,bool param_10)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_b8 [32];
  int local_98;
  uint local_94;
  uchar **local_90;
  uint auStack_88 [7];
  int aiStack_6c [9];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  uVar13 = 0;
  local_90 = param_8;
  uVar6 = 0;
  if ((uint)param_2 < 2) {
    local_98 = 0;
  }
  else {
    local_98 = 0x1f;
    if (param_2 - 1U != 0) {
      for (; param_2 - 1U >> local_98 == 0; local_98 = local_98 + -1) {
      }
    }
    local_98 = local_98 + 1;
  }
  uVar14 = (ulonglong)param_5;
  lVar10 = 0x3f - *param_7 >> 3;
  uVar9 = *param_6 << ((char)*param_7 + 1U & 0x3f);
  *(ulonglong *)*param_8 =
       uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
       (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
       (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38;
  *param_8 = *param_8 + lVar10;
  *param_7 = *param_7 + lVar10 * 8;
  *param_6 = *param_6 << 3 | uVar14;
  *param_7 = *param_7 + -3;
  if (param_5 == 0) {
    return;
  }
  local_94 = param_1;
  if (param_5 == 1) {
    uVar9 = *param_6 << ((char)*param_7 + 1U & 0x3f);
    uVar13 = (longlong)param_4 - 1;
    lVar10 = 0x3f - *param_7 >> 3;
    *(ulonglong *)*param_8 =
         uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
         (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
         (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38;
    *param_8 = *param_8 + lVar10;
    *param_7 = *param_7 + lVar10 * 8;
    if ((param_3[uVar13] == 0) &&
       (iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x26e,
                                   "oo2net::rrTANS_PackCounts4","counts[alphabet-1] != 0"),
       iVar3 != 0)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *param_6 = *param_6 << ((byte)local_98 & 0x3f) | uVar13;
    *param_7 = *param_7 - (longlong)local_98;
    if (param_10) {
      if (param_3[uVar13] == 1 << ((byte)param_1 & 0x1f)) {
        return;
      }
      iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x273,
                                 "oo2net::rrTANS_PackCounts4","counts[alphabet-1] == L");
      if (iVar3 == 0) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *param_6 = *param_6 << ((byte)local_94 & 0x3f);
    *param_6 = *param_6 | (ulonglong)param_3[uVar13];
    goto LAB_14ff52420;
  }
  if ((param_3[(longlong)param_4 + -1] == 0) &&
     (iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x27d,
                                 "oo2net::rrTANS_PackCounts4","counts[alphabet-1] != 0"), iVar3 != 0
     )) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar9 = uVar13;
  uVar8 = uVar13;
  uVar11 = uVar13;
  if (param_4 < 1) {
LAB_14ff52205:
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x28e,
                               "oo2net::rrTANS_PackCounts4","got == num_non_zero");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      if (*param_3 != 0) {
        uVar11 = (ulonglong)((int)uVar11 + 1);
        *(uint *)((longlong)auStack_88 + uVar8) = *param_3;
        *(int *)((longlong)aiStack_6c + uVar8 + 4) = (int)uVar9;
        uVar8 = uVar8 + 4;
      }
      uVar4 = (int)uVar9 + 1;
      param_3 = param_3 + 1;
      uVar9 = (ulonglong)uVar4;
    } while ((int)uVar4 < param_4);
    if ((int)uVar11 != param_5) goto LAB_14ff52205;
  }
  uVar4 = local_94;
  if (0 < (longlong)uVar14) {
    lVar10 = 1;
    lVar12 = lVar10;
    uVar9 = uVar13;
    uVar8 = uVar14;
    do {
      for (; lVar10 < (longlong)uVar14; lVar10 = lVar10 + 1) {
        uVar7 = auStack_88[lVar10];
        uVar5 = *(uint *)((longlong)auStack_88 + uVar9);
        if (uVar7 < uVar5) {
          iVar3 = *(int *)((longlong)aiStack_6c + uVar9 + 4);
          *(int *)((longlong)aiStack_6c + uVar9 + 4) = aiStack_6c[lVar10 + 1];
          *(uint *)((longlong)auStack_88 + uVar9) = uVar7;
          aiStack_6c[lVar10 + 1] = iVar3;
          auStack_88[lVar10] = uVar5;
        }
      }
      lVar10 = lVar12 + 1;
      uVar9 = uVar9 + 4;
      uVar8 = uVar8 - 1;
      lVar12 = lVar10;
    } while (uVar8 != 0);
  }
  iVar3 = param_5 + -1;
  if (!param_10) {
    iVar3 = param_5;
  }
  lVar10 = (longlong)iVar3;
  uVar9 = uVar13;
  uVar14 = uVar13;
  uVar8 = uVar13;
  if (iVar3 < 1) {
LAB_14ff522ed:
    uVar5 = 1;
  }
  else {
    do {
      puVar1 = auStack_88 + uVar9;
      uVar7 = *puVar1 - (int)uVar8;
      iVar3 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      uVar5 = uVar6;
      if (uVar7 != 0) {
        uVar5 = iVar3 + 1;
      }
      if ((int)uVar5 < (int)(uint)uVar14) {
        uVar5 = (uint)uVar14;
      }
      uVar9 = uVar9 + 1;
      uVar14 = (ulonglong)uVar5;
      uVar8 = (ulonglong)*puVar1;
    } while ((longlong)uVar9 < lVar10);
    if (uVar5 == 0) goto LAB_14ff522ed;
  }
  if (((int)local_94 < (int)uVar5) &&
     (iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x2b3,
                                 "oo2net::rrTANS_PackCounts4","max_delta_bits <= L_bits"),
     iVar3 != 0)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  if (uVar4 != 0) {
    uVar6 = iVar3 + 1;
  }
  *param_6 = *param_6 << ((byte)uVar6 & 0x3f) | (longlong)(int)uVar5;
  *param_7 = *param_7 - (ulonglong)uVar6;
  lVar12 = *param_7;
  if (0 < lVar10) {
    uVar9 = uVar13;
    do {
      uVar6 = auStack_88[uVar13];
      iVar3 = (int)uVar9;
      uVar9 = (ulonglong)uVar6;
      lVar12 = 0x3f - *param_7 >> 3;
      uVar14 = *param_6 << ((char)*param_7 + 1U & 0x3f);
      *(ulonglong *)*local_90 =
           uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 | (uVar14 & 0xff0000000000) >> 0x18
           | (uVar14 & 0xff00000000) >> 8 | (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18
           | (uVar14 & 0xff00) << 0x28 | uVar14 << 0x38;
      *local_90 = *local_90 + lVar12;
      *param_7 = *param_7 + lVar12 * 8;
      lVar12 = uVar13 + 1;
      uVar13 = uVar13 + 1;
      *param_6 = (longlong)aiStack_6c[lVar12] | *param_6 << ((byte)local_98 & 0x3f);
      *param_7 = *param_7 - (longlong)local_98;
      *param_6 = *param_6 << ((byte)uVar5 & 0x3f) | (ulonglong)(uVar6 - iVar3);
      lVar12 = *param_7 - (longlong)(int)uVar5;
      *param_7 = lVar12;
    } while ((longlong)uVar13 < lVar10);
  }
  uVar13 = *param_6 << ((char)lVar12 + 1U & 0x3f);
  lVar10 = 0x3f - lVar12 >> 3;
  *(ulonglong *)*local_90 =
       uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 | (uVar13 & 0xff0000000000) >> 0x18 |
       (uVar13 & 0xff00000000) >> 8 | (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 |
       (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38;
  *local_90 = *local_90 + lVar10;
  *param_7 = *param_7 + lVar10 * 8;
  if (!param_10) {
    return;
  }
  *param_6 = (longlong)aiStack_6c[param_5] | *param_6 << ((byte)local_98 & 0x3f);
  local_94 = local_98;
LAB_14ff52420:
  *param_7 = *param_7 - (longlong)(int)local_94;
  return;
}

// rrTANS_PackCounts8 @ 14ff52460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2net::rrTANS_PackCounts8
          (int param_1,int param_2,uint *param_3,int param_4,int param_5,ulong64 *param_6,
          long64 *param_7,uchar **param_8,uchar **param_9,bool param_10)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 auStack_140 [5];
  char local_118 [12];
  int local_10c;
  char *local_108;
  int local_100;
  int local_fc;
  ulonglong local_f8;
  uint *local_d8;
  int local_c8 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)local_118;
  uVar16 = (ulonglong)param_4;
  local_100 = param_4;
  local_d8 = param_3;
  local_fc = param_2;
  if ((uint)param_2 < 2) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0x1f;
    if (param_2 - 1U != 0) {
      for (; param_2 - 1U >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar8 = iVar8 + 1;
  }
  uVar5 = uVar16 + 0xf;
  local_f8 = uVar16;
  if (uVar5 <= uVar16) {
    uVar5 = 0xffffffffffffff0;
  }
  auStack_140[0] = 0x14ff524ea;
  lVar3 = -(uVar5 & 0xfffffffffffffff0);
  pcVar9 = local_118 + lVar3;
  local_108 = pcVar9;
  uVar5 = uVar16;
  if (0 < (longlong)uVar16) {
    do {
      uVar17 = *param_3;
      cVar4 = '\0';
      if (uVar17 != 0) {
        iVar7 = 0x1f;
        if (uVar17 != 0) {
          for (; uVar17 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        cVar4 = (char)iVar7 + '\x01';
      }
      *pcVar9 = cVar4;
      param_3 = param_3 + 1;
      pcVar9 = pcVar9 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  iVar8 = iVar8 * 4;
  lVar11 = 0;
  local_10c = iVar8;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  local_c8[0xc] = 0;
  local_c8[0xd] = 0;
  local_c8[0xe] = 0;
  local_c8[0xf] = 0;
  local_c8[0x10] = 0;
  local_c8[0x11] = 0;
  local_c8[0x12] = 0;
  local_c8[0x13] = 0;
  local_c8[0x14] = 0;
  local_c8[0x15] = 0;
  local_c8[0x16] = 0;
  local_c8[0x17] = 0;
  local_c8[0x18] = 0;
  local_c8[0x19] = 0;
  local_c8[0x1a] = 0;
  local_c8[0x1b] = 0;
  local_c8[0x1c] = 0;
  local_c8[0x1d] = 0;
  local_c8[0x1e] = 0;
  local_c8[0x1f] = 0;
  if (0 < (longlong)uVar16) {
    do {
      bVar6 = local_108[lVar11];
      if (bVar6 != 0) {
        iVar7 = (uint)bVar6 - (iVar8 + 2 >> 2);
        local_c8[iVar7 * 2 ^ iVar7 >> 0x1f] = local_c8[iVar7 * 2 ^ iVar7 >> 0x1f] + 1;
        iVar8 = (iVar8 * 3 + 2 >> 2) + (uint)bVar6;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (longlong)uVar16);
  }
  iVar8 = 0x7fffffff;
  lVar11 = 0x3f - *param_7 >> 3;
  uVar16 = *param_6 << ((char)*param_7 + 1U & 0x3f);
  uVar17 = 1;
  *(ulonglong *)*param_8 =
       uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 | (uVar16 & 0xff0000000000) >> 0x18 |
       (uVar16 & 0xff00000000) >> 8 | (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
       (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
  *param_8 = *param_8 + lVar11;
  *param_7 = *param_7 + lVar11 * 8;
  uVar19 = 0;
  do {
    *(undefined8 *)((longlong)auStack_140 + lVar3) = 0x14ff52605;
    iVar7 = EntropyOfCountsRice(local_c8,0x20,uVar19);
    if (iVar7 < iVar8) {
      uVar17 = uVar19;
      iVar8 = iVar7;
    }
    uVar19 = uVar19 + 1;
  } while ((int)uVar19 < 4);
  *param_6 = *param_6 << 2 | (longlong)(int)uVar17;
  *param_7 = *param_7 + -2;
  cVar4 = *local_108;
  iVar8 = 0;
  *param_6 = (ulonglong)(cVar4 != '\0') | *param_6 * 2;
  *param_7 = *param_7 + -1;
  lVar11 = 0;
  do {
    iVar7 = 0;
    if ((cVar4 == '\0') || (lVar11 != 0)) {
      for (; (lVar11 < (longlong)local_f8 && (local_108[lVar11] == '\0')); lVar11 = lVar11 + 1) {
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 1;
      }
      uVar18 = (iVar7 - 1U >> 1) + 1;
      uVar19 = 0x1f;
      if (uVar18 != 0) {
        for (; uVar18 >> uVar19 == 0; uVar19 = uVar19 - 1) {
        }
      }
      uVar14 = uVar19;
      if (0x1e < uVar19) {
        uVar16 = (ulonglong)(uVar19 / 0x1f);
        do {
          *param_6 = *param_6 << 0x1f;
          *param_7 = *param_7 + -0x1f;
          uVar14 = uVar14 - 0x1f;
          lVar12 = 0x3f - *param_7 >> 3;
          uVar5 = *param_6 << ((char)*param_7 + 1U & 0x3f);
          *(ulonglong *)*param_8 =
               uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18
               | (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 |
               (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
          *param_8 = *param_8 + lVar12;
          *param_7 = *param_7 + lVar12 * 8;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      *param_6 = *param_6 << ((byte)(uVar14 + 1) & 0x3f) | 1;
      *param_7 = *param_7 - (ulonglong)(uVar14 + 1);
      lVar12 = 0x3f - *param_7 >> 3;
      uVar16 = *param_6 << ((char)*param_7 + 1U & 0x3f);
      *(ulonglong *)*param_8 =
           uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 | (uVar16 & 0xff0000000000) >> 0x18
           | (uVar16 & 0xff00000000) >> 8 | (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18
           | (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
      *param_8 = *param_8 + lVar12;
      *param_7 = *param_7 + lVar12 * 8;
      if (uVar19 != 0) {
        *param_6 = (ulonglong)(uVar18 - (1 << ((byte)uVar19 & 0x1f))) |
                   *param_6 << ((byte)uVar19 & 0x3f);
        *param_7 = *param_7 - (ulonglong)uVar19;
        lVar12 = 0x3f - *param_7 >> 3;
        uVar16 = *param_6 << ((char)*param_7 + 1U & 0x3f);
        *(ulonglong *)*param_8 =
             uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
             (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
             (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 | (uVar16 & 0xff00) << 0x28 |
             uVar16 << 0x38;
        *param_8 = *param_8 + lVar12;
        *param_7 = *param_7 + lVar12 * 8;
      }
      *param_6 = (ulonglong)(iVar7 - 1U & 1) | *param_6 * 2;
      lVar13 = *param_7;
      lVar12 = lVar13 + -1;
      *param_7 = lVar12;
      uVar16 = *param_6 << ((byte)lVar13 & 0x3f);
      lVar12 = 0x3f - lVar12 >> 3;
      *(ulonglong *)*param_8 =
           uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 | (uVar16 & 0xff0000000000) >> 0x18
           | (uVar16 & 0xff00000000) >> 8 | (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18
           | (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
      *param_8 = *param_8 + lVar12;
      *param_7 = *param_7 + lVar12 * 8;
    }
    if ((longlong)local_f8 <= lVar11) break;
    uVar19 = 0;
    if (iVar8 < local_100) {
      pcVar9 = local_108 + lVar11;
      iVar7 = iVar8;
      do {
        if (*pcVar9 == '\0') break;
        uVar19 = uVar19 + 1;
        iVar7 = iVar7 + 1;
        pcVar9 = pcVar9 + 1;
      } while (iVar7 < local_100);
    }
    uVar14 = (uVar19 - 1 >> 1) + 1;
    uVar18 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> uVar18 == 0; uVar18 = uVar18 - 1) {
      }
    }
    uVar15 = uVar18;
    if (0x1e < uVar18) {
      uVar16 = (ulonglong)(uVar18 / 0x1f);
      do {
        *param_6 = *param_6 << 0x1f;
        *param_7 = *param_7 + -0x1f;
        uVar15 = uVar15 - 0x1f;
        lVar12 = 0x3f - *param_7 >> 3;
        uVar5 = *param_6 << ((char)*param_7 + 1U & 0x3f);
        *(ulonglong *)*param_8 =
             uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
             (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
             (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
        *param_8 = *param_8 + lVar12;
        *param_7 = *param_7 + lVar12 * 8;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    *param_6 = *param_6 << ((byte)(uVar15 + 1) & 0x3f) | 1;
    *param_7 = *param_7 - (ulonglong)(uVar15 + 1);
    lVar12 = 0x3f - *param_7 >> 3;
    uVar16 = *param_6 << ((char)*param_7 + 1U & 0x3f);
    *(ulonglong *)*param_8 =
         uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 | (uVar16 & 0xff0000000000) >> 0x18 |
         (uVar16 & 0xff00000000) >> 8 | (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
         (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
    *param_8 = *param_8 + lVar12;
    *param_7 = *param_7 + lVar12 * 8;
    if (uVar18 != 0) {
      *param_6 = (ulonglong)(uVar14 - (1 << ((byte)uVar18 & 0x1f))) |
                 *param_6 << ((byte)uVar18 & 0x3f);
      *param_7 = *param_7 - (ulonglong)uVar18;
      lVar12 = 0x3f - *param_7 >> 3;
      uVar16 = *param_6 << ((char)*param_7 + 1U & 0x3f);
      *(ulonglong *)*param_8 =
           uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 | (uVar16 & 0xff0000000000) >> 0x18
           | (uVar16 & 0xff00000000) >> 8 | (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18
           | (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
      *param_8 = *param_8 + lVar12;
      *param_7 = *param_7 + lVar12 * 8;
    }
    *param_6 = (ulonglong)(uVar19 - 1 & 1) | *param_6 * 2;
    lVar13 = *param_7;
    lVar12 = lVar13 + -1;
    *param_7 = lVar12;
    uVar16 = *param_6 << ((byte)lVar13 & 0x3f);
    lVar12 = 0x3f - lVar12 >> 3;
    *(ulonglong *)*param_8 =
         uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 | (uVar16 & 0xff0000000000) >> 0x18 |
         (uVar16 & 0xff00000000) >> 8 | (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
         (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
    *param_8 = *param_8 + lVar12;
    lVar12 = *param_7 + lVar12 * 8;
    *param_7 = lVar12;
    if (0 < (int)uVar19) {
      bVar6 = (byte)uVar17;
      uVar16 = (ulonglong)uVar19;
      iVar8 = iVar8 + uVar19;
      do {
        bVar2 = local_108[lVar11];
        iVar7 = (uint)bVar2 - (local_10c + 2 >> 2);
        lVar13 = 0x3f - lVar12 >> 3;
        uVar18 = iVar7 * 2 ^ iVar7 >> 0x1f;
        uVar5 = *param_6 << ((char)lVar12 + 1U & 0x3f);
        *(ulonglong *)*param_8 =
             uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
             (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
             (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
        *param_8 = *param_8 + lVar13;
        *param_7 = *param_7 + lVar13 * 8;
        uVar19 = uVar18 >> (bVar6 & 0x1f);
        if (0x1e < uVar19) {
          uVar5 = (ulonglong)(uVar19 / 0x1f);
          do {
            *param_6 = *param_6 << 0x1f;
            *param_7 = *param_7 + -0x1f;
            uVar19 = uVar19 - 0x1f;
            lVar12 = 0x3f - *param_7 >> 3;
            uVar10 = *param_6 << ((char)*param_7 + 1U & 0x3f);
            *(ulonglong *)*param_8 =
                 uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
                 (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
                 (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
                 (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38;
            *param_8 = *param_8 + lVar12;
            *param_7 = *param_7 + lVar12 * 8;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        *param_6 = *param_6 << ((byte)(uVar19 + 1) & 0x3f) | 1;
        *param_7 = *param_7 - (ulonglong)(uVar19 + 1);
        lVar12 = 0x3f - *param_7 >> 3;
        uVar5 = *param_6 << ((char)*param_7 + 1U & 0x3f);
        *(ulonglong *)*param_8 =
             uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
             (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
             (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
        *param_8 = *param_8 + lVar12;
        *param_7 = *param_7 + lVar12 * 8;
        *param_6 = (longlong)(int)(uVar18 & (1 << (bVar6 & 0x1f) | 1U >> 0x20 - (bVar6 & 0x1f)) - 1)
                   | *param_6 << (bVar6 & 0x3f);
        *param_7 = *param_7 - (ulonglong)uVar17;
        lVar13 = 0x3f - *param_7 >> 3;
        uVar5 = *param_6 << ((char)*param_7 + 1U & 0x3f);
        *(ulonglong *)*param_8 =
             uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
             (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
             (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
        lVar12 = (ulonglong)bVar2 - 1;
        *param_8 = *param_8 + lVar13;
        *param_7 = *param_7 + lVar13 * 8;
        *param_6 = *param_6 << ((byte)lVar12 & 0x3f);
        puVar1 = local_d8 + lVar11;
        lVar11 = lVar11 + 1;
        *param_6 = *param_6 | (ulonglong)(*puVar1 & c_rrBitMask32[lVar12]);
        *param_7 = *param_7 - lVar12;
        lVar12 = *param_7;
        local_10c = (local_10c * 3 + 2 >> 2) + (uint)bVar2;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  } while (lVar11 < (longlong)local_f8);
  if (local_100 < local_fc) {
    uVar19 = ((local_fc - local_100) - 1U >> 1) + 1;
    uVar17 = 0x1f;
    if (uVar19 != 0) {
      for (; uVar19 >> uVar17 == 0; uVar17 = uVar17 - 1) {
      }
    }
    uVar18 = uVar17;
    if (0x1e < uVar17) {
      uVar16 = (ulonglong)(uVar17 / 0x1f);
      do {
        *param_6 = *param_6 << 0x1f;
        *param_7 = *param_7 + -0x1f;
        uVar18 = uVar18 - 0x1f;
        lVar11 = 0x3f - *param_7 >> 3;
        uVar5 = *param_6 << ((char)*param_7 + 1U & 0x3f);
        *(ulonglong *)*param_8 =
             uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
             (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
             (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
        *param_8 = *param_8 + lVar11;
        *param_7 = *param_7 + lVar11 * 8;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    *param_6 = *param_6 << ((byte)(uVar18 + 1) & 0x3f) | 1;
    *param_7 = *param_7 - (ulonglong)(uVar18 + 1);
    lVar11 = 0x3f - *param_7 >> 3;
    uVar16 = *param_6 << ((char)*param_7 + 1U & 0x3f);
    *(ulonglong *)*param_8 =
         uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 | (uVar16 & 0xff0000000000) >> 0x18 |
         (uVar16 & 0xff00000000) >> 8 | (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
         (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
    *param_8 = *param_8 + lVar11;
    *param_7 = *param_7 + lVar11 * 8;
    if (uVar17 != 0) {
      *param_6 = (ulonglong)(uVar19 - (1 << ((byte)uVar17 & 0x1f))) |
                 *param_6 << ((byte)uVar17 & 0x3f);
      *param_7 = *param_7 - (ulonglong)uVar17;
      lVar11 = 0x3f - *param_7 >> 3;
      uVar16 = *param_6 << ((char)*param_7 + 1U & 0x3f);
      *(ulonglong *)*param_8 =
           uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 | (uVar16 & 0xff0000000000) >> 0x18
           | (uVar16 & 0xff00000000) >> 8 | (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18
           | (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
      *param_8 = *param_8 + lVar11;
      *param_7 = *param_7 + lVar11 * 8;
    }
    *param_6 = (ulonglong)((local_fc - local_100) - 1U & 1) | *param_6 * 2;
    lVar12 = *param_7;
    lVar11 = lVar12 + -1;
    *param_7 = lVar11;
    lVar11 = 0x3f - lVar11 >> 3;
    uVar16 = *param_6 << ((byte)lVar12 & 0x3f);
    *(ulonglong *)*param_8 =
         uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 | (uVar16 & 0xff0000000000) >> 0x18 |
         (uVar16 & 0xff00000000) >> 8 | (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
         (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
    *param_8 = *param_8 + lVar11;
    *param_7 = *param_7 + lVar11 * 8;
  }
  *(undefined8 *)((longlong)auStack_140 + lVar3) = 0x14ff52cd7;
  return;
}

// rrTANS_PackCounts @ 14ff52d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
oo2net::rrTANS_PackCounts
          (_rrVarBits_ *param_1,int param_2,int param_3,uint *param_4,int param_5,int param_6,
          bool param_7)

{
  uint *puVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *pcVar10;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  char *pcVar15;
  longlong lVar16;
  undefined1 *puVar17;
  ulonglong *puVar18;
  ulong64 uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [32];
  uint local_178;
  uint local_174;
  char local_170;
  uint *local_168;
  ulonglong local_160;
  uint local_158;
  int local_154;
  char *local_150;
  ulonglong local_148;
  longlong local_140;
  ulonglong local_138;
  _rrVarBits_ *local_130;
  uchar *local_128;
  uint auStack_120 [7];
  int aiStack_104 [11];
  int local_d8 [32];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)&local_178;
  lVar14 = param_1->m_inv_bitlen;
  puVar18 = (ulonglong *)param_1->m_cur;
  uVar22 = (ulonglong)param_5;
  local_174 = param_2;
  local_128 = param_1->m_end;
  lVar13 = 0x3f - lVar14 >> 3;
  local_168 = param_4;
  uVar19 = param_1->m_bits;
  local_130 = param_1;
  local_154 = param_3;
  uVar7 = uVar19 << ((char)lVar14 + 1U & 0x3f);
  local_160 = lVar14 + lVar13 * 8;
  *puVar18 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
             (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
             (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
  uVar7 = (ulonglong)param_6;
  lVar14 = local_160 + -1;
  puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
  if (7 < param_6) {
    uVar7 = uVar19 * 2 | 1;
    lVar13 = 0;
    if ((uint)param_3 < 2) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0x1f;
      if (param_3 - 1U != 0) {
        for (; param_3 - 1U >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = iVar5 + 1;
    }
    uVar8 = uVar22 + 0xf;
    local_148 = uVar22;
    if (uVar8 <= uVar22) {
      uVar8 = 0xffffffffffffff0;
    }
    uStack_1a0 = 0x14ff5317d;
    lVar23 = -(uVar8 & 0xfffffffffffffff0);
    pcVar10 = (char *)((longlong)&local_178 + lVar23);
    local_150 = pcVar10;
    if (0 < param_5) {
      uVar8 = (ulonglong)(uint)param_5;
      pcVar15 = pcVar10;
      do {
        uVar6 = *param_4;
        cVar4 = '\0';
        if (uVar6 != 0) {
          iVar12 = 0x1f;
          if (uVar6 != 0) {
            for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          cVar4 = (char)iVar12 + '\x01';
        }
        *pcVar15 = cVar4;
        param_4 = param_4 + 1;
        pcVar15 = pcVar15 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    iVar5 = iVar5 * 4;
    local_174 = iVar5;
    local_d8[0] = 0;
    local_d8[1] = 0;
    local_d8[2] = 0;
    local_d8[3] = 0;
    local_d8[4] = 0;
    local_d8[5] = 0;
    local_d8[6] = 0;
    local_d8[7] = 0;
    local_d8[8] = 0;
    local_d8[9] = 0;
    local_d8[10] = 0;
    local_d8[0xb] = 0;
    local_d8[0xc] = 0;
    local_d8[0xd] = 0;
    local_d8[0xe] = 0;
    local_d8[0xf] = 0;
    local_d8[0x10] = 0;
    local_d8[0x11] = 0;
    local_d8[0x12] = 0;
    local_d8[0x13] = 0;
    local_d8[0x14] = 0;
    local_d8[0x15] = 0;
    local_d8[0x16] = 0;
    local_d8[0x17] = 0;
    local_d8[0x18] = 0;
    local_d8[0x19] = 0;
    local_d8[0x1a] = 0;
    local_d8[0x1b] = 0;
    local_d8[0x1c] = 0;
    local_d8[0x1d] = 0;
    local_d8[0x1e] = 0;
    local_d8[0x1f] = 0;
    if (0 < (longlong)uVar22) {
      do {
        bVar11 = pcVar10[lVar13];
        if (bVar11 != 0) {
          iVar12 = (uint)bVar11 - (iVar5 + 2 >> 2);
          local_d8[iVar12 * 2 ^ iVar12 >> 0x1f] = local_d8[iVar12 * 2 ^ iVar12 >> 0x1f] + 1;
          iVar5 = (iVar5 * 3 + 2 >> 2) + (uint)bVar11;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < (longlong)uVar22);
    }
    uVar22 = uVar7 << ((byte)local_160 & 0x3f);
    local_178 = 1;
    lVar13 = 0x3f - lVar14 >> 3;
    iVar5 = 0x7fffffff;
    *puVar18 = uVar22 >> 0x38 | (uVar22 & 0xff000000000000) >> 0x28 |
               (uVar22 & 0xff0000000000) >> 0x18 | (uVar22 & 0xff00000000) >> 8 |
               (uVar22 & 0xff000000) << 8 | (uVar22 & 0xff0000) << 0x18 | (uVar22 & 0xff00) << 0x28
               | uVar22 << 0x38;
    puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
    uVar6 = 0;
    do {
      *(undefined8 *)(auStack_198 + lVar23 + -8) = 0x14ff53294;
      iVar12 = EntropyOfCountsRice(local_d8,0x20,uVar6);
      if (iVar12 < iVar5) {
        local_178 = uVar6;
        iVar5 = iVar12;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 4);
    local_170 = *pcVar10;
    uVar22 = 0;
    uVar19 = (uVar7 * 4 | (longlong)(int)local_178) * 2 | (ulonglong)(local_170 != '\0');
    local_138 = (ulonglong)local_178;
    lVar14 = lVar14 + lVar13 * 8 + -3;
    uVar7 = uVar22;
    cVar4 = local_170;
    do {
      iVar5 = 0;
      if ((cVar4 == '\0') || (uVar22 != 0)) {
        for (; ((longlong)uVar22 < (longlong)local_148 && (pcVar10[uVar22] == '\0'));
            uVar22 = uVar22 + 1) {
          iVar5 = iVar5 + 1;
          uVar7 = (ulonglong)((int)uVar7 + 1);
        }
        uVar24 = (iVar5 - 1U >> 1) + 1;
        uVar6 = 0x1f;
        if (uVar24 != 0) {
          for (; uVar24 >> uVar6 == 0; uVar6 = uVar6 - 1) {
          }
        }
        uVar21 = uVar6;
        if (0x1e < uVar6) {
          uVar8 = (ulonglong)(uVar6 / 0x1f);
          do {
            lVar14 = lVar14 + -0x1f;
            uVar19 = uVar19 << 0x1f;
            uVar21 = uVar21 - 0x1f;
            lVar13 = 0x3f - lVar14 >> 3;
            uVar9 = uVar19 << ((char)lVar14 + 1U & 0x3f);
            *puVar18 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                       (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                       (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
                       (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38;
            lVar14 = lVar14 + lVar13 * 8;
            puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        lVar14 = lVar14 - (ulonglong)(uVar21 + 1);
        uVar9 = uVar19 << ((byte)(uVar21 + 1) & 0x3f) | 1;
        lVar13 = 0x3f - lVar14 >> 3;
        uVar8 = uVar9 << ((char)lVar14 + 1U & 0x3f);
        *puVar18 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                   (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                   (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 | (uVar8 & 0xff00) << 0x28
                   | uVar8 << 0x38;
        lVar14 = lVar14 + lVar13 * 8;
        puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
        if (uVar6 != 0) {
          lVar14 = lVar14 - (ulonglong)uVar6;
          lVar13 = 0x3f - lVar14 >> 3;
          uVar9 = (ulonglong)(uVar24 - (1 << ((byte)uVar6 & 0x1f))) | uVar9 << ((byte)uVar6 & 0x3f);
          uVar8 = uVar9 << ((char)lVar14 + 1U & 0x3f);
          *puVar18 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                     (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                     (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
                     (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
          lVar14 = lVar14 + lVar13 * 8;
          puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
        }
        uVar19 = (ulonglong)(iVar5 - 1U & 1) | uVar9 * 2;
        uVar8 = uVar19 << ((byte)lVar14 & 0x3f);
        lVar13 = 0x3f - (lVar14 + -1) >> 3;
        *puVar18 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                   (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                   (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 | (uVar8 & 0xff00) << 0x28
                   | uVar8 << 0x38;
        puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
        lVar14 = lVar14 + -1 + lVar13 * 8;
        pcVar10 = local_150;
      }
      local_158 = 0;
      if ((longlong)local_148 <= (longlong)uVar22) break;
      if ((int)uVar7 < param_5) {
        pcVar10 = pcVar10 + uVar22;
        uVar8 = uVar7;
        local_158 = 0;
        do {
          if (*pcVar10 == '\0') break;
          local_158 = local_158 + 1;
          uVar6 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar6;
          pcVar10 = pcVar10 + 1;
        } while ((int)uVar6 < param_5);
      }
      uVar24 = (local_158 - 1 >> 1) + 1;
      uVar6 = 0x1f;
      if (uVar24 != 0) {
        for (; uVar24 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      uVar21 = uVar6;
      if (0x1e < uVar6) {
        uVar8 = (ulonglong)(uVar6 / 0x1f);
        do {
          lVar14 = lVar14 + -0x1f;
          uVar19 = uVar19 << 0x1f;
          uVar21 = uVar21 - 0x1f;
          lVar13 = 0x3f - lVar14 >> 3;
          uVar9 = uVar19 << ((char)lVar14 + 1U & 0x3f);
          *puVar18 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                     (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                     (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
                     (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38;
          lVar14 = lVar14 + lVar13 * 8;
          puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      lVar14 = lVar14 - (ulonglong)(uVar21 + 1);
      uVar9 = uVar19 << ((byte)(uVar21 + 1) & 0x3f) | 1;
      lVar13 = 0x3f - lVar14 >> 3;
      uVar8 = uVar9 << ((char)lVar14 + 1U & 0x3f);
      *puVar18 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                 (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                 (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 | (uVar8 & 0xff00) << 0x28 |
                 uVar8 << 0x38;
      lVar14 = lVar14 + lVar13 * 8;
      puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
      if (uVar6 != 0) {
        lVar14 = lVar14 - (ulonglong)uVar6;
        lVar13 = 0x3f - lVar14 >> 3;
        uVar9 = (ulonglong)(uVar24 - (1 << ((byte)uVar6 & 0x1f))) | uVar9 << ((byte)uVar6 & 0x3f);
        uVar8 = uVar9 << ((char)lVar14 + 1U & 0x3f);
        *puVar18 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                   (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                   (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 | (uVar8 & 0xff00) << 0x28
                   | uVar8 << 0x38;
        lVar14 = lVar14 + lVar13 * 8;
        puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
      }
      uVar19 = (ulonglong)(local_158 - 1 & 1) | uVar9 * 2;
      uVar8 = uVar19 << ((byte)lVar14 & 0x3f);
      lVar13 = 0x3f - (lVar14 + -1) >> 3;
      *puVar18 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                 (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                 (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 | (uVar8 & 0xff00) << 0x28 |
                 uVar8 << 0x38;
      puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
      lVar14 = lVar14 + -1 + lVar13 * 8;
      if (0 < (int)local_158) {
        bVar11 = (byte)local_178;
        uVar6 = (1 << (bVar11 & 0x1f) | 1U >> 0x20 - (bVar11 & 0x1f)) - 1;
        local_160 = (ulonglong)local_158;
        local_158 = (int)uVar7 + local_158;
        local_140 = (longlong)(int)uVar6;
        do {
          bVar2 = local_150[uVar22];
          iVar5 = (uint)bVar2 - ((int)(local_174 + 2) >> 2);
          lVar13 = 0x3f - lVar14 >> 3;
          uVar21 = iVar5 * 2 ^ iVar5 >> 0x1f;
          uVar7 = uVar19 << ((char)lVar14 + 1U & 0x3f);
          lVar14 = lVar14 + lVar13 * 8;
          *puVar18 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                     (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                     (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
                     (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
          puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
          uVar24 = uVar21 >> (bVar11 & 0x1f);
          if (0x1e < uVar24) {
            uVar7 = (ulonglong)(uVar24 / 0x1f);
            do {
              lVar14 = lVar14 + -0x1f;
              uVar19 = uVar19 << 0x1f;
              uVar24 = uVar24 - 0x1f;
              lVar13 = 0x3f - lVar14 >> 3;
              uVar8 = uVar19 << ((char)lVar14 + 1U & 0x3f);
              *puVar18 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                         (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                         (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
                         (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
              lVar14 = lVar14 + lVar13 * 8;
              puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          lVar14 = lVar14 - (ulonglong)(uVar24 + 1);
          uVar8 = uVar19 << ((byte)(uVar24 + 1) & 0x3f) | 1;
          lVar13 = 0x3f - lVar14 >> 3;
          uVar7 = uVar8 << ((char)lVar14 + 1U & 0x3f);
          local_174 = ((int)(local_174 * 3 + 2) >> 2) + (uint)bVar2;
          *puVar18 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                     (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                     (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
                     (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
          puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
          uVar8 = (longlong)(int)(uVar21 & uVar6) | uVar8 << (bVar11 & 0x3f);
          lVar14 = lVar14 + (lVar13 * 8 - (ulonglong)local_178);
          lVar16 = 0x3f - lVar14 >> 3;
          uVar7 = uVar8 << ((char)lVar14 + 1U & 0x3f);
          lVar13 = (ulonglong)bVar2 - 1;
          *puVar18 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                     (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                     (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
                     (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
          puVar18 = (ulonglong *)((longlong)puVar18 + lVar16);
          puVar1 = local_168 + uVar22;
          uVar22 = uVar22 + 1;
          uVar19 = (ulonglong)(c_rrBitMask32[lVar13] & *puVar1) | uVar8 << ((byte)lVar13 & 0x3f);
          lVar14 = lVar14 + (lVar16 * 8 - lVar13);
          local_160 = local_160 - 1;
        } while (local_160 != 0);
        uVar7 = (ulonglong)local_158;
      }
      pcVar10 = local_150;
      cVar4 = local_170;
    } while ((longlong)uVar22 < (longlong)local_148);
    puVar17 = auStack_198 + lVar23;
    if (param_5 < local_154) {
      uVar24 = ((local_154 - param_5) - 1U >> 1) + 1;
      uVar6 = 0x1f;
      if (uVar24 != 0) {
        for (; uVar24 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      uVar21 = uVar6;
      if (0x1e < uVar6) {
        uVar22 = (ulonglong)(uVar6 / 0x1f);
        do {
          lVar14 = lVar14 + -0x1f;
          uVar19 = uVar19 << 0x1f;
          uVar21 = uVar21 - 0x1f;
          lVar13 = 0x3f - lVar14 >> 3;
          uVar7 = uVar19 << ((char)lVar14 + 1U & 0x3f);
          *puVar18 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                     (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                     (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
                     (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
          lVar14 = lVar14 + lVar13 * 8;
          puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      lVar14 = lVar14 - (ulonglong)(uVar21 + 1);
      uVar7 = uVar19 << ((byte)(uVar21 + 1) & 0x3f) | 1;
      lVar13 = 0x3f - lVar14 >> 3;
      uVar22 = uVar7 << ((char)lVar14 + 1U & 0x3f);
      *puVar18 = uVar22 >> 0x38 | (uVar22 & 0xff000000000000) >> 0x28 |
                 (uVar22 & 0xff0000000000) >> 0x18 | (uVar22 & 0xff00000000) >> 8 |
                 (uVar22 & 0xff000000) << 8 | (uVar22 & 0xff0000) << 0x18 |
                 (uVar22 & 0xff00) << 0x28 | uVar22 << 0x38;
      lVar14 = lVar14 + lVar13 * 8;
      puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
      if (uVar6 != 0) {
        lVar14 = lVar14 - (ulonglong)uVar6;
        lVar13 = 0x3f - lVar14 >> 3;
        uVar7 = (ulonglong)(uVar24 - (1 << ((byte)uVar6 & 0x1f))) | uVar7 << ((byte)uVar6 & 0x3f);
        uVar22 = uVar7 << ((char)lVar14 + 1U & 0x3f);
        *puVar18 = uVar22 >> 0x38 | (uVar22 & 0xff000000000000) >> 0x28 |
                   (uVar22 & 0xff0000000000) >> 0x18 | (uVar22 & 0xff00000000) >> 8 |
                   (uVar22 & 0xff000000) << 8 | (uVar22 & 0xff0000) << 0x18 |
                   (uVar22 & 0xff00) << 0x28 | uVar22 << 0x38;
        lVar14 = lVar14 + lVar13 * 8;
        puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
      }
      uVar19 = (ulonglong)((local_154 - param_5) - 1U & 1) | uVar7 * 2;
      lVar13 = 0x3f - (lVar14 + -1) >> 3;
      uVar22 = uVar19 << ((byte)lVar14 & 0x3f);
      *puVar18 = uVar22 >> 0x38 | (uVar22 & 0xff000000000000) >> 0x28 |
                 (uVar22 & 0xff0000000000) >> 0x18 | (uVar22 & 0xff00000000) >> 8 |
                 (uVar22 & 0xff000000) << 8 | (uVar22 & 0xff0000) << 0x18 |
                 (uVar22 & 0xff00) << 0x28 | uVar22 << 0x38;
      puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
      lVar14 = lVar14 + -1 + lVar13 * 8;
      puVar17 = auStack_198 + lVar23;
    }
    goto LAB_14ff5384d;
  }
  local_178 = 0;
  if (1 < (uint)param_3) {
    iVar5 = 0x1f;
    if (param_3 - 1U != 0) {
      for (; param_3 - 1U >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    local_178 = iVar5 + 1;
  }
  uVar8 = uVar19 * 2 << ((byte)local_160 & 0x3f);
  lVar14 = 0x3f - lVar14 >> 3;
  *puVar18 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
             (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
             (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
  uVar19 = uVar19 << 4 | uVar7;
  puVar18 = (ulonglong *)((longlong)puVar18 + lVar14);
  lVar14 = local_160 + -4 + lVar14 * 8;
  puVar17 = auStack_198;
  if (param_6 == 0) goto LAB_14ff5384d;
  uVar22 = uVar22 - 1;
  if (param_6 == 1) {
    uVar7 = uVar19 << ((char)lVar14 + 1U & 0x3f);
    lVar13 = 0x3f - lVar14 >> 3;
    *puVar18 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18
               | (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 |
               (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
    puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
    if (param_4[uVar22] == 0) {
      uStack_1a0 = 0x14ff52e54;
      iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x26e,
                                 "oo2net::rrTANS_PackCounts4","counts[alphabet-1] != 0");
      if (iVar5 != 0) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar14 = (lVar14 + lVar13 * 8) - (longlong)(int)local_178;
    uVar19 = uVar19 << ((byte)local_178 & 0x3f) | uVar22;
    if (param_7) {
      puVar17 = auStack_198;
      if (local_168[uVar22] != 1 << ((byte)param_2 & 0x1f)) {
        uStack_1a0 = 0x14ff52ea8;
        iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x273,
                                   "oo2net::rrTANS_PackCounts4","counts[alphabet-1] == L");
        puVar17 = auStack_198;
        if (iVar5 != 0) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    else {
      uVar19 = uVar19 << ((byte)local_174 & 0x3f) | (ulonglong)local_168[uVar22];
      lVar14 = lVar14 - (int)local_174;
      puVar17 = auStack_198;
    }
    goto LAB_14ff5384d;
  }
  if (param_4[uVar22] == 0) {
    uStack_1a0 = 0x14ff52ef2;
    iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x27d,
                               "oo2net::rrTANS_PackCounts4","counts[alphabet-1] != 0");
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar9 = 0;
  uVar22 = uVar9;
  uVar8 = uVar9;
  if (param_5 < 1) {
LAB_14ff52f3d:
    uStack_1a0 = 0x14ff52f5c;
    iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x28e,
                               "oo2net::rrTANS_PackCounts4","got == num_non_zero");
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      if (*param_4 != 0) {
        uVar8 = (ulonglong)((int)uVar8 + 1);
        *(uint *)((longlong)auStack_120 + uVar22) = *param_4;
        *(int *)((longlong)aiStack_104 + uVar22 + 4) = (int)uVar9;
        uVar22 = uVar22 + 4;
      }
      uVar6 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar6;
      param_4 = param_4 + 1;
    } while ((int)uVar6 < param_5);
    if ((int)uVar8 != param_6) goto LAB_14ff52f3d;
  }
  lVar13 = 0;
  if (0 < (longlong)uVar7) {
    lVar23 = 1;
    uVar22 = uVar7;
    lVar16 = lVar23;
    do {
      for (; lVar23 < (longlong)uVar7; lVar23 = lVar23 + 1) {
        uVar6 = auStack_120[lVar23];
        uVar24 = *(uint *)((longlong)auStack_120 + lVar13);
        if (uVar6 < uVar24) {
          iVar5 = *(int *)((longlong)aiStack_104 + lVar13 + 4);
          *(int *)((longlong)aiStack_104 + lVar13 + 4) = aiStack_104[lVar23 + 1];
          *(uint *)((longlong)auStack_120 + lVar13) = uVar6;
          aiStack_104[lVar23 + 1] = iVar5;
          auStack_120[lVar23] = uVar24;
        }
      }
      lVar23 = lVar16 + 1;
      lVar13 = lVar13 + 4;
      uVar22 = uVar22 - 1;
      lVar16 = lVar23;
    } while (uVar22 != 0);
  }
  uVar22 = 0;
  iVar5 = param_6 + -1;
  if (!param_7) {
    iVar5 = param_6;
  }
  lVar13 = (longlong)iVar5;
  uVar7 = uVar22;
  uVar8 = uVar22;
  if (iVar5 < 1) {
LAB_14ff53024:
    uVar24 = 1;
  }
  else {
    do {
      uVar6 = auStack_120[uVar22] - (int)uVar7;
      uVar7 = (ulonglong)auStack_120[uVar22];
      iVar5 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar24 = 0;
      if (uVar6 != 0) {
        uVar24 = iVar5 + 1;
      }
      if ((int)uVar24 < (int)(uint)uVar8) {
        uVar24 = (uint)uVar8;
      }
      uVar22 = uVar22 + 1;
      uVar8 = (ulonglong)uVar24;
    } while ((longlong)uVar22 < lVar13);
    if (uVar24 == 0) goto LAB_14ff53024;
  }
  if ((int)local_174 < (int)uVar24) {
    uStack_1a0 = 0x14ff53051;
    iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x2b3,
                               "oo2net::rrTANS_PackCounts4","max_delta_bits <= L_bits");
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar23 = 0;
  iVar5 = 0x1f;
  if (local_174 != 0) {
    for (; local_174 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  if (local_174 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = iVar5 + 1;
  }
  lVar14 = lVar14 - (ulonglong)uVar6;
  uVar19 = uVar19 << ((byte)uVar6 & 0x3f) | (longlong)(int)uVar24;
  if (0 < lVar13) {
    uVar6 = 0;
    do {
      uVar21 = auStack_120[lVar23];
      lVar20 = 0x3f - lVar14 >> 3;
      uVar22 = uVar19 << ((char)lVar14 + 1U & 0x3f);
      *puVar18 = uVar22 >> 0x38 | (uVar22 & 0xff000000000000) >> 0x28 |
                 (uVar22 & 0xff0000000000) >> 0x18 | (uVar22 & 0xff00000000) >> 8 |
                 (uVar22 & 0xff000000) << 8 | (uVar22 & 0xff0000) << 0x18 |
                 (uVar22 & 0xff00) << 0x28 | uVar22 << 0x38;
      puVar18 = (ulonglong *)((longlong)puVar18 + lVar20);
      lVar16 = lVar23 + 1;
      lVar23 = lVar23 + 1;
      uVar19 = (uVar19 << ((byte)local_178 & 0x3f) | (longlong)aiStack_104[lVar16]) <<
               ((byte)uVar24 & 0x3f) | (ulonglong)(uVar21 - uVar6);
      lVar14 = lVar14 + ((lVar20 * 8 - (longlong)(int)uVar24) - (longlong)(int)local_178);
      uVar6 = uVar21;
    } while (lVar23 < lVar13);
  }
  uVar22 = uVar19 << ((char)lVar14 + 1U & 0x3f);
  lVar13 = 0x3f - lVar14 >> 3;
  *puVar18 = uVar22 >> 0x38 | (uVar22 & 0xff000000000000) >> 0x28 |
             (uVar22 & 0xff0000000000) >> 0x18 | (uVar22 & 0xff00000000) >> 8 |
             (uVar22 & 0xff000000) << 8 | (uVar22 & 0xff0000) << 0x18 | (uVar22 & 0xff00) << 0x28 |
             uVar22 << 0x38;
  puVar18 = (ulonglong *)((longlong)puVar18 + lVar13);
  lVar14 = lVar14 + lVar13 * 8;
  puVar17 = auStack_198;
  if (param_7) {
    uVar19 = uVar19 << ((byte)local_178 & 0x3f) | (longlong)aiStack_104[param_6];
    lVar14 = lVar14 - (int)local_178;
    puVar17 = auStack_198;
  }
LAB_14ff5384d:
  lVar13 = 0x3f - lVar14 >> 3;
  uVar22 = uVar19 << ((char)lVar14 + 1U & 0x3f);
  *puVar18 = uVar22 >> 0x38 | (uVar22 & 0xff000000000000) >> 0x28 |
             (uVar22 & 0xff0000000000) >> 0x18 | (uVar22 & 0xff00000000) >> 8 |
             (uVar22 & 0xff000000) << 8 | (uVar22 & 0xff0000) << 0x18 | (uVar22 & 0xff00) << 0x28 |
             uVar22 << 0x38;
  local_130->m_inv_bitlen = lVar14 + lVar13 * 8;
  local_130->m_cur = (uchar *)(lVar13 + (longlong)puVar18);
  local_130->m_end = local_128;
  local_130->m_bits = uVar19;
  *(undefined8 *)(puVar17 + -8) = 0x14ff53891;
  return;
}

// rrTANS_UnPackCounts4 @ 14ff538c0

int __cdecl
oo2net::rrTANS_UnPackCounts4
          (int param_1,int param_2,uint *param_3,ulong64 *param_4,long64 *param_5,uchar **param_6,
          uchar **param_7,bool param_8)

{
  ulonglong *puVar1;
  ulong64 uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  char *pcVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  int local_res8;
  uint local_res10;
  
  memset(param_3,0,(longlong)param_2 * 4);
  uVar12 = 0;
  uVar24 = 0;
  if ((uint)param_2 < 2) {
    local_res8 = 0;
  }
  else {
    local_res8 = 0x1f;
    if (param_2 - 1U != 0) {
      for (; param_2 - 1U >> local_res8 == 0; local_res8 = local_res8 + -1) {
      }
    }
    local_res8 = local_res8 + 1;
  }
  bVar7 = (byte)param_1;
  uVar4 = 1 << (bVar7 & 0x1f);
  puVar1 = (ulonglong *)*param_6;
  lVar8 = (longlong)*param_7 - (longlong)puVar1;
  lVar18 = *param_5 >> 3;
  if (lVar8 < 8) {
    uVar23 = uVar12;
    if (0 < lVar8) {
      uVar23 = (ulonglong)(byte)*puVar1;
    }
    uVar15 = uVar12;
    if (lVar8 != 1 && -1 < lVar8 + -1) {
      uVar15 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
    }
    uVar14 = uVar12;
    if (lVar8 != 2 && -1 < lVar8 + -2) {
      uVar14 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
    }
    uVar6 = uVar12;
    if (lVar8 != 3 && -1 < lVar8 + -3) {
      uVar6 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
    }
    lVar8 = (longlong)*param_7 - ((longlong)puVar1 + 4);
    uVar16 = uVar12;
    if (0 < lVar8) {
      uVar16 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
    }
    uVar5 = uVar12;
    if (lVar8 != 1 && -1 < lVar8 + -1) {
      uVar5 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
    }
    uVar10 = uVar12;
    if (lVar8 != 2 && -1 < lVar8 + -2) {
      uVar10 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
    }
    uVar11 = uVar12;
    if (lVar8 != 3 && -1 < lVar8 + -3) {
      uVar11 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
    }
    uVar11 = ((((((uVar23 << 8 | uVar15) << 8 | uVar14) << 8 | uVar6) << 8 | uVar16) << 8 | uVar5)
              << 8 | uVar10) << 8 | uVar11;
  }
  else {
    uVar23 = *puVar1;
    uVar11 = uVar23 >> 0x38 | (uVar23 & 0xff000000000000) >> 0x28 |
             (uVar23 & 0xff0000000000) >> 0x18 | (uVar23 & 0xff00000000) >> 8 |
             (uVar23 & 0xff000000) << 8 | (uVar23 & 0xff0000) << 0x18 | (uVar23 & 0xff00) << 0x28 |
             uVar23 << 0x38;
  }
  *param_4 = *param_4 | uVar11 >> (0x3fU - (char)*param_5 & 0x3f);
  *param_6 = *param_6 + lVar18;
  *param_5 = *param_5 + lVar18 * -8;
  uVar2 = *param_4;
  *param_4 = uVar2 * 8;
  *param_5 = *param_5 + 3;
  uVar17 = (uint)(uVar2 >> 0x20);
  if (uVar17 >> 0x1d == 0) {
    return (uVar17 >> 0x1d) + 1;
  }
  bVar3 = (byte)local_res8;
  if (uVar17 >> 0x1d == 1) {
    puVar1 = (ulonglong *)*param_6;
    lVar8 = (longlong)*param_7 - (longlong)puVar1;
    lVar18 = *param_5 >> 3;
    if (lVar8 < 8) {
      uVar23 = uVar12;
      if (0 < lVar8) {
        uVar23 = (ulonglong)(byte)*puVar1;
      }
      uVar15 = uVar12;
      if (lVar8 != 1 && -1 < lVar8 + -1) {
        uVar15 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
      }
      uVar14 = uVar12;
      if (lVar8 != 2 && -1 < lVar8 + -2) {
        uVar14 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
      }
      uVar6 = uVar12;
      if (lVar8 != 3 && -1 < lVar8 + -3) {
        uVar6 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
      }
      lVar8 = (longlong)*param_7 - ((longlong)puVar1 + 4);
      uVar16 = uVar12;
      if (0 < lVar8) {
        uVar16 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
      }
      uVar5 = uVar12;
      if (lVar8 != 1 && -1 < lVar8 + -1) {
        uVar5 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
      }
      uVar10 = uVar12;
      if (lVar8 != 2 && -1 < lVar8 + -2) {
        uVar10 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
      }
      if (lVar8 != 3 && -1 < lVar8 + -3) {
        uVar12 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
      }
      uVar12 = ((((((uVar23 << 8 | uVar15) << 8 | uVar14) << 8 | uVar6) << 8 | uVar16) << 8 | uVar5)
                << 8 | uVar10) << 8 | uVar12;
    }
    else {
      uVar12 = *puVar1;
      uVar12 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
               (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
               (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28
               | uVar12 << 0x38;
    }
    *param_4 = *param_4 | uVar12 >> (0x3fU - (char)*param_5 & 0x3f);
    *param_6 = *param_6 + lVar18;
    *param_5 = *param_5 + lVar18 * -8;
    uVar12 = *param_4 >> (-bVar3 & 0x3f);
    *param_4 = *param_4 << (bVar3 & 0x3f);
    *param_5 = *param_5 + (longlong)local_res8;
    if (uVar12 < (ulonglong)(longlong)param_2) {
      if (param_8) {
        param_3[uVar12] = uVar4;
        return 1;
      }
      uVar23 = *param_4;
      *param_4 = uVar23 << (bVar7 & 0x3f);
      *param_5 = *param_5 + (longlong)param_1;
      param_3[uVar12] = (uint)(uVar23 >> (0x40 - bVar7 & 0x3f));
      return 1;
    }
    ooLogErrorPre();
    if (g_fp_OodleNet_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14ff54092;
    pcVar20 = "OODLE ERROR :  sym >= (RR_VARBITSTYPE)max_alphabet\n";
    iVar21 = 0x2ed;
  }
  else {
    iVar21 = 0x1f;
    if (param_1 != 0) {
      for (; (uint)param_1 >> iVar21 == 0; iVar21 = iVar21 + -1) {
      }
    }
    uVar19 = uVar24;
    if (param_1 != 0) {
      uVar19 = iVar21 + 1;
    }
    uVar23 = *param_4 >> (-(byte)uVar19 & 0x3f);
    *param_4 = *param_4 << ((byte)uVar19 & 0x3f);
    lVar8 = *param_5 + (ulonglong)uVar19;
    *param_5 = lVar8;
    iVar21 = (int)uVar23;
    if (param_1 < iVar21) {
      ooLogErrorPre();
      if (g_fp_OodleNet_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14ff54092;
      pcVar20 = "OODLE ERROR : max_delta_bits > L_bits\n";
      iVar21 = 0x303;
    }
    else {
      iVar22 = (uVar17 >> 0x1d) - 1;
      local_res10 = 0;
      bVar7 = (byte)uVar23;
      if (0 < iVar22) {
        uVar23 = uVar12;
        uVar15 = uVar12;
        do {
          puVar1 = (ulonglong *)*param_6;
          lVar18 = *param_5 >> 3;
          lVar8 = (longlong)*param_7 - (longlong)puVar1;
          if (lVar8 < 8) {
            uVar14 = uVar12;
            if (0 < lVar8) {
              uVar14 = (ulonglong)(byte)*puVar1;
            }
            uVar6 = uVar12;
            if (lVar8 != 1 && -1 < lVar8 + -1) {
              uVar6 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
            }
            uVar16 = uVar12;
            if (lVar8 != 2 && -1 < lVar8 + -2) {
              uVar16 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
            }
            uVar5 = uVar12;
            if (lVar8 != 3 && -1 < lVar8 + -3) {
              uVar5 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
            }
            lVar8 = (longlong)*param_7 - ((longlong)puVar1 + 4);
            uVar10 = uVar12;
            if (0 < lVar8) {
              uVar10 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
            }
            uVar11 = uVar12;
            if (lVar8 != 1 && -1 < lVar8 + -1) {
              uVar11 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
            }
            uVar9 = uVar12;
            if (lVar8 != 2 && -1 < lVar8 + -2) {
              uVar9 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
            }
            uVar13 = uVar12;
            if (lVar8 != 3 && -1 < lVar8 + -3) {
              uVar13 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
            }
            uVar13 = ((((((uVar14 << 8 | uVar6) << 8 | uVar16) << 8 | uVar5) << 8 | uVar10) << 8 |
                      uVar11) << 8 | uVar9) << 8 | uVar13;
          }
          else {
            uVar14 = *puVar1;
            uVar13 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
                     (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
                     (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 |
                     (uVar14 & 0xff00) << 0x28 | uVar14 << 0x38;
          }
          *param_4 = *param_4 | uVar13 >> (0x3fU - (char)*param_5 & 0x3f);
          *param_6 = *param_6 + lVar18;
          *param_5 = *param_5 + lVar18 * -8;
          uVar14 = *param_4;
          *param_4 = uVar14 << (bVar3 & 0x3f);
          *param_5 = *param_5 + (longlong)local_res8;
          uVar6 = *param_4;
          *param_4 = uVar6 << (bVar7 & 0x3f);
          *param_5 = *param_5 + (longlong)iVar21;
          local_res10 = local_res10 + (int)(uVar6 >> (0x40 - bVar7 & 0x3f));
          if (uVar4 <= local_res10) {
            ooLogErrorPre();
            if (g_fp_OodleNet_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14ff54092;
            pcVar20 = "OODLE ERROR : cur >= L\n";
            iVar21 = 0x316;
            goto LAB_14ff54087;
          }
          uVar24 = (int)uVar15 + local_res10;
          uVar15 = (ulonglong)uVar24;
          uVar17 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar17;
          param_3[(int)(uVar14 >> (0x40 - bVar3 & 0x3f))] = local_res10;
        } while ((int)uVar17 < iVar22);
        lVar8 = *param_5;
      }
      puVar1 = (ulonglong *)*param_6;
      lVar18 = (longlong)*param_7 - (longlong)puVar1;
      if (lVar18 < 8) {
        uVar23 = uVar12;
        if (0 < lVar18) {
          uVar23 = (ulonglong)(byte)*puVar1;
        }
        uVar15 = uVar12;
        if (lVar18 != 1 && -1 < lVar18 + -1) {
          uVar15 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
        }
        uVar14 = uVar12;
        if (lVar18 != 2 && -1 < lVar18 + -2) {
          uVar14 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
        }
        uVar6 = uVar12;
        if (lVar18 != 3 && -1 < lVar18 + -3) {
          uVar6 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
        }
        lVar18 = (longlong)*param_7 - ((longlong)puVar1 + 4);
        uVar16 = uVar12;
        if (0 < lVar18) {
          uVar16 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
        }
        uVar5 = uVar12;
        if (lVar18 != 1 && -1 < lVar18 + -1) {
          uVar5 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
        }
        uVar10 = uVar12;
        if (lVar18 != 2 && -1 < lVar18 + -2) {
          uVar10 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
        }
        if (lVar18 != 3 && -1 < lVar18 + -3) {
          uVar12 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
        }
        uVar12 = ((((((uVar23 << 8 | uVar15) << 8 | uVar14) << 8 | uVar6) << 8 | uVar16) << 8 |
                  uVar5) << 8 | uVar10) << 8 | uVar12;
      }
      else {
        uVar12 = *puVar1;
        uVar12 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
                 (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
                 (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
                 (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38;
      }
      *param_4 = *param_4 | uVar12 >> (0x3fU - (char)lVar8 & 0x3f);
      *param_6 = *param_6 + (lVar8 >> 3);
      *param_5 = *param_5 + (lVar8 >> 3) * -8;
      uVar12 = *param_4;
      *param_4 = uVar12 << (bVar3 & 0x3f);
      *param_5 = *param_5 + (longlong)local_res8;
      if (!param_8) {
        uVar23 = *param_4;
        *param_4 = uVar23 << (bVar7 & 0x3f);
        *param_5 = *param_5 + (longlong)iVar21;
        uVar4 = (int)(uVar23 >> (0x40 - bVar7 & 0x3f)) + local_res10;
LAB_14ff540c5:
        param_3[(int)(uVar12 >> (-bVar3 & 0x3f))] = uVar4;
        return 1;
      }
      if (uVar24 < uVar4) {
        uVar4 = uVar4 - uVar24;
        if (local_res10 <= uVar4) goto LAB_14ff540c5;
        ooLogErrorPre();
        if (g_fp_OodleNet_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14ff54092;
        pcVar20 = "OODLE ERROR : last < prev\n";
        iVar21 = 0x32f;
      }
      else {
        ooLogErrorPre();
        if (g_fp_OodleNet_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14ff54092;
        pcVar20 = "OODLE ERROR : sum >= L\n";
        iVar21 = 0x327;
      }
    }
  }
LAB_14ff54087:
  (*g_fp_OodleNet_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",iVar21,pcVar20);
LAB_14ff54092:
  ooLogErrorPost();
  return 0;
}

// rrTANS_UnPackCounts8 @ 14ff54100

int __cdecl
oo2net::rrTANS_UnPackCounts8
          (int param_1,int param_2,uint *param_3,ulong64 *param_4,long64 *param_5,uchar **param_6,
          uchar **param_7,bool param_8)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulong64 uVar3;
  byte bVar4;
  long64 *plVar5;
  uchar **ppuVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  char *pcVar27;
  int iVar28;
  int local_res8;
  
  ppuVar6 = param_6;
  plVar5 = param_5;
  if ((uint)param_2 < 2) {
    iVar19 = 0;
  }
  else {
    iVar19 = 0x1f;
    if (param_2 - 1U != 0) {
      for (; param_2 - 1U >> iVar19 == 0; iVar19 = iVar19 + -1) {
      }
    }
    iVar19 = iVar19 + 1;
  }
  uVar1 = *param_4;
  *param_4 = uVar1 * 4;
  *param_5 = *param_5 + 2;
  puVar2 = (ulonglong *)*param_6;
  lVar21 = *param_5 >> 3;
  lVar26 = (longlong)*param_7 - (longlong)puVar2;
  if (lVar26 < 8) {
    if (lVar26 < 1) {
      uVar16 = 0;
    }
    else {
      uVar16 = (ulonglong)(byte)*puVar2;
    }
    if (lVar26 == 1 || lVar26 + -1 < 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
    }
    if (lVar26 == 2 || lVar26 + -2 < 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
    }
    if (lVar26 == 3 || lVar26 + -3 < 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
    }
    lVar26 = (longlong)*param_7 - ((longlong)puVar2 + 4);
    if (lVar26 < 1) {
      uVar24 = 0;
    }
    else {
      uVar24 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
    }
    if (lVar26 == 1 || lVar26 + -1 < 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
    }
    if (lVar26 == 2 || lVar26 + -2 < 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
    }
    if (lVar26 == 3 || lVar26 + -3 < 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
    }
    uVar15 = ((((((uVar16 << 8 | uVar18) << 8 | uVar10) << 8 | uVar7) << 8 | uVar24) << 8 | uVar8)
              << 8 | uVar14) << 8 | uVar15;
  }
  else {
    uVar16 = *puVar2;
    uVar15 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
             (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
             (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 | (uVar16 & 0xff00) << 0x28 |
             uVar16 << 0x38;
  }
  *param_4 = *param_4 | uVar15 >> (0x3fU - (char)*param_5 & 0x3f);
  *param_6 = *param_6 + lVar21;
  *param_5 = *param_5 + lVar21 * -8;
  uVar3 = *param_4;
  *param_4 = uVar3 * 2;
  *param_5 = *param_5 + 1;
  lVar21 = *param_5;
  local_res8 = 0;
  param_5._0_4_ = 0;
  param_6._0_4_ = iVar19 * 4;
  if ((longlong)uVar3 < 0) goto LAB_14ff5488f;
  do {
    uVar16 = *param_4;
    if (uVar16 == 0) {
LAB_14ff54308:
      uVar18 = 0;
      uVar16 = uVar18;
      while( true ) {
        lVar21 = *plVar5;
        while( true ) {
          puVar2 = (ulonglong *)*ppuVar6;
          lVar26 = (longlong)*param_7 - (longlong)puVar2;
          lVar22 = lVar21 >> 3;
          if (lVar26 < 8) {
            uVar10 = uVar18;
            if (0 < lVar26) {
              uVar10 = (ulonglong)(byte)*puVar2;
            }
            uVar7 = uVar18;
            if (lVar26 != 1 && -1 < lVar26 + -1) {
              uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
            }
            uVar24 = uVar18;
            if (lVar26 != 2 && -1 < lVar26 + -2) {
              uVar24 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
            }
            uVar8 = uVar18;
            if (lVar26 != 3 && -1 < lVar26 + -3) {
              uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
            }
            lVar21 = (longlong)*param_7 - ((longlong)puVar2 + 4);
            uVar14 = uVar18;
            if (0 < lVar21) {
              uVar14 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
            }
            uVar15 = uVar18;
            if (lVar21 != 1 && -1 < lVar21 + -1) {
              uVar15 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
            }
            uVar13 = uVar18;
            if (lVar21 != 2 && -1 < lVar21 + -2) {
              uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
            }
            uVar9 = uVar18;
            if (lVar21 != 3 && -1 < lVar21 + -3) {
              uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
            }
            lVar21 = *plVar5;
            uVar9 = ((((((uVar10 << 8 | uVar7) << 8 | uVar24) << 8 | uVar8) << 8 | uVar14) << 8 |
                     uVar15) << 8 | uVar13) << 8 | uVar9;
          }
          else {
            uVar10 = *puVar2;
            uVar9 = uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
                    (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
                    (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
                    (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38;
          }
          *param_4 = *param_4 | uVar9 >> (0x3fU - (char)lVar21 & 0x3f);
          *ppuVar6 = *ppuVar6 + lVar22;
          lVar26 = *plVar5 + lVar22 * -8;
          *plVar5 = lVar26;
          uVar10 = *param_4;
          iVar19 = (int)uVar16;
          if (uVar10 != 0) break;
          *param_4 = 0;
          lVar26 = 0x3f - lVar26;
          lVar21 = *plVar5 + lVar26;
          uVar16 = (ulonglong)(uint)(iVar19 + (int)lVar26);
          *plVar5 = lVar21;
          if (*param_7 <= *ppuVar6) {
            ooLogErrorPre();
            if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            {
              (*g_fp_OodleNet_Plugin_Printf)
                        (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                         "OODLE ERROR : corruption : ReadUnary past end\n");
            }
            ooLogErrorPost();
            lVar21 = *plVar5;
            iVar19 = 0;
            goto LAB_14ff5460f;
          }
        }
        lVar21 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        uVar20 = -(int)lVar21 + 0x3f;
        if (uVar20 < 0x1f) break;
        *param_4 = uVar10 << 0x1f;
        *plVar5 = *plVar5 + 0x1f;
        uVar16 = (ulonglong)(iVar19 + 0x1f);
      }
      uVar12 = -(int)lVar21 + 0x40;
      *param_4 = uVar10 << ((byte)uVar12 & 0x3f);
      *plVar5 = *plVar5 + (ulonglong)uVar12;
      lVar21 = *plVar5;
      uVar20 = iVar19 + uVar20;
      iVar19 = 0;
      if (uVar20 != 0) {
        puVar2 = (ulonglong *)*ppuVar6;
        lVar26 = (longlong)*param_7 - (longlong)puVar2;
        if (lVar26 < 8) {
          if (lVar26 < 1) {
            uVar16 = 0;
          }
          else {
            uVar16 = (ulonglong)(byte)*puVar2;
          }
          if (lVar26 == 1 || lVar26 + -1 < 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
          }
          if (lVar26 == 2 || lVar26 + -2 < 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
          }
          if (lVar26 == 3 || lVar26 + -3 < 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
          }
          lVar26 = (longlong)*param_7 - ((longlong)puVar2 + 4);
          if (lVar26 < 1) {
            uVar24 = 0;
          }
          else {
            uVar24 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
          }
          if (lVar26 == 1 || lVar26 + -1 < 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
          }
          if (lVar26 == 2 || lVar26 + -2 < 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
          }
          if (lVar26 == 3 || lVar26 + -3 < 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
          }
          uVar15 = ((((((uVar16 << 8 | uVar18) << 8 | uVar10) << 8 | uVar7) << 8 | uVar24) << 8 |
                    uVar8) << 8 | uVar14) << 8 | uVar15;
        }
        else {
          uVar16 = *puVar2;
          uVar15 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                   (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                   (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                   (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
        }
        *param_4 = *param_4 | uVar15 >> (0x3fU - (char)lVar21 & 0x3f);
        bVar4 = (byte)uVar20;
        *ppuVar6 = *ppuVar6 + (lVar21 >> 3);
        *plVar5 = *plVar5 + (lVar21 >> 3) * -8;
        uVar16 = *param_4;
        *param_4 = uVar16 << (bVar4 & 0x3f);
        *plVar5 = *plVar5 + (ulonglong)uVar20;
        lVar21 = *plVar5;
        iVar19 = ((1 << (bVar4 & 0x1f)) + (int)(uVar16 >> (0x40 - bVar4 & 0x3f))) * 2 + -2;
      }
LAB_14ff5460f:
      puVar2 = (ulonglong *)*ppuVar6;
      lVar26 = (longlong)*param_7 - (longlong)puVar2;
      if (lVar26 < 8) {
        if (lVar26 < 1) {
          uVar16 = 0;
        }
        else {
          uVar16 = (ulonglong)(byte)*puVar2;
        }
        if (lVar26 == 1 || lVar26 + -1 < 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
        }
        if (lVar26 == 2 || lVar26 + -2 < 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
        }
        if (lVar26 == 3 || lVar26 + -3 < 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
        }
        lVar26 = (longlong)*param_7 - ((longlong)puVar2 + 4);
        if (lVar26 < 1) {
          uVar24 = 0;
        }
        else {
          uVar24 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
        }
        if (lVar26 == 1 || lVar26 + -1 < 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
        }
        if (lVar26 == 2 || lVar26 + -2 < 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
        }
        if (lVar26 == 3 || lVar26 + -3 < 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
        }
        uVar15 = ((((((uVar16 << 8 | uVar18) << 8 | uVar10) << 8 | uVar7) << 8 | uVar24) << 8 |
                  uVar8) << 8 | uVar14) << 8 | uVar15;
      }
      else {
        uVar16 = *puVar2;
        uVar15 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                 (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                 (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                 (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
      }
      *param_4 = *param_4 | uVar15 >> (0x3fU - (char)lVar21 & 0x3f);
      *ppuVar6 = *ppuVar6 + (lVar21 >> 3);
      *plVar5 = *plVar5 + (lVar21 >> 3) * -8;
      uVar3 = *param_4;
      *param_4 = uVar3 * 2;
      *plVar5 = *plVar5 + 1;
      iVar19 = iVar19 - (int)((longlong)uVar3 >> 0x3f);
    }
    else {
      lVar21 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar19 = (0x40 - (int)lVar21) * 2;
      if (0x1e < iVar19) goto LAB_14ff54308;
      *param_4 = uVar16 << ((byte)iVar19 & 0x3f);
      *plVar5 = *plVar5 + (longlong)iVar19;
      iVar19 = (int)(uVar16 >> (0x40 - (byte)iVar19 & 0x3f)) + -2;
    }
    uVar20 = iVar19 + 1;
    if ((uint)(param_2 - local_res8) < uVar20) {
      ooLogErrorPre();
      if (g_fp_OodleNet_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014ff55460;
      iVar19 = 0x422;
LAB_14ff5544b:
      pcVar27 = "OODLE ERROR : i + RunLen > packNumSymbols \n";
LAB_14ff55452:
      (*g_fp_OodleNet_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",iVar19,pcVar27);
code_r0x00014ff55460:
      ooLogErrorPost();
      return 0;
    }
    memset(param_3 + local_res8,0,(longlong)(int)uVar20 << 2);
    local_res8 = local_res8 + uVar20;
    if (param_2 <= local_res8) break;
    puVar2 = (ulonglong *)*ppuVar6;
    lVar26 = *plVar5 >> 3;
    lVar21 = (longlong)*param_7 - (longlong)puVar2;
    if (lVar21 < 8) {
      if (lVar21 < 1) {
        uVar16 = 0;
      }
      else {
        uVar16 = (ulonglong)(byte)*puVar2;
      }
      if (lVar21 == 1 || lVar21 + -1 < 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
      }
      if (lVar21 == 2 || lVar21 + -2 < 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
      }
      if (lVar21 == 3 || lVar21 + -3 < 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
      }
      lVar21 = (longlong)*param_7 - ((longlong)puVar2 + 4);
      if (lVar21 < 1) {
        uVar24 = 0;
      }
      else {
        uVar24 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
      }
      if (lVar21 == 1 || lVar21 + -1 < 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
      }
      if (lVar21 == 2 || lVar21 + -2 < 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
      }
      if (lVar21 == 3 || lVar21 + -3 < 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
      }
      uVar15 = ((((((uVar16 << 8 | uVar18) << 8 | uVar10) << 8 | uVar7) << 8 | uVar24) << 8 | uVar8)
                << 8 | uVar14) << 8 | uVar15;
    }
    else {
      uVar16 = *puVar2;
      uVar15 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
               (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
               (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 | (uVar16 & 0xff00) << 0x28
               | uVar16 << 0x38;
    }
    *param_4 = *param_4 | uVar15 >> (0x3fU - (char)*plVar5 & 0x3f);
    *ppuVar6 = *ppuVar6 + lVar26;
    *plVar5 = *plVar5 + lVar26 * -8;
    lVar21 = *plVar5;
LAB_14ff5488f:
    uVar16 = *param_4;
    if (uVar16 == 0) {
LAB_14ff548cf:
      uVar18 = 0;
      uVar16 = uVar18;
      do {
        while( true ) {
          puVar2 = (ulonglong *)*ppuVar6;
          lVar26 = (longlong)*param_7 - (longlong)puVar2;
          lVar22 = lVar21 >> 3;
          if (lVar26 < 8) {
            uVar10 = uVar18;
            if (0 < lVar26) {
              uVar10 = (ulonglong)(byte)*puVar2;
            }
            uVar7 = uVar18;
            if (lVar26 != 1 && -1 < lVar26 + -1) {
              uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
            }
            uVar24 = uVar18;
            if (lVar26 != 2 && -1 < lVar26 + -2) {
              uVar24 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
            }
            uVar8 = uVar18;
            if (lVar26 != 3 && -1 < lVar26 + -3) {
              uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
            }
            lVar21 = (longlong)*param_7 - ((longlong)puVar2 + 4);
            uVar14 = uVar18;
            if (0 < lVar21) {
              uVar14 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
            }
            uVar15 = uVar18;
            if (lVar21 != 1 && -1 < lVar21 + -1) {
              uVar15 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
            }
            uVar13 = uVar18;
            if (lVar21 != 2 && -1 < lVar21 + -2) {
              uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
            }
            uVar9 = uVar18;
            if (lVar21 != 3 && -1 < lVar21 + -3) {
              uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
            }
            lVar21 = *plVar5;
            uVar9 = ((((((uVar10 << 8 | uVar7) << 8 | uVar24) << 8 | uVar8) << 8 | uVar14) << 8 |
                     uVar15) << 8 | uVar13) << 8 | uVar9;
          }
          else {
            uVar10 = *puVar2;
            uVar9 = uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
                    (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
                    (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
                    (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38;
          }
          *param_4 = *param_4 | uVar9 >> (0x3fU - (char)lVar21 & 0x3f);
          *ppuVar6 = *ppuVar6 + lVar22;
          lVar26 = *plVar5 + lVar22 * -8;
          *plVar5 = lVar26;
          uVar10 = *param_4;
          iVar19 = (int)uVar16;
          if (uVar10 == 0) break;
          lVar21 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          uVar20 = -(int)lVar21 + 0x3f;
          if (uVar20 < 0x1f) {
            uVar12 = -(int)lVar21 + 0x40;
            *param_4 = uVar10 << ((byte)uVar12 & 0x3f);
            *plVar5 = *plVar5 + (ulonglong)uVar12;
            lVar21 = *plVar5;
            uVar20 = iVar19 + uVar20;
            iVar19 = 0;
            if (uVar20 != 0) {
              puVar2 = (ulonglong *)*ppuVar6;
              lVar26 = (longlong)*param_7 - (longlong)puVar2;
              if (lVar26 < 8) {
                if (lVar26 < 1) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = (ulonglong)(byte)*puVar2;
                }
                if (lVar26 == 1 || lVar26 + -1 < 0) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
                }
                if (lVar26 == 2 || lVar26 + -2 < 0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
                }
                if (lVar26 == 3 || lVar26 + -3 < 0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
                }
                lVar26 = (longlong)*param_7 - ((longlong)puVar2 + 4);
                if (lVar26 < 1) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
                }
                if (lVar26 == 1 || lVar26 + -1 < 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
                }
                if (lVar26 == 2 || lVar26 + -2 < 0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
                }
                if (lVar26 == 3 || lVar26 + -3 < 0) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
                }
                uVar15 = ((((((uVar16 << 8 | uVar18) << 8 | uVar10) << 8 | uVar7) << 8 | uVar24) <<
                           8 | uVar8) << 8 | uVar14) << 8 | uVar15;
              }
              else {
                uVar16 = *puVar2;
                uVar15 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                         (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                         (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                         (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
              }
              *param_4 = *param_4 | uVar15 >> (0x3fU - (char)lVar21 & 0x3f);
              bVar4 = (byte)uVar20;
              *ppuVar6 = *ppuVar6 + (lVar21 >> 3);
              *plVar5 = *plVar5 + (lVar21 >> 3) * -8;
              uVar16 = *param_4;
              *param_4 = uVar16 << (bVar4 & 0x3f);
              *plVar5 = *plVar5 + (ulonglong)uVar20;
              lVar21 = *plVar5;
              iVar19 = ((1 << (bVar4 & 0x1f)) + (int)(uVar16 >> (0x40 - bVar4 & 0x3f))) * 2 + -2;
            }
            goto LAB_14ff54be2;
          }
          *param_4 = uVar10 << 0x1f;
          *plVar5 = *plVar5 + 0x1f;
          lVar21 = *plVar5;
          uVar16 = (ulonglong)(iVar19 + 0x1f);
        }
        *param_4 = 0;
        lVar26 = 0x3f - lVar26;
        lVar21 = *plVar5 + lVar26;
        uVar16 = (ulonglong)(uint)(iVar19 + (int)lVar26);
        *plVar5 = lVar21;
      } while (*ppuVar6 < *param_7);
      ooLogErrorPre();
      if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*g_fp_OodleNet_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                   "OODLE ERROR : corruption : ReadUnary past end\n");
      }
      ooLogErrorPost();
      lVar21 = *plVar5;
      iVar19 = 0;
LAB_14ff54be2:
      puVar2 = (ulonglong *)*ppuVar6;
      lVar26 = (longlong)*param_7 - (longlong)puVar2;
      if (lVar26 < 8) {
        if (lVar26 < 1) {
          uVar16 = 0;
        }
        else {
          uVar16 = (ulonglong)(byte)*puVar2;
        }
        if (lVar26 == 1 || lVar26 + -1 < 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
        }
        if (lVar26 == 2 || lVar26 + -2 < 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
        }
        if (lVar26 == 3 || lVar26 + -3 < 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
        }
        lVar26 = (longlong)*param_7 - ((longlong)puVar2 + 4);
        if (lVar26 < 1) {
          uVar24 = 0;
        }
        else {
          uVar24 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
        }
        if (lVar26 == 1 || lVar26 + -1 < 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
        }
        if (lVar26 == 2 || lVar26 + -2 < 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
        }
        if (lVar26 == 3 || lVar26 + -3 < 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
        }
        uVar15 = ((((((uVar16 << 8 | uVar18) << 8 | uVar10) << 8 | uVar7) << 8 | uVar24) << 8 |
                  uVar8) << 8 | uVar14) << 8 | uVar15;
      }
      else {
        uVar16 = *puVar2;
        uVar15 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                 (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                 (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                 (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
      }
      *param_4 = *param_4 | uVar15 >> (0x3fU - (char)lVar21 & 0x3f);
      *ppuVar6 = *ppuVar6 + (lVar21 >> 3);
      *plVar5 = *plVar5 + (lVar21 >> 3) * -8;
      uVar3 = *param_4;
      *param_4 = uVar3 * 2;
      *plVar5 = *plVar5 + 1;
      iVar19 = iVar19 - (int)((longlong)uVar3 >> 0x3f);
    }
    else {
      lVar26 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar19 = (0x40 - (int)lVar26) * 2;
      if (0x1e < iVar19) goto LAB_14ff548cf;
      *param_4 = uVar16 << ((byte)iVar19 & 0x3f);
      *plVar5 = *plVar5 + (longlong)iVar19;
      iVar19 = (int)(uVar16 >> (0x40 - (byte)iVar19 & 0x3f)) + -2;
    }
    iVar19 = iVar19 + 1;
    if (param_2 < iVar19 + local_res8) {
      ooLogErrorPre();
      if (g_fp_OodleNet_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014ff55460;
      iVar19 = 0x440;
      goto LAB_14ff5544b;
    }
    iVar28 = 0;
    if (0 < iVar19) {
      bVar4 = (byte)(uVar1 >> 0x38);
      lVar21 = (longlong)local_res8;
      do {
        puVar2 = (ulonglong *)*ppuVar6;
        lVar22 = *plVar5 >> 3;
        lVar26 = (longlong)*param_7 - (longlong)puVar2;
        if (lVar26 < 8) {
          if (lVar26 < 1) {
            uVar16 = 0;
          }
          else {
            uVar16 = (ulonglong)(byte)*puVar2;
          }
          if (lVar26 == 1 || lVar26 + -1 < 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
          }
          if (lVar26 == 2 || lVar26 + -2 < 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
          }
          if (lVar26 == 3 || lVar26 + -3 < 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
          }
          lVar26 = (longlong)*param_7 - ((longlong)puVar2 + 4);
          if (lVar26 < 1) {
            uVar24 = 0;
          }
          else {
            uVar24 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
          }
          if (lVar26 == 1 || lVar26 + -1 < 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
          }
          if (lVar26 == 2 || lVar26 + -2 < 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
          }
          if (lVar26 == 3 || lVar26 + -3 < 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
          }
          uVar15 = ((((((uVar16 << 8 | uVar18) << 8 | uVar10) << 8 | uVar7) << 8 | uVar24) << 8 |
                    uVar8) << 8 | uVar14) << 8 | uVar15;
        }
        else {
          uVar16 = *puVar2;
          uVar15 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                   (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                   (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                   (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
        }
        *param_4 = *param_4 | uVar15 >> (0x3fU - (char)*plVar5 & 0x3f);
        *ppuVar6 = *ppuVar6 + lVar22;
        lVar26 = *plVar5 + lVar22 * -8;
        *plVar5 = lVar26;
        uVar16 = *param_4;
        if (uVar16 == 0) {
          iVar25 = 0x40;
        }
        else {
          lVar22 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar25 = 0x3f - (int)lVar22;
        }
        uVar20 = (uint)(uVar1 >> 0x3e) + 1 + iVar25;
        if (uVar20 < 0x1f) {
          iVar25 = iVar25 + -1;
          iVar17 = (int)(uVar16 >> (0x40 - (byte)uVar20 & 0x3f));
          *param_4 = uVar16 << ((byte)uVar20 & 0x3f);
          *plVar5 = *plVar5 + (ulonglong)uVar20;
        }
        else {
          uVar18 = 0;
          iVar25 = 0;
          uVar16 = uVar18;
          do {
            while( true ) {
              puVar2 = (ulonglong *)*ppuVar6;
              lVar22 = (longlong)*param_7 - (longlong)puVar2;
              lVar23 = lVar26 >> 3;
              if (lVar22 < 8) {
                uVar10 = uVar18;
                if (0 < lVar22) {
                  uVar10 = (ulonglong)(byte)*puVar2;
                }
                uVar7 = uVar18;
                if (lVar22 != 1 && -1 < lVar22 + -1) {
                  uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
                }
                uVar24 = uVar18;
                if (lVar22 != 2 && -1 < lVar22 + -2) {
                  uVar24 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
                }
                uVar8 = uVar18;
                if (lVar22 != 3 && -1 < lVar22 + -3) {
                  uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
                }
                lVar26 = (longlong)*param_7 - ((longlong)puVar2 + 4);
                uVar14 = uVar18;
                if (0 < lVar26) {
                  uVar14 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
                }
                uVar15 = uVar18;
                if (lVar26 != 1 && -1 < lVar26 + -1) {
                  uVar15 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
                }
                uVar13 = uVar18;
                if (lVar26 != 2 && -1 < lVar26 + -2) {
                  uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
                }
                uVar9 = uVar18;
                if (lVar26 != 3 && -1 < lVar26 + -3) {
                  uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
                }
                lVar26 = *plVar5;
                uVar9 = ((((((uVar10 << 8 | uVar7) << 8 | uVar24) << 8 | uVar8) << 8 | uVar14) << 8
                         | uVar15) << 8 | uVar13) << 8 | uVar9;
              }
              else {
                uVar10 = *puVar2;
                uVar9 = uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
                        (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
                        (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
                        (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38;
              }
              *param_4 = *param_4 | uVar9 >> (0x3fU - (char)lVar26 & 0x3f);
              *ppuVar6 = *ppuVar6 + lVar23;
              lVar22 = *plVar5 + lVar23 * -8;
              *plVar5 = lVar22;
              uVar10 = *param_4;
              iVar17 = (int)uVar16;
              if (uVar10 == 0) break;
              lVar26 = 0x3f;
              if (uVar10 != 0) {
                for (; uVar10 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                }
              }
              uVar20 = -(int)lVar26 + 0x3f;
              if (uVar20 < 0x1f) {
                uVar12 = -(int)lVar26 + 0x40;
                iVar25 = uVar20 + iVar17;
                *param_4 = uVar10 << ((byte)uVar12 & 0x3f);
                *plVar5 = *plVar5 + (ulonglong)uVar12;
                goto LAB_14ff55057;
              }
              *param_4 = uVar10 << 0x1f;
              *plVar5 = *plVar5 + 0x1f;
              lVar26 = *plVar5;
              uVar16 = (ulonglong)(iVar17 + 0x1f);
            }
            *param_4 = 0;
            lVar22 = 0x3f - lVar22;
            lVar26 = *plVar5 + lVar22;
            uVar16 = (ulonglong)(uint)(iVar17 + (int)lVar22);
            *plVar5 = lVar26;
          } while (*ppuVar6 < *param_7);
          ooLogErrorPre();
          if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleNet_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                       "OODLE ERROR : corruption : ReadUnary past end\n");
          }
          ooLogErrorPost();
LAB_14ff55057:
          puVar2 = (ulonglong *)*ppuVar6;
          lVar22 = *plVar5 >> 3;
          lVar26 = (longlong)*param_7 - (longlong)puVar2;
          if (lVar26 < 8) {
            if (lVar26 < 1) {
              uVar16 = 0;
            }
            else {
              uVar16 = (ulonglong)(byte)*puVar2;
            }
            if (lVar26 == 1 || lVar26 + -1 < 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
            }
            if (lVar26 == 2 || lVar26 + -2 < 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
            }
            if (lVar26 == 3 || lVar26 + -3 < 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
            }
            lVar26 = (longlong)*param_7 - ((longlong)puVar2 + 4);
            if (lVar26 < 1) {
              uVar24 = 0;
            }
            else {
              uVar24 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
            }
            if (lVar26 == 1 || lVar26 + -1 < 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
            }
            if (lVar26 == 2 || lVar26 + -2 < 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
            }
            if (lVar26 == 3 || lVar26 + -3 < 0) {
              uVar15 = 0;
            }
            else {
              uVar15 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
            }
            uVar15 = ((((((uVar16 << 8 | uVar18) << 8 | uVar10) << 8 | uVar7) << 8 | uVar24) << 8 |
                      uVar8) << 8 | uVar14) << 8 | uVar15;
          }
          else {
            uVar16 = *puVar2;
            uVar15 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                     (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                     (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                     (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
          }
          *param_4 = *param_4 | uVar15 >> (0x3fU - (char)*plVar5 & 0x3f);
          *ppuVar6 = *ppuVar6 + lVar22;
          *plVar5 = *plVar5 + lVar22 * -8;
          iVar17 = (int)((*param_4 >> 1) >> (0x3f - (bVar4 >> 6) & 0x3f));
          *param_4 = *param_4 << (bVar4 >> 6);
          *plVar5 = *plVar5 + (uVar1 >> 0x3e);
        }
        puVar2 = (ulonglong *)*ppuVar6;
        uVar20 = (iVar25 << (bVar4 >> 6)) + iVar17;
        lVar26 = *plVar5 >> 3;
        lVar22 = (longlong)*param_7 - (longlong)puVar2;
        if (lVar22 < 8) {
          if (lVar22 < 1) {
            uVar16 = 0;
          }
          else {
            uVar16 = (ulonglong)(byte)*puVar2;
          }
          if (lVar22 == 1 || lVar22 + -1 < 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
          }
          if (lVar22 == 2 || lVar22 + -2 < 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
          }
          if (lVar22 == 3 || lVar22 + -3 < 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
          }
          lVar22 = (longlong)*param_7 - ((longlong)puVar2 + 4);
          if (lVar22 < 1) {
            uVar24 = 0;
          }
          else {
            uVar24 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
          }
          if (lVar22 == 1 || lVar22 + -1 < 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
          }
          if (lVar22 == 2 || lVar22 + -2 < 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
          }
          if (lVar22 == 3 || lVar22 + -3 < 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
          }
          uVar15 = ((((((uVar16 << 8 | uVar18) << 8 | uVar10) << 8 | uVar7) << 8 | uVar24) << 8 |
                    uVar8) << 8 | uVar14) << 8 | uVar15;
        }
        else {
          uVar16 = *puVar2;
          uVar15 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                   (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                   (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                   (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
        }
        *param_4 = *param_4 | uVar15 >> (0x3fU - (char)*plVar5 & 0x3f);
        *ppuVar6 = *ppuVar6 + lVar26;
        *plVar5 = *plVar5 + lVar26 * -8;
        uVar20 = ((int)param_6 + 2 >> 2) + (uVar20 >> 1 ^ -(uVar20 & 1));
        if (0x1f < uVar20) {
          ooLogErrorPre();
          if (g_fp_OodleNet_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto code_r0x00014ff55460;
          pcVar27 = "OODLE ERROR : curCodeLen < 0 || curCodeLen >= 32 ) \n";
          iVar19 = 0x456;
          goto LAB_14ff55452;
        }
        iVar17 = 0;
        iVar25 = uVar20 - 1;
        param_6._0_4_ = ((int)param_6 * 3 + 2 >> 2) + uVar20;
        bVar11 = (byte)iVar25;
        if (0 < iVar25) {
          iVar17 = (int)(*param_4 >> (0x40 - bVar11 & 0x3f));
          *param_4 = *param_4 << (bVar11 & 0x3f);
          *plVar5 = *plVar5 + (longlong)iVar25;
        }
        local_res8 = local_res8 + 1;
        iVar28 = iVar28 + 1;
        uVar20 = (1 << (bVar11 & 0x1f)) + iVar17;
        param_5._0_4_ = (int)param_5 + uVar20;
        param_3[lVar21] = uVar20;
        lVar21 = lVar21 + 1;
      } while (iVar28 < iVar19);
    }
  } while (local_res8 < param_2);
  if ((param_8) && ((int)param_5 != 1 << ((byte)param_1 & 0x1f))) {
    ooLogErrorPre();
    if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      (*g_fp_OodleNet_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x477,
                 "OODLE ERROR :  count_sum != L \n");
    }
    ooLogErrorPost();
  }
  return 1;
}

// rrTANS_UnPackCounts @ 14ff55480

int __cdecl
oo2net::rrTANS_UnPackCounts(_rrVarBits_ *param_1,int param_2,int param_3,uint *param_4,bool param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  char *pcVar26;
  longlong lVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  uint local_88;
  ulonglong local_80;
  int local_70;
  longlong local_60;
  
  lVar11 = param_1->m_inv_bitlen;
  puVar1 = (ulonglong *)param_1->m_end;
  puVar20 = (ulonglong *)param_1->m_cur;
  lVar24 = (longlong)puVar1 - (longlong)puVar20;
  lVar27 = lVar11 >> 3;
  uVar7 = 0;
  uVar31 = 0;
  uVar19 = 0;
  if (lVar24 < 8) {
    uVar14 = uVar7;
    if (0 < lVar24) {
      uVar14 = (ulonglong)(byte)*puVar20;
    }
    uVar30 = uVar7;
    if (lVar24 != 1 && -1 < lVar24 + -1) {
      uVar30 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
    }
    uVar29 = uVar7;
    if (lVar24 != 2 && -1 < lVar24 + -2) {
      uVar29 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    }
    uVar6 = uVar7;
    if (lVar24 != 3 && -1 < lVar24 + -3) {
      uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
    }
    lVar24 = (longlong)puVar1 - ((longlong)puVar20 + 4);
    uVar3 = uVar7;
    if (0 < lVar24) {
      uVar3 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
    }
    uVar5 = uVar7;
    if (lVar24 != 1 && -1 < lVar24 + -1) {
      uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
    }
    uVar4 = uVar7;
    if (lVar24 != 2 && -1 < lVar24 + -2) {
      uVar4 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
    }
    uVar18 = uVar7;
    if (lVar24 != 3 && -1 < lVar24 + -3) {
      uVar18 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
    }
    uVar14 = (((uVar14 << 8 | uVar30) << 8 | uVar29) << 8 | uVar6) << 0x20 |
             ((uVar3 << 8 | uVar5) << 8 | uVar4) << 8 | uVar18;
  }
  else {
    uVar14 = *puVar20;
    uVar14 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
             (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
             (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 | (uVar14 & 0xff00) << 0x28 |
             uVar14 << 0x38;
  }
  uVar14 = param_1->m_bits | uVar14 >> (0x3fU - (char)lVar11 & 0x3f);
  puVar20 = (ulonglong *)((longlong)puVar20 + lVar27);
  lVar24 = lVar11 + lVar27 * -8 + 1;
  uVar28 = 0;
  bVar8 = (byte)param_2;
  if ((longlong)uVar14 < 0) {
    uVar25 = uVar28;
    if (1 < (uint)param_3) {
      iVar21 = 0x1f;
      if (param_3 - 1U != 0) {
        for (; param_3 - 1U >> iVar21 == 0; iVar21 = iVar21 + -1) {
        }
      }
      uVar25 = iVar21 + 1;
    }
    lVar24 = lVar24 + 2;
    uVar19 = uVar14 & 0x7fffffffffffffff;
    lVar11 = (longlong)puVar1 - (longlong)puVar20;
    if (lVar11 < 8) {
      uVar30 = uVar7;
      if (0 < lVar11) {
        uVar30 = (ulonglong)(byte)*puVar20;
      }
      uVar29 = uVar7;
      if (lVar11 != 1 && -1 < lVar11 + -1) {
        uVar29 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
      }
      uVar6 = uVar7;
      if (lVar11 != 2 && -1 < lVar11 + -2) {
        uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
      }
      uVar3 = uVar7;
      if (lVar11 != 3 && -1 < lVar11 + -3) {
        uVar3 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
      }
      lVar11 = (longlong)puVar1 - ((longlong)puVar20 + 4);
      uVar5 = uVar7;
      if (0 < lVar11) {
        uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
      }
      uVar4 = uVar7;
      if (lVar11 != 1 && -1 < lVar11 + -1) {
        uVar4 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
      }
      uVar18 = uVar7;
      if (lVar11 != 2 && -1 < lVar11 + -2) {
        uVar18 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
      }
      uVar15 = uVar7;
      if (lVar11 != 3 && -1 < lVar11 + -3) {
        uVar15 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
      }
      uVar15 = ((((((uVar30 << 8 | uVar29) << 8 | uVar6) << 8 | uVar3) << 8 | uVar5) << 8 | uVar4)
                << 8 | uVar18) << 8 | uVar15;
    }
    else {
      uVar30 = *puVar20;
      uVar15 = uVar30 >> 0x38 | (uVar30 & 0xff000000000000) >> 0x28 |
               (uVar30 & 0xff0000000000) >> 0x18 | (uVar30 & 0xff00000000) >> 8 |
               (uVar30 & 0xff000000) << 8 | (uVar30 & 0xff0000) << 0x18 | (uVar30 & 0xff00) << 0x28
               | uVar30 << 0x38;
    }
    local_88 = 0;
    local_70 = 0;
    local_80._0_4_ = uVar25 * 4;
    uVar29 = uVar14 << 3 | uVar15 >> (0x3fU - (char)lVar24 & 0x3f);
    puVar20 = (ulonglong *)((longlong)puVar20 + (lVar24 >> 3));
    uVar14 = uVar29 * 2;
    lVar24 = lVar24 + (lVar24 >> 3) * -8 + 1;
    uVar30 = uVar7;
    if ((longlong)uVar29 < 0) goto LAB_14ff55ceb;
    do {
      uVar29 = uVar7;
      if (uVar14 == 0) {
LAB_14ff557b0:
        do {
          while( true ) {
            lVar11 = (longlong)puVar1 - (longlong)puVar20;
            if (lVar11 < 8) {
              uVar30 = uVar7;
              if (0 < lVar11) {
                uVar30 = (ulonglong)(byte)*puVar20;
              }
              uVar6 = uVar7;
              if (lVar11 != 1 && -1 < lVar11 + -1) {
                uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
              }
              uVar3 = uVar7;
              if (lVar11 != 2 && -1 < lVar11 + -2) {
                uVar3 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
              }
              uVar5 = uVar7;
              if (lVar11 != 3 && -1 < lVar11 + -3) {
                uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
              }
              lVar11 = (longlong)puVar1 - ((longlong)puVar20 + 4);
              uVar4 = uVar7;
              if (0 < lVar11) {
                uVar4 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
              }
              uVar18 = uVar7;
              if (lVar11 != 1 && -1 < lVar11 + -1) {
                uVar18 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
              }
              uVar15 = uVar7;
              if (lVar11 != 2 && -1 < lVar11 + -2) {
                uVar15 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
              }
              uVar16 = uVar7;
              if (lVar11 != 3 && -1 < lVar11 + -3) {
                uVar16 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
              }
              uVar16 = ((((((uVar30 << 8 | uVar6) << 8 | uVar3) << 8 | uVar5) << 8 | uVar4) << 8 |
                        uVar18) << 8 | uVar15) << 8 | uVar16;
            }
            else {
              uVar30 = *puVar20;
              uVar16 = uVar30 >> 0x38 | (uVar30 & 0xff000000000000) >> 0x28 |
                       (uVar30 & 0xff0000000000) >> 0x18 | (uVar30 & 0xff00000000) >> 8 |
                       (uVar30 & 0xff000000) << 8 | (uVar30 & 0xff0000) << 0x18 |
                       (uVar30 & 0xff00) << 0x28 | uVar30 << 0x38;
            }
            puVar20 = (ulonglong *)((longlong)puVar20 + (lVar24 >> 3));
            lVar11 = lVar24 + (lVar24 >> 3) * -8;
            uVar14 = uVar14 | uVar16 >> (0x3fU - (char)lVar24 & 0x3f);
            iVar21 = (int)uVar29;
            uVar25 = uVar28;
            if (uVar14 == 0) break;
            lVar24 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            uVar22 = -(int)lVar24 + 0x3f;
            if (uVar22 < 0x1f) {
              uVar10 = -(int)lVar24 + 0x40;
              uVar30 = uVar14 << ((byte)uVar10 & 0x3f);
              uVar22 = uVar22 + iVar21;
              lVar24 = lVar11 + (ulonglong)uVar10;
              if (uVar22 != 0) {
                lVar11 = (longlong)puVar1 - (longlong)puVar20;
                if (lVar11 < 8) {
                  uVar14 = uVar7;
                  if (0 < lVar11) {
                    uVar14 = (ulonglong)(byte)*puVar20;
                  }
                  uVar29 = uVar7;
                  if (lVar11 != 1 && -1 < lVar11 + -1) {
                    uVar29 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
                  }
                  uVar6 = uVar7;
                  if (lVar11 != 2 && -1 < lVar11 + -2) {
                    uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
                  }
                  uVar3 = uVar7;
                  if (lVar11 != 3 && -1 < lVar11 + -3) {
                    uVar3 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
                  }
                  lVar11 = (longlong)puVar1 - ((longlong)puVar20 + 4);
                  uVar5 = uVar7;
                  if (0 < lVar11) {
                    uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
                  }
                  uVar4 = uVar7;
                  if (lVar11 != 1 && -1 < lVar11 + -1) {
                    uVar4 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
                  }
                  uVar18 = uVar7;
                  if (lVar11 != 2 && -1 < lVar11 + -2) {
                    uVar18 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
                  }
                  uVar15 = uVar7;
                  if (lVar11 != 3 && -1 < lVar11 + -3) {
                    uVar15 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
                  }
                  uVar15 = ((((((uVar14 << 8 | uVar29) << 8 | uVar6) << 8 | uVar3) << 8 | uVar5) <<
                             8 | uVar4) << 8 | uVar18) << 8 | uVar15;
                }
                else {
                  uVar14 = *puVar20;
                  uVar15 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
                           (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
                           (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 |
                           (uVar14 & 0xff00) << 0x28 | uVar14 << 0x38;
                }
                puVar20 = (ulonglong *)((longlong)puVar20 + (lVar24 >> 3));
                bVar2 = (byte)uVar22;
                uVar14 = uVar30 | uVar15 >> (0x3fU - (char)lVar24 & 0x3f);
                uVar30 = uVar14 << (bVar2 & 0x3f);
                lVar24 = lVar24 + (ulonglong)uVar22 + (lVar24 >> 3) * -8;
                uVar25 = ((1 << (bVar2 & 0x1f)) + (int)(uVar14 >> (0x40 - bVar2 & 0x3f))) * 2 - 2;
              }
              goto LAB_14ff55a77;
            }
            uVar14 = uVar14 << 0x1f;
            lVar24 = lVar11 + 0x1f;
            uVar29 = (ulonglong)(iVar21 + 0x1f);
          }
          lVar24 = 0x3f;
          uVar29 = (ulonglong)(uint)(iVar21 + (0x3f - (int)lVar11));
          uVar14 = uVar7;
        } while (puVar20 < puVar1);
        ooLogErrorPre();
        if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleNet_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        uVar30 = uVar7;
LAB_14ff55a77:
        lVar11 = (longlong)puVar1 - (longlong)puVar20;
        if (lVar11 < 8) {
          uVar14 = uVar7;
          if (0 < lVar11) {
            uVar14 = (ulonglong)(byte)*puVar20;
          }
          uVar29 = uVar7;
          if (lVar11 != 1 && -1 < lVar11 + -1) {
            uVar29 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
          }
          uVar6 = uVar7;
          if (lVar11 != 2 && -1 < lVar11 + -2) {
            uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
          }
          uVar3 = uVar7;
          if (lVar11 != 3 && -1 < lVar11 + -3) {
            uVar3 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
          }
          lVar11 = (longlong)puVar1 - ((longlong)puVar20 + 4);
          uVar5 = uVar7;
          if (0 < lVar11) {
            uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
          }
          uVar4 = uVar7;
          if (lVar11 != 1 && -1 < lVar11 + -1) {
            uVar4 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
          }
          uVar18 = uVar7;
          if (lVar11 != 2 && -1 < lVar11 + -2) {
            uVar18 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
          }
          uVar15 = uVar7;
          if (lVar11 != 3 && -1 < lVar11 + -3) {
            uVar15 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
          }
          uVar15 = ((((((uVar14 << 8 | uVar29) << 8 | uVar6) << 8 | uVar3) << 8 | uVar5) << 8 |
                    uVar4) << 8 | uVar18) << 8 | uVar15;
        }
        else {
          uVar14 = *puVar20;
          uVar15 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
                   (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
                   (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 |
                   (uVar14 & 0xff00) << 0x28 | uVar14 << 0x38;
        }
        puVar20 = (ulonglong *)((longlong)puVar20 + (lVar24 >> 3));
        uVar30 = uVar30 | uVar15 >> (0x3fU - (char)lVar24 & 0x3f);
        uVar14 = uVar30 * 2;
        lVar24 = lVar24 + (lVar24 >> 3) * -8 + 1;
        iVar21 = uVar25 - (int)((longlong)uVar30 >> 0x3f);
        uVar25 = local_88;
      }
      else {
        lVar11 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar21 = (0x40 - (int)lVar11) * 2;
        if (0x1e < iVar21) goto LAB_14ff557b0;
        uVar29 = uVar14 >> (-(byte)iVar21 & 0x3f);
        uVar14 = uVar14 << ((byte)iVar21 & 0x3f);
        lVar24 = lVar24 + iVar21;
        iVar21 = (int)uVar29 + -2;
        uVar25 = (uint)uVar30;
      }
      uVar22 = iVar21 + 1;
      if (param_3 - uVar25 < uVar22) {
        ooLogErrorPre();
        if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          iVar21 = 0x422;
LAB_14ff567c4:
          pcVar26 = "OODLE ERROR : i + RunLen > packNumSymbols \n";
LAB_14ff567cb:
          (*g_fp_OodleNet_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",iVar21,pcVar26);
        }
LAB_14ff567d6:
        ooLogErrorPost();
        uVar19 = uVar7;
        goto LAB_14ff56e3b;
      }
      memset(param_4 + (int)uVar25,0,(longlong)(int)uVar22 << 2);
      local_88 = local_88 + uVar22;
      if (param_3 <= (int)local_88) break;
      lVar11 = (longlong)puVar1 - (longlong)puVar20;
      if (lVar11 < 8) {
        uVar30 = uVar7;
        if (0 < lVar11) {
          uVar30 = (ulonglong)(byte)*puVar20;
        }
        uVar29 = uVar7;
        if (lVar11 != 1 && -1 < lVar11 + -1) {
          uVar29 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
        }
        uVar6 = uVar7;
        if (lVar11 != 2 && -1 < lVar11 + -2) {
          uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
        }
        uVar3 = uVar7;
        if (lVar11 != 3 && -1 < lVar11 + -3) {
          uVar3 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
        }
        lVar11 = (longlong)puVar1 - ((longlong)puVar20 + 4);
        uVar5 = uVar7;
        if (0 < lVar11) {
          uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
        }
        uVar4 = uVar7;
        if (lVar11 != 1 && -1 < lVar11 + -1) {
          uVar4 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
        }
        uVar18 = uVar7;
        if (lVar11 != 2 && -1 < lVar11 + -2) {
          uVar18 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
        }
        uVar15 = uVar7;
        if (lVar11 != 3 && -1 < lVar11 + -3) {
          uVar15 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
        }
        uVar15 = ((((((uVar30 << 8 | uVar29) << 8 | uVar6) << 8 | uVar3) << 8 | uVar5) << 8 | uVar4)
                  << 8 | uVar18) << 8 | uVar15;
      }
      else {
        uVar30 = *puVar20;
        uVar15 = uVar30 >> 0x38 | (uVar30 & 0xff000000000000) >> 0x28 |
                 (uVar30 & 0xff0000000000) >> 0x18 | (uVar30 & 0xff00000000) >> 8 |
                 (uVar30 & 0xff000000) << 8 | (uVar30 & 0xff0000) << 0x18 |
                 (uVar30 & 0xff00) << 0x28 | uVar30 << 0x38;
      }
      uVar30 = (ulonglong)local_88;
      puVar20 = (ulonglong *)((longlong)puVar20 + (lVar24 >> 3));
      uVar14 = uVar14 | uVar15 >> (0x3fU - (char)lVar24 & 0x3f);
      lVar24 = lVar24 + (lVar24 >> 3) * -8;
LAB_14ff55ceb:
      uVar29 = uVar7;
      if (uVar14 == 0) {
LAB_14ff55d30:
        do {
          while( true ) {
            lVar11 = (longlong)puVar1 - (longlong)puVar20;
            if (lVar11 < 8) {
              uVar30 = uVar7;
              if (0 < lVar11) {
                uVar30 = (ulonglong)(byte)*puVar20;
              }
              uVar6 = uVar7;
              if (lVar11 != 1 && -1 < lVar11 + -1) {
                uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
              }
              uVar3 = uVar7;
              if (lVar11 != 2 && -1 < lVar11 + -2) {
                uVar3 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
              }
              uVar5 = uVar7;
              if (lVar11 != 3 && -1 < lVar11 + -3) {
                uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
              }
              lVar11 = (longlong)puVar1 - ((longlong)puVar20 + 4);
              uVar4 = uVar7;
              if (0 < lVar11) {
                uVar4 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
              }
              uVar18 = uVar7;
              if (lVar11 != 1 && -1 < lVar11 + -1) {
                uVar18 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
              }
              uVar15 = uVar7;
              if (lVar11 != 2 && -1 < lVar11 + -2) {
                uVar15 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
              }
              uVar16 = uVar7;
              if (lVar11 != 3 && -1 < lVar11 + -3) {
                uVar16 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
              }
              uVar16 = ((((((uVar30 << 8 | uVar6) << 8 | uVar3) << 8 | uVar5) << 8 | uVar4) << 8 |
                        uVar18) << 8 | uVar15) << 8 | uVar16;
            }
            else {
              uVar30 = *puVar20;
              uVar16 = uVar30 >> 0x38 | (uVar30 & 0xff000000000000) >> 0x28 |
                       (uVar30 & 0xff0000000000) >> 0x18 | (uVar30 & 0xff00000000) >> 8 |
                       (uVar30 & 0xff000000) << 8 | (uVar30 & 0xff0000) << 0x18 |
                       (uVar30 & 0xff00) << 0x28 | uVar30 << 0x38;
            }
            puVar20 = (ulonglong *)((longlong)puVar20 + (lVar24 >> 3));
            lVar11 = lVar24 + (lVar24 >> 3) * -8;
            uVar14 = uVar14 | uVar16 >> (0x3fU - (char)lVar24 & 0x3f);
            iVar21 = (int)uVar29;
            if (uVar14 == 0) break;
            lVar24 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            uVar22 = -(int)lVar24 + 0x3f;
            if (uVar22 < 0x1f) {
              uVar25 = -(int)lVar24 + 0x40;
              uVar29 = uVar14 << ((byte)uVar25 & 0x3f);
              uVar22 = uVar22 + iVar21;
              lVar24 = lVar11 + (ulonglong)uVar25;
              uVar25 = uVar31;
              if (uVar22 != 0) {
                lVar11 = (longlong)puVar1 - (longlong)puVar20;
                if (lVar11 < 8) {
                  uVar14 = uVar7;
                  if (0 < lVar11) {
                    uVar14 = (ulonglong)(byte)*puVar20;
                  }
                  uVar30 = uVar7;
                  if (lVar11 != 1 && -1 < lVar11 + -1) {
                    uVar30 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
                  }
                  uVar6 = uVar7;
                  if (lVar11 != 2 && -1 < lVar11 + -2) {
                    uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
                  }
                  uVar3 = uVar7;
                  if (lVar11 != 3 && -1 < lVar11 + -3) {
                    uVar3 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
                  }
                  lVar11 = (longlong)puVar1 - ((longlong)puVar20 + 4);
                  uVar5 = uVar7;
                  if (0 < lVar11) {
                    uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
                  }
                  uVar4 = uVar7;
                  if (lVar11 != 1 && -1 < lVar11 + -1) {
                    uVar4 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
                  }
                  uVar18 = uVar7;
                  if (lVar11 != 2 && -1 < lVar11 + -2) {
                    uVar18 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
                  }
                  uVar15 = uVar7;
                  if (lVar11 != 3 && -1 < lVar11 + -3) {
                    uVar15 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
                  }
                  uVar15 = ((((((uVar14 << 8 | uVar30) << 8 | uVar6) << 8 | uVar3) << 8 | uVar5) <<
                             8 | uVar4) << 8 | uVar18) << 8 | uVar15;
                }
                else {
                  uVar14 = *puVar20;
                  uVar15 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
                           (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
                           (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 |
                           (uVar14 & 0xff00) << 0x28 | uVar14 << 0x38;
                }
                puVar20 = (ulonglong *)((longlong)puVar20 + (lVar24 >> 3));
                bVar2 = (byte)uVar22;
                uVar14 = uVar29 | uVar15 >> (0x3fU - (char)lVar24 & 0x3f);
                uVar29 = uVar14 << (bVar2 & 0x3f);
                lVar24 = lVar24 + (ulonglong)uVar22 + (lVar24 >> 3) * -8;
                uVar25 = ((1 << (bVar2 & 0x1f)) + (int)(uVar14 >> (0x40 - bVar2 & 0x3f))) * 2 - 2;
              }
              goto LAB_14ff55ff7;
            }
            uVar14 = uVar14 << 0x1f;
            lVar24 = lVar11 + 0x1f;
            uVar29 = (ulonglong)(iVar21 + 0x1f);
          }
          lVar24 = 0x3f;
          uVar29 = (ulonglong)(uint)(iVar21 + (0x3f - (int)lVar11));
          uVar14 = uVar7;
        } while (puVar20 < puVar1);
        ooLogErrorPre();
        if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleNet_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        uVar29 = uVar7;
        uVar25 = uVar28;
LAB_14ff55ff7:
        lVar11 = (longlong)puVar1 - (longlong)puVar20;
        if (lVar11 < 8) {
          uVar14 = uVar7;
          if (0 < lVar11) {
            uVar14 = (ulonglong)(byte)*puVar20;
          }
          uVar30 = uVar7;
          if (lVar11 != 1 && -1 < lVar11 + -1) {
            uVar30 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
          }
          uVar6 = uVar7;
          if (lVar11 != 2 && -1 < lVar11 + -2) {
            uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
          }
          uVar3 = uVar7;
          if (lVar11 != 3 && -1 < lVar11 + -3) {
            uVar3 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
          }
          lVar11 = (longlong)puVar1 - ((longlong)puVar20 + 4);
          uVar5 = uVar7;
          if (0 < lVar11) {
            uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
          }
          uVar4 = uVar7;
          if (lVar11 != 1 && -1 < lVar11 + -1) {
            uVar4 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
          }
          uVar18 = uVar7;
          if (lVar11 != 2 && -1 < lVar11 + -2) {
            uVar18 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
          }
          uVar15 = uVar7;
          if (lVar11 != 3 && -1 < lVar11 + -3) {
            uVar15 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
          }
          uVar15 = ((((((uVar14 << 8 | uVar30) << 8 | uVar6) << 8 | uVar3) << 8 | uVar5) << 8 |
                    uVar4) << 8 | uVar18) << 8 | uVar15;
        }
        else {
          uVar14 = *puVar20;
          uVar15 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
                   (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
                   (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 |
                   (uVar14 & 0xff00) << 0x28 | uVar14 << 0x38;
        }
        uVar30 = (ulonglong)local_88;
        puVar20 = (ulonglong *)((longlong)puVar20 + (lVar24 >> 3));
        uVar29 = uVar29 | uVar15 >> (0x3fU - (char)lVar24 & 0x3f);
        uVar14 = uVar29 * 2;
        lVar24 = lVar24 + (lVar24 >> 3) * -8 + 1;
        iVar21 = uVar25 - (int)((longlong)uVar29 >> 0x3f);
      }
      else {
        lVar11 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar21 = (0x40 - (int)lVar11) * 2;
        if (0x1e < iVar21) goto LAB_14ff55d30;
        uVar29 = uVar14 >> (-(byte)iVar21 & 0x3f);
        uVar14 = uVar14 << ((byte)iVar21 & 0x3f);
        lVar24 = lVar24 + iVar21;
        iVar21 = (int)uVar29 + -2;
      }
      iVar21 = iVar21 + 1;
      if (param_3 < iVar21 + (int)uVar30) {
        ooLogErrorPre();
        if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          iVar21 = 0x440;
          goto LAB_14ff567c4;
        }
        goto LAB_14ff567d6;
      }
      if (0 < iVar21) {
        bVar2 = (byte)(uVar19 >> 0x38);
        local_60 = (longlong)(int)uVar30;
        uVar29 = uVar7;
        do {
          lVar11 = (longlong)puVar1 - (longlong)puVar20;
          if (lVar11 < 8) {
            uVar30 = uVar7;
            if (0 < lVar11) {
              uVar30 = (ulonglong)(byte)*puVar20;
            }
            uVar6 = uVar7;
            if (lVar11 != 1 && -1 < lVar11 + -1) {
              uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
            }
            uVar3 = uVar7;
            if (lVar11 != 2 && -1 < lVar11 + -2) {
              uVar3 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
            }
            uVar5 = uVar7;
            if (lVar11 != 3 && -1 < lVar11 + -3) {
              uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
            }
            lVar11 = (longlong)puVar1 - ((longlong)puVar20 + 4);
            uVar4 = uVar7;
            if (0 < lVar11) {
              uVar4 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
            }
            uVar18 = uVar7;
            if (lVar11 != 1 && -1 < lVar11 + -1) {
              uVar18 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
            }
            uVar15 = uVar7;
            if (lVar11 != 2 && -1 < lVar11 + -2) {
              uVar15 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
            }
            uVar16 = uVar7;
            if (lVar11 != 3 && -1 < lVar11 + -3) {
              uVar16 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
            }
            uVar16 = ((((((uVar30 << 8 | uVar6) << 8 | uVar3) << 8 | uVar5) << 8 | uVar4) << 8 |
                      uVar18) << 8 | uVar15) << 8 | uVar16;
          }
          else {
            uVar30 = *puVar20;
            uVar16 = uVar30 >> 0x38 | (uVar30 & 0xff000000000000) >> 0x28 |
                     (uVar30 & 0xff0000000000) >> 0x18 | (uVar30 & 0xff00000000) >> 8 |
                     (uVar30 & 0xff000000) << 8 | (uVar30 & 0xff0000) << 0x18 |
                     (uVar30 & 0xff00) << 0x28 | uVar30 << 0x38;
          }
          puVar20 = (ulonglong *)((longlong)puVar20 + (lVar24 >> 3));
          lVar11 = lVar24 + (lVar24 >> 3) * -8;
          uVar14 = uVar14 | uVar16 >> (0x3fU - (char)lVar24 & 0x3f);
          if (uVar14 == 0) {
            iVar23 = 0x40;
          }
          else {
            lVar24 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            iVar23 = 0x3f - (int)lVar24;
          }
          uVar25 = (uint)(uVar19 >> 0x3d) + 1 + iVar23;
          uVar30 = uVar7;
          if (uVar25 < 0x1f) {
            iVar13 = (int)(uVar14 >> (-(byte)uVar25 & 0x3f));
            uVar14 = uVar14 << ((byte)uVar25 & 0x3f);
            lVar11 = lVar11 + (ulonglong)uVar25;
            iVar23 = iVar23 + -1;
          }
          else {
            do {
              while( true ) {
                lVar24 = (longlong)puVar1 - (longlong)puVar20;
                if (lVar24 < 8) {
                  uVar6 = uVar7;
                  if (0 < lVar24) {
                    uVar6 = (ulonglong)(byte)*puVar20;
                  }
                  uVar3 = uVar7;
                  if (lVar24 != 1 && -1 < lVar24 + -1) {
                    uVar3 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
                  }
                  uVar5 = uVar7;
                  if (lVar24 != 2 && -1 < lVar24 + -2) {
                    uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
                  }
                  uVar4 = uVar7;
                  if (lVar24 != 3 && -1 < lVar24 + -3) {
                    uVar4 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
                  }
                  lVar24 = (longlong)puVar1 - ((longlong)puVar20 + 4);
                  uVar18 = uVar7;
                  if (0 < lVar24) {
                    uVar18 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
                  }
                  uVar15 = uVar7;
                  if (lVar24 != 1 && -1 < lVar24 + -1) {
                    uVar15 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
                  }
                  uVar16 = uVar7;
                  if (lVar24 != 2 && -1 < lVar24 + -2) {
                    uVar16 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
                  }
                  uVar17 = uVar7;
                  if (lVar24 != 3 && -1 < lVar24 + -3) {
                    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
                  }
                  uVar17 = ((((((uVar6 << 8 | uVar3) << 8 | uVar5) << 8 | uVar4) << 8 | uVar18) << 8
                            | uVar15) << 8 | uVar16) << 8 | uVar17;
                }
                else {
                  uVar6 = *puVar20;
                  uVar17 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                           (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                           (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
                           (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
                }
                puVar20 = (ulonglong *)((longlong)puVar20 + (lVar11 >> 3));
                lVar24 = lVar11 + (lVar11 >> 3) * -8;
                uVar14 = uVar14 | uVar17 >> (0x3fU - (char)lVar11 & 0x3f);
                iVar23 = (int)uVar30;
                if (uVar14 == 0) break;
                lVar11 = 0x3f;
                if (uVar14 != 0) {
                  for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                  }
                }
                uVar25 = -(int)lVar11 + 0x3f;
                if (uVar25 < 0x1f) {
                  uVar22 = -(int)lVar11 + 0x40;
                  uVar14 = uVar14 << ((byte)uVar22 & 0x3f);
                  iVar23 = uVar25 + iVar23;
                  lVar11 = lVar24 + (ulonglong)uVar22;
                  goto LAB_14ff56417;
                }
                uVar14 = uVar14 << 0x1f;
                lVar11 = lVar24 + 0x1f;
                uVar30 = (ulonglong)(iVar23 + 0x1f);
              }
              lVar11 = 0x3f;
              uVar30 = (ulonglong)(uint)(iVar23 + (0x3f - (int)lVar24));
              uVar14 = uVar7;
            } while (puVar20 < puVar1);
            ooLogErrorPre();
            if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            {
              (*g_fp_OodleNet_Plugin_Printf)
                        (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                         "OODLE ERROR : corruption : ReadUnary past end\n");
            }
            ooLogErrorPost();
            iVar23 = 0;
LAB_14ff56417:
            lVar24 = (longlong)puVar1 - (longlong)puVar20;
            if (lVar24 < 8) {
              uVar30 = uVar7;
              if (0 < lVar24) {
                uVar30 = (ulonglong)(byte)*puVar20;
              }
              uVar6 = uVar7;
              if (lVar24 != 1 && -1 < lVar24 + -1) {
                uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
              }
              uVar3 = uVar7;
              if (lVar24 != 2 && -1 < lVar24 + -2) {
                uVar3 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
              }
              uVar5 = uVar7;
              if (lVar24 != 3 && -1 < lVar24 + -3) {
                uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
              }
              lVar24 = (longlong)puVar1 - ((longlong)puVar20 + 4);
              uVar4 = uVar7;
              if (0 < lVar24) {
                uVar4 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
              }
              uVar18 = uVar7;
              if (lVar24 != 1 && -1 < lVar24 + -1) {
                uVar18 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
              }
              uVar15 = uVar7;
              if (lVar24 != 2 && -1 < lVar24 + -2) {
                uVar15 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
              }
              uVar16 = uVar7;
              if (lVar24 != 3 && -1 < lVar24 + -3) {
                uVar16 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
              }
              uVar16 = ((((((uVar30 << 8 | uVar6) << 8 | uVar3) << 8 | uVar5) << 8 | uVar4) << 8 |
                        uVar18) << 8 | uVar15) << 8 | uVar16;
            }
            else {
              uVar30 = *puVar20;
              uVar16 = uVar30 >> 0x38 | (uVar30 & 0xff000000000000) >> 0x28 |
                       (uVar30 & 0xff0000000000) >> 0x18 | (uVar30 & 0xff00000000) >> 8 |
                       (uVar30 & 0xff000000) << 8 | (uVar30 & 0xff0000) << 0x18 |
                       (uVar30 & 0xff00) << 0x28 | uVar30 << 0x38;
            }
            puVar20 = (ulonglong *)((longlong)puVar20 + (lVar11 >> 3));
            uVar14 = uVar14 | uVar16 >> (0x3fU - (char)lVar11 & 0x3f);
            iVar13 = (int)((uVar14 >> 1) >> (0x3f - (bVar2 >> 5) & 0x3f));
            uVar14 = uVar14 << (bVar2 >> 5);
            lVar11 = lVar11 + (uVar19 >> 0x3d) + (lVar11 >> 3) * -8;
          }
          uVar25 = (iVar23 << (bVar2 >> 5)) + iVar13;
          lVar24 = (longlong)puVar1 - (longlong)puVar20;
          if (lVar24 < 8) {
            uVar30 = uVar7;
            if (0 < lVar24) {
              uVar30 = (ulonglong)(byte)*puVar20;
            }
            uVar6 = uVar7;
            if (lVar24 != 1 && -1 < lVar24 + -1) {
              uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
            }
            uVar3 = uVar7;
            if (lVar24 != 2 && -1 < lVar24 + -2) {
              uVar3 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
            }
            uVar5 = uVar7;
            if (lVar24 != 3 && -1 < lVar24 + -3) {
              uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
            }
            lVar24 = (longlong)puVar1 - ((longlong)puVar20 + 4);
            uVar4 = uVar7;
            if (0 < lVar24) {
              uVar4 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
            }
            uVar18 = uVar7;
            if (lVar24 != 1 && -1 < lVar24 + -1) {
              uVar18 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
            }
            uVar15 = uVar7;
            if (lVar24 != 2 && -1 < lVar24 + -2) {
              uVar15 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
            }
            uVar16 = uVar7;
            if (lVar24 != 3 && -1 < lVar24 + -3) {
              uVar16 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
            }
            uVar16 = ((((((uVar30 << 8 | uVar6) << 8 | uVar3) << 8 | uVar5) << 8 | uVar4) << 8 |
                      uVar18) << 8 | uVar15) << 8 | uVar16;
          }
          else {
            uVar30 = *puVar20;
            uVar16 = uVar30 >> 0x38 | (uVar30 & 0xff000000000000) >> 0x28 |
                     (uVar30 & 0xff0000000000) >> 0x18 | (uVar30 & 0xff00000000) >> 8 |
                     (uVar30 & 0xff000000) << 8 | (uVar30 & 0xff0000) << 0x18 |
                     (uVar30 & 0xff00) << 0x28 | uVar30 << 0x38;
          }
          puVar20 = (ulonglong *)((longlong)puVar20 + (lVar11 >> 3));
          lVar24 = lVar11 + (lVar11 >> 3) * -8;
          uVar14 = uVar14 | uVar16 >> (0x3fU - (char)lVar11 & 0x3f);
          uVar25 = ((int)local_80 + 2 >> 2) + (uVar25 >> 1 ^ -(uVar25 & 1));
          if (0x1f < uVar25) {
            ooLogErrorPre();
            if (g_fp_OodleNet_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14ff567d6;
            pcVar26 = "OODLE ERROR : curCodeLen < 0 || curCodeLen >= 32 ) \n";
            iVar21 = 0x456;
            goto LAB_14ff567cb;
          }
          iVar23 = uVar25 - 1;
          local_80._0_4_ = ((int)local_80 * 3 + 2 >> 2) + uVar25;
          bVar9 = (byte)iVar23;
          uVar25 = uVar31;
          if (0 < iVar23) {
            uVar25 = (uint)(uVar14 >> (-bVar9 & 0x3f));
            uVar14 = uVar14 << (bVar9 & 0x3f);
            lVar24 = lVar24 + iVar23;
          }
          local_88 = local_88 + 1;
          uVar30 = (ulonglong)local_88;
          uVar22 = (int)uVar29 + 1;
          uVar29 = (ulonglong)uVar22;
          uVar25 = (1 << (bVar9 & 0x1f)) + uVar25;
          local_70 = local_70 + uVar25;
          param_4[local_60] = uVar25;
          local_60 = local_60 + 1;
        } while ((int)uVar22 < iVar21);
      }
    } while ((int)uVar30 < param_3);
    if ((param_5) && (local_70 != 1 << (bVar8 & 0x1f))) {
      ooLogErrorPre();
      if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*g_fp_OodleNet_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x477,
                   "OODLE ERROR :  count_sum != L \n");
      }
      ooLogErrorPost();
    }
  }
  else {
    memset(param_4,0,(longlong)param_3 * 4);
    if (1 < (uint)param_3) {
      iVar21 = 0x1f;
      if (param_3 - 1U != 0) {
        for (; param_3 - 1U >> iVar21 == 0; iVar21 = iVar21 + -1) {
        }
      }
      uVar31 = iVar21 + 1;
    }
    uVar25 = 1 << (bVar8 & 0x1f);
    lVar12 = (longlong)puVar1 - (longlong)puVar20;
    if (lVar12 < 8) {
      uVar30 = uVar7;
      if (0 < lVar12) {
        uVar30 = (ulonglong)(byte)*puVar20;
      }
      uVar29 = uVar7;
      if (lVar12 != 1 && -1 < lVar12 + -1) {
        uVar29 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
      }
      uVar6 = uVar7;
      if (lVar12 != 2 && -1 < lVar12 + -2) {
        uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
      }
      uVar3 = uVar7;
      if (lVar12 != 3 && -1 < lVar12 + -3) {
        uVar3 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
      }
      lVar12 = (longlong)puVar1 - ((longlong)puVar20 + 4);
      uVar5 = uVar7;
      if (0 < lVar12) {
        uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
      }
      uVar4 = uVar7;
      if (lVar12 != 1 && -1 < lVar12 + -1) {
        uVar4 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
      }
      uVar18 = uVar7;
      if (lVar12 != 2 && -1 < lVar12 + -2) {
        uVar18 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
      }
      uVar15 = uVar7;
      if (lVar12 != 3 && -1 < lVar12 + -3) {
        uVar15 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
      }
      uVar15 = ((((((uVar30 << 8 | uVar29) << 8 | uVar6) << 8 | uVar3) << 8 | uVar5) << 8 | uVar4)
                << 8 | uVar18) << 8 | uVar15;
    }
    else {
      uVar30 = *puVar20;
      uVar15 = uVar30 >> 0x38 | (uVar30 & 0xff000000000000) >> 0x28 |
               (uVar30 & 0xff0000000000) >> 0x18 | (uVar30 & 0xff00000000) >> 8 |
               (uVar30 & 0xff000000) << 8 | (uVar30 & 0xff0000) << 0x18 | (uVar30 & 0xff00) << 0x28
               | uVar30 << 0x38;
    }
    puVar20 = (ulonglong *)((longlong)puVar20 + (lVar24 >> 3));
    uVar30 = uVar14 * 2 | uVar15 >> (((char)lVar27 * '\b' - (char)lVar11) + 0x3eU & 0x3f);
    lVar24 = lVar24 + (lVar24 >> 3) * -8 + 3;
    uVar14 = uVar30 << 3;
    uVar22 = (uint)(uVar30 >> 0x20);
    uVar10 = uVar22 >> 0x1d;
    if (uVar10 != 0) {
      bVar2 = (byte)uVar31;
      if (uVar10 == 1) {
        lVar11 = (longlong)puVar1 - (longlong)puVar20;
        if (lVar11 < 8) {
          uVar19 = uVar7;
          if (0 < lVar11) {
            uVar19 = (ulonglong)(byte)*puVar20;
          }
          uVar30 = uVar7;
          if (lVar11 != 1 && -1 < lVar11 + -1) {
            uVar30 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
          }
          uVar29 = uVar7;
          if (lVar11 != 2 && -1 < lVar11 + -2) {
            uVar29 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
          }
          uVar6 = uVar7;
          if (lVar11 != 3 && -1 < lVar11 + -3) {
            uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
          }
          lVar11 = (longlong)puVar1 - ((longlong)puVar20 + 4);
          uVar3 = uVar7;
          if (0 < lVar11) {
            uVar3 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
          }
          uVar5 = uVar7;
          if (lVar11 != 1 && -1 < lVar11 + -1) {
            uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
          }
          uVar4 = uVar7;
          if (lVar11 != 2 && -1 < lVar11 + -2) {
            uVar4 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
          }
          uVar18 = uVar7;
          if (lVar11 != 3 && -1 < lVar11 + -3) {
            uVar18 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
          }
          uVar18 = ((((((uVar19 << 8 | uVar30) << 8 | uVar29) << 8 | uVar6) << 8 | uVar3) << 8 |
                    uVar5) << 8 | uVar4) << 8 | uVar18;
        }
        else {
          uVar19 = *puVar20;
          uVar18 = uVar19 >> 0x38 | (uVar19 & 0xff000000000000) >> 0x28 |
                   (uVar19 & 0xff0000000000) >> 0x18 | (uVar19 & 0xff00000000) >> 8 |
                   (uVar19 & 0xff000000) << 8 | (uVar19 & 0xff0000) << 0x18 |
                   (uVar19 & 0xff00) << 0x28 | uVar19 << 0x38;
        }
        puVar20 = (ulonglong *)((longlong)puVar20 + (lVar24 >> 3));
        uVar14 = uVar14 | uVar18 >> (0x3fU - (char)lVar24 & 0x3f);
        uVar19 = uVar14 >> (-bVar2 & 0x3f);
        uVar14 = uVar14 << (bVar2 & 0x3f);
        lVar24 = lVar24 + (longlong)(int)uVar31 + (lVar24 >> 3) * -8;
        if ((ulonglong)(longlong)param_3 <= uVar19) {
          ooLogErrorPre();
          if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleNet_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x2ed,
                       "OODLE ERROR :  sym >= (RR_VARBITSTYPE)max_alphabet\n");
          }
          ooLogErrorPost();
          uVar19 = uVar7;
          goto LAB_14ff56e3b;
        }
        if (!param_5) {
          uVar25 = (uint)(uVar14 >> (0x40 - bVar8 & 0x3f));
          uVar14 = uVar14 << (bVar8 & 0x3f);
          lVar24 = lVar24 + param_2;
        }
        param_4[uVar19] = uVar25;
      }
      else {
        iVar21 = 0x1f;
        if (param_2 != 0) {
          for (; (uint)param_2 >> iVar21 == 0; iVar21 = iVar21 + -1) {
          }
        }
        uVar10 = uVar28;
        if (param_2 != 0) {
          uVar10 = iVar21 + 1;
        }
        uVar30 = uVar14 >> (-(byte)uVar10 & 0x3f);
        uVar14 = uVar14 << ((byte)uVar10 & 0x3f);
        lVar24 = lVar24 + (ulonglong)uVar10;
        iVar21 = (int)uVar30;
        if (param_2 < iVar21) {
          ooLogErrorPre();
          if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleNet_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x303,
                       "OODLE ERROR : max_delta_bits > L_bits\n");
          }
          ooLogErrorPost();
          uVar19 = uVar7;
          goto LAB_14ff56e3b;
        }
        iVar23 = (uVar22 >> 0x1d) - 1;
        local_88 = 0;
        bVar8 = (byte)uVar30;
        local_80 = uVar14;
        if (0 < iVar23) {
          uVar30 = uVar7;
          uVar29 = uVar7;
          do {
            if ((longlong)puVar1 - (longlong)puVar20 < 8) {
              uVar28 = rrVB_Get32BE_Masked((byte *)((longlong)puVar20 + 4),(uchar *)puVar1);
              uVar22 = rrVB_Get32BE_Masked((uchar *)puVar20,(uchar *)puVar1);
              uVar14 = CONCAT44(uVar22,uVar28);
            }
            else {
              uVar14 = *puVar20;
              uVar14 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
                       (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
                       (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 |
                       (uVar14 & 0xff00) << 0x28 | uVar14 << 0x38;
              local_88 = (uint)uVar7;
            }
            puVar20 = (ulonglong *)((longlong)puVar20 + (lVar24 >> 3));
            uVar6 = local_80 | uVar14 >> (0x3fU - (char)lVar24 & 0x3f);
            uVar7 = uVar6 << (bVar2 & 0x3f);
            uVar14 = uVar7 << (bVar8 & 0x3f);
            lVar24 = lVar24 + (longlong)(int)uVar31 + (lVar24 >> 3) * -8 + (longlong)iVar21;
            local_88 = local_88 + (int)(uVar7 >> (0x40 - bVar8 & 0x3f));
            uVar7 = (ulonglong)local_88;
            if (uVar25 <= local_88) {
              ooLogErrorPre();
              if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0
                 ) {
                (*g_fp_OodleNet_Plugin_Printf)
                          (0,"v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",0x316,
                           "OODLE ERROR : cur >= L\n");
              }
              ooLogErrorPost();
              goto LAB_14ff56e3b;
            }
            uVar28 = (int)uVar30 + local_88;
            uVar30 = (ulonglong)uVar28;
            uVar22 = (int)uVar29 + 1;
            uVar29 = (ulonglong)uVar22;
            param_4[(int)(uVar6 >> (0x40 - bVar2 & 0x3f))] = local_88;
            local_80 = uVar14;
          } while ((int)uVar22 < iVar23);
        }
        if ((longlong)puVar1 - (longlong)puVar20 < 8) {
          uVar22 = rrVB_Get32BE_Masked((byte *)((longlong)puVar20 + 4),(uchar *)puVar1);
          uVar10 = rrVB_Get32BE_Masked((uchar *)puVar20,(uchar *)puVar1);
          uVar7 = CONCAT44(uVar10,uVar22);
        }
        else {
          uVar7 = *puVar20;
          uVar7 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                  (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                  (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28
                  | uVar7 << 0x38;
        }
        puVar20 = (ulonglong *)((longlong)puVar20 + (lVar24 >> 3));
        uVar7 = local_80 | uVar7 >> (0x3fU - (char)lVar24 & 0x3f);
        uVar14 = uVar7 << (bVar2 & 0x3f);
        lVar24 = lVar24 + (longlong)(int)uVar31 + (lVar24 >> 3) * -8;
        if (param_5) {
          if (uVar28 < uVar25) {
            uVar25 = uVar25 - uVar28;
            if (local_88 <= uVar25) goto LAB_14ff56e24;
            ooLogErrorPre();
            if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            {
              pcVar26 = "OODLE ERROR : last < prev\n";
              iVar21 = 0x32f;
              goto LAB_14ff56db2;
            }
          }
          else {
            ooLogErrorPre();
            if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            {
              pcVar26 = "OODLE ERROR : sum >= L\n";
              iVar21 = 0x327;
LAB_14ff56db2:
              (*g_fp_OodleNet_Plugin_Printf)
                        (0,"v:\\devel\\projects\\oodle2\\network\\rrtans.cpp",iVar21,pcVar26);
            }
          }
          ooLogErrorPost();
          goto LAB_14ff56e3b;
        }
        uVar19 = uVar14 >> (0x40 - bVar8 & 0x3f);
        uVar14 = uVar14 << (bVar8 & 0x3f);
        lVar24 = lVar24 + iVar21;
        uVar25 = local_88 + (int)uVar19;
LAB_14ff56e24:
        param_4[(int)(uVar7 >> (-bVar2 & 0x3f))] = uVar25;
      }
    }
  }
  uVar19 = 1;
LAB_14ff56e3b:
  param_1->m_bits = uVar14;
  param_1->m_inv_bitlen = lVar24;
  param_1->m_cur = (uchar *)puVar20;
  param_1->m_end = (uchar *)puVar1;
  return (int)uVar19;
}

// rrUnfoldNegatives @ 14ff56e70

int __cdecl oo2net::rrUnfoldNegatives(uint param_1)

{
  return -(param_1 & 1) ^ param_1 >> 1;
}

// rrVB_Get32BE_Masked @ 14ff56ea0

uint __cdecl oo2net::rrVB_Get32BE_Masked(uchar *param_1,uchar *param_2)

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

// rrVB_Get64BE_Masked @ 14ff56f20

ulong64 __cdecl oo2net::rrVB_Get64BE_Masked(uchar *param_1,uchar *param_2)

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

// rrVarBits_ReadEliasGamma @ 14ff57000

uint __cdecl
oo2net::rrVarBits_ReadEliasGamma(ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4)

{
  uint uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  long64 lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  lVar16 = *param_2;
  uVar10 = 0;
  uVar11 = uVar10;
  while( true ) {
    while( true ) {
      puVar2 = (ulonglong *)*param_3;
      lVar15 = (longlong)*param_4 - (longlong)puVar2;
      lVar13 = lVar16 >> 3;
      if (lVar15 < 8) {
        uVar9 = uVar10;
        if (0 < lVar15) {
          uVar9 = (ulonglong)(byte)*puVar2;
        }
        uVar17 = uVar10;
        if (lVar15 != 1 && -1 < lVar15 + -1) {
          uVar17 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
        }
        uVar4 = uVar10;
        if (lVar15 != 2 && -1 < lVar15 + -2) {
          uVar4 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
        }
        uVar3 = uVar10;
        if (lVar15 != 3 && -1 < lVar15 + -3) {
          uVar3 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
        }
        lVar15 = (longlong)*param_4 - ((longlong)puVar2 + 4);
        uVar18 = uVar10;
        if (0 < lVar15) {
          uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
        }
        uVar7 = uVar10;
        if (lVar15 != 1 && -1 < lVar15 + -1) {
          uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
        }
        uVar6 = uVar10;
        if (lVar15 != 2 && -1 < lVar15 + -2) {
          uVar6 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
        }
        uVar8 = uVar10;
        if (lVar15 != 3 && -1 < lVar15 + -3) {
          uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
        }
        lVar16 = *param_2;
        uVar8 = ((((((uVar9 << 8 | uVar17) << 8 | uVar4) << 8 | uVar3) << 8 | uVar18) << 8 | uVar7)
                 << 8 | uVar6) << 8 | uVar8;
      }
      else {
        uVar9 = *puVar2;
        uVar8 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28 |
                uVar9 << 0x38;
      }
      *param_1 = *param_1 | uVar8 >> (0x3fU - (char)lVar16 & 0x3f);
      *param_3 = *param_3 + lVar13;
      lVar13 = *param_2 + lVar13 * -8;
      *param_2 = lVar13;
      uVar9 = *param_1;
      iVar12 = (int)uVar11;
      if (uVar9 != 0) break;
      *param_1 = 0;
      lVar13 = 0x3f - lVar13;
      lVar16 = *param_2 + lVar13;
      uVar11 = (ulonglong)(uint)(iVar12 + (int)lVar13);
      *param_2 = lVar16;
      if (*param_4 <= *param_3) {
        ooLogErrorPre();
        if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleNet_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        return 0;
      }
    }
    lVar13 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar14 = -(int)lVar13 + 0x3f;
    if (uVar14 < 0x1f) break;
    *param_1 = uVar9 << 0x1f;
    *param_2 = *param_2 + 0x1f;
    lVar16 = *param_2;
    uVar11 = (ulonglong)(iVar12 + 0x1f);
  }
  uVar1 = -(int)lVar13 + 0x40;
  *param_1 = uVar9 << ((byte)uVar1 & 0x3f);
  lVar13 = *param_2 + (ulonglong)uVar1;
  *param_2 = lVar13;
  uVar14 = iVar12 + uVar14;
  if (uVar14 == 0) {
    return 0;
  }
  puVar2 = (ulonglong *)*param_3;
  lVar15 = (longlong)*param_4 - (longlong)puVar2;
  if (lVar15 < 8) {
    uVar11 = uVar10;
    if (0 < lVar15) {
      uVar11 = (ulonglong)(byte)*puVar2;
    }
    uVar9 = uVar10;
    if (lVar15 != 1 && -1 < lVar15 + -1) {
      uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
    }
    uVar17 = uVar10;
    if (lVar15 != 2 && -1 < lVar15 + -2) {
      uVar17 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
    }
    uVar4 = uVar10;
    if (lVar15 != 3 && -1 < lVar15 + -3) {
      uVar4 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
    }
    lVar15 = (longlong)*param_4 - ((longlong)puVar2 + 4);
    uVar3 = uVar10;
    if (0 < lVar15) {
      uVar3 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
    }
    uVar18 = uVar10;
    if (lVar15 != 1 && -1 < lVar15 + -1) {
      uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
    }
    uVar7 = uVar10;
    if (lVar15 != 2 && -1 < lVar15 + -2) {
      uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
    }
    if (lVar15 != 3 && -1 < lVar15 + -3) {
      uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
    }
    uVar10 = ((((((uVar11 << 8 | uVar9) << 8 | uVar17) << 8 | uVar4) << 8 | uVar3) << 8 | uVar18) <<
              8 | uVar7) << 8 | uVar10;
  }
  else {
    uVar11 = *puVar2;
    uVar10 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
             (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
             (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 |
             uVar11 << 0x38;
  }
  *param_1 = *param_1 | uVar10 >> (0x3fU - (char)lVar13 & 0x3f);
  *param_3 = *param_3 + (lVar13 >> 3);
  *param_2 = *param_2 + (lVar13 >> 3) * -8;
  uVar11 = *param_1;
  bVar5 = (byte)uVar14;
  *param_1 = uVar11 << (bVar5 & 0x3f);
  *param_2 = *param_2 + (ulonglong)uVar14;
  return (1 << (bVar5 & 0x1f)) + -1 + (int)(uVar11 >> (0x40 - bVar5 & 0x3f));
}

// rrVarBits_ReadExpGolomb @ 14ff57360

uint __cdecl
oo2net::rrVarBits_ReadExpGolomb
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  long64 lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  lVar17 = *param_2;
  uVar11 = 0;
  uVar10 = uVar11;
  do {
    while( true ) {
      puVar1 = (ulonglong *)*param_3;
      lVar16 = (longlong)*param_4 - (longlong)puVar1;
      lVar14 = lVar17 >> 3;
      if (lVar16 < 8) {
        uVar8 = uVar11;
        if (0 < lVar16) {
          uVar8 = (ulonglong)(byte)*puVar1;
        }
        uVar18 = uVar11;
        if (lVar16 != 1 && -1 < lVar16 + -1) {
          uVar18 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
        }
        uVar3 = uVar11;
        if (lVar16 != 2 && -1 < lVar16 + -2) {
          uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
        }
        uVar2 = uVar11;
        if (lVar16 != 3 && -1 < lVar16 + -3) {
          uVar2 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
        }
        lVar16 = (longlong)*param_4 - ((longlong)puVar1 + 4);
        uVar19 = uVar11;
        if (0 < lVar16) {
          uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
        }
        uVar6 = uVar11;
        if (lVar16 != 1 && -1 < lVar16 + -1) {
          uVar6 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
        }
        uVar9 = uVar11;
        if (lVar16 != 2 && -1 < lVar16 + -2) {
          uVar9 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
        }
        uVar7 = uVar11;
        if (lVar16 != 3 && -1 < lVar16 + -3) {
          uVar7 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
        }
        lVar17 = *param_2;
        uVar7 = ((((((uVar8 << 8 | uVar18) << 8 | uVar3) << 8 | uVar2) << 8 | uVar19) << 8 | uVar6)
                 << 8 | uVar9) << 8 | uVar7;
      }
      else {
        uVar8 = *puVar1;
        uVar7 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 | (uVar8 & 0xff00) << 0x28 |
                uVar8 << 0x38;
      }
      *param_1 = *param_1 | uVar7 >> (0x3fU - (char)lVar17 & 0x3f);
      *param_3 = *param_3 + lVar14;
      lVar14 = *param_2 + lVar14 * -8;
      *param_2 = lVar14;
      uVar8 = *param_1;
      iVar12 = (int)uVar10;
      iVar13 = 0;
      if (uVar8 != 0) break;
      *param_1 = 0;
      lVar14 = 0x3f - lVar14;
      lVar17 = *param_2 + lVar14;
      uVar10 = (ulonglong)(uint)(iVar12 + (int)lVar14);
      *param_2 = lVar17;
      if (*param_4 <= *param_3) {
        ooLogErrorPre();
        if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleNet_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        lVar17 = *param_2;
LAB_14ff5769f:
        puVar1 = (ulonglong *)*param_3;
        lVar16 = lVar17 >> 3;
        lVar14 = (longlong)*param_4 - (longlong)puVar1;
        if (lVar14 < 8) {
          uVar10 = uVar11;
          if (0 < lVar14) {
            uVar10 = (ulonglong)(byte)*puVar1;
          }
          uVar8 = uVar11;
          if (lVar14 != 1 && -1 < lVar14 + -1) {
            uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
          }
          uVar18 = uVar11;
          if (lVar14 != 2 && -1 < lVar14 + -2) {
            uVar18 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
          }
          uVar3 = uVar11;
          if (lVar14 != 3 && -1 < lVar14 + -3) {
            uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
          }
          lVar14 = (longlong)*param_4 - ((longlong)puVar1 + 4);
          uVar2 = uVar11;
          if (0 < lVar14) {
            uVar2 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
          }
          uVar19 = uVar11;
          if (lVar14 != 1 && -1 < lVar14 + -1) {
            uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
          }
          uVar6 = uVar11;
          if (lVar14 != 2 && -1 < lVar14 + -2) {
            uVar6 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
          }
          if (lVar14 != 3 && -1 < lVar14 + -3) {
            uVar11 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
          }
          lVar17 = *param_2;
          uVar11 = ((((((uVar10 << 8 | uVar8) << 8 | uVar18) << 8 | uVar3) << 8 | uVar2) << 8 |
                    uVar19) << 8 | uVar6) << 8 | uVar11;
        }
        else {
          uVar10 = *puVar1;
          uVar11 = uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
                   (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
                   (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
                   (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38;
        }
        bVar4 = (byte)param_5;
        *param_1 = *param_1 | uVar11 >> (0x3fU - (char)lVar17 & 0x3f);
        *param_3 = *param_3 + lVar16;
        *param_2 = *param_2 + lVar16 * -8;
        uVar10 = *param_1;
        *param_1 = uVar10 << (bVar4 & 0x3f);
        *param_2 = *param_2 + (ulonglong)param_5;
        return (int)((uVar10 >> 1) >> (0x3f - bVar4 & 0x3f)) + (iVar13 << (bVar4 & 0x1f));
      }
    }
    lVar14 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar15 = -(int)lVar14 + 0x3f;
    if (uVar15 < 0x1f) {
      uVar5 = -(int)lVar14 + 0x40;
      uVar15 = uVar15 + iVar12;
      *param_1 = uVar8 << ((byte)uVar5 & 0x3f);
      lVar17 = *param_2 + (ulonglong)uVar5;
      *param_2 = lVar17;
      if (uVar15 != 0) {
        puVar1 = (ulonglong *)*param_3;
        lVar14 = (longlong)*param_4 - (longlong)puVar1;
        if (lVar14 < 8) {
          uVar10 = uVar11;
          if (0 < lVar14) {
            uVar10 = (ulonglong)(byte)*puVar1;
          }
          uVar8 = uVar11;
          if (lVar14 != 1 && -1 < lVar14 + -1) {
            uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
          }
          uVar18 = uVar11;
          if (lVar14 != 2 && -1 < lVar14 + -2) {
            uVar18 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
          }
          uVar3 = uVar11;
          if (lVar14 != 3 && -1 < lVar14 + -3) {
            uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
          }
          lVar14 = (longlong)*param_4 - ((longlong)puVar1 + 4);
          uVar2 = uVar11;
          if (0 < lVar14) {
            uVar2 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
          }
          uVar19 = uVar11;
          if (lVar14 != 1 && -1 < lVar14 + -1) {
            uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
          }
          uVar6 = uVar11;
          if (lVar14 != 2 && -1 < lVar14 + -2) {
            uVar6 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
          }
          uVar9 = uVar11;
          if (lVar14 != 3 && -1 < lVar14 + -3) {
            uVar9 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
          }
          uVar9 = ((((((uVar10 << 8 | uVar8) << 8 | uVar18) << 8 | uVar3) << 8 | uVar2) << 8 |
                   uVar19) << 8 | uVar6) << 8 | uVar9;
        }
        else {
          uVar10 = *puVar1;
          uVar9 = uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
                  (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
                  (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
                  (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38;
        }
        *param_1 = *param_1 | uVar9 >> (0x3fU - (char)lVar17 & 0x3f);
        *param_3 = *param_3 + (lVar17 >> 3);
        *param_2 = *param_2 + (lVar17 >> 3) * -8;
        uVar10 = *param_1;
        bVar4 = (byte)uVar15;
        *param_1 = uVar10 << (bVar4 & 0x3f);
        *param_2 = *param_2 + (ulonglong)uVar15;
        lVar17 = *param_2;
        iVar13 = (1 << (bVar4 & 0x1f)) + -1 + (int)(uVar10 >> (0x40 - bVar4 & 0x3f));
      }
      goto LAB_14ff5769f;
    }
    *param_1 = uVar8 << 0x1f;
    *param_2 = *param_2 + 0x1f;
    lVar17 = *param_2;
    uVar10 = (ulonglong)(iVar12 + 0x1f);
  } while( true );
}

// rrVarBits_ReadExpGolomb_Small @ 14ff57800

uint __cdecl
oo2net::rrVarBits_ReadExpGolomb_Small
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  long64 lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  uVar12 = *param_1;
  iVar16 = 0x40;
  if (uVar12 != 0) {
    lVar7 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar16 = 0x3f - (int)lVar7;
  }
  iVar16 = param_5 + 1 + iVar16 * 2;
  bVar2 = (byte)param_5;
  if (iVar16 < 0x1f) {
    *param_1 = uVar12 << ((byte)iVar16 & 0x3f);
    *param_2 = *param_2 + (longlong)iVar16;
    return (int)(uVar12 >> (0x40 - (byte)iVar16 & 0x3f)) - (1 << (bVar2 & 0x1f));
  }
  uVar13 = 0;
  uVar12 = uVar13;
  while( true ) {
    lVar18 = *param_2;
    while( true ) {
      puVar1 = (ulonglong *)*param_3;
      lVar7 = (longlong)*param_4 - (longlong)puVar1;
      lVar15 = lVar18 >> 3;
      if (lVar7 < 8) {
        uVar10 = uVar13;
        if (0 < lVar7) {
          uVar10 = (ulonglong)(byte)*puVar1;
        }
        uVar19 = uVar13;
        if (lVar7 != 1 && -1 < lVar7 + -1) {
          uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
        }
        uVar4 = uVar13;
        if (lVar7 != 2 && -1 < lVar7 + -2) {
          uVar4 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
        }
        uVar3 = uVar13;
        if (lVar7 != 3 && -1 < lVar7 + -3) {
          uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
        }
        lVar7 = (longlong)*param_4 - ((longlong)puVar1 + 4);
        uVar20 = uVar13;
        if (0 < lVar7) {
          uVar20 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
        }
        uVar8 = uVar13;
        if (lVar7 != 1 && -1 < lVar7 + -1) {
          uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
        }
        uVar11 = uVar13;
        if (lVar7 != 2 && -1 < lVar7 + -2) {
          uVar11 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
        }
        uVar9 = uVar13;
        if (lVar7 != 3 && -1 < lVar7 + -3) {
          uVar9 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
        }
        lVar18 = *param_2;
        uVar9 = ((((((uVar10 << 8 | uVar19) << 8 | uVar4) << 8 | uVar3) << 8 | uVar20) << 8 | uVar8)
                 << 8 | uVar11) << 8 | uVar9;
      }
      else {
        uVar10 = *puVar1;
        uVar9 = uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
                (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
                (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28
                | uVar10 << 0x38;
      }
      *param_1 = *param_1 | uVar9 >> (0x3fU - (char)lVar18 & 0x3f);
      *param_3 = *param_3 + lVar15;
      lVar7 = *param_2 + lVar15 * -8;
      *param_2 = lVar7;
      uVar10 = *param_1;
      iVar16 = (int)uVar12;
      iVar14 = 0;
      if (uVar10 != 0) break;
      *param_1 = 0;
      lVar7 = 0x3f - lVar7;
      lVar18 = *param_2 + lVar7;
      uVar12 = (ulonglong)(uint)(iVar16 + (int)lVar7);
      *param_2 = lVar18;
      if (*param_4 <= *param_3) {
        ooLogErrorPre();
        if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleNet_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        lVar18 = *param_2;
        goto LAB_14ff57b6c;
      }
    }
    lVar7 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar17 = -(int)lVar7 + 0x3f;
    if (uVar17 < 0x1f) break;
    *param_1 = uVar10 << 0x1f;
    *param_2 = *param_2 + 0x1f;
    uVar12 = (ulonglong)(iVar16 + 0x1f);
  }
  uVar6 = -(int)lVar7 + 0x40;
  uVar17 = uVar17 + iVar16;
  *param_1 = uVar10 << ((byte)uVar6 & 0x3f);
  lVar18 = *param_2 + (ulonglong)uVar6;
  *param_2 = lVar18;
  if (uVar17 != 0) {
    puVar1 = (ulonglong *)*param_3;
    lVar7 = (longlong)*param_4 - (longlong)puVar1;
    if (lVar7 < 8) {
      uVar12 = uVar13;
      if (0 < lVar7) {
        uVar12 = (ulonglong)(byte)*puVar1;
      }
      uVar10 = uVar13;
      if (lVar7 != 1 && -1 < lVar7 + -1) {
        uVar10 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
      }
      uVar19 = uVar13;
      if (lVar7 != 2 && -1 < lVar7 + -2) {
        uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
      }
      uVar4 = uVar13;
      if (lVar7 != 3 && -1 < lVar7 + -3) {
        uVar4 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
      }
      lVar7 = (longlong)*param_4 - ((longlong)puVar1 + 4);
      uVar3 = uVar13;
      if (0 < lVar7) {
        uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
      }
      uVar20 = uVar13;
      if (lVar7 != 1 && -1 < lVar7 + -1) {
        uVar20 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
      }
      uVar8 = uVar13;
      if (lVar7 != 2 && -1 < lVar7 + -2) {
        uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
      }
      uVar11 = uVar13;
      if (lVar7 != 3 && -1 < lVar7 + -3) {
        uVar11 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
      }
      uVar11 = ((((((uVar12 << 8 | uVar10) << 8 | uVar19) << 8 | uVar4) << 8 | uVar3) << 8 | uVar20)
                << 8 | uVar8) << 8 | uVar11;
    }
    else {
      uVar12 = *puVar1;
      uVar11 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
               (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
               (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28
               | uVar12 << 0x38;
    }
    *param_1 = *param_1 | uVar11 >> (0x3fU - (char)lVar18 & 0x3f);
    *param_3 = *param_3 + (lVar18 >> 3);
    *param_2 = *param_2 + (lVar18 >> 3) * -8;
    uVar12 = *param_1;
    bVar5 = (byte)uVar17;
    *param_1 = uVar12 << (bVar5 & 0x3f);
    *param_2 = *param_2 + (ulonglong)uVar17;
    lVar18 = *param_2;
    iVar14 = (1 << (bVar5 & 0x1f)) + -1 + (int)(uVar12 >> (0x40 - bVar5 & 0x3f));
  }
LAB_14ff57b6c:
  puVar1 = (ulonglong *)*param_3;
  lVar15 = lVar18 >> 3;
  lVar7 = (longlong)*param_4 - (longlong)puVar1;
  if (lVar7 < 8) {
    uVar12 = uVar13;
    if (0 < lVar7) {
      uVar12 = (ulonglong)(byte)*puVar1;
    }
    uVar10 = uVar13;
    if (lVar7 != 1 && -1 < lVar7 + -1) {
      uVar10 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
    }
    uVar19 = uVar13;
    if (lVar7 != 2 && -1 < lVar7 + -2) {
      uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
    }
    uVar4 = uVar13;
    if (lVar7 != 3 && -1 < lVar7 + -3) {
      uVar4 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
    }
    lVar7 = (longlong)*param_4 - ((longlong)puVar1 + 4);
    uVar3 = uVar13;
    if (0 < lVar7) {
      uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
    }
    uVar20 = uVar13;
    if (lVar7 != 1 && -1 < lVar7 + -1) {
      uVar20 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
    }
    uVar8 = uVar13;
    if (lVar7 != 2 && -1 < lVar7 + -2) {
      uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
    }
    if (lVar7 != 3 && -1 < lVar7 + -3) {
      uVar13 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
    }
    lVar18 = *param_2;
    uVar13 = ((((((uVar12 << 8 | uVar10) << 8 | uVar19) << 8 | uVar4) << 8 | uVar3) << 8 | uVar20)
              << 8 | uVar8) << 8 | uVar13;
  }
  else {
    uVar12 = *puVar1;
    uVar13 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
             (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
             (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28 |
             uVar12 << 0x38;
  }
  *param_1 = *param_1 | uVar13 >> (0x3fU - (char)lVar18 & 0x3f);
  *param_3 = *param_3 + lVar15;
  *param_2 = *param_2 + lVar15 * -8;
  uVar12 = *param_1;
  *param_1 = uVar12 << (bVar2 & 0x3f);
  *param_2 = *param_2 + (ulonglong)param_5;
  return (int)((uVar12 >> 1) >> (0x3f - bVar2 & 0x3f)) + (iVar14 << (bVar2 & 0x1f));
}

// rrVarBits_ReadRice @ 14ff57d20

uint __cdecl
oo2net::rrVarBits_ReadRice
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  long64 lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  lVar17 = *param_2;
  uVar10 = 0;
  uVar11 = uVar10;
  do {
    while( true ) {
      puVar1 = (ulonglong *)*param_3;
      lVar16 = (longlong)*param_4 - (longlong)puVar1;
      lVar13 = lVar17 >> 3;
      if (lVar16 < 8) {
        uVar9 = uVar10;
        if (0 < lVar16) {
          uVar9 = (ulonglong)(byte)*puVar1;
        }
        uVar18 = uVar10;
        if (lVar16 != 1 && -1 < lVar16 + -1) {
          uVar18 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
        }
        uVar4 = uVar10;
        if (lVar16 != 2 && -1 < lVar16 + -2) {
          uVar4 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
        }
        uVar3 = uVar10;
        if (lVar16 != 3 && -1 < lVar16 + -3) {
          uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
        }
        lVar16 = (longlong)*param_4 - ((longlong)puVar1 + 4);
        uVar19 = uVar10;
        if (0 < lVar16) {
          uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
        }
        uVar7 = uVar10;
        if (lVar16 != 1 && -1 < lVar16 + -1) {
          uVar7 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
        }
        uVar6 = uVar10;
        if (lVar16 != 2 && -1 < lVar16 + -2) {
          uVar6 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
        }
        uVar8 = uVar10;
        if (lVar16 != 3 && -1 < lVar16 + -3) {
          uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
        }
        lVar17 = *param_2;
        uVar8 = ((((((uVar9 << 8 | uVar18) << 8 | uVar4) << 8 | uVar3) << 8 | uVar19) << 8 | uVar7)
                 << 8 | uVar6) << 8 | uVar8;
      }
      else {
        uVar9 = *puVar1;
        uVar8 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28 |
                uVar9 << 0x38;
      }
      *param_1 = *param_1 | uVar8 >> (0x3fU - (char)lVar17 & 0x3f);
      *param_3 = *param_3 + lVar13;
      lVar13 = *param_2 + lVar13 * -8;
      *param_2 = lVar13;
      uVar9 = *param_1;
      iVar12 = (int)uVar11;
      if (uVar9 != 0) break;
      *param_1 = 0;
      lVar13 = 0x3f - lVar13;
      lVar17 = *param_2 + lVar13;
      uVar11 = (ulonglong)(uint)(iVar12 + (int)lVar13);
      *param_2 = lVar17;
      if (*param_4 <= *param_3) {
        ooLogErrorPre();
        if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleNet_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        iVar12 = 0;
LAB_14ff57f0d:
        lVar13 = *param_2;
        puVar1 = (ulonglong *)*param_3;
        lVar14 = lVar13 >> 3;
        lVar16 = (longlong)*param_4 - (longlong)puVar1;
        if (lVar16 < 8) {
          uVar11 = uVar10;
          if (0 < lVar16) {
            uVar11 = (ulonglong)(byte)*puVar1;
          }
          uVar9 = uVar10;
          if (lVar16 != 1 && -1 < lVar16 + -1) {
            uVar9 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
          }
          uVar18 = uVar10;
          if (lVar16 != 2 && -1 < lVar16 + -2) {
            uVar18 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
          }
          uVar4 = uVar10;
          if (lVar16 != 3 && -1 < lVar16 + -3) {
            uVar4 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
          }
          lVar13 = (longlong)*param_4 - ((longlong)puVar1 + 4);
          uVar3 = uVar10;
          if (0 < lVar13) {
            uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
          }
          uVar19 = uVar10;
          if (lVar13 != 1 && -1 < lVar13 + -1) {
            uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
          }
          uVar7 = uVar10;
          if (lVar13 != 2 && -1 < lVar13 + -2) {
            uVar7 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
          }
          if (lVar13 != 3 && -1 < lVar13 + -3) {
            uVar10 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
          }
          lVar13 = *param_2;
          uVar10 = ((((((uVar11 << 8 | uVar9) << 8 | uVar18) << 8 | uVar4) << 8 | uVar3) << 8 |
                    uVar19) << 8 | uVar7) << 8 | uVar10;
        }
        else {
          uVar11 = *puVar1;
          uVar10 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                   (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                   (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                   (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
        }
        bVar2 = (byte)param_5;
        *param_1 = *param_1 | uVar10 >> (0x3fU - (char)lVar13 & 0x3f);
        *param_3 = *param_3 + lVar14;
        *param_2 = *param_2 + lVar14 * -8;
        uVar11 = *param_1;
        *param_1 = uVar11 << (bVar2 & 0x3f);
        *param_2 = *param_2 + (ulonglong)param_5;
        return (int)((uVar11 >> 1) >> (0x3f - bVar2 & 0x3f)) + (iVar12 << (bVar2 & 0x1f));
      }
    }
    lVar13 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = -(int)lVar13 + 0x3f;
    if (uVar15 < 0x1f) {
      uVar5 = -(int)lVar13 + 0x40;
      iVar12 = uVar15 + iVar12;
      *param_1 = uVar9 << ((byte)uVar5 & 0x3f);
      *param_2 = *param_2 + (ulonglong)uVar5;
      goto LAB_14ff57f0d;
    }
    *param_1 = uVar9 << 0x1f;
    *param_2 = *param_2 + 0x1f;
    lVar17 = *param_2;
    uVar11 = (ulonglong)(iVar12 + 0x1f);
  } while( true );
}

// rrVarBits_ReadRice_Small @ 14ff58080

uint __cdecl
oo2net::rrVarBits_ReadRice_Small
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  long64 lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  uVar13 = *param_1;
  if (uVar13 == 0) {
    iVar14 = 0x40;
  }
  else {
    lVar7 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar14 = 0x3f - (int)lVar7;
  }
  uVar3 = param_5 + 1 + iVar14;
  bVar2 = (byte)param_5;
  if (uVar3 < 0x1f) {
    *param_1 = uVar13 << ((byte)uVar3 & 0x3f);
    *param_2 = *param_2 + (ulonglong)uVar3;
    return (iVar14 + -1 << (bVar2 & 0x1f)) + (int)(uVar13 >> (0x40 - (byte)uVar3 & 0x3f));
  }
  lVar17 = *param_2;
  uVar12 = 0;
  uVar13 = uVar12;
  do {
    while( true ) {
      puVar1 = (ulonglong *)*param_3;
      lVar7 = (longlong)*param_4 - (longlong)puVar1;
      lVar15 = lVar17 >> 3;
      if (lVar7 < 8) {
        uVar11 = uVar12;
        if (0 < lVar7) {
          uVar11 = (ulonglong)(byte)*puVar1;
        }
        uVar18 = uVar12;
        if (lVar7 != 1 && -1 < lVar7 + -1) {
          uVar18 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
        }
        uVar5 = uVar12;
        if (lVar7 != 2 && -1 < lVar7 + -2) {
          uVar5 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
        }
        uVar4 = uVar12;
        if (lVar7 != 3 && -1 < lVar7 + -3) {
          uVar4 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
        }
        lVar7 = (longlong)*param_4 - ((longlong)puVar1 + 4);
        uVar19 = uVar12;
        if (0 < lVar7) {
          uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
        }
        uVar9 = uVar12;
        if (lVar7 != 1 && -1 < lVar7 + -1) {
          uVar9 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
        }
        uVar8 = uVar12;
        if (lVar7 != 2 && -1 < lVar7 + -2) {
          uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
        }
        uVar10 = uVar12;
        if (lVar7 != 3 && -1 < lVar7 + -3) {
          uVar10 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
        }
        lVar17 = *param_2;
        uVar10 = ((((((uVar11 << 8 | uVar18) << 8 | uVar5) << 8 | uVar4) << 8 | uVar19) << 8 | uVar9
                  ) << 8 | uVar8) << 8 | uVar10;
      }
      else {
        uVar11 = *puVar1;
        uVar10 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                 (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                 (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                 (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
      }
      *param_1 = *param_1 | uVar10 >> (0x3fU - (char)lVar17 & 0x3f);
      *param_3 = *param_3 + lVar15;
      lVar7 = *param_2 + lVar15 * -8;
      *param_2 = lVar7;
      uVar11 = *param_1;
      iVar14 = (int)uVar13;
      if (uVar11 != 0) break;
      *param_1 = 0;
      lVar7 = 0x3f - lVar7;
      lVar17 = *param_2 + lVar7;
      uVar13 = (ulonglong)(uint)(iVar14 + (int)lVar7);
      *param_2 = lVar17;
      if (*param_4 <= *param_3) {
        ooLogErrorPre();
        if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleNet_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        iVar14 = 0;
LAB_14ff582a0:
        lVar7 = *param_2;
        puVar1 = (ulonglong *)*param_3;
        lVar16 = lVar7 >> 3;
        lVar15 = (longlong)*param_4 - (longlong)puVar1;
        if (lVar15 < 8) {
          uVar13 = uVar12;
          if (0 < lVar15) {
            uVar13 = (ulonglong)(byte)*puVar1;
          }
          uVar11 = uVar12;
          if (lVar15 != 1 && -1 < lVar15 + -1) {
            uVar11 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
          }
          uVar18 = uVar12;
          if (lVar15 != 2 && -1 < lVar15 + -2) {
            uVar18 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
          }
          uVar5 = uVar12;
          if (lVar15 != 3 && -1 < lVar15 + -3) {
            uVar5 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
          }
          lVar7 = (longlong)*param_4 - ((longlong)puVar1 + 4);
          uVar4 = uVar12;
          if (0 < lVar7) {
            uVar4 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
          }
          uVar19 = uVar12;
          if (lVar7 != 1 && -1 < lVar7 + -1) {
            uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
          }
          uVar9 = uVar12;
          if (lVar7 != 2 && -1 < lVar7 + -2) {
            uVar9 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
          }
          if (lVar7 != 3 && -1 < lVar7 + -3) {
            uVar12 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
          }
          lVar7 = *param_2;
          uVar12 = ((((((uVar13 << 8 | uVar11) << 8 | uVar18) << 8 | uVar5) << 8 | uVar4) << 8 |
                    uVar19) << 8 | uVar9) << 8 | uVar12;
        }
        else {
          uVar13 = *puVar1;
          uVar12 = uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 |
                   (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
                   (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 |
                   (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38;
        }
        *param_1 = *param_1 | uVar12 >> (0x3fU - (char)lVar7 & 0x3f);
        *param_3 = *param_3 + lVar16;
        *param_2 = *param_2 + lVar16 * -8;
        uVar13 = *param_1;
        *param_1 = uVar13 << (bVar2 & 0x3f);
        *param_2 = *param_2 + (ulonglong)param_5;
        return (int)((uVar13 >> 1) >> (0x3f - bVar2 & 0x3f)) + (iVar14 << (bVar2 & 0x1f));
      }
    }
    lVar7 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar3 = -(int)lVar7 + 0x3f;
    if (uVar3 < 0x1f) {
      uVar6 = -(int)lVar7 + 0x40;
      iVar14 = uVar3 + iVar14;
      *param_1 = uVar11 << ((byte)uVar6 & 0x3f);
      *param_2 = *param_2 + (ulonglong)uVar6;
      goto LAB_14ff582a0;
    }
    *param_1 = uVar11 << 0x1f;
    *param_2 = *param_2 + 0x1f;
    lVar17 = *param_2;
    uVar13 = (ulonglong)(iVar14 + 0x1f);
  } while( true );
}

// rrVarBits_ReadUnary @ 14ff58440

uint __cdecl
oo2net::rrVarBits_ReadUnary(ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  long64 lVar16;
  ulonglong uVar17;
  
  lVar16 = *param_2;
  uVar17 = 0;
  uVar12 = uVar17;
  while( true ) {
    while( true ) {
      puVar1 = (ulonglong *)*param_3;
      lVar6 = (longlong)*param_4 - (longlong)puVar1;
      lVar10 = lVar16 >> 3;
      if (lVar6 < 8) {
        uVar3 = uVar17;
        if (0 < lVar6) {
          uVar3 = (ulonglong)(byte)*puVar1;
        }
        uVar8 = uVar17;
        if (lVar6 != 1 && -1 < lVar6 + -1) {
          uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
        }
        uVar14 = uVar17;
        if (lVar6 != 2 && -1 < lVar6 + -2) {
          uVar14 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
        }
        uVar5 = uVar17;
        if (lVar6 != 3 && -1 < lVar6 + -3) {
          uVar5 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
        }
        lVar6 = (longlong)*param_4 - ((longlong)puVar1 + 4);
        uVar9 = uVar17;
        if (0 < lVar6) {
          uVar9 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
        }
        uVar15 = uVar17;
        if (lVar6 != 1 && -1 < lVar6 + -1) {
          uVar15 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
        }
        uVar7 = uVar17;
        if (lVar6 != 2 && -1 < lVar6 + -2) {
          uVar7 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
        }
        uVar2 = uVar17;
        if (lVar6 != 3 && -1 < lVar6 + -3) {
          uVar2 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
        }
        lVar16 = *param_2;
        uVar2 = ((((((uVar3 << 8 | uVar8) << 8 | uVar14) << 8 | uVar5) << 8 | uVar9) << 8 | uVar15)
                 << 8 | uVar7) << 8 | uVar2;
      }
      else {
        uVar3 = *puVar1;
        uVar2 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 | (uVar3 & 0xff00) << 0x28 |
                uVar3 << 0x38;
      }
      *param_1 = *param_1 | uVar2 >> (0x3fU - (char)lVar16 & 0x3f);
      *param_3 = *param_3 + lVar10;
      lVar6 = *param_2 + lVar10 * -8;
      *param_2 = lVar6;
      uVar3 = *param_1;
      iVar11 = (int)uVar12;
      if (uVar3 != 0) break;
      *param_1 = 0;
      lVar6 = 0x3f - lVar6;
      lVar16 = *param_2 + lVar6;
      uVar12 = (ulonglong)(uint)(iVar11 + (int)lVar6);
      *param_2 = lVar16;
      if (*param_4 <= *param_3) {
        ooLogErrorPre();
        if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleNet_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        return 0;
      }
    }
    lVar6 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar13 = -(int)lVar6 + 0x3f;
    if (uVar13 < 0x1f) break;
    *param_1 = uVar3 << 0x1f;
    *param_2 = *param_2 + 0x1f;
    lVar16 = *param_2;
    uVar12 = (ulonglong)(iVar11 + 0x1f);
  }
  uVar4 = -(int)lVar6 + 0x40;
  *param_1 = uVar3 << ((byte)uVar4 & 0x3f);
  *param_2 = *param_2 + (ulonglong)uVar4;
  return uVar13 + iVar11;
}

// rrVarBits_WriteEliasGamma @ 14ff58660

void __cdecl
oo2net::rrVarBits_WriteEliasGamma
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = param_5 + 1;
  uVar1 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  uVar3 = uVar1;
  if (0x1e < uVar1) {
    uVar5 = (ulonglong)(uVar1 / 0x1f);
    do {
      *param_1 = *param_1 << 0x1f;
      *param_2 = *param_2 + -0x1f;
      uVar3 = uVar3 - 0x1f;
      lVar6 = 0x3f - *param_2 >> 3;
      uVar2 = *param_1 << ((char)*param_2 + 1U & 0x3f);
      *(ulonglong *)*param_3 =
           uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
           (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
           (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
      *param_3 = *param_3 + lVar6;
      *param_2 = *param_2 + lVar6 * 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *param_1 = *param_1 << ((byte)(uVar3 + 1) & 0x3f) | 1;
  *param_2 = *param_2 - (ulonglong)(uVar3 + 1);
  lVar6 = 0x3f - *param_2 >> 3;
  uVar5 = *param_1 << ((char)*param_2 + 1U & 0x3f);
  *(ulonglong *)*param_3 =
       uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
       (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
       (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
  *param_3 = *param_3 + lVar6;
  *param_2 = *param_2 + lVar6 * 8;
  if (uVar1 != 0) {
    *param_1 = (ulonglong)(uVar4 - (1 << ((byte)uVar1 & 0x1f))) | *param_1 << ((byte)uVar1 & 0x3f);
    *param_2 = *param_2 - (ulonglong)uVar1;
    lVar6 = 0x3f - *param_2 >> 3;
    uVar5 = *param_1 << ((char)*param_2 + 1U & 0x3f);
    *(ulonglong *)*param_3 =
         uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
         (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
         (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
    *param_3 = *param_3 + lVar6;
    *param_2 = *param_2 + lVar6 * 8;
  }
  return;
}

// rrVarBits_WriteExpGolomb @ 14ff587a0

void __cdecl
oo2net::rrVarBits_WriteExpGolomb
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5,
          uint param_6)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  bVar2 = (byte)param_6;
  uVar5 = (param_5 >> (bVar2 & 0x1f)) + 1;
  uVar1 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  uVar4 = uVar1;
  if (0x1e < uVar1) {
    uVar6 = (ulonglong)(uVar1 / 0x1f);
    do {
      *param_1 = *param_1 << 0x1f;
      *param_2 = *param_2 + -0x1f;
      uVar4 = uVar4 - 0x1f;
      lVar7 = 0x3f - *param_2 >> 3;
      uVar3 = *param_1 << ((char)*param_2 + 1U & 0x3f);
      *(ulonglong *)*param_3 =
           uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
           (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
           (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
      *param_3 = *param_3 + lVar7;
      *param_2 = *param_2 + lVar7 * 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *param_1 = *param_1 << ((byte)(uVar4 + 1) & 0x3f) | 1;
  *param_2 = *param_2 - (ulonglong)(uVar4 + 1);
  lVar7 = 0x3f - *param_2 >> 3;
  uVar6 = *param_1 << ((char)*param_2 + 1U & 0x3f);
  *(ulonglong *)*param_3 =
       uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
       (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
       (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
  *param_3 = *param_3 + lVar7;
  *param_2 = *param_2 + lVar7 * 8;
  if (uVar1 != 0) {
    *param_1 = (ulonglong)(uVar5 - (1 << ((byte)uVar1 & 0x1f))) | *param_1 << ((byte)uVar1 & 0x3f);
    *param_2 = *param_2 - (ulonglong)uVar1;
    lVar7 = 0x3f - *param_2 >> 3;
    uVar6 = *param_1 << ((char)*param_2 + 1U & 0x3f);
    *(ulonglong *)*param_3 =
         uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
         (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
         (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
    *param_3 = *param_3 + lVar7;
    *param_2 = *param_2 + lVar7 * 8;
  }
  *param_1 = (ulonglong)((1 << (bVar2 & 0x1f)) - 1U & param_5) | *param_1 << (bVar2 & 0x3f);
  *param_2 = *param_2 - (ulonglong)param_6;
  lVar7 = 0x3f - *param_2 >> 3;
  uVar6 = *param_1 << ((char)*param_2 + 1U & 0x3f);
  *(ulonglong *)*param_3 =
       uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
       (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
       (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
  *param_3 = *param_3 + lVar7;
  *param_2 = *param_2 + lVar7 * 8;
  return;
}

// rrVarBits_WriteRice @ 14ff58940

void __cdecl
oo2net::rrVarBits_WriteRice
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5,
          uint param_6)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  bVar1 = (byte)param_6;
  uVar5 = param_5 >> (bVar1 & 0x1f);
  if (0x1e < uVar5) {
    uVar3 = (ulonglong)(uVar5 / 0x1f);
    do {
      *param_1 = *param_1 << 0x1f;
      *param_2 = *param_2 + -0x1f;
      uVar5 = uVar5 - 0x1f;
      lVar4 = 0x3f - *param_2 >> 3;
      uVar2 = *param_1 << ((char)*param_2 + 1U & 0x3f);
      *(ulonglong *)*param_3 =
           uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
           (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
           (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
      *param_3 = *param_3 + lVar4;
      *param_2 = *param_2 + lVar4 * 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *param_1 = *param_1 << ((byte)(uVar5 + 1) & 0x3f) | 1;
  *param_2 = *param_2 - (ulonglong)(uVar5 + 1);
  lVar4 = 0x3f - *param_2 >> 3;
  uVar3 = *param_1 << ((char)*param_2 + 1U & 0x3f);
  *(ulonglong *)*param_3 =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  *param_3 = *param_3 + lVar4;
  *param_2 = *param_2 + lVar4 * 8;
  *param_1 = (longlong)(int)((1 << (bVar1 & 0x1f)) - 1U & param_5) | *param_1 << (bVar1 & 0x3f);
  *param_2 = *param_2 - (ulonglong)param_6;
  lVar4 = 0x3f - *param_2 >> 3;
  uVar3 = *param_1 << ((char)*param_2 + 1U & 0x3f);
  *(ulonglong *)*param_3 =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  *param_3 = *param_3 + lVar4;
  *param_2 = *param_2 + lVar4 * 8;
  return;
}

// rrVarBits_WriteUnary @ 14ff58a70

void __cdecl
oo2net::rrVarBits_WriteUnary
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (0x1e < param_5) {
    uVar2 = (ulonglong)(param_5 / 0x1f);
    do {
      *param_1 = *param_1 << 0x1f;
      *param_2 = *param_2 + -0x1f;
      param_5 = param_5 - 0x1f;
      lVar3 = 0x3f - *param_2 >> 3;
      uVar1 = *param_1 << ((char)*param_2 + 1U & 0x3f);
      *(ulonglong *)*param_3 =
           uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
           (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
           (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
      *param_3 = *param_3 + lVar3;
      *param_2 = *param_2 + lVar3 * 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *param_1 = *param_1 << ((byte)(param_5 + 1) & 0x3f) | 1;
  *param_2 = *param_2 - (ulonglong)(param_5 + 1);
  lVar3 = 0x3f - *param_2 >> 3;
  uVar2 = *param_1 << ((char)*param_2 + 1U & 0x3f);
  *(ulonglong *)*param_3 =
       uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
       (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
       (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  *param_3 = *param_3 + lVar3;
  *param_2 = *param_2 + lVar3 * 8;
  return;
}

