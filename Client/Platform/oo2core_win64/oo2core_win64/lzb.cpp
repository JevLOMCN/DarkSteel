// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 74

// OodleDelete<oo2::OodleLZB_CompressFast_Context> @ 14f383f20

void __cdecl
oo2::OodleDelete<oo2::OodleLZB_CompressFast_Context>(OodleLZB_CompressFast_Context *param_1)

{
  (*g_fp_OodleCore_Plugin_Free)(param_1->m_tablePos);
  if (param_1->m_windowAlloc != (uchar *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(param_1->m_windowAlloc);
  }
                    /* WARNING: Could not recover jumptable at 0x00014f383f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// destruct<oo2::OodleLZB_CompressFast_Context> @ 14f383f80

OodleLZB_CompressFast_Context * __cdecl
oo2::destruct<oo2::OodleLZB_CompressFast_Context>(OodleLZB_CompressFast_Context *param_1)

{
  (*g_fp_OodleCore_Plugin_Free)(param_1->m_tablePos);
  if (param_1->m_windowAlloc != (uchar *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(param_1->m_windowAlloc);
  }
  return param_1;
}

// OodleLZB_CompressFast_Context @ 14f383fc0

OodleLZB_CompressFast_Context * __thiscall
oo2::OodleLZB_CompressFast_Context::OodleLZB_CompressFast_Context
          (OodleLZB_CompressFast_Context *this,uchar *param_1,bool param_2,int param_3)

{
  int iVar1;
  long64 *plVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar3 = 0x12;
  if (0 < param_3) {
    iVar3 = param_3;
  }
  iVar1 = 1 << ((byte)iVar3 & 0x1f);
  uVar5 = (longlong)iVar1 * 8;
  this->m_tableSizeBits = iVar3;
  this->m_dicBase = (uchar *)0x0;
  uVar4 = 0x40;
  if (0x40 < uVar5) {
    uVar4 = uVar5;
  }
  this->m_dicSize = 0;
  this->m_tableSize = iVar1;
  plVar2 = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar4,0x40);
  if (plVar2 == (long64 *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(uVar4);
  }
  this->m_tablePos = plVar2;
  this->m_windowAlloc = (uchar *)0x0;
  if (param_2) {
    this->m_windowSize = 0x10000;
    this->m_windowMask = 0xffff;
    if (param_1 == (uchar *)0x0) {
      param_1 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x10008,0x10);
      if (param_1 == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
        Oodle_Core_Malloc_Failed(0x10008);
      }
      this->m_windowAlloc = param_1;
    }
  }
  else {
    this->m_windowSize = 0;
    this->m_windowMask = -1;
  }
  this->m_windowBase = param_1;
  this->m_posThisReset = 0;
  this->m_maxOffset = 0x40000000;
  this->m_zeroPosPtr = param_1;
  return this;
}

// OodleLZB_CompressFast_Context @ 14f384100

OodleLZB_CompressFast_Context * __thiscall
oo2::OodleLZB_CompressFast_Context::OodleLZB_CompressFast_Context
          (OodleLZB_CompressFast_Context *this,uchar *param_1,long64 param_2,long64 param_3,
          int param_4)

{
  int iVar1;
  long64 *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  this->m_dicSize = param_2 + param_3;
  this->m_dicBase = param_1 + -param_3;
  iVar1 = 1 << ((byte)param_4 & 0x1f);
  uVar4 = (longlong)iVar1 * 8;
  this->m_tableSizeBits = param_4;
  this->m_tableSize = iVar1;
  uVar3 = 0x40;
  if (0x40 < uVar4) {
    uVar3 = uVar4;
  }
  plVar2 = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar3,0x40);
  if (plVar2 == (long64 *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(uVar3);
  }
  this->m_tablePos = plVar2;
  this->m_windowAlloc = (uchar *)0x0;
  this->m_posThisReset = 0;
  this->m_windowBase = param_1;
  this->m_zeroPosPtr = param_1;
  this->m_windowSize = param_2 + param_3;
  this->m_windowMask = -1;
  this->m_maxOffset = 0x40000000;
  return this;
}

// ~OodleLZB_CompressFast_Context @ 14f384200

void __thiscall
oo2::OodleLZB_CompressFast_Context::~OodleLZB_CompressFast_Context
          (OodleLZB_CompressFast_Context *this)

{
  (*g_fp_OodleCore_Plugin_Free)(this->m_tablePos);
  if (this->m_windowAlloc != (uchar *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(this->m_windowAlloc);
  }
  return;
}

// Decode_LZB_OneChunk @ 14f384240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::Decode_LZB_OneChunk(uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,uchar *param_5)

{
  byte bVar1;
  byte bVar2;
  uchar uVar3;
  ushort uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uchar *puVar10;
  char *pcVar11;
  uchar *puVar12;
  longlong lVar13;
  uchar *puVar14;
  byte *pbVar15;
  ushort *puVar16;
  ulonglong *puVar17;
  ushort *puVar18;
  ulonglong uVar19;
  size_t sVar20;
  int iVar21;
  uchar *puVar22;
  uchar *puVar23;
  char *pcVar24;
  ulonglong *puVar25;
  uchar *puVar26;
  bool bVar27;
  undefined1 auStack_118 [32];
  uchar *local_f8;
  uchar *local_f0;
  ulonglong *local_e8;
  ulonglong local_d8 [6];
  ulonglong local_a6 [7];
  ulonglong local_68 [2];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_118;
  puVar10 = param_3 + param_4;
  puVar25 = (ulonglong *)(param_2 + -0x3e);
  if (0x14 < param_4) {
    param_4 = 0x14;
  }
  puVar26 = puVar10 + -param_4;
  local_f8 = param_1;
  local_f0 = puVar10;
  local_e8 = puVar25;
  if ((longlong)param_3 - (longlong)param_5 < 0x10000) {
    if (param_3 < puVar26) {
LAB_14f3842c2:
      puVar10 = local_f8;
      if (puVar25 <= param_1) {
        if (param_2 <= param_1) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f387c0d;
          pcVar24 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
          iVar21 = 0x60b;
          goto LAB_14f387c02;
        }
        if ((ulonglong *)param_2 == local_58) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f387c0d;
          pcVar24 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
          iVar21 = 0x60b;
          goto LAB_14f387c02;
        }
        memmove(local_d8,param_1,(longlong)param_2 - (longlong)param_1);
        puVar25 = local_a6;
        local_f8 = puVar10 + ((longlong)local_d8 - (longlong)param_1);
        param_2 = (uchar *)local_68;
        param_1 = (uchar *)local_d8;
        local_e8 = puVar25;
      }
      bVar2 = (byte)*(ulonglong *)param_1;
      pbVar15 = (byte *)((longlong)param_1 + 1);
      uVar19 = (ulonglong)(bVar2 & 0xf);
      if (8 < uVar19) {
        if (uVar19 < 0xf) {
          if ((longlong)puVar26 - (longlong)param_3 <= (longlong)uVar19) goto LAB_14f384dd8;
          uVar5 = *(undefined8 *)((longlong)param_1 + 9);
          puVar17 = (ulonglong *)(pbVar15 + uVar19);
          *(undefined8 *)param_3 = *(undefined8 *)pbVar15;
          *(undefined8 *)(param_3 + 8) = uVar5;
        }
        else {
          uVar9 = (ulonglong)*pbVar15;
          puVar16 = (ushort *)((longlong)param_1 + 2);
          if (0xbf < uVar9) {
            bVar1 = *(byte *)puVar16;
            puVar16 = (ushort *)((longlong)param_1 + 3);
            uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)bVar1;
          }
          uVar19 = uVar19 + uVar9;
          puVar17 = (ulonglong *)(uVar19 + (longlong)puVar16);
          if ((puVar25 < puVar17) || ((longlong)puVar26 - (longlong)param_3 <= (longlong)uVar19))
          goto LAB_14f384dd8;
          puVar10 = param_3;
          do {
            *(undefined8 *)puVar10 =
                 *(undefined8 *)(puVar10 + ((longlong)puVar16 - (longlong)param_3));
            puVar10 = puVar10 + 8;
          } while (puVar10 < param_3 + uVar19);
          if (puVar25 <= puVar17) {
            if (param_2 <= puVar17) goto LAB_14f384925;
            if ((ulonglong *)param_2 == local_58) goto LAB_14f3848ee;
            memmove(local_d8,puVar17,(longlong)param_2 - (longlong)puVar17);
            puVar25 = local_a6;
            local_f8 = local_f8 + ((longlong)local_d8 - (longlong)puVar17);
            param_2 = (uchar *)local_68;
            puVar17 = local_d8;
            local_e8 = puVar25;
          }
        }
        uVar4 = (ushort)*puVar17;
        uVar9 = (ulonglong)uVar4;
        puVar10 = param_3 + uVar19;
        uVar19 = (ulonglong)(bVar2 >> 4);
        if (uVar19 < 9) {
          if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < uVar9) goto LAB_14f384a0a;
          uVar19 = uVar19 + 4;
          puVar23 = puVar10 + -uVar9;
          param_1 = (uchar *)((longlong)puVar17 + 2);
          if ((longlong)puVar26 - (longlong)puVar10 <= (longlong)uVar19) {
            if ((longlong)local_f0 - (longlong)puVar10 <= (longlong)uVar19) goto LAB_14f384975;
            if (uVar19 < 8) {
LAB_14f3849b1:
              memmove(puVar10,puVar23,uVar19);
            }
            else {
              *(undefined8 *)puVar10 = *(undefined8 *)puVar23;
              uVar9 = (ulonglong)((uint)uVar19 & 7);
              puVar26 = puVar10 + uVar9;
              puVar12 = puVar26 + (uVar19 & 0xfffffffffffffff8);
              lVar7 = uVar9 - (longlong)puVar26;
              do {
                *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar23 + lVar7));
                puVar26 = puVar26 + 8;
              } while (puVar26 < puVar12);
            }
            goto LAB_14f384dd0;
          }
          *(undefined8 *)puVar10 = *(undefined8 *)puVar23;
          *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(puVar23 + 8);
          param_3 = puVar10 + uVar19;
          goto LAB_14f3842c2;
        }
        if (uVar19 < 0xf) {
          if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < uVar9) goto LAB_14f384aca;
          uVar19 = uVar19 + 4;
          puVar23 = puVar10 + -uVar9;
          param_1 = (uchar *)((longlong)puVar17 + 2);
          if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar10) {
            *(undefined8 *)puVar10 = *(undefined8 *)puVar23;
            *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(puVar23 + 8);
            *(undefined2 *)(puVar10 + 0x10) = *(undefined2 *)(puVar23 + 0x10);
            param_3 = puVar10 + uVar19;
            goto LAB_14f3842c2;
          }
          if ((longlong)local_f0 - (longlong)puVar10 <= (longlong)uVar19) goto LAB_14f384a48;
          if (uVar19 < 8) goto LAB_14f3849b1;
          *(undefined8 *)puVar10 = *(undefined8 *)puVar23;
          uVar9 = (ulonglong)((uint)uVar19 & 7);
          puVar26 = puVar10 + uVar9;
          puVar12 = puVar26 + (uVar19 & 0xfffffffffffffff8);
          lVar7 = uVar9 - (longlong)puVar26;
          do {
            *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar23 + lVar7));
            puVar26 = puVar26 + 8;
          } while (puVar26 < puVar12);
        }
        else {
          param_1 = (uchar *)((longlong)puVar17 + 1);
          uVar8 = uVar4 & 0x7f;
          if ((char)uVar4 < '\0') {
            uVar19 = (ulonglong)(uVar8 >> 3) + 4;
            if ((ulonglong)(uVar8 >> 3) == 0xf) {
              uVar19 = (ulonglong)*param_1;
              param_1 = (uchar *)((longlong)puVar17 + 2);
              if (0xbf < uVar19) {
                bVar2 = *param_1;
                param_1 = (uchar *)((longlong)puVar17 + 3);
                uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)bVar2;
              }
              uVar19 = uVar19 + 0x13;
            }
            uVar9 = (ulonglong)(uVar4 & 7);
            if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < uVar9) goto LAB_14f384b6b;
            if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar10) {
              puVar23 = puVar10 + -uVar9;
              *puVar10 = *puVar23;
              puVar10[1] = puVar23[1];
              puVar10[2] = puVar23[2];
              puVar10[3] = puVar23[3];
              iVar21 = c_overlap_offset_step1add[uVar9];
              *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar23 + iVar21);
              if ((longlong)uVar19 < 9) {
LAB_14f384657:
                param_3 = puVar10 + uVar19;
              }
              else {
                puVar12 = puVar23 + iVar21 + -(longlong)c_overlap_offset_step2sub[uVar9];
                puVar23 = puVar10 + 8;
                puVar22 = puVar23 + (uVar19 - 8);
                do {
                  puVar12 = puVar12 + 8;
                  *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                  puVar23 = puVar23 + 8;
                } while (puVar23 < puVar22);
                param_3 = puVar10 + uVar19;
              }
              goto LAB_14f3842c2;
            }
            if ((longlong)local_f0 - (longlong)puVar10 < (longlong)uVar19) goto LAB_14f384b08;
            puVar26 = puVar10 + -uVar9;
            puVar23 = puVar10;
            for (uVar9 = uVar19; uVar9 != 0; uVar9 = uVar9 - 1) {
              uVar3 = *puVar26;
              puVar26 = puVar26 + 1;
              *puVar23 = uVar3;
              puVar23 = puVar23 + 1;
            }
          }
          else {
            uVar4 = *(ushort *)param_1;
            param_1 = (uchar *)((longlong)puVar17 + 3);
            if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < (ulonglong)uVar4)
            goto LAB_14f384c2a;
            puVar23 = puVar10 + -(ulonglong)uVar4;
            uVar19 = uVar19 + 4 + (ulonglong)uVar8;
            if ((ulonglong)uVar8 == 0x7f) {
              uVar9 = (ulonglong)*param_1;
              param_1 = (uchar *)((longlong)puVar17 + 4);
              if (0xbf < uVar9) {
                bVar2 = *param_1;
                param_1 = (uchar *)((longlong)puVar17 + 5);
                uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)bVar2;
              }
              uVar19 = uVar19 + uVar9;
            }
            if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar10) {
              puVar12 = puVar10;
              do {
                *(undefined8 *)puVar12 =
                     *(undefined8 *)(puVar12 + ((longlong)puVar23 - (longlong)puVar10));
                puVar12 = puVar12 + 8;
              } while (puVar12 < puVar10 + uVar19);
              goto LAB_14f384657;
            }
            if ((longlong)local_f0 - (longlong)puVar10 <= (longlong)uVar19) goto LAB_14f384bb5;
            if ((longlong)uVar19 < 8) goto LAB_14f3849b1;
            *(undefined8 *)puVar10 = *(undefined8 *)puVar23;
            uVar9 = (ulonglong)((uint)uVar19 & 7);
            puVar26 = puVar10 + uVar9;
            puVar12 = puVar26 + (uVar19 & 0xfffffffffffffff8);
            lVar7 = uVar9 - (longlong)puVar26;
            do {
              *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar23 + lVar7));
              puVar26 = puVar26 + 8;
            } while (puVar26 < puVar12);
          }
        }
LAB_14f384dd0:
        param_3 = puVar10 + uVar19;
        goto LAB_14f384dd8;
      }
      puVar16 = (ushort *)(pbVar15 + uVar19);
      *(undefined8 *)param_3 = *(undefined8 *)pbVar15;
      puVar10 = param_3 + uVar19;
      uVar19 = (ulonglong)(bVar2 >> 4);
      uVar4 = *puVar16;
      uVar9 = (ulonglong)uVar4;
      if (8 < uVar19) {
        if (uVar19 < 0xf) {
          if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < uVar9) goto LAB_14f384aca;
          uVar19 = uVar19 + 4;
          puVar23 = puVar10 + -uVar9;
          param_1 = (uchar *)(puVar16 + 1);
          if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar10) {
            *(undefined8 *)puVar10 = *(undefined8 *)puVar23;
            *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(puVar23 + 8);
            *(undefined2 *)(puVar10 + 0x10) = *(undefined2 *)(puVar23 + 0x10);
            param_3 = puVar10 + uVar19;
            goto LAB_14f3842c2;
          }
          if ((longlong)local_f0 - (longlong)puVar10 <= (longlong)uVar19) goto LAB_14f384a48;
          if (uVar19 < 8) goto LAB_14f3849b1;
          *(undefined8 *)puVar10 = *(undefined8 *)puVar23;
          uVar9 = (ulonglong)((uint)uVar19 & 7);
          puVar26 = puVar10 + uVar9;
          puVar12 = puVar26 + (uVar19 & 0xfffffffffffffff8);
          lVar7 = uVar9 - (longlong)puVar26;
          do {
            *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar23 + lVar7));
            puVar26 = puVar26 + 8;
          } while (puVar26 < puVar12);
        }
        else {
          param_1 = (uchar *)((longlong)puVar16 + 1);
          uVar8 = uVar4 & 0x7f;
          if (-1 < (char)uVar4) {
            uVar4 = *(ushort *)param_1;
            param_1 = (uchar *)((longlong)puVar16 + 3);
            if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < (ulonglong)uVar4)
            goto LAB_14f384c2a;
            puVar23 = puVar10 + -(ulonglong)uVar4;
            uVar19 = uVar19 + 4 + (ulonglong)uVar8;
            if ((ulonglong)uVar8 == 0x7f) {
              uVar9 = (ulonglong)*param_1;
              param_1 = (uchar *)(puVar16 + 2);
              if (0xbf < uVar9) {
                uVar6 = *(ulonglong *)param_1;
                param_1 = (uchar *)((longlong)puVar16 + 5);
                uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)(byte)uVar6;
              }
              uVar19 = uVar19 + uVar9;
            }
            if ((longlong)puVar26 - (longlong)puVar10 <= (longlong)uVar19) {
              if ((longlong)uVar19 < (longlong)local_f0 - (longlong)puVar10) {
                if ((longlong)uVar19 < 8) goto LAB_14f3849b1;
                *(undefined8 *)puVar10 = *(undefined8 *)puVar23;
                uVar9 = (ulonglong)((uint)uVar19 & 7);
                puVar26 = puVar10 + uVar9;
                puVar12 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                lVar7 = uVar9 - (longlong)puVar26;
                do {
                  *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar23 + lVar7));
                  puVar26 = puVar26 + 8;
                } while (puVar26 < puVar12);
                goto LAB_14f384dd0;
              }
              goto LAB_14f384bb5;
            }
            puVar12 = puVar10;
            do {
              *(undefined8 *)puVar12 =
                   *(undefined8 *)(puVar12 + ((longlong)puVar23 - (longlong)puVar10));
              puVar12 = puVar12 + 8;
            } while (puVar12 < puVar10 + uVar19);
LAB_14f384890:
            param_3 = puVar10 + uVar19;
            goto LAB_14f3842c2;
          }
          uVar19 = (ulonglong)(uVar8 >> 3) + 4;
          if ((ulonglong)(uVar8 >> 3) == 0xf) {
            uVar19 = (ulonglong)*param_1;
            param_1 = (uchar *)(puVar16 + 1);
            if (0xbf < uVar19) {
              uVar9 = *(ulonglong *)param_1;
              param_1 = (uchar *)((longlong)puVar16 + 3);
              uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)(byte)uVar9;
            }
            uVar19 = uVar19 + 0x13;
          }
          uVar9 = (ulonglong)(uVar4 & 7);
          if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < uVar9) goto LAB_14f384b6b;
          if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar10) {
            puVar23 = puVar10 + -uVar9;
            *puVar10 = *puVar23;
            puVar10[1] = puVar23[1];
            puVar10[2] = puVar23[2];
            puVar10[3] = puVar23[3];
            iVar21 = c_overlap_offset_step1add[uVar9];
            *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar23 + iVar21);
            if ((longlong)uVar19 < 9) goto LAB_14f384890;
            puVar12 = puVar23 + iVar21 + -(longlong)c_overlap_offset_step2sub[uVar9];
            puVar23 = puVar10 + 8;
            puVar22 = puVar23 + (uVar19 - 8);
            do {
              puVar12 = puVar12 + 8;
              *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
              puVar23 = puVar23 + 8;
            } while (puVar23 < puVar22);
            param_3 = puVar10 + uVar19;
            goto LAB_14f3842c2;
          }
          if ((longlong)local_f0 - (longlong)puVar10 < (longlong)uVar19) goto LAB_14f384b08;
          puVar26 = puVar10 + -uVar9;
          puVar23 = puVar10;
          for (uVar9 = uVar19; uVar9 != 0; uVar9 = uVar9 - 1) {
            uVar3 = *puVar26;
            puVar26 = puVar26 + 1;
            *puVar23 = uVar3;
            puVar23 = puVar23 + 1;
          }
        }
        goto LAB_14f384dd0;
      }
      if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < uVar9) goto LAB_14f384a0a;
      puVar23 = puVar10 + -uVar9;
      param_1 = (uchar *)(puVar16 + 1);
      uVar19 = uVar19 + 4;
      if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar10) goto code_r0x00014f3846aa;
      if ((longlong)local_f0 - (longlong)puVar10 <= (longlong)uVar19) {
LAB_14f384975:
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f387c0d;
        pcVar24 = "OODLE ERROR : LZ corruption : LZB match past end\n";
        iVar21 = 0x2f;
        pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner2.inl";
        goto LAB_14f387c09;
      }
      if (uVar19 < 8) {
        memmove(puVar10,puVar23,uVar19);
        param_3 = puVar10 + uVar19;
      }
      else {
        *(undefined8 *)puVar10 = *(undefined8 *)puVar23;
        uVar9 = (ulonglong)((uint)uVar19 & 7);
        puVar26 = puVar10 + uVar9;
        puVar12 = puVar26 + (uVar19 & 0xfffffffffffffff8);
        lVar7 = uVar9 - (longlong)puVar26;
        do {
          *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar23 + lVar7));
          puVar26 = puVar26 + 8;
        } while (puVar26 < puVar12);
        param_3 = puVar10 + uVar19;
      }
    }
LAB_14f384dd8:
    bVar27 = param_3 == local_f0;
    puVar17 = (ulonglong *)param_1;
    puVar25 = local_e8;
    if (param_3 < local_f0) {
LAB_14f384df0:
      puVar10 = local_f8;
      if (puVar25 <= param_1) {
        if (param_2 <= param_1) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f387c0d;
          pcVar24 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
          iVar21 = 0x61e;
          goto LAB_14f387c02;
        }
        if ((ulonglong *)param_2 == local_58) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f387c0d;
          pcVar24 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
          iVar21 = 0x61e;
          goto LAB_14f387c02;
        }
        memmove(local_d8,param_1,(longlong)param_2 - (longlong)param_1);
        param_2 = (uchar *)local_68;
        local_f8 = puVar10 + ((longlong)local_d8 - (longlong)param_1);
        puVar25 = local_a6;
        param_1 = (uchar *)local_d8;
      }
      bVar2 = (byte)*(ulonglong *)param_1;
      pbVar15 = (byte *)((longlong)param_1 + 1);
      sVar20 = (size_t)(bVar2 & 0xf);
      if (sVar20 < 9) {
        if (((longlong)local_f0 - (longlong)param_3 < (longlong)sVar20) ||
           ((longlong)param_2 - (longlong)pbVar15 < (longlong)sVar20)) goto LAB_14f3856b3;
        memmove(param_3,pbVar15,sVar20);
        puVar10 = param_3 + sVar20;
        puVar17 = (ulonglong *)(pbVar15 + sVar20);
        if (puVar10 == local_f0) goto LAB_14f387c1b;
        uVar4 = (ushort)*puVar17;
        uVar9 = (ulonglong)uVar4;
        uVar19 = (ulonglong)(bVar2 >> 4);
        if (uVar19 < 9) {
          if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < uVar9) goto LAB_14f384a0a;
          puVar26 = puVar10 + -uVar9;
          param_1 = (uchar *)((longlong)puVar17 + 2);
          uVar19 = uVar19 + 4;
          if ((longlong)local_f0 - (longlong)puVar10 <= (longlong)uVar19) goto LAB_14f3855c5;
          if (uVar19 < 8) {
            memmove(puVar10,puVar26,uVar19);
            param_3 = puVar10 + uVar19;
          }
          else {
            *(undefined8 *)puVar10 = *(undefined8 *)puVar26;
            uVar9 = (ulonglong)((uint)uVar19 & 7);
            puVar23 = puVar10 + uVar9;
            puVar12 = puVar23 + (uVar19 & 0xfffffffffffffff8);
            lVar7 = uVar9 - (longlong)puVar23;
            do {
              *(undefined8 *)puVar23 = *(undefined8 *)(puVar23 + (longlong)(puVar26 + lVar7));
              puVar23 = puVar23 + 8;
            } while (puVar23 < puVar12);
            param_3 = puVar10 + uVar19;
          }
          goto LAB_14f384df0;
        }
        if (uVar19 < 0xf) {
          if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < uVar9) goto LAB_14f384aca;
          uVar19 = uVar19 + 4;
          puVar26 = puVar10 + -uVar9;
          param_1 = (uchar *)((longlong)puVar17 + 2);
          if ((longlong)local_f0 - (longlong)puVar10 <= (longlong)uVar19) goto LAB_14f3855f3;
          if (uVar19 < 8) goto LAB_14f3851af;
          *(undefined8 *)puVar10 = *(undefined8 *)puVar26;
          uVar9 = (ulonglong)((uint)uVar19 & 7);
          puVar23 = puVar10 + uVar9;
          puVar12 = puVar23 + (uVar19 & 0xfffffffffffffff8);
          lVar7 = uVar9 - (longlong)puVar23;
          do {
            *(undefined8 *)puVar23 = *(undefined8 *)(puVar23 + (longlong)(puVar26 + lVar7));
            puVar23 = puVar23 + 8;
          } while (puVar23 < puVar12);
          param_3 = puVar10 + uVar19;
          goto LAB_14f384df0;
        }
        param_1 = (uchar *)((longlong)puVar17 + 1);
        uVar8 = uVar4 & 0x7f;
        if ((char)uVar4 < '\0') {
          lVar7 = (ulonglong)(uVar8 >> 3) + 4;
          if ((ulonglong)(uVar8 >> 3) == 0xf) {
            uVar19 = (ulonglong)*param_1;
            param_1 = (uchar *)((longlong)puVar17 + 2);
            if (0xbf < uVar19) {
              bVar2 = *param_1;
              param_1 = (uchar *)((longlong)puVar17 + 3);
              uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)bVar2;
            }
            lVar7 = uVar19 + 0x13;
          }
          if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < (ulonglong)(uVar4 & 7))
          goto LAB_14f384b6b;
          if ((longlong)local_f0 - (longlong)puVar10 <= lVar7) goto LAB_14f385625;
          puVar26 = puVar10 + -(ulonglong)(uVar4 & 7);
          uVar19 = 0;
          lVar13 = lVar7;
          puVar23 = puVar10;
          if (lVar7 == 0) goto LAB_14f385205;
          do {
            uVar3 = *puVar26;
            puVar26 = puVar26 + 1;
            *puVar23 = uVar3;
            puVar23 = puVar23 + 1;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          param_3 = puVar10 + lVar7;
          goto LAB_14f384df0;
        }
        uVar4 = *(ushort *)param_1;
        param_1 = (uchar *)((longlong)puVar17 + 3);
        if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < (ulonglong)uVar4)
        goto LAB_14f384c2a;
        puVar26 = puVar10 + -(ulonglong)uVar4;
        uVar19 = uVar19 + 4 + (ulonglong)uVar8;
        if ((ulonglong)uVar8 == 0x7f) {
          uVar9 = (ulonglong)*param_1;
          param_1 = (uchar *)((longlong)puVar17 + 4);
          if (0xbf < uVar9) {
            bVar2 = *param_1;
            param_1 = (uchar *)((longlong)puVar17 + 5);
            uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)bVar2;
          }
          uVar19 = uVar19 + uVar9;
        }
        if ((longlong)local_f0 - (longlong)puVar10 <= (longlong)uVar19) goto LAB_14f385653;
        if (7 < (longlong)uVar19) {
          *(undefined8 *)puVar10 = *(undefined8 *)puVar26;
          uVar9 = (ulonglong)((uint)uVar19 & 7);
          puVar23 = puVar10 + uVar9;
          puVar12 = puVar23 + (uVar19 & 0xfffffffffffffff8);
          lVar7 = uVar9 - (longlong)puVar23;
          do {
            *(undefined8 *)puVar23 = *(undefined8 *)(puVar23 + (longlong)(puVar26 + lVar7));
            puVar23 = puVar23 + 8;
          } while (puVar23 < puVar12);
          param_3 = puVar10 + uVar19;
          goto LAB_14f384df0;
        }
      }
      else {
        if (sVar20 < 0xf) {
          if ((longlong)local_f0 - (longlong)param_3 < (longlong)sVar20) {
            sVar20 = (size_t)((int)local_f0 - (int)param_3);
          }
          if ((longlong)param_2 - (longlong)pbVar15 < (longlong)sVar20) goto LAB_14f385685;
          memmove(param_3,pbVar15,sVar20);
          puVar10 = param_3 + sVar20;
          puVar17 = (ulonglong *)(pbVar15 + sVar20);
          if (puVar10 == local_f0) goto LAB_14f387c1b;
        }
        else {
          uVar19 = (ulonglong)*pbVar15;
          puVar16 = (ushort *)((longlong)param_1 + 2);
          if (0xbf < uVar19) {
            bVar1 = *(byte *)puVar16;
            puVar16 = (ushort *)((longlong)param_1 + 3);
            uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)bVar1;
          }
          sVar20 = sVar20 + uVar19;
          if (((longlong)param_2 - (longlong)puVar16 < (longlong)sVar20) ||
             ((longlong)local_f0 - (longlong)param_3 < (longlong)sVar20)) goto LAB_14f385593;
          memmove(param_3,puVar16,sVar20);
          puVar10 = param_3 + sVar20;
          puVar17 = (ulonglong *)((longlong)puVar16 + sVar20);
          if (puVar10 == local_f0) goto LAB_14f387c1b;
          if (puVar25 <= puVar17) {
            if (param_2 <= puVar17) goto LAB_14f385565;
            if ((ulonglong *)param_2 == local_58) goto LAB_14f38552e;
            memmove(local_d8,puVar17,(longlong)param_2 - (longlong)puVar17);
            param_2 = (uchar *)local_68;
            local_f8 = local_f8 + ((longlong)local_d8 - (longlong)puVar17);
            puVar25 = local_a6;
            puVar17 = local_d8;
          }
        }
        uVar4 = (ushort)*puVar17;
        uVar9 = (ulonglong)uVar4;
        uVar19 = (ulonglong)(bVar2 >> 4);
        if (uVar19 < 9) {
          if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < uVar9) goto LAB_14f384a0a;
          uVar19 = uVar19 + 4;
          puVar26 = puVar10 + -uVar9;
          param_1 = (uchar *)((longlong)puVar17 + 2);
          if ((longlong)local_f0 - (longlong)puVar10 <= (longlong)uVar19) goto LAB_14f3855c5;
          if (7 < uVar19) {
            *(undefined8 *)puVar10 = *(undefined8 *)puVar26;
            uVar9 = (ulonglong)((uint)uVar19 & 7);
            puVar23 = puVar10 + uVar9;
            puVar12 = puVar23 + (uVar19 & 0xfffffffffffffff8);
            lVar7 = uVar9 - (longlong)puVar23;
            do {
              *(undefined8 *)puVar23 = *(undefined8 *)(puVar23 + (longlong)(puVar26 + lVar7));
              puVar23 = puVar23 + 8;
            } while (puVar23 < puVar12);
            param_3 = puVar10 + uVar19;
            goto LAB_14f384df0;
          }
        }
        else {
          if (0xe < uVar19) {
            param_1 = (uchar *)((longlong)puVar17 + 1);
            uVar8 = uVar4 & 0x7f;
            if ((char)uVar4 < '\0') {
              lVar7 = (ulonglong)(uVar8 >> 3) + 4;
              if ((ulonglong)(uVar8 >> 3) == 0xf) {
                uVar19 = (ulonglong)*param_1;
                param_1 = (uchar *)((longlong)puVar17 + 2);
                if (0xbf < uVar19) {
                  bVar2 = *param_1;
                  param_1 = (uchar *)((longlong)puVar17 + 3);
                  uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)bVar2;
                }
                lVar7 = uVar19 + 0x13;
              }
              if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < (ulonglong)(uVar4 & 7))
              goto LAB_14f384b6b;
              if ((longlong)local_f0 - (longlong)puVar10 <= lVar7) goto LAB_14f385625;
              puVar26 = puVar10 + -(ulonglong)(uVar4 & 7);
              uVar19 = 0;
              lVar13 = lVar7;
              puVar23 = puVar10;
              if (lVar7 != 0) {
                do {
                  uVar3 = *puVar26;
                  puVar26 = puVar26 + 1;
                  *puVar23 = uVar3;
                  puVar23 = puVar23 + 1;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
                param_3 = puVar10 + lVar7;
                goto LAB_14f384df0;
              }
            }
            else {
              uVar4 = *(ushort *)param_1;
              param_1 = (uchar *)((longlong)puVar17 + 3);
              if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < (ulonglong)uVar4)
              goto LAB_14f384c2a;
              puVar26 = puVar10 + -(ulonglong)uVar4;
              uVar19 = uVar19 + 4 + (ulonglong)uVar8;
              if ((ulonglong)uVar8 == 0x7f) {
                uVar9 = (ulonglong)*param_1;
                param_1 = (uchar *)((longlong)puVar17 + 4);
                if (0xbf < uVar9) {
                  bVar2 = *param_1;
                  param_1 = (uchar *)((longlong)puVar17 + 5);
                  uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)bVar2;
                }
                uVar19 = uVar19 + uVar9;
              }
              if ((longlong)local_f0 - (longlong)puVar10 <= (longlong)uVar19) goto LAB_14f385653;
              if ((longlong)uVar19 < 8) goto LAB_14f3851af;
              *(undefined8 *)puVar10 = *(undefined8 *)puVar26;
              uVar9 = (ulonglong)((uint)uVar19 & 7);
              puVar23 = puVar10 + uVar9;
              puVar12 = puVar23 + (uVar19 & 0xfffffffffffffff8);
              lVar7 = uVar9 - (longlong)puVar23;
              do {
                *(undefined8 *)puVar23 = *(undefined8 *)(puVar23 + (longlong)(puVar26 + lVar7));
                puVar23 = puVar23 + 8;
              } while (puVar23 < puVar12);
            }
LAB_14f385205:
            param_3 = puVar10 + uVar19;
            goto LAB_14f384df0;
          }
          if ((ulonglong)((longlong)puVar10 - (longlong)param_5) < uVar9) goto LAB_14f384aca;
          uVar19 = uVar19 + 4;
          puVar26 = puVar10 + -uVar9;
          param_1 = (uchar *)((longlong)puVar17 + 2);
          if ((longlong)local_f0 - (longlong)puVar10 <= (longlong)uVar19) goto LAB_14f3855f3;
          if (7 < uVar19) {
            *(undefined8 *)puVar10 = *(undefined8 *)puVar26;
            uVar9 = (ulonglong)((uint)uVar19 & 7);
            puVar23 = puVar10 + uVar9;
            puVar12 = puVar23 + (uVar19 & 0xfffffffffffffff8);
            lVar7 = uVar9 - (longlong)puVar23;
            do {
              *(undefined8 *)puVar23 = *(undefined8 *)(puVar23 + (longlong)(puVar26 + lVar7));
              puVar23 = puVar23 + 8;
            } while (puVar23 < puVar12);
            param_3 = puVar10 + uVar19;
            goto LAB_14f384df0;
          }
        }
      }
LAB_14f3851af:
      memmove(puVar10,puVar26,uVar19);
      param_3 = puVar10 + uVar19;
      goto LAB_14f384df0;
    }
  }
  else {
    if (param_3 < puVar26) {
LAB_14f3856f5:
      puVar23 = local_f8;
      if (puVar25 <= param_1) {
        if (param_2 <= param_1) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f387c0d;
          pcVar24 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
          iVar21 = 0x635;
          goto LAB_14f387c02;
        }
        if ((ulonglong *)param_2 == local_58) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f387c0d;
          pcVar24 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
          iVar21 = 0x635;
          goto LAB_14f387c02;
        }
        memmove(local_d8,param_1,(longlong)param_2 - (longlong)param_1);
        puVar25 = local_a6;
        local_f8 = puVar23 + ((longlong)local_d8 - (longlong)param_1);
        param_2 = (uchar *)local_68;
        param_1 = (uchar *)local_d8;
        puVar10 = local_f0;
        local_e8 = puVar25;
      }
      if ((longlong)puVar10 - (longlong)param_3 < 0x50) {
        if (puVar10 <= param_3) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f387c0d;
          pcVar24 = "OODLE ERROR : LZ corruption : LZB raw went too far\n";
          iVar21 = 0x641;
          goto LAB_14f387c02;
        }
LAB_14f386197:
        bVar2 = (byte)*(ulonglong *)param_1;
        pbVar15 = (byte *)((longlong)param_1 + 1);
        uVar19 = (ulonglong)(bVar2 & 0xf);
        if (uVar19 < 9) {
          puVar16 = (ushort *)(pbVar15 + uVar19);
          *(undefined8 *)param_3 = *(undefined8 *)pbVar15;
          puVar23 = param_3 + uVar19;
          uVar19 = (ulonglong)(bVar2 >> 4);
          uVar4 = *puVar16;
          if (uVar19 < 9) {
            puVar12 = puVar23 + -(ulonglong)uVar4;
            param_1 = (uchar *)(puVar16 + 1);
            uVar19 = uVar19 + 4;
            if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
              *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
              *(undefined4 *)(puVar23 + 8) = *(undefined4 *)(puVar12 + 8);
              param_3 = puVar23 + uVar19;
              goto LAB_14f3856f5;
            }
            if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19) goto LAB_14f384975;
            if (uVar19 < 8) goto LAB_14f386cac;
            *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
            uVar9 = (ulonglong)((uint)uVar19 & 7);
            puVar26 = puVar23 + uVar9;
            puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
            lVar7 = uVar9 - (longlong)puVar26;
            do {
              *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
              puVar26 = puVar26 + 8;
            } while (puVar26 < puVar22);
          }
          else {
            if (uVar19 < 0xf) {
              puVar12 = puVar23 + -(ulonglong)uVar4;
              param_1 = (uchar *)(puVar16 + 1);
              uVar19 = uVar19 + 4;
              if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) goto LAB_14f385909;
              if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19) goto LAB_14f384a48;
              if (uVar19 < 8) {
                memmove(puVar23,puVar12,uVar19);
                puVar10 = local_f0;
              }
              else {
                *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                uVar9 = (ulonglong)((uint)uVar19 & 7);
                puVar26 = puVar23 + uVar9;
                puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                lVar7 = uVar9 - (longlong)puVar26;
                do {
                  *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                  puVar26 = puVar26 + 8;
                } while (puVar26 < puVar22);
              }
              goto LAB_14f387510;
            }
            param_1 = (uchar *)((longlong)puVar16 + 1);
            uVar8 = uVar4 & 0x7f;
            if ((char)uVar4 < '\0') {
              uVar19 = (ulonglong)(uVar8 >> 3) + 4;
              if ((ulonglong)(uVar8 >> 3) == 0xf) {
                uVar19 = (ulonglong)*param_1;
                param_1 = (uchar *)(puVar16 + 1);
                if (0xbf < uVar19) {
                  uVar9 = *(ulonglong *)param_1;
                  param_1 = (uchar *)((longlong)puVar16 + 3);
                  uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)(byte)uVar9;
                }
                uVar19 = uVar19 + 0x13;
              }
              uVar9 = (ulonglong)(uVar4 & 7);
              if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
                puVar12 = puVar23 + -uVar9;
                *puVar23 = *puVar12;
                puVar23[1] = puVar12[1];
                puVar23[2] = puVar12[2];
                puVar23[3] = puVar12[3];
                iVar21 = c_overlap_offset_step1add[uVar9];
                *(undefined4 *)(puVar23 + 4) = *(undefined4 *)(puVar12 + iVar21);
                if ((longlong)uVar19 < 9) goto LAB_14f385a90;
                puVar22 = puVar23 + 8;
                puVar12 = puVar12 + iVar21 + -(longlong)c_overlap_offset_step2sub[uVar9];
                do {
                  puVar12 = puVar12 + 8;
                  *(undefined8 *)puVar22 = *(undefined8 *)puVar12;
                  puVar22 = puVar22 + 8;
                } while (puVar22 < puVar23 + uVar19);
                param_3 = puVar23 + uVar19;
                goto LAB_14f3856f5;
              }
              if ((longlong)puVar10 - (longlong)puVar23 < (longlong)uVar19) goto LAB_14f384b08;
              puVar26 = puVar23 + -uVar9;
              puVar12 = puVar23;
              for (uVar9 = uVar19; uVar9 != 0; uVar9 = uVar9 - 1) {
                uVar3 = *puVar26;
                puVar26 = puVar26 + 1;
                *puVar12 = uVar3;
                puVar12 = puVar12 + 1;
              }
            }
            else {
              uVar19 = uVar19 + 4 + (ulonglong)uVar8;
              puVar12 = puVar23 + -(ulonglong)*(ushort *)param_1;
              param_1 = (uchar *)((longlong)puVar16 + 3);
              if ((ulonglong)uVar8 == 0x7f) {
                uVar9 = (ulonglong)*param_1;
                param_1 = (uchar *)(puVar16 + 2);
                if (0xbf < uVar9) {
                  uVar6 = *(ulonglong *)param_1;
                  param_1 = (uchar *)((longlong)puVar16 + 5);
                  uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)(byte)uVar6;
                }
                uVar19 = uVar19 + uVar9;
              }
              if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
                puVar22 = puVar23;
                do {
                  *(undefined8 *)puVar22 =
                       *(undefined8 *)(puVar22 + ((longlong)puVar12 - (longlong)puVar23));
                  puVar22 = puVar22 + 8;
                } while (puVar22 < puVar23 + uVar19);
                param_3 = puVar23 + uVar19;
                goto LAB_14f3856f5;
              }
              if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19) goto LAB_14f384bb5;
              if ((longlong)uVar19 < 8) goto LAB_14f386cac;
              *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
              uVar9 = (ulonglong)((uint)uVar19 & 7);
              puVar26 = puVar23 + uVar9;
              puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
              lVar7 = uVar9 - (longlong)puVar26;
              do {
                *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                puVar26 = puVar26 + 8;
              } while (puVar26 < puVar22);
            }
          }
        }
        else {
          if (uVar19 < 0xf) {
            if ((longlong)puVar26 - (longlong)param_3 <= (longlong)uVar19) goto LAB_14f387518;
            uVar5 = *(undefined8 *)((longlong)param_1 + 9);
            *(undefined8 *)param_3 = *(undefined8 *)pbVar15;
            *(undefined8 *)(param_3 + 8) = uVar5;
            puVar23 = param_3 + uVar19;
            puVar17 = (ulonglong *)(pbVar15 + uVar19);
          }
          else {
            uVar9 = (ulonglong)*pbVar15;
            puVar16 = (ushort *)((longlong)param_1 + 2);
            if (0xbf < uVar9) {
              bVar1 = *(byte *)puVar16;
              puVar16 = (ushort *)((longlong)param_1 + 3);
              uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)bVar1;
            }
            lVar7 = uVar9 + uVar19;
            puVar17 = (ulonglong *)(lVar7 + (longlong)puVar16);
            if ((puVar25 < puVar17) || ((longlong)puVar26 - (longlong)param_3 <= lVar7))
            goto LAB_14f387518;
            puVar23 = param_3 + lVar7;
            lVar7 = (longlong)puVar16 - (longlong)param_3;
            do {
              *(undefined8 *)param_3 = *(undefined8 *)(param_3 + lVar7);
              param_3 = param_3 + 8;
            } while (param_3 < puVar23);
            if (puVar25 <= puVar17) {
              if (param_2 <= puVar17) goto LAB_14f384925;
              if ((ulonglong *)param_2 == local_58) goto LAB_14f3848ee;
              memmove(local_d8,puVar17,(longlong)param_2 - (longlong)puVar17);
              puVar25 = local_a6;
              local_f8 = local_f8 + ((longlong)local_d8 - (longlong)puVar17);
              param_2 = (uchar *)local_68;
              puVar17 = local_d8;
              puVar10 = local_f0;
              local_e8 = puVar25;
            }
          }
          uVar4 = (ushort)*puVar17;
          uVar19 = (ulonglong)(bVar2 >> 4);
          if (uVar19 < 9) {
            puVar12 = puVar23 + -(ulonglong)uVar4;
            param_1 = (uchar *)((longlong)puVar17 + 2);
            uVar19 = uVar19 + 4;
            if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
              *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
              *(undefined4 *)(puVar23 + 8) = *(undefined4 *)(puVar12 + 8);
              param_3 = puVar23 + uVar19;
              goto LAB_14f3856f5;
            }
            if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19) goto LAB_14f384975;
            if (uVar19 < 8) goto LAB_14f386cac;
            *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
            uVar9 = (ulonglong)((uint)uVar19 & 7);
            puVar26 = puVar23 + uVar9;
            puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
            lVar7 = uVar9 - (longlong)puVar26;
            do {
              *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
              puVar26 = puVar26 + 8;
            } while (puVar26 < puVar22);
          }
          else if (uVar19 < 0xf) {
            puVar12 = puVar23 + -(ulonglong)uVar4;
            param_1 = (uchar *)((longlong)puVar17 + 2);
            uVar19 = uVar19 + 4;
            if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
LAB_14f3868e9:
              *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
              *(undefined8 *)(puVar23 + 8) = *(undefined8 *)(puVar12 + 8);
              *(undefined2 *)(puVar23 + 0x10) = *(undefined2 *)(puVar12 + 0x10);
              param_3 = puVar23 + uVar19;
              goto LAB_14f3856f5;
            }
            if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19) goto LAB_14f384a48;
            if (uVar19 < 8) goto LAB_14f386cac;
            *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
            uVar9 = (ulonglong)((uint)uVar19 & 7);
            puVar26 = puVar23 + uVar9;
            puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
            lVar7 = uVar9 - (longlong)puVar26;
            do {
              *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
              puVar26 = puVar26 + 8;
            } while (puVar26 < puVar22);
          }
          else {
            param_1 = (uchar *)((longlong)puVar17 + 1);
            uVar8 = uVar4 & 0x7f;
            if ((char)uVar4 < '\0') {
              uVar19 = (ulonglong)(uVar8 >> 3) + 4;
              if ((ulonglong)(uVar8 >> 3) == 0xf) {
                uVar19 = (ulonglong)*param_1;
                param_1 = (uchar *)((longlong)puVar17 + 2);
                if (0xbf < uVar19) {
                  bVar2 = *param_1;
                  param_1 = (uchar *)((longlong)puVar17 + 3);
                  uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)bVar2;
                }
                uVar19 = uVar19 + 0x13;
              }
              uVar9 = (ulonglong)(uVar4 & 7);
              if ((longlong)puVar26 - (longlong)puVar23 <= (longlong)uVar19) {
                if ((longlong)uVar19 <= (longlong)puVar10 - (longlong)puVar23) {
                  puVar26 = puVar23 + -uVar9;
                  puVar12 = puVar23;
                  for (uVar9 = uVar19; uVar9 != 0; uVar9 = uVar9 - 1) {
                    uVar3 = *puVar26;
                    puVar26 = puVar26 + 1;
                    *puVar12 = uVar3;
                    puVar12 = puVar12 + 1;
                  }
                  goto LAB_14f387510;
                }
                goto LAB_14f384b08;
              }
              puVar12 = puVar23 + -uVar9;
              *puVar23 = *puVar12;
              puVar23[1] = puVar12[1];
              puVar23[2] = puVar12[2];
              puVar23[3] = puVar12[3];
              iVar21 = c_overlap_offset_step1add[uVar9];
              *(undefined4 *)(puVar23 + 4) = *(undefined4 *)(puVar12 + iVar21);
              if ((longlong)uVar19 < 9) goto LAB_14f385a90;
              puVar22 = puVar12 + iVar21 + -(longlong)c_overlap_offset_step2sub[uVar9];
              puVar12 = puVar23 + 8;
              puVar14 = puVar12 + (uVar19 - 8);
              do {
                puVar22 = puVar22 + 8;
                *(undefined8 *)puVar12 = *(undefined8 *)puVar22;
                puVar12 = puVar12 + 8;
              } while (puVar12 < puVar14);
              param_3 = puVar23 + uVar19;
              goto LAB_14f3856f5;
            }
            uVar19 = uVar19 + 4 + (ulonglong)uVar8;
            puVar12 = puVar23 + -(ulonglong)*(ushort *)param_1;
            param_1 = (uchar *)((longlong)puVar17 + 3);
            if ((ulonglong)uVar8 == 0x7f) {
              uVar9 = (ulonglong)*param_1;
              param_1 = (uchar *)((longlong)puVar17 + 4);
              if (0xbf < uVar9) {
                bVar2 = *param_1;
                param_1 = (uchar *)((longlong)puVar17 + 5);
                uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)bVar2;
              }
              uVar19 = uVar19 + uVar9;
            }
            if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
              puVar22 = puVar23;
              do {
                *(undefined8 *)puVar22 =
                     *(undefined8 *)(puVar22 + ((longlong)puVar12 - (longlong)puVar23));
                puVar22 = puVar22 + 8;
              } while (puVar22 < puVar23 + uVar19);
              param_3 = puVar23 + uVar19;
              goto LAB_14f3856f5;
            }
            if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19) goto LAB_14f384bb5;
            if ((longlong)uVar19 < 8) goto LAB_14f386cac;
            *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
            uVar9 = (ulonglong)((uint)uVar19 & 7);
            puVar26 = puVar23 + uVar9;
            puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
            lVar7 = uVar9 - (longlong)puVar26;
            do {
              *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
              puVar26 = puVar26 + 8;
            } while (puVar26 < puVar22);
          }
        }
      }
      else {
        bVar2 = (byte)*(ulonglong *)param_1;
        pbVar15 = (byte *)((longlong)param_1 + 1);
        uVar19 = (ulonglong)(bVar2 & 0xf);
        if (uVar19 < 9) {
          puVar16 = (ushort *)(pbVar15 + uVar19);
          *(undefined8 *)param_3 = *(undefined8 *)pbVar15;
          puVar23 = param_3 + uVar19;
          uVar19 = (ulonglong)(bVar2 >> 4);
          uVar4 = *puVar16;
          if (uVar19 < 9) {
            param_1 = (uchar *)(puVar16 + 1);
            *(undefined8 *)puVar23 = *(undefined8 *)(puVar23 + -(ulonglong)uVar4);
            *(undefined4 *)(puVar23 + 8) = *(undefined4 *)(puVar23 + -(ulonglong)uVar4 + 8);
            param_3 = puVar23 + uVar19 + 4;
            bVar2 = (byte)puVar16[1];
            pbVar15 = (byte *)((longlong)puVar16 + 3);
            uVar19 = (ulonglong)(bVar2 & 0xf);
            if (uVar19 < 9) {
              puVar16 = (ushort *)(pbVar15 + uVar19);
              *(undefined8 *)param_3 = *(undefined8 *)pbVar15;
              puVar23 = param_3 + uVar19;
              uVar19 = (ulonglong)(bVar2 >> 4);
              uVar4 = *puVar16;
              if (uVar19 < 9) {
                param_1 = (uchar *)(puVar16 + 1);
                *(undefined8 *)puVar23 = *(undefined8 *)(puVar23 + -(ulonglong)uVar4);
                *(undefined4 *)(puVar23 + 8) = *(undefined4 *)(puVar23 + -(ulonglong)uVar4 + 8);
                param_3 = puVar23 + uVar19 + 4;
                bVar2 = (byte)puVar16[1];
                pbVar15 = (byte *)((longlong)puVar16 + 3);
                uVar19 = (ulonglong)(bVar2 & 0xf);
                if (uVar19 < 9) {
                  puVar16 = (ushort *)(pbVar15 + uVar19);
                  *(undefined8 *)param_3 = *(undefined8 *)pbVar15;
                  puVar23 = param_3 + uVar19;
                  uVar19 = (ulonglong)(bVar2 >> 4);
                  uVar4 = *puVar16;
                  if (uVar19 < 9) {
                    param_1 = (uchar *)(puVar16 + 1);
                    *(undefined8 *)puVar23 = *(undefined8 *)(puVar23 + -(ulonglong)uVar4);
                    *(undefined4 *)(puVar23 + 8) = *(undefined4 *)(puVar23 + -(ulonglong)uVar4 + 8);
                    param_3 = puVar23 + uVar19 + 4;
                    goto LAB_14f386197;
                  }
                  if (uVar19 < 0xf) {
                    puVar12 = puVar23 + -(ulonglong)uVar4;
                    param_1 = (uchar *)(puVar16 + 1);
                    uVar19 = uVar19 + 4;
                    if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23)
                    goto LAB_14f3868e9;
                    if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19)
                    goto LAB_14f384a48;
                    if (uVar19 < 8) goto LAB_14f386cac;
                    *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                    uVar9 = (ulonglong)((uint)uVar19 & 7);
                    puVar26 = puVar23 + uVar9;
                    puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                    lVar7 = uVar9 - (longlong)puVar26;
                    do {
                      *(undefined8 *)puVar26 =
                           *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                      puVar26 = puVar26 + 8;
                    } while (puVar26 < puVar22);
                  }
                  else {
                    param_1 = (uchar *)((longlong)puVar16 + 1);
                    uVar8 = uVar4 & 0x7f;
                    if ((char)uVar4 < '\0') {
                      uVar19 = (ulonglong)(uVar8 >> 3) + 4;
                      if ((ulonglong)(uVar8 >> 3) == 0xf) {
                        uVar19 = (ulonglong)*param_1;
                        param_1 = (uchar *)(puVar16 + 1);
                        if (0xbf < uVar19) {
                          uVar9 = *(ulonglong *)param_1;
                          param_1 = (uchar *)((longlong)puVar16 + 3);
                          uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)(byte)uVar9;
                        }
                        uVar19 = uVar19 + 0x13;
                      }
                      uVar9 = (ulonglong)(uVar4 & 7);
                      if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
                        puVar12 = puVar23 + -uVar9;
                        *puVar23 = *puVar12;
                        puVar23[1] = puVar12[1];
                        puVar23[2] = puVar12[2];
                        puVar23[3] = puVar12[3];
                        iVar21 = c_overlap_offset_step1add[uVar9];
                        *(undefined4 *)(puVar23 + 4) = *(undefined4 *)(puVar12 + iVar21);
                        if ((longlong)uVar19 < 9) goto LAB_14f385a90;
                        puVar22 = puVar12 + iVar21 + -(longlong)c_overlap_offset_step2sub[uVar9];
                        puVar12 = puVar23 + 8;
                        puVar14 = puVar12 + (uVar19 - 8);
                        do {
                          puVar22 = puVar22 + 8;
                          *(undefined8 *)puVar12 = *(undefined8 *)puVar22;
                          puVar12 = puVar12 + 8;
                        } while (puVar12 < puVar14);
                        param_3 = puVar23 + uVar19;
                        goto LAB_14f3856f5;
                      }
                      if ((longlong)puVar10 - (longlong)puVar23 < (longlong)uVar19)
                      goto LAB_14f384b08;
                      puVar26 = puVar23 + -uVar9;
                      puVar12 = puVar23;
                      for (uVar9 = uVar19; uVar9 != 0; uVar9 = uVar9 - 1) {
                        uVar3 = *puVar26;
                        puVar26 = puVar26 + 1;
                        *puVar12 = uVar3;
                        puVar12 = puVar12 + 1;
                      }
                    }
                    else {
                      uVar19 = uVar19 + 4 + (ulonglong)uVar8;
                      puVar12 = puVar23 + -(ulonglong)*(ushort *)param_1;
                      param_1 = (uchar *)((longlong)puVar16 + 3);
                      if ((ulonglong)uVar8 == 0x7f) {
                        uVar9 = (ulonglong)*param_1;
                        param_1 = (uchar *)(puVar16 + 2);
                        if (0xbf < uVar9) {
                          uVar6 = *(ulonglong *)param_1;
                          param_1 = (uchar *)((longlong)puVar16 + 5);
                          uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)(byte)uVar6;
                        }
                        uVar19 = uVar19 + uVar9;
                      }
                      if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
                        puVar22 = puVar23;
                        do {
                          *(undefined8 *)puVar22 =
                               *(undefined8 *)(puVar22 + ((longlong)puVar12 - (longlong)puVar23));
                          puVar22 = puVar22 + 8;
                        } while (puVar22 < puVar23 + uVar19);
                        param_3 = puVar23 + uVar19;
                        goto LAB_14f3856f5;
                      }
                      if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19)
                      goto LAB_14f384bb5;
                      if ((longlong)uVar19 < 8) goto LAB_14f386cac;
                      *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                      uVar9 = (ulonglong)((uint)uVar19 & 7);
                      puVar26 = puVar23 + uVar9;
                      puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                      lVar7 = uVar9 - (longlong)puVar26;
                      do {
                        *(undefined8 *)puVar26 =
                             *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                        puVar26 = puVar26 + 8;
                      } while (puVar26 < puVar22);
                    }
                  }
                }
                else {
                  if (uVar19 < 0xf) {
                    if ((longlong)puVar26 - (longlong)param_3 <= (longlong)uVar19)
                    goto LAB_14f387518;
                    uVar5 = *(undefined8 *)((longlong)puVar16 + 0xb);
                    *(undefined8 *)param_3 = *(undefined8 *)pbVar15;
                    *(undefined8 *)(param_3 + 8) = uVar5;
                    puVar23 = param_3 + uVar19;
                    puVar17 = (ulonglong *)(pbVar15 + uVar19);
                  }
                  else {
                    uVar9 = (ulonglong)*pbVar15;
                    puVar18 = puVar16 + 2;
                    if (0xbf < uVar9) {
                      uVar4 = *puVar18;
                      puVar18 = (ushort *)((longlong)puVar16 + 5);
                      uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)(byte)uVar4;
                    }
                    lVar7 = uVar9 + uVar19;
                    puVar17 = (ulonglong *)(lVar7 + (longlong)puVar18);
                    if ((puVar25 < puVar17) || ((longlong)puVar26 - (longlong)param_3 <= lVar7))
                    goto LAB_14f387518;
                    puVar23 = param_3 + lVar7;
                    lVar7 = (longlong)puVar18 - (longlong)param_3;
                    do {
                      *(undefined8 *)param_3 = *(undefined8 *)(param_3 + lVar7);
                      param_3 = param_3 + 8;
                    } while (param_3 < puVar23);
                    if (puVar25 <= puVar17) {
                      if (param_2 <= puVar17) goto LAB_14f384925;
                      if ((ulonglong *)param_2 == local_58) goto LAB_14f3848ee;
                      memmove(local_d8,puVar17,(longlong)param_2 - (longlong)puVar17);
                      puVar25 = local_a6;
                      local_f8 = local_f8 + ((longlong)local_d8 - (longlong)puVar17);
                      param_2 = (uchar *)local_68;
                      puVar17 = local_d8;
                      puVar10 = local_f0;
                      local_e8 = puVar25;
                    }
                  }
                  uVar4 = (ushort)*puVar17;
                  uVar19 = (ulonglong)(bVar2 >> 4);
                  if (uVar19 < 9) {
                    puVar12 = puVar23 + -(ulonglong)uVar4;
                    param_1 = (uchar *)((longlong)puVar17 + 2);
                    uVar19 = uVar19 + 4;
                    if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
                      *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                      *(undefined4 *)(puVar23 + 8) = *(undefined4 *)(puVar12 + 8);
                      param_3 = puVar23 + uVar19;
                      goto LAB_14f3856f5;
                    }
                    if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19)
                    goto LAB_14f384975;
                    if (uVar19 < 8) goto LAB_14f386cac;
                    *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                    uVar9 = (ulonglong)((uint)uVar19 & 7);
                    puVar26 = puVar23 + uVar9;
                    puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                    lVar7 = uVar9 - (longlong)puVar26;
                    do {
                      *(undefined8 *)puVar26 =
                           *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                      puVar26 = puVar26 + 8;
                    } while (puVar26 < puVar22);
                  }
                  else if (uVar19 < 0xf) {
                    puVar12 = puVar23 + -(ulonglong)uVar4;
                    param_1 = (uchar *)((longlong)puVar17 + 2);
                    uVar19 = uVar19 + 4;
                    if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23)
                    goto LAB_14f3868e9;
                    if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19)
                    goto LAB_14f384a48;
                    if (uVar19 < 8) goto LAB_14f386cac;
                    *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                    uVar9 = (ulonglong)((uint)uVar19 & 7);
                    puVar26 = puVar23 + uVar9;
                    puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                    lVar7 = uVar9 - (longlong)puVar26;
                    do {
                      *(undefined8 *)puVar26 =
                           *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                      puVar26 = puVar26 + 8;
                    } while (puVar26 < puVar22);
                  }
                  else {
                    param_1 = (uchar *)((longlong)puVar17 + 1);
                    uVar8 = uVar4 & 0x7f;
                    if ((char)uVar4 < '\0') {
                      uVar19 = (ulonglong)(uVar8 >> 3) + 4;
                      if ((ulonglong)(uVar8 >> 3) == 0xf) {
                        uVar19 = (ulonglong)*param_1;
                        param_1 = (uchar *)((longlong)puVar17 + 2);
                        if (0xbf < uVar19) {
                          bVar2 = *param_1;
                          param_1 = (uchar *)((longlong)puVar17 + 3);
                          uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)bVar2;
                        }
                        uVar19 = uVar19 + 0x13;
                      }
                      uVar9 = (ulonglong)(uVar4 & 7);
                      if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
                        puVar12 = puVar23 + -uVar9;
                        *puVar23 = *puVar12;
                        puVar23[1] = puVar12[1];
                        puVar23[2] = puVar12[2];
                        puVar23[3] = puVar12[3];
                        iVar21 = c_overlap_offset_step1add[uVar9];
                        *(undefined4 *)(puVar23 + 4) = *(undefined4 *)(puVar12 + iVar21);
                        if ((longlong)uVar19 < 9) goto LAB_14f385a90;
                        puVar22 = puVar12 + iVar21 + -(longlong)c_overlap_offset_step2sub[uVar9];
                        puVar12 = puVar23 + 8;
                        puVar14 = puVar12 + (uVar19 - 8);
                        do {
                          puVar22 = puVar22 + 8;
                          *(undefined8 *)puVar12 = *(undefined8 *)puVar22;
                          puVar12 = puVar12 + 8;
                        } while (puVar12 < puVar14);
                        param_3 = puVar23 + uVar19;
                        goto LAB_14f3856f5;
                      }
                      if ((longlong)puVar10 - (longlong)puVar23 < (longlong)uVar19)
                      goto LAB_14f384b08;
                      puVar26 = puVar23 + -uVar9;
                      puVar12 = puVar23;
                      for (uVar9 = uVar19; uVar9 != 0; uVar9 = uVar9 - 1) {
                        uVar3 = *puVar26;
                        puVar26 = puVar26 + 1;
                        *puVar12 = uVar3;
                        puVar12 = puVar12 + 1;
                      }
                    }
                    else {
                      uVar19 = uVar19 + 4 + (ulonglong)uVar8;
                      puVar12 = puVar23 + -(ulonglong)*(ushort *)param_1;
                      param_1 = (uchar *)((longlong)puVar17 + 3);
                      if ((ulonglong)uVar8 == 0x7f) {
                        uVar9 = (ulonglong)*param_1;
                        param_1 = (uchar *)((longlong)puVar17 + 4);
                        if (0xbf < uVar9) {
                          bVar2 = *param_1;
                          param_1 = (uchar *)((longlong)puVar17 + 5);
                          uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)bVar2;
                        }
                        uVar19 = uVar19 + uVar9;
                      }
                      if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
                        puVar22 = puVar23;
                        do {
                          *(undefined8 *)puVar22 =
                               *(undefined8 *)(puVar22 + ((longlong)puVar12 - (longlong)puVar23));
                          puVar22 = puVar22 + 8;
                        } while (puVar22 < puVar23 + uVar19);
                        param_3 = puVar23 + uVar19;
                        goto LAB_14f3856f5;
                      }
                      if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19)
                      goto LAB_14f384bb5;
                      if ((longlong)uVar19 < 8) goto LAB_14f386cac;
                      *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                      uVar9 = (ulonglong)((uint)uVar19 & 7);
                      puVar26 = puVar23 + uVar9;
                      puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                      lVar7 = uVar9 - (longlong)puVar26;
                      do {
                        *(undefined8 *)puVar26 =
                             *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                        puVar26 = puVar26 + 8;
                      } while (puVar26 < puVar22);
                    }
                  }
                }
              }
              else if (uVar19 < 0xf) {
                puVar12 = puVar23 + -(ulonglong)uVar4;
                param_1 = (uchar *)(puVar16 + 1);
                uVar19 = uVar19 + 4;
                if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) goto LAB_14f3868e9;
                if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19) goto LAB_14f384a48;
                if (uVar19 < 8) goto LAB_14f386cac;
                *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                uVar9 = (ulonglong)((uint)uVar19 & 7);
                puVar26 = puVar23 + uVar9;
                puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                lVar7 = uVar9 - (longlong)puVar26;
                do {
                  *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                  puVar26 = puVar26 + 8;
                } while (puVar26 < puVar22);
              }
              else {
                param_1 = (uchar *)((longlong)puVar16 + 1);
                uVar8 = uVar4 & 0x7f;
                if ((char)uVar4 < '\0') {
                  uVar19 = (ulonglong)(uVar8 >> 3) + 4;
                  if ((ulonglong)(uVar8 >> 3) == 0xf) {
                    uVar19 = (ulonglong)*param_1;
                    param_1 = (uchar *)(puVar16 + 1);
                    if (0xbf < uVar19) {
                      uVar9 = *(ulonglong *)param_1;
                      param_1 = (uchar *)((longlong)puVar16 + 3);
                      uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)(byte)uVar9;
                    }
                    uVar19 = uVar19 + 0x13;
                  }
                  uVar9 = (ulonglong)(uVar4 & 7);
                  if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
                    puVar12 = puVar23 + -uVar9;
                    *puVar23 = *puVar12;
                    puVar23[1] = puVar12[1];
                    puVar23[2] = puVar12[2];
                    puVar23[3] = puVar12[3];
                    iVar21 = c_overlap_offset_step1add[uVar9];
                    *(undefined4 *)(puVar23 + 4) = *(undefined4 *)(puVar12 + iVar21);
                    if ((longlong)uVar19 < 9) goto LAB_14f385a90;
                    puVar22 = puVar12 + iVar21 + -(longlong)c_overlap_offset_step2sub[uVar9];
                    puVar12 = puVar23 + 8;
                    puVar14 = puVar12 + (uVar19 - 8);
                    do {
                      puVar22 = puVar22 + 8;
                      *(undefined8 *)puVar12 = *(undefined8 *)puVar22;
                      puVar12 = puVar12 + 8;
                    } while (puVar12 < puVar14);
                    param_3 = puVar23 + uVar19;
                    goto LAB_14f3856f5;
                  }
                  if ((longlong)puVar10 - (longlong)puVar23 < (longlong)uVar19) goto LAB_14f384b08;
                  puVar26 = puVar23 + -uVar9;
                  puVar12 = puVar23;
                  for (uVar9 = uVar19; uVar9 != 0; uVar9 = uVar9 - 1) {
                    uVar3 = *puVar26;
                    puVar26 = puVar26 + 1;
                    *puVar12 = uVar3;
                    puVar12 = puVar12 + 1;
                  }
                }
                else {
                  uVar19 = uVar19 + 4 + (ulonglong)uVar8;
                  puVar12 = puVar23 + -(ulonglong)*(ushort *)param_1;
                  param_1 = (uchar *)((longlong)puVar16 + 3);
                  if ((ulonglong)uVar8 == 0x7f) {
                    uVar9 = (ulonglong)*param_1;
                    param_1 = (uchar *)(puVar16 + 2);
                    if (0xbf < uVar9) {
                      uVar6 = *(ulonglong *)param_1;
                      param_1 = (uchar *)((longlong)puVar16 + 5);
                      uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)(byte)uVar6;
                    }
                    uVar19 = uVar19 + uVar9;
                  }
                  if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
                    puVar22 = puVar23;
                    do {
                      *(undefined8 *)puVar22 =
                           *(undefined8 *)(puVar22 + ((longlong)puVar12 - (longlong)puVar23));
                      puVar22 = puVar22 + 8;
                    } while (puVar22 < puVar23 + uVar19);
                    param_3 = puVar23 + uVar19;
                    goto LAB_14f3856f5;
                  }
                  if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19) goto LAB_14f384bb5;
                  if ((longlong)uVar19 < 8) goto LAB_14f386cac;
                  *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                  uVar9 = (ulonglong)((uint)uVar19 & 7);
                  puVar26 = puVar23 + uVar9;
                  puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                  lVar7 = uVar9 - (longlong)puVar26;
                  do {
                    *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                    puVar26 = puVar26 + 8;
                  } while (puVar26 < puVar22);
                }
              }
            }
            else {
              if (uVar19 < 0xf) {
                if ((longlong)puVar26 - (longlong)param_3 <= (longlong)uVar19) goto LAB_14f387518;
                uVar5 = *(undefined8 *)((longlong)puVar16 + 0xb);
                *(undefined8 *)param_3 = *(undefined8 *)pbVar15;
                *(undefined8 *)(param_3 + 8) = uVar5;
                puVar23 = param_3 + uVar19;
                puVar17 = (ulonglong *)(pbVar15 + uVar19);
              }
              else {
                uVar9 = (ulonglong)*pbVar15;
                puVar18 = puVar16 + 2;
                if (0xbf < uVar9) {
                  uVar4 = *puVar18;
                  puVar18 = (ushort *)((longlong)puVar16 + 5);
                  uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)(byte)uVar4;
                }
                lVar7 = uVar9 + uVar19;
                puVar17 = (ulonglong *)(lVar7 + (longlong)puVar18);
                if ((puVar25 < puVar17) || ((longlong)puVar26 - (longlong)param_3 <= lVar7))
                goto LAB_14f387518;
                puVar23 = param_3 + lVar7;
                lVar7 = (longlong)puVar18 - (longlong)param_3;
                do {
                  *(undefined8 *)param_3 = *(undefined8 *)(param_3 + lVar7);
                  param_3 = param_3 + 8;
                } while (param_3 < puVar23);
                if (puVar25 <= puVar17) {
                  if (param_2 <= puVar17) goto LAB_14f384925;
                  if ((ulonglong *)param_2 == local_58) goto LAB_14f3848ee;
                  memmove(local_d8,puVar17,(longlong)param_2 - (longlong)puVar17);
                  puVar25 = local_a6;
                  local_f8 = local_f8 + ((longlong)local_d8 - (longlong)puVar17);
                  param_2 = (uchar *)local_68;
                  puVar17 = local_d8;
                  puVar10 = local_f0;
                  local_e8 = puVar25;
                }
              }
              uVar4 = (ushort)*puVar17;
              uVar19 = (ulonglong)(bVar2 >> 4);
              if (uVar19 < 9) {
                puVar12 = puVar23 + -(ulonglong)uVar4;
                param_1 = (uchar *)((longlong)puVar17 + 2);
                uVar19 = uVar19 + 4;
                if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
                  *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                  *(undefined4 *)(puVar23 + 8) = *(undefined4 *)(puVar12 + 8);
                  param_3 = puVar23 + uVar19;
                  goto LAB_14f3856f5;
                }
                if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19) goto LAB_14f384975;
                if (uVar19 < 8) goto LAB_14f386cac;
                *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                uVar9 = (ulonglong)((uint)uVar19 & 7);
                puVar26 = puVar23 + uVar9;
                puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                lVar7 = uVar9 - (longlong)puVar26;
                do {
                  *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                  puVar26 = puVar26 + 8;
                } while (puVar26 < puVar22);
              }
              else {
                if (uVar19 < 0xf) {
                  puVar12 = puVar23 + -(ulonglong)uVar4;
                  param_1 = (uchar *)((longlong)puVar17 + 2);
                  uVar19 = uVar19 + 4;
                  if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) goto LAB_14f385909;
                  if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19) goto LAB_14f384a48;
                  if (uVar19 < 8) {
                    memmove(puVar23,puVar12,uVar19);
                    puVar10 = local_f0;
                  }
                  else {
                    *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                    uVar9 = (ulonglong)((uint)uVar19 & 7);
                    puVar26 = puVar23 + uVar9;
                    puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                    lVar7 = uVar9 - (longlong)puVar26;
                    do {
                      *(undefined8 *)puVar26 =
                           *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                      puVar26 = puVar26 + 8;
                    } while (puVar26 < puVar22);
                  }
                  goto LAB_14f387510;
                }
                param_1 = (uchar *)((longlong)puVar17 + 1);
                uVar8 = uVar4 & 0x7f;
                if (-1 < (char)uVar4) {
                  uVar19 = uVar19 + 4 + (ulonglong)uVar8;
                  puVar12 = puVar23 + -(ulonglong)*(ushort *)param_1;
                  param_1 = (uchar *)((longlong)puVar17 + 3);
                  if ((ulonglong)uVar8 == 0x7f) {
                    uVar9 = (ulonglong)*param_1;
                    param_1 = (uchar *)((longlong)puVar17 + 4);
                    if (0xbf < uVar9) {
                      bVar2 = *param_1;
                      param_1 = (uchar *)((longlong)puVar17 + 5);
                      uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)bVar2;
                    }
                    uVar19 = uVar19 + uVar9;
                  }
                  if ((longlong)puVar26 - (longlong)puVar23 <= (longlong)uVar19) {
                    if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19)
                    goto LAB_14f384bb5;
                    if (7 < (longlong)uVar19) {
                      *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                      uVar9 = (ulonglong)((uint)uVar19 & 7);
                      puVar26 = puVar23 + uVar9;
                      puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                      lVar7 = uVar9 - (longlong)puVar26;
                      do {
                        *(undefined8 *)puVar26 =
                             *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                        puVar26 = puVar26 + 8;
                      } while (puVar26 < puVar22);
                      goto LAB_14f387510;
                    }
                    goto LAB_14f386cac;
                  }
                  puVar22 = puVar23;
                  do {
                    *(undefined8 *)puVar22 =
                         *(undefined8 *)(puVar22 + ((longlong)puVar12 - (longlong)puVar23));
                    puVar22 = puVar22 + 8;
                  } while (puVar22 < puVar23 + uVar19);
                  param_3 = puVar23 + uVar19;
                  goto LAB_14f3856f5;
                }
                uVar19 = (ulonglong)(uVar8 >> 3) + 4;
                if ((ulonglong)(uVar8 >> 3) == 0xf) {
                  uVar19 = (ulonglong)*param_1;
                  param_1 = (uchar *)((longlong)puVar17 + 2);
                  if (0xbf < uVar19) {
                    bVar2 = *param_1;
                    param_1 = (uchar *)((longlong)puVar17 + 3);
                    uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)bVar2;
                  }
                  uVar19 = uVar19 + 0x13;
                }
                uVar9 = (ulonglong)(uVar4 & 7);
                if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
                  puVar12 = puVar23 + -uVar9;
                  *puVar23 = *puVar12;
                  puVar23[1] = puVar12[1];
                  puVar23[2] = puVar12[2];
                  puVar23[3] = puVar12[3];
                  iVar21 = c_overlap_offset_step1add[uVar9];
                  *(undefined4 *)(puVar23 + 4) = *(undefined4 *)(puVar12 + iVar21);
                  if ((longlong)uVar19 < 9) goto LAB_14f385a90;
                  puVar22 = puVar23 + 8;
                  puVar12 = puVar12 + iVar21 + -(longlong)c_overlap_offset_step2sub[uVar9];
                  do {
                    puVar12 = puVar12 + 8;
                    *(undefined8 *)puVar22 = *(undefined8 *)puVar12;
                    puVar22 = puVar22 + 8;
                  } while (puVar22 < puVar23 + uVar19);
                  param_3 = puVar23 + uVar19;
                  goto LAB_14f3856f5;
                }
                if ((longlong)puVar10 - (longlong)puVar23 < (longlong)uVar19) goto LAB_14f384b08;
                puVar26 = puVar23 + -uVar9;
                puVar12 = puVar23;
                for (uVar9 = uVar19; uVar9 != 0; uVar9 = uVar9 - 1) {
                  uVar3 = *puVar26;
                  puVar26 = puVar26 + 1;
                  *puVar12 = uVar3;
                  puVar12 = puVar12 + 1;
                }
              }
            }
          }
          else {
            if (uVar19 < 0xf) {
              puVar12 = puVar23 + -(ulonglong)uVar4;
              param_1 = (uchar *)(puVar16 + 1);
              uVar19 = uVar19 + 4;
              if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) goto LAB_14f385909;
              if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19) goto LAB_14f384a48;
              if (uVar19 < 8) {
                memmove(puVar23,puVar12,uVar19);
                puVar10 = local_f0;
              }
              else {
                *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                uVar9 = (ulonglong)((uint)uVar19 & 7);
                puVar26 = puVar23 + uVar9;
                puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                lVar7 = uVar9 - (longlong)puVar26;
                do {
                  *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                  puVar26 = puVar26 + 8;
                } while (puVar26 < puVar22);
              }
              goto LAB_14f387510;
            }
            param_1 = (uchar *)((longlong)puVar16 + 1);
            uVar8 = uVar4 & 0x7f;
            if (-1 < (char)uVar4) {
              uVar19 = uVar19 + 4 + (ulonglong)uVar8;
              puVar12 = puVar23 + -(ulonglong)*(ushort *)param_1;
              param_1 = (uchar *)((longlong)puVar16 + 3);
              if ((ulonglong)uVar8 == 0x7f) {
                uVar9 = (ulonglong)*param_1;
                param_1 = (uchar *)(puVar16 + 2);
                if (0xbf < uVar9) {
                  uVar6 = *(ulonglong *)param_1;
                  param_1 = (uchar *)((longlong)puVar16 + 5);
                  uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)(byte)uVar6;
                }
                uVar19 = uVar19 + uVar9;
              }
              if ((longlong)puVar26 - (longlong)puVar23 <= (longlong)uVar19) {
                if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19) goto LAB_14f384bb5;
                if ((longlong)uVar19 < 8) {
                  memmove(puVar23,puVar12,uVar19);
                  puVar10 = local_f0;
                }
                else {
                  *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                  uVar9 = (ulonglong)((uint)uVar19 & 7);
                  puVar26 = puVar23 + uVar9;
                  puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                  lVar7 = uVar9 - (longlong)puVar26;
                  do {
                    *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                    puVar26 = puVar26 + 8;
                  } while (puVar26 < puVar22);
                }
                goto LAB_14f387510;
              }
              puVar22 = puVar23;
              do {
                *(undefined8 *)puVar22 =
                     *(undefined8 *)(puVar22 + ((longlong)puVar12 - (longlong)puVar23));
                puVar22 = puVar22 + 8;
              } while (puVar22 < puVar23 + uVar19);
              param_3 = puVar23 + uVar19;
              goto LAB_14f3856f5;
            }
            uVar19 = (ulonglong)(uVar8 >> 3) + 4;
            if ((ulonglong)(uVar8 >> 3) == 0xf) {
              uVar19 = (ulonglong)*param_1;
              param_1 = (uchar *)(puVar16 + 1);
              if (0xbf < uVar19) {
                uVar9 = *(ulonglong *)param_1;
                param_1 = (uchar *)((longlong)puVar16 + 3);
                uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)(byte)uVar9;
              }
              uVar19 = uVar19 + 0x13;
            }
            uVar9 = (ulonglong)(uVar4 & 7);
            if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
              puVar12 = puVar23 + -uVar9;
              *puVar23 = *puVar12;
              puVar23[1] = puVar12[1];
              puVar23[2] = puVar12[2];
              puVar23[3] = puVar12[3];
              iVar21 = c_overlap_offset_step1add[uVar9];
              *(undefined4 *)(puVar23 + 4) = *(undefined4 *)(puVar12 + iVar21);
              if ((longlong)uVar19 < 9) goto LAB_14f385a90;
              puVar22 = puVar23 + 8;
              puVar12 = puVar12 + iVar21 + -(longlong)c_overlap_offset_step2sub[uVar9];
              do {
                puVar12 = puVar12 + 8;
                *(undefined8 *)puVar22 = *(undefined8 *)puVar12;
                puVar22 = puVar22 + 8;
              } while (puVar22 < puVar23 + uVar19);
              param_3 = puVar23 + uVar19;
              goto LAB_14f3856f5;
            }
            if ((longlong)puVar10 - (longlong)puVar23 < (longlong)uVar19) goto LAB_14f384b08;
            puVar26 = puVar23 + -uVar9;
            puVar12 = puVar23;
            for (uVar9 = uVar19; uVar9 != 0; uVar9 = uVar9 - 1) {
              uVar3 = *puVar26;
              puVar26 = puVar26 + 1;
              *puVar12 = uVar3;
              puVar12 = puVar12 + 1;
            }
          }
        }
        else {
          if (uVar19 < 0xf) {
            if ((longlong)puVar26 - (longlong)param_3 <= (longlong)uVar19) goto LAB_14f387518;
            uVar5 = *(undefined8 *)((longlong)param_1 + 9);
            *(undefined8 *)param_3 = *(undefined8 *)pbVar15;
            *(undefined8 *)(param_3 + 8) = uVar5;
            puVar23 = param_3 + uVar19;
            puVar17 = (ulonglong *)(pbVar15 + uVar19);
          }
          else {
            uVar9 = (ulonglong)*pbVar15;
            puVar16 = (ushort *)((longlong)param_1 + 2);
            if (0xbf < uVar9) {
              bVar1 = *(byte *)puVar16;
              puVar16 = (ushort *)((longlong)param_1 + 3);
              uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)bVar1;
            }
            lVar7 = uVar9 + uVar19;
            puVar17 = (ulonglong *)(lVar7 + (longlong)puVar16);
            if ((puVar25 < puVar17) || ((longlong)puVar26 - (longlong)param_3 <= lVar7))
            goto LAB_14f387518;
            puVar23 = param_3 + lVar7;
            lVar7 = (longlong)puVar16 - (longlong)param_3;
            do {
              *(undefined8 *)param_3 = *(undefined8 *)(param_3 + lVar7);
              param_3 = param_3 + 8;
            } while (param_3 < puVar23);
            if (puVar25 <= puVar17) {
              if (param_2 <= puVar17) goto LAB_14f384925;
              if ((ulonglong *)param_2 == local_58) goto LAB_14f3848ee;
              memmove(local_d8,puVar17,(longlong)param_2 - (longlong)puVar17);
              puVar25 = local_a6;
              local_f8 = local_f8 + ((longlong)local_d8 - (longlong)puVar17);
              param_2 = (uchar *)local_68;
              puVar17 = local_d8;
              puVar10 = local_f0;
              local_e8 = puVar25;
            }
          }
          uVar4 = (ushort)*puVar17;
          uVar19 = (ulonglong)(bVar2 >> 4);
          if (8 < uVar19) {
            if (uVar19 < 0xf) {
              puVar12 = puVar23 + -(ulonglong)uVar4;
              param_1 = (uchar *)((longlong)puVar17 + 2);
              uVar19 = uVar19 + 4;
              if ((longlong)puVar26 - (longlong)puVar23 <= (longlong)uVar19) {
                if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19) goto LAB_14f384a48;
                if (uVar19 < 8) {
                  memmove(puVar23,puVar12,uVar19);
                  puVar10 = local_f0;
                }
                else {
                  *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                  uVar9 = (ulonglong)((uint)uVar19 & 7);
                  puVar26 = puVar23 + uVar9;
                  puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                  lVar7 = uVar9 - (longlong)puVar26;
                  do {
                    *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                    puVar26 = puVar26 + 8;
                  } while (puVar26 < puVar22);
                }
                goto LAB_14f387510;
              }
LAB_14f385909:
              *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
              *(undefined8 *)(puVar23 + 8) = *(undefined8 *)(puVar12 + 8);
              *(undefined2 *)(puVar23 + 0x10) = *(undefined2 *)(puVar12 + 0x10);
              param_3 = puVar23 + uVar19;
            }
            else {
              param_1 = (uchar *)((longlong)puVar17 + 1);
              uVar8 = uVar4 & 0x7f;
              if ((char)uVar4 < '\0') {
                uVar19 = (ulonglong)(uVar8 >> 3) + 4;
                if ((ulonglong)(uVar8 >> 3) == 0xf) {
                  uVar19 = (ulonglong)*param_1;
                  param_1 = (uchar *)((longlong)puVar17 + 2);
                  if (0xbf < uVar19) {
                    bVar2 = *param_1;
                    param_1 = (uchar *)((longlong)puVar17 + 3);
                    uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)bVar2;
                  }
                  uVar19 = uVar19 + 0x13;
                }
                uVar9 = (ulonglong)(uVar4 & 7);
                if ((longlong)puVar26 - (longlong)puVar23 <= (longlong)uVar19) {
                  if ((longlong)uVar19 <= (longlong)puVar10 - (longlong)puVar23) {
                    puVar26 = puVar23 + -uVar9;
                    puVar12 = puVar23;
                    for (uVar9 = uVar19; uVar9 != 0; uVar9 = uVar9 - 1) {
                      uVar3 = *puVar26;
                      puVar26 = puVar26 + 1;
                      *puVar12 = uVar3;
                      puVar12 = puVar12 + 1;
                    }
                    goto LAB_14f387510;
                  }
                  goto LAB_14f384b08;
                }
                puVar12 = puVar23 + -uVar9;
                *puVar23 = *puVar12;
                puVar23[1] = puVar12[1];
                puVar23[2] = puVar12[2];
                puVar23[3] = puVar12[3];
                iVar21 = c_overlap_offset_step1add[uVar9];
                *(undefined4 *)(puVar23 + 4) = *(undefined4 *)(puVar12 + iVar21);
                if ((longlong)uVar19 < 9) goto LAB_14f385a90;
                puVar22 = puVar23 + 8;
                puVar12 = puVar12 + iVar21 + -(longlong)c_overlap_offset_step2sub[uVar9];
                do {
                  puVar12 = puVar12 + 8;
                  *(undefined8 *)puVar22 = *(undefined8 *)puVar12;
                  puVar22 = puVar22 + 8;
                } while (puVar22 < puVar23 + uVar19);
                param_3 = puVar23 + uVar19;
              }
              else {
                uVar19 = uVar19 + 4 + (ulonglong)uVar8;
                puVar12 = puVar23 + -(ulonglong)*(ushort *)param_1;
                param_1 = (uchar *)((longlong)puVar17 + 3);
                if ((ulonglong)uVar8 == 0x7f) {
                  uVar9 = (ulonglong)*param_1;
                  param_1 = (uchar *)((longlong)puVar17 + 4);
                  if (0xbf < uVar9) {
                    bVar2 = *param_1;
                    param_1 = (uchar *)((longlong)puVar17 + 5);
                    uVar9 = (uVar9 - 0xc0) * 0x100 + (ulonglong)bVar2;
                  }
                  uVar19 = uVar19 + uVar9;
                }
                if ((longlong)puVar26 - (longlong)puVar23 <= (longlong)uVar19) {
                  if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19) goto LAB_14f384bb5;
                  if ((longlong)uVar19 < 8) {
                    memmove(puVar23,puVar12,uVar19);
                    puVar10 = local_f0;
                  }
                  else {
                    *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
                    uVar9 = (ulonglong)((uint)uVar19 & 7);
                    puVar26 = puVar23 + uVar9;
                    puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
                    lVar7 = uVar9 - (longlong)puVar26;
                    do {
                      *(undefined8 *)puVar26 =
                           *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
                      puVar26 = puVar26 + 8;
                    } while (puVar26 < puVar22);
                  }
                  goto LAB_14f387510;
                }
                puVar22 = puVar23;
                do {
                  *(undefined8 *)puVar22 =
                       *(undefined8 *)(puVar22 + ((longlong)puVar12 - (longlong)puVar23));
                  puVar22 = puVar22 + 8;
                } while (puVar22 < puVar23 + uVar19);
LAB_14f385a90:
                param_3 = puVar23 + uVar19;
              }
            }
            goto LAB_14f3856f5;
          }
          puVar12 = puVar23 + -(ulonglong)uVar4;
          param_1 = (uchar *)((longlong)puVar17 + 2);
          uVar19 = uVar19 + 4;
          if ((longlong)uVar19 < (longlong)puVar26 - (longlong)puVar23) {
            *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
            *(undefined4 *)(puVar23 + 8) = *(undefined4 *)(puVar12 + 8);
            param_3 = puVar23 + uVar19;
            goto LAB_14f3856f5;
          }
          if ((longlong)puVar10 - (longlong)puVar23 <= (longlong)uVar19) goto LAB_14f384975;
          if (uVar19 < 8) {
LAB_14f386cac:
            memmove(puVar23,puVar12,uVar19);
            puVar10 = local_f0;
          }
          else {
            *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
            uVar9 = (ulonglong)((uint)uVar19 & 7);
            puVar26 = puVar23 + uVar9;
            puVar22 = puVar26 + (uVar19 & 0xfffffffffffffff8);
            lVar7 = uVar9 - (longlong)puVar26;
            do {
              *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)(puVar12 + lVar7));
              puVar26 = puVar26 + 8;
            } while (puVar26 < puVar22);
          }
        }
      }
LAB_14f387510:
      param_3 = puVar23 + uVar19;
    }
LAB_14f387518:
    bVar27 = param_3 == puVar10;
    puVar17 = (ulonglong *)param_1;
    puVar26 = local_f8;
    puVar25 = local_e8;
    if (param_3 < puVar10) {
LAB_14f387530:
      while( true ) {
        if (puVar25 <= param_1) {
          if (param_2 <= param_1) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f387c0d;
            pcVar24 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
            iVar21 = 0x666;
            goto LAB_14f387c02;
          }
          if ((ulonglong *)param_2 == local_58) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f387c0d;
            pcVar24 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
            iVar21 = 0x666;
            goto LAB_14f387c02;
          }
          memmove(local_d8,param_1,(longlong)param_2 - (longlong)param_1);
          param_2 = (uchar *)local_68;
          local_f8 = puVar26 + ((longlong)local_d8 - (longlong)param_1);
          puVar25 = local_a6;
          param_1 = (uchar *)local_d8;
          puVar10 = local_f0;
        }
        bVar2 = (byte)*(ulonglong *)param_1;
        pbVar15 = (byte *)((longlong)param_1 + 1);
        sVar20 = (size_t)(bVar2 & 0xf);
        if (sVar20 < 9) break;
        if (sVar20 < 0xf) {
          if ((longlong)puVar10 - (longlong)param_3 < (longlong)sVar20) {
            sVar20 = (size_t)((int)puVar10 - (int)param_3);
          }
          if ((longlong)param_2 - (longlong)pbVar15 < (longlong)sVar20) goto LAB_14f385685;
          memmove(param_3,pbVar15,sVar20);
          puVar23 = param_3 + sVar20;
          puVar17 = (ulonglong *)(pbVar15 + sVar20);
          if (puVar23 == local_f0) goto LAB_14f387c1b;
        }
        else {
          uVar19 = (ulonglong)*pbVar15;
          puVar16 = (ushort *)((longlong)param_1 + 2);
          if (0xbf < uVar19) {
            bVar1 = *(byte *)puVar16;
            puVar16 = (ushort *)((longlong)param_1 + 3);
            uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)bVar1;
          }
          sVar20 = sVar20 + uVar19;
          if (((longlong)param_2 - (longlong)puVar16 < (longlong)sVar20) ||
             ((longlong)puVar10 - (longlong)param_3 < (longlong)sVar20)) goto LAB_14f385593;
          memmove(param_3,puVar16,sVar20);
          puVar23 = param_3 + sVar20;
          puVar17 = (ulonglong *)((longlong)puVar16 + sVar20);
          if (puVar23 == local_f0) goto LAB_14f387c1b;
          if (puVar25 <= puVar17) {
            if (param_2 <= puVar17) goto LAB_14f385565;
            if ((ulonglong *)param_2 == local_58) goto LAB_14f38552e;
            memmove(local_d8,puVar17,(longlong)param_2 - (longlong)puVar17);
            param_2 = (uchar *)local_68;
            puVar25 = local_a6;
            local_f8 = local_f8 + ((longlong)local_d8 - (longlong)puVar17);
            puVar17 = local_d8;
          }
        }
        puVar26 = local_f8;
        uVar4 = (ushort)*puVar17;
        uVar19 = (ulonglong)(bVar2 >> 4);
        puVar10 = local_f0;
        if (uVar19 < 9) {
          puVar12 = puVar23 + -(ulonglong)uVar4;
          param_1 = (uchar *)((longlong)puVar17 + 2);
          uVar9 = uVar19 + 4;
          if ((longlong)local_f0 - (longlong)puVar23 <= (longlong)uVar9) goto LAB_14f3855c5;
          if (uVar9 < 8) {
LAB_14f38775a:
            param_1 = (uchar *)((longlong)puVar17 + 2);
            memmove(puVar23,puVar12,uVar19 + 4);
            param_3 = puVar23 + uVar19 + 4;
            puVar10 = local_f0;
          }
          else {
            *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
            uVar19 = (ulonglong)((uint)uVar9 & 7);
            puVar22 = puVar23 + uVar19;
            puVar14 = puVar22 + (uVar9 & 0xfffffffffffffff8);
            lVar7 = uVar19 - (longlong)puVar22;
            do {
              *(undefined8 *)puVar22 = *(undefined8 *)(puVar22 + (longlong)(puVar12 + lVar7));
              puVar22 = puVar22 + 8;
            } while (puVar22 < puVar14);
            param_3 = puVar23 + uVar9;
          }
        }
        else if (uVar19 < 0xf) {
          puVar12 = puVar23 + -(ulonglong)uVar4;
          param_1 = (uchar *)((longlong)puVar17 + 2);
          uVar9 = uVar19 + 4;
          if ((longlong)local_f0 - (longlong)puVar23 <= (longlong)uVar9) goto LAB_14f3855f3;
          if (uVar9 < 8) goto LAB_14f38775a;
          *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
          uVar19 = (ulonglong)((uint)uVar9 & 7);
          puVar22 = puVar23 + uVar19;
          puVar14 = puVar22 + (uVar9 & 0xfffffffffffffff8);
          lVar7 = uVar19 - (longlong)puVar22;
          do {
            *(undefined8 *)puVar22 = *(undefined8 *)(puVar22 + (longlong)(puVar12 + lVar7));
            puVar22 = puVar22 + 8;
          } while (puVar22 < puVar14);
          param_3 = puVar23 + uVar9;
        }
        else {
          param_1 = (uchar *)((longlong)puVar17 + 1);
          uVar8 = uVar4 & 0x7f;
          if ((char)uVar4 < '\0') {
            lVar7 = (ulonglong)(uVar8 >> 3) + 4;
            if ((ulonglong)(uVar8 >> 3) == 0xf) {
              uVar19 = (ulonglong)*param_1;
              param_1 = (uchar *)((longlong)puVar17 + 2);
              if (0xbf < uVar19) {
                bVar2 = *param_1;
                param_1 = (uchar *)((longlong)puVar17 + 3);
                uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)bVar2;
              }
              lVar7 = uVar19 + 0x13;
            }
            if ((longlong)local_f0 - (longlong)puVar23 <= lVar7) goto LAB_14f385625;
            puVar12 = puVar23 + -(ulonglong)(uVar4 & 7);
            puVar22 = puVar23;
            for (lVar13 = lVar7; lVar13 != 0; lVar13 = lVar13 + -1) {
              uVar3 = *puVar12;
              puVar12 = puVar12 + 1;
              *puVar22 = uVar3;
              puVar22 = puVar22 + 1;
            }
            param_3 = puVar23 + lVar7;
          }
          else {
            sVar20 = uVar19 + 4 + (ulonglong)uVar8;
            puVar12 = puVar23 + -(ulonglong)*(ushort *)param_1;
            param_1 = (uchar *)((longlong)puVar17 + 3);
            if ((ulonglong)uVar8 == 0x7f) {
              uVar19 = (ulonglong)*param_1;
              param_1 = (uchar *)((longlong)puVar17 + 4);
              if (0xbf < uVar19) {
                bVar2 = *param_1;
                param_1 = (uchar *)((longlong)puVar17 + 5);
                uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)bVar2;
              }
              sVar20 = sVar20 + uVar19;
            }
            if ((longlong)local_f0 - (longlong)puVar23 <= (longlong)sVar20) goto LAB_14f385653;
            if ((longlong)sVar20 < 8) goto LAB_14f3878a6;
            *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
            uVar19 = (ulonglong)((uint)sVar20 & 7);
            puVar22 = puVar23 + uVar19;
            puVar14 = puVar22 + (sVar20 & 0xfffffffffffffff8);
            lVar7 = uVar19 - (longlong)puVar22;
            do {
              *(undefined8 *)puVar22 = *(undefined8 *)(puVar22 + (longlong)(puVar12 + lVar7));
              puVar22 = puVar22 + 8;
            } while (puVar22 < puVar14);
            param_3 = puVar23 + sVar20;
          }
        }
      }
      if (((longlong)puVar10 - (longlong)param_3 < (longlong)sVar20) ||
         ((longlong)param_2 - (longlong)pbVar15 < (longlong)sVar20)) goto LAB_14f3856b3;
      memmove(param_3,pbVar15,sVar20);
      puVar23 = param_3 + sVar20;
      puVar17 = (ulonglong *)(pbVar15 + sVar20);
      if (puVar23 == local_f0) goto LAB_14f387c1b;
      uVar4 = (ushort)*puVar17;
      uVar19 = (ulonglong)(bVar2 >> 4);
      puVar26 = local_f8;
      puVar10 = local_f0;
      if (uVar19 < 9) {
        puVar12 = puVar23 + -(ulonglong)uVar4;
        param_1 = (uchar *)((longlong)puVar17 + 2);
        uVar9 = uVar19 + 4;
        if ((longlong)local_f0 - (longlong)puVar23 <= (longlong)uVar9) goto LAB_14f3855c5;
        if (7 < uVar9) {
          *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
          uVar19 = (ulonglong)((uint)uVar9 & 7);
          puVar22 = puVar23 + uVar19;
          puVar14 = puVar22 + (uVar9 & 0xfffffffffffffff8);
          lVar7 = uVar19 - (longlong)puVar22;
          do {
            *(undefined8 *)puVar22 = *(undefined8 *)(puVar22 + (longlong)(puVar12 + lVar7));
            puVar22 = puVar22 + 8;
          } while (puVar22 < puVar14);
          param_3 = puVar23 + uVar9;
          goto LAB_14f387530;
        }
      }
      else {
        if (0xe < uVar19) {
          param_1 = (uchar *)((longlong)puVar17 + 1);
          uVar8 = uVar4 & 0x7f;
          if ((char)uVar4 < '\0') {
            lVar7 = (ulonglong)(uVar8 >> 3) + 4;
            if ((ulonglong)(uVar8 >> 3) == 0xf) {
              uVar19 = (ulonglong)*param_1;
              param_1 = (uchar *)((longlong)puVar17 + 2);
              if (0xbf < uVar19) {
                bVar2 = *param_1;
                param_1 = (uchar *)((longlong)puVar17 + 3);
                uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)bVar2;
              }
              lVar7 = uVar19 + 0x13;
            }
            if ((longlong)local_f0 - (longlong)puVar23 <= lVar7) goto LAB_14f385625;
            puVar12 = puVar23 + -(ulonglong)(uVar4 & 7);
            puVar22 = puVar23;
            for (lVar13 = lVar7; lVar13 != 0; lVar13 = lVar13 + -1) {
              uVar3 = *puVar12;
              puVar12 = puVar12 + 1;
              *puVar22 = uVar3;
              puVar22 = puVar22 + 1;
            }
            param_3 = puVar23 + lVar7;
          }
          else {
            sVar20 = uVar19 + 4 + (ulonglong)uVar8;
            puVar12 = puVar23 + -(ulonglong)*(ushort *)param_1;
            param_1 = (uchar *)((longlong)puVar17 + 3);
            if ((ulonglong)uVar8 == 0x7f) {
              uVar19 = (ulonglong)*param_1;
              param_1 = (uchar *)((longlong)puVar17 + 4);
              if (0xbf < uVar19) {
                bVar2 = *param_1;
                param_1 = (uchar *)((longlong)puVar17 + 5);
                uVar19 = (uVar19 - 0xc0) * 0x100 + (ulonglong)bVar2;
              }
              sVar20 = sVar20 + uVar19;
            }
            if ((longlong)local_f0 - (longlong)puVar23 <= (longlong)sVar20) goto LAB_14f385653;
            if ((longlong)sVar20 < 8) {
LAB_14f3878a6:
              memmove(puVar23,puVar12,sVar20);
              param_3 = puVar23 + sVar20;
              puVar26 = local_f8;
              puVar10 = local_f0;
            }
            else {
              *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
              uVar19 = (ulonglong)((uint)sVar20 & 7);
              puVar22 = puVar23 + uVar19;
              puVar14 = puVar22 + (sVar20 & 0xfffffffffffffff8);
              lVar7 = uVar19 - (longlong)puVar22;
              do {
                *(undefined8 *)puVar22 = *(undefined8 *)(puVar22 + (longlong)(puVar12 + lVar7));
                puVar22 = puVar22 + 8;
              } while (puVar22 < puVar14);
              param_3 = puVar23 + sVar20;
            }
          }
          goto LAB_14f387530;
        }
        puVar12 = puVar23 + -(ulonglong)uVar4;
        param_1 = (uchar *)((longlong)puVar17 + 2);
        uVar9 = uVar19 + 4;
        if ((longlong)local_f0 - (longlong)puVar23 <= (longlong)uVar9) goto LAB_14f3855f3;
        if (7 < uVar9) {
          *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
          uVar19 = (ulonglong)((uint)uVar9 & 7);
          puVar22 = puVar23 + uVar19;
          puVar14 = puVar22 + (uVar9 & 0xfffffffffffffff8);
          lVar7 = uVar19 - (longlong)puVar22;
          do {
            *(undefined8 *)puVar22 = *(undefined8 *)(puVar22 + (longlong)(puVar12 + lVar7));
            puVar22 = puVar22 + 8;
          } while (puVar22 < puVar14);
          param_3 = puVar23 + uVar9;
          goto LAB_14f387530;
        }
      }
      param_1 = (uchar *)((longlong)puVar17 + 2);
      memmove(puVar23,puVar12,uVar19 + 4);
      param_3 = puVar23 + uVar19 + 4;
      puVar26 = local_f8;
      puVar10 = local_f0;
      goto LAB_14f387530;
    }
  }
  if (bVar27) {
LAB_14f387c1b:
    return (longlong)puVar17 - (longlong)local_f8;
  }
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB didn\'t stop at end\n";
  iVar21 = 0x676;
LAB_14f387c02:
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb.cpp";
LAB_14f387c09:
  (*g_fp_OodleCore_Plugin_Printf)(0,pcVar11,iVar21,pcVar24);
LAB_14f387c0d:
  ooLogErrorPost();
  return -1;
code_r0x00014f3846aa:
  *(undefined8 *)puVar10 = *(undefined8 *)puVar23;
  *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(puVar23 + 8);
  param_3 = puVar10 + uVar19;
  goto LAB_14f3842c2;
LAB_14f384925:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
  iVar21 = 0x3d;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner.inl";
  goto LAB_14f387c09;
LAB_14f3848ee:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
  iVar21 = 0x3d;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner.inl";
  goto LAB_14f387c09;
LAB_14f384a48:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB match past end\n";
  iVar21 = 0x62;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner2.inl";
  goto LAB_14f387c09;
LAB_14f384bb5:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB match past end\n";
  iVar21 = 0xf1;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner2.inl";
  goto LAB_14f387c09;
LAB_14f384b08:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB match past end\n";
  iVar21 = 0xa7;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner2.inl";
  goto LAB_14f387c09;
LAB_14f3856b3:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB decomp past end\n";
  iVar21 = 0x9b;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner.inl";
  goto LAB_14f387c09;
LAB_14f385685:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB decomp past end\n";
  iVar21 = 0x6f;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner.inl";
  goto LAB_14f387c09;
LAB_14f385593:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB decomp past end\n";
  iVar21 = 0x42;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner.inl";
  goto LAB_14f387c09;
LAB_14f385565:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB comp over-read\n";
  iVar21 = 0x4f;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner.inl";
  goto LAB_14f387c09;
LAB_14f38552e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB comp safe twice\n";
  iVar21 = 0x4f;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner.inl";
  goto LAB_14f387c09;
LAB_14f384c2a:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB offset out of bounds\n";
  iVar21 = 0xd9;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner2.inl";
  goto LAB_14f387c09;
LAB_14f385653:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB match past end\n";
  iVar21 = 0x101;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner2.inl";
  goto LAB_14f387c09;
LAB_14f384b6b:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB offset out of bounds\n";
  iVar21 = 0x9e;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner2.inl";
  goto LAB_14f387c09;
LAB_14f385625:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB match past end\n";
  iVar21 = 200;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner2.inl";
  goto LAB_14f387c09;
LAB_14f384aca:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB offset out of bounds\n";
  iVar21 = 0x4e;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner2.inl";
  goto LAB_14f387c09;
LAB_14f3855f3:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB match past end\n";
  iVar21 = 0x74;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner2.inl";
  goto LAB_14f387c09;
LAB_14f384a0a:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB offset out of bounds\n";
  iVar21 = 0x1a;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner2.inl";
  goto LAB_14f387c09;
LAB_14f3855c5:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f387c0d;
  pcVar24 = "OODLE ERROR : LZ corruption : LZB match past end\n";
  iVar21 = 0x3f;
  pcVar11 = "v:\\devel\\projects\\oodle2\\core\\lzb_decode_inner2.inl";
  goto LAB_14f387c09;
}

// Decode_LZB_OneChunk_SW @ 14f387c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::Decode_LZB_OneChunk_SW
          (uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,uchar *param_5,long64 param_6
          )

{
  uchar *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uchar uVar5;
  ulonglong uVar6;
  uint uVar7;
  uchar *puVar8;
  uchar *puVar9;
  undefined4 uVar10;
  longlong lVar11;
  ushort *puVar12;
  byte *pbVar13;
  uchar *puVar14;
  int iVar15;
  ulonglong uVar16;
  char *pcVar17;
  ulonglong uVar18;
  uchar *puVar19;
  size_t _Size;
  undefined1 auStack_98 [32];
  ushort local_78 [16];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_98;
  puVar1 = param_3 + param_4;
  puVar19 = param_1;
  do {
    while( true ) {
      if (param_2 + -0x10 <= param_1) {
        memcpy(local_78,param_1,(longlong)param_2 - (longlong)param_1);
        param_2 = &stack0x00000388;
        puVar19 = puVar19 + ((longlong)local_78 - (longlong)param_1);
        param_1 = (uchar *)local_78;
      }
      bVar2 = (byte)*(ushort *)param_1;
      puVar12 = (ushort *)((longlong)param_1 + 1);
      uVar18 = (ulonglong)(bVar2 >> 4);
      _Size = (size_t)(bVar2 & 0xf);
      *(undefined8 *)param_3 = *(undefined8 *)puVar12;
      uVar16 = uVar18 + 4;
      if ((bVar2 & 0x88) != 0) break;
      puVar14 = param_3 + _Size;
      param_3 = puVar14 + uVar16;
      if (puVar1 < param_3) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3881c9;
        pcVar17 = "OODLE ERROR : LZ corruption : LZB decomp past end\n";
        iVar15 = 0x6c4;
        goto LAB_14f3881be;
      }
      puVar8 = puVar14 + -(ulonglong)*(ushort *)((longlong)puVar12 + _Size);
      param_1 = (uchar *)((ushort *)((longlong)puVar12 + _Size) + 1);
      if (puVar8 < param_5) {
        puVar8 = puVar8 + param_6;
        for (; uVar16 != 0; uVar16 = uVar16 - 1) {
          puVar9 = puVar8 + 1;
          *puVar14 = *puVar8;
          puVar14 = puVar14 + 1;
          puVar8 = puVar9;
          if (puVar9 == param_5 + param_6) {
            puVar8 = param_5;
          }
        }
      }
      else {
LAB_14f387d51:
        *(undefined8 *)puVar14 = *(undefined8 *)puVar8;
        *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(puVar8 + 8);
      }
    }
    if (8 < _Size) {
      if (_Size < 0xf) {
        if (puVar1 <= param_3 + _Size) {
          _Size = (size_t)((int)puVar1 - (int)param_3);
          memmove(param_3,puVar12,_Size);
          pbVar13 = (byte *)((longlong)puVar12 + _Size);
          goto LAB_14f388119;
        }
        *(undefined8 *)(param_3 + 8) = *(undefined8 *)((longlong)param_1 + 9);
      }
      else {
        uVar6 = (ulonglong)*(byte *)puVar12;
        puVar12 = (ushort *)((longlong)param_1 + 2);
        if (uVar6 < 0xc0) {
          _Size = _Size + uVar6;
        }
        else {
          uVar3 = *puVar12;
          puVar12 = (ushort *)((longlong)param_1 + 3);
          _Size = (_Size - 0xc000) + uVar6 * 0x100 + (ulonglong)(byte)uVar3;
        }
        puVar14 = param_3 + _Size;
        if (puVar1 <= puVar14) {
          if (puVar1 < puVar14) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3881c9;
            pcVar17 = "OODLE ERROR : LZ corruption : LZB decomp past end\n";
            iVar15 = 0x6ee;
            goto LAB_14f3881be;
          }
          memmove(param_3,puVar12,_Size);
          pbVar13 = (byte *)((longlong)puVar12 + _Size);
LAB_14f388119:
          if (param_3 + _Size == puVar1) {
            return (longlong)pbVar13 - (longlong)puVar19;
          }
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3881c9;
          pcVar17 = "OODLE ERROR : LZ corruption : LZB didn\'t stop at end\n";
          iVar15 = 0x7b5;
          goto LAB_14f3881be;
        }
        puVar8 = param_3;
        do {
          *(undefined8 *)puVar8 = *(undefined8 *)(puVar8 + ((longlong)puVar12 - (longlong)param_3));
          puVar8 = puVar8 + 8;
        } while (puVar8 < puVar14);
      }
    }
    puVar12 = (ushort *)((longlong)puVar12 + _Size);
    puVar14 = param_3 + _Size;
    uVar3 = *puVar12;
    if (uVar18 < 9) {
      param_1 = (uchar *)(puVar12 + 1);
      puVar8 = puVar14 + -(ulonglong)uVar3;
      param_3 = puVar14 + uVar16;
      if (puVar1 < param_3) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3881c9;
        iVar15 = 0x726;
        goto LAB_14f3881b7;
      }
      if (param_5 <= puVar8) goto LAB_14f387d51;
      puVar8 = puVar8 + param_6;
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        puVar9 = puVar8 + 1;
        *puVar14 = *puVar8;
        puVar14 = puVar14 + 1;
        puVar8 = puVar9;
        if (puVar9 == param_5 + param_6) {
          puVar8 = param_5;
        }
      }
    }
    else if (uVar18 < 0xf) {
      param_3 = puVar14 + uVar16;
      puVar8 = puVar14 + -(ulonglong)uVar3;
      param_1 = (uchar *)(puVar12 + 1);
      if (puVar1 < param_3) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          iVar15 = 0x743;
LAB_14f3881b7:
          pcVar17 = "OODLE ERROR : LZ corruption : LZB match past end\n";
LAB_14f3881be:
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\lzb.cpp",iVar15,pcVar17);
        }
LAB_14f3881c9:
        ooLogErrorPost();
        return -1;
      }
      if (puVar8 < param_5) {
        puVar8 = puVar8 + param_6;
        for (; uVar16 != 0; uVar16 = uVar16 - 1) {
          puVar9 = puVar8 + 1;
          *puVar14 = *puVar8;
          puVar14 = puVar14 + 1;
          puVar8 = puVar9;
          if (puVar9 == param_5 + param_6) {
            puVar8 = param_5;
          }
        }
      }
      else {
        *(undefined8 *)puVar14 = *(undefined8 *)puVar8;
        *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(puVar8 + 8);
        if (0x10 < uVar16) {
          *(undefined2 *)(puVar14 + 0x10) = *(undefined2 *)(puVar8 + 0x10);
        }
      }
    }
    else {
      param_1 = (uchar *)((longlong)puVar12 + 1);
      uVar7 = uVar3 & 0x7f;
      if ((char)uVar3 < '\0') {
        lVar11 = (ulonglong)(uVar7 >> 3) + 4;
        if ((ulonglong)(uVar7 >> 3) == 0xf) {
          uVar16 = (ulonglong)*param_1;
          param_1 = (uchar *)(puVar12 + 1);
          if (0xbf < uVar16) {
            uVar4 = *(ushort *)param_1;
            param_1 = (uchar *)((longlong)puVar12 + 3);
            uVar16 = uVar16 * 0x100 + -0xc000 + (ulonglong)(byte)uVar4;
          }
          lVar11 = uVar16 + 0x13;
        }
        param_3 = puVar14 + lVar11;
        if (puVar1 < param_3) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3881c9;
          iVar15 = 0x76a;
          goto LAB_14f3881b7;
        }
        if ((ulonglong)(uVar3 & 7) == 1) {
          if (puVar14 == param_5) {
            uVar5 = param_5[param_6 + -1];
          }
          else {
            uVar5 = puVar14[-1];
          }
          uVar10 = CONCAT31(CONCAT21(CONCAT11(uVar5,uVar5),uVar5),uVar5);
          *(undefined4 *)puVar14 = uVar10;
          puVar14 = puVar14 + 4;
          uVar16 = (ulonglong)(param_3 + (3 - (longlong)puVar14)) >> 2;
          if (param_3 < puVar14) {
            uVar16 = 0;
          }
          if (uVar16 != 0) {
            for (; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)puVar14 = uVar10;
              puVar14 = puVar14 + 4;
            }
          }
        }
        else {
          puVar9 = puVar14 + -(ulonglong)(uVar3 & 7);
          puVar8 = puVar9 + param_6;
          if (param_5 <= puVar9) {
            puVar8 = puVar9;
          }
          if (0 < lVar11) {
            do {
              puVar9 = puVar8 + 1;
              *puVar14 = *puVar8;
              puVar14 = puVar14 + 1;
              puVar8 = puVar9;
              if (puVar9 == param_5 + param_6) {
                puVar8 = param_5;
              }
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
        }
      }
      else {
        uVar3 = *(ushort *)param_1;
        lVar11 = uVar7 + uVar16;
        param_1 = (uchar *)((longlong)puVar12 + 3);
        puVar8 = puVar14 + -(ulonglong)uVar3;
        if ((ulonglong)uVar7 == 0x7f) {
          uVar16 = (ulonglong)*param_1;
          param_1 = (uchar *)(puVar12 + 2);
          if (uVar16 < 0xc0) {
            lVar11 = lVar11 + uVar16;
          }
          else {
            uVar3 = *(ushort *)param_1;
            param_1 = (uchar *)((longlong)puVar12 + 5);
            lVar11 = lVar11 + -0xc000 + uVar16 * 0x100 + (ulonglong)(byte)uVar3;
          }
        }
        param_3 = puVar14 + lVar11;
        if (puVar1 < param_3) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3881c9;
          iVar15 = 0x78f;
          goto LAB_14f3881b7;
        }
        if ((puVar8 < param_5) && (puVar8 = puVar8 + param_6, param_5 < puVar8 + lVar11 + 8)) {
          if (0 < lVar11) {
            do {
              puVar9 = puVar8 + 1;
              *puVar14 = *puVar8;
              puVar14 = puVar14 + 1;
              puVar8 = puVar9;
              if (puVar9 == param_5 + param_6) {
                puVar8 = param_5;
              }
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
        }
        else {
          lVar11 = (longlong)puVar8 - (longlong)puVar14;
          do {
            *(undefined8 *)puVar14 = *(undefined8 *)(puVar14 + lVar11);
            puVar14 = puVar14 + 8;
          } while (puVar14 < param_3);
        }
      }
    }
  } while( true );
}

// Encode_LZB_Chunker @ 14f388200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::Encode_LZB_Chunker
          (_func___cdecl_long64_uchar_ptr_long64_uchar_ptr_void_ptr_uchar_ptr_uchar_ptr_uchar_ptr_LZQuantumHeader_ptr
           *param_1,uchar *param_2,long64 param_3,uchar *param_4,void *param_5,uchar *param_6,
          OodleLZ_CompressionLevel param_7,OodleLZ_CompressOptions *param_8)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uchar *puVar9;
  size_t sVar10;
  uchar *puVar11;
  size_t _Size;
  size_t _Size_00;
  uchar *_Dst;
  byte *_Src;
  undefined1 auStackY_168 [32];
  ulong64 local_f8;
  LZQuantumHeader local_a8;
  LZBlockHeader local_88;
  LZBlockHeader local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pbVar3 = param_2;
  uVar4 = param_3;
  puVar11 = param_4;
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    local_f8 = 0xffffffffffffffff;
  }
  else {
    local_f8 = (*fp_ThreadProfiler_Push)("oo2::Encode_LZB_Chunker",0);
  }
  for (; 0 < (longlong)uVar4; uVar4 = uVar4 - _Size) {
    _Size = 0x40000;
    if (uVar4 < 0x40000) {
      _Size = uVar4;
    }
    iVar2 = param_8->sendQuantumCRCs;
    if (((pbVar3 == param_2) && (param_8->seekChunkReset != 0)) || (pbVar3 == param_6)) {
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
    }
    local_88.offsetShift = 0;
    local_88.chunkIsMemcpy = 0;
    local_88.version = 4;
    local_88.decodeType = 2;
    local_88.chunkIsReset = iVar5;
    local_88.chunkHasQuantumCRCs = iVar2;
    puVar9 = LZBlockHeader_Put(&local_88,puVar11);
    pbVar1 = pbVar3 + _Size;
    for (_Src = pbVar3; _Src < pbVar1; _Src = _Src + _Size_00) {
      _Size_00 = 0x4000;
      if ((longlong)pbVar1 - (longlong)_Src < 0x4000) {
        _Size_00 = (longlong)pbVar1 - (longlong)_Src;
      }
      local_a8.wholeMatchFlag = 0;
      local_a8._12_4_ = 0;
      local_a8.wholeMatchOffset = 0;
      local_a8.huffFlag = 0;
      local_a8.extraFlag = 0;
      iVar7 = (int)_Size_00;
      local_a8.crc = 0;
      local_a8.compLen = iVar7 - 1;
      iVar6 = MemsetQuantum_Test(_Src,iVar7);
      if (iVar6 == 0) {
        iVar6 = LZQuantumHeader_Put(puVar9,&local_a8,iVar2,iVar7);
        _Dst = puVar9 + iVar6;
        if (_Src + 4 < pbVar1 + -8) {
          sVar10 = (*param_1)(_Src,_Size_00,_Dst,param_5,param_6,pbVar1 + -8,param_2 + param_3,
                              &local_a8);
        }
        else {
          sVar10 = _Size_00 + 1;
        }
        if ((longlong)_Size_00 <= (longlong)sVar10) {
          memcpy(_Dst,_Src,_Size_00);
          local_a8._24_8_ = local_a8._24_8_ & 0xffffffff00000000;
          sVar10 = _Size_00;
        }
        local_a8.compLen = (int)sVar10;
        if (iVar2 != 0) {
          uVar8 = LZQuantumHeader_ComputeCRC(_Dst,sVar10);
          local_a8.crc = uVar8;
        }
        LZQuantumHeader_Put(puVar9,&local_a8,iVar2,iVar7);
        puVar9 = _Dst + sVar10;
      }
      else {
        local_a8._0_8_ = (ulonglong)*_Src << 0x20;
        iVar7 = LZQuantumHeader_Put(puVar9,&local_a8,iVar2,iVar7);
        puVar9 = puVar9 + iVar7;
      }
    }
    if ((longlong)_Size <= (longlong)puVar9 - (longlong)puVar11) {
      local_70.chunkHasQuantumCRCs = 0;
      local_70._0_8_ = ___xmm_00000001000000000000000200000004;
      local_70._8_8_ = _UNK_1531dc868;
      local_70.chunkIsReset = iVar5;
      puVar11 = LZBlockHeader_Put(&local_70,puVar11);
      puVar9 = puVar11 + _Size;
      memcpy(puVar11,pbVar3,_Size);
    }
    pbVar3 = pbVar1;
    puVar11 = puVar9;
  }
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(local_f8);
  }
  return (longlong)puVar11 - (longlong)param_4;
}

// Encode_LZB_Fast @ 14f388520

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::Encode_LZB_Fast
          (uchar *param_1,long64 param_2,uchar *param_3,void *param_4,uchar *param_5,
          OodleLZ_CompressionLevel param_6,OodleLZ_CompressOptions *param_7)

{
  long64 lVar1;
  
  lVar1 = Encode_LZB_Chunker(Encode_LZB_OneChunk_Fast_NoSlide,param_1,param_2,param_3,param_4,
                             param_5,param_6,param_7);
  return lVar1;
}

// Encode_LZB_Fast_Alloc @ 14f388580

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

OodleLZB_CompressFast_Context * __cdecl
oo2::Encode_LZB_Fast_Alloc
          (OodleLZ_CompressionLevel param_1,uchar *param_2,long64 param_3,long64 param_4,int param_5
          )

{
  code *pcVar1;
  int iVar2;
  OodleLZB_CompressFast_Context *pOVar3;
  long64 *plVar4;
  byte bVar5;
  char *pcVar6;
  ulong64 uVar7;
  short sVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char *pcVar12;
  int *piVar13;
  uint uVar14;
  
  uVar9 = 0x10;
  pOVar3 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x58,0x10);
  if (pOVar3 == (OodleLZB_CompressFast_Context *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0x58);
  }
  uVar7 = 0xffffffffffffffff;
  if (pOVar3 == (OodleLZB_CompressFast_Context *)0x0) {
    pOVar3 = (OodleLZB_CompressFast_Context *)0x0;
  }
  else {
    pOVar3->m_dicBase = param_2 + -param_4;
    pOVar3->m_dicSize = param_3 + param_4;
    pOVar3->m_tableSizeBits = param_5;
    iVar2 = 1 << ((byte)param_5 & 0x1f);
    pOVar3->m_tableSize = iVar2;
    uVar11 = (longlong)iVar2 * 8;
    uVar10 = 0x40;
    if (0x40 < uVar11) {
      uVar10 = uVar11;
    }
    plVar4 = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar10,0x40);
    if (plVar4 == (long64 *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(uVar10);
    }
    pOVar3->m_tablePos = plVar4;
    pOVar3->m_windowBase = param_2;
    pOVar3->m_windowAlloc = (uchar *)0x0;
    pOVar3->m_windowSize = param_3 + param_4;
    pOVar3->m_windowMask = -1;
    pOVar3->m_posThisReset = 0;
    pOVar3->m_maxOffset = 0x40000000;
    pOVar3->m_zeroPosPtr = param_2;
  }
  uVar14 = 0;
  rrMemSet64_Aligned(pOVar3->m_tablePos,-param_4,(longlong)pOVar3->m_tableSize << 3);
  pOVar3->m_posThisReset = 0;
  if (param_4 < 1) {
    return pOVar3;
  }
  if (fp_ThreadProfiler_Push != (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar7 = (*fp_ThreadProfiler_Push)("LZB Overlap Preload",0);
  }
  plVar4 = pOVar3->m_tablePos;
  piVar13 = (int *)(param_2 + -param_4);
  uVar10 = (ulonglong)param_4 >> 5;
  sVar8 = (short)param_2;
  bVar5 = (byte)pOVar3->m_tableSizeBits;
  if (2 < (int)param_1) {
    if (param_1 != OodleLZ_CompressionLevel_Fast) {
      do {
        uVar10 = uVar10 - 1;
        if ((longlong)uVar10 < 1) {
          if (param_2 <= piVar13) goto LAB_14f388898;
          uVar9 = (int)uVar9 >> 1;
          uVar10 = ((longlong)param_2 - (longlong)piVar13) / (longlong)(int)uVar9;
          if (1 < uVar9) {
            uVar10 = (longlong)uVar10 / 2;
          }
        }
        *(short *)((longlong)plVar4 +
                  (ulonglong)
                  ((((uint)(*piVar13 * -0x61c8864f) >> 0xb & 0x1ffffc ^ *piVar13 * 0x78dde6c4) &
                   (1 << (bVar5 - 2 & 0x1f)) * 4 - 4U) + uVar14) * 2) = (short)piVar13 - sVar8;
        uVar14 = uVar14 + 1 & 3;
        piVar13 = (int *)((longlong)piVar13 + (longlong)(int)uVar9);
      } while( true );
    }
    do {
      uVar10 = uVar10 - 1;
      if ((longlong)uVar10 < 1) {
        if (param_2 <= piVar13) goto code_r0x00014f388800;
        uVar9 = (int)uVar9 >> 1;
        uVar10 = ((longlong)param_2 - (longlong)piVar13) / (longlong)(int)uVar9;
        if (1 < uVar9) {
          uVar10 = (longlong)uVar10 / 2;
        }
      }
      *(short *)((longlong)plVar4 +
                (ulonglong)
                (((uint)(*piVar13 * -0x61c8864f) >> 0xd ^ *piVar13 * -0x61c8864f) &
                (1 << (bVar5 & 0x1f)) - 1U) * 2) = (short)piVar13 - sVar8;
      piVar13 = (int *)((longlong)piVar13 + (longlong)(int)uVar9);
    } while( true );
  }
  do {
    uVar10 = uVar10 - 1;
    if ((longlong)uVar10 < 1) {
      if (param_2 <= piVar13) goto LAB_14f388769;
      uVar9 = (int)uVar9 >> 1;
      uVar10 = ((longlong)param_2 - (longlong)piVar13) / (longlong)(int)uVar9;
      if (1 < uVar9) {
        uVar10 = (longlong)uVar10 / 2;
      }
    }
    *(short *)((longlong)plVar4 +
              (ulonglong)((uint)(*piVar13 * -0x61c8864f) >> (0x20 - bVar5 & 0x3f)) * 2) =
         (short)piVar13 - sVar8;
    piVar13 = (int *)((longlong)piVar13 + (longlong)(int)uVar9);
  } while( true );
LAB_14f388898:
  if (piVar13 == (int *)param_2) goto LAB_14f3888be;
  pcVar12 = "oo2::Encode_LZB_OneChunk_Normal_New_Preload";
  iVar2 = 0x6a;
  pcVar6 = "v:\\devel\\projects\\oodle2\\core\\lzb_fast_normal.inl";
  goto LAB_14f3888ad;
code_r0x00014f388800:
  if (piVar13 == (int *)param_2) goto LAB_14f3888be;
  pcVar12 = "oo2::Encode_LZB_OneChunk_Fast_NoSlide_Preload";
  iVar2 = 0x5f;
  pcVar6 = "v:\\devel\\projects\\oodle2\\core\\lzb_fast.inl";
  goto LAB_14f3888ad;
LAB_14f388769:
  if (piVar13 == (int *)param_2) goto LAB_14f3888be;
  pcVar12 = "oo2::Encode_LZB_OneChunk_VeryFast_NoSlide_Preload";
  iVar2 = 0x44;
  pcVar6 = "v:\\devel\\projects\\oodle2\\core\\lzb_vfast.inl";
LAB_14f3888ad:
  iVar2 = rrDisplayAssertion(pcVar6,iVar2,pcVar12,"ptr == rawBufStart");
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    pOVar3 = (OodleLZB_CompressFast_Context *)(*pcVar1)();
    return pOVar3;
  }
LAB_14f3888be:
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(uVar7);
  }
  return pOVar3;
}

// Encode_LZB_Normal_New @ 14f388900

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::Encode_LZB_Normal_New
          (uchar *param_1,long64 param_2,uchar *param_3,void *param_4,uchar *param_5,
          OodleLZ_CompressionLevel param_6,OodleLZ_CompressOptions *param_7)

{
  long64 lVar1;
  
  lVar1 = Encode_LZB_Chunker(Encode_LZB_OneChunk_Normal_New,param_1,param_2,param_3,param_4,param_5,
                             param_6,param_7);
  return lVar1;
}

// Encode_LZB_OneChunk_Fast_NoSlide @ 14f388950

long64 __cdecl
oo2::Encode_LZB_OneChunk_Fast_NoSlide
          (uchar *param_1,long64 param_2,uchar *param_3,void *param_4,uchar *param_5,uchar *param_6,
          uchar *param_7,LZQuantumHeader *param_8)

{
  long64 lVar1;
  
  *(longlong *)((longlong)param_4 + 0x30) =
       (longlong)param_1 - *(longlong *)((longlong)param_4 + 0x40);
  lVar1 = Encode_LZB_OneChunk_Fast_NoSlide_Sub(param_1,param_2,param_3,param_4,param_6,param_8);
  return lVar1;
}

// Encode_LZB_OneChunk_Fast_NoSlide_Preload @ 14f3889a0

void __cdecl
oo2::Encode_LZB_OneChunk_Fast_NoSlide_Preload
          (long64 *param_1,int param_2,uchar *param_3,long64 param_4)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  int *piVar5;
  uint uVar6;
  
  piVar5 = (int *)(param_3 + -param_4);
  lVar3 = (longlong)(param_4 + (ulonglong)((uint)(param_4 >> 0x3f) & 0x1f)) >> 5;
  uVar6 = 0x10;
  do {
    lVar3 = lVar3 + -1;
    if (lVar3 < 1) {
      if (param_3 <= piVar5) {
        if (piVar5 != (int *)param_3) {
          iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\lzb_fast.inl",0x5f,
                                     "oo2::Encode_LZB_OneChunk_Fast_NoSlide_Preload",
                                     "ptr == rawBufStart");
          if (iVar2 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        return;
      }
      uVar6 = (int)uVar6 >> 1;
      lVar3 = ((longlong)param_3 - (longlong)piVar5) / (longlong)(int)uVar6;
      if (1 < uVar6) {
        lVar3 = lVar3 / 2;
      }
    }
    iVar2 = *piVar5;
    sVar4 = (short)piVar5;
    piVar5 = (int *)((longlong)piVar5 + (longlong)(int)uVar6);
    *(short *)((longlong)param_1 +
              (ulonglong)
              (((uint)(iVar2 * -0x61c8864f) >> 0xd ^ iVar2 * -0x61c8864f) &
              (1 << ((byte)param_2 & 0x1f)) - 1U) * 2) = sVar4 - (short)param_3;
  } while( true );
}

// Encode_LZB_OneChunk_Fast_NoSlide_Sub @ 14f388a80

long64 __cdecl
oo2::Encode_LZB_OneChunk_Fast_NoSlide_Sub
          (uchar *param_1,long64 param_2,uchar *param_3,OodleLZB_CompressFast_Context *param_4,
          uchar *param_5,LZQuantumHeader *param_6)

{
  ulonglong *puVar1;
  char *pcVar2;
  uchar *puVar3;
  short *psVar4;
  int *piVar5;
  uchar *puVar6;
  long64 *plVar7;
  ulonglong uVar8;
  code *pcVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  long64 lVar12;
  ulonglong *puVar13;
  ushort uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  byte bVar17;
  uint uVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  short sVar26;
  uint uVar27;
  short sVar28;
  longlong lVar29;
  int iVar30;
  int *piVar31;
  undefined2 uVar32;
  uint uVar33;
  ulonglong uVar34;
  
  puVar3 = param_1 + param_2;
  if (puVar3 + -1 < param_5) {
    param_5 = puVar3 + -1;
  }
  puVar1 = (ulonglong *)((longlong)param_5 - 4);
  if (param_1 < puVar1) {
    piVar5 = (int *)param_4->m_windowBase;
    puVar6 = param_4->m_zeroPosPtr;
    plVar7 = param_4->m_tablePos;
    uVar21 = (1 << ((byte)param_4->m_tableSizeBits & 0x1f)) - 1;
    puVar19 = (ulonglong *)(param_1 + 1);
    puVar13 = (ulonglong *)param_3;
    if (param_1 != puVar6) {
      puVar19 = (ulonglong *)param_1;
    }
    do {
      iVar30 = 0x23;
      puVar10 = puVar19;
      while( true ) {
        iVar24 = (int)*puVar10;
        sVar26 = (short)puVar6;
        sVar28 = (short)puVar10 - sVar26;
        iVar23 = iVar30 >> 5;
        iVar30 = iVar30 + 1;
        uVar18 = ((uint)(iVar24 * -0x61c8864f) >> 0xd ^ iVar24 * -0x61c8864f) & uVar21;
        uVar14 = sVar28 - *(short *)((longlong)plVar7 + (ulonglong)uVar18 * 2);
        uVar22 = (ulonglong)(((uint)(iVar24 * 0x5bd1e995) >> 0xb) + iVar24 * 0x5bd1e995 & uVar21);
        uVar34 = (ulonglong)uVar14;
        piVar25 = (int *)((longlong)puVar10 - uVar34);
        if (((uVar14 < 0xfff8) && (iVar24 == *piVar25)) && (uVar14 != 0)) break;
        uVar14 = sVar28 - *(short *)((longlong)plVar7 + uVar22 * 2);
        piVar25 = (int *)((longlong)puVar10 - (ulonglong)uVar14);
        uVar34 = (ulonglong)(uint)uVar14;
        if (((uVar14 < 0xfff8) && (iVar24 == *piVar25)) && (uVar14 != 0)) break;
        puVar10 = (ulonglong *)((longlong)puVar10 + (longlong)iVar23);
        *(short *)((longlong)plVar7 + (ulonglong)uVar18 * 2) = sVar28;
        *(short *)((longlong)plVar7 + uVar22 * 2) = sVar28;
        if (puVar1 <= puVar10) goto LAB_14f388fc3;
      }
      uVar33 = (uint)uVar34;
      *(short *)((longlong)plVar7 + (ulonglong)uVar18 * 2) = sVar28;
      *(short *)((longlong)plVar7 + uVar22 * 2) = sVar28;
      puVar11 = (ulonglong *)((longlong)puVar10 + 4);
      if (puVar11 < puVar1) {
        puVar19 = (ulonglong *)((longlong)puVar11 - uVar34);
LAB_14f388c10:
        if (*puVar11 == *puVar19) goto code_r0x00014f388c1b;
        uVar15 = *puVar19 ^ *puVar11;
        uVar22 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
          }
        }
        puVar11 = (ulonglong *)((longlong)puVar11 + (uVar22 >> 3));
      }
LAB_14f388c38:
      puVar19 = (ulonglong *)param_5;
      if (puVar11 < param_5) {
        puVar19 = puVar11;
      }
      if (puVar19 < puVar1) {
        iVar30 = *(int *)((longlong)puVar10 + 1);
        sVar28 = sVar28 + 1;
        uVar15 = (ulonglong)(((uint)(iVar30 * 0x5bd1e995) >> 0xb) + iVar30 * 0x5bd1e995 & uVar21);
        psVar4 = (short *)((longlong)plVar7 +
                          (ulonglong)
                          (((uint)(iVar30 * -0x61c8864f) >> 0xd ^ iVar30 * -0x61c8864f) & uVar21) *
                          2);
        uVar22 = (ulonglong)(ushort)(sVar28 - *psVar4);
        if ((((uVar22 < 0xfff8) &&
             (piVar31 = (int *)((longlong)puVar10 + (1 - uVar22)), iVar30 == *piVar31)) &&
            (uVar22 != 0)) ||
           (((uVar22 = (ulonglong)(ushort)(sVar28 - *(short *)((longlong)plVar7 + uVar15 * 2)),
             uVar22 < 0xfff8 &&
             (piVar31 = (int *)((longlong)puVar10 + (1 - uVar22)), iVar30 == *piVar31)) &&
            (uVar22 != 0)))) {
          puVar11 = (ulonglong *)((longlong)puVar10 + 5);
          if (puVar11 < puVar1) {
            puVar16 = (ulonglong *)((longlong)puVar11 - uVar22);
LAB_14f388d03:
            if (*puVar11 == *puVar16) goto code_r0x00014f388d0e;
            uVar20 = *puVar16 ^ *puVar11;
            uVar8 = 0;
            if (uVar20 != 0) {
              for (; (uVar20 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
              }
            }
            puVar11 = (ulonglong *)((longlong)puVar11 + (uVar8 >> 3));
          }
LAB_14f388d2d:
          puVar16 = (ulonglong *)param_5;
          if (puVar11 < param_5) {
            puVar16 = puVar11;
          }
          if ((ulonglong *)((longlong)puVar19 + 3U) <= puVar16) {
            puVar10 = (ulonglong *)((longlong)puVar10 + 1);
            *psVar4 = sVar28;
            *(short *)((longlong)plVar7 + uVar15 * 2) = sVar28;
            puVar19 = puVar16;
            piVar25 = piVar31;
            uVar34 = uVar22;
          }
        }
        uVar33 = (uint)uVar34;
      }
      if ((param_1 < puVar10) && (piVar5 < piVar25)) {
        while( true ) {
          pcVar2 = (char *)((longlong)piVar25 + -1);
          puVar11 = (ulonglong *)((longlong)puVar10 + -1);
          piVar25 = (int *)((longlong)piVar25 + -1);
          if (*(char *)puVar11 != *pcVar2) break;
          puVar10 = puVar11;
          if ((puVar11 == (ulonglong *)param_1) || (piVar25 <= piVar5)) break;
        }
      }
      iVar30 = (int)puVar10 - (int)param_1;
      lVar29 = (longlong)iVar30;
      if (param_3 + param_2 <= (uchar *)(lVar29 + (longlong)puVar13)) break;
      puVar11 = (ulonglong *)((longlong)puVar13 + 1);
      iVar24 = (int)puVar19 - (int)puVar10;
      uVar18 = 0xf;
      if ((int)(iVar24 - 4U) < 0xf) {
        uVar18 = iVar24 - 4U;
      }
      if (uVar33 < 8) {
        iVar23 = 0xf;
        if (iVar30 < 0xf) {
          iVar23 = iVar30;
        }
        *(byte *)puVar13 = (byte)iVar23 | 0xf0;
        if (iVar23 == 0xf) {
          uVar27 = iVar30 - 0xf;
          if (uVar27 < 0xc0) {
            *(char *)puVar11 = (char)uVar27;
            puVar11 = (ulonglong *)((longlong)puVar13 + 2);
          }
          else {
            *(char *)puVar11 = (char)(uVar27 >> 8) + -0x40;
            *(char *)((longlong)puVar13 + 2) = (char)uVar27;
            puVar11 = (ulonglong *)((longlong)puVar13 + 3);
          }
        }
        puVar16 = (ulonglong *)(lVar29 + (longlong)puVar11);
        lVar29 = (longlong)param_1 - (longlong)puVar11;
        do {
          *puVar11 = *(ulonglong *)(lVar29 + (longlong)puVar11);
          puVar11 = puVar11 + 1;
        } while (puVar11 < puVar16);
        *(char *)puVar16 = (char)uVar18 * '\b' + -0x80 + (char)uVar33;
        puVar13 = (ulonglong *)((longlong)puVar16 + 1);
        if (uVar18 == 0xf) {
          uVar18 = iVar24 - 0x13;
          if (0xbf < uVar18) {
            *(char *)puVar13 = (char)(uVar18 >> 8) + -0x40;
            *(char *)((longlong)puVar16 + 2) = (char)uVar18;
            goto LAB_14f388f66;
          }
          *(char *)puVar13 = (char)uVar18;
          puVar13 = (ulonglong *)((longlong)puVar16 + 2);
        }
      }
      else {
        bVar17 = (char)uVar18 << 4;
        if (iVar30 < 0xf) {
          *(byte *)puVar13 = (byte)iVar30 | bVar17;
          *puVar11 = *(ulonglong *)param_1;
          if (8 < iVar30) {
            *(ulonglong *)((longlong)puVar13 + 9) = *(ulonglong *)((longlong)param_1 + 8);
          }
          puVar11 = (ulonglong *)((longlong)puVar11 + lVar29);
        }
        else {
          uVar27 = iVar30 - 0xf;
          *(byte *)puVar13 = bVar17 | 0xf;
          puVar16 = (ulonglong *)((longlong)puVar13 + 2);
          if (uVar27 < 0xc0) {
            *(char *)puVar11 = (char)uVar27;
          }
          else {
            *(char *)puVar11 = (char)(uVar27 >> 8) + -0x40;
            *(char *)puVar16 = (char)uVar27;
            puVar16 = (ulonglong *)((longlong)puVar13 + 3);
          }
          puVar11 = (ulonglong *)(lVar29 + (longlong)puVar16);
          do {
            uVar34 = *(ulonglong *)param_1;
            param_1 = (uchar *)((longlong)param_1 + 8);
            *puVar16 = uVar34;
            puVar16 = puVar16 + 1;
          } while (puVar16 < puVar11);
        }
        uVar32 = (undefined2)uVar33;
        if (uVar18 < 0xf) {
          *(undefined2 *)puVar11 = uVar32;
          puVar13 = puVar11;
LAB_14f388f66:
          puVar13 = (ulonglong *)((longlong)puVar13 + 2);
        }
        else if (iVar24 - 0x13U < 0x7f) {
          *(char *)puVar11 = (char)(iVar24 - 0x13U);
          puVar13 = (ulonglong *)((longlong)puVar11 + 3);
          *(undefined2 *)((longlong)puVar11 + 1) = uVar32;
        }
        else {
          *(undefined1 *)puVar11 = 0x7f;
          uVar18 = iVar24 - 0x92;
          *(undefined2 *)((longlong)puVar11 + 1) = uVar32;
          puVar13 = (ulonglong *)((longlong)puVar11 + 4);
          if (uVar18 < 0xc0) {
            *(char *)((longlong)puVar11 + 3) = (char)uVar18;
          }
          else {
            *(char *)((longlong)puVar11 + 3) = (char)(uVar18 >> 8) + -0x40;
            *(char *)puVar13 = (char)uVar18;
            puVar13 = (ulonglong *)((longlong)puVar11 + 5);
          }
        }
      }
      param_1 = (uchar *)puVar19;
      if (puVar1 <= puVar19) goto LAB_14f388fc3;
      puVar10 = (ulonglong *)((longlong)puVar10 + 2);
      sVar26 = (short)puVar10 - sVar26;
      for (; puVar10 < puVar19; puVar10 = (ulonglong *)((longlong)puVar10 + 2)) {
        uVar18 = (int)*puVar10 * -0x61c8864f;
        *(short *)((longlong)plVar7 + (ulonglong)((uVar18 >> 0xd ^ uVar18) & uVar21) * 2) = sVar26;
        sVar26 = sVar26 + 2;
      }
    } while( true );
  }
LAB_14f38902a:
  return param_2 + 1;
code_r0x00014f388c1b:
  puVar11 = puVar11 + 1;
  puVar19 = puVar19 + 1;
  if (puVar1 <= puVar11) goto LAB_14f388c38;
  goto LAB_14f388c10;
code_r0x00014f388d0e:
  puVar11 = puVar11 + 1;
  puVar16 = puVar16 + 1;
  if (puVar1 <= puVar11) goto LAB_14f388d2d;
  goto LAB_14f388d03;
LAB_14f388fc3:
  iVar30 = (int)puVar3 - (int)param_1;
  if (iVar30 < 1) {
    iVar30 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\lzb_fast.inl",0x21f,
                                "oo2::Encode_LZB_OneChunk_Fast_NoSlide_Sub","cur_lrl > 0");
    if (iVar30 != 0) {
      pcVar9 = (code *)swi(3);
      lVar12 = (*pcVar9)();
      return lVar12;
    }
  }
  else {
    if (param_3 + param_2 <= (uchar *)((longlong)iVar30 + (longlong)puVar13)) goto LAB_14f38902a;
    puVar13 = (ulonglong *)LZB_OutputLast((uchar *)puVar13,iVar30,param_1);
  }
  return (longlong)puVar13 - (longlong)param_3;
}

// Encode_LZB_OneChunk_Fast_Slide_Sub @ 14f389060

long64 __cdecl
oo2::Encode_LZB_OneChunk_Fast_Slide_Sub
          (uchar *param_1,long64 param_2,uchar *param_3,OodleLZB_CompressFast_Context *param_4,
          uchar *param_5,LZQuantumHeader *param_6)

{
  int *piVar1;
  long64 *plVar2;
  uchar *puVar3;
  ulonglong uVar4;
  uchar *puVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  int iVar9;
  ulong64 uVar10;
  longlong lVar11;
  long64 lVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  uchar *puVar19;
  ulonglong uVar20;
  int *piVar21;
  byte *pbVar22;
  byte *pbVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  undefined2 uVar27;
  longlong lVar28;
  int local_res8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    uVar10 = (*fp_ThreadProfiler_Push)("oo2::Encode_LZB_OneChunk_Fast_Slide_Sub",0);
  }
  puVar19 = param_1 + param_2;
  if (puVar19 + -1 < param_5) {
    param_5 = puVar19 + -1;
  }
  piVar1 = (int *)((longlong)param_5 + -4);
  if (param_1 < piVar1) {
    plVar2 = param_4->m_tablePos;
    uVar16 = (1 << ((byte)param_4->m_tableSizeBits & 0x1f)) - 1;
    puVar3 = param_4->m_windowBase;
    uVar4 = param_4->m_windowMask;
    lVar11 = param_4->m_posThisReset - param_4->m_maxOffset;
    puVar5 = param_4->m_zeroPosPtr;
    piVar21 = (int *)param_1;
    if ((uVar4 == 0xffffffffffffffff) && (param_1 == puVar5)) {
      piVar21 = (int *)(param_1 + 1);
    }
    local_9c = 0;
    pbVar23 = param_3;
    if (piVar21 <= piVar1) {
      do {
        uVar20 = (longlong)piVar21 - (longlong)puVar5;
        iVar17 = 0;
        iVar26 = 0;
        local_res8 = 0;
        iVar24 = *piVar21;
        uVar6 = plVar2[(iVar24 * -0x61c8864f ^ (uint)(iVar24 * -0x61c8864f) >> 0xd) & uVar16];
        if (lVar11 <= (longlong)uVar6) {
          iVar26 = iVar17;
          if (((((uchar)iVar24 == puVar3[uVar6 & uVar4]) &&
               (*(uchar *)((longlong)piVar21 + 1) == puVar3[uVar6 + 1 & uVar4])) &&
              (*(uchar *)((longlong)piVar21 + 2) == puVar3[uVar6 + 2 & uVar4])) &&
             (iVar26 = 0, *(uchar *)((longlong)piVar21 + 3) == puVar3[uVar6 + 3 & uVar4])) {
            piVar14 = piVar21 + 1;
            iVar26 = 4;
            if (piVar14 < param_5) {
              iVar26 = 4;
              do {
                if ((uchar)*piVar14 !=
                    puVar3[(ulonglong)((uVar6 - (longlong)piVar21) + (longlong)piVar14) & uVar4])
                break;
                iVar26 = iVar26 + 1;
                piVar14 = (int *)((longlong)piVar14 + 1);
              } while (piVar14 < param_5);
            }
          }
          local_res8 = (int)uVar20 - (int)uVar6;
        }
        uVar6 = plVar2[((uint)(iVar24 * 0x5bd1e995) >> 0xb) + iVar24 * 0x5bd1e995 & uVar16];
        if (lVar11 <= (longlong)uVar6) {
          if ((((uchar)*piVar21 == puVar3[uVar6 & uVar4]) &&
              (*(uchar *)((longlong)piVar21 + 1) == puVar3[uVar6 + 1 & uVar4])) &&
             ((*(uchar *)((longlong)piVar21 + 2) == puVar3[uVar6 + 2 & uVar4] &&
              (*(uchar *)((longlong)piVar21 + 3) == puVar3[uVar6 + 3 & uVar4])))) {
            iVar17 = 4;
            piVar14 = piVar21 + 1;
            if (piVar14 < param_5) {
              do {
                if ((uchar)*piVar14 !=
                    puVar3[(ulonglong)((uVar6 - (longlong)piVar21) + (longlong)piVar14) & uVar4])
                break;
                iVar17 = iVar17 + 1;
                piVar14 = (int *)((longlong)piVar14 + 1);
              } while (piVar14 < param_5);
            }
          }
          else {
            iVar17 = 0;
          }
          if ((iVar26 < iVar17) && (iVar9 = (int)uVar20 - (int)uVar6, iVar9 < 0xfff8)) {
            iVar26 = iVar17;
            local_res8 = iVar9;
          }
        }
        plVar2[(iVar24 * -0x61c8864f ^ (uint)(iVar24 * -0x61c8864f) >> 0xd) & uVar16] = uVar20;
        plVar2[((uint)(iVar24 * 0x5bd1e995) >> 0xb) + iVar24 * 0x5bd1e995 & uVar16] = uVar20;
        if ((iVar26 == 0) || (0xfff7 < local_res8)) {
          local_9c = local_9c + 1;
          piVar14 = (int *)((longlong)piVar21 + (longlong)((local_9c >> 5) + 1));
        }
        else {
          local_9c = 0;
          if (piVar21 < (int *)((longlong)param_5 + -4)) {
            piVar14 = (int *)((longlong)piVar21 + 1);
            uVar20 = uVar20 + 1;
            iVar24 = *piVar14;
            local_a0 = 0;
            local_a4 = 0;
            uVar6 = plVar2[((uint)(iVar24 * -0x61c8864f) >> 0xd ^ iVar24 * -0x61c8864f) & uVar16];
            local_98 = (int)uVar20;
            if ((((lVar11 <= (longlong)uVar6) && ((uchar)iVar24 == puVar3[uVar6 & uVar4])) &&
                ((uchar)((uint)iVar24 >> 8) == puVar3[uVar6 + 1 & uVar4])) &&
               (((uchar)((uint)iVar24 >> 0x10) == puVar3[uVar6 + 2 & uVar4] &&
                ((uchar)((uint)iVar24 >> 0x18) == puVar3[uVar6 + 3 & uVar4])))) {
              iVar17 = 4;
              piVar15 = (int *)((longlong)piVar21 + 5);
              if (piVar15 < param_5) {
                do {
                  if ((uchar)*piVar15 !=
                      puVar3[(ulonglong)((uVar6 - (longlong)piVar14) + (longlong)piVar15) & uVar4])
                  break;
                  iVar17 = iVar17 + 1;
                  piVar15 = (int *)((longlong)piVar15 + 1);
                } while (piVar15 < param_5);
              }
              if ((0 < iVar17) && (iVar9 = local_98 - (int)uVar6, iVar9 < 0xfff8)) {
                local_a4 = iVar9;
                local_a0 = iVar17;
              }
            }
            uVar6 = plVar2[((uint)(iVar24 * 0x5bd1e995) >> 0xb) + iVar24 * 0x5bd1e995 & uVar16];
            if (lVar11 <= (longlong)uVar6) {
              if ((((*(uchar *)piVar14 == puVar3[uVar6 & uVar4]) &&
                   (*(uchar *)((longlong)piVar21 + 2) == puVar3[uVar6 + 1 & uVar4])) &&
                  (*(uchar *)((longlong)piVar21 + 3) == puVar3[uVar6 + 2 & uVar4])) &&
                 ((uchar)piVar21[1] == puVar3[uVar6 + 3 & uVar4])) {
                iVar17 = 4;
                piVar15 = (int *)((longlong)piVar21 + 5);
                if (piVar15 < param_5) {
                  do {
                    if ((uchar)*piVar15 !=
                        puVar3[(ulonglong)((uVar6 - (longlong)piVar14) + (longlong)piVar15) & uVar4]
                       ) break;
                    iVar17 = iVar17 + 1;
                    piVar15 = (int *)((longlong)piVar15 + 1);
                  } while (piVar15 < param_5);
                }
              }
              else {
                iVar17 = 0;
              }
              if ((local_a0 < iVar17) && (local_98 = local_98 - (int)uVar6, local_98 < 0xfff8)) {
                local_a4 = local_98;
                local_a0 = iVar17;
              }
            }
            if (1 < local_a0 - iVar26) {
              plVar2[((uint)(iVar24 * -0x61c8864f) >> 0xd ^ iVar24 * -0x61c8864f) & uVar16] = uVar20
              ;
              plVar2[((uint)(iVar24 * 0x5bd1e995) >> 0xb) + iVar24 * 0x5bd1e995 & uVar16] = uVar20;
              piVar21 = piVar14;
              iVar26 = local_a0;
              local_res8 = local_a4;
            }
          }
          iVar24 = (int)piVar21 - (int)param_1;
          if (param_3 + param_2 <= pbVar23 + iVar24) goto LAB_14f38982a;
          uVar13 = 0xf;
          if ((int)(iVar26 - 4U) < 0xf) {
            uVar13 = iVar26 - 4U;
          }
          pbVar22 = pbVar23 + 1;
          if (local_res8 < 8) {
            iVar17 = 0xf;
            if (iVar24 < 0xf) {
              iVar17 = iVar24;
            }
            *pbVar23 = (byte)iVar17 | 0xf0;
            if (iVar17 == 0xf) {
              uVar25 = iVar24 - 0xf;
              if (uVar25 < 0xc0) {
                *pbVar22 = (byte)uVar25;
                pbVar22 = pbVar23 + 2;
              }
              else {
                *pbVar22 = (char)(uVar25 >> 8) - 0x40;
                pbVar23[2] = (byte)uVar25;
                pbVar22 = pbVar23 + 3;
              }
            }
            pbVar18 = pbVar22 + iVar24;
            lVar28 = (longlong)param_1 - (longlong)pbVar22;
            do {
              *(undefined8 *)pbVar22 = *(undefined8 *)(pbVar22 + lVar28);
              pbVar22 = pbVar22 + 8;
            } while (pbVar22 < pbVar18);
            *pbVar18 = (char)uVar13 * '\b' + (char)local_res8 + -0x80;
            pbVar23 = pbVar18 + 1;
            if (uVar13 == 0xf) {
              uVar13 = iVar26 - 0x13;
              if (0xbf < uVar13) {
                *pbVar23 = (char)(uVar13 >> 8) - 0x40;
                pbVar18[2] = (byte)uVar13;
                goto LAB_14f38972f;
              }
              *pbVar23 = (byte)uVar13;
              pbVar23 = pbVar18 + 2;
            }
          }
          else {
            bVar8 = (byte)(uVar13 << 4);
            if (iVar24 < 0xf) {
              *pbVar23 = bVar8 | (byte)iVar24;
              *(undefined8 *)pbVar22 = *(undefined8 *)param_1;
              if (8 < iVar24) {
                *(undefined8 *)(pbVar23 + 9) = *(undefined8 *)((longlong)param_1 + 8);
              }
              pbVar22 = pbVar22 + iVar24;
            }
            else {
              *pbVar23 = bVar8 | 0xf;
              uVar25 = iVar24 - 0xf;
              pbVar18 = pbVar23 + 2;
              if (uVar25 < 0xc0) {
                *pbVar22 = (byte)uVar25;
              }
              else {
                *pbVar22 = (char)(uVar25 >> 8) - 0x40;
                *pbVar18 = (byte)uVar25;
                pbVar18 = pbVar23 + 3;
              }
              pbVar22 = pbVar18 + iVar24;
              do {
                *(undefined8 *)pbVar18 = *(undefined8 *)param_1;
                param_1 = (uchar *)((longlong)param_1 + 8);
                pbVar18 = pbVar18 + 8;
              } while (pbVar18 < pbVar22);
            }
            uVar27 = (undefined2)local_res8;
            if (uVar13 < 0xf) {
              *(undefined2 *)pbVar22 = uVar27;
              pbVar23 = pbVar22;
LAB_14f38972f:
              pbVar23 = pbVar23 + 2;
            }
            else if (iVar26 - 0x13U < 0x7f) {
              *pbVar22 = (byte)(iVar26 - 0x13U);
              *(undefined2 *)(pbVar22 + 1) = uVar27;
              pbVar23 = pbVar22 + 3;
            }
            else {
              *pbVar22 = 0x7f;
              *(undefined2 *)(pbVar22 + 1) = uVar27;
              uVar13 = iVar26 - 0x92;
              pbVar23 = pbVar22 + 4;
              if (uVar13 < 0xc0) {
                pbVar22[3] = (byte)uVar13;
              }
              else {
                pbVar22[3] = (char)(uVar13 >> 8) - 0x40;
                *pbVar23 = (byte)uVar13;
                pbVar23 = pbVar22 + 5;
              }
            }
          }
          piVar14 = (int *)((longlong)piVar21 + (longlong)iVar26);
          param_1 = (uchar *)piVar14;
          if (piVar14 < piVar1) {
            for (; piVar21 < piVar14; piVar21 = (int *)((longlong)piVar21 + 1)) {
              plVar2[(*piVar21 * -0x61c8864f ^ (uint)(*piVar21 * -0x61c8864f) >> 0xd) & uVar16] =
                   (longlong)piVar21 - (longlong)puVar5;
            }
          }
        }
        piVar21 = piVar14;
      } while (piVar14 <= (int *)((longlong)param_5 + -4));
    }
    iVar24 = (int)puVar19 - (int)param_1;
    if (iVar24 < 1) {
      iVar24 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\lzb_fast_generic.inl",0x1cf,
                                  "oo2::Encode_LZB_OneChunk_Fast_Slide_Sub","cur_lrl > 0");
      if (iVar24 != 0) {
        pcVar7 = (code *)swi(3);
        lVar12 = (*pcVar7)();
        return lVar12;
      }
    }
    else {
      if (param_3 + param_2 <= pbVar23 + iVar24) goto LAB_14f38982a;
      pbVar23 = LZB_OutputLast(pbVar23,iVar24,param_1);
    }
    lVar12 = (longlong)pbVar23 - (longlong)param_3;
  }
  else {
LAB_14f38982a:
    lVar12 = param_2 + 1;
  }
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(uVar10);
  }
  return lVar12;
}

// Encode_LZB_OneChunk_Normal_New @ 14f389870

long64 __cdecl
oo2::Encode_LZB_OneChunk_Normal_New
          (uchar *param_1,long64 param_2,uchar *param_3,void *param_4,uchar *param_5,uchar *param_6,
          uchar *param_7,LZQuantumHeader *param_8)

{
  long64 lVar1;
  
  *(longlong *)((longlong)param_4 + 0x30) =
       (longlong)param_1 - *(longlong *)((longlong)param_4 + 0x40);
  lVar1 = Encode_LZB_OneChunk_Normal_New_Sub(param_1,param_2,param_3,param_4,param_6,param_8);
  return lVar1;
}

// Encode_LZB_OneChunk_Normal_New_Preload @ 14f3898c0

void __cdecl
oo2::Encode_LZB_OneChunk_Normal_New_Preload
          (long64 *param_1,int param_2,uchar *param_3,long64 param_4)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  int *piVar7;
  uint uVar8;
  
  uVar5 = 0;
  uVar8 = 0x10;
  piVar7 = (int *)(param_3 + -param_4);
  lVar3 = (longlong)(param_4 + (ulonglong)((uint)(param_4 >> 0x3f) & 0x1f)) >> 5;
  do {
    lVar3 = lVar3 + -1;
    if (lVar3 < 1) {
      if (param_3 <= piVar7) {
        if (piVar7 != (int *)param_3) {
          iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\lzb_fast_normal.inl",0x6a,
                                     "oo2::Encode_LZB_OneChunk_Normal_New_Preload",
                                     "ptr == rawBufStart");
          if (iVar2 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        return;
      }
      uVar8 = (int)uVar8 >> 1;
      lVar3 = ((longlong)param_3 - (longlong)piVar7) / (longlong)(int)uVar8;
      if (1 < uVar8) {
        lVar3 = lVar3 / 2;
      }
    }
    sVar6 = (short)piVar7;
    uVar4 = (((uint)(*piVar7 * -0x61c8864f) >> 0xb & 0x1ffffc ^ *piVar7 * 0x78dde6c4) &
            (1 << ((char)param_2 - 2U & 0x1f)) * 4 - 4U) + uVar5;
    uVar5 = uVar5 + 1 & 3;
    piVar7 = (int *)((longlong)piVar7 + (longlong)(int)uVar8);
    *(short *)((longlong)param_1 + (ulonglong)uVar4 * 2) = sVar6 - (short)param_3;
  } while( true );
}

// Encode_LZB_OneChunk_Normal_New_Sub @ 14f3899c0

long64 __cdecl
oo2::Encode_LZB_OneChunk_Normal_New_Sub
          (uchar *param_1,long64 param_2,uchar *param_3,OodleLZB_CompressFast_Context *param_4,
          uchar *param_5,LZQuantumHeader *param_6)

{
  byte *pbVar1;
  uchar *puVar2;
  long64 *plVar3;
  uchar *puVar4;
  uchar *puVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  long64 lVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uchar *puVar19;
  short sVar20;
  ulonglong *puVar21;
  undefined2 uVar22;
  int iVar23;
  uint uVar24;
  ulonglong *puVar25;
  ulonglong *puVar26;
  longlong lVar27;
  short sVar28;
  uint uVar29;
  ulonglong *puVar30;
  int iVar31;
  ulonglong *local_res8;
  uint local_98;
  byte *local_78;
  
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar9 = 0xffffffffffffffff;
  }
  else {
    uVar9 = (*fp_ThreadProfiler_Push)("oo2::Encode_LZB_OneChunk_Normal_New_Sub",0);
  }
  puVar2 = param_1 + param_2;
  puVar25 = (ulonglong *)param_5;
  if (puVar2 + -1 < param_5) {
    puVar25 = (ulonglong *)(puVar2 + -1);
  }
  puVar26 = (ulonglong *)((longlong)puVar25 + -4);
  if (param_1 < puVar26) {
    local_98 = 0;
    plVar3 = param_4->m_tablePos;
    uVar29 = (1 << ((char)param_4->m_tableSizeBits - 2U & 0x1f)) - 1;
    puVar4 = param_4->m_windowBase;
    puVar5 = param_4->m_zeroPosPtr;
    puVar21 = (ulonglong *)(param_1 + 1);
    local_res8 = (ulonglong *)param_1;
    local_78 = param_3;
    if (param_1 != puVar5) {
      puVar21 = (ulonglong *)param_1;
      local_res8 = (ulonglong *)param_1;
    }
LAB_14f389aac:
    uVar16 = 0;
    param_5._0_4_ = 0;
    iVar31 = 0x83;
    iVar17 = (int)*puVar21;
    uVar15 = iVar17 * -0x61c8864f ^ (uint)(iVar17 * -0x61c8864f) >> 0xd;
    puVar30 = puVar21;
    do {
      iVar23 = iVar31 >> 7;
      iVar31 = iVar31 + 1;
      sVar20 = (short)puVar5;
      sVar28 = (short)puVar30 - sVar20;
      puVar21 = (ulonglong *)0x0;
      uVar15 = (uVar15 & uVar29) * 4;
      uVar14 = sVar28 - *(short *)((longlong)plVar3 + (ulonglong)uVar15 * 2);
      if (((uVar14 < 0xfff8) && (iVar17 == *(int *)((longlong)puVar30 - (ulonglong)uVar14))) &&
         (uVar14 != 0)) {
        puVar21 = (ulonglong *)((longlong)puVar30 + 4);
        if (puVar21 < puVar26) {
          puVar10 = (ulonglong *)((longlong)puVar21 - (ulonglong)uVar14);
LAB_14f389b30:
          uVar16 = (uint)param_5;
          if (*puVar21 == *puVar10) goto code_r0x00014f389b3b;
          uVar18 = *puVar10 ^ *puVar21;
          uVar6 = 0;
          if (uVar18 != 0) {
            for (; (uVar18 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
          puVar21 = (ulonglong *)((longlong)puVar21 + (uVar6 >> 3));
        }
LAB_14f389b60:
        puVar10 = puVar25;
        if (puVar21 < puVar25) {
          puVar10 = puVar21;
        }
        puVar21 = (ulonglong *)0x0;
        if (puVar10 != (ulonglong *)0x0) {
          puVar21 = puVar10;
          uVar16 = (uint)uVar14;
          param_5._0_4_ = (uint)uVar14;
        }
      }
      uVar14 = sVar28 - *(short *)((longlong)plVar3 + (ulonglong)(uVar15 + 1) * 2);
      if (((uVar14 < 0xfff8) && (iVar17 == *(int *)((longlong)puVar30 - (ulonglong)uVar14))) &&
         (uVar14 != 0)) {
        puVar10 = (ulonglong *)((longlong)puVar30 + 4);
        if (puVar10 < puVar26) {
          puVar11 = (ulonglong *)((longlong)puVar10 - (ulonglong)uVar14);
LAB_14f389bc0:
          uVar16 = (uint)param_5;
          if (*puVar10 == *puVar11) goto code_r0x00014f389bcb;
          uVar18 = *puVar11 ^ *puVar10;
          uVar6 = 0;
          if (uVar18 != 0) {
            for (; (uVar18 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
          puVar10 = (ulonglong *)((longlong)puVar10 + (uVar6 >> 3));
        }
LAB_14f389bf0:
        puVar11 = puVar25;
        if (puVar10 < puVar25) {
          puVar11 = puVar10;
        }
        if (puVar21 < puVar11) {
          puVar21 = puVar11;
          uVar16 = (uint)uVar14;
          param_5._0_4_ = (uint)uVar14;
        }
      }
      uVar14 = sVar28 - *(short *)((longlong)plVar3 + (ulonglong)(uVar15 + 2) * 2);
      if (((uVar14 < 0xfff8) && (iVar17 == *(int *)((longlong)puVar30 - (ulonglong)uVar14))) &&
         (uVar14 != 0)) {
        puVar10 = (ulonglong *)((longlong)puVar30 + 4);
        if (puVar10 < puVar26) {
          puVar11 = (ulonglong *)((longlong)puVar10 - (ulonglong)uVar14);
LAB_14f389c55:
          uVar16 = (uint)param_5;
          if (*puVar10 == *puVar11) goto code_r0x00014f389c65;
          uVar18 = *puVar11 ^ *puVar10;
          uVar6 = 0;
          if (uVar18 != 0) {
            for (; (uVar18 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
          puVar10 = (ulonglong *)((longlong)puVar10 + (uVar6 >> 3));
        }
LAB_14f389c8a:
        puVar11 = puVar25;
        if (puVar10 < puVar25) {
          puVar11 = puVar10;
        }
        if (puVar21 < puVar11) {
          puVar21 = puVar11;
          uVar16 = (uint)uVar14;
          param_5._0_4_ = (uint)uVar14;
        }
      }
      uVar14 = sVar28 - *(short *)((longlong)plVar3 + (ulonglong)(uVar15 + 3) * 2);
      if (((uVar14 < 0xfff8) && (iVar17 == *(int *)((longlong)puVar30 - (ulonglong)uVar14))) &&
         (uVar14 != 0)) {
        puVar10 = (ulonglong *)((longlong)puVar30 + 4);
        if (puVar10 < puVar26) {
          puVar11 = (ulonglong *)((longlong)puVar10 - (ulonglong)uVar14);
LAB_14f389cf0:
          uVar16 = (uint)param_5;
          if (*puVar10 == *puVar11) goto code_r0x00014f389cfb;
          uVar18 = *puVar11 ^ *puVar10;
          uVar6 = 0;
          if (uVar18 != 0) {
            for (; (uVar18 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
          puVar10 = (ulonglong *)((longlong)puVar10 + (uVar6 >> 3));
        }
LAB_14f389d20:
        puVar11 = puVar25;
        if (puVar10 < puVar25) {
          puVar11 = puVar10;
        }
        if (puVar21 < puVar11) {
          puVar21 = puVar11;
          uVar16 = (uint)uVar14;
          param_5._0_4_ = (uint)uVar14;
        }
      }
      *(short *)((longlong)plVar3 + (ulonglong)(uVar15 + local_98) * 2) = sVar28;
      local_98 = local_98 + 1 & 3;
      if (puVar21 != (ulonglong *)0x0) goto LAB_14f389d8d;
      puVar30 = (ulonglong *)((longlong)puVar30 + (longlong)iVar23);
      if (puVar26 <= puVar30) goto LAB_14f38a2d7;
      iVar17 = (int)*puVar30;
      uVar15 = (uint)(iVar17 * -0x61c8864f) >> 0xd ^ iVar17 * -0x61c8864f;
    } while( true );
  }
LAB_14f38a339:
  lVar13 = param_2 + 1;
LAB_14f38a344:
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(uVar9);
  }
  return lVar13;
code_r0x00014f389b3b:
  puVar21 = puVar21 + 1;
  puVar10 = puVar10 + 1;
  if (puVar26 <= puVar21) goto LAB_14f389b60;
  goto LAB_14f389b30;
code_r0x00014f389bcb:
  puVar10 = puVar10 + 1;
  puVar11 = puVar11 + 1;
  if (puVar26 <= puVar10) goto LAB_14f389bf0;
  goto LAB_14f389bc0;
code_r0x00014f389c65:
  puVar10 = puVar10 + 1;
  puVar11 = puVar11 + 1;
  if (puVar26 <= puVar10) goto LAB_14f389c8a;
  goto LAB_14f389c55;
code_r0x00014f389cfb:
  puVar10 = puVar10 + 1;
  puVar11 = puVar11 + 1;
  if (puVar26 <= puVar10) goto LAB_14f389d20;
  goto LAB_14f389cf0;
LAB_14f389d8d:
  if (puVar21 < puVar26) {
    sVar28 = ((short)puVar30 + 1) - sVar20;
    iVar17 = *(int *)((longlong)puVar30 + 1);
    uVar24 = 0;
    puVar10 = (ulonglong *)0x0;
    uVar15 = ((iVar17 * -0x61c8864f ^ (uint)(iVar17 * -0x61c8864f) >> 0xd) & uVar29) * 4;
    uVar14 = sVar28 - *(short *)((longlong)plVar3 + (ulonglong)uVar15 * 2);
    if (((uVar14 < 0xfff8) && (iVar17 == *(int *)((longlong)puVar30 + (1 - (ulonglong)uVar14)))) &&
       (uVar14 != 0)) {
      puVar11 = (ulonglong *)((longlong)puVar30 + 5);
      if (puVar11 < puVar26) {
        puVar12 = (ulonglong *)((longlong)puVar11 - (ulonglong)uVar14);
LAB_14f389e10:
        if (*puVar11 == *puVar12) goto code_r0x00014f389e1b;
        uVar18 = *puVar12 ^ *puVar11;
        uVar6 = 0;
        if (uVar18 != 0) {
          for (; (uVar18 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        puVar11 = (ulonglong *)((longlong)puVar11 + (uVar6 >> 3));
      }
LAB_14f389e38:
      puVar12 = puVar25;
      if (puVar11 < puVar25) {
        puVar12 = puVar11;
      }
      if (puVar12 != (ulonglong *)0x0) {
        puVar10 = puVar12;
        uVar24 = (uint)uVar14;
      }
    }
    uVar14 = sVar28 - *(short *)((longlong)plVar3 + (ulonglong)(uVar15 + 1) * 2);
    if (((uVar14 < 0xfff8) && (iVar17 == *(int *)((longlong)puVar30 + (1 - (ulonglong)uVar14)))) &&
       (uVar14 != 0)) {
      puVar11 = (ulonglong *)((longlong)puVar30 + 5);
      if (puVar11 < puVar26) {
        puVar12 = (ulonglong *)((longlong)puVar11 - (ulonglong)uVar14);
LAB_14f389ea0:
        if (*puVar11 == *puVar12) goto code_r0x00014f389eab;
        uVar18 = *puVar12 ^ *puVar11;
        uVar6 = 0;
        if (uVar18 != 0) {
          for (; (uVar18 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        puVar11 = (ulonglong *)((longlong)puVar11 + (uVar6 >> 3));
      }
LAB_14f389ecd:
      puVar12 = puVar25;
      if (puVar11 < puVar25) {
        puVar12 = puVar11;
      }
      if (puVar10 < puVar12) {
        puVar10 = puVar12;
        uVar24 = (uint)uVar14;
      }
    }
    uVar14 = sVar28 - *(short *)((longlong)plVar3 + (ulonglong)(uVar15 + 2) * 2);
    if (((uVar14 < 0xfff8) && (iVar17 == *(int *)((longlong)puVar30 + (1 - (ulonglong)uVar14)))) &&
       (uVar14 != 0)) {
      puVar11 = (ulonglong *)((longlong)puVar30 + 5);
      if (puVar11 < puVar26) {
        puVar12 = (ulonglong *)((longlong)puVar11 - (ulonglong)uVar14);
LAB_14f389f30:
        if (*puVar11 == *puVar12) goto code_r0x00014f389f3b;
        uVar18 = *puVar12 ^ *puVar11;
        uVar6 = 0;
        if (uVar18 != 0) {
          for (; (uVar18 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        puVar11 = (ulonglong *)((longlong)puVar11 + (uVar6 >> 3));
      }
LAB_14f389f5d:
      puVar12 = puVar25;
      if (puVar11 < puVar25) {
        puVar12 = puVar11;
      }
      if (puVar10 < puVar12) {
        puVar10 = puVar12;
        uVar24 = (uint)uVar14;
      }
    }
    uVar14 = sVar28 - *(short *)((longlong)plVar3 + (ulonglong)(uVar15 + 3) * 2);
    if (((uVar14 < 0xfff8) && (iVar17 == *(int *)((longlong)puVar30 + (1 - (ulonglong)uVar14)))) &&
       (uVar14 != 0)) {
      puVar11 = (ulonglong *)((longlong)puVar30 + 5);
      if (puVar11 < puVar26) {
        puVar12 = (ulonglong *)((longlong)puVar11 - (ulonglong)uVar14);
LAB_14f389fb4:
        if (*puVar11 == *puVar12) goto code_r0x00014f389fbf;
        uVar18 = *puVar12 ^ *puVar11;
        uVar6 = 0;
        if (uVar18 != 0) {
          for (; (uVar18 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        puVar11 = (ulonglong *)((longlong)puVar11 + (uVar6 >> 3));
      }
LAB_14f389fe1:
      puVar12 = puVar25;
      if (puVar11 < puVar25) {
        puVar12 = puVar11;
      }
      if (puVar10 < puVar12) {
        puVar10 = puVar12;
        uVar24 = (uint)uVar14;
      }
    }
    uVar16 = (uint)param_5;
    if ((ulonglong *)((longlong)puVar21 + 3U) <= puVar10) {
      puVar30 = (ulonglong *)((longlong)puVar30 + 1);
      *(short *)((longlong)plVar3 + (ulonglong)(uVar15 + local_98) * 2) = sVar28;
      local_98 = local_98 + 1 & 3;
      puVar21 = puVar10;
      uVar16 = uVar24;
      param_5._0_4_ = uVar24;
    }
  }
  if ((local_res8 < puVar30) &&
     (puVar19 = (uchar *)((longlong)puVar30 - (longlong)(int)uVar16), puVar4 < puVar19)) {
    while( true ) {
      puVar10 = (ulonglong *)((longlong)puVar30 + -1);
      puVar19 = puVar19 + -1;
      if (*(uchar *)puVar10 != *puVar19) break;
      puVar30 = puVar10;
      if ((puVar10 == local_res8) || (puVar19 <= puVar4)) break;
    }
  }
  iVar17 = (int)puVar21 - (int)puVar30;
  iVar31 = (int)puVar30 - (int)local_res8;
  lVar27 = (longlong)iVar31;
  if (param_3 + param_2 <= local_78 + lVar27) goto LAB_14f38a339;
  uVar16 = 0xf;
  if ((int)(iVar17 - 4U) < 0xf) {
    uVar16 = iVar17 - 4U;
  }
  puVar10 = (ulonglong *)(local_78 + 1);
  if ((uint)param_5 < 8) {
    iVar23 = 0xf;
    if (iVar31 < 0xf) {
      iVar23 = iVar31;
    }
    *local_78 = (byte)iVar23 | 0xf0;
    if (iVar23 == 0xf) {
      uVar15 = iVar31 - 0xf;
      if (uVar15 < 0xc0) {
        *(byte *)puVar10 = (byte)uVar15;
        puVar10 = (ulonglong *)(local_78 + 2);
      }
      else {
        *(char *)puVar10 = (char)(uVar15 >> 8) + -0x40;
        local_78[2] = (byte)uVar15;
        puVar10 = (ulonglong *)(local_78 + 3);
      }
    }
    puVar11 = (ulonglong *)(lVar27 + (longlong)puVar10);
    lVar27 = (longlong)local_res8 - (longlong)puVar10;
    do {
      *puVar10 = *(ulonglong *)(lVar27 + (longlong)puVar10);
      puVar10 = puVar10 + 1;
    } while (puVar10 < puVar11);
    *(char *)puVar11 = (char)uVar16 * '\b' + -0x80 + (char)(uint)param_5;
    pbVar1 = (byte *)((longlong)puVar11 + 1);
    local_78 = pbVar1;
    if (uVar16 == 0xf) {
      uVar16 = iVar17 - 0x13;
      local_78 = (byte *)((longlong)puVar11 + 2);
      if (uVar16 < 0xc0) {
        *pbVar1 = (byte)uVar16;
      }
      else {
        *pbVar1 = (char)(uVar16 >> 8) - 0x40;
        *local_78 = (byte)uVar16;
        local_78 = (byte *)((longlong)puVar11 + 3);
      }
    }
  }
  else {
    bVar8 = (byte)(uVar16 << 4);
    if (iVar31 < 0xf) {
      *local_78 = bVar8 | (byte)iVar31;
      *puVar10 = *local_res8;
      if (8 < iVar31) {
        *(ulonglong *)(local_78 + 9) = local_res8[1];
      }
      puVar10 = (ulonglong *)((longlong)puVar10 + lVar27);
    }
    else {
      *local_78 = bVar8 | 0xf;
      uVar15 = iVar31 - 0xf;
      puVar11 = (ulonglong *)(local_78 + 2);
      if (uVar15 < 0xc0) {
        *(char *)puVar10 = (char)uVar15;
      }
      else {
        *(char *)puVar10 = (char)(uVar15 >> 8) + -0x40;
        *(char *)puVar11 = (char)uVar15;
        puVar11 = (ulonglong *)(local_78 + 3);
      }
      puVar10 = (ulonglong *)(lVar27 + (longlong)puVar11);
      do {
        *puVar11 = *local_res8;
        local_res8 = local_res8 + 1;
        puVar11 = puVar11 + 1;
      } while (puVar11 < puVar10);
    }
    uVar22 = (undefined2)(uint)param_5;
    if (uVar16 < 0xf) {
      *(undefined2 *)puVar10 = uVar22;
      local_78 = (byte *)((longlong)puVar10 + 2);
    }
    else if (iVar17 - 0x13U < 0x7f) {
      *(char *)puVar10 = (char)(iVar17 - 0x13U);
      *(undefined2 *)((longlong)puVar10 + 1) = uVar22;
      local_78 = (byte *)((longlong)puVar10 + 3);
    }
    else {
      *(undefined1 *)puVar10 = 0x7f;
      *(undefined2 *)((longlong)puVar10 + 1) = uVar22;
      uVar16 = iVar17 - 0x92;
      if (uVar16 < 0xc0) {
        *(byte *)((longlong)puVar10 + 3) = (byte)uVar16;
        local_78 = (byte *)((longlong)puVar10 + 4);
      }
      else {
        *(char *)((longlong)puVar10 + 3) = (char)(uVar16 >> 8) + -0x40;
        *(byte *)((longlong)puVar10 + 4) = (byte)uVar16;
        local_78 = (byte *)((longlong)puVar10 + 5);
      }
    }
  }
  local_res8 = puVar21;
  if (puVar26 <= puVar21) goto LAB_14f38a2d7;
  sVar20 = (short)puVar30 - sVar20;
  if (puVar30 < puVar21) {
    do {
      *(short *)((longlong)plVar3 +
                (ulonglong)
                ((((uint)((int)*puVar30 * -0x61c8864f) >> 0xb & 0x1ffffc ^
                  (int)*puVar30 * 0x78dde6c4) & uVar29 * 4) + local_98) * 2) = sVar20;
      sVar20 = sVar20 + 1;
      puVar30 = (ulonglong *)((longlong)puVar30 + 1);
    } while (puVar30 < puVar21);
  }
  goto LAB_14f389aac;
code_r0x00014f389e1b:
  puVar11 = puVar11 + 1;
  puVar12 = puVar12 + 1;
  if (puVar26 <= puVar11) goto LAB_14f389e38;
  goto LAB_14f389e10;
code_r0x00014f389eab:
  puVar11 = puVar11 + 1;
  puVar12 = puVar12 + 1;
  if (puVar26 <= puVar11) goto LAB_14f389ecd;
  goto LAB_14f389ea0;
code_r0x00014f389f3b:
  puVar11 = puVar11 + 1;
  puVar12 = puVar12 + 1;
  if (puVar26 <= puVar11) goto LAB_14f389f5d;
  goto LAB_14f389f30;
code_r0x00014f389fbf:
  puVar11 = puVar11 + 1;
  puVar12 = puVar12 + 1;
  if (puVar26 <= puVar11) goto LAB_14f389fe1;
  goto LAB_14f389fb4;
LAB_14f38a2d7:
  iVar17 = (int)puVar2 - (int)local_res8;
  if (iVar17 < 1) {
    iVar17 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\lzb_fast_normal.inl",0x201,
                                "oo2::Encode_LZB_OneChunk_Normal_New_Sub","cur_lrl > 0");
    if (iVar17 != 0) {
      pcVar7 = (code *)swi(3);
      lVar13 = (*pcVar7)();
      return lVar13;
    }
  }
  else {
    if (param_3 + param_2 <= local_78 + iVar17) goto LAB_14f38a339;
    local_78 = LZB_OutputLast(local_78,iVar17,(uchar *)local_res8);
  }
  lVar13 = (longlong)local_78 - (longlong)param_3;
  goto LAB_14f38a344;
}

// Encode_LZB_OneChunk_VeryFast_NoSlide @ 14f38a380

long64 __cdecl
oo2::Encode_LZB_OneChunk_VeryFast_NoSlide
          (uchar *param_1,long64 param_2,uchar *param_3,void *param_4,uchar *param_5,uchar *param_6,
          uchar *param_7,LZQuantumHeader *param_8)

{
  long64 lVar1;
  
  *(longlong *)((longlong)param_4 + 0x30) =
       (longlong)param_1 - *(longlong *)((longlong)param_4 + 0x40);
  lVar1 = Encode_LZB_OneChunk_VeryFast_NoSlide_Sub(param_1,param_2,param_3,param_4,param_6,param_8);
  return lVar1;
}

// Encode_LZB_OneChunk_VeryFast_NoSlide_Preload @ 14f38a3c0

void __cdecl
oo2::Encode_LZB_OneChunk_VeryFast_NoSlide_Preload
          (long64 *param_1,int param_2,uchar *param_3,long64 param_4)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  int *piVar5;
  uint uVar6;
  
  piVar5 = (int *)(param_3 + -param_4);
  lVar3 = (longlong)(param_4 + (ulonglong)((uint)(param_4 >> 0x3f) & 0x1f)) >> 5;
  uVar6 = 0x10;
  do {
    lVar3 = lVar3 + -1;
    if (lVar3 < 1) {
      if (param_3 <= piVar5) {
        if (piVar5 != (int *)param_3) {
          iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\lzb_vfast.inl",0x44,
                                     "oo2::Encode_LZB_OneChunk_VeryFast_NoSlide_Preload",
                                     "ptr == rawBufStart");
          if (iVar2 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        return;
      }
      uVar6 = (int)uVar6 >> 1;
      lVar3 = ((longlong)param_3 - (longlong)piVar5) / (longlong)(int)uVar6;
      if (1 < uVar6) {
        lVar3 = lVar3 / 2;
      }
    }
    iVar2 = *piVar5;
    sVar4 = (short)piVar5;
    piVar5 = (int *)((longlong)piVar5 + (longlong)(int)uVar6);
    *(short *)((longlong)param_1 +
              (ulonglong)((uint)(iVar2 * -0x61c8864f) >> (0x20U - (char)param_2 & 0x3f)) * 2) =
         sVar4 - (short)param_3;
  } while( true );
}

// Encode_LZB_OneChunk_VeryFast_NoSlide_Sub @ 14f38a480

long64 __cdecl
oo2::Encode_LZB_OneChunk_VeryFast_NoSlide_Sub
          (uchar *param_1,long64 param_2,uchar *param_3,OodleLZB_CompressFast_Context *param_4,
          uchar *param_5,LZQuantumHeader *param_6)

{
  uint uVar1;
  ulonglong *puVar2;
  uchar *puVar3;
  short sVar4;
  uchar *puVar5;
  long64 *plVar6;
  uchar *puVar7;
  code *pcVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  long64 lVar11;
  ulonglong *puVar12;
  byte bVar13;
  int *piVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  char *pcVar18;
  ulonglong *puVar19;
  longlong lVar20;
  int iVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  short sVar24;
  ushort uVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar28;
  int local_res8;
  
  puVar3 = param_1 + param_2;
  if (puVar3 + -1 < param_5) {
    param_5 = puVar3 + -1;
  }
  puVar2 = (ulonglong *)((longlong)param_5 - 4);
  if (param_1 < puVar2) {
    puVar5 = param_4->m_zeroPosPtr;
    plVar6 = param_4->m_tablePos;
    iVar28 = param_4->m_tableSizeBits;
    puVar7 = param_4->m_windowBase;
    puVar12 = (ulonglong *)param_3;
    puVar22 = (ulonglong *)(param_1 + 1);
    if (param_1 != puVar5) {
      puVar22 = (ulonglong *)param_1;
    }
LAB_14f38a504:
    uVar27 = 0x13;
    do {
      uVar15 = *puVar22;
      sVar24 = (short)puVar22 - (short)puVar5;
      uVar9 = (ulonglong)((uint)((int)uVar15 * -0x61c8864f) >> (0x20U - (char)iVar28 & 0x1f));
      sVar4 = *(short *)((longlong)plVar6 + uVar9 * 2);
      *(short *)((longlong)plVar6 + uVar9 * 2) = sVar24;
      uVar25 = sVar24 - sVar4;
      if (uVar25 < 0xfff8) {
        piVar14 = (int *)((longlong)puVar22 - (ulonglong)uVar25);
        if (((int)uVar15 == *piVar14) && (uVar25 != 0)) goto LAB_14f38a56b;
      }
      puVar22 = (ulonglong *)((longlong)puVar22 + (uVar27 >> 4));
      puVar23 = (ulonglong *)param_1;
      uVar27 = uVar27 + 1;
      if (puVar2 <= puVar22) goto LAB_14f38a7ec;
    } while( true );
  }
LAB_14f38a85b:
  return param_2 + 1;
LAB_14f38a56b:
  local_res8 = (int)puVar7;
  local_res8 = (int)piVar14 - local_res8;
  iVar21 = (int)puVar22 - (int)param_1;
  iVar26 = iVar21;
  if (local_res8 <= iVar21) {
    iVar26 = local_res8;
  }
  uVar16 = -iVar26;
  if ((0x7fffffff < uVar16) &&
     (*(char *)((longlong)puVar22 + -1) == *(char *)((longlong)piVar14 + -1))) {
    iVar26 = -2;
    if ((longlong)(int)uVar16 < -1) {
      pcVar18 = (char *)((longlong)puVar22 + -2);
      do {
        if (*pcVar18 != pcVar18[(longlong)piVar14 - (longlong)puVar22]) break;
        pcVar18 = pcVar18 + -1;
        iVar26 = iVar26 + -1;
      } while ((longlong)(int)uVar16 <= (longlong)pcVar18 - (longlong)puVar22);
    }
    puVar22 = (ulonglong *)((longlong)puVar22 + (longlong)(iVar26 + 1));
    iVar21 = iVar21 + iVar26 + 1;
  }
  lVar20 = (longlong)iVar21;
  if (param_3 + param_2 <= (uchar *)(lVar20 + (longlong)puVar12)) goto LAB_14f38a85b;
  puVar19 = (ulonglong *)((longlong)puVar22 + 4);
  if (puVar19 < puVar2) {
    puVar10 = (ulonglong *)((longlong)puVar19 - (ulonglong)uVar25);
LAB_14f38a600:
    if (*puVar19 == *puVar10) goto code_r0x00014f38a60b;
    uVar15 = *puVar10 ^ *puVar19;
    uVar27 = 0;
    if (uVar15 != 0) {
      for (; (uVar15 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
      }
    }
    puVar19 = (ulonglong *)((longlong)puVar19 + (uVar27 >> 3));
  }
LAB_14f38a628:
  puVar10 = (ulonglong *)((longlong)puVar12 + 1);
  puVar23 = (ulonglong *)param_5;
  if (puVar19 < param_5) {
    puVar23 = puVar19;
  }
  iVar26 = (int)puVar23 - (int)puVar22;
  uVar16 = 0xf;
  if ((int)(iVar26 - 4U) < 0xf) {
    uVar16 = iVar26 - 4U;
  }
  if (uVar25 < 8) {
    iVar17 = 0xf;
    if (iVar21 < 0xf) {
      iVar17 = iVar21;
    }
    *(byte *)puVar12 = (byte)iVar17 | 0xf0;
    if (iVar17 == 0xf) {
      uVar1 = iVar21 - 0xf;
      if (uVar1 < 0xc0) {
        *(char *)puVar10 = (char)uVar1;
        puVar10 = (ulonglong *)((longlong)puVar12 + 2);
      }
      else {
        *(char *)puVar10 = (char)(uVar1 >> 8) + -0x40;
        *(char *)((longlong)puVar12 + 2) = (char)uVar1;
        puVar10 = (ulonglong *)((longlong)puVar12 + 3);
      }
    }
    puVar22 = (ulonglong *)(lVar20 + (longlong)puVar10);
    lVar20 = (longlong)param_1 - (longlong)puVar10;
    do {
      *puVar10 = *(ulonglong *)(lVar20 + (longlong)puVar10);
      puVar10 = puVar10 + 1;
    } while (puVar10 < puVar22);
    *(char *)puVar22 = (char)uVar16 * '\b' + -0x80 + (char)uVar25;
    puVar12 = (ulonglong *)((longlong)puVar22 + 1);
    if (uVar16 != 0xf) goto LAB_14f38a7c9;
    uVar16 = iVar26 - 0x13;
    if (uVar16 < 0xc0) {
      *(char *)puVar12 = (char)uVar16;
      puVar12 = (ulonglong *)((longlong)puVar22 + 2);
      goto LAB_14f38a7c9;
    }
    *(char *)puVar12 = (char)(uVar16 >> 8) + -0x40;
    *(char *)((longlong)puVar22 + 2) = (char)uVar16;
  }
  else {
    bVar13 = (char)uVar16 << 4;
    if (iVar21 < 0xf) {
      *(byte *)puVar12 = bVar13 | (byte)iVar21;
      *puVar10 = *(ulonglong *)param_1;
      if (8 < iVar21) {
        *(ulonglong *)((longlong)puVar12 + 9) = *(ulonglong *)((longlong)param_1 + 8);
      }
      puVar10 = (ulonglong *)((longlong)puVar10 + lVar20);
    }
    else {
      uVar1 = iVar21 - 0xf;
      *(byte *)puVar12 = bVar13 | 0xf;
      puVar22 = (ulonglong *)((longlong)puVar12 + 2);
      if (uVar1 < 0xc0) {
        *(char *)puVar10 = (char)uVar1;
      }
      else {
        *(char *)puVar10 = (char)(uVar1 >> 8) + -0x40;
        *(char *)puVar22 = (char)uVar1;
        puVar22 = (ulonglong *)((longlong)puVar12 + 3);
      }
      puVar10 = (ulonglong *)(lVar20 + (longlong)puVar22);
      do {
        uVar27 = *(ulonglong *)param_1;
        param_1 = (uchar *)((longlong)param_1 + 8);
        *puVar22 = uVar27;
        puVar22 = puVar22 + 1;
      } while (puVar22 < puVar10);
    }
    if (0xe < uVar16) {
      if (iVar26 - 0x13U < 0x7f) {
        *(char *)puVar10 = (char)(iVar26 - 0x13U);
        puVar12 = (ulonglong *)((longlong)puVar10 + 3);
        *(ushort *)((longlong)puVar10 + 1) = uVar25;
      }
      else {
        *(undefined1 *)puVar10 = 0x7f;
        uVar16 = iVar26 - 0x92;
        *(ushort *)((longlong)puVar10 + 1) = uVar25;
        puVar12 = (ulonglong *)((longlong)puVar10 + 4);
        if (uVar16 < 0xc0) {
          *(char *)((longlong)puVar10 + 3) = (char)uVar16;
        }
        else {
          *(char *)((longlong)puVar10 + 3) = (char)(uVar16 >> 8) + -0x40;
          *(char *)puVar12 = (char)uVar16;
          puVar12 = (ulonglong *)((longlong)puVar10 + 5);
        }
      }
      goto LAB_14f38a7c9;
    }
    *(ushort *)puVar10 = uVar25;
    puVar12 = puVar10;
  }
  puVar12 = (ulonglong *)((longlong)puVar12 + 2);
LAB_14f38a7c9:
  puVar22 = puVar23;
  param_1 = (uchar *)puVar23;
  if (puVar2 <= puVar23) goto LAB_14f38a7ec;
  goto LAB_14f38a504;
code_r0x00014f38a60b:
  puVar19 = puVar19 + 1;
  puVar10 = puVar10 + 1;
  if (puVar2 <= puVar19) goto LAB_14f38a628;
  goto LAB_14f38a600;
LAB_14f38a7ec:
  iVar28 = (int)puVar3 - (int)puVar23;
  if (iVar28 < 1) {
    iVar28 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\lzb_vfast.inl",0x15c,
                                "oo2::Encode_LZB_OneChunk_VeryFast_NoSlide_Sub","cur_lrl > 0");
    if (iVar28 != 0) {
      pcVar8 = (code *)swi(3);
      lVar11 = (*pcVar8)();
      return lVar11;
    }
  }
  else {
    if (param_3 + param_2 <= (uchar *)((longlong)iVar28 + (longlong)puVar12)) goto LAB_14f38a85b;
    puVar12 = (ulonglong *)LZB_OutputLast((uchar *)puVar12,iVar28,(uchar *)puVar23);
  }
  return (longlong)puVar12 - (longlong)param_3;
}

// Encode_LZB_OneChunk_VeryFast_Slide_Sub @ 14f38a8a0

long64 __cdecl
oo2::Encode_LZB_OneChunk_VeryFast_Slide_Sub
          (uchar *param_1,long64 param_2,uchar *param_3,OodleLZB_CompressFast_Context *param_4,
          uchar *param_5,LZQuantumHeader *param_6)

{
  uchar *puVar1;
  long64 *plVar2;
  uchar *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uchar *puVar7;
  ulonglong uVar8;
  code *pcVar9;
  byte bVar10;
  ulong64 uVar11;
  long64 lVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  byte *pbVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  undefined2 uVar25;
  int iVar26;
  int *piVar27;
  int local_res8;
  
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar11 = 0xffffffffffffffff;
  }
  else {
    uVar11 = (*fp_ThreadProfiler_Push)("oo2::Encode_LZB_OneChunk_VeryFast_Slide_Sub",0);
  }
  puVar1 = param_1 + param_2;
  if (puVar1 + -1 < param_5) {
    param_5 = puVar1 + -1;
  }
  if (param_1 < (int *)((longlong)param_5 + -4)) {
    plVar2 = param_4->m_tablePos;
    iVar23 = param_4->m_tableSizeBits;
    puVar3 = param_4->m_windowBase;
    uVar4 = param_4->m_windowMask;
    lVar5 = param_4->m_posThisReset;
    lVar6 = param_4->m_maxOffset;
    puVar7 = param_4->m_zeroPosPtr;
    piVar27 = (int *)param_1;
    if ((uVar4 == 0xffffffffffffffff) && (param_1 == puVar7)) {
      piVar27 = (int *)(param_1 + 1);
    }
    local_res8 = 0;
    pbVar19 = param_3;
    if (piVar27 <= (int *)((longlong)param_5 + -4)) {
      do {
        uVar24 = (longlong)piVar27 - (longlong)puVar7;
        iVar17 = 0;
        iVar26 = 0;
        uVar8 = plVar2[((uint)(*piVar27 * -0x61c8864f) >> 0xd ^ *piVar27 * -0x61c8864f) &
                       (1 << ((byte)iVar23 & 0x1f)) - 1U];
        if (lVar5 - lVar6 <= (longlong)uVar8) {
          if (((((uchar)*piVar27 == puVar3[uVar8 & uVar4]) &&
               (*(uchar *)((longlong)piVar27 + 1) == puVar3[uVar8 + 1 & uVar4])) &&
              (iVar17 = 0, *(uchar *)((longlong)piVar27 + 2) == puVar3[uVar8 + 2 & uVar4])) &&
             (*(uchar *)((longlong)piVar27 + 3) == puVar3[uVar8 + 3 & uVar4])) {
            iVar17 = 4;
            piVar15 = piVar27 + 1;
            if (piVar15 < param_5) {
              do {
                if ((uchar)*piVar15 !=
                    puVar3[(ulonglong)((uVar8 - (longlong)piVar27) + (longlong)piVar15) & uVar4])
                break;
                iVar17 = iVar17 + 1;
                piVar15 = (int *)((longlong)piVar15 + 1);
              } while (piVar15 < param_5);
            }
          }
          iVar26 = (int)uVar24 - (int)uVar8;
        }
        plVar2[((uint)(*piVar27 * -0x61c8864f) >> 0xd ^ *piVar27 * -0x61c8864f) &
               (1 << ((byte)iVar23 & 0x1f)) - 1U] = uVar24;
        if ((iVar17 == 0) || (0xfff7 < iVar26)) {
          local_res8 = local_res8 + 1;
          piVar27 = (int *)((longlong)piVar27 + (longlong)((local_res8 >> 4) + 1));
        }
        else {
          local_res8 = 0;
          iVar21 = (int)piVar27 - (int)param_1;
          if (param_3 + param_2 <= pbVar19 + iVar21) goto LAB_14f38ace9;
          uVar13 = 0xf;
          if ((int)(iVar17 - 4U) < 0xf) {
            uVar13 = iVar17 - 4U;
          }
          pbVar18 = pbVar19 + 1;
          if (iVar26 < 8) {
            iVar14 = 0xf;
            if (iVar21 < 0xf) {
              iVar14 = iVar21;
            }
            *pbVar19 = (byte)iVar14 | 0xf0;
            if (iVar14 == 0xf) {
              uVar22 = iVar21 - 0xf;
              if (uVar22 < 0xc0) {
                *pbVar18 = (byte)uVar22;
                pbVar18 = pbVar19 + 2;
              }
              else {
                *pbVar18 = (char)(uVar22 >> 8) - 0x40;
                pbVar19[2] = (byte)uVar22;
                pbVar18 = pbVar19 + 3;
              }
            }
            pbVar16 = pbVar18 + iVar21;
            lVar20 = (longlong)param_1 - (longlong)pbVar18;
            do {
              *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + lVar20);
              pbVar18 = pbVar18 + 8;
            } while (pbVar18 < pbVar16);
            *pbVar16 = (char)uVar13 * '\b' + -0x80 + (char)iVar26;
            pbVar19 = pbVar16 + 1;
            if (uVar13 == 0xf) {
              uVar13 = iVar17 - 0x13;
              if (0xbf < uVar13) {
                *pbVar19 = (char)(uVar13 >> 8) - 0x40;
                pbVar16[2] = (byte)uVar13;
                goto LAB_14f38ac3b;
              }
              *pbVar19 = (byte)uVar13;
              pbVar19 = pbVar16 + 2;
            }
          }
          else {
            bVar10 = (byte)(uVar13 << 4);
            if (iVar21 < 0xf) {
              *pbVar19 = bVar10 | (byte)iVar21;
              *(undefined8 *)pbVar18 = *(undefined8 *)param_1;
              if (8 < iVar21) {
                *(undefined8 *)(pbVar19 + 9) = *(undefined8 *)((longlong)param_1 + 8);
              }
              pbVar18 = pbVar18 + iVar21;
            }
            else {
              *pbVar19 = bVar10 | 0xf;
              uVar22 = iVar21 - 0xf;
              pbVar16 = pbVar19 + 2;
              if (uVar22 < 0xc0) {
                *pbVar18 = (byte)uVar22;
              }
              else {
                *pbVar18 = (char)(uVar22 >> 8) - 0x40;
                *pbVar16 = (byte)uVar22;
                pbVar16 = pbVar19 + 3;
              }
              pbVar18 = pbVar16 + iVar21;
              do {
                *(undefined8 *)pbVar16 = *(undefined8 *)param_1;
                param_1 = (uchar *)((longlong)param_1 + 8);
                pbVar16 = pbVar16 + 8;
              } while (pbVar16 < pbVar18);
            }
            uVar25 = (undefined2)iVar26;
            if (uVar13 < 0xf) {
              *(undefined2 *)pbVar18 = uVar25;
              pbVar19 = pbVar18;
LAB_14f38ac3b:
              pbVar19 = pbVar19 + 2;
            }
            else if (iVar17 - 0x13U < 0x7f) {
              *pbVar18 = (byte)(iVar17 - 0x13U);
              *(undefined2 *)(pbVar18 + 1) = uVar25;
              pbVar19 = pbVar18 + 3;
            }
            else {
              *pbVar18 = 0x7f;
              *(undefined2 *)(pbVar18 + 1) = uVar25;
              uVar13 = iVar17 - 0x92;
              pbVar19 = pbVar18 + 4;
              if (uVar13 < 0xc0) {
                pbVar18[3] = (byte)uVar13;
              }
              else {
                pbVar18[3] = (char)(uVar13 >> 8) - 0x40;
                *pbVar19 = (byte)uVar13;
                pbVar19 = pbVar18 + 5;
              }
            }
          }
          param_1 = (uchar *)((longlong)piVar27 + (longlong)iVar17);
          piVar27 = (int *)param_1;
        }
      } while (piVar27 <= (int *)((longlong)param_5 + -4));
    }
    iVar23 = (int)puVar1 - (int)param_1;
    if (iVar23 < 1) {
      iVar23 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\lzb_fast_generic.inl",0x1cf,
                                  "oo2::Encode_LZB_OneChunk_VeryFast_Slide_Sub","cur_lrl > 0");
      if (iVar23 != 0) {
        pcVar9 = (code *)swi(3);
        lVar12 = (*pcVar9)();
        return lVar12;
      }
    }
    else {
      if (param_3 + param_2 <= pbVar19 + iVar23) goto LAB_14f38ace9;
      pbVar19 = LZB_OutputLast(pbVar19,iVar23,param_1);
    }
    lVar12 = (longlong)pbVar19 - (longlong)param_3;
  }
  else {
LAB_14f38ace9:
    lVar12 = param_2 + 1;
  }
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(uVar11);
  }
  return lVar12;
}

// Encode_LZB_VeryFast @ 14f38ad30

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::Encode_LZB_VeryFast
          (uchar *param_1,long64 param_2,uchar *param_3,void *param_4,uchar *param_5,
          OodleLZ_CompressionLevel param_6,OodleLZ_CompressOptions *param_7)

{
  long64 lVar1;
  
  lVar1 = Encode_LZB_Chunker(Encode_LZB_OneChunk_VeryFast_NoSlide,param_1,param_2,param_3,param_4,
                             param_5,param_6,param_7);
  return lVar1;
}

// GetNumBytesZeroNeverAllR @ 14f38ad80

int __cdecl oo2::GetNumBytesZeroNeverAllR(ulong64 param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return (uint)(uVar1 >> 3) & 0x1fffffff;
}

// IsSlidingWindow @ 14f38ad90

bool __thiscall
oo2::OodleLZB_CompressFast_Context::IsSlidingWindow(OodleLZB_CompressFast_Context *this)

{
  return this->m_windowMask != -1;
}

// LZB_Compress @ 14f38ada0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::LZB_Compress(uchar *param_1,uchar *param_2,long64 param_3,OodleLZ_CompressionLevel param_4,
                 OodleLZ_CompressOptions *param_5,uchar *param_6,LRMCascade *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  OodleLZB_CompressFast_Context *pOVar4;
  code *pcVar5;
  uchar *puVar6;
  longlong lVar7;
  OodleLZ_CompressionLevel OVar8;
  long64 lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (param_5 == (OodleLZ_CompressOptions *)0x0) {
    param_5 = OodleLZ_CompressOptions_GetDefault(OodleLZ_Compressor_LZB16,param_4);
  }
  if (param_5->seekChunkReset == 0) {
    puVar6 = param_1;
    if (param_6 != (uchar *)0x0) {
      puVar6 = param_6;
    }
    lVar7 = 0xfff7;
    if ((longlong)param_1 - (longlong)puVar6 < 0xfff7) {
      lVar7 = (longlong)param_1 - (longlong)puVar6;
    }
    lVar9 = LZB_Compress_Sub(param_1,param_2,param_3,param_4,param_5,param_1 + -lVar7);
  }
  else {
    lVar9 = 0;
    if (0 < param_3) {
      iVar1 = param_5->seekChunkLen;
      do {
        lVar7 = param_3;
        if (iVar1 <= param_3) {
          lVar7 = (longlong)iVar1;
        }
        OVar8 = OodleLZ_CompressionLevel_None;
        if (0x17 < lVar7) {
          OVar8 = param_4;
        }
        if ((int)OVar8 < 1) {
          lVar3 = OodleLZ_CompressMemcpy_DecodeType(2,param_1,lVar7,param_2,param_1,param_5);
        }
        else {
          if ((int)OVar8 < 4) {
            if (OVar8 != OodleLZ_CompressionLevel_SuperFast) {
              iVar12 = 0x13;
              iVar11 = 0xe;
              iVar10 = 0x11;
              iVar2 = 0xc;
              goto LAB_14f38aead;
            }
            iVar2 = 0xd;
          }
          else {
            iVar12 = 0x14;
            iVar11 = 0xf;
            iVar10 = 0x14;
            iVar2 = 0xf;
LAB_14f38aead:
            iVar2 = GetLZMatchTableBits(lVar7,OVar8,param_5,iVar2,iVar10,iVar11,iVar12);
          }
          pOVar4 = Encode_LZB_Fast_Alloc(OVar8,param_1,lVar7,0,iVar2);
          if (pOVar4 == (OodleLZB_CompressFast_Context *)0x0) {
            lVar3 = -1;
          }
          else {
            if ((int)OVar8 < 3) {
              pcVar5 = Encode_LZB_OneChunk_VeryFast_NoSlide;
            }
            else {
              pcVar5 = Encode_LZB_OneChunk_Fast_NoSlide;
              if (OVar8 != OodleLZ_CompressionLevel_Fast) {
                pcVar5 = Encode_LZB_OneChunk_Normal_New;
              }
            }
            lVar3 = Encode_LZB_Chunker(pcVar5,param_1,lVar7,param_2,pOVar4,param_1,OVar8,param_5);
            (*g_fp_OodleCore_Plugin_Free)(pOVar4->m_tablePos);
            if (pOVar4->m_windowAlloc != (uchar *)0x0) {
              (*g_fp_OodleCore_Plugin_Free)(pOVar4->m_windowAlloc);
            }
            (*g_fp_OodleCore_Plugin_Free)(pOVar4);
          }
        }
        param_3 = param_3 - lVar7;
        param_1 = param_1 + lVar7;
        param_2 = param_2 + lVar3;
        lVar9 = lVar9 + lVar3;
      } while (0 < param_3);
    }
  }
  return lVar9;
}

// LZB_Compress_Sub @ 14f38afe0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::LZB_Compress_Sub
          (uchar *param_1,uchar *param_2,long64 param_3,OodleLZ_CompressionLevel param_4,
          OodleLZ_CompressOptions *param_5,uchar *param_6)

{
  int iVar1;
  long64 lVar2;
  OodleLZB_CompressFast_Context *pOVar3;
  code *pcVar4;
  OodleLZ_CompressionLevel OVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  OVar5 = OodleLZ_CompressionLevel_None;
  if (0x17 < param_3) {
    OVar5 = param_4;
  }
  if ((int)OVar5 < 1) {
    lVar2 = OodleLZ_CompressMemcpy_DecodeType(2,param_1,param_3,param_2,param_6,param_5);
    return lVar2;
  }
  if ((int)OVar5 < 4) {
    if (OVar5 == OodleLZ_CompressionLevel_SuperFast) {
      iVar1 = 0xd;
      goto LAB_14f38b0ba;
    }
    iVar8 = 0x13;
    iVar7 = 0xe;
    iVar6 = 0x11;
    iVar1 = 0xc;
  }
  else {
    iVar8 = 0x14;
    iVar7 = 0xf;
    iVar6 = 0x14;
    iVar1 = 0xf;
  }
  iVar1 = GetLZMatchTableBits(param_3,OVar5,param_5,iVar1,iVar6,iVar7,iVar8);
LAB_14f38b0ba:
  pOVar3 = Encode_LZB_Fast_Alloc(OVar5,param_1,param_3,(longlong)param_1 - (longlong)param_6,iVar1);
  if (pOVar3 == (OodleLZB_CompressFast_Context *)0x0) {
    lVar2 = -1;
  }
  else {
    if ((int)OVar5 < 3) {
      pcVar4 = Encode_LZB_OneChunk_VeryFast_NoSlide;
    }
    else if (OVar5 == OodleLZ_CompressionLevel_Fast) {
      pcVar4 = Encode_LZB_OneChunk_Fast_NoSlide;
    }
    else {
      pcVar4 = Encode_LZB_OneChunk_Normal_New;
    }
    lVar2 = Encode_LZB_Chunker(pcVar4,param_1,param_3,param_2,pOVar3,param_6,OVar5,param_5);
    (*g_fp_OodleCore_Plugin_Free)(pOVar3->m_tablePos);
    if (pOVar3->m_windowAlloc != (uchar *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pOVar3->m_windowAlloc);
    }
    (*g_fp_OodleCore_Plugin_Free)(pOVar3);
  }
  return lVar2;
}

// LZB_DecodeOneQuantum @ 14f38b180

int __cdecl
oo2::LZB_DecodeOneQuantum
          (uchar *param_1,uchar *param_2,uchar *param_3,uchar *param_4,LZQuantumHeader *param_5,
          uchar *param_6,long64 param_7,int param_8,uchar *param_9)

{
  long64 lVar1;
  
  if (param_8 != 0) {
    lVar1 = Decode_LZB_OneChunk_SW
                      (param_3,param_4,param_1,(longlong)param_2 - (longlong)param_1,param_6,param_7
                      );
    return (int)lVar1;
  }
  lVar1 = Decode_LZB_OneChunk(param_3,param_4,param_1,(longlong)param_2 - (longlong)param_1,param_9)
  ;
  return (int)lVar1;
}

// LZB_Fast_Hash_Reset @ 14f38b1e0

void __cdecl oo2::LZB_Fast_Hash_Reset(OodleLZB_CompressFast_Context *param_1,long64 param_2)

{
  rrMemSet64_Aligned(param_1->m_tablePos,param_2,(longlong)param_1->m_tableSize << 3);
  param_1->m_posThisReset = 0;
  return;
}

// LZB_IsAllowedMatch @ 14f38b210

bool __cdecl oo2::LZB_IsAllowedMatch(int param_1,int param_2)

{
  return param_2 < 0xfff8;
}

// LZB_MatchLen_Windowed @ 14f38b220

int __cdecl
oo2::LZB_MatchLen_Windowed
          (uchar *param_1,uchar *param_2,long64 param_3,uchar *param_4,long64 param_5)

{
  int iVar1;
  uchar *puVar2;
  
  if ((((*param_1 == param_4[param_3 & param_5]) && (param_1[1] == param_4[param_3 + 1U & param_5]))
      && (param_1[2] == param_4[param_3 + 2U & param_5])) &&
     (param_1[3] == param_4[param_3 + 3U & param_5])) {
    iVar1 = 4;
    puVar2 = param_1 + 4;
    if (puVar2 < param_2) {
      while (*puVar2 == param_4[(ulonglong)(puVar2 + (param_3 - (longlong)param_1)) & param_5]) {
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
        if (param_2 <= puVar2) {
          return iVar1;
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

// LZB_Output @ 14f38b2e0

uchar * __cdecl oo2::LZB_Output(uchar *param_1,int param_2,uchar *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  uchar *puVar2;
  byte bVar3;
  int iVar4;
  uchar *puVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  
  puVar2 = param_1 + 1;
  uVar6 = 0xf;
  if ((int)(param_4 - 4U) < 0xf) {
    uVar6 = param_4 - 4U;
  }
  if (param_5 < 8) {
    iVar4 = 0xf;
    if (param_2 < 0xf) {
      iVar4 = param_2;
    }
    *param_1 = (byte)iVar4 | 0xf0;
    if (iVar4 == 0xf) {
      uVar7 = param_2 - 0xf;
      if (uVar7 < 0xc0) {
        *puVar2 = (uchar)uVar7;
        puVar2 = param_1 + 2;
      }
      else {
        *puVar2 = (char)(uVar7 >> 8) + 0xc0;
        param_1[2] = (uchar)uVar7;
        puVar2 = param_1 + 3;
      }
    }
    puVar5 = puVar2 + param_2;
    do {
      uVar1 = *(undefined8 *)param_3;
      param_3 = param_3 + 8;
      *(undefined8 *)puVar2 = uVar1;
      puVar2 = puVar2 + 8;
    } while (puVar2 < puVar5);
    *puVar5 = (char)uVar6 * '\b' + -0x80 + (char)param_5;
    if (uVar6 == 0xf) {
      uVar6 = param_4 - 0x13;
      if (uVar6 < 0xc0) {
        puVar5[1] = (uchar)uVar6;
        return puVar5 + 2;
      }
      puVar5[1] = (char)(uVar6 >> 8) + 0xc0;
      puVar5[2] = (uchar)uVar6;
      return puVar5 + 3;
    }
    return puVar5 + 1;
  }
  bVar3 = (char)uVar6 << 4;
  if (param_2 < 0xf) {
    *param_1 = bVar3 | (byte)param_2;
    *(undefined8 *)puVar2 = *(undefined8 *)param_3;
    if (8 < param_2) {
      *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_3 + 8);
    }
    puVar2 = puVar2 + param_2;
  }
  else {
    uVar7 = param_2 - 0xf;
    *param_1 = bVar3 | 0xf;
    puVar5 = param_1 + 2;
    if (uVar7 < 0xc0) {
      *puVar2 = (uchar)uVar7;
    }
    else {
      *puVar2 = (char)(uVar7 >> 8) + 0xc0;
      *puVar5 = (uchar)uVar7;
      puVar5 = param_1 + 3;
    }
    puVar2 = puVar5 + param_2;
    do {
      uVar1 = *(undefined8 *)param_3;
      param_3 = param_3 + 8;
      *(undefined8 *)puVar5 = uVar1;
      puVar5 = puVar5 + 8;
    } while (puVar5 < puVar2);
  }
  uVar8 = (undefined2)param_5;
  if (uVar6 < 0xf) {
    *(undefined2 *)puVar2 = uVar8;
    return puVar2 + 2;
  }
  if (param_4 - 0x13U < 0x7f) {
    *puVar2 = (uchar)(param_4 - 0x13U);
    *(undefined2 *)(puVar2 + 1) = uVar8;
    return puVar2 + 3;
  }
  *puVar2 = '\x7f';
  uVar6 = param_4 - 0x92;
  *(undefined2 *)(puVar2 + 1) = uVar8;
  if (uVar6 < 0xc0) {
    puVar2[3] = (uchar)uVar6;
    return puVar2 + 4;
  }
  puVar2[3] = (char)(uVar6 >> 8) + 0xc0;
  puVar2[4] = (uchar)uVar6;
  return puVar2 + 5;
}

// LZB_OutputLast @ 14f38b500

uchar * __cdecl oo2::LZB_OutputLast(uchar *param_1,int param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  uchar *_Dst;
  
  _Dst = param_1 + 1;
  uVar2 = 0xf;
  if (param_2 < 0xf) {
    uVar2 = param_2;
  }
  uVar1 = 9;
  if (9 < uVar2) {
    uVar1 = uVar2;
  }
  *param_1 = (uchar)uVar1;
  if (uVar1 == 0xf) {
    uVar2 = param_2 - 0xf;
    if (uVar2 < 0xc0) {
      *_Dst = (uchar)uVar2;
      _Dst = param_1 + 2;
    }
    else {
      *_Dst = (char)(uVar2 >> 8) + 0xc0;
      param_1[2] = (uchar)uVar2;
      _Dst = param_1 + 3;
    }
  }
  memmove(_Dst,param_3,(longlong)param_2);
  return _Dst + param_2;
}

// LZB_SecondHash4 @ 14f38b580

uint __cdecl oo2::LZB_SecondHash4(uint param_1)

{
  return (param_1 * 0x5bd1e995 >> 0xb) + param_1 * 0x5bd1e995;
}

// OodleFree @ 14f38b5a0

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f38b5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleFreeSized @ 14f38b5b0

void __cdecl oo2::OodleFreeSized(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f38b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleLZB_CompressFast_AllocContext @ 14f38b5c0

OodleLZB_CompressFast_Context * __cdecl
oo2::OodleLZB_CompressFast_AllocContext(int param_1,int param_2,uchar *param_3)

{
  int iVar1;
  OodleLZB_CompressFast_Context *pOVar2;
  long64 *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  pOVar2 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x58,0x10);
  if (pOVar2 == (OodleLZB_CompressFast_Context *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0x58);
  }
  if (pOVar2 == (OodleLZB_CompressFast_Context *)0x0) {
    pOVar2 = (OodleLZB_CompressFast_Context *)0x0;
  }
  else {
    iVar1 = 0x12;
    if (0 < param_1) {
      iVar1 = param_1;
    }
    pOVar2->m_dicBase = (uchar *)0x0;
    pOVar2->m_dicSize = 0;
    pOVar2->m_tableSizeBits = iVar1;
    iVar1 = 1 << ((byte)iVar1 & 0x1f);
    pOVar2->m_tableSize = iVar1;
    uVar4 = (longlong)iVar1 * 8;
    uVar6 = 0x40;
    if (0x40 < uVar4) {
      uVar6 = uVar4;
    }
    plVar3 = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar6,0x40);
    if (plVar3 == (long64 *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(uVar6);
    }
    pOVar2->m_tablePos = plVar3;
    pOVar2->m_windowAlloc = (uchar *)0x0;
    if (param_2 == 0) {
      pOVar2->m_windowSize = 0;
      pOVar2->m_windowMask = -1;
    }
    else {
      pOVar2->m_windowSize = 0x10000;
      pOVar2->m_windowMask = 0xffff;
      if (param_3 == (uchar *)0x0) {
        param_3 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x10008,0x10);
        if (param_3 == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
          Oodle_Core_Malloc_Failed(0x10008);
        }
        pOVar2->m_windowAlloc = param_3;
      }
    }
    pOVar2->m_windowBase = param_3;
    pOVar2->m_posThisReset = 0;
    pOVar2->m_maxOffset = 0x40000000;
    pOVar2->m_zeroPosPtr = param_3;
  }
  lVar5 = (longlong)pOVar2->m_tableSize << 3;
  if (pOVar2->m_windowMask == -1) {
    rrMemSet64_Aligned(pOVar2->m_tablePos,0,lVar5);
    pOVar2->m_windowBase = (uchar *)0x0;
  }
  else {
    rrMemSet64_Aligned(pOVar2->m_tablePos,0xffffffff80000001,lVar5);
  }
  pOVar2->m_posThisReset = 0;
  return pOVar2;
}

// OodleLZB_CompressFast_FreeContext @ 14f38b780

void __cdecl oo2::OodleLZB_CompressFast_FreeContext(OodleLZB_CompressFast_Context *param_1)

{
  (*g_fp_OodleCore_Plugin_Free)(param_1->m_tablePos);
  if (param_1->m_windowAlloc != (uchar *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(param_1->m_windowAlloc);
  }
                    /* WARNING: Could not recover jumptable at 0x00014f38b7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleLZB_CompressFast_ResetContext @ 14f38b7d0

void __cdecl oo2::OodleLZB_CompressFast_ResetContext(OodleLZB_CompressFast_Context *param_1)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_1->m_tableSize << 3;
  if (param_1->m_windowMask != -1) {
    rrMemSet64_Aligned(param_1->m_tablePos,0xffffffff80000001,lVar1);
    param_1->m_posThisReset = 0;
    return;
  }
  rrMemSet64_Aligned(param_1->m_tablePos,0,lVar1);
  param_1->m_windowBase = (uchar *)0x0;
  param_1->m_posThisReset = 0;
  return;
}

// OodleLZB_CompressFast_ResetContext @ 14f38b820

void __cdecl
oo2::OodleLZB_CompressFast_ResetContext
          (OodleLZB_CompressFast_Context *param_1,void *param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == (void *)0x0) {
    iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\lzb.cpp",0x3d0,
                               "oo2::OodleLZB_CompressFast_ResetContext","window != NULL");
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->m_windowAlloc != (uchar *)0x0) {
    iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\lzb.cpp",0x3d1,
                               "oo2::OodleLZB_CompressFast_ResetContext","fh->m_windowAlloc == NULL"
                              );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->m_windowBase = param_2;
  lVar4 = 0;
  if (param_4 == 0) {
    lVar3 = -1;
  }
  else {
    if ((param_3 & param_3 - 1U) != 0) {
      iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\lzb.cpp",0x3d6,
                                 "oo2::OodleLZB_CompressFast_ResetContext",
                                 "rrIsPow2(slidingWindowSize)");
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar3 = (longlong)(param_3 + -1);
    lVar4 = (longlong)param_3;
  }
  param_1->m_windowSize = lVar4;
  param_1->m_windowMask = lVar3;
  lVar4 = (longlong)param_1->m_tableSize << 3;
  if (lVar3 == -1) {
    rrMemSet64_Aligned(param_1->m_tablePos,0,lVar4);
    param_1->m_windowBase = (uchar *)0x0;
  }
  else {
    rrMemSet64_Aligned(param_1->m_tablePos,0xffffffff80000001,lVar4);
  }
  param_1->m_posThisReset = 0;
  return;
}

// OodleLZB_CompressFast_WithContext @ 14f38b940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::OodleLZB_CompressFast_WithContext
          (OodleLZB_CompressFast_Context *param_1,void *param_2,long64 param_3,void *param_4,
          OodleLZ_CompressionLevel param_5,OodleLZ_CompressOptions *param_6,
          OodleLZ_EncoderHeaders param_7)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long64 lVar6;
  size_t _Size;
  ulonglong uVar7;
  size_t sVar8;
  uchar *_Dst;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte *_Dst_00;
  byte *pbVar12;
  longlong lVar13;
  undefined1 auStack_108 [32];
  byte *local_e8;
  LZQuantumHeader *local_e0;
  int local_d8;
  int local_d4;
  OodleLZ_CompressOptions *local_d0;
  code *local_c8;
  void *local_c0;
  byte *local_b8;
  longlong local_b0;
  LZQuantumHeader local_a8;
  LZBlockHeader local_88;
  LZBlockHeader local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  lVar13 = param_1->m_windowMask;
  local_d0 = param_6;
  local_c0 = param_4;
  local_b0 = lVar13;
  if (param_5 == OodleLZ_CompressionLevel_Fast) {
    local_c8 = Encode_LZB_OneChunk_Fast_Slide_Sub;
    if (lVar13 != -1) goto LAB_14f38ba22;
    local_c8 = Encode_LZB_OneChunk_Fast_NoSlide_Sub;
  }
  else {
    if (2 < (int)param_5) {
      iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\lzb.cpp",0x406,
                                 "oo2::OodleLZB_CompressFast_WithContext",
                                 "bad level_fast_or_veryfast");
      if (iVar2 == 0) {
        return -1;
      }
      pcVar1 = (code *)swi(3);
      lVar6 = (*pcVar1)();
      return lVar6;
    }
    if (lVar13 != -1) {
      local_c8 = Encode_LZB_OneChunk_VeryFast_Slide_Sub;
      goto LAB_14f38ba22;
    }
    local_c8 = Encode_LZB_OneChunk_VeryFast_NoSlide_Sub;
  }
  if (((param_1->m_posThisReset != 0) &&
      (param_2 != param_1->m_zeroPosPtr + param_1->m_posThisReset)) &&
     (iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\lzb.cpp",0x40d,
                                 "oo2::OodleLZB_CompressFast_WithContext",
                                 "fh->m_posThisReset == 0 || rawBuf == (fh->m_zeroPosPtr + fh->m_posThisReset)"
                                ), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    lVar6 = (*pcVar1)();
    return lVar6;
  }
  if (param_1->m_windowBase == (uchar *)0x0) {
    param_1->m_zeroPosPtr = param_2;
    param_1->m_dicBase = param_2;
    param_1->m_windowBase = param_2;
  }
LAB_14f38ba22:
  local_d4 = local_d0->seekChunkReset;
  iVar2 = local_d0->sendQuantumCRCs;
  pbVar12 = (byte *)(param_3 + (longlong)param_2);
  local_d8 = iVar2;
  local_b8 = pbVar12;
  if ((param_7 == OodleLZ_EncoderHeaders_OnlyFirstBlockHeader) && (param_1->m_posThisReset == 0)) {
    if ((local_d4 != 0) &&
       (iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\lzb.cpp",0x426,
                                   "oo2::OodleLZB_CompressFast_WithContext","! seekChunkReset"),
       iVar3 != 0)) {
      pcVar1 = (code *)swi(3);
      lVar6 = (*pcVar1)();
      return lVar6;
    }
    local_88.offsetShift = 0;
    local_88.chunkIsMemcpy = 0;
    local_88.chunkIsReset = 1;
    local_88.version = 4;
    local_88.decodeType = 2;
    local_88.chunkHasQuantumCRCs = iVar2;
    param_4 = LZBlockHeader_Put(&local_88,param_4);
  }
  if (param_2 < pbVar12) {
    lVar9 = param_1->m_posThisReset;
    do {
      if ((local_d4 != 0) && (local_d0->seekChunkLen <= lVar9)) {
        if ((lVar9 != local_d0->seekChunkLen) &&
           (iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\lzb.cpp",0x437,
                                       "oo2::OodleLZB_CompressFast_WithContext",
                                       "fh->m_posThisReset == pOptions->seekChunkLen"), iVar3 != 0))
        {
          pcVar1 = (code *)swi(3);
          lVar6 = (*pcVar1)();
          return lVar6;
        }
        lVar9 = (longlong)param_1->m_tableSize << 3;
        if (param_1->m_windowMask == -1) {
          rrMemSet64_Aligned(param_1->m_tablePos,0,lVar9);
          param_1->m_windowBase = (uchar *)0x0;
        }
        else {
          rrMemSet64_Aligned(param_1->m_tablePos,0xffffffff80000001,lVar9);
        }
        param_1->m_posThisReset = 0;
        if (lVar13 == -1) {
          param_1->m_windowBase = param_2;
          param_1->m_zeroPosPtr = param_2;
        }
      }
      if ((param_7 == OodleLZ_EncoderHeaders_Default) && ((param_1->m_posThisReset & 0x3ffffU) == 0)
         ) {
        local_70.offsetShift = 0;
        local_70.chunkIsMemcpy = 0;
        local_70.version = 4;
        local_70.decodeType = 2;
        local_70.chunkIsReset = (int)(param_1->m_posThisReset == 0);
        local_70.chunkHasQuantumCRCs = iVar2;
        param_4 = LZBlockHeader_Put(&local_70,param_4);
      }
      uVar10 = param_1->m_posThisReset;
      sVar8 = 0x4000;
      if ((longlong)pbVar12 - (longlong)param_2 < 0x4000) {
        sVar8 = (longlong)pbVar12 - (longlong)param_2;
      }
      if (lVar13 == -1) {
        if (param_1->m_zeroPosPtr + (uVar10 & 0xfffffffffffc0000) + 0x40000 < pbVar12) {
          pbVar12 = param_1->m_zeroPosPtr + (uVar10 & 0xfffffffffffc0000) + 0x40000;
        }
        _Size = sVar8;
        uVar11 = uVar10;
        _Dst_00 = param_2;
        pbVar12 = pbVar12 + -8;
      }
      else {
        uVar10 = uVar10 & param_1->m_windowMask;
        _Size = param_1->m_windowSize - uVar10;
        if ((longlong)sVar8 <= (longlong)_Size) {
          _Size = sVar8;
        }
        _Dst_00 = param_1->m_windowBase + uVar10;
        memcpy(_Dst_00,param_2,_Size);
        uVar10 = param_1->m_posThisReset;
        pbVar12 = _Dst_00 + _Size;
        uVar7 = param_1->m_windowSize - _Size;
        uVar11 = uVar10;
        if ((longlong)uVar7 < (longlong)uVar10) {
          uVar11 = uVar7;
        }
        if ((param_1->m_windowAlloc == (uchar *)0x0) &&
           (param_1->m_windowBase + param_1->m_windowSize + -8 <= pbVar12)) {
          pbVar12 = param_1->m_windowBase + param_1->m_windowSize + -8;
        }
      }
      param_1->m_maxOffset = uVar11;
      local_a8.wholeMatchFlag = 0;
      local_a8._12_4_ = 0;
      param_1->m_zeroPosPtr = _Dst_00 + -uVar10;
      iVar3 = (int)_Size;
      local_a8.crc = 0;
      local_a8.compLen = iVar3 - 1;
      local_a8.wholeMatchOffset = 0;
      local_a8.huffFlag = 0;
      local_a8.extraFlag = 0;
      iVar4 = MemsetQuantum_Test(_Dst_00,iVar3);
      iVar2 = local_d8;
      if (iVar4 == 0) {
        iVar2 = LZQuantumHeader_Put(param_4,&local_a8,local_d8,iVar3);
        _Dst = (uchar *)((longlong)param_4 + (longlong)iVar2);
        local_e0 = &local_a8;
        local_e8 = pbVar12;
        sVar8 = (*local_c8)(_Dst_00,_Size,_Dst,param_1);
        if ((longlong)_Size <= (longlong)sVar8) {
          memcpy(_Dst,_Dst_00,_Size);
          local_a8._24_8_ = local_a8._24_8_ & 0xffffffff00000000;
          sVar8 = _Size;
        }
        iVar2 = local_d8;
        local_a8.compLen = (int)sVar8;
        if (local_d8 != 0) {
          uVar5 = LZQuantumHeader_ComputeCRC(_Dst,sVar8);
          local_a8.crc = uVar5;
        }
        LZQuantumHeader_Put(param_4,&local_a8,iVar2,iVar3);
        param_4 = _Dst + sVar8;
      }
      else {
        local_a8._0_8_ = (ulonglong)*_Dst_00 << 0x20;
        iVar3 = LZQuantumHeader_Put(param_4,&local_a8,local_d8,iVar3);
        param_4 = (void *)((longlong)param_4 + (longlong)iVar3);
      }
      param_1->m_posThisReset = param_1->m_posThisReset + _Size;
      param_2 = (void *)((longlong)param_2 + _Size);
      lVar9 = param_1->m_posThisReset;
      pbVar12 = local_b8;
      lVar13 = local_b0;
    } while (param_2 < local_b8);
  }
  return (longlong)param_4 - (longlong)local_c0;
}

// OodleMalloc @ 14f38bdc0

void * __cdecl oo2::OodleMalloc(long64 param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,0x10);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// OodleMallocAligned @ 14f38be10

void * __cdecl oo2::OodleMallocAligned(long64 param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// RR_GET16_NATIVE @ 14f38be50

ushort __cdecl oo2::RR_GET16_NATIVE(void *param_1)

{
  return *(ushort *)param_1;
}

// RR_GET32_NATIVE @ 14f38be60

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14f38be70

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT16_NATIVE @ 14f38be80

void __cdecl oo2::RR_PUT16_NATIVE(void *param_1,ushort param_2)

{
  *(ushort *)param_1 = param_2;
  return;
}

// RR_PUT32_NATIVE @ 14f38be90

void __cdecl oo2::RR_PUT32_NATIVE(void *param_1,uint param_2)

{
  *(uint *)param_1 = param_2;
  return;
}

// RR_PUT64_NATIVE @ 14f38bea0

void __cdecl oo2::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// S32_checkA @ 14f38beb0

int __cdecl oo2::S32_checkA(long64 param_1)

{
  return (int)param_1;
}

// ThreadProfiler_Pop @ 14f38bec0

void __cdecl oo2::ThreadProfiler_Pop(ulong64 param_1)

{
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f38becc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*fp_ThreadProfiler_Pop)(param_1);
    return;
  }
  return;
}

// ThreadProfiler_Push @ 14f38bee0

ulong64 __cdecl oo2::ThreadProfiler_Push(char *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  if (fp_ThreadProfiler_Push != (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f38beec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*fp_ThreadProfiler_Push)(param_1,param_2);
    return uVar1;
  }
  return 0xffffffffffffffff;
}

// U8_void @ 14f38bf00

uchar * __cdecl oo2::U8_void(void *param_1)

{
  return param_1;
}

// U8_void @ 14f38bf10

uchar * __cdecl oo2::U8_void(void *param_1)

{
  return param_1;
}

// copy_match_memset @ 14f38bf20

void __cdecl oo2::copy_match_memset(uchar *param_1,int param_2,long64 param_3)

{
  ulonglong uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = (uint *)(param_1 + 4);
  uVar3 = ((param_2 << 8 | param_2) << 8 | param_2) << 8 | param_2;
  *(uint *)param_1 = uVar3;
  uVar1 = (ulonglong)((longlong)(param_1 + param_3) + (3 - (longlong)puVar2)) >> 2;
  if (param_1 + param_3 < puVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}

// copy_match_simple @ 14f38bf80

void __cdecl oo2::copy_match_simple(uchar *param_1,uchar *param_2,long64 param_3)

{
  uchar uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  return;
}

// copy_match_wrap @ 14f38bfb0

void __cdecl
oo2::copy_match_wrap(uchar *param_1,uchar *param_2,long64 param_3,uchar *param_4,long64 param_5)

{
  uchar *puVar1;
  
  if (0 < param_3) {
    do {
      puVar1 = param_2 + 1;
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      param_2 = puVar1;
      if (puVar1 == param_4 + param_5) {
        param_2 = param_4;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// copy_no_overlap_long @ 14f38bfe0

void __cdecl oo2::copy_no_overlap_long(uchar *param_1,uchar *param_2,long64 param_3)

{
  uchar *puVar1;
  longlong lVar2;
  
  puVar1 = param_1 + param_3;
  lVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    *(undefined8 *)param_1 = *(undefined8 *)(param_1 + lVar2);
    param_1 = param_1 + 8;
  } while (param_1 < puVar1);
  return;
}

// copy_no_overlap_nooverrun @ 14f38c010

void __cdecl oo2::copy_no_overlap_nooverrun(uchar *param_1,uchar *param_2,long64 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fa29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memmove(param_1,param_2,param_3);
  return;
}

// copy_overlap8_nooverrun @ 14f38c020

void __cdecl oo2::copy_overlap8_nooverrun(uchar *param_1,uchar *param_2,long64 param_3)

{
  uchar *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  uchar *puVar4;
  
  if (7 < param_3) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar2 = (ulonglong)((uint)param_3 & 7);
    puVar1 = param_1 + uVar2;
    puVar4 = puVar1 + (param_3 & 0xfffffffffffffff8);
    lVar3 = uVar2 - (longlong)puVar1;
    do {
      *(undefined8 *)puVar1 = *(undefined8 *)(param_2 + lVar3 + (longlong)puVar1);
      puVar1 = puVar1 + 8;
    } while (puVar1 < puVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00015018fa29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memmove(param_1,param_2,param_3);
  return;
}

// hmf_hash4_32 @ 14f38c070

uint __cdecl oo2::hmf_hash4_32(uint param_1)

{
  return param_1 * -0x61c8864f >> 0xd ^ param_1 * -0x61c8864f;
}

// rrCtz64 @ 14f38c090

uint __cdecl oo2::rrCtz64(ulong64 param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  return (uint)lVar1;
}

// rrCtzBytes64 @ 14f38c0a0

uint __cdecl oo2::rrCtzBytes64(ulong64 param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return (uint)(uVar1 >> 3) & 0x1fffffff;
}

// rrIsPow2 @ 14f38c0b0

int __cdecl oo2::rrIsPow2(uint param_1)

{
  return (int)((param_1 & param_1 - 1) == 0);
}

// rrPrintf_nop @ 14f38c0d0

void __cdecl oo2::rrPrintf_nop(void)

{
  return;
}

// rrPtrDiff32 @ 14f38c0e0

int __cdecl oo2::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rrPtrDiff @ 14f38c0f0

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// dtor$0 @ 1502849a0

void `oo2::Encode_LZB_Chunker'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0xb8));
  return;
}

// dtor$0 @ 1502849c0

void `oo2::Encode_LZB_Fast_Alloc'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x30),eRRPlacementNew,*(void **)(param_2 + 0x28));
  return;
}

// dtor$1 @ 150284a00

void `oo2::Encode_LZB_Fast_Alloc'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x98));
  return;
}

// dtor$0 @ 150284a20

void `oo2::Encode_LZB_OneChunk_Fast_Slide_Sub'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x88));
  return;
}

// dtor$0 @ 150284a40

void `oo2::Encode_LZB_OneChunk_Normal_New_Sub'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x68));
  return;
}

// dtor$0 @ 150284a60

void `oo2::Encode_LZB_OneChunk_VeryFast_Slide_Sub'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x58));
  return;
}

// dtor$0 @ 150284a80

void `oo2::OodleLZB_CompressFast_AllocContext'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x28),eRRPlacementNew,*(void **)(param_2 + 0x68));
  return;
}

