// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: radaudio_decoder_win64
// Functions: 16

// FUN_14f8c2f90 @ 14f8c2f90

undefined8
FUN_14f8c2f90(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             ulonglong *param_5)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  param_4 = param_4 & 0xffffffff;
  uVar6 = param_3 >> 6;
  lVar4 = param_3 + uVar6 * -0x40;
  if (param_2 <= uVar6) {
    return 0;
  }
  uVar5 = 0x40 - lVar4;
  if (param_4 <= uVar5) {
    uVar5 = param_4;
  }
  bVar1 = (byte)uVar5;
  uVar3 = (ulonglong)(*(longlong *)(param_1 + uVar6 * 8) << ((0x40 - bVar1) - (char)lVar4 & 0x3f))
          >> (0x40 - bVar1 & 0x3f);
  if (uVar5 != param_4) {
    if (param_2 <= uVar6 + 1) {
      return 0;
    }
    bVar2 = (bVar1 - (char)param_4) + 0x40;
    uVar3 = uVar3 | ((ulonglong)(*(longlong *)(param_1 + (uVar6 + 1) * 8) << (bVar2 & 0x3f)) >>
                    (bVar2 & 0x3f)) << (bVar1 & 0x3f);
  }
  *param_5 = uVar3;
  return 1;
}

// FUN_14f8c3110 @ 14f8c3110

longlong FUN_14f8c3110(longlong param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                      uint param_5)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  bVar2 = *(byte *)(param_1 + 0xd);
  uVar8 = (ulonglong)bVar2;
  uVar4 = (ulonglong)(((uint)bVar2 + (uint)*(byte *)(param_1 + 0xe)) * param_5) +
          (ulonglong)*(byte *)(param_1 + 0xe);
  uVar3 = uVar4 >> 6;
  lVar5 = uVar4 + uVar3 * -0x40;
  uVar4 = 0;
  if (uVar3 < param_4) {
    uVar7 = 0x40 - lVar5;
    if (uVar8 <= uVar7) {
      uVar7 = uVar8;
    }
    bVar1 = (byte)uVar7;
    uVar6 = (ulonglong)(*(longlong *)(param_3 + uVar3 * 8) << ((0x40 - bVar1) - (char)lVar5 & 0x3f))
            >> (0x40 - bVar1 & 0x3f);
    uVar4 = uVar6;
    if ((uVar7 != uVar8) && (uVar4 = 0, uVar3 + 1 < param_4)) {
      bVar2 = (bVar1 - bVar2) + 0x40;
      uVar4 = uVar6 | ((ulonglong)(*(longlong *)(param_3 + (uVar3 + 1) * 8) << (bVar2 & 0x3f)) >>
                      (bVar2 & 0x3f)) << (bVar1 & 0x3f);
    }
  }
  return (longlong)(((ulonglong)param_5 - (ulonglong)(*(ushort *)(param_1 + 0x20) >> 1)) * *param_2)
         / param_2[1] + param_2[3] + param_2[2] + uVar4;
}

// FUN_14f8c3200 @ 14f8c3200

longlong FUN_14f8c3200(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                      uint param_5)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  bVar3 = *(byte *)(param_1 + 0xe);
  uVar2 = ((uint)*(byte *)(param_1 + 0xd) + (uint)bVar3) * param_5;
  uVar7 = (ulonglong)(uVar2 >> 6);
  lVar4 = (ulonglong)uVar2 + uVar7 * -0x40;
  uVar6 = 0;
  if (uVar7 < param_4) {
    uVar8 = 0x40 - lVar4;
    if (bVar3 <= uVar8) {
      uVar8 = (ulonglong)bVar3;
    }
    bVar1 = (byte)uVar8;
    uVar5 = (ulonglong)(*(longlong *)(param_3 + uVar7 * 8) << ((0x40 - bVar1) - (char)lVar4 & 0x3f))
            >> (0x40 - bVar1 & 0x3f);
    uVar6 = uVar5;
    if ((uVar8 != (uint)bVar3) && (uVar6 = 0, uVar7 + 1 < param_4)) {
      bVar3 = (bVar1 - bVar3) + 0x40;
      uVar6 = uVar5 | ((ulonglong)(*(longlong *)(param_3 + (uVar7 + 1) * 8) << (bVar3 & 0x3f)) >>
                      (bVar3 & 0x3f)) << (bVar1 & 0x3f);
    }
  }
  return (longlong)
         (((ulonglong)param_5 - (ulonglong)(*(ushort *)(param_1 + 0x20) >> 1)) *
         *(longlong *)(param_2 + 0x20)) / *(longlong *)(param_2 + 0x28) +
         *(longlong *)(param_2 + 0x38) + *(longlong *)(param_2 + 0x30) + uVar6 <<
         (*(byte *)(param_1 + 0xc) & 0x3f);
}

// FUN_14f8c3390 @ 14f8c3390

longlong FUN_14f8c3390(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                      ulonglong param_5,undefined8 *param_6,longlong *param_7)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if (*(ulonglong *)(param_1 + 0x10) <= param_5) {
    param_5 = *(ulonglong *)(param_1 + 0x10) - 1;
  }
  uVar7 = (uint)*(ushort *)(param_1 + 0x20);
  param_4 = param_4 >> 3;
  iVar8 = 0;
  if (*(ushort *)(param_1 + 0x20) != 0) {
    do {
      uVar9 = uVar7 >> 1;
      uVar3 = FUN_14f8c3200(param_1,param_2,param_3,param_4,uVar9 + iVar8);
      if (uVar3 <= param_5) {
        iVar8 = uVar9 + iVar8 + 1;
        uVar9 = uVar7 + (-1 - uVar9);
      }
      uVar7 = uVar9;
    } while (uVar7 != 0);
  }
  iVar1 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar1 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    uVar4 = FUN_14f8c3200(param_1,param_2,param_3,param_4,iVar1);
    *param_6 = uVar4;
  }
  lVar5 = FUN_14f8c3110(param_1,param_2,param_3,param_4,iVar1);
  if (param_7 != (longlong *)0x0) {
    uVar2 = *(ushort *)(param_1 + 0x20);
    if (iVar1 + 1U < (uint)uVar2) {
      lVar6 = FUN_14f8c3110(param_1,param_2,param_3,param_4,iVar1 + 1U);
    }
    else {
      uVar7 = *(ushort *)(param_1 + 10) + 0x28;
      if (uVar2 != 0) {
        uVar7 = *(ushort *)(param_1 + 10) + 0x68 +
                (((uint)*(byte *)(param_1 + 0xe) + (uint)*(byte *)(param_1 + 0xd)) * (uint)uVar2 +
                 0x3f >> 6) * 8;
      }
      lVar6 = *(longlong *)(param_1 + 0x18) - (ulonglong)uVar7;
    }
    *param_7 = lVar6 - lVar5;
  }
  uVar7 = *(ushort *)(param_1 + 10) + 0x28;
  if (*(ushort *)(param_1 + 0x20) != 0) {
    uVar7 = *(ushort *)(param_1 + 10) + 0x68 +
            (((uint)*(byte *)(param_1 + 0xe) + (uint)*(byte *)(param_1 + 0xd)) *
             (uint)*(ushort *)(param_1 + 0x20) + 0x3f >> 6) * 8;
  }
  return (ulonglong)uVar7 + lVar5;
}

// UERARadADecodeBlock_1 @ 14f8c3530

/* short __cdecl UERARadADecodeBlock_1(struct RadAContainer * __ptr64,unsigned char const *
   __ptr64,unsigned __int64,float * __ptr64,unsigned __int64,unsigned __int64 * __ptr64) */

short __cdecl
UERARadADecodeBlock_1
          (RadAContainer *param_1,uchar *param_2,__uint64 param_3,float *param_4,__uint64 param_5,
          __uint64 *param_6)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  uchar *puVar7;
  byte bVar8;
  float *pfVar9;
  ulonglong local_res18;
  longlong local_res20;
  float *local_58;
  longlong local_50;
  
  puVar7 = param_2 + 1;
  uVar4 = param_3 - 1;
  sVar3 = 0;
  uVar6 = 0;
  bVar8 = (byte)((byte)param_1[9] + 1 >> 1);
  if (bVar8 < 2) {
    if (bVar8 == 0) goto LAB_14f8c367b;
  }
  else {
    puVar7 = param_2 + 3;
    uVar4 = param_3 - 3;
  }
  sVar3 = 0;
  local_res20 = param_5 * 4;
  local_58 = param_4;
  do {
    local_50 = (longlong)local_58 + local_res20;
    pfVar9 = (float *)(local_50 + local_res20);
    uVar1 = UERARadAudioDecoderGetChunkLength_1
                      (*(undefined8 *)(param_1 + uVar6 * 8 + 0x30),puVar7,uVar4);
    if (uVar4 < uVar1) {
      return -2;
    }
    local_res18 = 0;
    iVar2 = UERARadAudioDecoderDecodeChunk_1
                      (*(undefined8 *)(param_1 + uVar6 * 8 + 0x30),puVar7,uVar4,&local_res18,
                       &local_58,0x400);
    if (iVar2 == -1) {
      *param_6 = 0;
      return -1;
    }
    if (iVar2 < 0) {
      return -2;
    }
    if (sVar3 != 0) {
      if (iVar2 != sVar3) {
        return -2;
      }
      if (0x400 < sVar3) {
        return -2;
      }
    }
    sVar3 = (short)iVar2;
    if (uVar4 < local_res18) {
      return -2;
    }
    puVar7 = puVar7 + local_res18;
    uVar4 = uVar4 - local_res18;
    bVar5 = (char)uVar6 + 1;
    uVar6 = (ulonglong)bVar5;
    local_58 = pfVar9;
  } while (bVar5 < bVar8);
LAB_14f8c367b:
  *param_6 = (longlong)puVar7 - (longlong)param_2;
  return sVar3;
}

// UERARadADecodeSeekTable_1 @ 14f8c36b0

/* enum RadASeekTableReturn __cdecl UERARadADecodeSeekTable_1(struct RadAFileHeader const *
   __ptr64,struct RadASeekTableHeader const * __ptr64,unsigned char * __ptr64,unsigned
   __int64,bool,struct SeekTableEnumerationState * __ptr64,unsigned char * __ptr64,unsigned char *
   __ptr64,unsigned __int64 * __ptr64) */

RadASeekTableReturn __cdecl
UERARadADecodeSeekTable_1
          (RadAFileHeader *param_1,RadASeekTableHeader *param_2,uchar *param_3,__uint64 param_4,
          bool param_5,SeekTableEnumerationState *param_6,uchar *param_7,uchar *param_8,
          __uint64 *param_9)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar5;
  longlong lVar6;
  RadASeekTableReturn RVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ulonglong uVar18;
  ulonglong uVar19;
  uint local_64;
  undefined8 uStack_48;
  uint uVar16;
  ulonglong uVar17;
  
  if (((((param_6 == (SeekTableEnumerationState *)0x0) || (param_8 == (uchar *)0x0)) ||
       (param_7 == (uchar *)0x0)) || ((param_3 == (uchar *)0x0 || (param_4 == 0)))) ||
     ((param_1 == (RadAFileHeader *)0x0 ||
      ((param_2 == (RadASeekTableHeader *)0x0 || (param_9 == (__uint64 *)0x0)))))) {
    RVar7 = 1;
  }
  else {
    lVar6 = *(longlong *)param_6;
    uStack_48 = *(undefined8 *)(param_6 + 8);
    uVar17 = *(ulonglong *)(param_6 + 8);
    uVar16 = (uint)uVar17;
    uVar13 = param_4 >> 3;
    if ((char)(uVar17 >> 0x10) == '\0') {
      bVar1 = param_1->bits_for_seek_table_samples;
      uVar4 = param_1->seek_table_entry_count;
      local_64 = param_1->rada_header_bytes + 0x28;
      bVar2 = param_1->bits_for_seek_table_bytes;
      if (uVar4 != 0) {
        local_64 = param_1->rada_header_bytes + 0x68 +
                   (((uint)bVar2 + (uint)bVar1) * (uint)uVar4 + 0x3f >> 6) * 8;
      }
      if ((ushort)uVar17 < uVar4) {
        bVar3 = param_1->shift_bits_for_seek_table_samples;
        do {
          uVar8 = (ulonglong)bVar1;
          uVar18 = (ulonglong)(((uint)uVar17 & 0xffff) * ((uint)bVar2 + (uint)bVar1)) +
                   lVar6 * -0x40;
          uVar19 = uVar18 >> 6;
          lVar10 = uVar18 + uVar19 * -0x40;
          if (uVar13 <= uVar19) {
LAB_14f8c3a22:
            if (uVar19 != 0) {
              uVar19 = uVar19 - 1;
            }
            *param_9 = uVar19 * 8;
            *(ulonglong *)param_6 = lVar6 + uVar19;
            *(undefined8 *)(param_6 + 8) = uStack_48;
            return 3;
          }
          uVar14 = 0x40 - lVar10;
          if (uVar8 <= uVar14) {
            uVar14 = uVar8;
          }
          bVar5 = (byte)uVar14;
          uVar12 = (ulonglong)
                   (*(longlong *)(param_3 + uVar19 * 8) << ((0x40 - bVar5) - (char)lVar10 & 0x3f))
                   >> (0x40 - bVar5 & 0x3f);
          if (uVar14 != uVar8) {
            if (uVar13 <= uVar19 + 1) goto LAB_14f8c3a22;
            bVar9 = (bVar5 - bVar1) + 0x40;
            uVar12 = uVar12 | ((ulonglong)
                               (*(longlong *)(param_3 + (uVar19 + 1) * 8) << (bVar9 & 0x3f)) >>
                              (bVar9 & 0x3f)) << (bVar5 & 0x3f);
          }
          uVar8 = bVar1 + uVar18 >> 6;
          lVar10 = bVar1 + uVar18 + uVar8 * -0x40;
          if (uVar13 <= uVar8) goto LAB_14f8c3a22;
          uVar14 = (ulonglong)bVar2;
          uVar18 = 0x40 - lVar10;
          if (uVar14 <= uVar18) {
            uVar18 = uVar14;
          }
          bVar5 = (byte)uVar18;
          uVar11 = (ulonglong)
                   (*(longlong *)(param_3 + uVar8 * 8) << ((0x40 - bVar5) - (char)lVar10 & 0x3f)) >>
                   (0x40 - bVar5 & 0x3f);
          if (uVar18 != uVar14) {
            if (uVar13 <= uVar8 + 1) goto LAB_14f8c3a22;
            bVar9 = (bVar5 - bVar2) + 0x40;
            uVar11 = uVar11 | ((ulonglong)
                               (*(longlong *)(param_3 + (uVar8 + 1) * 8) << (bVar9 & 0x3f)) >>
                              (bVar9 & 0x3f)) << (bVar5 & 0x3f);
          }
          uVar19 = uVar17 & 0xffff;
          lVar10 = uVar19 - (uVar4 >> 1);
          uVar18 = (lVar10 * *(longlong *)(param_2 + 0x20)) / *(longlong *)(param_2 + 0x28) +
                   *(longlong *)(param_2 + 0x38) + *(longlong *)(param_2 + 0x30) + uVar12 <<
                   (bVar3 & 0x3f);
          uVar8 = (ulonglong)local_64 +
                  (lVar10 * *(longlong *)param_2) / *(longlong *)(param_2 + 8) +
                  *(longlong *)(param_2 + 0x18) + *(longlong *)(param_2 + 0x10) + uVar11;
          if (param_5) {
            *(ulonglong *)(param_7 + uVar19 * 8) = uVar18;
            *(ulonglong *)(param_8 + uVar19 * 8) = uVar8;
          }
          else {
            if ((0xffffffff < uVar18) || (0xffffffff < uVar8)) {
              return 4;
            }
            *(int *)(param_7 + uVar19 * 4) = (int)uVar18;
            *(int *)(param_8 + uVar19 * 4) = (int)uVar8;
          }
          uVar15 = (short)uVar17 + 1;
          uVar17 = (ulonglong)uVar15;
          uVar16 = (uint)uVar15;
          uStack_48 = CONCAT62(uStack_48._2_6_,uVar15);
        } while (uVar15 < param_1->seek_table_entry_count);
      }
      uStack_48._0_3_ = CONCAT12(1,(undefined2)uStack_48);
      *(longlong *)param_6 = lVar6;
      *(undefined8 *)(param_6 + 8) = uStack_48;
      *param_9 = ((ulonglong)(((uint)bVar2 + (uint)bVar1) * (uVar16 & 0xffff) + 0x3f) +
                  lVar6 * -0x40 >> 6) << 3;
      RVar7 = 0;
    }
    else {
      *param_9 = 0;
      RVar7 = 0;
    }
  }
  return RVar7;
}

// UERARadADirectSeekTableLookup_1 @ 14f8c3a70

/* unsigned __int64 __cdecl UERARadADirectSeekTableLookup_1(unsigned char const * __ptr64,unsigned
   __int64,unsigned __int64,unsigned __int64 * __ptr64,unsigned __int64 * __ptr64) */

__uint64 __cdecl
UERARadADirectSeekTableLookup_1
          (uchar *param_1,__uint64 param_2,__uint64 param_3,__uint64 *param_4,__uint64 *param_5)

{
  __uint64 _Var1;
  int iVar2;
  
  if (((((0x27 < param_2) && (param_1 != (uchar *)0x0)) && (*(int *)param_1 == 0x52414441)) &&
      ((param_1[8] < 2 && (param_1[9] < 0x21)))) &&
     ((*(short *)(param_1 + 0x20) != 0 && ((0x67 < param_2 && (param_1 + 0x28 != (uchar *)0x0))))))
  {
    iVar2 = (((uint)param_1[0xe] + (uint)param_1[0xd]) * (uint)*(ushort *)(param_1 + 0x20) + 0x3f >>
            6) * 8;
    if (*(ushort *)(param_1 + 10) + 0x68 + iVar2 <= param_2) {
      _Var1 = FUN_14f8c3390(param_1,param_1 + 0x28,param_1 + (*(ushort *)(param_1 + 10) + 0x68),
                            iVar2,param_3,param_4,param_5);
      return _Var1;
    }
  }
  return 0;
}

// UERARadAExamineBlock_1 @ 14f8c3b50

/* enum RadAExamineBlockResult __cdecl UERARadAExamineBlock_1(struct RadAContainer const *
   __ptr64,unsigned char const * __ptr64,unsigned __int64,unsigned int * __ptr64) */

RadAExamineBlockResult __cdecl
UERARadAExamineBlock_1(RadAContainer *param_1,uchar *param_2,__uint64 param_3,uint *param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ushort *puVar4;
  ulonglong uVar5;
  ushort uVar6;
  
  if (param_3 < 9) {
    if (param_4 != (uint *)0x0) {
      *param_4 = 9;
      return Incomplete;
    }
  }
  else if (*(int *)param_2 == 0x52414441) {
    uVar3 = *(uint *)(param_2 + 4);
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar3;
    }
    if (uVar3 <= param_3) {
      return Valid;
    }
  }
  else {
    if ((char)*(int *)param_2 != 'U') {
      return Invalid;
    }
    puVar4 = (ushort *)(param_2 + 1);
    uVar5 = param_3 - 1;
    uVar6 = 0;
    if (2 < (byte)param_1[9]) {
      uVar6 = *puVar4;
      puVar4 = (ushort *)(param_2 + 3);
      uVar5 = param_3 - 3;
    }
    iVar1 = UERARadAudioDecoderGetChunkLength_1(*(undefined8 *)(param_1 + 0x30),puVar4,uVar5);
    if (iVar1 < 0) {
      if (iVar1 != -2) {
        return Invalid;
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = 0x12;
        return Incomplete;
      }
    }
    else {
      uVar3 = (uint)uVar6 + iVar1;
      if (*(ushort *)(param_1 + 0x22) < uVar3) {
        return Invalid;
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = ((int)param_3 - (int)uVar5) + uVar3;
      }
      uVar2 = (ulonglong)uVar3;
      if (uVar2 <= uVar5) {
        if (uVar5 <= uVar2) {
          return Valid;
        }
        if (*(uchar *)(uVar2 + (longlong)puVar4) != 'U') {
          return Invalid;
        }
        return Valid;
      }
    }
  }
  return Incomplete;
}

// UERARadAGetFileHeader_1 @ 14f8c3c70

/* struct RadAFileHeader const * __ptr64 __cdecl UERARadAGetFileHeader_1(unsigned char const *
   __ptr64,unsigned __int64) */

RadAFileHeader * __cdecl UERARadAGetFileHeader_1(uchar *param_1,__uint64 param_2)

{
  if ((((0x27 < param_2) && (param_1 != (uchar *)0x0)) && (*(int *)param_1 == 0x52414441)) &&
     (param_1[8] < 2)) {
    if (0x20 < param_1[9]) {
      param_1 = (uchar *)(RadAFileHeader *)0x0;
    }
    return (RadAFileHeader *)param_1;
  }
  return (RadAFileHeader *)0x0;
}

// UERARadAGetMemoryNeededToOpen_1 @ 14f8c3ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* int __cdecl UERARadAGetMemoryNeededToOpen_1(unsigned char const * __ptr64,unsigned
   __int64,unsigned int * __ptr64) */

int __cdecl UERARadAGetMemoryNeededToOpen_1(uchar *param_1,__uint64 param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uchar *puVar4;
  uchar *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uchar *puVar9;
  undefined1 auStack_78 [32];
  uchar *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (param_3 != (uint *)0x0) {
    if (param_2 < 0x28) {
      return 0x28;
    }
    uVar3 = (ulonglong)*(ushort *)(param_1 + 10);
    puVar5 = (uchar *)0x0;
    uVar8 = param_1[9] + 1 >> 1;
    local_58 = param_1 + 0x28;
    if (*(short *)(param_1 + 0x20) == 0) {
      local_58 = puVar5;
    }
    puVar4 = local_58 + 0x40;
    if (local_58 == (uchar *)0x0) {
      puVar4 = param_1 + 0x28;
    }
    if (param_2 < puVar4 + (uVar3 - (longlong)param_1)) {
      return *(ushort *)(param_1 + 10) + 0x28;
    }
    bVar6 = 0;
    bVar7 = (byte)uVar8;
    puVar9 = puVar5;
    if (bVar7 != 0) {
      do {
        if (uVar3 < 0x40) {
          return -1;
        }
        lVar1 = UERARadAudioDecoderMemoryRequired_1(puVar4,uVar3);
        puVar9 = puVar9 + (lVar1 + 7U & 0xfffffffffffffff8);
        local_50 = 0;
        local_48 = 0;
        uVar2 = UERARadAudioDecoderGetInfoHeader_1(puVar4,uVar3,&local_50);
        if (uVar2 == 0) {
          return -1;
        }
        if (uVar3 < uVar2) {
          return -1;
        }
        uVar3 = uVar3 - uVar2;
        puVar4 = puVar4 + uVar2;
        bVar6 = bVar6 + 1;
      } while (bVar6 < bVar7);
    }
    puVar9 = puVar9 + ((ulonglong)uVar8 + 6) * 8;
    if (local_58 != (uchar *)0x0) {
      if (*(ushort *)(param_1 + 0x20) != 0) {
        puVar5 = (uchar *)(ulonglong)
                          ((((uint)param_1[0xe] + (uint)param_1[0xd]) *
                            (uint)*(ushort *)(param_1 + 0x20) + 0x3f >> 6) << 3);
      }
      puVar9 = puVar9 + 0x40 + (longlong)puVar5;
    }
    if (puVar9 < &DAT_ffffffff) {
      *param_3 = (uint)puVar9;
      return 0;
    }
  }
  return -1;
}

// UERARadAGetSeekTableHeader_1 @ 14f8c3e10

/* struct RadASeekTableHeader const * __ptr64 __cdecl UERARadAGetSeekTableHeader_1(unsigned char
   const * __ptr64,unsigned __int64) */

RadASeekTableHeader * __cdecl UERARadAGetSeekTableHeader_1(uchar *param_1,__uint64 param_2)

{
  if ((((0x27 < param_2) && (param_1 != (uchar *)0x0)) && (*(int *)param_1 == 0x52414441)) &&
     (((param_1[8] < 2 && (param_1[9] < 0x21)) &&
      ((*(short *)(param_1 + 0x20) != 0 && (0x67 < param_2)))))) {
    return (RadASeekTableHeader *)(param_1 + 0x28);
  }
  return (RadASeekTableHeader *)0x0;
}

// UERARadAInterleave_1 @ 14f8c3e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl UERARadAInterleave_1(short * __ptr64,float const * __ptr64 * __ptr64,unsigned
   int,unsigned int) */

void __cdecl UERARadAInterleave_1(short *param_1,float **param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  float *pfVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  uint uVar17;
  longlong lVar18;
  float *pfVar19;
  float *pfVar20;
  float **ppfVar21;
  float *pfVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  auVar15 = ___xmm_c7000000c7000000c7000000c7000000;
  fVar4 = _UNK_15352bb9c;
  fVar13 = _UNK_15352bb98;
  fVar12 = _UNK_15352bb94;
  fVar11 = ___xmm_47000000470000004700000047000000;
  auVar14 = ___xmm_46fffe0046fffe0046fffe0046fffe00;
  uVar26 = (ulonglong)param_4;
  if (param_3 == 1) {
    pfVar3 = *param_2;
    if (7 < param_4) {
      pauVar2 = (undefined1 (*) [16])(param_1 + uVar26);
      pfVar19 = pfVar3;
      while( true ) {
        do {
          auVar43._0_4_ = fVar11 * *pfVar19;
          auVar43._4_4_ = fVar12 * pfVar19[1];
          auVar43._8_4_ = fVar13 * pfVar19[2];
          auVar43._12_4_ = fVar4 * pfVar19[3];
          auVar29._0_4_ = pfVar19[4] * fVar11;
          auVar29._4_4_ = pfVar19[5] * fVar12;
          auVar29._8_4_ = pfVar19[6] * fVar13;
          auVar29._12_4_ = pfVar19[7] * fVar4;
          auVar38 = maxps(auVar43,auVar15);
          auVar29 = maxps(auVar29,auVar15);
          auVar38 = minps(auVar38,auVar14);
          auVar29 = minps(auVar29,auVar14);
          auVar41._0_4_ = (int)auVar38._0_4_;
          auVar41._4_4_ = (int)auVar38._4_4_;
          auVar41._8_4_ = (int)auVar38._8_4_;
          auVar41._12_4_ = (int)auVar38._12_4_;
          auVar38._0_4_ = (int)auVar29._0_4_;
          auVar38._4_4_ = (int)auVar29._4_4_;
          auVar38._8_4_ = (int)auVar29._8_4_;
          auVar38._12_4_ = (int)auVar29._12_4_;
          auVar29 = packssdw(auVar41,auVar38);
          *(undefined1 (*) [16])param_1 = auVar29;
          param_1 = (short *)((longlong)param_1 + 0x10);
          pfVar19 = pfVar19 + 8;
        } while (param_1 <= pauVar2 + -1);
        if ((undefined1 (*) [16])param_1 == pauVar2) break;
        pfVar19 = pfVar3 + (uVar26 - 8);
        param_1 = (short *)(pauVar2 + -1);
      }
      return;
    }
  }
  else if (param_3 == 2) {
    pfVar3 = param_2[1];
    pfVar19 = *param_2;
    if (7 < param_4) {
      pauVar2 = (undefined1 (*) [16])(param_1 + param_4 * 2);
      pfVar20 = pfVar3;
      pfVar22 = pfVar19;
      while( true ) {
        do {
          fVar27 = *pfVar20;
          pfVar5 = pfVar20 + 1;
          pfVar6 = pfVar20 + 2;
          pfVar7 = pfVar20 + 3;
          pfVar1 = pfVar20 + 4;
          pfVar8 = pfVar20 + 5;
          pfVar9 = pfVar20 + 6;
          pfVar10 = pfVar20 + 7;
          pfVar20 = pfVar20 + 8;
          auVar28._0_4_ = fVar27 * fVar11;
          auVar28._4_4_ = *pfVar5 * fVar12;
          auVar28._8_4_ = *pfVar6 * fVar13;
          auVar28._12_4_ = *pfVar7 * fVar4;
          auVar37._0_4_ = *pfVar1 * fVar11;
          auVar37._4_4_ = *pfVar8 * fVar12;
          auVar37._8_4_ = *pfVar9 * fVar13;
          auVar37._12_4_ = *pfVar10 * fVar4;
          auVar29 = maxps(auVar28,auVar15);
          auVar38 = maxps(auVar37,auVar15);
          auVar29 = minps(auVar29,auVar14);
          auVar38 = minps(auVar38,auVar14);
          auVar42._0_4_ = (int)auVar29._0_4_;
          auVar42._4_4_ = (int)auVar29._4_4_;
          auVar42._8_4_ = (int)auVar29._8_4_;
          auVar42._12_4_ = (int)auVar29._12_4_;
          auVar30._0_4_ = (int)auVar38._0_4_;
          auVar30._4_4_ = (int)auVar38._4_4_;
          auVar30._8_4_ = (int)auVar38._8_4_;
          auVar30._12_4_ = (int)auVar38._12_4_;
          auVar43 = packssdw(auVar42,auVar30);
          auVar39._0_4_ = pfVar22[4] * fVar11;
          auVar39._4_4_ = pfVar22[5] * fVar12;
          auVar39._8_4_ = pfVar22[6] * fVar13;
          auVar39._12_4_ = pfVar22[7] * fVar4;
          auVar31._0_4_ = *pfVar22 * fVar11;
          auVar31._4_4_ = pfVar22[1] * fVar12;
          auVar31._8_4_ = pfVar22[2] * fVar13;
          auVar31._12_4_ = pfVar22[3] * fVar4;
          auVar38 = maxps(auVar39,auVar15);
          auVar29 = maxps(auVar31,auVar15);
          auVar38 = minps(auVar38,auVar14);
          auVar29 = minps(auVar29,auVar14);
          auVar40._0_4_ = (int)auVar29._0_4_;
          auVar40._4_4_ = (int)auVar29._4_4_;
          auVar40._8_4_ = (int)auVar29._8_4_;
          auVar40._12_4_ = (int)auVar29._12_4_;
          auVar32._0_4_ = (int)auVar38._0_4_;
          auVar32._4_4_ = (int)auVar38._4_4_;
          auVar32._8_4_ = (int)auVar38._8_4_;
          auVar32._12_4_ = (int)auVar38._12_4_;
          auVar29 = packssdw(auVar40,auVar32);
          auVar36._0_12_ = auVar29._0_12_;
          auVar36._12_2_ = auVar29._6_2_;
          auVar36._14_2_ = auVar43._6_2_;
          auVar35._12_4_ = auVar36._12_4_;
          auVar35._0_10_ = auVar29._0_10_;
          auVar35._10_2_ = auVar43._4_2_;
          auVar34._10_6_ = auVar35._10_6_;
          auVar34._0_8_ = auVar29._0_8_;
          auVar34._8_2_ = auVar29._4_2_;
          auVar33._8_8_ = auVar34._8_8_;
          auVar33._6_2_ = auVar43._2_2_;
          auVar33._4_2_ = auVar29._2_2_;
          auVar33._0_2_ = auVar29._0_2_;
          auVar33._2_2_ = auVar43._0_2_;
          *(undefined1 (*) [16])param_1 = auVar33;
          *(short *)*(undefined1 (*) [16])((longlong)param_1 + 0x10) = auVar29._8_2_;
          *(short *)((longlong)*(undefined1 (*) [16])((longlong)param_1 + 0x10) + 2) = auVar43._8_2_
          ;
          *(short *)((longlong)*(undefined1 (*) [16])((longlong)param_1 + 0x10) + 4) =
               auVar29._10_2_;
          *(short *)((longlong)*(undefined1 (*) [16])((longlong)param_1 + 0x10) + 6) =
               auVar43._10_2_;
          *(short *)((longlong)*(undefined1 (*) [16])((longlong)param_1 + 0x10) + 8) =
               auVar29._12_2_;
          *(short *)((longlong)*(undefined1 (*) [16])((longlong)param_1 + 0x10) + 10) =
               auVar43._12_2_;
          *(short *)((longlong)*(undefined1 (*) [16])((longlong)param_1 + 0x10) + 0xc) =
               auVar29._14_2_;
          *(short *)((longlong)*(undefined1 (*) [16])((longlong)param_1 + 0x10) + 0xe) =
               auVar43._14_2_;
          param_1 = (short *)((longlong)param_1 + 0x20);
          pfVar22 = pfVar22 + 8;
        } while (param_1 <= pauVar2 + -2);
        if ((undefined1 (*) [16])param_1 == pauVar2) break;
        pfVar22 = pfVar19 + (uVar26 - 8);
        pfVar20 = pfVar3 + (uVar26 - 8);
        param_1 = (short *)(pauVar2 + -2);
      }
      return;
    }
  }
  else if ((param_3 == 4) &&
          (iVar16 = UERARadAudioInterleave4ChToS16_1
                              (param_1,*param_2,param_2[1],param_2[2],param_2[3],param_4),
          iVar16 != 0)) {
    return;
  }
  fVar13 = __real_c7000000;
  fVar12 = __real_47000000;
  fVar11 = __real_46fffe00;
  if (param_4 != 0) {
    lVar18 = 0;
    do {
      uVar24 = 0;
      if (param_3 < 4) {
        if (param_3 != 0) {
          lVar25 = 0;
          goto LAB_14f8cbf8b;
        }
      }
      else {
        uVar17 = (param_3 - 4 >> 2) + 1;
        uVar23 = (ulonglong)uVar17;
        uVar24 = uVar17 * 4;
        lVar25 = (ulonglong)uVar17 * 4;
        ppfVar21 = param_2 + 2;
        do {
          fVar27 = *(float *)((longlong)ppfVar21[-2] + lVar18) * fVar12;
          fVar4 = fVar13;
          if (fVar13 <= fVar27) {
            fVar4 = fVar27;
          }
          fVar27 = fVar11;
          if (fVar4 <= fVar11) {
            fVar27 = fVar4;
          }
          *param_1 = (short)(int)fVar27;
          fVar27 = *(float *)((longlong)ppfVar21[-1] + lVar18) * fVar12;
          fVar4 = fVar13;
          if (fVar13 <= fVar27) {
            fVar4 = fVar27;
          }
          fVar27 = fVar11;
          if (fVar4 <= fVar11) {
            fVar27 = fVar4;
          }
          param_1[1] = (short)(int)fVar27;
          fVar27 = *(float *)((longlong)*ppfVar21 + lVar18) * fVar12;
          fVar4 = fVar13;
          if (fVar13 <= fVar27) {
            fVar4 = fVar27;
          }
          fVar27 = fVar11;
          if (fVar4 <= fVar11) {
            fVar27 = fVar4;
          }
          param_1[2] = (short)(int)fVar27;
          fVar27 = *(float *)((longlong)ppfVar21[1] + lVar18) * fVar12;
          fVar4 = fVar13;
          if (fVar13 <= fVar27) {
            fVar4 = fVar27;
          }
          fVar27 = fVar11;
          if (fVar4 <= fVar11) {
            fVar27 = fVar4;
          }
          param_1[3] = (short)(int)fVar27;
          param_1 = param_1 + 4;
          uVar23 = uVar23 - 1;
          ppfVar21 = ppfVar21 + 4;
        } while (uVar23 != 0);
        if (uVar24 < param_3) {
LAB_14f8cbf8b:
          ppfVar21 = param_2 + lVar25;
          uVar23 = (ulonglong)(param_3 - uVar24);
          do {
            pfVar3 = *ppfVar21;
            ppfVar21 = ppfVar21 + 1;
            fVar27 = *(float *)(lVar18 + (longlong)pfVar3) * fVar12;
            fVar4 = fVar13;
            if (fVar13 <= fVar27) {
              fVar4 = fVar27;
            }
            fVar27 = fVar11;
            if (fVar4 <= fVar11) {
              fVar27 = fVar4;
            }
            *param_1 = (short)(int)fVar27;
            param_1 = param_1 + 1;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      lVar18 = lVar18 + 4;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  return;
}

// UERARadANotifySeek_1 @ 14f8c3e60

/* void __cdecl UERARadANotifySeek_1(struct RadAContainer * __ptr64) */

void __cdecl UERARadANotifySeek_1(RadAContainer *param_1)

{
  uint uVar1;
  RadAContainer *pRVar2;
  ulonglong uVar3;
  
  uVar1 = (byte)param_1[9] + 1 >> 1;
  if ((char)uVar1 != '\0') {
    pRVar2 = param_1 + 0x30;
    uVar3 = (ulonglong)uVar1;
    do {
      UERARadAudioDecoderDidSeek_1(*(undefined8 *)pRVar2);
      pRVar2 = pRVar2 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

// UERARadAOpenDecoder_1 @ 14f8c3eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* int __cdecl UERARadAOpenDecoder_1(unsigned char const * __ptr64,unsigned __int64,struct
   RadAContainer * __ptr64,unsigned __int64) */

int __cdecl
UERARadAOpenDecoder_1(uchar *param_1,__uint64 param_2,RadAContainer *param_3,__uint64 param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  RadAContainer *pRVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  RadAContainer *pRVar12;
  ulonglong uVar13;
  uchar *puVar14;
  byte bVar15;
  uchar *puVar16;
  RadAContainer *_Dst;
  undefined1 auStack_b8 [32];
  ulonglong *local_98;
  ulonglong local_88;
  uint local_80;
  uchar *local_78;
  __uint64 local_70;
  uchar *local_68;
  __uint64 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (((((0x2f < param_4) && (0x27 < param_2)) && (param_1 != (uchar *)0x0)) &&
      ((*(int *)param_1 == 0x52414441 && (param_1[8] < 2)))) && (param_1[9] < 0x21)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)param_3 = *(undefined8 *)param_1;
    *(undefined8 *)(param_3 + 8) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_3 + 0x18) = uVar2;
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(ushort *)(param_3 + 10);
    uVar10 = (ulonglong)uVar1;
    uVar9 = (uint)uVar1;
    uVar8 = uVar1 + 0x28;
    if (*(ushort *)(param_3 + 0x20) != 0) {
      uVar8 = uVar1 + 0x68 +
              (((uint)(byte)param_3[0xe] + (uint)(byte)param_3[0xd]) *
               (uint)*(ushort *)(param_3 + 0x20) + 0x3f >> 6) * 8;
    }
    if ((uVar8 <= param_2) && (local_80 = (byte)param_3[9] + 1 >> 1, (uint)uVar1 <= local_80 << 7))
    {
      uVar13 = (ulonglong)*(ushort *)(param_1 + 10);
      uVar8 = param_1[9] + 1 >> 1;
      local_68 = param_1 + 0x28;
      if (*(short *)(param_1 + 0x20) == 0) {
        local_68 = (uchar *)0x0;
      }
      puVar16 = local_68 + 0x40;
      if (local_68 == (uchar *)0x0) {
        puVar16 = param_1 + 0x28;
      }
      if (puVar16 + (uVar13 - (longlong)param_1) <= param_2) {
        bVar11 = 0;
        uVar7 = 0;
        local_88 = 0;
        bVar15 = (byte)uVar8;
        local_78 = param_1;
        local_70 = param_4;
        local_60 = param_2;
        if (bVar15 != 0) {
          do {
            if (uVar13 < 0x40) {
              return 0;
            }
            lVar3 = UERARadAudioDecoderMemoryRequired_1(puVar16,uVar13);
            local_88 = local_88 + (lVar3 + 7U & 0xfffffffffffffff8);
            local_58 = 0;
            local_50 = 0;
            uVar4 = UERARadAudioDecoderGetInfoHeader_1(puVar16,uVar13,&local_58);
            if (uVar4 == 0) {
              return 0;
            }
            if (uVar13 < uVar4) {
              return 0;
            }
            uVar13 = uVar13 - uVar4;
            puVar16 = puVar16 + uVar4;
            bVar11 = bVar11 + 1;
          } while (bVar11 < bVar15);
        }
        uVar13 = local_88 + ((ulonglong)uVar8 + 6) * 8;
        if (local_68 != (uchar *)0x0) {
          if (*(ushort *)(param_1 + 0x20) != 0) {
            uVar7 = (((uint)param_1[0xe] + (uint)param_1[0xd]) * (uint)*(ushort *)(param_1 + 0x20) +
                     0x3f >> 6) << 3;
          }
          uVar13 = uVar13 + 0x40 + (ulonglong)uVar7;
        }
        if (((uVar13 < 0xffffffff) && ((uVar13 & 0xffffffff) <= local_70)) &&
           (pRVar12 = param_3 + (ulonglong)(uint)((int)((byte)param_3[9] + 1) >> 1) * 8 + 0x30,
           pRVar12 + uVar10 < param_3 + local_70)) {
          lVar3 = 0x28;
          if (*(short *)(param_3 + 0x20) != 0) {
            lVar3 = 0x68;
          }
          uVar13 = 0;
          puVar14 = param_1 + lVar3;
          puVar16 = param_1;
          if ((char)local_80 != '\0') {
            do {
              local_78 = puVar16;
              if ((uint)uVar10 < 0x40) {
                return 0;
              }
              lVar3 = UERARadAudioDecoderMemoryRequired_1(puVar14,uVar10);
              if (param_3 + local_70 < pRVar12 + lVar3) {
                return 0;
              }
              local_98 = &local_88;
              local_88 = 0;
              lVar5 = UERARadAudioDecoderOpen_1(puVar14,uVar10,pRVar12,lVar3);
              *(longlong *)(param_3 + uVar13 * 8 + 0x30) = lVar5;
              if (lVar5 == 0) {
                return 0;
              }
              if (uVar10 < local_88) {
                return 0;
              }
              puVar14 = puVar14 + local_88;
              uVar9 = (uint)uVar10 - (int)local_88;
              uVar10 = (ulonglong)uVar9;
              bVar11 = (char)uVar13 + 1;
              uVar13 = (ulonglong)bVar11;
              pRVar12 = pRVar12 + (lVar3 + 7U & 0xfffffffffffffff8);
              puVar16 = local_78;
            } while (bVar11 < (byte)local_80);
          }
          _Dst = (RadAContainer *)0x0;
          if ((((*(int *)param_1 == 0x52414441) && (param_1[8] < 2)) &&
              ((param_1[9] < 0x21 && ((*(short *)(param_1 + 0x20) != 0 && (0x67 < local_60)))))) &&
             (param_1 + 0x28 != (uchar *)0x0)) {
            *(longlong *)(param_3 + 0x28) = (longlong)pRVar12 - (longlong)param_3;
            uVar2 = *(undefined8 *)(param_1 + 0x30);
            pRVar6 = _Dst;
            if ((longlong)pRVar12 - (longlong)param_3 != 0) {
              pRVar6 = pRVar12;
            }
            *(undefined8 *)pRVar6 = *(undefined8 *)(param_1 + 0x28);
            *(undefined8 *)(pRVar6 + 8) = uVar2;
            uVar2 = *(undefined8 *)(param_1 + 0x40);
            *(undefined8 *)(pRVar6 + 0x10) = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 *)(pRVar6 + 0x18) = uVar2;
            uVar2 = *(undefined8 *)(param_1 + 0x50);
            *(undefined8 *)(pRVar6 + 0x20) = *(undefined8 *)(param_1 + 0x48);
            *(undefined8 *)(pRVar6 + 0x28) = uVar2;
            uVar2 = *(undefined8 *)(param_1 + 0x60);
            *(undefined8 *)(pRVar6 + 0x30) = *(undefined8 *)(param_1 + 0x58);
            *(undefined8 *)(pRVar6 + 0x38) = uVar2;
            if (*(ushort *)(local_78 + 0x20) == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = (((uint)local_78[0xe] + (uint)local_78[0xd]) *
                       (uint)*(ushort *)(local_78 + 0x20) + 0x3f >> 6) << 3;
              param_1 = param_1 + (ulonglong)*(ushort *)(local_78 + 10) + 0x68;
            }
            if (*(longlong *)(param_3 + 0x28) != 0) {
              _Dst = param_3 + *(longlong *)(param_3 + 0x28) + 0x40;
            }
            memcpy(_Dst,param_1,(ulonglong)uVar8);
          }
          if (uVar9 == 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// UERARadASeekTableLookup_1 @ 14f8c42b0

/* unsigned __int64 __cdecl UERARadASeekTableLookup_1(struct RadAContainer const * __ptr64,unsigned
   __int64,unsigned __int64 * __ptr64,unsigned __int64 * __ptr64) */

__uint64 __cdecl
UERARadASeekTableLookup_1
          (RadAContainer *param_1,__uint64 param_2,__uint64 *param_3,__uint64 *param_4)

{
  __uint64 _Var1;
  int iVar2;
  
  if ((param_1 != (RadAContainer *)0x0) && (*(longlong *)(param_1 + 0x28) != 0)) {
    if (*(ulonglong *)(param_1 + 0x10) <= param_2) {
      param_2 = *(ulonglong *)(param_1 + 0x10) - 1;
    }
    if (*(ushort *)(param_1 + 0x20) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (((uint)(byte)param_1[0xe] + (uint)(byte)param_1[0xd]) *
               (uint)*(ushort *)(param_1 + 0x20) + 0x3f >> 6) << 3;
    }
    _Var1 = FUN_14f8c3390(param_1,param_1 + *(longlong *)(param_1 + 0x28),
                          param_1 + *(longlong *)(param_1 + 0x28) + 0x40,iVar2,param_2,param_3,
                          param_4);
    return _Var1;
  }
  return 0;
}

// UERARadAStripSeekTable_1 @ 14f8c4350

/* unsigned __int64 __cdecl UERARadAStripSeekTable_1(unsigned char * __ptr64,unsigned __int64) */

__uint64 __cdecl UERARadAStripSeekTable_1(uchar *param_1,__uint64 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((((0x27 < param_2) && (param_1 != (uchar *)0x0)) && (*(int *)param_1 == 0x52414441)) &&
     (((param_1[8] < 2 && (param_1[9] < 0x21)) && (param_2 == *(__uint64 *)(param_1 + 0x18))))) {
    if (*(ushort *)(param_1 + 0x20) == 0) {
      return param_2;
    }
    uVar1 = (((uint)param_1[0xe] + (uint)param_1[0xd]) * (uint)*(ushort *)(param_1 + 0x20) + 0x3f >>
            6) * 8;
    uVar2 = (ulonglong)(*(ushort *)(param_1 + 10) + 0x68 + uVar1);
    lVar3 = (ulonglong)uVar1 + 0x40;
    memmove(param_1 + 0x28,param_1 + 0x68,(ulonglong)*(ushort *)(param_1 + 10));
    memmove(param_1 + (ulonglong)*(ushort *)(param_1 + 10) + 0x28,param_1 + uVar2,param_2 - uVar2);
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) - lVar3;
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    return param_2 - lVar3;
  }
  return 0;
}

