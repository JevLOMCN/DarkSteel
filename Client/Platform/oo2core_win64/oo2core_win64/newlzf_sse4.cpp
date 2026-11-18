// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 14

// newlz_literals_copy8<1> @ 14f3c3490

void __cdecl
oo2::`anonymous_namespace'::newlz_literals_copy8<1>(uchar *param_1,uchar *param_2,uchar *param_3)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_3;
  return;
}

// newlz_literals_copy8<0> @ 14f3c34a0

void __cdecl
oo2::`anonymous_namespace'::newlz_literals_copy8<0>(uchar *param_1,uchar *param_2,uchar *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)param_3;
  *(ulonglong *)param_1 =
       CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30),
                         CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                  (char)((ulonglong)uVar2 >> 0x28),
                                  CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                           (char)((ulonglong)uVar2 >> 0x20),
                                           CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                    (char)((ulonglong)uVar2 >> 0x18),
                                                    CONCAT12((char)((ulonglong)uVar1 >> 0x10) +
                                                             (char)((ulonglong)uVar2 >> 0x10),
                                                             CONCAT11((char)((ulonglong)uVar1 >> 8)
                                                                      + (char)((ulonglong)uVar2 >> 8
                                                                              ),
                                                                      (char)uVar1 + (char)uVar2)))))
                        ));
  return;
}

// RR_GET16_NATIVE @ 14f3c34c0

ushort __cdecl oo2::RR_GET16_NATIVE(void *param_1)

{
  return *(ushort *)param_1;
}

// RR_GET32_NATIVE @ 14f3c34d0

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14f3c34e0

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT64_NATIVE @ 14f3c34f0

void __cdecl oo2::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// newLZF_decode_parse_raw_sse4 @ 14f3c3500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uchar * __cdecl
oo2::newLZF_decode_parse_raw_sse4
          (uchar *param_1,long64 param_2,uchar *param_3,uchar *param_4,uchar *param_5,
          newLZF_chunk_arrays *param_6,int *param_7)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  ushort uVar19;
  undefined1 auVar20 [12];
  undefined8 uVar21;
  undefined1 *puVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  uchar *puVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  longlong lVar43;
  ushort *puVar44;
  ushort *puVar45;
  char *pcVar46;
  uchar *puVar47;
  uchar *puVar48;
  uchar *puVar49;
  ushort *puVar50;
  ushort *puVar51;
  uchar *puVar52;
  size_t sVar53;
  char *pcVar54;
  ushort *puVar55;
  ulonglong uVar56;
  undefined1 (*pauVar57) [16];
  undefined1 (*pauVar58) [16];
  ushort *puVar59;
  undefined8 *puVar60;
  int iVar61;
  ulonglong uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auStack_228 [32];
  undefined1 (*local_208) [16];
  ushort *local_200;
  uchar *local_1f8;
  uchar *local_1f0;
  uchar *local_1e8;
  ushort *local_1e0;
  uchar *local_1d8;
  ushort *local_1d0;
  uchar *local_1c8;
  undefined1 (*local_1c0) [16];
  undefined1 (*local_1b8) [16];
  uint local_1b0;
  int *local_1a8;
  uchar *local_1a0;
  newLZF_chunk_arrays *local_198;
  ushort *local_190;
  ushort local_168 [72];
  uchar local_d7 [127];
  ulonglong local_58;
  
  bVar37 = UNK_1531dbfff;
  bVar36 = UNK_1531dbffe;
  bVar35 = UNK_1531dbffd;
  bVar34 = UNK_1531dbffc;
  bVar33 = UNK_1531dbffb;
  bVar32 = UNK_1531dbffa;
  bVar31 = UNK_1531dbff9;
  bVar30 = UNK_1531dbff8;
  bVar29 = UNK_1531dbff7;
  bVar28 = UNK_1531dbff6;
  bVar27 = UNK_1531dbff5;
  bVar26 = UNK_1531dbff4;
  bVar25 = UNK_1531dbff3;
  bVar24 = UNK_1531dbff2;
  bVar23 = UNK_1531dbff1;
  bVar2 = __xmm_17171717171717171717171717171717;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_1f8 = param_1 + param_2;
  uVar62 = (ulonglong)(uint)*param_7;
  local_198 = param_6;
  local_1a8 = param_7;
  local_200 = (ushort *)param_6->off16_end;
  local_1f0 = param_6->literals_end;
  local_1b8 = (undefined1 (*) [16])param_6->packets_end;
  pauVar58 = (undefined1 (*) [16])param_6->escape_offsets_ptr;
  puVar52 = param_6->literals_ptr;
  pauVar57 = (undefined1 (*) [16])param_6->packets_ptr;
  puVar59 = (ushort *)param_6->off16_ptr;
  puVar51 = (ushort *)param_6->excesses_ptr;
  local_1d0 = (ushort *)param_6->excesses_end;
  local_1c0 = (undefined1 (*) [16])param_6->escape_offsets_end;
  sVar53 = (longlong)local_1f0 - (longlong)puVar52;
  if (0x71 < (longlong)sVar53) {
    sVar53 = 0x71;
  }
  local_1d8 = local_1f0 + -sVar53;
  local_208 = pauVar58;
  local_1e8 = param_3;
  local_1c8 = param_1;
  local_1a0 = local_1f0;
  local_190 = local_200;
  memcpy(local_d7 + -sVar53,local_1d8,sVar53);
  local_d7[0x70] = 0;
  sVar53 = (longlong)local_200 - (longlong)puVar59;
  local_d7[0] = '\0';
  local_d7[1] = '\0';
  local_d7[2] = '\0';
  local_d7[3] = '\0';
  local_d7[4] = '\0';
  local_d7[5] = '\0';
  local_d7[6] = '\0';
  local_d7[7] = '\0';
  local_d7[8] = '\0';
  local_d7[9] = '\0';
  local_d7[10] = '\0';
  local_d7[0xb] = '\0';
  local_d7[0xc] = '\0';
  local_d7[0xd] = '\0';
  local_d7[0xe] = '\0';
  local_d7[0xf] = '\0';
  if (0x20 < (longlong)sVar53) {
    sVar53 = 0x20;
  }
  local_1e0 = (ushort *)((longlong)local_200 - sVar53);
  local_d7[0x10] = '\0';
  local_d7[0x11] = '\0';
  local_d7[0x12] = '\0';
  local_d7[0x13] = '\0';
  local_d7[0x14] = '\0';
  local_d7[0x15] = '\0';
  local_d7[0x16] = '\0';
  local_d7[0x17] = '\0';
  local_d7[0x18] = '\0';
  local_d7[0x19] = '\0';
  local_d7[0x1a] = '\0';
  local_d7[0x1b] = '\0';
  local_d7[0x1c] = '\0';
  local_d7[0x1d] = '\0';
  local_d7[0x1e] = '\0';
  local_d7[0x1f] = '\0';
  local_d7[0x20] = '\0';
  local_d7[0x21] = '\0';
  local_d7[0x22] = '\0';
  local_d7[0x23] = '\0';
  local_d7[0x24] = '\0';
  local_d7[0x25] = '\0';
  local_d7[0x26] = '\0';
  local_d7[0x27] = '\0';
  local_d7[0x28] = '\0';
  local_d7[0x29] = '\0';
  local_d7[0x2a] = '\0';
  local_d7[0x2b] = '\0';
  local_d7[0x2c] = '\0';
  local_d7[0x2d] = '\0';
  local_d7[0x2e] = '\0';
  local_d7[0x2f] = '\0';
  local_d7[0x30] = '\0';
  local_d7[0x31] = '\0';
  local_d7[0x32] = '\0';
  local_d7[0x33] = '\0';
  local_d7[0x34] = '\0';
  local_d7[0x35] = '\0';
  local_d7[0x36] = '\0';
  local_d7[0x37] = '\0';
  local_d7[0x38] = '\0';
  local_d7[0x39] = '\0';
  local_d7[0x3a] = '\0';
  local_d7[0x3b] = '\0';
  local_d7[0x3c] = '\0';
  local_d7[0x3d] = '\0';
  local_d7[0x3e] = '\0';
  local_d7[0x3f] = '\0';
  local_d7[0x40] = '\0';
  local_d7[0x41] = '\0';
  local_d7[0x42] = '\0';
  local_d7[0x43] = '\0';
  local_d7[0x44] = '\0';
  local_d7[0x45] = '\0';
  local_d7[0x46] = '\0';
  local_d7[0x47] = '\0';
  local_d7[0x48] = '\0';
  local_d7[0x49] = '\0';
  local_d7[0x4a] = '\0';
  local_d7[0x4b] = '\0';
  local_d7[0x4c] = '\0';
  local_d7[0x4d] = '\0';
  local_d7[0x4e] = '\0';
  local_d7[0x4f] = '\0';
  local_d7[0x50] = '\0';
  local_d7[0x51] = '\0';
  local_d7[0x52] = '\0';
  local_d7[0x53] = '\0';
  local_d7[0x54] = '\0';
  local_d7[0x55] = '\0';
  local_d7[0x56] = '\0';
  local_d7[0x57] = '\0';
  local_d7[0x58] = '\0';
  local_d7[0x59] = '\0';
  local_d7[0x5a] = '\0';
  local_d7[0x5b] = '\0';
  local_d7[0x5c] = '\0';
  local_d7[0x5d] = '\0';
  local_d7[0x5e] = '\0';
  local_d7[0x5f] = '\0';
  local_d7[0x60] = '\0';
  local_d7[0x61] = '\0';
  local_d7[0x62] = '\0';
  local_d7[99] = '\0';
  local_d7[100] = '\0';
  local_d7[0x65] = '\0';
  local_d7[0x66] = '\0';
  local_d7[0x67] = '\0';
  local_d7[0x68] = '\0';
  local_d7[0x69] = '\0';
  local_d7[0x6a] = '\0';
  local_d7[0x6b] = '\0';
  local_d7[0x6c] = '\0';
  local_d7[0x6d] = '\0';
  local_d7[0x6e] = '\0';
  local_d7[0x6f] = '\0';
  memcpy((void *)((longlong)local_168 - sVar53),local_1e0,sVar53);
  puVar38 = local_1f8;
  local_168[0] = 0;
  local_168[1] = 0;
  local_168[2] = 0;
  local_168[3] = 0;
  local_168[4] = 0;
  local_168[5] = 0;
  local_168[6] = 0;
  local_168[7] = 0;
  local_168[8] = 0;
  local_168[9] = 0;
  local_168[10] = 0;
  local_168[0xb] = 0;
  local_168[0xc] = 0;
  local_168[0xd] = 0;
  local_168[0xe] = 0;
  local_168[0xf] = 0;
  if (pauVar57 < (undefined1 (*) [16])(local_1b8[-1] + 1)) {
    puVar50 = puVar51;
    puVar44 = puVar51 + 1;
    do {
      puVar51 = puVar50;
      if (local_1e8 < param_1 + 0x168) break;
      if (local_1d8 <= puVar52) {
        if (local_1f0 < puVar52) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3c4a03;
          pcVar54 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
          iVar61 = 0xdb;
          goto LAB_14f3c49f8;
        }
        lVar43 = -(longlong)local_1f0;
        local_1f0 = local_d7;
        puVar52 = puVar52 + (longlong)(local_d7 + lVar43);
        local_1d8 = local_d7;
      }
      if (local_1e0 <= puVar59) {
        if (local_200 < puVar59) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3c4a03;
          pcVar54 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
          iVar61 = 0xdc;
          goto LAB_14f3c49f8;
        }
        puVar59 = (ushort *)((longlong)puVar59 + ((longlong)local_168 - (longlong)local_200));
        local_1e0 = local_168;
        local_200 = local_168;
      }
      auVar63 = *pauVar57;
      bVar1 = auVar63[0];
      bVar4 = auVar63[1];
      bVar5 = auVar63[2];
      bVar6 = auVar63[3];
      bVar7 = auVar63[4];
      bVar8 = auVar63[5];
      bVar9 = auVar63[6];
      bVar10 = auVar63[7];
      bVar11 = auVar63[8];
      bVar12 = auVar63[9];
      bVar13 = auVar63[10];
      bVar14 = auVar63[0xb];
      bVar15 = auVar63[0xc];
      bVar16 = auVar63[0xd];
      bVar17 = auVar63[0xe];
      bVar18 = auVar63[0xf];
      auVar65[0] = -((byte)((bVar2 < bVar1) * bVar1 | (bVar2 >= bVar1) * bVar2) == bVar2);
      auVar65[1] = -((byte)((bVar23 < bVar4) * bVar4 | (bVar23 >= bVar4) * bVar23) == bVar23);
      auVar65[2] = -((byte)((bVar24 < bVar5) * bVar5 | (bVar24 >= bVar5) * bVar24) == bVar24);
      auVar65[3] = -((byte)((bVar25 < bVar6) * bVar6 | (bVar25 >= bVar6) * bVar25) == bVar25);
      auVar65[4] = -((byte)((bVar26 < bVar7) * bVar7 | (bVar26 >= bVar7) * bVar26) == bVar26);
      auVar65[5] = -((byte)((bVar27 < bVar8) * bVar8 | (bVar27 >= bVar8) * bVar27) == bVar27);
      auVar65[6] = -((byte)((bVar28 < bVar9) * bVar9 | (bVar28 >= bVar9) * bVar28) == bVar28);
      auVar65[7] = -((byte)((bVar29 < bVar10) * bVar10 | (bVar29 >= bVar10) * bVar29) == bVar29);
      auVar65[8] = -((byte)((bVar30 < bVar11) * bVar11 | (bVar30 >= bVar11) * bVar30) == bVar30);
      auVar65[9] = -((byte)((bVar31 < bVar12) * bVar12 | (bVar31 >= bVar12) * bVar31) == bVar31);
      auVar65[10] = -((byte)((bVar32 < bVar13) * bVar13 | (bVar32 >= bVar13) * bVar32) == bVar32);
      auVar65[0xb] = -((byte)((bVar33 < bVar14) * bVar14 | (bVar33 >= bVar14) * bVar33) == bVar33);
      auVar65[0xc] = -((byte)((bVar34 < bVar15) * bVar15 | (bVar34 >= bVar15) * bVar34) == bVar34);
      auVar65[0xd] = -((byte)((bVar35 < bVar16) * bVar16 | (bVar35 >= bVar16) * bVar35) == bVar35);
      auVar65[0xe] = -((byte)((bVar36 < bVar17) * bVar17 | (bVar36 >= bVar17) * bVar36) == bVar36);
      auVar65[0xf] = -((byte)((bVar37 < bVar18) * bVar18 | (bVar37 >= bVar18) * bVar37) == bVar37);
      uVar19 = (ushort)(SUB161(auVar65 >> 7,0) & 1) | (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe | (ushort)(auVar65[0xf] >> 7) << 0xf;
      puVar55 = puVar44;
      if (uVar19 == 0) {
        uVar56 = *(ulonglong *)*pauVar57;
        iVar61 = -(int)uVar62;
        uVar19 = (ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe | (ushort)(bVar18 >> 7) << 0xf;
        auVar20._4_8_ = SUB168(ZEXT1216((undefined1  [12])0x0),4);
        auVar20._0_4_ = iVar61;
        auVar67._0_8_ = auVar20._0_8_ << 0x20;
        auVar67._8_4_ = iVar61;
        auVar67._12_4_ = iVar61;
        auVar69._8_8_ = auVar67._8_8_;
        auVar69._0_8_ = *(undefined8 *)puVar59;
        auVar63 = pshufb(auVar69,(undefined1  [16])c_offset_shuffles[uVar19 & 0xf]);
        uVar42 = uVar19 >> 4 & 0xf;
        auVar64._8_8_ = auVar63._8_8_;
        auVar64._0_8_ = *(undefined8 *)((longlong)puVar59 + (longlong)c_comp_advance[uVar19 & 0xf]);
        puVar60 = (undefined8 *)
                  ((longlong)puVar59 + (longlong)c_comp_advance[uVar19 & 0xf] +
                  (longlong)c_comp_advance[uVar42]);
        auVar65 = pshufb(auVar64,(undefined1  [16])c_offset_shuffles[uVar42]);
        uVar42 = uVar19 >> 8 & 0xf;
        auVar66._8_8_ = auVar65._8_8_;
        auVar66._0_8_ = *puVar60;
        puVar60 = (undefined8 *)((longlong)puVar60 + (longlong)c_comp_advance[uVar42]);
        auVar67 = pshufb(auVar66,(undefined1  [16])c_offset_shuffles[uVar42]);
        auVar68._8_8_ = auVar67._8_8_;
        auVar68._0_8_ = *puVar60;
        auVar69 = pshufb(auVar68,(undefined1  [16])c_offset_shuffles[uVar19 >> 0xc]);
        puVar59 = (ushort *)((longlong)puVar60 + (longlong)c_comp_advance[uVar19 >> 0xc]);
        *(undefined8 *)param_1 = *(undefined8 *)puVar52;
        uVar42 = (uint)uVar56 & 7;
        puVar47 = param_1 + uVar42;
        puVar52 = puVar52 + uVar42;
        iVar61 = -auVar69._12_4_;
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar63._0_4_);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar63._0_4_ + 8);
        *(undefined8 *)(puVar47 + ((uint)(uVar56 >> 3) & 0xf)) = *(undefined8 *)puVar52;
        uVar42 = (uint)(uVar56 >> 8) & 7;
        puVar47 = puVar47 + ((uint)(uVar56 >> 3) & 0xf) + uVar42;
        puVar52 = puVar52 + uVar42;
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar63._4_4_);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar63._4_4_ + 8);
        *(undefined8 *)(puVar47 + ((uint)(uVar56 >> 0xb) & 0xf)) = *(undefined8 *)puVar52;
        uVar42 = (uint)(uVar56 >> 0x10) & 7;
        puVar47 = puVar47 + ((uint)(uVar56 >> 0xb) & 0xf) + uVar42;
        puVar52 = puVar52 + uVar42;
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar63._8_4_);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar63._8_4_ + 8);
        *(undefined8 *)(puVar47 + ((uint)(uVar56 >> 0x13) & 0xf)) = *(undefined8 *)puVar52;
        uVar42 = (uint)(uVar56 >> 0x18) & 7;
        puVar47 = puVar47 + ((uint)(uVar56 >> 0x13) & 0xf) + uVar42;
        puVar52 = puVar52 + uVar42;
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar63._12_4_);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar63._12_4_ + 8);
        uVar42 = (uint)(uVar56 >> 0x20);
        *(undefined8 *)(puVar47 + ((uint)(uVar56 >> 0x1b) & 0xf)) = *(undefined8 *)puVar52;
        puVar47 = puVar47 + ((uint)(uVar56 >> 0x1b) & 0xf) + (uVar42 & 7);
        puVar52 = puVar52 + (uVar42 & 7);
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar65._0_4_);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar65._0_4_ + 8);
        *(undefined8 *)(puVar47 + (uVar42 >> 3 & 0xf)) = *(undefined8 *)puVar52;
        uVar39 = uVar42 >> 8 & 7;
        puVar47 = puVar47 + (uVar42 >> 3 & 0xf) + uVar39;
        puVar52 = puVar52 + uVar39;
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar65._4_4_);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar65._4_4_ + 8);
        *(undefined8 *)(puVar47 + (uVar42 >> 0xb & 0xf)) = *(undefined8 *)puVar52;
        uVar39 = (ushort)(uVar56 >> 0x30) & 7;
        puVar47 = puVar47 + (uVar42 >> 0xb & 0xf) + uVar39;
        puVar52 = puVar52 + uVar39;
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar65._8_4_);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar65._8_4_ + 8);
        *(undefined8 *)(puVar47 + (uVar42 >> 0x13 & 0xf)) = *(undefined8 *)puVar52;
        uVar39 = (byte)(uVar56 >> 0x38) & 7;
        puVar47 = puVar47 + (uVar42 >> 0x13 & 0xf) + uVar39;
        puVar52 = puVar52 + uVar39;
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar65._12_4_);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar65._12_4_ + 8);
        uVar56 = *(ulonglong *)(*pauVar57 + 8);
        *(undefined8 *)(puVar47 + (uVar42 >> 0x1b & 0xf)) = *(undefined8 *)puVar52;
        uVar39 = (uint)uVar56 & 7;
        puVar47 = puVar47 + (uVar42 >> 0x1b & 0xf) + uVar39;
        puVar52 = puVar52 + uVar39;
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar67._0_4_);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar67._0_4_ + 8);
        *(undefined8 *)(puVar47 + ((uint)(uVar56 >> 3) & 0xf)) = *(undefined8 *)puVar52;
        uVar42 = (uint)(uVar56 >> 8) & 7;
        puVar47 = puVar47 + ((uint)(uVar56 >> 3) & 0xf) + uVar42;
        puVar52 = puVar52 + uVar42;
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar67._4_4_);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar67._4_4_ + 8);
        *(undefined8 *)(puVar47 + ((uint)(uVar56 >> 0xb) & 0xf)) = *(undefined8 *)puVar52;
        uVar42 = (uint)(uVar56 >> 0x10) & 7;
        puVar47 = puVar47 + ((uint)(uVar56 >> 0xb) & 0xf) + uVar42;
        puVar52 = puVar52 + uVar42;
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar67._8_4_);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar67._8_4_ + 8);
        *(undefined8 *)(puVar47 + ((uint)(uVar56 >> 0x13) & 0xf)) = *(undefined8 *)puVar52;
        uVar42 = (uint)(uVar56 >> 0x18) & 7;
        puVar47 = puVar47 + ((uint)(uVar56 >> 0x13) & 0xf) + uVar42;
        puVar52 = puVar52 + uVar42;
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar67._12_4_);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar67._12_4_ + 8);
        uVar42 = (uint)(uVar56 >> 0x20);
        *(undefined8 *)(puVar47 + ((uint)(uVar56 >> 0x1b) & 0xf)) = *(undefined8 *)puVar52;
        puVar47 = puVar47 + ((uint)(uVar56 >> 0x1b) & 0xf) + (uVar42 & 7);
        puVar52 = puVar52 + (uVar42 & 7);
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar69._0_4_);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar69._0_4_ + 8);
        *(undefined8 *)(puVar47 + (uVar42 >> 3 & 0xf)) = *(undefined8 *)puVar52;
        uVar39 = uVar42 >> 8 & 7;
        puVar47 = puVar47 + (uVar42 >> 3 & 0xf) + uVar39;
        puVar52 = puVar52 + uVar39;
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar69._4_4_);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar69._4_4_ + 8);
        *(undefined8 *)(puVar47 + (uVar42 >> 0xb & 0xf)) = *(undefined8 *)puVar52;
        uVar62 = (ulonglong)iVar61;
        uVar39 = (ushort)(uVar56 >> 0x30) & 7;
        puVar47 = puVar47 + (uVar42 >> 0xb & 0xf) + uVar39;
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar69._8_4_);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar69._8_4_ + 8);
        *(undefined8 *)(puVar47 + (uVar42 >> 0x13 & 0xf)) = *(undefined8 *)(puVar52 + uVar39);
        uVar40 = (byte)(uVar56 >> 0x38) & 7;
        puVar47 = puVar47 + (uVar42 >> 0x13 & 0xf) + uVar40;
        puVar52 = puVar52 + uVar39 + uVar40;
        *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + iVar61);
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)iVar61 + 8);
        param_1 = puVar47 + (uVar42 >> 0x1b & 0xf);
        pauVar57 = pauVar57 + 1;
      }
      else {
        uVar42 = 0;
        if (uVar19 != 0) {
          for (; (uVar19 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
          }
        }
        puVar47 = param_1;
        if (3 < (int)uVar42) {
          uVar56 = (ulonglong)(uVar42 >> 2);
          uVar42 = uVar42 + (uVar42 >> 2) * -4;
          do {
            uVar39 = *(uint *)*pauVar57;
            pauVar57 = (undefined1 (*) [16])(*pauVar57 + 4);
            auVar63._8_8_ = (ulonglong)(uint)-(int)uVar62 << 0x20;
            auVar63._0_8_ = *(undefined8 *)puVar59;
            uVar40 = (uint)(ushort)((ushort)((byte)(uVar39 >> 7) & 1) |
                                    (ushort)((byte)(uVar39 >> 0xf) & 1) << 1 |
                                    (ushort)((byte)(uVar39 >> 0x17) & 1) << 2 |
                                   (ushort)(byte)(uVar39 >> 0x1f) << 3);
            auVar63 = pshufb(auVar63,(undefined1  [16])c_offset_shuffles[(int)uVar40]);
            puVar59 = (ushort *)((longlong)puVar59 + (longlong)c_comp_advance[(int)uVar40]);
            *(undefined8 *)param_1 = *(undefined8 *)puVar52;
            puVar47 = param_1 + (uVar39 & 7);
            puVar52 = puVar52 + (uVar39 & 7);
            *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar63._0_4_);
            *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar63._0_4_ + 8);
            *(undefined8 *)(puVar47 + (uVar39 >> 3 & 0xf)) = *(undefined8 *)puVar52;
            uVar40 = uVar39 >> 8 & 7;
            puVar47 = puVar47 + (uVar39 >> 3 & 0xf) + uVar40;
            puVar52 = puVar52 + uVar40;
            *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar63._4_4_);
            *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar63._4_4_ + 8);
            *(undefined8 *)(puVar47 + (uVar39 >> 0xb & 0xf)) = *(undefined8 *)puVar52;
            uVar40 = uVar39 >> 0x10 & 7;
            puVar47 = puVar47 + (uVar39 >> 0xb & 0xf) + uVar40;
            *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + -auVar63._8_4_);
            *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)-auVar63._8_4_ + 8);
            *(undefined8 *)(puVar47 + (uVar39 >> 0x13 & 0xf)) = *(undefined8 *)(puVar52 + uVar40);
            uVar41 = uVar39 >> 0x18 & 7;
            puVar47 = puVar47 + (uVar39 >> 0x13 & 0xf) + uVar41;
            puVar52 = puVar52 + uVar40 + uVar41;
            uVar62 = (ulonglong)-auVar63._12_4_;
            *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + uVar62);
            *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + uVar62 + 8);
            param_1 = puVar47 + (uVar39 >> 0x1b & 0xf);
            uVar56 = uVar56 - 1;
            puVar47 = param_1;
            pauVar58 = local_208;
          } while (uVar56 != 0);
        }
        for (; uVar42 != 0; uVar42 = uVar42 - 1) {
          bVar1 = (*pauVar57)[0];
          pauVar57 = (undefined1 (*) [16])(*pauVar57 + 1);
          uVar19 = *puVar59;
          *(undefined8 *)puVar47 = *(undefined8 *)puVar52;
          puVar47 = puVar47 + (bVar1 & 7);
          puVar52 = puVar52 + (bVar1 & 7);
          uVar39 = (uint)uVar62 ^ (-(uint)uVar19 ^ (uint)uVar62) & (bVar1 >> 7) - 1;
          uVar62 = (ulonglong)uVar39;
          puVar59 = (ushort *)((longlong)puVar59 + (ulonglong)((bVar1 >> 7) - 1 & 2));
          *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + (int)uVar39);
          *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + (longlong)(int)uVar39 + 8);
          puVar47 = puVar47 + ((bVar1 & 0x78) >> 3);
        }
        bVar1 = (*pauVar57)[0];
        pauVar57 = (undefined1 (*) [16])(*pauVar57 + 1);
        if (bVar1 < 3) {
          if (bVar1 == 0) {
            if (puVar50 < local_1d0) {
              uVar56 = (ulonglong)(byte)*puVar50;
              puVar55 = (ushort *)((longlong)puVar44 + 1);
              puVar51 = (ushort *)((longlong)puVar50 + 1);
              if (0xfb < uVar56) {
                if (local_1d0 < puVar55) {
                  uVar56 = 0;
                }
                else {
                  uVar19 = *puVar51;
                  puVar51 = (ushort *)((longlong)puVar50 + 3);
                  puVar55 = (ushort *)((longlong)puVar44 + 3);
                  uVar56 = uVar56 + (ulonglong)uVar19 * 4;
                }
              }
            }
            else {
              uVar56 = 0;
            }
            lVar43 = uVar56 + 0x40;
            if ((longlong)local_1f8 - (longlong)puVar47 < lVar43) goto LAB_14f3c4175;
            if ((longlong)local_1f0 - (longlong)puVar52 < lVar43) goto LAB_14f3c4147;
            do {
              uVar3 = *(undefined8 *)puVar52;
              uVar21 = *(undefined8 *)(puVar52 + 8);
              puVar52 = puVar52 + 0x10;
              lVar43 = lVar43 + -0x10;
              *(undefined8 *)puVar47 = uVar3;
              *(undefined8 *)(puVar47 + 8) = uVar21;
              puVar47 = puVar47 + 0x10;
            } while (0x10 < lVar43);
            param_1 = puVar47 + lVar43;
            puVar52 = puVar52 + lVar43;
            uVar3 = *(undefined8 *)(puVar52 + -8);
            *(undefined8 *)(param_1 + -0x10) = *(undefined8 *)(puVar52 + -0x10);
            *(undefined8 *)(param_1 + -8) = uVar3;
          }
          else {
            if (bVar1 != 1) {
              if (puVar50 < local_1d0) {
                uVar62 = (ulonglong)(byte)*puVar50;
                puVar55 = (ushort *)((longlong)puVar44 + 1);
                puVar51 = (ushort *)((longlong)puVar50 + 1);
                if (0xfb < uVar62) {
                  if (local_1d0 < puVar55) {
                    uVar62 = 0;
                  }
                  else {
                    uVar19 = *puVar51;
                    puVar51 = (ushort *)((longlong)puVar50 + 3);
                    puVar55 = (ushort *)((longlong)puVar44 + 3);
                    uVar62 = uVar62 + (ulonglong)uVar19 * 4;
                  }
                }
              }
              else {
                uVar62 = 0;
              }
              uVar56 = uVar62 + 0x1d;
              if (local_1c0 <= pauVar58) goto LAB_14f3c4265;
              local_208 = (undefined1 (*) [16])(*pauVar58 + 4);
              puVar48 = local_1c8 + -(ulonglong)*(uint *)*pauVar58;
              lVar43 = (longlong)local_1f8 + -(longlong)puVar47;
              uVar42 = (int)puVar48 - (int)puVar47;
              if (lVar43 < (longlong)(uVar62 + 0x2d)) {
                if (lVar43 < (longlong)uVar56) goto LAB_14f3c4233;
                if ((longlong)local_1e8 + -(longlong)puVar47 < (longlong)(uVar62 + 0x2d))
                goto LAB_14f3c4205;
              }
              param_1 = puVar47 + uVar56;
              *(undefined8 *)puVar47 = *(undefined8 *)puVar48;
              *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar48 + 8);
              *(undefined8 *)(puVar47 + 0x10) = *(undefined8 *)(puVar48 + 0x10);
              *(undefined8 *)(puVar47 + 0x18) = *(undefined8 *)(puVar48 + 0x18);
              *(undefined8 *)(puVar47 + 0x20) = *(undefined8 *)(puVar48 + 0x20);
              if (0x28 < uVar56) {
                puVar47 = puVar47 + 0x28;
                puVar48 = puVar48 + 0x28;
                do {
                  uVar3 = *(undefined8 *)puVar48;
                  puVar48 = puVar48 + 8;
                  *(undefined8 *)puVar47 = uVar3;
                  puVar47 = puVar47 + 8;
                } while (puVar47 < param_1);
              }
              goto LAB_14f3c4094;
            }
            if (puVar50 < local_1d0) {
              uVar62 = (ulonglong)(byte)*puVar50;
              puVar55 = (ushort *)((longlong)puVar44 + 1);
              puVar51 = (ushort *)((longlong)puVar50 + 1);
              if (0xfb < uVar62) {
                if (local_1d0 < puVar55) {
                  uVar62 = 0;
                }
                else {
                  uVar19 = *puVar51;
                  puVar51 = (ushort *)((longlong)puVar50 + 3);
                  puVar55 = (ushort *)((longlong)puVar44 + 3);
                  uVar62 = uVar62 + (ulonglong)uVar19 * 4;
                }
              }
            }
            else {
              uVar62 = 0;
            }
            lVar43 = (longlong)local_1f8 + -(longlong)puVar47;
            if (lVar43 < (longlong)(uVar62 + 99)) {
              if (lVar43 < (longlong)(uVar62 + 0x5b)) goto LAB_14f3c41d3;
              if ((longlong)local_1e8 + -(longlong)puVar47 < (longlong)(uVar62 + 99))
              goto LAB_14f3c41a5;
            }
            uVar19 = *puVar59;
            param_1 = puVar47 + uVar62 + 0x5b;
            puVar59 = puVar59 + 1;
            uVar62 = (ulonglong)(int)-(uint)uVar19;
            *(undefined8 *)puVar47 = *(undefined8 *)(puVar47 + uVar62);
            *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar47 + uVar62 + 8);
            *(undefined8 *)(puVar47 + 0x10) = *(undefined8 *)(puVar47 + uVar62 + 0x10);
            *(undefined8 *)(puVar47 + 0x18) = *(undefined8 *)(puVar47 + uVar62 + 0x18);
            *(undefined8 *)(puVar47 + 0x20) = *(undefined8 *)(puVar47 + uVar62 + 0x20);
            *(undefined8 *)(puVar47 + 0x28) = *(undefined8 *)(puVar47 + uVar62 + 0x28);
            *(undefined8 *)(puVar47 + 0x30) = *(undefined8 *)(puVar47 + uVar62 + 0x30);
            *(undefined8 *)(puVar47 + 0x38) = *(undefined8 *)(puVar47 + uVar62 + 0x38);
            puVar48 = puVar47 + 0x40;
            puVar47 = puVar47 + uVar62 + 0x40;
            do {
              uVar3 = *(undefined8 *)puVar47;
              puVar47 = puVar47 + 8;
              *(undefined8 *)puVar48 = uVar3;
              puVar48 = puVar48 + 8;
            } while (puVar48 < param_1);
          }
        }
        else {
          if (local_1c0 <= pauVar58) goto LAB_14f3c4293;
          param_1 = puVar47 + (bVar1 + 5);
          puVar48 = local_1c8 + -(ulonglong)*(uint *)*pauVar58;
          uVar42 = (int)puVar48 - (int)puVar47;
          *(undefined8 *)puVar47 = *(undefined8 *)puVar48;
          *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar48 + 8);
          *(undefined8 *)(puVar47 + 0x10) = *(undefined8 *)(puVar48 + 0x10);
          if (0x18 < (ulonglong)(bVar1 + 5)) {
            *(undefined8 *)(puVar47 + 0x18) = *(undefined8 *)(puVar48 + 0x18);
          }
LAB_14f3c4094:
          uVar62 = (ulonglong)uVar42;
          pauVar58 = (undefined1 (*) [16])(*pauVar58 + 4);
          local_208 = pauVar58;
        }
      }
      puVar50 = puVar51;
      puVar44 = puVar55;
    } while (pauVar57 < (undefined1 (*) [16])(local_1b8[-1] + 1));
  }
  iVar61 = (int)uVar62;
  if (local_1f8 < param_1) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3c4a03;
    pcVar54 = "OODLE ERROR : corruption : (to_ptr <= parse_chunk_end)\n";
    iVar61 = 0x1c0;
  }
  else {
    local_208 = pauVar57 + 1;
    if (local_1d8 <= puVar52) {
      if (local_1f0 < puVar52) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3c4a03;
        pcVar54 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
        iVar61 = 0x1e7;
        goto LAB_14f3c49f8;
      }
      lVar43 = -(longlong)local_1f0;
      local_1d8 = local_d7;
      local_1f0 = local_d7;
      puVar52 = puVar52 + (longlong)(local_d7 + lVar43);
    }
    if (local_1e0 <= puVar59) {
      if (local_200 < puVar59) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3c4a03;
        pcVar54 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
        iVar61 = 0x1e8;
        goto LAB_14f3c49f8;
      }
      lVar43 = (longlong)local_168 - (longlong)local_200;
      local_200 = local_168;
      local_1e0 = local_168;
      puVar59 = (ushort *)((longlong)puVar59 + lVar43);
    }
    puVar47 = local_1f0;
    if (pauVar57 < local_1b8) {
      puVar44 = puVar51 + 1;
      puVar48 = param_1;
      puVar55 = puVar51;
      puVar50 = local_200;
      do {
        if (local_208 <= pauVar57) {
          local_208 = pauVar57 + 1;
          if (local_1d8 <= puVar52) {
            if (puVar47 < puVar52) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c4a03;
              pcVar54 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              iVar61 = 500;
              goto LAB_14f3c49f8;
            }
            lVar43 = -(longlong)puVar47;
            puVar47 = local_d7;
            puVar52 = puVar52 + (longlong)(local_d7 + lVar43);
            local_1d8 = local_d7;
            local_1f0 = puVar47;
          }
          if (local_1e0 <= puVar59) {
            if (puVar50 < puVar59) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c4a03;
              pcVar54 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              iVar61 = 0x1f5;
              goto LAB_14f3c49f8;
            }
            lVar43 = (longlong)local_168 - (longlong)puVar50;
            puVar50 = local_168;
            puVar59 = (ushort *)((longlong)puVar59 + lVar43);
            local_1e0 = local_168;
            local_200 = puVar50;
          }
        }
        bVar2 = (*pauVar57)[0];
        puVar22 = *pauVar57;
        uVar42 = (uint)bVar2;
        puVar45 = puVar44;
        puVar51 = puVar55;
        if (bVar2 < 0x18) {
          if (bVar2 < 3) {
            if (uVar42 == 0) {
              if (puVar55 < local_1d0) {
                uVar56 = (ulonglong)(byte)*puVar55;
                puVar45 = (ushort *)((longlong)puVar44 + 1);
                puVar51 = (ushort *)((longlong)puVar55 + 1);
                if (0xfb < uVar56) {
                  if (local_1d0 < puVar45) {
                    uVar56 = 0;
                  }
                  else {
                    uVar19 = *puVar51;
                    puVar51 = (ushort *)((longlong)puVar55 + 3);
                    puVar45 = (ushort *)((longlong)puVar44 + 3);
                    uVar56 = uVar56 + (ulonglong)uVar19 * 4;
                  }
                }
              }
              else {
                uVar56 = 0;
              }
              lVar43 = uVar56 + 0x40;
              if ((longlong)puVar38 - (longlong)puVar48 < lVar43) goto LAB_14f3c4175;
              if ((longlong)puVar47 - (longlong)puVar52 < lVar43) goto LAB_14f3c4147;
              do {
                uVar3 = *(undefined8 *)puVar52;
                uVar21 = *(undefined8 *)(puVar52 + 8);
                puVar52 = puVar52 + 0x10;
                lVar43 = lVar43 + -0x10;
                *(undefined8 *)puVar48 = uVar3;
                *(undefined8 *)(puVar48 + 8) = uVar21;
                puVar48 = puVar48 + 0x10;
              } while (0x10 < lVar43);
              param_1 = puVar48 + lVar43;
              puVar52 = puVar52 + lVar43;
              uVar3 = *(undefined8 *)(puVar52 + -8);
              *(undefined8 *)(param_1 + -0x10) = *(undefined8 *)(puVar52 + -0x10);
              *(undefined8 *)(param_1 + -8) = uVar3;
            }
            else {
              if (uVar42 != 1) {
                if (puVar55 < local_1d0) {
                  uVar62 = (ulonglong)(byte)*puVar55;
                  puVar45 = (ushort *)((longlong)puVar44 + 1);
                  puVar51 = (ushort *)((longlong)puVar55 + 1);
                  if (0xfb < uVar62) {
                    if (local_1d0 < puVar45) {
                      uVar62 = 0;
                    }
                    else {
                      uVar19 = *puVar51;
                      puVar51 = (ushort *)((longlong)puVar55 + 3);
                      puVar45 = (ushort *)((longlong)puVar44 + 3);
                      uVar62 = uVar62 + (ulonglong)uVar19 * 4;
                    }
                  }
                }
                else {
                  uVar62 = 0;
                }
                local_1f8 = (uchar *)(uVar62 + 0x1d);
                if (local_1c0 <= pauVar58) goto LAB_14f3c4265;
                puVar49 = local_1c8 + -(ulonglong)*(uint *)*pauVar58;
                local_208 = (undefined1 (*) [16])-(longlong)puVar48;
                uVar42 = (int)puVar49 - (int)puVar48;
                if ((longlong)(puVar38 + (longlong)*local_208) < (longlong)(uVar62 + 0x2d)) {
                  if ((longlong)(puVar38 + (longlong)*local_208) < (longlong)local_1f8)
                  goto LAB_14f3c4233;
                  if ((longlong)(local_1e8 + (longlong)local_208) < (longlong)(uVar62 + 0x2d))
                  goto LAB_14f3c4205;
                }
                param_1 = local_1f8 + (longlong)puVar48;
                *(undefined8 *)puVar48 = *(undefined8 *)puVar49;
                *(undefined8 *)(puVar48 + 8) = *(undefined8 *)(puVar49 + 8);
                *(undefined8 *)(puVar48 + 0x10) = *(undefined8 *)(puVar49 + 0x10);
                *(undefined8 *)(puVar48 + 0x18) = *(undefined8 *)(puVar49 + 0x18);
                *(undefined8 *)(puVar48 + 0x20) = *(undefined8 *)(puVar49 + 0x20);
                puVar50 = local_200;
                if (&DAT_00000028 < local_1f8) {
                  puVar48 = puVar48 + 0x28;
                  puVar49 = puVar49 + 0x28;
                  do {
                    uVar3 = *(undefined8 *)puVar49;
                    puVar49 = puVar49 + 8;
                    *(undefined8 *)puVar48 = uVar3;
                    puVar48 = puVar48 + 8;
                  } while (puVar48 < param_1);
                }
                goto LAB_14f3c47ea;
              }
              if (puVar55 < local_1d0) {
                uVar62 = (ulonglong)(byte)*puVar55;
                puVar45 = (ushort *)((longlong)puVar44 + 1);
                puVar51 = (ushort *)((longlong)puVar55 + 1);
                if (0xfb < uVar62) {
                  if (local_1d0 < puVar45) {
                    uVar62 = 0;
                  }
                  else {
                    uVar19 = *puVar51;
                    puVar51 = (ushort *)((longlong)puVar55 + 3);
                    puVar45 = (ushort *)((longlong)puVar44 + 3);
                    uVar62 = uVar62 + (ulonglong)uVar19 * 4;
                  }
                }
              }
              else {
                uVar62 = 0;
              }
              lVar43 = -(longlong)puVar48 + (longlong)puVar38;
              if (lVar43 < (longlong)(uVar62 + 99)) {
                if (lVar43 < (longlong)(uVar62 + 0x5b)) goto LAB_14f3c41d3;
                if ((longlong)local_1e8 + -(longlong)puVar48 < (longlong)(uVar62 + 99))
                goto LAB_14f3c41a5;
              }
              uVar19 = *puVar59;
              param_1 = puVar48 + uVar62 + 0x5b;
              puVar59 = puVar59 + 1;
              uVar62 = (ulonglong)(int)-(uint)uVar19;
              *(undefined8 *)puVar48 = *(undefined8 *)(puVar48 + uVar62);
              *(undefined8 *)(puVar48 + 8) = *(undefined8 *)(puVar48 + uVar62 + 8);
              *(undefined8 *)(puVar48 + 0x10) = *(undefined8 *)(puVar48 + uVar62 + 0x10);
              *(undefined8 *)(puVar48 + 0x18) = *(undefined8 *)(puVar48 + uVar62 + 0x18);
              *(undefined8 *)(puVar48 + 0x20) = *(undefined8 *)(puVar48 + uVar62 + 0x20);
              *(undefined8 *)(puVar48 + 0x28) = *(undefined8 *)(puVar48 + uVar62 + 0x28);
              *(undefined8 *)(puVar48 + 0x30) = *(undefined8 *)(puVar48 + uVar62 + 0x30);
              *(undefined8 *)(puVar48 + 0x38) = *(undefined8 *)(puVar48 + uVar62 + 0x38);
              puVar49 = puVar48 + 0x40;
              puVar48 = puVar48 + uVar62 + 0x40;
              do {
                uVar3 = *(undefined8 *)puVar48;
                puVar48 = puVar48 + 8;
                *(undefined8 *)puVar49 = uVar3;
                puVar49 = puVar49 + 8;
              } while (puVar49 < param_1);
            }
          }
          else {
            local_1f8 = (uchar *)(ulonglong)(bVar2 + 5);
            if (local_1c0 <= pauVar58) goto LAB_14f3c4293;
            puVar49 = local_1c8 + -(ulonglong)*(uint *)*pauVar58;
            local_208 = (undefined1 (*) [16])-(longlong)puVar48;
            uVar42 = (int)puVar49 - (int)puVar48;
            if ((longlong)(*local_208 + (longlong)puVar38) < 0x24) {
              if ((longlong)(*local_208 + (longlong)puVar38) < (longlong)local_1f8) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c4a03;
                pcVar54 = "OODLE ERROR : corruption : ml <= rrPtrDiff(parse_chunk_end - to_ptr)\n";
                iVar61 = 0x111;
                pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
                goto LAB_14f3c49ff;
              }
              if ((longlong)(*local_208 + (longlong)local_1e8) < (longlong)(local_1f8 + 0x10)) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c4a03;
                pcVar54 = 
                "OODLE ERROR : corruption : ml+16 <= rrPtrDiff(overrun_chunk_end - to_ptr)\n";
                iVar61 = 0x115;
                pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
                goto LAB_14f3c49ff;
              }
            }
            param_1 = local_1f8 + (longlong)puVar48;
            *(undefined8 *)puVar48 = *(undefined8 *)puVar49;
            *(undefined8 *)(puVar48 + 8) = *(undefined8 *)(puVar49 + 8);
            *(undefined8 *)(puVar48 + 0x10) = *(undefined8 *)(puVar49 + 0x10);
            if (&DAT_00000018 < local_1f8) {
              *(undefined8 *)(puVar48 + 0x18) = *(undefined8 *)(puVar49 + 0x18);
            }
LAB_14f3c47ea:
            uVar62 = (ulonglong)uVar42;
            pauVar58 = (undefined1 (*) [16])(*pauVar58 + 4);
          }
          local_208 = (undefined1 (*) [16])(pauVar57[1] + 1);
          if (local_1d8 <= puVar52) {
            if (puVar47 < puVar52) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c4a03;
              pcVar54 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              iVar61 = 0x208;
              goto LAB_14f3c49f8;
            }
            lVar43 = -(longlong)puVar47;
            puVar47 = local_d7;
            puVar52 = puVar52 + (longlong)(local_d7 + lVar43);
            local_1d8 = local_d7;
            local_1f0 = puVar47;
          }
          if (local_1e0 <= puVar59) {
            if (puVar50 < puVar59) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c4a03;
              pcVar54 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              iVar61 = 0x209;
              goto LAB_14f3c49f8;
            }
            lVar43 = (longlong)local_168 - (longlong)puVar50;
            puVar50 = local_168;
            puVar59 = (ushort *)((longlong)puVar59 + lVar43);
            local_1e0 = local_168;
            local_200 = puVar50;
          }
        }
        else {
          uVar19 = *puVar59;
          local_1b0 = (uint)(bVar2 >> 7);
          if (local_1e8 < puVar48 + 8) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3c4a03;
            pcVar54 = "OODLE ERROR : corruption : (to_ptr+8 <= overrun_chunk_end)\n";
            iVar61 = 0x1fc;
            goto LAB_14f3c49f8;
          }
          *(undefined8 *)puVar48 = *(undefined8 *)puVar52;
          puVar48 = puVar48 + (uVar42 & 7);
          puVar52 = puVar52 + (uVar42 & 7);
          uVar39 = (uint)uVar62 ^ (-(uint)uVar19 ^ (uint)uVar62) & local_1b0 - 1;
          uVar62 = (ulonglong)uVar39;
          puVar59 = (ushort *)((longlong)puVar59 + (ulonglong)(local_1b0 - 1 & 2));
          if (local_1e8 < puVar48 + 0x10) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3c4a03;
            pcVar54 = "OODLE ERROR : corruption : (to_ptr+16 <= overrun_chunk_end)\n";
            iVar61 = 0x1fc;
            goto LAB_14f3c49f8;
          }
          *(undefined8 *)puVar48 = *(undefined8 *)(puVar48 + (int)uVar39);
          *(undefined8 *)(puVar48 + 8) = *(undefined8 *)(puVar48 + (longlong)(int)uVar39 + 8);
          param_1 = puVar48 + ((uVar42 & 0x78) >> 3);
        }
        iVar61 = (int)uVar62;
        puVar44 = puVar45;
        puVar48 = param_1;
        puVar55 = puVar51;
        pauVar57 = (undefined1 (*) [16])(puVar22 + 1);
      } while ((undefined1 (*) [16])(puVar22 + 1) < local_1b8);
    }
    if (puVar38 <= param_1) {
      if (puVar38 < param_1) {
        return (uchar *)0x0;
      }
LAB_14f3c4a51:
      if (local_200 < puVar59) {
        return (uchar *)0x0;
      }
      if (local_1f0 < puVar52) {
        return (uchar *)0x0;
      }
      *local_1a8 = iVar61;
      local_198->literals_ptr = puVar52 + ((longlong)local_1a0 - (longlong)local_1f0);
      local_198->off16_ptr =
           (uchar *)(((longlong)local_190 - (longlong)local_200) + (longlong)puVar59);
      if (local_1d0 < puVar51) {
        return (uchar *)0x0;
      }
      local_198->excesses_ptr = (uchar *)puVar51;
      return param_5;
    }
    if (puVar52 + ((longlong)puVar38 - (longlong)param_1) <= puVar47) {
      memcpy(param_1,puVar52,(longlong)puVar38 - (longlong)param_1);
      puVar52 = puVar52 + ((longlong)puVar38 - (longlong)param_1);
      goto LAB_14f3c4a51;
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3c4a03;
    pcVar54 = "OODLE ERROR : corruption : (literals_ptr+lrl <= literals_end)\n";
    iVar61 = 0x217;
  }
LAB_14f3c49f8:
  pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_decode_parse_outer.inl";
LAB_14f3c49ff:
  (*g_fp_OodleCore_Plugin_Printf)(0,pcVar46,iVar61,pcVar54);
LAB_14f3c4a03:
  ooLogErrorPost();
  return (uchar *)0x0;
LAB_14f3c4293:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c4a03;
  pcVar54 = "OODLE ERROR : corruption : (escape_offset_ptr < escape_offset_end)\n";
  iVar61 = 0x101;
  pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c49ff;
LAB_14f3c4265:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c4a03;
  pcVar54 = "OODLE ERROR : corruption : (escape_offset_ptr < escape_offset_end)\n";
  iVar61 = 0xb6;
  pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c49ff;
LAB_14f3c4233:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c4a03;
  pcVar54 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  iVar61 = 0xc6;
  pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c49ff;
LAB_14f3c4205:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c4a03;
  pcVar54 = "OODLE ERROR : corruption : ( ml+16 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  iVar61 = 199;
  pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c49ff;
LAB_14f3c41d3:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c4a03;
  pcVar54 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  iVar61 = 0x86;
  pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c49ff;
LAB_14f3c41a5:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c4a03;
  pcVar54 = "OODLE ERROR : corruption : ( ml+8 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  iVar61 = 0x87;
  pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c49ff;
LAB_14f3c4175:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c4a03;
  pcVar54 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(parse_chunk_end-to_ptr))\n";
  iVar61 = 0x30;
  pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c49ff;
LAB_14f3c4147:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c4a03;
  pcVar54 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(literals_end-literals_ptr))\n";
  iVar61 = 0x31;
  pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c49ff;
}

// newLZF_decode_parse_raw_sse4_first @ 14f3c4ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uchar * __cdecl
oo2::newLZF_decode_parse_raw_sse4_first
          (uchar *param_1,long64 param_2,uchar *param_3,uchar *param_4,uchar *param_5,
          newLZF_chunk_arrays *param_6,int *param_7)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  ushort uVar19;
  undefined1 auVar20 [12];
  undefined8 uVar21;
  undefined1 *puVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulonglong uVar41;
  longlong lVar42;
  uchar *puVar43;
  ushort *puVar44;
  ushort *puVar45;
  char *pcVar46;
  uchar *puVar47;
  uchar *puVar48;
  int iVar49;
  ulonglong uVar50;
  uchar *puVar51;
  size_t sVar52;
  uchar *puVar53;
  char *pcVar54;
  ushort *puVar55;
  ushort *puVar56;
  undefined1 (*pauVar57) [16];
  ushort *puVar58;
  ushort *puVar59;
  undefined8 *puVar60;
  undefined1 (*pauVar61) [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auStack_218 [32];
  uchar *local_1f8;
  ushort *local_1f0;
  ushort *local_1e8;
  uchar *local_1e0;
  uchar *local_1d8;
  uchar *local_1d0;
  ushort *local_1c8;
  undefined1 (*local_1c0) [16];
  int *local_1b8;
  uchar *local_1b0;
  newLZF_chunk_arrays *local_1a8;
  ushort *local_1a0;
  int local_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  ushort local_168 [72];
  uchar local_d7 [127];
  ulonglong local_58;
  
  bVar37 = UNK_1531dbfff;
  bVar36 = UNK_1531dbffe;
  bVar35 = UNK_1531dbffd;
  bVar34 = UNK_1531dbffc;
  bVar33 = UNK_1531dbffb;
  bVar32 = UNK_1531dbffa;
  bVar31 = UNK_1531dbff9;
  bVar30 = UNK_1531dbff8;
  bVar29 = UNK_1531dbff7;
  bVar28 = UNK_1531dbff6;
  bVar27 = UNK_1531dbff5;
  bVar26 = UNK_1531dbff4;
  bVar25 = UNK_1531dbff3;
  bVar24 = UNK_1531dbff2;
  bVar23 = UNK_1531dbff1;
  bVar2 = __xmm_17171717171717171717171717171717;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_218;
  puVar47 = param_1 + 8;
  local_1d8 = param_1 + param_2;
  local_1b8 = param_7;
  uVar50 = (ulonglong)(uint)*param_7;
  local_1f8 = param_6->literals_end;
  local_1f0 = (ushort *)param_6->off16_end;
  local_1c0 = (undefined1 (*) [16])param_6->packets_end;
  puVar51 = param_6->literals_ptr;
  pauVar61 = (undefined1 (*) [16])param_6->packets_ptr;
  puVar59 = (ushort *)param_6->off16_ptr;
  puVar58 = (ushort *)param_6->excesses_ptr;
  local_1c8 = (ushort *)param_6->excesses_end;
  sVar52 = (longlong)local_1f8 - (longlong)puVar51;
  local_1a8 = param_6;
  if (0x71 < (longlong)sVar52) {
    sVar52 = 0x71;
  }
  local_1e0 = local_1f8 + -sVar52;
  local_1d0 = param_3;
  local_1b0 = local_1f8;
  local_1a0 = local_1f0;
  memcpy(local_d7 + -sVar52,local_1e0,sVar52);
  local_d7[0x70] = 0;
  sVar52 = (longlong)local_1f0 - (longlong)puVar59;
  local_d7[0] = '\0';
  local_d7[1] = '\0';
  local_d7[2] = '\0';
  local_d7[3] = '\0';
  local_d7[4] = '\0';
  local_d7[5] = '\0';
  local_d7[6] = '\0';
  local_d7[7] = '\0';
  local_d7[8] = '\0';
  local_d7[9] = '\0';
  local_d7[10] = '\0';
  local_d7[0xb] = '\0';
  local_d7[0xc] = '\0';
  local_d7[0xd] = '\0';
  local_d7[0xe] = '\0';
  local_d7[0xf] = '\0';
  if (0x20 < (longlong)sVar52) {
    sVar52 = 0x20;
  }
  local_1e8 = (ushort *)((longlong)local_1f0 - sVar52);
  local_d7[0x10] = '\0';
  local_d7[0x11] = '\0';
  local_d7[0x12] = '\0';
  local_d7[0x13] = '\0';
  local_d7[0x14] = '\0';
  local_d7[0x15] = '\0';
  local_d7[0x16] = '\0';
  local_d7[0x17] = '\0';
  local_d7[0x18] = '\0';
  local_d7[0x19] = '\0';
  local_d7[0x1a] = '\0';
  local_d7[0x1b] = '\0';
  local_d7[0x1c] = '\0';
  local_d7[0x1d] = '\0';
  local_d7[0x1e] = '\0';
  local_d7[0x1f] = '\0';
  local_d7[0x20] = '\0';
  local_d7[0x21] = '\0';
  local_d7[0x22] = '\0';
  local_d7[0x23] = '\0';
  local_d7[0x24] = '\0';
  local_d7[0x25] = '\0';
  local_d7[0x26] = '\0';
  local_d7[0x27] = '\0';
  local_d7[0x28] = '\0';
  local_d7[0x29] = '\0';
  local_d7[0x2a] = '\0';
  local_d7[0x2b] = '\0';
  local_d7[0x2c] = '\0';
  local_d7[0x2d] = '\0';
  local_d7[0x2e] = '\0';
  local_d7[0x2f] = '\0';
  local_d7[0x30] = '\0';
  local_d7[0x31] = '\0';
  local_d7[0x32] = '\0';
  local_d7[0x33] = '\0';
  local_d7[0x34] = '\0';
  local_d7[0x35] = '\0';
  local_d7[0x36] = '\0';
  local_d7[0x37] = '\0';
  local_d7[0x38] = '\0';
  local_d7[0x39] = '\0';
  local_d7[0x3a] = '\0';
  local_d7[0x3b] = '\0';
  local_d7[0x3c] = '\0';
  local_d7[0x3d] = '\0';
  local_d7[0x3e] = '\0';
  local_d7[0x3f] = '\0';
  local_d7[0x40] = '\0';
  local_d7[0x41] = '\0';
  local_d7[0x42] = '\0';
  local_d7[0x43] = '\0';
  local_d7[0x44] = '\0';
  local_d7[0x45] = '\0';
  local_d7[0x46] = '\0';
  local_d7[0x47] = '\0';
  local_d7[0x48] = '\0';
  local_d7[0x49] = '\0';
  local_d7[0x4a] = '\0';
  local_d7[0x4b] = '\0';
  local_d7[0x4c] = '\0';
  local_d7[0x4d] = '\0';
  local_d7[0x4e] = '\0';
  local_d7[0x4f] = '\0';
  local_d7[0x50] = '\0';
  local_d7[0x51] = '\0';
  local_d7[0x52] = '\0';
  local_d7[0x53] = '\0';
  local_d7[0x54] = '\0';
  local_d7[0x55] = '\0';
  local_d7[0x56] = '\0';
  local_d7[0x57] = '\0';
  local_d7[0x58] = '\0';
  local_d7[0x59] = '\0';
  local_d7[0x5a] = '\0';
  local_d7[0x5b] = '\0';
  local_d7[0x5c] = '\0';
  local_d7[0x5d] = '\0';
  local_d7[0x5e] = '\0';
  local_d7[0x5f] = '\0';
  local_d7[0x60] = '\0';
  local_d7[0x61] = '\0';
  local_d7[0x62] = '\0';
  local_d7[99] = '\0';
  local_d7[100] = '\0';
  local_d7[0x65] = '\0';
  local_d7[0x66] = '\0';
  local_d7[0x67] = '\0';
  local_d7[0x68] = '\0';
  local_d7[0x69] = '\0';
  local_d7[0x6a] = '\0';
  local_d7[0x6b] = '\0';
  local_d7[0x6c] = '\0';
  local_d7[0x6d] = '\0';
  local_d7[0x6e] = '\0';
  local_d7[0x6f] = '\0';
  memcpy((void *)((longlong)local_168 - sVar52),local_1e8,sVar52);
  local_168[0] = 0;
  local_168[1] = 0;
  local_168[2] = 0;
  local_168[3] = 0;
  local_168[4] = 0;
  local_168[5] = 0;
  local_168[6] = 0;
  local_168[7] = 0;
  local_168[8] = 0;
  local_168[9] = 0;
  local_168[10] = 0;
  local_168[0xb] = 0;
  local_168[0xc] = 0;
  local_168[0xd] = 0;
  local_168[0xe] = 0;
  local_168[0xf] = 0;
  if (pauVar61 < (undefined1 (*) [16])(local_1c0[-1] + 1)) {
    puVar55 = puVar58 + 1;
    puVar44 = puVar58;
    do {
      puVar58 = puVar44;
      if (local_1d0 < puVar47 + 0x168) break;
      if (local_1e0 <= puVar51) {
        if (local_1f8 < puVar51) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto code_r0x00014f3c5d00;
          pcVar54 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
          iVar49 = 0xdb;
          goto LAB_14f3c5cf3;
        }
        lVar42 = -(longlong)local_1f8;
        local_1f8 = local_d7;
        puVar51 = puVar51 + (longlong)(local_d7 + lVar42);
        local_1e0 = local_d7;
      }
      if (local_1e8 <= puVar59) {
        if (local_1f0 < puVar59) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto code_r0x00014f3c5d00;
          pcVar54 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
          iVar49 = 0xdc;
          goto LAB_14f3c5cf3;
        }
        puVar59 = (ushort *)((longlong)puVar59 + ((longlong)local_168 - (longlong)local_1f0));
        local_1e8 = local_168;
        local_1f0 = local_168;
      }
      auVar62 = *pauVar61;
      bVar1 = auVar62[0];
      bVar4 = auVar62[1];
      bVar5 = auVar62[2];
      bVar6 = auVar62[3];
      bVar7 = auVar62[4];
      bVar8 = auVar62[5];
      bVar9 = auVar62[6];
      bVar10 = auVar62[7];
      bVar11 = auVar62[8];
      bVar12 = auVar62[9];
      bVar13 = auVar62[10];
      bVar14 = auVar62[0xb];
      bVar15 = auVar62[0xc];
      bVar16 = auVar62[0xd];
      bVar17 = auVar62[0xe];
      bVar18 = auVar62[0xf];
      auVar63[0] = -((byte)((bVar2 < bVar1) * bVar1 | (bVar2 >= bVar1) * bVar2) == bVar2);
      auVar63[1] = -((byte)((bVar23 < bVar4) * bVar4 | (bVar23 >= bVar4) * bVar23) == bVar23);
      auVar63[2] = -((byte)((bVar24 < bVar5) * bVar5 | (bVar24 >= bVar5) * bVar24) == bVar24);
      auVar63[3] = -((byte)((bVar25 < bVar6) * bVar6 | (bVar25 >= bVar6) * bVar25) == bVar25);
      auVar63[4] = -((byte)((bVar26 < bVar7) * bVar7 | (bVar26 >= bVar7) * bVar26) == bVar26);
      auVar63[5] = -((byte)((bVar27 < bVar8) * bVar8 | (bVar27 >= bVar8) * bVar27) == bVar27);
      auVar63[6] = -((byte)((bVar28 < bVar9) * bVar9 | (bVar28 >= bVar9) * bVar28) == bVar28);
      auVar63[7] = -((byte)((bVar29 < bVar10) * bVar10 | (bVar29 >= bVar10) * bVar29) == bVar29);
      auVar63[8] = -((byte)((bVar30 < bVar11) * bVar11 | (bVar30 >= bVar11) * bVar30) == bVar30);
      auVar63[9] = -((byte)((bVar31 < bVar12) * bVar12 | (bVar31 >= bVar12) * bVar31) == bVar31);
      auVar63[10] = -((byte)((bVar32 < bVar13) * bVar13 | (bVar32 >= bVar13) * bVar32) == bVar32);
      auVar63[0xb] = -((byte)((bVar33 < bVar14) * bVar14 | (bVar33 >= bVar14) * bVar33) == bVar33);
      auVar63[0xc] = -((byte)((bVar34 < bVar15) * bVar15 | (bVar34 >= bVar15) * bVar34) == bVar34);
      auVar63[0xd] = -((byte)((bVar35 < bVar16) * bVar16 | (bVar35 >= bVar16) * bVar35) == bVar35);
      auVar63[0xe] = -((byte)((bVar36 < bVar17) * bVar17 | (bVar36 >= bVar17) * bVar36) == bVar36);
      auVar63[0xf] = -((byte)((bVar37 < bVar18) * bVar18 | (bVar37 >= bVar18) * bVar37) == bVar37);
      uVar19 = (ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe | (ushort)(auVar63[0xf] >> 7) << 0xf;
      puVar56 = puVar55;
      if (uVar19 == 0) {
        uVar19 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe | (ushort)(bVar18 >> 7) << 0xf;
        iVar49 = -(int)uVar50;
        auVar20._4_8_ = SUB168(ZEXT1216((undefined1  [12])0x0),4);
        auVar20._0_4_ = iVar49;
        auVar62._0_8_ = auVar20._0_8_ << 0x20;
        auVar62._8_4_ = iVar49;
        auVar62._12_4_ = iVar49;
        auVar65._8_8_ = auVar62._8_8_;
        auVar65._0_8_ = *(undefined8 *)puVar59;
        auVar62 = pshufb(auVar65,(undefined1  [16])c_offset_shuffles[uVar19 & 0xf]);
        uVar40 = uVar19 >> 4 & 0xf;
        auVar67._8_8_ = auVar62._8_8_;
        auVar67._0_8_ = *(undefined8 *)((longlong)puVar59 + (longlong)c_comp_advance[uVar19 & 0xf]);
        puVar60 = (undefined8 *)
                  ((longlong)puVar59 + (longlong)c_comp_advance[uVar19 & 0xf] +
                  (longlong)c_comp_advance[uVar40]);
        auVar63 = pshufb(auVar67,(undefined1  [16])c_offset_shuffles[uVar40]);
        uVar40 = uVar19 >> 8 & 0xf;
        auVar64._8_8_ = auVar63._8_8_;
        auVar64._0_8_ = *puVar60;
        puVar60 = (undefined8 *)((longlong)puVar60 + (longlong)c_comp_advance[uVar40]);
        auVar65 = pshufb(auVar64,(undefined1  [16])c_offset_shuffles[uVar40]);
        uVar50 = *(ulonglong *)*pauVar61;
        auVar66._8_8_ = auVar65._8_8_;
        auVar66._0_8_ = *puVar60;
        auVar67 = pshufb(auVar66,(undefined1  [16])c_offset_shuffles[uVar19 >> 0xc]);
        puVar59 = (ushort *)((longlong)puVar60 + (longlong)c_comp_advance[uVar19 >> 0xc]);
        *(undefined8 *)puVar47 = *(undefined8 *)puVar51;
        uVar40 = (uint)uVar50 & 7;
        puVar47 = puVar47 + uVar40;
        puVar53 = puVar47 + -auVar62._0_4_;
        puVar51 = puVar51 + uVar40;
        if (param_4 <= puVar53) {
          *(undefined8 *)puVar47 = *(undefined8 *)puVar53;
          *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar53 + 8);
          *(undefined8 *)(puVar47 + ((uint)(uVar50 >> 3) & 0xf)) = *(undefined8 *)puVar51;
          uVar40 = (uint)(uVar50 >> 8) & 7;
          puVar53 = puVar47 + ((uint)(uVar50 >> 3) & 0xf) + uVar40;
          puVar51 = puVar51 + uVar40;
          puVar47 = puVar53 + -auVar62._4_4_;
          if (param_4 <= puVar47) {
            *(undefined8 *)puVar53 = *(undefined8 *)puVar47;
            *(undefined8 *)(puVar53 + 8) = *(undefined8 *)(puVar47 + 8);
            *(undefined8 *)(puVar53 + ((uint)(uVar50 >> 0xb) & 0xf)) = *(undefined8 *)puVar51;
            uVar40 = (uint)(uVar50 >> 0x10) & 7;
            puVar47 = puVar53 + ((uint)(uVar50 >> 0xb) & 0xf) + uVar40;
            puVar51 = puVar51 + uVar40;
            puVar53 = puVar47 + -auVar62._8_4_;
            if (param_4 <= puVar53) {
              *(undefined8 *)puVar47 = *(undefined8 *)puVar53;
              *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar53 + 8);
              *(undefined8 *)(puVar47 + ((uint)(uVar50 >> 0x13) & 0xf)) = *(undefined8 *)puVar51;
              uVar40 = (uint)(uVar50 >> 0x18) & 7;
              puVar53 = puVar47 + ((uint)(uVar50 >> 0x13) & 0xf) + uVar40;
              puVar51 = puVar51 + uVar40;
              puVar47 = puVar53 + -auVar62._12_4_;
              if (param_4 <= puVar47) {
                *(undefined8 *)puVar53 = *(undefined8 *)puVar47;
                *(undefined8 *)(puVar53 + 8) = *(undefined8 *)(puVar47 + 8);
                *(undefined8 *)(puVar53 + ((uint)(uVar50 >> 0x1b) & 0xf)) = *(undefined8 *)puVar51;
                uVar40 = (uint)(uVar50 >> 0x20);
                puVar47 = puVar53 + ((uint)(uVar50 >> 0x1b) & 0xf) + (uVar40 & 7);
                puVar51 = puVar51 + (uVar40 & 7);
                puVar53 = puVar47 + -auVar63._0_4_;
                if (param_4 <= puVar53) {
                  *(undefined8 *)puVar47 = *(undefined8 *)puVar53;
                  *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar53 + 8);
                  *(undefined8 *)(puVar47 + (uVar40 >> 3 & 0xf)) = *(undefined8 *)puVar51;
                  uVar38 = uVar40 >> 8 & 7;
                  puVar53 = puVar47 + (uVar40 >> 3 & 0xf) + uVar38;
                  puVar51 = puVar51 + uVar38;
                  puVar47 = puVar53 + -auVar63._4_4_;
                  if (param_4 <= puVar47) {
                    *(undefined8 *)puVar53 = *(undefined8 *)puVar47;
                    *(undefined8 *)(puVar53 + 8) = *(undefined8 *)(puVar47 + 8);
                    *(undefined8 *)(puVar53 + (uVar40 >> 0xb & 0xf)) = *(undefined8 *)puVar51;
                    uVar38 = (ushort)(uVar50 >> 0x30) & 7;
                    puVar53 = puVar53 + (uVar40 >> 0xb & 0xf) + uVar38;
                    puVar51 = puVar51 + uVar38;
                    puVar47 = puVar53 + -auVar63._8_4_;
                    if (param_4 <= puVar47) {
                      *(undefined8 *)puVar53 = *(undefined8 *)puVar47;
                      *(undefined8 *)(puVar53 + 8) = *(undefined8 *)(puVar47 + 8);
                      *(undefined8 *)(puVar53 + (uVar40 >> 0x13 & 0xf)) = *(undefined8 *)puVar51;
                      uVar38 = (byte)(uVar50 >> 0x38) & 7;
                      puVar53 = puVar53 + (uVar40 >> 0x13 & 0xf) + uVar38;
                      puVar51 = puVar51 + uVar38;
                      puVar47 = puVar53 + -auVar63._12_4_;
                      if (param_4 <= puVar47) {
                        *(undefined8 *)puVar53 = *(undefined8 *)puVar47;
                        *(undefined8 *)(puVar53 + 8) = *(undefined8 *)(puVar47 + 8);
                        uVar41 = *(ulonglong *)(*pauVar61 + 8);
                        *(undefined8 *)(puVar53 + (uVar40 >> 0x1b & 0xf)) = *(undefined8 *)puVar51;
                        uVar38 = (uint)uVar41 & 7;
                        puVar53 = puVar53 + (uVar40 >> 0x1b & 0xf) + uVar38;
                        puVar51 = puVar51 + uVar38;
                        puVar47 = puVar53 + -auVar65._0_4_;
                        if (param_4 <= puVar47) {
                          *(undefined8 *)puVar53 = *(undefined8 *)puVar47;
                          *(undefined8 *)(puVar53 + 8) = *(undefined8 *)(puVar47 + 8);
                          *(undefined8 *)(puVar53 + ((uint)(uVar41 >> 3) & 0xf)) =
                               *(undefined8 *)puVar51;
                          uVar40 = (uint)(uVar41 >> 8) & 7;
                          puVar53 = puVar53 + ((uint)(uVar41 >> 3) & 0xf) + uVar40;
                          puVar51 = puVar51 + uVar40;
                          puVar47 = puVar53 + -auVar65._4_4_;
                          if (param_4 <= puVar47) {
                            *(undefined8 *)puVar53 = *(undefined8 *)puVar47;
                            *(undefined8 *)(puVar53 + 8) = *(undefined8 *)(puVar47 + 8);
                            *(undefined8 *)(puVar53 + ((uint)(uVar41 >> 0xb) & 0xf)) =
                                 *(undefined8 *)puVar51;
                            uVar40 = (uint)(uVar41 >> 0x10) & 7;
                            puVar47 = puVar53 + ((uint)(uVar41 >> 0xb) & 0xf) + uVar40;
                            puVar51 = puVar51 + uVar40;
                            puVar53 = puVar47 + -auVar65._8_4_;
                            if (param_4 <= puVar53) {
                              *(undefined8 *)puVar47 = *(undefined8 *)puVar53;
                              *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar53 + 8);
                              *(undefined8 *)(puVar47 + ((uint)(uVar41 >> 0x13) & 0xf)) =
                                   *(undefined8 *)puVar51;
                              uVar40 = (uint)(uVar41 >> 0x18) & 7;
                              puVar53 = puVar47 + ((uint)(uVar41 >> 0x13) & 0xf) + uVar40;
                              puVar51 = puVar51 + uVar40;
                              puVar47 = puVar53 + -auVar65._12_4_;
                              if (param_4 <= puVar47) {
                                *(undefined8 *)puVar53 = *(undefined8 *)puVar47;
                                *(undefined8 *)(puVar53 + 8) = *(undefined8 *)(puVar47 + 8);
                                *(undefined8 *)(puVar53 + ((uint)(uVar41 >> 0x1b) & 0xf)) =
                                     *(undefined8 *)puVar51;
                                uVar40 = (uint)(uVar41 >> 0x20);
                                puVar47 = puVar53 + ((uint)(uVar41 >> 0x1b) & 0xf) + (uVar40 & 7);
                                puVar51 = puVar51 + (uVar40 & 7);
                                puVar53 = puVar47 + -auVar67._0_4_;
                                if (param_4 <= puVar53) {
                                  *(undefined8 *)puVar47 = *(undefined8 *)puVar53;
                                  *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar53 + 8);
                                  *(undefined8 *)(puVar47 + (uVar40 >> 3 & 0xf)) =
                                       *(undefined8 *)puVar51;
                                  uVar38 = uVar40 >> 8 & 7;
                                  puVar53 = puVar47 + (uVar40 >> 3 & 0xf) + uVar38;
                                  puVar51 = puVar51 + uVar38;
                                  puVar47 = puVar53 + -auVar67._4_4_;
                                  if (param_4 <= puVar47) {
                                    *(undefined8 *)puVar53 = *(undefined8 *)puVar47;
                                    *(undefined8 *)(puVar53 + 8) = *(undefined8 *)(puVar47 + 8);
                                    *(undefined8 *)(puVar53 + (uVar40 >> 0xb & 0xf)) =
                                         *(undefined8 *)puVar51;
                                    uVar38 = (ushort)(uVar41 >> 0x30) & 7;
                                    puVar53 = puVar53 + (uVar40 >> 0xb & 0xf) + uVar38;
                                    puVar47 = puVar53 + -auVar67._8_4_;
                                    if (param_4 <= puVar47) {
                                      *(undefined8 *)puVar53 = *(undefined8 *)puVar47;
                                      *(undefined8 *)(puVar53 + 8) = *(undefined8 *)(puVar47 + 8);
                                      uVar50 = (ulonglong)-auVar67._12_4_;
                                      *(undefined8 *)(puVar53 + (uVar40 >> 0x13 & 0xf)) =
                                           *(undefined8 *)(puVar51 + uVar38);
                                      uVar39 = (byte)(uVar41 >> 0x38) & 7;
                                      puVar47 = puVar53 + (uVar40 >> 0x13 & 0xf) + uVar39;
                                      puVar51 = puVar51 + uVar38 + uVar39;
                                      puVar53 = puVar47 + -auVar67._12_4_;
                                      if (param_4 <= puVar53) {
                                        *(undefined8 *)puVar47 = *(undefined8 *)puVar53;
                                        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar53 + 8);
                                        puVar47 = puVar47 + (uVar40 >> 0x1b & 0xf);
                                        pauVar61 = pauVar61 + 1;
                                        goto LAB_14f3c5596;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto code_r0x00014f3c5d00;
        pcVar54 = "OODLE ERROR : corruption : mp >= window_base\n";
        iVar49 = 0xee;
        goto LAB_14f3c5cf3;
      }
      iVar49 = 0;
      puVar53 = puVar47;
      if (uVar19 != 0) {
        for (; (uVar19 >> iVar49 & 1) == 0; iVar49 = iVar49 + 1) {
        }
      }
      while (3 < iVar49) {
        uVar40 = *(uint *)*pauVar61;
        iVar49 = iVar49 + -4;
        pauVar61 = (undefined1 (*) [16])(*pauVar61 + 4);
        auVar68._8_8_ = (ulonglong)(uint)-(int)uVar50 << 0x20;
        auVar68._0_8_ = *(undefined8 *)puVar59;
        uVar38 = (uint)(ushort)((ushort)((byte)(uVar40 >> 7) & 1) |
                                (ushort)((byte)(uVar40 >> 0xf) & 1) << 1 |
                                (ushort)((byte)(uVar40 >> 0x17) & 1) << 2 |
                               (ushort)(byte)(uVar40 >> 0x1f) << 3);
        auVar62 = pshufb(auVar68,(undefined1  [16])c_offset_shuffles[(int)uVar38]);
        puVar59 = (ushort *)((longlong)puVar59 + (longlong)c_comp_advance[(int)uVar38]);
        *(undefined8 *)puVar53 = *(undefined8 *)puVar51;
        puVar53 = puVar53 + (uVar40 & 7);
        local_198 = -auVar62._0_4_;
        iStack_194 = -auVar62._4_4_;
        iStack_190 = -auVar62._8_4_;
        iStack_18c = -auVar62._12_4_;
        puVar51 = puVar51 + (uVar40 & 7);
        puVar47 = puVar53 + local_198;
        if (puVar47 < param_4) {
LAB_14f3c565b:
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto code_r0x00014f3c5d00;
          pcVar54 = "OODLE ERROR : corruption : mp >= window_base\n";
          iVar49 = 0xfb;
          goto LAB_14f3c5cf3;
        }
        *(undefined8 *)puVar53 = *(undefined8 *)puVar47;
        *(undefined8 *)(puVar53 + 8) = *(undefined8 *)(puVar47 + 8);
        *(undefined8 *)(puVar53 + (uVar40 >> 3 & 0xf)) = *(undefined8 *)puVar51;
        uVar38 = uVar40 >> 8 & 7;
        puVar47 = puVar53 + (uVar40 >> 3 & 0xf) + uVar38;
        puVar51 = puVar51 + uVar38;
        puVar53 = puVar47 + iStack_194;
        if (puVar53 < param_4) goto LAB_14f3c565b;
        *(undefined8 *)puVar47 = *(undefined8 *)puVar53;
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar53 + 8);
        *(undefined8 *)(puVar47 + (uVar40 >> 0xb & 0xf)) = *(undefined8 *)puVar51;
        uVar38 = uVar40 >> 0x10 & 7;
        puVar53 = puVar47 + (uVar40 >> 0xb & 0xf) + uVar38;
        puVar47 = puVar53 + iStack_190;
        if (puVar47 < param_4) goto LAB_14f3c565b;
        uVar50 = (ulonglong)iStack_18c;
        *(undefined8 *)puVar53 = *(undefined8 *)puVar47;
        *(undefined8 *)(puVar53 + 8) = *(undefined8 *)(puVar47 + 8);
        *(undefined8 *)(puVar53 + (uVar40 >> 0x13 & 0xf)) = *(undefined8 *)(puVar51 + uVar38);
        uVar39 = uVar40 >> 0x18 & 7;
        puVar53 = puVar53 + (uVar40 >> 0x13 & 0xf) + uVar39;
        puVar51 = puVar51 + uVar38 + uVar39;
        puVar47 = puVar53 + uVar50;
        if (puVar47 < param_4) goto LAB_14f3c565b;
        *(undefined8 *)puVar53 = *(undefined8 *)puVar47;
        *(undefined8 *)(puVar53 + 8) = *(undefined8 *)(puVar47 + 8);
        puVar53 = puVar53 + (uVar40 >> 0x1b & 0xf);
      }
      while (iVar49 != 0) {
        iVar49 = iVar49 + -1;
        bVar1 = (*pauVar61)[0];
        pauVar61 = (undefined1 (*) [16])(*pauVar61 + 1);
        uVar19 = *puVar59;
        *(undefined8 *)puVar53 = *(undefined8 *)puVar51;
        puVar53 = puVar53 + (bVar1 & 7);
        puVar51 = puVar51 + (bVar1 & 7);
        uVar40 = (uint)uVar50 ^ (-(uint)uVar19 ^ (uint)uVar50) & (bVar1 >> 7) - 1;
        uVar50 = (ulonglong)uVar40;
        puVar59 = (ushort *)((longlong)puVar59 + (ulonglong)((bVar1 >> 7) - 1 & 2));
        puVar47 = puVar53 + (int)uVar40;
        if (puVar47 < param_4) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto code_r0x00014f3c5d00;
          pcVar54 = "OODLE ERROR : corruption : mp >= window_base\n";
          iVar49 = 0x101;
          goto LAB_14f3c5cf3;
        }
        *(undefined8 *)puVar53 = *(undefined8 *)puVar47;
        *(undefined8 *)(puVar53 + 8) = *(undefined8 *)(puVar47 + 8);
        puVar53 = puVar53 + ((bVar1 & 0x78) >> 3);
      }
      bVar1 = (*pauVar61)[0];
      pauVar61 = (undefined1 (*) [16])(*pauVar61 + 1);
      if (2 < bVar1) {
        return (uchar *)0x0;
      }
      if (bVar1 == 0) {
        if (puVar44 < local_1c8) {
          uVar41 = (ulonglong)(byte)*puVar44;
          puVar56 = (ushort *)((longlong)puVar55 + 1);
          puVar58 = (ushort *)((longlong)puVar44 + 1);
          if (0xfb < uVar41) {
            if (local_1c8 < puVar56) {
              uVar41 = 0;
            }
            else {
              uVar19 = *puVar58;
              puVar58 = (ushort *)((longlong)puVar44 + 3);
              puVar56 = (ushort *)((longlong)puVar55 + 3);
              uVar41 = uVar41 + (ulonglong)uVar19 * 4;
            }
          }
        }
        else {
          uVar41 = 0;
        }
        lVar42 = uVar41 + 0x40;
        if ((longlong)local_1d8 - (longlong)puVar53 < lVar42) goto LAB_14f3c56e5;
        if ((longlong)local_1f8 - (longlong)puVar51 < lVar42) goto LAB_14f3c56ae;
        do {
          uVar3 = *(undefined8 *)puVar51;
          uVar21 = *(undefined8 *)(puVar51 + 8);
          puVar51 = puVar51 + 0x10;
          lVar42 = lVar42 + -0x10;
          *(undefined8 *)puVar53 = uVar3;
          *(undefined8 *)(puVar53 + 8) = uVar21;
          puVar53 = puVar53 + 0x10;
        } while (0x10 < lVar42);
        puVar47 = puVar53 + lVar42;
        puVar51 = puVar51 + lVar42;
        uVar3 = *(undefined8 *)(puVar51 + -8);
        *(undefined8 *)(puVar47 + -0x10) = *(undefined8 *)(puVar51 + -0x10);
        *(undefined8 *)(puVar47 + -8) = uVar3;
      }
      else {
        if (bVar1 != 1) {
          return (uchar *)0x0;
        }
        if (puVar44 < local_1c8) {
          uVar50 = (ulonglong)(byte)*puVar44;
          puVar56 = (ushort *)((longlong)puVar55 + 1);
          puVar58 = (ushort *)((longlong)puVar44 + 1);
          if (0xfb < uVar50) {
            if (local_1c8 < puVar56) {
              uVar50 = 0;
            }
            else {
              uVar19 = *puVar58;
              puVar58 = (ushort *)((longlong)puVar44 + 3);
              puVar56 = (ushort *)((longlong)puVar55 + 3);
              uVar50 = uVar50 + (ulonglong)uVar19 * 4;
            }
          }
        }
        else {
          uVar50 = 0;
        }
        lVar42 = (longlong)local_1d8 + -(longlong)puVar53;
        if (lVar42 < (longlong)(uVar50 + 99)) {
          if (lVar42 < (longlong)(uVar50 + 0x5b)) goto LAB_14f3c5745;
          if (-(longlong)puVar53 + (longlong)local_1d0 < (longlong)(uVar50 + 99))
          goto LAB_14f3c5713;
        }
        uVar19 = *puVar59;
        puVar47 = puVar53 + uVar50 + 0x5b;
        puVar59 = puVar59 + 1;
        uVar50 = (ulonglong)(int)-(uint)uVar19;
        puVar48 = puVar53 + uVar50;
        if (puVar48 < param_4) goto LAB_14f3c5773;
        *(undefined8 *)puVar53 = *(undefined8 *)puVar48;
        *(undefined8 *)(puVar53 + 8) = *(undefined8 *)(puVar48 + 8);
        *(undefined8 *)(puVar53 + 0x10) = *(undefined8 *)(puVar48 + 0x10);
        *(undefined8 *)(puVar53 + 0x18) = *(undefined8 *)(puVar48 + 0x18);
        *(undefined8 *)(puVar53 + 0x20) = *(undefined8 *)(puVar48 + 0x20);
        *(undefined8 *)(puVar53 + 0x28) = *(undefined8 *)(puVar48 + 0x28);
        *(undefined8 *)(puVar53 + 0x30) = *(undefined8 *)(puVar48 + 0x30);
        *(undefined8 *)(puVar53 + 0x38) = *(undefined8 *)(puVar48 + 0x38);
        puVar53 = puVar53 + 0x40;
        puVar48 = puVar48 + 0x40;
        do {
          uVar3 = *(undefined8 *)puVar48;
          puVar48 = puVar48 + 8;
          *(undefined8 *)puVar53 = uVar3;
          puVar53 = puVar53 + 8;
        } while (puVar53 < puVar47);
      }
LAB_14f3c5596:
      puVar55 = puVar56;
      puVar44 = puVar58;
    } while (pauVar61 < (undefined1 (*) [16])(local_1c0[-1] + 1));
  }
  iVar49 = (int)uVar50;
  if (local_1d8 < puVar47) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f3c5d00;
    pcVar54 = "OODLE ERROR : corruption : (to_ptr <= parse_chunk_end)\n";
    iVar49 = 0x1c0;
  }
  else {
    pauVar57 = pauVar61 + 1;
    if (local_1e0 <= puVar51) {
      if (local_1f8 < puVar51) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto code_r0x00014f3c5d00;
        pcVar54 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
        iVar49 = 0x1e7;
        goto LAB_14f3c5cf3;
      }
      lVar42 = -(longlong)local_1f8;
      local_1e0 = local_d7;
      local_1f8 = local_d7;
      puVar51 = puVar51 + (longlong)(local_d7 + lVar42);
    }
    if (local_1e8 <= puVar59) {
      if (local_1f0 < puVar59) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto code_r0x00014f3c5d00;
        pcVar54 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
        iVar49 = 0x1e8;
        goto LAB_14f3c5cf3;
      }
      lVar42 = (longlong)local_168 - (longlong)local_1f0;
      local_1f0 = local_168;
      local_1e8 = local_168;
      puVar59 = (ushort *)((longlong)puVar59 + lVar42);
    }
    puVar53 = local_1f8;
    if (pauVar61 < local_1c0) {
      puVar44 = puVar58 + 1;
      puVar48 = puVar47;
      puVar55 = local_1f0;
      puVar56 = puVar58;
      do {
        if (pauVar57 <= pauVar61) {
          pauVar57 = pauVar61 + 1;
          if (local_1e0 <= puVar51) {
            if (puVar53 < puVar51) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto code_r0x00014f3c5d00;
              pcVar54 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              iVar49 = 500;
              goto LAB_14f3c5cf3;
            }
            lVar42 = -(longlong)puVar53;
            puVar53 = local_d7;
            puVar51 = puVar51 + (longlong)(local_d7 + lVar42);
            local_1e0 = local_d7;
            local_1f8 = puVar53;
          }
          if (local_1e8 <= puVar59) {
            if (puVar55 < puVar59) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto code_r0x00014f3c5d00;
              pcVar54 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              iVar49 = 0x1f5;
              goto LAB_14f3c5cf3;
            }
            lVar42 = (longlong)local_168 - (longlong)puVar55;
            puVar55 = local_168;
            puVar59 = (ushort *)((longlong)puVar59 + lVar42);
            local_1e8 = local_168;
            local_1f0 = puVar55;
          }
        }
        bVar2 = (*pauVar61)[0];
        puVar22 = *pauVar61;
        puVar45 = puVar44;
        puVar58 = puVar56;
        if (bVar2 < 0x18) {
          if (2 < bVar2) {
            return (uchar *)0x0;
          }
          if (bVar2 == 0) {
            if (puVar56 < local_1c8) {
              uVar41 = (ulonglong)(byte)*puVar56;
              puVar45 = (ushort *)((longlong)puVar44 + 1);
              puVar58 = (ushort *)((longlong)puVar56 + 1);
              if (0xfb < uVar41) {
                if (local_1c8 < puVar45) {
                  uVar41 = 0;
                }
                else {
                  uVar19 = *puVar58;
                  puVar58 = (ushort *)((longlong)puVar56 + 3);
                  puVar45 = (ushort *)((longlong)puVar44 + 3);
                  uVar41 = uVar41 + (ulonglong)uVar19 * 4;
                }
              }
            }
            else {
              uVar41 = 0;
            }
            lVar42 = uVar41 + 0x40;
            if ((longlong)local_1d8 - (longlong)puVar48 < lVar42) goto LAB_14f3c56e5;
            if ((longlong)puVar53 - (longlong)puVar51 < lVar42) goto LAB_14f3c56ae;
            do {
              uVar3 = *(undefined8 *)puVar51;
              uVar21 = *(undefined8 *)(puVar51 + 8);
              puVar51 = puVar51 + 0x10;
              lVar42 = lVar42 + -0x10;
              *(undefined8 *)puVar48 = uVar3;
              *(undefined8 *)(puVar48 + 8) = uVar21;
              puVar48 = puVar48 + 0x10;
            } while (0x10 < lVar42);
            puVar47 = puVar48 + lVar42;
            puVar51 = puVar51 + lVar42;
            uVar3 = *(undefined8 *)(puVar51 + -8);
            *(undefined8 *)(puVar47 + -0x10) = *(undefined8 *)(puVar51 + -0x10);
            *(undefined8 *)(puVar47 + -8) = uVar3;
          }
          else {
            if (bVar2 != 1) {
              return (uchar *)0x0;
            }
            if (puVar56 < local_1c8) {
              uVar50 = (ulonglong)(byte)*puVar56;
              puVar45 = (ushort *)((longlong)puVar44 + 1);
              puVar58 = (ushort *)((longlong)puVar56 + 1);
              if (0xfb < uVar50) {
                if (local_1c8 < puVar45) {
                  uVar50 = 0;
                }
                else {
                  uVar19 = *puVar58;
                  puVar58 = (ushort *)((longlong)puVar56 + 3);
                  puVar45 = (ushort *)((longlong)puVar44 + 3);
                  uVar50 = uVar50 + (ulonglong)uVar19 * 4;
                }
              }
            }
            else {
              uVar50 = 0;
            }
            lVar42 = (longlong)local_1d8 + -(longlong)puVar48;
            if (lVar42 < (longlong)(uVar50 + 99)) {
              if (lVar42 < (longlong)(uVar50 + 0x5b)) goto LAB_14f3c5745;
              if (-(longlong)puVar48 + (longlong)local_1d0 < (longlong)(uVar50 + 99))
              goto LAB_14f3c5713;
            }
            uVar19 = *puVar59;
            puVar47 = puVar48 + uVar50 + 0x5b;
            puVar59 = puVar59 + 1;
            uVar50 = (ulonglong)(int)-(uint)uVar19;
            puVar43 = puVar48 + uVar50;
            if (puVar43 < param_4) goto LAB_14f3c5773;
            *(undefined8 *)puVar48 = *(undefined8 *)puVar43;
            *(undefined8 *)(puVar48 + 8) = *(undefined8 *)(puVar43 + 8);
            *(undefined8 *)(puVar48 + 0x10) = *(undefined8 *)(puVar43 + 0x10);
            *(undefined8 *)(puVar48 + 0x18) = *(undefined8 *)(puVar43 + 0x18);
            *(undefined8 *)(puVar48 + 0x20) = *(undefined8 *)(puVar43 + 0x20);
            *(undefined8 *)(puVar48 + 0x28) = *(undefined8 *)(puVar43 + 0x28);
            *(undefined8 *)(puVar48 + 0x30) = *(undefined8 *)(puVar43 + 0x30);
            *(undefined8 *)(puVar48 + 0x38) = *(undefined8 *)(puVar43 + 0x38);
            puVar48 = puVar48 + 0x40;
            puVar43 = puVar43 + 0x40;
            do {
              uVar3 = *(undefined8 *)puVar43;
              puVar43 = puVar43 + 8;
              *(undefined8 *)puVar48 = uVar3;
              puVar48 = puVar48 + 8;
            } while (puVar48 < puVar47);
          }
          pauVar57 = (undefined1 (*) [16])(pauVar61[1] + 1);
          if (local_1e0 <= puVar51) {
            if (puVar53 < puVar51) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto code_r0x00014f3c5d00;
              pcVar54 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              iVar49 = 0x208;
              goto LAB_14f3c5cf3;
            }
            lVar42 = -(longlong)puVar53;
            puVar53 = local_d7;
            puVar51 = puVar51 + (longlong)(local_d7 + lVar42);
            local_1e0 = local_d7;
            local_1f8 = puVar53;
          }
          if (local_1e8 <= puVar59) {
            if (puVar55 < puVar59) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto code_r0x00014f3c5d00;
              pcVar54 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              iVar49 = 0x209;
              goto LAB_14f3c5cf3;
            }
            lVar42 = (longlong)local_168 - (longlong)puVar55;
            puVar55 = local_168;
            puVar59 = (ushort *)((longlong)puVar59 + lVar42);
            local_1e8 = local_168;
            local_1f0 = puVar55;
          }
        }
        else {
          uVar19 = *puVar59;
          if (local_1d0 < puVar48 + 8) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto code_r0x00014f3c5d00;
            pcVar54 = "OODLE ERROR : corruption : (to_ptr+8 <= overrun_chunk_end)\n";
            iVar49 = 0x1fc;
            goto LAB_14f3c5cf3;
          }
          *(undefined8 *)puVar48 = *(undefined8 *)puVar51;
          puVar48 = puVar48 + (bVar2 & 7);
          puVar51 = puVar51 + (bVar2 & 7);
          uVar40 = (uint)uVar50 ^ (-(uint)uVar19 ^ (uint)uVar50) & (bVar2 >> 7) - 1;
          uVar50 = (ulonglong)uVar40;
          puVar59 = (ushort *)((longlong)puVar59 + (ulonglong)((bVar2 >> 7) - 1 & 2));
          puVar47 = puVar48 + (int)uVar40;
          if (puVar47 < param_4) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto code_r0x00014f3c5d00;
            pcVar54 = "OODLE ERROR : corruption : mp >= window_base\n";
            iVar49 = 0x1fc;
            goto LAB_14f3c5cf3;
          }
          if (local_1d0 < puVar48 + 0x10) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto code_r0x00014f3c5d00;
            pcVar54 = "OODLE ERROR : corruption : (to_ptr+16 <= overrun_chunk_end)\n";
            iVar49 = 0x1fc;
            goto LAB_14f3c5cf3;
          }
          *(undefined8 *)puVar48 = *(undefined8 *)puVar47;
          *(undefined8 *)(puVar48 + 8) = *(undefined8 *)(puVar47 + 8);
          puVar47 = puVar48 + (bVar2 >> 3 & 0xf);
          puVar53 = local_1f8;
        }
        iVar49 = (int)uVar50;
        puVar44 = puVar45;
        puVar48 = puVar47;
        puVar56 = puVar58;
        pauVar61 = (undefined1 (*) [16])(puVar22 + 1);
      } while ((undefined1 (*) [16])(puVar22 + 1) < local_1c0);
    }
    if (local_1d8 <= puVar47) {
      if (local_1d8 < puVar47) {
        return (uchar *)0x0;
      }
LAB_14f3c5d4e:
      if (local_1f0 < puVar59) {
        return (uchar *)0x0;
      }
      if (local_1f8 < puVar51) {
        return (uchar *)0x0;
      }
      *local_1b8 = iVar49;
      local_1a8->literals_ptr = puVar51 + ((longlong)local_1b0 - (longlong)local_1f8);
      local_1a8->off16_ptr =
           (uchar *)(((longlong)local_1a0 - (longlong)local_1f0) + (longlong)puVar59);
      if (local_1c8 < puVar58) {
        return (uchar *)0x0;
      }
      local_1a8->excesses_ptr = (uchar *)puVar58;
      return param_5;
    }
    sVar52 = (longlong)local_1d8 - (longlong)puVar47;
    if (puVar51 + sVar52 <= puVar53) {
      memcpy(puVar47,puVar51,sVar52);
      puVar51 = puVar51 + sVar52;
      goto LAB_14f3c5d4e;
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f3c5d00;
    pcVar54 = "OODLE ERROR : corruption : (literals_ptr+lrl <= literals_end)\n";
    iVar49 = 0x217;
  }
LAB_14f3c5cf3:
  pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_decode_parse_outer.inl";
LAB_14f3c5cfa:
  (*g_fp_OodleCore_Plugin_Printf)(0,pcVar46,iVar49,pcVar54);
code_r0x00014f3c5d00:
  ooLogErrorPost();
  return (uchar *)0x0;
LAB_14f3c5745:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto code_r0x00014f3c5d00;
  pcVar54 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  iVar49 = 0x86;
  pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c5cfa;
LAB_14f3c5713:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto code_r0x00014f3c5d00;
  pcVar54 = "OODLE ERROR : corruption : ( ml+8 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  iVar49 = 0x87;
  pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c5cfa;
LAB_14f3c5773:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto code_r0x00014f3c5d00;
  pcVar54 = "OODLE ERROR : corruption : mp >= window_base\n";
  iVar49 = 0x98;
  pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c5cfa;
LAB_14f3c56e5:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto code_r0x00014f3c5d00;
  pcVar54 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(parse_chunk_end-to_ptr))\n";
  iVar49 = 0x30;
  pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c5cfa;
LAB_14f3c56ae:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto code_r0x00014f3c5d00;
  pcVar54 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(literals_end-literals_ptr))\n";
  iVar49 = 0x31;
  pcVar46 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c5cfa;
}

// newLZF_decode_parse_sub_sse4 @ 14f3c5dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uchar * __cdecl
oo2::newLZF_decode_parse_sub_sse4
          (uchar *param_1,long64 param_2,uchar *param_3,uchar *param_4,uchar *param_5,
          newLZF_chunk_arrays *param_6,int *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  uchar uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  ushort uVar21;
  undefined1 auVar22 [12];
  undefined1 *puVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  int iVar39;
  uint uVar40;
  ulonglong uVar41;
  uint uVar42;
  longlong lVar43;
  uchar *puVar44;
  uchar *puVar45;
  ulonglong uVar46;
  ushort *puVar47;
  ushort *puVar48;
  char *pcVar49;
  ushort *puVar50;
  ushort *puVar51;
  uint uVar52;
  ulonglong uVar53;
  uchar *puVar54;
  size_t sVar55;
  char *pcVar56;
  ushort *puVar57;
  undefined1 (*pauVar58) [16];
  undefined1 (*pauVar59) [16];
  ushort *puVar60;
  ushort *puVar61;
  undefined8 *puVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auStack_228 [32];
  ushort *local_208;
  undefined1 (*local_200) [16];
  ushort *local_1f8;
  ushort *local_1f0;
  uchar *local_1e8;
  uchar *local_1e0;
  uchar *local_1d8;
  ushort *local_1d0;
  ushort *local_1c8;
  ushort *local_1c0;
  undefined1 (*local_1b8) [16];
  undefined1 (*local_1b0) [16];
  longlong local_1a8;
  int *local_1a0;
  uchar *local_198;
  newLZF_chunk_arrays *local_190;
  ushort *local_188;
  ushort local_158 [72];
  uchar local_c7 [127];
  ulonglong local_48;
  
  bVar38 = UNK_1531dbfff;
  bVar37 = UNK_1531dbffe;
  bVar36 = UNK_1531dbffd;
  bVar35 = UNK_1531dbffc;
  bVar34 = UNK_1531dbffb;
  bVar33 = UNK_1531dbffa;
  bVar32 = UNK_1531dbff9;
  bVar31 = UNK_1531dbff8;
  bVar30 = UNK_1531dbff7;
  bVar29 = UNK_1531dbff6;
  bVar28 = UNK_1531dbff5;
  bVar27 = UNK_1531dbff4;
  bVar26 = UNK_1531dbff3;
  bVar25 = UNK_1531dbff2;
  bVar24 = UNK_1531dbff1;
  bVar4 = __xmm_17171717171717171717171717171717;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_1c8 = (ushort *)(param_1 + param_2);
  uVar53 = (ulonglong)(uint)*param_7;
  local_190 = param_6;
  local_1a0 = param_7;
  local_208 = (ushort *)param_6->off16_end;
  local_1e0 = param_6->literals_end;
  local_1b0 = (undefined1 (*) [16])param_6->packets_end;
  pauVar59 = (undefined1 (*) [16])param_6->escape_offsets_ptr;
  puVar54 = param_6->literals_ptr;
  pauVar58 = (undefined1 (*) [16])param_6->packets_ptr;
  puVar61 = (ushort *)param_6->off16_ptr;
  puVar60 = (ushort *)param_6->excesses_ptr;
  local_1d0 = (ushort *)param_6->excesses_end;
  local_1b8 = (undefined1 (*) [16])param_6->escape_offsets_end;
  sVar55 = (longlong)local_1e0 - (longlong)puVar54;
  if (0x71 < (longlong)sVar55) {
    sVar55 = 0x71;
  }
  local_1e8 = local_1e0 + -sVar55;
  local_200 = pauVar59;
  local_1f8 = (ushort *)param_3;
  local_1d8 = param_1;
  local_198 = local_1e0;
  local_188 = local_208;
  memcpy(local_c7 + -sVar55,local_1e8,sVar55);
  local_c7[0x70] = 0;
  sVar55 = (longlong)local_208 - (longlong)puVar61;
  local_c7[0] = '\0';
  local_c7[1] = '\0';
  local_c7[2] = '\0';
  local_c7[3] = '\0';
  local_c7[4] = '\0';
  local_c7[5] = '\0';
  local_c7[6] = '\0';
  local_c7[7] = '\0';
  local_c7[8] = '\0';
  local_c7[9] = '\0';
  local_c7[10] = '\0';
  local_c7[0xb] = '\0';
  local_c7[0xc] = '\0';
  local_c7[0xd] = '\0';
  local_c7[0xe] = '\0';
  local_c7[0xf] = '\0';
  if (0x20 < (longlong)sVar55) {
    sVar55 = 0x20;
  }
  local_1f0 = (ushort *)((longlong)local_208 - sVar55);
  local_c7[0x10] = '\0';
  local_c7[0x11] = '\0';
  local_c7[0x12] = '\0';
  local_c7[0x13] = '\0';
  local_c7[0x14] = '\0';
  local_c7[0x15] = '\0';
  local_c7[0x16] = '\0';
  local_c7[0x17] = '\0';
  local_c7[0x18] = '\0';
  local_c7[0x19] = '\0';
  local_c7[0x1a] = '\0';
  local_c7[0x1b] = '\0';
  local_c7[0x1c] = '\0';
  local_c7[0x1d] = '\0';
  local_c7[0x1e] = '\0';
  local_c7[0x1f] = '\0';
  local_c7[0x20] = '\0';
  local_c7[0x21] = '\0';
  local_c7[0x22] = '\0';
  local_c7[0x23] = '\0';
  local_c7[0x24] = '\0';
  local_c7[0x25] = '\0';
  local_c7[0x26] = '\0';
  local_c7[0x27] = '\0';
  local_c7[0x28] = '\0';
  local_c7[0x29] = '\0';
  local_c7[0x2a] = '\0';
  local_c7[0x2b] = '\0';
  local_c7[0x2c] = '\0';
  local_c7[0x2d] = '\0';
  local_c7[0x2e] = '\0';
  local_c7[0x2f] = '\0';
  local_c7[0x30] = '\0';
  local_c7[0x31] = '\0';
  local_c7[0x32] = '\0';
  local_c7[0x33] = '\0';
  local_c7[0x34] = '\0';
  local_c7[0x35] = '\0';
  local_c7[0x36] = '\0';
  local_c7[0x37] = '\0';
  local_c7[0x38] = '\0';
  local_c7[0x39] = '\0';
  local_c7[0x3a] = '\0';
  local_c7[0x3b] = '\0';
  local_c7[0x3c] = '\0';
  local_c7[0x3d] = '\0';
  local_c7[0x3e] = '\0';
  local_c7[0x3f] = '\0';
  local_c7[0x40] = '\0';
  local_c7[0x41] = '\0';
  local_c7[0x42] = '\0';
  local_c7[0x43] = '\0';
  local_c7[0x44] = '\0';
  local_c7[0x45] = '\0';
  local_c7[0x46] = '\0';
  local_c7[0x47] = '\0';
  local_c7[0x48] = '\0';
  local_c7[0x49] = '\0';
  local_c7[0x4a] = '\0';
  local_c7[0x4b] = '\0';
  local_c7[0x4c] = '\0';
  local_c7[0x4d] = '\0';
  local_c7[0x4e] = '\0';
  local_c7[0x4f] = '\0';
  local_c7[0x50] = '\0';
  local_c7[0x51] = '\0';
  local_c7[0x52] = '\0';
  local_c7[0x53] = '\0';
  local_c7[0x54] = '\0';
  local_c7[0x55] = '\0';
  local_c7[0x56] = '\0';
  local_c7[0x57] = '\0';
  local_c7[0x58] = '\0';
  local_c7[0x59] = '\0';
  local_c7[0x5a] = '\0';
  local_c7[0x5b] = '\0';
  local_c7[0x5c] = '\0';
  local_c7[0x5d] = '\0';
  local_c7[0x5e] = '\0';
  local_c7[0x5f] = '\0';
  local_c7[0x60] = '\0';
  local_c7[0x61] = '\0';
  local_c7[0x62] = '\0';
  local_c7[99] = '\0';
  local_c7[100] = '\0';
  local_c7[0x65] = '\0';
  local_c7[0x66] = '\0';
  local_c7[0x67] = '\0';
  local_c7[0x68] = '\0';
  local_c7[0x69] = '\0';
  local_c7[0x6a] = '\0';
  local_c7[0x6b] = '\0';
  local_c7[0x6c] = '\0';
  local_c7[0x6d] = '\0';
  local_c7[0x6e] = '\0';
  local_c7[0x6f] = '\0';
  memcpy((void *)((longlong)local_158 - sVar55),local_1f0,sVar55);
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_158[4] = 0;
  local_158[5] = 0;
  local_158[6] = 0;
  local_158[7] = 0;
  local_158[8] = 0;
  local_158[9] = 0;
  local_158[10] = 0;
  local_158[0xb] = 0;
  local_158[0xc] = 0;
  local_158[0xd] = 0;
  local_158[0xe] = 0;
  local_158[0xf] = 0;
  if (pauVar58 < (undefined1 (*) [16])(local_1b0[-1] + 1)) {
    puVar50 = (ushort *)param_1;
    puVar47 = puVar60 + 1;
    puVar51 = puVar60;
    do {
      param_1 = (uchar *)puVar50;
      puVar60 = puVar51;
      if (local_1f8 < puVar50 + 0xb4) break;
      if (local_1e8 <= puVar54) {
        if (local_1e0 < puVar54) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3c73d2;
          pcVar56 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
          iVar39 = 0xdb;
          goto LAB_14f3c73c7;
        }
        puVar54 = puVar54 + (longlong)(local_c7 + -(longlong)local_1e0);
        local_1e8 = local_c7;
        local_1e0 = local_c7;
      }
      if (local_1f0 <= puVar61) {
        if (local_208 < puVar61) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3c73d2;
          pcVar56 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
          iVar39 = 0xdc;
          goto LAB_14f3c73c7;
        }
        puVar61 = (ushort *)((longlong)puVar61 + ((longlong)local_158 - (longlong)local_208));
        local_1f0 = local_158;
        local_208 = local_158;
      }
      auVar63 = *pauVar58;
      bVar3 = auVar63[0];
      bVar6 = auVar63[1];
      bVar7 = auVar63[2];
      bVar8 = auVar63[3];
      bVar9 = auVar63[4];
      bVar10 = auVar63[5];
      bVar11 = auVar63[6];
      bVar12 = auVar63[7];
      bVar13 = auVar63[8];
      bVar14 = auVar63[9];
      bVar15 = auVar63[10];
      bVar16 = auVar63[0xb];
      bVar17 = auVar63[0xc];
      bVar18 = auVar63[0xd];
      bVar19 = auVar63[0xe];
      bVar20 = auVar63[0xf];
      auVar65[0] = -((byte)((bVar4 < bVar3) * bVar3 | (bVar4 >= bVar3) * bVar4) == bVar4);
      auVar65[1] = -((byte)((bVar24 < bVar6) * bVar6 | (bVar24 >= bVar6) * bVar24) == bVar24);
      auVar65[2] = -((byte)((bVar25 < bVar7) * bVar7 | (bVar25 >= bVar7) * bVar25) == bVar25);
      auVar65[3] = -((byte)((bVar26 < bVar8) * bVar8 | (bVar26 >= bVar8) * bVar26) == bVar26);
      auVar65[4] = -((byte)((bVar27 < bVar9) * bVar9 | (bVar27 >= bVar9) * bVar27) == bVar27);
      auVar65[5] = -((byte)((bVar28 < bVar10) * bVar10 | (bVar28 >= bVar10) * bVar28) == bVar28);
      auVar65[6] = -((byte)((bVar29 < bVar11) * bVar11 | (bVar29 >= bVar11) * bVar29) == bVar29);
      auVar65[7] = -((byte)((bVar30 < bVar12) * bVar12 | (bVar30 >= bVar12) * bVar30) == bVar30);
      auVar65[8] = -((byte)((bVar31 < bVar13) * bVar13 | (bVar31 >= bVar13) * bVar31) == bVar31);
      auVar65[9] = -((byte)((bVar32 < bVar14) * bVar14 | (bVar32 >= bVar14) * bVar32) == bVar32);
      auVar65[10] = -((byte)((bVar33 < bVar15) * bVar15 | (bVar33 >= bVar15) * bVar33) == bVar33);
      auVar65[0xb] = -((byte)((bVar34 < bVar16) * bVar16 | (bVar34 >= bVar16) * bVar34) == bVar34);
      auVar65[0xc] = -((byte)((bVar35 < bVar17) * bVar17 | (bVar35 >= bVar17) * bVar35) == bVar35);
      auVar65[0xd] = -((byte)((bVar36 < bVar18) * bVar18 | (bVar36 >= bVar18) * bVar36) == bVar36);
      auVar65[0xe] = -((byte)((bVar37 < bVar19) * bVar19 | (bVar37 >= bVar19) * bVar37) == bVar37);
      auVar65[0xf] = -((byte)((bVar38 < bVar20) * bVar20 | (bVar38 >= bVar20) * bVar38) == bVar38);
      uVar21 = (ushort)(SUB161(auVar65 >> 7,0) & 1) | (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe | (ushort)(auVar65[0xf] >> 7) << 0xf;
      puVar57 = puVar47;
      if (uVar21 == 0) {
        uVar46 = *(ulonglong *)*pauVar58;
        iVar39 = -(int)uVar53;
        uVar21 = (ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe | (ushort)(bVar20 >> 7) << 0xf;
        auVar22._4_8_ = SUB168(ZEXT1216((undefined1  [12])0x0),4);
        auVar22._0_4_ = iVar39;
        auVar67._0_8_ = auVar22._0_8_ << 0x20;
        auVar67._8_4_ = iVar39;
        auVar67._12_4_ = iVar39;
        auVar69._8_8_ = auVar67._8_8_;
        auVar69._0_8_ = *(undefined8 *)puVar61;
        auVar63 = pshufb(auVar69,(undefined1  [16])c_offset_shuffles[uVar21 & 0xf]);
        uVar42 = uVar21 >> 4 & 0xf;
        auVar64._8_8_ = auVar63._8_8_;
        auVar64._0_8_ = *(undefined8 *)((longlong)puVar61 + (longlong)c_comp_advance[uVar21 & 0xf]);
        puVar62 = (undefined8 *)
                  ((longlong)puVar61 + (longlong)c_comp_advance[uVar21 & 0xf] +
                  (longlong)c_comp_advance[uVar42]);
        auVar65 = pshufb(auVar64,(undefined1  [16])c_offset_shuffles[uVar42]);
        uVar42 = uVar21 >> 8 & 0xf;
        auVar66._8_8_ = auVar65._8_8_;
        auVar66._0_8_ = *puVar62;
        puVar62 = (undefined8 *)((longlong)puVar62 + (longlong)c_comp_advance[uVar42]);
        auVar67 = pshufb(auVar66,(undefined1  [16])c_offset_shuffles[uVar42]);
        auVar68._8_8_ = auVar67._8_8_;
        auVar68._0_8_ = *puVar62;
        auVar69 = pshufb(auVar68,(undefined1  [16])c_offset_shuffles[uVar21 >> 0xc]);
        puVar61 = (ushort *)((longlong)puVar62 + (longlong)c_comp_advance[uVar21 >> 0xc]);
        lVar43 = (longlong)-auVar63._0_4_;
        iVar39 = -auVar69._12_4_;
        uVar1 = *(undefined8 *)puVar54;
        uVar2 = *(undefined8 *)((longlong)(int)uVar53 + (longlong)puVar50);
        uVar53 = (ulonglong)((uint)uVar46 & 7);
        puVar54 = puVar54 + uVar53;
        *(ulonglong *)puVar50 =
             CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar1 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                        (char)((ulonglong)uVar1 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                 (char)((ulonglong)uVar1 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                          (char)((ulonglong)uVar1 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar2 >> 0x10)
                                                                   + (char)((ulonglong)uVar1 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar2
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar1
                                                                                  >> 8),
                                                                            (char)uVar2 +
                                                                            (char)uVar1)))))));
        puVar62 = (undefined8 *)((longlong)puVar50 + uVar53);
        *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)((uint)(uVar46 >> 3) & 0xf));
        uVar1 = *(undefined8 *)puVar54;
        uVar53 = (ulonglong)((uint)(uVar46 >> 8) & 7);
        puVar54 = puVar54 + uVar53;
        uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar1 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar1 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar1 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar1 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar1 >> 8),(char)uVar2 + (char)uVar1)))
                                                  ))));
        puVar62 = (undefined8 *)((longlong)puVar62 + uVar53);
        lVar43 = (longlong)-auVar63._4_4_;
        *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)((uint)(uVar46 >> 0xb) & 0xf));
        uVar1 = *(undefined8 *)puVar54;
        uVar53 = (ulonglong)((uint)(uVar46 >> 0x10) & 7);
        puVar54 = puVar54 + uVar53;
        uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar1 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar1 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar1 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar1 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar1 >> 8),(char)uVar2 + (char)uVar1)))
                                                  ))));
        puVar62 = (undefined8 *)((longlong)puVar62 + uVar53);
        lVar43 = (longlong)-auVar63._8_4_;
        *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)((uint)(uVar46 >> 0x13) & 0xf));
        uVar1 = *(undefined8 *)puVar54;
        uVar53 = (ulonglong)((uint)(uVar46 >> 0x18) & 7);
        puVar54 = puVar54 + uVar53;
        uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        lVar43 = (longlong)-auVar63._12_4_;
        *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar1 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar1 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar1 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar1 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar1 >> 8),(char)uVar2 + (char)uVar1)))
                                                  ))));
        puVar62 = (undefined8 *)((longlong)puVar62 + uVar53);
        *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)((uint)(uVar46 >> 0x1b) & 0xf));
        uVar1 = *(undefined8 *)puVar54;
        uVar42 = (uint)(uVar46 >> 0x20);
        puVar54 = puVar54 + (uVar42 & 7);
        uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        lVar43 = (longlong)-auVar65._0_4_;
        *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar1 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar1 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar1 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar1 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar1 >> 8),(char)uVar2 + (char)uVar1)))
                                                  ))));
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)(uVar42 & 7));
        *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)(uVar42 >> 3 & 0xf));
        uVar1 = *(undefined8 *)puVar54;
        uVar53 = (ulonglong)(uVar42 >> 8 & 7);
        puVar54 = puVar54 + uVar53;
        uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        lVar43 = (longlong)-auVar65._4_4_;
        *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar1 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar1 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar1 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar1 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar1 >> 8),(char)uVar2 + (char)uVar1)))
                                                  ))));
        puVar62 = (undefined8 *)((longlong)puVar62 + uVar53);
        *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)(uVar42 >> 0xb & 0xf));
        uVar1 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        uVar2 = *(undefined8 *)puVar54;
        uVar53 = (ulonglong)((ushort)(uVar46 >> 0x30) & 7);
        lVar43 = (longlong)-auVar65._8_4_;
        puVar54 = puVar54 + uVar53;
        *puVar62 = CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar1 >> 0x30) +
                                     (char)((ulonglong)uVar2 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                              (char)((ulonglong)uVar2 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                       (char)((ulonglong)uVar2 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                                (char)((ulonglong)uVar2 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar1 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar2 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar1 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar2 >> 8),(char)uVar1 + (char)uVar2)))
                                                  ))));
        puVar62 = (undefined8 *)((longlong)puVar62 + uVar53);
        *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)(uVar42 >> 0x13 & 0xf));
        uVar1 = *(undefined8 *)puVar54;
        uVar53 = (ulonglong)((byte)(uVar46 >> 0x38) & 7);
        puVar54 = puVar54 + uVar53;
        uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        lVar43 = (longlong)-auVar65._12_4_;
        *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar1 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar1 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar1 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar1 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar1 >> 8),(char)uVar2 + (char)uVar1)))
                                                  ))));
        puVar62 = (undefined8 *)((longlong)puVar62 + uVar53);
        *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)(uVar42 >> 0x1b & 0xf));
        uVar1 = *(undefined8 *)puVar54;
        uVar46 = *(ulonglong *)(*pauVar58 + 8);
        uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        uVar53 = (ulonglong)((uint)uVar46 & 7);
        puVar54 = puVar54 + uVar53;
        lVar43 = (longlong)-auVar67._0_4_;
        *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar1 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar1 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar1 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar1 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar1 >> 8),(char)uVar2 + (char)uVar1)))
                                                  ))));
        puVar62 = (undefined8 *)((longlong)puVar62 + uVar53);
        *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)((uint)(uVar46 >> 3) & 0xf));
        uVar1 = *(undefined8 *)puVar54;
        uVar53 = (ulonglong)((uint)(uVar46 >> 8) & 7);
        puVar54 = puVar54 + uVar53;
        uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        lVar43 = (longlong)-auVar67._4_4_;
        *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar1 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar1 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar1 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar1 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar1 >> 8),(char)uVar2 + (char)uVar1)))
                                                  ))));
        puVar62 = (undefined8 *)((longlong)puVar62 + uVar53);
        *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)((uint)(uVar46 >> 0xb) & 0xf));
        uVar1 = *(undefined8 *)puVar54;
        uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar1 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar1 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar1 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar1 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar1 >> 8),(char)uVar2 + (char)uVar1)))
                                                  ))));
        lVar43 = (longlong)-auVar67._8_4_;
        uVar53 = (ulonglong)((uint)(uVar46 >> 0x10) & 7);
        puVar62 = (undefined8 *)((longlong)puVar62 + uVar53);
        puVar54 = puVar54 + uVar53;
        *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)((uint)(uVar46 >> 0x13) & 0xf));
        uVar1 = *(undefined8 *)puVar54;
        uVar53 = (ulonglong)((uint)(uVar46 >> 0x18) & 7);
        puVar54 = puVar54 + uVar53;
        uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        lVar43 = (longlong)-auVar67._12_4_;
        *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar1 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar1 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar1 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar1 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar1 >> 8),(char)uVar2 + (char)uVar1)))
                                                  ))));
        puVar62 = (undefined8 *)((longlong)puVar62 + uVar53);
        *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)((uint)(uVar46 >> 0x1b) & 0xf));
        uVar1 = *(undefined8 *)puVar54;
        uVar42 = (uint)(uVar46 >> 0x20);
        puVar54 = puVar54 + (uVar42 & 7);
        uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        lVar43 = (longlong)-auVar69._0_4_;
        *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar1 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar1 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar1 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar1 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar1 >> 8),(char)uVar2 + (char)uVar1)))
                                                  ))));
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)(uVar42 & 7));
        *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)(uVar42 >> 3 & 0xf));
        uVar1 = *(undefined8 *)puVar54;
        uVar53 = (ulonglong)(uVar42 >> 8 & 7);
        puVar54 = puVar54 + uVar53;
        uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar1 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar1 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar1 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar1 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar1 >> 8),(char)uVar2 + (char)uVar1)))
                                                  ))));
        puVar62 = (undefined8 *)((longlong)puVar62 + uVar53);
        lVar43 = (longlong)-auVar69._4_4_;
        *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)(uVar42 >> 0xb & 0xf));
        uVar1 = *(undefined8 *)puVar54;
        uVar41 = (ulonglong)((ushort)(uVar46 >> 0x30) & 7);
        uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar1 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar1 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar1 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar1 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar1 >> 8),(char)uVar2 + (char)uVar1)))
                                                  ))));
        puVar62 = (undefined8 *)((longlong)puVar62 + uVar41);
        lVar43 = (longlong)-auVar69._8_4_;
        uVar53 = (ulonglong)iVar39;
        *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
        uVar1 = *(undefined8 *)(puVar54 + uVar41);
        puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)(uVar42 >> 0x13 & 0xf));
        uVar46 = (ulonglong)((byte)(uVar46 >> 0x38) & 7);
        puVar54 = puVar54 + uVar41 + uVar46;
        uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
        *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar1 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar1 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar1 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar1 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar1 >> 8),(char)uVar2 + (char)uVar1)))
                                                  ))));
        puVar62 = (undefined8 *)((longlong)puVar62 + uVar46);
        *puVar62 = *(undefined8 *)((longlong)iVar39 + (longlong)puVar62);
        puVar62[1] = *(undefined8 *)((longlong)iVar39 + 8 + (longlong)puVar62);
        param_1 = (uchar *)((longlong)puVar62 + (ulonglong)(uVar42 >> 0x1b & 0xf));
        pauVar58 = pauVar58 + 1;
      }
      else {
        uVar42 = 0;
        if (uVar21 != 0) {
          for (; (uVar21 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
          }
        }
        if (3 < (int)uVar42) {
          uVar46 = (ulonglong)(uVar42 >> 2);
          uVar42 = uVar42 + (uVar42 >> 2) * -4;
          do {
            uVar52 = *(uint *)*pauVar58;
            pauVar58 = (undefined1 (*) [16])(*pauVar58 + 4);
            uVar40 = (uint)(ushort)((ushort)((byte)(uVar52 >> 7) & 1) |
                                    (ushort)((byte)(uVar52 >> 0xf) & 1) << 1 |
                                    (ushort)((byte)(uVar52 >> 0x17) & 1) << 2 |
                                   (ushort)(byte)(uVar52 >> 0x1f) << 3);
            auVar63._8_8_ = (ulonglong)(uint)-(int)uVar53 << 0x20;
            auVar63._0_8_ = *(undefined8 *)puVar61;
            auVar63 = pshufb(auVar63,(undefined1  [16])c_offset_shuffles[(int)uVar40]);
            puVar61 = (ushort *)((longlong)puVar61 + (longlong)c_comp_advance[(int)uVar40]);
            uVar1 = *(undefined8 *)puVar54;
            uVar2 = *(undefined8 *)((longlong)(int)uVar53 + (longlong)puVar50);
            puVar54 = puVar54 + (uVar52 & 7);
            *(ulonglong *)puVar50 =
                 CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                          CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                   (char)((ulonglong)uVar1 >> 0x30),
                                   CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                            (char)((ulonglong)uVar1 >> 0x28),
                                            CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                     (char)((ulonglong)uVar1 >> 0x20),
                                                     CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                              (char)((ulonglong)uVar1 >> 0x18),
                                                              CONCAT12((char)((ulonglong)uVar2 >>
                                                                             0x10) +
                                                                       (char)((ulonglong)uVar1 >>
                                                                             0x10),
                                                                       CONCAT11((char)((ulonglong)
                                                                                       uVar2 >> 8) +
                                                                                (char)((ulonglong)
                                                                                       uVar1 >> 8),
                                                                                (char)uVar2 +
                                                                                (char)uVar1)))))));
            puVar62 = (undefined8 *)((longlong)puVar50 + (ulonglong)(uVar52 & 7));
            lVar43 = (longlong)-auVar63._0_4_;
            *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
            puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
            puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)(uVar52 >> 3 & 0xf));
            uVar1 = *(undefined8 *)puVar54;
            uVar53 = (ulonglong)(uVar52 >> 8 & 7);
            uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
            puVar54 = puVar54 + uVar53;
            *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                                CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                         (char)((ulonglong)uVar1 >> 0x30),
                                         CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                  (char)((ulonglong)uVar1 >> 0x28),
                                                  CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                           (char)((ulonglong)uVar1 >> 0x20),
                                                           CONCAT13((char)((ulonglong)uVar2 >> 0x18)
                                                                    + (char)((ulonglong)uVar1 >>
                                                                            0x18),
                                                                    CONCAT12((char)((ulonglong)uVar2
                                                                                   >> 0x10) +
                                                                             (char)((ulonglong)uVar1
                                                                                   >> 0x10),
                                                                             CONCAT11((char)((
                                                  ulonglong)uVar2 >> 8) +
                                                  (char)((ulonglong)uVar1 >> 8),
                                                  (char)uVar2 + (char)uVar1)))))));
            puVar62 = (undefined8 *)((longlong)puVar62 + uVar53);
            lVar43 = (longlong)-auVar63._4_4_;
            *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
            puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
            puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)(uVar52 >> 0xb & 0xf));
            uVar1 = *(undefined8 *)puVar54;
            uVar53 = (ulonglong)(uVar52 >> 0x10 & 7);
            uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
            *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                                CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                         (char)((ulonglong)uVar1 >> 0x30),
                                         CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                  (char)((ulonglong)uVar1 >> 0x28),
                                                  CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                           (char)((ulonglong)uVar1 >> 0x20),
                                                           CONCAT13((char)((ulonglong)uVar2 >> 0x18)
                                                                    + (char)((ulonglong)uVar1 >>
                                                                            0x18),
                                                                    CONCAT12((char)((ulonglong)uVar2
                                                                                   >> 0x10) +
                                                                             (char)((ulonglong)uVar1
                                                                                   >> 0x10),
                                                                             CONCAT11((char)((
                                                  ulonglong)uVar2 >> 8) +
                                                  (char)((ulonglong)uVar1 >> 8),
                                                  (char)uVar2 + (char)uVar1)))))));
            puVar62 = (undefined8 *)((longlong)puVar62 + uVar53);
            lVar43 = (longlong)-auVar63._8_4_;
            *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
            puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
            uVar1 = *(undefined8 *)(puVar54 + uVar53);
            puVar62 = (undefined8 *)((longlong)puVar62 + (ulonglong)(uVar52 >> 0x13 & 0xf));
            uVar2 = *(undefined8 *)(lVar43 + (longlong)puVar62);
            *puVar62 = CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                                CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                         (char)((ulonglong)uVar1 >> 0x30),
                                         CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                  (char)((ulonglong)uVar1 >> 0x28),
                                                  CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                           (char)((ulonglong)uVar1 >> 0x20),
                                                           CONCAT13((char)((ulonglong)uVar2 >> 0x18)
                                                                    + (char)((ulonglong)uVar1 >>
                                                                            0x18),
                                                                    CONCAT12((char)((ulonglong)uVar2
                                                                                   >> 0x10) +
                                                                             (char)((ulonglong)uVar1
                                                                                   >> 0x10),
                                                                             CONCAT11((char)((
                                                  ulonglong)uVar2 >> 8) +
                                                  (char)((ulonglong)uVar1 >> 8),
                                                  (char)uVar2 + (char)uVar1)))))));
            uVar41 = (ulonglong)(uVar52 >> 0x18 & 7);
            puVar62 = (undefined8 *)((longlong)puVar62 + uVar41);
            puVar54 = puVar54 + uVar53 + uVar41;
            uVar53 = (ulonglong)-auVar63._12_4_;
            *puVar62 = *(undefined8 *)(uVar53 + (longlong)puVar62);
            puVar62[1] = *(undefined8 *)(uVar53 + 8 + (longlong)puVar62);
            puVar50 = (ushort *)((longlong)puVar62 + (ulonglong)(uVar52 >> 0x1b & 0xf));
            uVar46 = uVar46 - 1;
            pauVar59 = local_200;
          } while (uVar46 != 0);
        }
        if (uVar42 != 0) {
          lVar43 = (longlong)(int)uVar53;
          do {
            bVar3 = (*pauVar58)[0];
            pauVar58 = (undefined1 (*) [16])(*pauVar58 + 1);
            uVar1 = *(undefined8 *)(lVar43 + (longlong)puVar50);
            uVar2 = *(undefined8 *)puVar54;
            uVar46 = (ulonglong)(bVar3 & 7);
            uVar21 = *puVar61;
            puVar54 = puVar54 + uVar46;
            *(ulonglong *)puVar50 =
                 CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                          CONCAT16((char)((ulonglong)uVar1 >> 0x30) +
                                   (char)((ulonglong)uVar2 >> 0x30),
                                   CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                            (char)((ulonglong)uVar2 >> 0x28),
                                            CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                     (char)((ulonglong)uVar2 >> 0x20),
                                                     CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                              (char)((ulonglong)uVar2 >> 0x18),
                                                              CONCAT12((char)((ulonglong)uVar1 >>
                                                                             0x10) +
                                                                       (char)((ulonglong)uVar2 >>
                                                                             0x10),
                                                                       CONCAT11((char)((ulonglong)
                                                                                       uVar1 >> 8) +
                                                                                (char)((ulonglong)
                                                                                       uVar2 >> 8),
                                                                                (char)uVar1 +
                                                                                (char)uVar2)))))));
            puVar62 = (undefined8 *)((longlong)puVar50 + uVar46);
            uVar52 = (uint)uVar53 ^ (-(uint)uVar21 ^ (uint)uVar53) & (bVar3 >> 7) - 1;
            uVar53 = (ulonglong)uVar52;
            puVar61 = (ushort *)((longlong)puVar61 + (ulonglong)((bVar3 >> 7) - 1 & 2));
            lVar43 = (longlong)(int)uVar52;
            *puVar62 = *(undefined8 *)(lVar43 + (longlong)puVar62);
            puVar62[1] = *(undefined8 *)(lVar43 + 8 + (longlong)puVar62);
            puVar50 = (ushort *)((longlong)puVar62 + (ulonglong)((bVar3 & 0x78) >> 3));
            uVar42 = uVar42 - 1;
          } while (uVar42 != 0);
        }
        bVar3 = (*pauVar58)[0];
        pauVar58 = (undefined1 (*) [16])(*pauVar58 + 1);
        if (bVar3 < 3) {
          if (bVar3 == 0) {
            if (puVar51 < local_1d0) {
              uVar46 = (ulonglong)(byte)*puVar51;
              puVar57 = (ushort *)((longlong)puVar47 + 1);
              puVar60 = (ushort *)((longlong)puVar51 + 1);
              if (0xfb < uVar46) {
                if (local_1d0 < puVar57) {
                  uVar46 = 0;
                }
                else {
                  uVar21 = *puVar60;
                  puVar60 = (ushort *)((longlong)puVar51 + 3);
                  puVar57 = (ushort *)((longlong)puVar47 + 3);
                  uVar46 = uVar46 + (ulonglong)uVar21 * 4;
                }
              }
            }
            else {
              uVar46 = 0;
            }
            lVar43 = uVar46 + 0x40;
            if ((longlong)local_1c8 - (longlong)puVar50 < lVar43) goto LAB_14f3c6b0e;
            if ((longlong)local_1e0 - (longlong)puVar54 < lVar43) goto LAB_14f3c6adb;
            do {
              uVar1 = *(undefined8 *)((longlong)(int)uVar53 + (longlong)puVar50);
              lVar43 = lVar43 + -8;
              uVar2 = *(undefined8 *)puVar54;
              puVar54 = puVar54 + 8;
              *(ulonglong *)puVar50 =
                   CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar1 >> 0x30) +
                                     (char)((ulonglong)uVar2 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                              (char)((ulonglong)uVar2 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                       (char)((ulonglong)uVar2 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                                (char)((ulonglong)uVar2 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar1 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar2 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar1 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar2 >> 8),(char)uVar1 + (char)uVar2)))
                                                  ))));
              puVar50 = puVar50 + 4;
            } while (8 < lVar43);
            param_1 = (uchar *)((longlong)puVar50 + lVar43);
            puVar54 = puVar54 + lVar43;
            uVar1 = *(undefined8 *)((longlong)(int)uVar53 + -8 + (longlong)param_1);
            uVar2 = *(undefined8 *)(puVar54 + -8);
            *(ulonglong *)((longlong)param_1 + -8) =
                 CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                          CONCAT16((char)((ulonglong)uVar1 >> 0x30) +
                                   (char)((ulonglong)uVar2 >> 0x30),
                                   CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                            (char)((ulonglong)uVar2 >> 0x28),
                                            CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                     (char)((ulonglong)uVar2 >> 0x20),
                                                     CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                              (char)((ulonglong)uVar2 >> 0x18),
                                                              CONCAT12((char)((ulonglong)uVar1 >>
                                                                             0x10) +
                                                                       (char)((ulonglong)uVar2 >>
                                                                             0x10),
                                                                       CONCAT11((char)((ulonglong)
                                                                                       uVar1 >> 8) +
                                                                                (char)((ulonglong)
                                                                                       uVar2 >> 8),
                                                                                (char)uVar1 +
                                                                                (char)uVar2)))))));
          }
          else {
            if (bVar3 != 1) {
              if (puVar51 < local_1d0) {
                uVar53 = (ulonglong)(byte)*puVar51;
                puVar57 = (ushort *)((longlong)puVar47 + 1);
                puVar60 = (ushort *)((longlong)puVar51 + 1);
                if (0xfb < uVar53) {
                  if (local_1d0 < puVar57) {
                    uVar53 = 0;
                  }
                  else {
                    uVar21 = *puVar60;
                    puVar60 = (ushort *)((longlong)puVar51 + 3);
                    puVar57 = (ushort *)((longlong)puVar47 + 3);
                    uVar53 = uVar53 + (ulonglong)uVar21 * 4;
                  }
                }
              }
              else {
                uVar53 = 0;
              }
              uVar46 = uVar53 + 0x1d;
              if (local_1b8 <= pauVar59) goto LAB_14f3c6c05;
              local_200 = (undefined1 (*) [16])(*pauVar59 + 4);
              puVar44 = local_1d8 + -(ulonglong)*(uint *)*pauVar59;
              lVar43 = (longlong)local_1c8 + -(longlong)puVar50;
              uVar42 = (int)puVar44 - (int)puVar50;
              if (lVar43 < (longlong)(uVar53 + 0x2d)) {
                if (lVar43 < (longlong)uVar46) goto LAB_14f3c6bd3;
                if ((longlong)local_1f8 + -(longlong)puVar50 < (longlong)(uVar53 + 0x2d))
                goto LAB_14f3c6ba5;
              }
              param_1 = (uchar *)(uVar46 + (longlong)puVar50);
              *(undefined8 *)puVar50 = *(undefined8 *)puVar44;
              *(undefined8 *)(puVar50 + 4) = *(undefined8 *)(puVar44 + 8);
              *(undefined8 *)(puVar50 + 8) = *(undefined8 *)(puVar44 + 0x10);
              *(undefined8 *)(puVar50 + 0xc) = *(undefined8 *)(puVar44 + 0x18);
              *(undefined8 *)(puVar50 + 0x10) = *(undefined8 *)(puVar44 + 0x20);
              if (0x28 < uVar46) {
                puVar50 = puVar50 + 0x14;
                puVar44 = puVar44 + 0x28;
                do {
                  uVar1 = *(undefined8 *)puVar44;
                  puVar44 = puVar44 + 8;
                  *(undefined8 *)puVar50 = uVar1;
                  puVar50 = puVar50 + 4;
                } while (puVar50 < param_1);
              }
              goto LAB_14f3c6a32;
            }
            if (puVar51 < local_1d0) {
              uVar53 = (ulonglong)(byte)*puVar51;
              puVar57 = (ushort *)((longlong)puVar47 + 1);
              puVar60 = (ushort *)((longlong)puVar51 + 1);
              if (0xfb < uVar53) {
                if (local_1d0 < puVar57) {
                  uVar53 = 0;
                }
                else {
                  uVar21 = *puVar60;
                  puVar60 = (ushort *)((longlong)puVar51 + 3);
                  puVar57 = (ushort *)((longlong)puVar47 + 3);
                  uVar53 = uVar53 + (ulonglong)uVar21 * 4;
                }
              }
            }
            else {
              uVar53 = 0;
            }
            lVar43 = (longlong)local_1c8 + -(longlong)puVar50;
            if (lVar43 < (longlong)(uVar53 + 99)) {
              if (lVar43 < (longlong)(uVar53 + 0x5b)) goto LAB_14f3c6b73;
              if ((longlong)local_1f8 + -(longlong)puVar50 < (longlong)(uVar53 + 99))
              goto LAB_14f3c6b45;
            }
            uVar21 = *puVar61;
            param_1 = (uchar *)(uVar53 + 0x5b + (longlong)puVar50);
            puVar61 = puVar61 + 1;
            uVar53 = (ulonglong)(int)-(uint)uVar21;
            *(undefined8 *)puVar50 = *(undefined8 *)((longlong)puVar50 + uVar53);
            *(undefined8 *)(puVar50 + 4) = *(undefined8 *)((longlong)puVar50 + uVar53 + 8);
            *(undefined8 *)(puVar50 + 8) = *(undefined8 *)((longlong)puVar50 + uVar53 + 0x10);
            *(undefined8 *)(puVar50 + 0xc) = *(undefined8 *)((longlong)puVar50 + uVar53 + 0x18);
            *(undefined8 *)(puVar50 + 0x10) = *(undefined8 *)((longlong)puVar50 + uVar53 + 0x20);
            *(undefined8 *)(puVar50 + 0x14) = *(undefined8 *)((longlong)puVar50 + uVar53 + 0x28);
            *(undefined8 *)(puVar50 + 0x18) = *(undefined8 *)((longlong)puVar50 + uVar53 + 0x30);
            *(undefined8 *)(puVar50 + 0x1c) = *(undefined8 *)((longlong)puVar50 + uVar53 + 0x38);
            puVar47 = puVar50 + 0x20;
            puVar62 = (undefined8 *)((longlong)puVar50 + uVar53 + 0x40);
            do {
              uVar1 = *puVar62;
              puVar62 = puVar62 + 1;
              *(undefined8 *)puVar47 = uVar1;
              puVar47 = puVar47 + 4;
            } while (puVar47 < param_1);
          }
        }
        else {
          if (local_1b8 <= pauVar59) goto LAB_14f3c6c33;
          param_1 = (uchar *)((ulonglong)(bVar3 + 5) + (longlong)puVar50);
          puVar44 = local_1d8 + -(ulonglong)*(uint *)*pauVar59;
          uVar42 = (int)puVar44 - (int)puVar50;
          *(undefined8 *)puVar50 = *(undefined8 *)puVar44;
          *(undefined8 *)(puVar50 + 4) = *(undefined8 *)(puVar44 + 8);
          *(undefined8 *)(puVar50 + 8) = *(undefined8 *)(puVar44 + 0x10);
          if (0x18 < (ulonglong)(bVar3 + 5)) {
            *(undefined8 *)(puVar50 + 0xc) = *(undefined8 *)(puVar44 + 0x18);
          }
LAB_14f3c6a32:
          uVar53 = (ulonglong)uVar42;
          pauVar59 = (undefined1 (*) [16])(*pauVar59 + 4);
          local_200 = pauVar59;
        }
      }
      puVar50 = (ushort *)param_1;
      puVar47 = puVar57;
      puVar51 = puVar60;
    } while (pauVar58 < (undefined1 (*) [16])(local_1b0[-1] + 1));
  }
  iVar39 = (int)uVar53;
  if (local_1c8 < param_1) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3c73d2;
    pcVar56 = "OODLE ERROR : corruption : (to_ptr <= parse_chunk_end)\n";
    iVar39 = 0x1c0;
  }
  else {
    local_200 = pauVar58 + 1;
    puVar44 = local_1e0;
    if (local_1e8 <= puVar54) {
      if (local_1e0 < puVar54) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3c73d2;
        pcVar56 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
        iVar39 = 0x1e7;
        goto LAB_14f3c73c7;
      }
      local_1e8 = local_c7;
      puVar54 = puVar54 + (longlong)(local_c7 + -(longlong)local_1e0);
      puVar44 = local_c7;
    }
    puVar50 = local_208;
    if (local_1f0 <= puVar61) {
      if (local_208 < puVar61) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3c73d2;
        pcVar56 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
        iVar39 = 0x1e8;
        goto LAB_14f3c73c7;
      }
      local_1f0 = local_158;
      puVar61 = (ushort *)((longlong)puVar61 + ((longlong)local_158 - (longlong)local_208));
      puVar50 = local_158;
    }
    if (pauVar58 < local_1b0) {
      puVar47 = puVar60 + 1;
      puVar51 = (ushort *)param_1;
      puVar57 = puVar60;
      do {
        if (local_200 <= pauVar58) {
          local_200 = pauVar58 + 1;
          if (local_1e8 <= puVar54) {
            if (puVar44 < puVar54) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c73d2;
              pcVar56 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              iVar39 = 500;
              goto LAB_14f3c73c7;
            }
            lVar43 = -(longlong)puVar44;
            puVar44 = local_c7;
            puVar54 = puVar54 + (longlong)(local_c7 + lVar43);
            local_1e8 = local_c7;
          }
          if (local_1f0 <= puVar61) {
            if (puVar50 < puVar61) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c73d2;
              pcVar56 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              iVar39 = 0x1f5;
              goto LAB_14f3c73c7;
            }
            lVar43 = (longlong)local_158 - (longlong)puVar50;
            puVar50 = local_158;
            puVar61 = (ushort *)((longlong)puVar61 + lVar43);
            local_1f0 = local_158;
          }
        }
        bVar4 = (*pauVar58)[0];
        puVar23 = *pauVar58;
        uVar42 = (uint)bVar4;
        uVar52 = (uint)uVar53;
        puVar48 = puVar47;
        puVar60 = puVar57;
        if (bVar4 < 0x18) {
          if (bVar4 < 3) {
            if (uVar42 == 0) {
              if (puVar57 < local_1d0) {
                uVar46 = (ulonglong)(byte)*puVar57;
                puVar48 = (ushort *)((longlong)puVar47 + 1);
                puVar60 = (ushort *)((longlong)puVar57 + 1);
                if (0xfb < uVar46) {
                  if (local_1d0 < puVar48) {
                    uVar46 = 0;
                  }
                  else {
                    uVar21 = *puVar60;
                    puVar60 = (ushort *)((longlong)puVar57 + 3);
                    puVar48 = (ushort *)((longlong)puVar47 + 3);
                    uVar46 = uVar46 + (ulonglong)uVar21 * 4;
                  }
                }
              }
              else {
                uVar46 = 0;
              }
              lVar43 = uVar46 + 0x40;
              if ((longlong)local_1c8 - (longlong)puVar51 < lVar43) goto LAB_14f3c6b0e;
              if ((longlong)puVar44 - (longlong)puVar54 < lVar43) goto LAB_14f3c6adb;
              do {
                uVar1 = *(undefined8 *)((longlong)(int)uVar52 + (longlong)puVar51);
                lVar43 = lVar43 + -8;
                uVar2 = *(undefined8 *)puVar54;
                puVar54 = puVar54 + 8;
                *(ulonglong *)puVar51 =
                     CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                              CONCAT16((char)((ulonglong)uVar1 >> 0x30) +
                                       (char)((ulonglong)uVar2 >> 0x30),
                                       CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                                (char)((ulonglong)uVar2 >> 0x28),
                                                CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                         (char)((ulonglong)uVar2 >> 0x20),
                                                         CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                                  (char)((ulonglong)uVar2 >> 0x18),
                                                                  CONCAT12((char)((ulonglong)uVar1
                                                                                 >> 0x10) +
                                                                           (char)((ulonglong)uVar2
                                                                                 >> 0x10),
                                                                           CONCAT11((char)((
                                                  ulonglong)uVar1 >> 8) +
                                                  (char)((ulonglong)uVar2 >> 8),
                                                  (char)uVar1 + (char)uVar2)))))));
                puVar51 = puVar51 + 4;
              } while (8 < lVar43);
              param_1 = (uchar *)((longlong)puVar51 + lVar43);
              puVar54 = puVar54 + lVar43;
              uVar1 = *(undefined8 *)((longlong)(int)uVar52 + -8 + (longlong)param_1);
              uVar2 = *(undefined8 *)(puVar54 + -8);
              *(ulonglong *)((longlong)param_1 + -8) =
                   CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar1 >> 0x30) +
                                     (char)((ulonglong)uVar2 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                              (char)((ulonglong)uVar2 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                       (char)((ulonglong)uVar2 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                                (char)((ulonglong)uVar2 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar1 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar2 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar1 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar2 >> 8),(char)uVar1 + (char)uVar2)))
                                                  ))));
            }
            else {
              if (uVar42 != 1) {
                if (puVar57 < local_1d0) {
                  uVar53 = (ulonglong)(byte)*puVar57;
                  puVar48 = (ushort *)((longlong)puVar47 + 1);
                  puVar60 = (ushort *)((longlong)puVar57 + 1);
                  if (0xfb < uVar53) {
                    if (local_1d0 < puVar48) {
                      uVar53 = 0;
                    }
                    else {
                      uVar21 = *puVar60;
                      puVar60 = (ushort *)((longlong)puVar57 + 3);
                      puVar48 = (ushort *)((longlong)puVar47 + 3);
                      uVar53 = uVar53 + (ulonglong)uVar21 * 4;
                    }
                  }
                }
                else {
                  uVar53 = 0;
                }
                local_200 = (undefined1 (*) [16])(uVar53 + 0x1d);
                if (local_1b8 <= pauVar59) goto LAB_14f3c6c05;
                puVar45 = local_1d8 + -(ulonglong)*(uint *)*pauVar59;
                local_1a8 = -(longlong)puVar51;
                uVar42 = (int)puVar45 - (int)puVar51;
                local_208 = (ushort *)(local_1a8 + (longlong)local_1c8);
                local_1c0 = (ushort *)(uVar53 + 0x2d);
                if ((longlong)local_208 < (longlong)local_1c0) {
                  if ((longlong)local_208 < (longlong)local_200) goto LAB_14f3c6bd3;
                  if ((longlong)local_1f8 + local_1a8 < (longlong)local_1c0) goto LAB_14f3c6ba5;
                }
                param_1 = *local_200 + (longlong)puVar51;
                *(undefined8 *)puVar51 = *(undefined8 *)puVar45;
                *(undefined8 *)(puVar51 + 4) = *(undefined8 *)(puVar45 + 8);
                *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar45 + 0x10);
                *(undefined8 *)(puVar51 + 0xc) = *(undefined8 *)(puVar45 + 0x18);
                *(undefined8 *)(puVar51 + 0x10) = *(undefined8 *)(puVar45 + 0x20);
                local_208 = (ushort *)param_1;
                if ((undefined1 (*) [16])&DAT_00000028 < local_200) {
                  puVar51 = puVar51 + 0x14;
                  puVar45 = puVar45 + 0x28;
                  do {
                    uVar1 = *(undefined8 *)puVar45;
                    puVar45 = puVar45 + 8;
                    *(undefined8 *)puVar51 = uVar1;
                    puVar51 = puVar51 + 4;
                  } while (puVar51 < param_1);
                }
                goto LAB_14f3c71c6;
              }
              if (puVar57 < local_1d0) {
                uVar53 = (ulonglong)(byte)*puVar57;
                puVar48 = (ushort *)((longlong)puVar47 + 1);
                puVar60 = (ushort *)((longlong)puVar57 + 1);
                if (0xfb < uVar53) {
                  if (local_1d0 < puVar48) {
                    uVar53 = 0;
                  }
                  else {
                    uVar21 = *puVar60;
                    puVar60 = (ushort *)((longlong)puVar57 + 3);
                    puVar48 = (ushort *)((longlong)puVar47 + 3);
                    uVar53 = uVar53 + (ulonglong)uVar21 * 4;
                  }
                }
              }
              else {
                uVar53 = 0;
              }
              lVar43 = -(longlong)puVar51 + (longlong)local_1c8;
              if (lVar43 < (longlong)(uVar53 + 99)) {
                if (lVar43 < (longlong)(uVar53 + 0x5b)) goto LAB_14f3c6b73;
                if ((longlong)local_1f8 + -(longlong)puVar51 < (longlong)(uVar53 + 99))
                goto LAB_14f3c6b45;
              }
              uVar21 = *puVar61;
              param_1 = (uchar *)(uVar53 + 0x5b + (longlong)puVar51);
              puVar61 = puVar61 + 1;
              uVar53 = (ulonglong)(int)-(uint)uVar21;
              *(undefined8 *)puVar51 = *(undefined8 *)((longlong)puVar51 + uVar53);
              *(undefined8 *)(puVar51 + 4) = *(undefined8 *)((longlong)puVar51 + uVar53 + 8);
              *(undefined8 *)(puVar51 + 8) = *(undefined8 *)((longlong)puVar51 + uVar53 + 0x10);
              *(undefined8 *)(puVar51 + 0xc) = *(undefined8 *)((longlong)puVar51 + uVar53 + 0x18);
              *(undefined8 *)(puVar51 + 0x10) = *(undefined8 *)((longlong)puVar51 + uVar53 + 0x20);
              *(undefined8 *)(puVar51 + 0x14) = *(undefined8 *)((longlong)puVar51 + uVar53 + 0x28);
              *(undefined8 *)(puVar51 + 0x18) = *(undefined8 *)((longlong)puVar51 + uVar53 + 0x30);
              *(undefined8 *)(puVar51 + 0x1c) = *(undefined8 *)((longlong)puVar51 + uVar53 + 0x38);
              puVar47 = puVar51 + 0x20;
              puVar62 = (undefined8 *)((longlong)puVar51 + uVar53 + 0x40);
              do {
                uVar1 = *puVar62;
                puVar62 = puVar62 + 1;
                *(undefined8 *)puVar47 = uVar1;
                puVar47 = puVar47 + 4;
              } while (puVar47 < param_1);
            }
          }
          else {
            local_208 = (ushort *)(ulonglong)(bVar4 + 5);
            if (local_1b8 <= pauVar59) goto LAB_14f3c6c33;
            puVar45 = local_1d8 + -(ulonglong)*(uint *)*pauVar59;
            local_1c0 = (ushort *)-(longlong)puVar51;
            uVar42 = (int)puVar45 - (int)puVar51;
            if ((longlong)local_1c0 + (longlong)local_1c8 < 0x24) {
              if ((longlong)((longlong)local_1c0 + (longlong)local_1c8) < (longlong)local_208) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c73d2;
                pcVar56 = "OODLE ERROR : corruption : ml <= rrPtrDiff(parse_chunk_end - to_ptr)\n";
                iVar39 = 0x111;
                pcVar49 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
                goto LAB_14f3c73ce;
              }
              if ((longlong)((longlong)local_1c0 + (longlong)local_1f8) < (longlong)(local_208 + 8))
              {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c73d2;
                pcVar56 = 
                "OODLE ERROR : corruption : ml+16 <= rrPtrDiff(overrun_chunk_end - to_ptr)\n";
                iVar39 = 0x115;
                pcVar49 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
                goto LAB_14f3c73ce;
              }
            }
            param_1 = (uchar *)((longlong)local_208 + (longlong)puVar51);
            *(undefined8 *)puVar51 = *(undefined8 *)puVar45;
            *(undefined8 *)(puVar51 + 4) = *(undefined8 *)(puVar45 + 8);
            *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar45 + 0x10);
            local_1c0 = (ushort *)param_1;
            if (&DAT_00000018 < local_208) {
              *(undefined8 *)(puVar51 + 0xc) = *(undefined8 *)(puVar45 + 0x18);
            }
LAB_14f3c71c6:
            uVar53 = (ulonglong)uVar42;
            pauVar59 = (undefined1 (*) [16])(*pauVar59 + 4);
          }
          local_200 = (undefined1 (*) [16])(pauVar58[1] + 1);
          if (local_1e8 <= puVar54) {
            if (puVar44 < puVar54) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c73d2;
              pcVar56 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              iVar39 = 0x208;
              goto LAB_14f3c73c7;
            }
            lVar43 = -(longlong)puVar44;
            puVar44 = local_c7;
            puVar54 = puVar54 + (longlong)(local_c7 + lVar43);
            local_1e8 = local_c7;
          }
          if (local_1f0 <= puVar61) {
            if (puVar50 < puVar61) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c73d2;
              pcVar56 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              iVar39 = 0x209;
              goto LAB_14f3c73c7;
            }
            lVar43 = (longlong)local_158 - (longlong)puVar50;
            puVar50 = local_158;
            puVar61 = (ushort *)((longlong)puVar61 + lVar43);
            local_1f0 = local_158;
          }
        }
        else {
          uVar21 = *puVar61;
          uVar40 = (uint)(bVar4 >> 7);
          local_1e0 = (uchar *)CONCAT44(local_1e0._4_4_,uVar40);
          if (local_1f8 < puVar51 + 4) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3c73d2;
            pcVar56 = "OODLE ERROR : corruption : (to_ptr+8 <= overrun_chunk_end)\n";
            iVar39 = 0x1fc;
            goto LAB_14f3c73c7;
          }
          uVar1 = *(undefined8 *)puVar54;
          uVar2 = *(undefined8 *)((longlong)(int)uVar52 + (longlong)puVar51);
          puVar54 = puVar54 + (uVar42 & 7);
          *(ulonglong *)puVar51 =
               CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar1 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                           (char)((ulonglong)uVar1 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                    (char)((ulonglong)uVar1 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                             (char)((ulonglong)uVar1 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar2 >>
                                                                            0x10) +
                                                                      (char)((ulonglong)uVar1 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar2 >> 8) +
                                                                               (char)((ulonglong)
                                                                                      uVar1 >> 8),
                                                                               (char)uVar2 +
                                                                               (char)uVar1)))))));
          puVar62 = (undefined8 *)((longlong)puVar51 + (ulonglong)(uVar42 & 7));
          uVar52 = uVar52 ^ (-(uint)uVar21 ^ uVar52) & uVar40 - 1;
          uVar53 = (ulonglong)uVar52;
          puVar61 = (ushort *)((longlong)puVar61 + (ulonglong)(uVar40 - 1 & 2));
          if (local_1f8 < puVar62 + 2) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3c73d2;
            pcVar56 = "OODLE ERROR : corruption : (to_ptr+16 <= overrun_chunk_end)\n";
            iVar39 = 0x1fc;
            goto LAB_14f3c73c7;
          }
          *puVar62 = *(undefined8 *)((longlong)(int)uVar52 + (longlong)puVar62);
          puVar62[1] = *(undefined8 *)((longlong)(int)uVar52 + 8 + (longlong)puVar62);
          param_1 = (uchar *)((longlong)puVar62 + (ulonglong)((uVar42 & 0x78) >> 3));
        }
        iVar39 = (int)uVar53;
        puVar47 = puVar48;
        puVar51 = (ushort *)param_1;
        pauVar58 = (undefined1 (*) [16])(puVar23 + 1);
        puVar57 = puVar60;
      } while ((undefined1 (*) [16])(puVar23 + 1) < local_1b0);
    }
    if (local_1c8 <= param_1) {
      if (local_1c8 < param_1) {
        return (uchar *)0x0;
      }
code_r0x00014f3c7480:
      if (puVar50 < puVar61) {
        return (uchar *)0x0;
      }
      if (puVar44 < puVar54) {
        return (uchar *)0x0;
      }
      *local_1a0 = iVar39;
      local_190->literals_ptr = puVar54 + ((longlong)local_198 - (longlong)puVar44);
      local_190->off16_ptr =
           (uchar *)(((longlong)local_188 - (longlong)puVar50) + (longlong)puVar61);
      if (local_1d0 < puVar60) {
        return (uchar *)0x0;
      }
      local_190->excesses_ptr = (uchar *)puVar60;
      return param_5;
    }
    uVar53 = (longlong)local_1c8 - (longlong)param_1;
    if (puVar54 + uVar53 <= puVar44) {
      if (7 < (longlong)uVar53) {
        uVar46 = uVar53 >> 3;
        uVar53 = uVar53 + uVar46 * -8;
        do {
          uVar1 = *(undefined8 *)((longlong)iVar39 + (longlong)param_1);
          uVar2 = *(undefined8 *)puVar54;
          puVar54 = puVar54 + 8;
          *(ulonglong *)param_1 =
               CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                           (char)((ulonglong)uVar2 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                    (char)((ulonglong)uVar2 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                             (char)((ulonglong)uVar2 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar1 >>
                                                                            0x10) +
                                                                      (char)((ulonglong)uVar2 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar1 >> 8) +
                                                                               (char)((ulonglong)
                                                                                      uVar2 >> 8),
                                                                               (char)uVar1 +
                                                                               (char)uVar2)))))));
          param_1 = (uchar *)((longlong)param_1 + 8);
          uVar46 = uVar46 - 1;
        } while (uVar46 != 0);
      }
      for (; uVar53 != 0; uVar53 = uVar53 - 1) {
        uVar5 = *puVar54;
        puVar54 = puVar54 + 1;
        *param_1 = *(char *)((longlong)iVar39 + (longlong)param_1) + uVar5;
        param_1 = (uchar *)((longlong)param_1 + 1);
      }
      goto code_r0x00014f3c7480;
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3c73d2;
    pcVar56 = "OODLE ERROR : corruption : (literals_ptr+lrl <= literals_end)\n";
    iVar39 = 0x217;
  }
LAB_14f3c73c7:
  pcVar49 = "v:\\devel\\projects\\oodle2\\core\\newlzf_decode_parse_outer.inl";
LAB_14f3c73ce:
  (*g_fp_OodleCore_Plugin_Printf)(0,pcVar49,iVar39,pcVar56);
LAB_14f3c73d2:
  ooLogErrorPost();
  return (uchar *)0x0;
LAB_14f3c6c33:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c73d2;
  pcVar56 = "OODLE ERROR : corruption : (escape_offset_ptr < escape_offset_end)\n";
  iVar39 = 0x101;
  pcVar49 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c73ce;
LAB_14f3c6c05:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c73d2;
  pcVar56 = "OODLE ERROR : corruption : (escape_offset_ptr < escape_offset_end)\n";
  iVar39 = 0xb6;
  pcVar49 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c73ce;
LAB_14f3c6bd3:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c73d2;
  pcVar56 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  iVar39 = 0xc6;
  pcVar49 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c73ce;
LAB_14f3c6ba5:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c73d2;
  pcVar56 = "OODLE ERROR : corruption : ( ml+16 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  iVar39 = 199;
  pcVar49 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c73ce;
LAB_14f3c6b73:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c73d2;
  pcVar56 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  iVar39 = 0x86;
  pcVar49 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c73ce;
LAB_14f3c6b45:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c73d2;
  pcVar56 = "OODLE ERROR : corruption : ( ml+8 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  iVar39 = 0x87;
  pcVar49 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c73ce;
LAB_14f3c6b0e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c73d2;
  pcVar56 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(parse_chunk_end-to_ptr))\n";
  iVar39 = 0x30;
  pcVar49 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c73ce;
LAB_14f3c6adb:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c73d2;
  pcVar56 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(literals_end-literals_ptr))\n";
  iVar39 = 0x31;
  pcVar49 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c73ce;
}

// newLZF_decode_parse_sub_sse4_first @ 14f3c7500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uchar * __cdecl
oo2::newLZF_decode_parse_sub_sse4_first
          (uchar *param_1,long64 param_2,uchar *param_3,uchar *param_4,uchar *param_5,
          newLZF_chunk_arrays *param_6,int *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  uchar uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  ushort uVar21;
  undefined1 auVar22 [12];
  undefined1 *puVar23;
  undefined1 *puVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  longlong lVar44;
  uchar *puVar45;
  ulonglong uVar46;
  uchar *puVar47;
  undefined1 (*pauVar48) [16];
  undefined1 (*pauVar49) [16];
  char *pcVar50;
  uchar *puVar51;
  uchar *puVar52;
  int iVar53;
  ulonglong uVar54;
  uchar *puVar55;
  size_t sVar56;
  char *pcVar57;
  ushort *puVar58;
  undefined1 (*pauVar59) [16];
  undefined1 (*pauVar60) [16];
  ushort *puVar61;
  undefined8 *puVar62;
  undefined1 (*pauVar63) [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auStack_218 [32];
  undefined1 (*local_1f8) [16];
  uchar *local_1f0;
  uchar *local_1e8;
  ushort *local_1e0;
  ushort *local_1d8;
  uchar *local_1d0;
  undefined1 (*local_1c8) [16];
  uchar *local_1c0;
  undefined1 (*local_1b8) [16];
  int *local_1b0;
  uchar *local_1a8;
  newLZF_chunk_arrays *local_1a0;
  ushort *local_198;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  ushort local_158 [72];
  uchar local_c7 [127];
  ulonglong local_48;
  
  bVar39 = UNK_1531dbfff;
  bVar38 = UNK_1531dbffe;
  bVar37 = UNK_1531dbffd;
  bVar36 = UNK_1531dbffc;
  bVar35 = UNK_1531dbffb;
  bVar34 = UNK_1531dbffa;
  bVar33 = UNK_1531dbff9;
  bVar32 = UNK_1531dbff8;
  bVar31 = UNK_1531dbff7;
  bVar30 = UNK_1531dbff6;
  bVar29 = UNK_1531dbff5;
  bVar28 = UNK_1531dbff4;
  bVar27 = UNK_1531dbff3;
  bVar26 = UNK_1531dbff2;
  bVar25 = UNK_1531dbff1;
  bVar4 = __xmm_17171717171717171717171717171717;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  puVar51 = param_1 + 8;
  local_1c0 = param_1 + param_2;
  local_1b0 = param_7;
  uVar54 = (ulonglong)(uint)*param_7;
  local_1f0 = param_6->literals_end;
  local_1d8 = (ushort *)param_6->off16_end;
  local_1b8 = (undefined1 (*) [16])param_6->packets_end;
  puVar55 = param_6->literals_ptr;
  pauVar63 = (undefined1 (*) [16])param_6->packets_ptr;
  puVar61 = (ushort *)param_6->off16_ptr;
  pauVar59 = (undefined1 (*) [16])param_6->excesses_ptr;
  local_1c8 = (undefined1 (*) [16])param_6->excesses_end;
  sVar56 = (longlong)local_1f0 - (longlong)puVar55;
  local_1a0 = param_6;
  if (0x71 < (longlong)sVar56) {
    sVar56 = 0x71;
  }
  local_1e8 = local_1f0 + -sVar56;
  local_1d0 = param_3;
  local_1a8 = local_1f0;
  local_198 = local_1d8;
  memcpy(local_c7 + -sVar56,local_1e8,sVar56);
  local_c7[0x70] = 0;
  sVar56 = (longlong)local_1d8 - (longlong)puVar61;
  local_c7[0] = '\0';
  local_c7[1] = '\0';
  local_c7[2] = '\0';
  local_c7[3] = '\0';
  local_c7[4] = '\0';
  local_c7[5] = '\0';
  local_c7[6] = '\0';
  local_c7[7] = '\0';
  local_c7[8] = '\0';
  local_c7[9] = '\0';
  local_c7[10] = '\0';
  local_c7[0xb] = '\0';
  local_c7[0xc] = '\0';
  local_c7[0xd] = '\0';
  local_c7[0xe] = '\0';
  local_c7[0xf] = '\0';
  if (0x20 < (longlong)sVar56) {
    sVar56 = 0x20;
  }
  local_1e0 = (ushort *)((longlong)local_1d8 - sVar56);
  local_c7[0x10] = '\0';
  local_c7[0x11] = '\0';
  local_c7[0x12] = '\0';
  local_c7[0x13] = '\0';
  local_c7[0x14] = '\0';
  local_c7[0x15] = '\0';
  local_c7[0x16] = '\0';
  local_c7[0x17] = '\0';
  local_c7[0x18] = '\0';
  local_c7[0x19] = '\0';
  local_c7[0x1a] = '\0';
  local_c7[0x1b] = '\0';
  local_c7[0x1c] = '\0';
  local_c7[0x1d] = '\0';
  local_c7[0x1e] = '\0';
  local_c7[0x1f] = '\0';
  local_c7[0x20] = '\0';
  local_c7[0x21] = '\0';
  local_c7[0x22] = '\0';
  local_c7[0x23] = '\0';
  local_c7[0x24] = '\0';
  local_c7[0x25] = '\0';
  local_c7[0x26] = '\0';
  local_c7[0x27] = '\0';
  local_c7[0x28] = '\0';
  local_c7[0x29] = '\0';
  local_c7[0x2a] = '\0';
  local_c7[0x2b] = '\0';
  local_c7[0x2c] = '\0';
  local_c7[0x2d] = '\0';
  local_c7[0x2e] = '\0';
  local_c7[0x2f] = '\0';
  local_c7[0x30] = '\0';
  local_c7[0x31] = '\0';
  local_c7[0x32] = '\0';
  local_c7[0x33] = '\0';
  local_c7[0x34] = '\0';
  local_c7[0x35] = '\0';
  local_c7[0x36] = '\0';
  local_c7[0x37] = '\0';
  local_c7[0x38] = '\0';
  local_c7[0x39] = '\0';
  local_c7[0x3a] = '\0';
  local_c7[0x3b] = '\0';
  local_c7[0x3c] = '\0';
  local_c7[0x3d] = '\0';
  local_c7[0x3e] = '\0';
  local_c7[0x3f] = '\0';
  local_c7[0x40] = '\0';
  local_c7[0x41] = '\0';
  local_c7[0x42] = '\0';
  local_c7[0x43] = '\0';
  local_c7[0x44] = '\0';
  local_c7[0x45] = '\0';
  local_c7[0x46] = '\0';
  local_c7[0x47] = '\0';
  local_c7[0x48] = '\0';
  local_c7[0x49] = '\0';
  local_c7[0x4a] = '\0';
  local_c7[0x4b] = '\0';
  local_c7[0x4c] = '\0';
  local_c7[0x4d] = '\0';
  local_c7[0x4e] = '\0';
  local_c7[0x4f] = '\0';
  local_c7[0x50] = '\0';
  local_c7[0x51] = '\0';
  local_c7[0x52] = '\0';
  local_c7[0x53] = '\0';
  local_c7[0x54] = '\0';
  local_c7[0x55] = '\0';
  local_c7[0x56] = '\0';
  local_c7[0x57] = '\0';
  local_c7[0x58] = '\0';
  local_c7[0x59] = '\0';
  local_c7[0x5a] = '\0';
  local_c7[0x5b] = '\0';
  local_c7[0x5c] = '\0';
  local_c7[0x5d] = '\0';
  local_c7[0x5e] = '\0';
  local_c7[0x5f] = '\0';
  local_c7[0x60] = '\0';
  local_c7[0x61] = '\0';
  local_c7[0x62] = '\0';
  local_c7[99] = '\0';
  local_c7[100] = '\0';
  local_c7[0x65] = '\0';
  local_c7[0x66] = '\0';
  local_c7[0x67] = '\0';
  local_c7[0x68] = '\0';
  local_c7[0x69] = '\0';
  local_c7[0x6a] = '\0';
  local_c7[0x6b] = '\0';
  local_c7[0x6c] = '\0';
  local_c7[0x6d] = '\0';
  local_c7[0x6e] = '\0';
  local_c7[0x6f] = '\0';
  memcpy((void *)((longlong)local_158 - sVar56),local_1e0,sVar56);
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_158[4] = 0;
  local_158[5] = 0;
  local_158[6] = 0;
  local_158[7] = 0;
  local_158[8] = 0;
  local_158[9] = 0;
  local_158[10] = 0;
  local_158[0xb] = 0;
  local_158[0xc] = 0;
  local_158[0xd] = 0;
  local_158[0xe] = 0;
  local_158[0xf] = 0;
  if (pauVar63 < (undefined1 (*) [16])(local_1b8[-1] + 1)) {
    local_1f8 = (undefined1 (*) [16])(*pauVar59 + 2);
    pauVar48 = pauVar59;
    do {
      pauVar59 = pauVar48;
      if (local_1d0 < puVar51 + 0x168) break;
      if (local_1e8 <= puVar55) {
        if (local_1f0 < puVar55) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3c88ae;
          pcVar57 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
          iVar40 = 0xdb;
          goto LAB_14f3c88a3;
        }
        lVar44 = -(longlong)local_1f0;
        local_1f0 = local_c7;
        puVar55 = puVar55 + (longlong)(local_c7 + lVar44);
        local_1e8 = local_c7;
      }
      if (local_1e0 <= puVar61) {
        if (local_1d8 < puVar61) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3c88ae;
          pcVar57 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
          iVar40 = 0xdc;
          goto LAB_14f3c88a3;
        }
        puVar61 = (ushort *)((longlong)puVar61 + ((longlong)local_158 - (longlong)local_1d8));
        local_1e0 = local_158;
        local_1d8 = local_158;
      }
      auVar64 = *pauVar63;
      bVar3 = auVar64[0];
      bVar6 = auVar64[1];
      bVar7 = auVar64[2];
      bVar8 = auVar64[3];
      bVar9 = auVar64[4];
      bVar10 = auVar64[5];
      bVar11 = auVar64[6];
      bVar12 = auVar64[7];
      bVar13 = auVar64[8];
      bVar14 = auVar64[9];
      bVar15 = auVar64[10];
      bVar16 = auVar64[0xb];
      bVar17 = auVar64[0xc];
      bVar18 = auVar64[0xd];
      bVar19 = auVar64[0xe];
      bVar20 = auVar64[0xf];
      auVar65[0] = -((byte)((bVar4 < bVar3) * bVar3 | (bVar4 >= bVar3) * bVar4) == bVar4);
      auVar65[1] = -((byte)((bVar25 < bVar6) * bVar6 | (bVar25 >= bVar6) * bVar25) == bVar25);
      auVar65[2] = -((byte)((bVar26 < bVar7) * bVar7 | (bVar26 >= bVar7) * bVar26) == bVar26);
      auVar65[3] = -((byte)((bVar27 < bVar8) * bVar8 | (bVar27 >= bVar8) * bVar27) == bVar27);
      auVar65[4] = -((byte)((bVar28 < bVar9) * bVar9 | (bVar28 >= bVar9) * bVar28) == bVar28);
      auVar65[5] = -((byte)((bVar29 < bVar10) * bVar10 | (bVar29 >= bVar10) * bVar29) == bVar29);
      auVar65[6] = -((byte)((bVar30 < bVar11) * bVar11 | (bVar30 >= bVar11) * bVar30) == bVar30);
      auVar65[7] = -((byte)((bVar31 < bVar12) * bVar12 | (bVar31 >= bVar12) * bVar31) == bVar31);
      auVar65[8] = -((byte)((bVar32 < bVar13) * bVar13 | (bVar32 >= bVar13) * bVar32) == bVar32);
      auVar65[9] = -((byte)((bVar33 < bVar14) * bVar14 | (bVar33 >= bVar14) * bVar33) == bVar33);
      auVar65[10] = -((byte)((bVar34 < bVar15) * bVar15 | (bVar34 >= bVar15) * bVar34) == bVar34);
      auVar65[0xb] = -((byte)((bVar35 < bVar16) * bVar16 | (bVar35 >= bVar16) * bVar35) == bVar35);
      auVar65[0xc] = -((byte)((bVar36 < bVar17) * bVar17 | (bVar36 >= bVar17) * bVar36) == bVar36);
      auVar65[0xd] = -((byte)((bVar37 < bVar18) * bVar18 | (bVar37 >= bVar18) * bVar37) == bVar37);
      auVar65[0xe] = -((byte)((bVar38 < bVar19) * bVar19 | (bVar38 >= bVar19) * bVar38) == bVar38);
      auVar65[0xf] = -((byte)((bVar39 < bVar20) * bVar20 | (bVar39 >= bVar20) * bVar39) == bVar39);
      uVar21 = (ushort)(SUB161(auVar65 >> 7,0) & 1) | (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe | (ushort)(auVar65[0xf] >> 7) << 0xf;
      if (uVar21 == 0) {
        uVar21 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(bVar20 >> 7) << 0xf;
        iVar40 = -(int)uVar54;
        auVar22._4_8_ = SUB168(ZEXT1216((undefined1  [12])0x0),4);
        auVar22._0_4_ = iVar40;
        auVar64._0_8_ = auVar22._0_8_ << 0x20;
        auVar64._8_4_ = iVar40;
        auVar64._12_4_ = iVar40;
        auVar67._8_8_ = auVar64._8_8_;
        auVar67._0_8_ = *(undefined8 *)puVar61;
        auVar64 = pshufb(auVar67,(undefined1  [16])c_offset_shuffles[uVar21 & 0xf]);
        uVar43 = uVar21 >> 4 & 0xf;
        auVar69._8_8_ = auVar64._8_8_;
        auVar69._0_8_ = *(undefined8 *)((longlong)puVar61 + (longlong)c_comp_advance[uVar21 & 0xf]);
        puVar62 = (undefined8 *)
                  ((longlong)puVar61 + (longlong)c_comp_advance[uVar21 & 0xf] +
                  (longlong)c_comp_advance[uVar43]);
        auVar65 = pshufb(auVar69,(undefined1  [16])c_offset_shuffles[uVar43]);
        uVar43 = uVar21 >> 8 & 0xf;
        auVar66._8_8_ = auVar65._8_8_;
        auVar66._0_8_ = *puVar62;
        puVar62 = (undefined8 *)((longlong)puVar62 + (longlong)c_comp_advance[uVar43]);
        auVar67 = pshufb(auVar66,(undefined1  [16])c_offset_shuffles[uVar43]);
        uVar46 = *(ulonglong *)*pauVar63;
        auVar68._8_8_ = auVar67._8_8_;
        auVar68._0_8_ = *puVar62;
        auVar69 = pshufb(auVar68,(undefined1  [16])c_offset_shuffles[uVar21 >> 0xc]);
        puVar61 = (ushort *)((longlong)puVar62 + (longlong)c_comp_advance[uVar21 >> 0xc]);
        uVar1 = *(undefined8 *)puVar55;
        uVar2 = *(undefined8 *)(puVar51 + (int)uVar54);
        uVar43 = (uint)uVar46 & 7;
        puVar55 = puVar55 + uVar43;
        *(ulonglong *)puVar51 =
             CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar1 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                        (char)((ulonglong)uVar1 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                 (char)((ulonglong)uVar1 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                          (char)((ulonglong)uVar1 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar2 >> 0x10)
                                                                   + (char)((ulonglong)uVar1 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar2
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar1
                                                                                  >> 8),
                                                                            (char)uVar2 +
                                                                            (char)uVar1)))))));
        puVar51 = puVar51 + uVar43;
        puVar47 = puVar51 + -auVar64._0_4_;
        if (param_4 <= puVar47) {
          *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
          *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
          puVar51 = puVar51 + ((uint)(uVar46 >> 3) & 0xf);
          uVar1 = *(undefined8 *)puVar55;
          uVar43 = (uint)(uVar46 >> 8) & 7;
          puVar55 = puVar55 + uVar43;
          uVar2 = *(undefined8 *)(puVar51 + -auVar64._0_4_);
          *(ulonglong *)puVar51 =
               CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar1 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                           (char)((ulonglong)uVar1 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                    (char)((ulonglong)uVar1 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                             (char)((ulonglong)uVar1 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar2 >>
                                                                            0x10) +
                                                                      (char)((ulonglong)uVar1 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar2 >> 8) +
                                                                               (char)((ulonglong)
                                                                                      uVar1 >> 8),
                                                                               (char)uVar2 +
                                                                               (char)uVar1)))))));
          puVar51 = puVar51 + uVar43;
          puVar47 = puVar51 + -auVar64._4_4_;
          if (param_4 <= puVar47) {
            *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
            *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
            puVar51 = puVar51 + ((uint)(uVar46 >> 0xb) & 0xf);
            uVar1 = *(undefined8 *)puVar55;
            uVar43 = (uint)(uVar46 >> 0x10) & 7;
            puVar55 = puVar55 + uVar43;
            uVar2 = *(undefined8 *)(puVar51 + -auVar64._4_4_);
            *(ulonglong *)puVar51 =
                 CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                          CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                   (char)((ulonglong)uVar1 >> 0x30),
                                   CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                            (char)((ulonglong)uVar1 >> 0x28),
                                            CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                     (char)((ulonglong)uVar1 >> 0x20),
                                                     CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                              (char)((ulonglong)uVar1 >> 0x18),
                                                              CONCAT12((char)((ulonglong)uVar2 >>
                                                                             0x10) +
                                                                       (char)((ulonglong)uVar1 >>
                                                                             0x10),
                                                                       CONCAT11((char)((ulonglong)
                                                                                       uVar2 >> 8) +
                                                                                (char)((ulonglong)
                                                                                       uVar1 >> 8),
                                                                                (char)uVar2 +
                                                                                (char)uVar1)))))));
            puVar51 = puVar51 + uVar43;
            puVar47 = puVar51 + -auVar64._8_4_;
            if (param_4 <= puVar47) {
              *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
              *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
              puVar51 = puVar51 + ((uint)(uVar46 >> 0x13) & 0xf);
              uVar1 = *(undefined8 *)puVar55;
              uVar43 = (uint)(uVar46 >> 0x18) & 7;
              uVar2 = *(undefined8 *)(puVar51 + -auVar64._8_4_);
              puVar55 = puVar55 + uVar43;
              *(ulonglong *)puVar51 =
                   CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar1 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar1 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar1 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar1 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar1 >> 8),(char)uVar2 + (char)uVar1)))
                                                  ))));
              puVar51 = puVar51 + uVar43;
              puVar47 = puVar51 + -auVar64._12_4_;
              if (param_4 <= puVar47) {
                *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
                *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
                puVar51 = puVar51 + ((uint)(uVar46 >> 0x1b) & 0xf);
                uVar1 = *(undefined8 *)puVar55;
                uVar43 = (uint)(uVar46 >> 0x20);
                puVar55 = puVar55 + (uVar43 & 7);
                uVar2 = *(undefined8 *)(puVar51 + -auVar64._12_4_);
                *(ulonglong *)puVar51 =
                     CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                              CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                       (char)((ulonglong)uVar1 >> 0x30),
                                       CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                (char)((ulonglong)uVar1 >> 0x28),
                                                CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                         (char)((ulonglong)uVar1 >> 0x20),
                                                         CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                  (char)((ulonglong)uVar1 >> 0x18),
                                                                  CONCAT12((char)((ulonglong)uVar2
                                                                                 >> 0x10) +
                                                                           (char)((ulonglong)uVar1
                                                                                 >> 0x10),
                                                                           CONCAT11((char)((
                                                  ulonglong)uVar2 >> 8) +
                                                  (char)((ulonglong)uVar1 >> 8),
                                                  (char)uVar2 + (char)uVar1)))))));
                puVar51 = puVar51 + (uVar43 & 7);
                puVar47 = puVar51 + -auVar65._0_4_;
                if (param_4 <= puVar47) {
                  *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
                  *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
                  puVar51 = puVar51 + (uVar43 >> 3 & 0xf);
                  uVar1 = *(undefined8 *)puVar55;
                  uVar41 = uVar43 >> 8 & 7;
                  uVar2 = *(undefined8 *)(puVar51 + -auVar65._0_4_);
                  puVar55 = puVar55 + uVar41;
                  *(ulonglong *)puVar51 =
                       CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                                CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                         (char)((ulonglong)uVar1 >> 0x30),
                                         CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                  (char)((ulonglong)uVar1 >> 0x28),
                                                  CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                           (char)((ulonglong)uVar1 >> 0x20),
                                                           CONCAT13((char)((ulonglong)uVar2 >> 0x18)
                                                                    + (char)((ulonglong)uVar1 >>
                                                                            0x18),
                                                                    CONCAT12((char)((ulonglong)uVar2
                                                                                   >> 0x10) +
                                                                             (char)((ulonglong)uVar1
                                                                                   >> 0x10),
                                                                             CONCAT11((char)((
                                                  ulonglong)uVar2 >> 8) +
                                                  (char)((ulonglong)uVar1 >> 8),
                                                  (char)uVar2 + (char)uVar1)))))));
                  puVar51 = puVar51 + uVar41;
                  puVar47 = puVar51 + -auVar65._4_4_;
                  if (param_4 <= puVar47) {
                    *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
                    *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
                    puVar51 = puVar51 + (uVar43 >> 0xb & 0xf);
                    uVar1 = *(undefined8 *)puVar55;
                    uVar41 = (ushort)(uVar46 >> 0x30) & 7;
                    puVar55 = puVar55 + uVar41;
                    uVar2 = *(undefined8 *)(puVar51 + -auVar65._4_4_);
                    *(ulonglong *)puVar51 =
                         CONCAT17((char)((ulonglong)uVar2 >> 0x38) +
                                  (char)((ulonglong)uVar1 >> 0x38),
                                  CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                           (char)((ulonglong)uVar1 >> 0x30),
                                           CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                    (char)((ulonglong)uVar1 >> 0x28),
                                                    CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                             (char)((ulonglong)uVar1 >> 0x20),
                                                             CONCAT13((char)((ulonglong)uVar2 >>
                                                                            0x18) +
                                                                      (char)((ulonglong)uVar1 >>
                                                                            0x18),
                                                                      CONCAT12((char)((ulonglong)
                                                                                      uVar2 >> 0x10)
                                                                               + (char)((ulonglong)
                                                                                        uVar1 >> 
                                                  0x10),CONCAT11((char)((ulonglong)uVar2 >> 8) +
                                                                 (char)((ulonglong)uVar1 >> 8),
                                                                 (char)uVar2 + (char)uVar1)))))));
                    puVar51 = puVar51 + uVar41;
                    puVar47 = puVar51 + -auVar65._8_4_;
                    if (param_4 <= puVar47) {
                      *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
                      *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
                      puVar51 = puVar51 + (uVar43 >> 0x13 & 0xf);
                      uVar1 = *(undefined8 *)puVar55;
                      uVar41 = (byte)(uVar46 >> 0x38) & 7;
                      puVar55 = puVar55 + uVar41;
                      uVar2 = *(undefined8 *)(puVar51 + -auVar65._8_4_);
                      *(ulonglong *)puVar51 =
                           CONCAT17((char)((ulonglong)uVar2 >> 0x38) +
                                    (char)((ulonglong)uVar1 >> 0x38),
                                    CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                             (char)((ulonglong)uVar1 >> 0x30),
                                             CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                      (char)((ulonglong)uVar1 >> 0x28),
                                                      CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                               (char)((ulonglong)uVar1 >> 0x20),
                                                               CONCAT13((char)((ulonglong)uVar2 >>
                                                                              0x18) +
                                                                        (char)((ulonglong)uVar1 >>
                                                                              0x18),
                                                                        CONCAT12((char)((ulonglong)
                                                                                        uVar2 >> 
                                                  0x10) + (char)((ulonglong)uVar1 >> 0x10),
                                                  CONCAT11((char)((ulonglong)uVar2 >> 8) +
                                                           (char)((ulonglong)uVar1 >> 8),
                                                           (char)uVar2 + (char)uVar1)))))));
                      puVar51 = puVar51 + uVar41;
                      puVar47 = puVar51 + -auVar65._12_4_;
                      if (param_4 <= puVar47) {
                        *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
                        *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
                        uVar1 = *(undefined8 *)puVar55;
                        puVar51 = puVar51 + (uVar43 >> 0x1b & 0xf);
                        uVar54 = *(ulonglong *)(*pauVar63 + 8);
                        uVar43 = (uint)uVar54 & 7;
                        uVar2 = *(undefined8 *)(puVar51 + -auVar65._12_4_);
                        *(ulonglong *)puVar51 =
                             CONCAT17((char)((ulonglong)uVar2 >> 0x38) +
                                      (char)((ulonglong)uVar1 >> 0x38),
                                      CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                               (char)((ulonglong)uVar1 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                        (char)((ulonglong)uVar1 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                                 (char)((ulonglong)uVar1 >> 0x20),
                                                                 CONCAT13((char)((ulonglong)uVar2 >>
                                                                                0x18) +
                                                                          (char)((ulonglong)uVar1 >>
                                                                                0x18),
                                                                          CONCAT12((char)((ulonglong
                                                                                          )uVar2 >>
                                                                                         0x10) +
                                                                                   (char)((ulonglong
                                                                                          )uVar1 >>
                                                                                         0x10),
                                                                                   CONCAT11((char)((
                                                  ulonglong)uVar2 >> 8) +
                                                  (char)((ulonglong)uVar1 >> 8),
                                                  (char)uVar2 + (char)uVar1)))))));
                        puVar55 = puVar55 + uVar43;
                        puVar51 = puVar51 + uVar43;
                        puVar47 = puVar51 + -auVar67._0_4_;
                        if (param_4 <= puVar47) {
                          *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
                          *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
                          puVar51 = puVar51 + ((uint)(uVar54 >> 3) & 0xf);
                          uVar1 = *(undefined8 *)puVar55;
                          uVar43 = (uint)(uVar54 >> 8) & 7;
                          uVar2 = *(undefined8 *)(puVar51 + -auVar67._0_4_);
                          puVar55 = puVar55 + uVar43;
                          *(ulonglong *)puVar51 =
                               CONCAT17((char)((ulonglong)uVar2 >> 0x38) +
                                        (char)((ulonglong)uVar1 >> 0x38),
                                        CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                                 (char)((ulonglong)uVar1 >> 0x30),
                                                 CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                          (char)((ulonglong)uVar1 >> 0x28),
                                                          CONCAT14((char)((ulonglong)uVar2 >> 0x20)
                                                                   + (char)((ulonglong)uVar1 >> 0x20
                                                                           ),
                                                                   CONCAT13((char)((ulonglong)uVar2
                                                                                  >> 0x18) +
                                                                            (char)((ulonglong)uVar1
                                                                                  >> 0x18),
                                                                            CONCAT12((char)((
                                                  ulonglong)uVar2 >> 0x10) +
                                                  (char)((ulonglong)uVar1 >> 0x10),
                                                  CONCAT11((char)((ulonglong)uVar2 >> 8) +
                                                           (char)((ulonglong)uVar1 >> 8),
                                                           (char)uVar2 + (char)uVar1)))))));
                          puVar51 = puVar51 + uVar43;
                          puVar47 = puVar51 + -auVar67._4_4_;
                          if (param_4 <= puVar47) {
                            *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
                            *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
                            puVar51 = puVar51 + ((uint)(uVar54 >> 0xb) & 0xf);
                            uVar1 = *(undefined8 *)puVar55;
                            uVar43 = (uint)(uVar54 >> 0x10) & 7;
                            puVar55 = puVar55 + uVar43;
                            uVar2 = *(undefined8 *)(puVar51 + -auVar67._4_4_);
                            *(ulonglong *)puVar51 =
                                 CONCAT17((char)((ulonglong)uVar2 >> 0x38) +
                                          (char)((ulonglong)uVar1 >> 0x38),
                                          CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                                   (char)((ulonglong)uVar1 >> 0x30),
                                                   CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                            (char)((ulonglong)uVar1 >> 0x28),
                                                            CONCAT14((char)((ulonglong)uVar2 >> 0x20
                                                                           ) + (char)((ulonglong)
                                                                                      uVar1 >> 0x20)
                                                                     ,CONCAT13((char)((ulonglong)
                                                                                      uVar2 >> 0x18)
                                                                               + (char)((ulonglong)
                                                                                        uVar1 >> 
                                                  0x18),CONCAT12((char)((ulonglong)uVar2 >> 0x10) +
                                                                 (char)((ulonglong)uVar1 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar2 >>
                                                                                8) +
                                                                          (char)((ulonglong)uVar1 >>
                                                                                8),(char)uVar2 +
                                                                                   (char)uVar1))))))
                                         );
                            puVar51 = puVar51 + uVar43;
                            puVar47 = puVar51 + -auVar67._8_4_;
                            if (param_4 <= puVar47) {
                              *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
                              *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
                              puVar51 = puVar51 + ((uint)(uVar54 >> 0x13) & 0xf);
                              uVar1 = *(undefined8 *)puVar55;
                              uVar43 = (uint)(uVar54 >> 0x18) & 7;
                              uVar2 = *(undefined8 *)(puVar51 + -auVar67._8_4_);
                              puVar55 = puVar55 + uVar43;
                              *(ulonglong *)puVar51 =
                                   CONCAT17((char)((ulonglong)uVar2 >> 0x38) +
                                            (char)((ulonglong)uVar1 >> 0x38),
                                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                                     (char)((ulonglong)uVar1 >> 0x30),
                                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                              (char)((ulonglong)uVar1 >> 0x28),
                                                              CONCAT14((char)((ulonglong)uVar2 >>
                                                                             0x20) +
                                                                       (char)((ulonglong)uVar1 >>
                                                                             0x20),
                                                                       CONCAT13((char)((ulonglong)
                                                                                       uVar2 >> 0x18
                                                                                      ) + (char)((
                                                  ulonglong)uVar1 >> 0x18),
                                                  CONCAT12((char)((ulonglong)uVar2 >> 0x10) +
                                                           (char)((ulonglong)uVar1 >> 0x10),
                                                           CONCAT11((char)((ulonglong)uVar2 >> 8) +
                                                                    (char)((ulonglong)uVar1 >> 8),
                                                                    (char)uVar2 + (char)uVar1)))))))
                              ;
                              puVar51 = puVar51 + uVar43;
                              puVar47 = puVar51 + -auVar67._12_4_;
                              if (param_4 <= puVar47) {
                                *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
                                *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
                                puVar51 = puVar51 + ((uint)(uVar54 >> 0x1b) & 0xf);
                                uVar1 = *(undefined8 *)puVar55;
                                uVar43 = (uint)(uVar54 >> 0x20);
                                puVar55 = puVar55 + (uVar43 & 7);
                                uVar2 = *(undefined8 *)(puVar51 + -auVar67._12_4_);
                                *(ulonglong *)puVar51 =
                                     CONCAT17((char)((ulonglong)uVar2 >> 0x38) +
                                              (char)((ulonglong)uVar1 >> 0x38),
                                              CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                                       (char)((ulonglong)uVar1 >> 0x30),
                                                       CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                                (char)((ulonglong)uVar1 >> 0x28),
                                                                CONCAT14((char)((ulonglong)uVar2 >>
                                                                               0x20) +
                                                                         (char)((ulonglong)uVar1 >>
                                                                               0x20),
                                                                         CONCAT13((char)((ulonglong)
                                                                                         uVar2 >> 
                                                  0x18) + (char)((ulonglong)uVar1 >> 0x18),
                                                  CONCAT12((char)((ulonglong)uVar2 >> 0x10) +
                                                           (char)((ulonglong)uVar1 >> 0x10),
                                                           CONCAT11((char)((ulonglong)uVar2 >> 8) +
                                                                    (char)((ulonglong)uVar1 >> 8),
                                                                    (char)uVar2 + (char)uVar1)))))))
                                ;
                                puVar51 = puVar51 + (uVar43 & 7);
                                puVar47 = puVar51 + -auVar69._0_4_;
                                if (param_4 <= puVar47) {
                                  *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
                                  *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
                                  puVar51 = puVar51 + (uVar43 >> 3 & 0xf);
                                  uVar1 = *(undefined8 *)puVar55;
                                  uVar41 = uVar43 >> 8 & 7;
                                  uVar2 = *(undefined8 *)(puVar51 + -auVar69._0_4_);
                                  puVar55 = puVar55 + uVar41;
                                  *(ulonglong *)puVar51 =
                                       CONCAT17((char)((ulonglong)uVar2 >> 0x38) +
                                                (char)((ulonglong)uVar1 >> 0x38),
                                                CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                                         (char)((ulonglong)uVar1 >> 0x30),
                                                         CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                                  (char)((ulonglong)uVar1 >> 0x28),
                                                                  CONCAT14((char)((ulonglong)uVar2
                                                                                 >> 0x20) +
                                                                           (char)((ulonglong)uVar1
                                                                                 >> 0x20),
                                                                           CONCAT13((char)((
                                                  ulonglong)uVar2 >> 0x18) +
                                                  (char)((ulonglong)uVar1 >> 0x18),
                                                  CONCAT12((char)((ulonglong)uVar2 >> 0x10) +
                                                           (char)((ulonglong)uVar1 >> 0x10),
                                                           CONCAT11((char)((ulonglong)uVar2 >> 8) +
                                                                    (char)((ulonglong)uVar1 >> 8),
                                                                    (char)uVar2 + (char)uVar1)))))))
                                  ;
                                  puVar51 = puVar51 + uVar41;
                                  puVar47 = puVar51 + -auVar69._4_4_;
                                  if (param_4 <= puVar47) {
                                    *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
                                    *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
                                    puVar51 = puVar51 + (uVar43 >> 0xb & 0xf);
                                    uVar1 = *(undefined8 *)puVar55;
                                    uVar41 = (ushort)(uVar54 >> 0x30) & 7;
                                    uVar2 = *(undefined8 *)(puVar51 + -auVar69._4_4_);
                                    *(ulonglong *)puVar51 =
                                         CONCAT17((char)((ulonglong)uVar2 >> 0x38) +
                                                  (char)((ulonglong)uVar1 >> 0x38),
                                                  CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                                           (char)((ulonglong)uVar1 >> 0x30),
                                                           CONCAT15((char)((ulonglong)uVar2 >> 0x28)
                                                                    + (char)((ulonglong)uVar1 >>
                                                                            0x28),
                                                                    CONCAT14((char)((ulonglong)uVar2
                                                                                   >> 0x20) +
                                                                             (char)((ulonglong)uVar1
                                                                                   >> 0x20),
                                                                             CONCAT13((char)((
                                                  ulonglong)uVar2 >> 0x18) +
                                                  (char)((ulonglong)uVar1 >> 0x18),
                                                  CONCAT12((char)((ulonglong)uVar2 >> 0x10) +
                                                           (char)((ulonglong)uVar1 >> 0x10),
                                                           CONCAT11((char)((ulonglong)uVar2 >> 8) +
                                                                    (char)((ulonglong)uVar1 >> 8),
                                                                    (char)uVar2 + (char)uVar1)))))))
                                    ;
                                    puVar51 = puVar51 + uVar41;
                                    puVar47 = puVar51 + -auVar69._8_4_;
                                    if (param_4 <= puVar47) {
                                      *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
                                      *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
                                      puVar51 = puVar51 + (uVar43 >> 0x13 & 0xf);
                                      uVar1 = *(undefined8 *)(puVar55 + uVar41);
                                      uVar42 = (byte)(uVar54 >> 0x38) & 7;
                                      uVar54 = (ulonglong)-auVar69._12_4_;
                                      puVar55 = puVar55 + uVar41 + uVar42;
                                      uVar2 = *(undefined8 *)(puVar51 + -auVar69._8_4_);
                                      *(ulonglong *)puVar51 =
                                           CONCAT17((char)((ulonglong)uVar2 >> 0x38) +
                                                    (char)((ulonglong)uVar1 >> 0x38),
                                                    CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                                             (char)((ulonglong)uVar1 >> 0x30),
                                                             CONCAT15((char)((ulonglong)uVar2 >>
                                                                            0x28) +
                                                                      (char)((ulonglong)uVar1 >>
                                                                            0x28),
                                                                      CONCAT14((char)((ulonglong)
                                                                                      uVar2 >> 0x20)
                                                                               + (char)((ulonglong)
                                                                                        uVar1 >> 
                                                  0x20),CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                 (char)((ulonglong)uVar1 >> 0x18),
                                                                 CONCAT12((char)((ulonglong)uVar2 >>
                                                                                0x10) +
                                                                          (char)((ulonglong)uVar1 >>
                                                                                0x10),
                                                                          CONCAT11((char)((ulonglong
                                                                                          )uVar2 >>
                                                                                         8) +
                                                                                   (char)((ulonglong
                                                                                          )uVar1 >>
                                                                                         8),(char)
                                                  uVar2 + (char)uVar1)))))));
                                      puVar51 = puVar51 + uVar42;
                                      puVar47 = puVar51 + -auVar69._12_4_;
                                      if (param_4 <= puVar47) {
                                        *(undefined8 *)puVar51 = *(undefined8 *)puVar47;
                                        *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar47 + 8);
                                        puVar51 = puVar51 + (uVar43 >> 0x1b & 0xf);
                                        pauVar63 = pauVar63 + 1;
                                        goto LAB_14f3c8136;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3c88ae;
        pcVar57 = "OODLE ERROR : corruption : mp >= window_base\n";
        iVar40 = 0xee;
        goto LAB_14f3c88a3;
      }
      iVar40 = 0;
      puVar47 = puVar51;
      if (uVar21 != 0) {
        for (; (uVar21 >> iVar40 & 1) == 0; iVar40 = iVar40 + 1) {
        }
      }
      while (iVar53 = (int)uVar54, 3 < iVar40) {
        uVar43 = *(uint *)*pauVar63;
        iVar40 = iVar40 + -4;
        pauVar63 = (undefined1 (*) [16])(*pauVar63 + 4);
        uVar41 = (uint)(ushort)((ushort)((byte)(uVar43 >> 7) & 1) |
                                (ushort)((byte)(uVar43 >> 0xf) & 1) << 1 |
                                (ushort)((byte)(uVar43 >> 0x17) & 1) << 2 |
                               (ushort)(byte)(uVar43 >> 0x1f) << 3);
        auVar70._8_8_ = (ulonglong)(uint)-iVar53 << 0x20;
        auVar70._0_8_ = *(undefined8 *)puVar61;
        auVar64 = pshufb(auVar70,(undefined1  [16])c_offset_shuffles[(int)uVar41]);
        puVar61 = (ushort *)((longlong)puVar61 + (longlong)c_comp_advance[(int)uVar41]);
        local_188 = -auVar64._0_4_;
        iStack_184 = -auVar64._4_4_;
        iStack_180 = -auVar64._8_4_;
        iStack_17c = -auVar64._12_4_;
        uVar1 = *(undefined8 *)puVar55;
        uVar2 = *(undefined8 *)(puVar47 + iVar53);
        puVar55 = puVar55 + (uVar43 & 7);
        *(ulonglong *)puVar47 =
             CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar1 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                        (char)((ulonglong)uVar1 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                 (char)((ulonglong)uVar1 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                          (char)((ulonglong)uVar1 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar2 >> 0x10)
                                                                   + (char)((ulonglong)uVar1 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar2
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar1
                                                                                  >> 8),
                                                                            (char)uVar2 +
                                                                            (char)uVar1)))))));
        puVar47 = puVar47 + (uVar43 & 7);
        puVar51 = puVar47 + local_188;
        if (puVar51 < param_4) {
LAB_14f3c81fb:
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3c88ae;
          pcVar57 = "OODLE ERROR : corruption : mp >= window_base\n";
          iVar40 = 0xfb;
          goto LAB_14f3c88a3;
        }
        *(undefined8 *)puVar47 = *(undefined8 *)puVar51;
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar51 + 8);
        uVar1 = *(undefined8 *)puVar55;
        puVar47 = puVar47 + (uVar43 >> 3 & 0xf);
        uVar41 = uVar43 >> 8 & 7;
        puVar55 = puVar55 + uVar41;
        uVar2 = *(undefined8 *)(puVar47 + local_188);
        *(ulonglong *)puVar47 =
             CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar1 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                        (char)((ulonglong)uVar1 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                 (char)((ulonglong)uVar1 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                          (char)((ulonglong)uVar1 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar2 >> 0x10)
                                                                   + (char)((ulonglong)uVar1 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar2
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar1
                                                                                  >> 8),
                                                                            (char)uVar2 +
                                                                            (char)uVar1)))))));
        puVar47 = puVar47 + uVar41;
        puVar51 = puVar47 + iStack_184;
        if (puVar51 < param_4) goto LAB_14f3c81fb;
        *(undefined8 *)puVar47 = *(undefined8 *)puVar51;
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar51 + 8);
        uVar1 = *(undefined8 *)puVar55;
        puVar47 = puVar47 + (uVar43 >> 0xb & 0xf);
        uVar41 = uVar43 >> 0x10 & 7;
        uVar2 = *(undefined8 *)(puVar47 + iStack_184);
        *(ulonglong *)puVar47 =
             CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar1 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                        (char)((ulonglong)uVar1 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                 (char)((ulonglong)uVar1 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                          (char)((ulonglong)uVar1 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar2 >> 0x10)
                                                                   + (char)((ulonglong)uVar1 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar2
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar1
                                                                                  >> 8),
                                                                            (char)uVar2 +
                                                                            (char)uVar1)))))));
        puVar47 = puVar47 + uVar41;
        puVar51 = puVar47 + iStack_180;
        if (puVar51 < param_4) goto LAB_14f3c81fb;
        uVar54 = (ulonglong)iStack_17c;
        *(undefined8 *)puVar47 = *(undefined8 *)puVar51;
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar51 + 8);
        uVar1 = *(undefined8 *)(puVar55 + uVar41);
        puVar47 = puVar47 + (uVar43 >> 0x13 & 0xf);
        uVar42 = uVar43 >> 0x18 & 7;
        puVar55 = puVar55 + uVar41 + uVar42;
        uVar2 = *(undefined8 *)(puVar47 + iStack_180);
        *(ulonglong *)puVar47 =
             CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar1 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                        (char)((ulonglong)uVar1 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                 (char)((ulonglong)uVar1 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                          (char)((ulonglong)uVar1 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar2 >> 0x10)
                                                                   + (char)((ulonglong)uVar1 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar2
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar1
                                                                                  >> 8),
                                                                            (char)uVar2 +
                                                                            (char)uVar1)))))));
        puVar47 = puVar47 + uVar42;
        puVar51 = puVar47 + uVar54;
        if (puVar51 < param_4) goto LAB_14f3c81fb;
        *(undefined8 *)puVar47 = *(undefined8 *)puVar51;
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar51 + 8);
        puVar47 = puVar47 + (uVar43 >> 0x1b & 0xf);
      }
      if (iVar40 != 0) {
        lVar44 = (longlong)iVar53;
        do {
          bVar3 = (*pauVar63)[0];
          iVar40 = iVar40 + -1;
          uVar1 = *(undefined8 *)(puVar47 + lVar44);
          uVar2 = *(undefined8 *)puVar55;
          uVar43 = bVar3 & 7;
          uVar21 = *puVar61;
          puVar55 = puVar55 + uVar43;
          pauVar63 = (undefined1 (*) [16])(*pauVar63 + 1);
          *(ulonglong *)puVar47 =
               CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                           (char)((ulonglong)uVar2 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                    (char)((ulonglong)uVar2 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                             (char)((ulonglong)uVar2 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar1 >>
                                                                            0x10) +
                                                                      (char)((ulonglong)uVar2 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar1 >> 8) +
                                                                               (char)((ulonglong)
                                                                                      uVar2 >> 8),
                                                                               (char)uVar1 +
                                                                               (char)uVar2)))))));
          puVar47 = puVar47 + uVar43;
          uVar43 = (uint)uVar54 ^ (-(uint)uVar21 ^ (uint)uVar54) & (bVar3 >> 7) - 1;
          uVar54 = (ulonglong)uVar43;
          lVar44 = (longlong)(int)uVar43;
          puVar61 = (ushort *)((longlong)puVar61 + (ulonglong)((bVar3 >> 7) - 1 & 2));
          puVar51 = puVar47 + lVar44;
          if (puVar51 < param_4) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3c88ae;
            pcVar57 = "OODLE ERROR : corruption : mp >= window_base\n";
            iVar40 = 0x101;
            goto LAB_14f3c88a3;
          }
          *(undefined8 *)puVar47 = *(undefined8 *)puVar51;
          *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar51 + 8);
          puVar47 = puVar47 + ((bVar3 & 0x78) >> 3);
        } while (iVar40 != 0);
      }
      bVar3 = (*pauVar63)[0];
      pauVar63 = (undefined1 (*) [16])(*pauVar63 + 1);
      if (2 < bVar3) {
        return (uchar *)0x0;
      }
      if (bVar3 == 0) {
        if (pauVar48 < local_1c8) {
          uVar46 = (ulonglong)(byte)(*pauVar48)[0];
          pauVar60 = (undefined1 (*) [16])(*local_1f8 + 1);
          pauVar59 = (undefined1 (*) [16])(*pauVar48 + 1);
          if (0xfb < uVar46) {
            if (local_1c8 < pauVar60) {
              uVar46 = 0;
            }
            else {
              puVar23 = *pauVar59;
              pauVar59 = (undefined1 (*) [16])(*pauVar48 + 3);
              uVar46 = uVar46 + (ulonglong)*(ushort *)puVar23 * 4;
              pauVar60 = (undefined1 (*) [16])(*local_1f8 + 3);
            }
          }
        }
        else {
          uVar46 = 0;
          pauVar60 = local_1f8;
        }
        local_1f8 = pauVar60;
        lVar44 = uVar46 + 0x40;
        if ((longlong)local_1c0 - (longlong)puVar47 < lVar44) goto LAB_14f3c8285;
        if ((longlong)local_1f0 - (longlong)puVar55 < lVar44) goto LAB_14f3c824e;
        do {
          uVar1 = *(undefined8 *)(puVar47 + (int)uVar54);
          lVar44 = lVar44 + -8;
          uVar2 = *(undefined8 *)puVar55;
          puVar55 = puVar55 + 8;
          *(ulonglong *)puVar47 =
               CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                           (char)((ulonglong)uVar2 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                    (char)((ulonglong)uVar2 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                             (char)((ulonglong)uVar2 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar1 >>
                                                                            0x10) +
                                                                      (char)((ulonglong)uVar2 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar1 >> 8) +
                                                                               (char)((ulonglong)
                                                                                      uVar2 >> 8),
                                                                               (char)uVar1 +
                                                                               (char)uVar2)))))));
          puVar47 = puVar47 + 8;
        } while (8 < lVar44);
        puVar51 = puVar47 + lVar44;
        puVar55 = puVar55 + lVar44;
        uVar1 = *(undefined8 *)(puVar51 + (longlong)(int)uVar54 + -8);
        uVar2 = *(undefined8 *)(puVar55 + -8);
        *(ulonglong *)(puVar51 + -8) =
             CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                        (char)((ulonglong)uVar2 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                 (char)((ulonglong)uVar2 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                          (char)((ulonglong)uVar2 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar1 >> 0x10)
                                                                   + (char)((ulonglong)uVar2 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar1
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar2
                                                                                  >> 8),
                                                                            (char)uVar1 +
                                                                            (char)uVar2)))))));
      }
      else {
        if (bVar3 != 1) {
          return (uchar *)0x0;
        }
        if (pauVar48 < local_1c8) {
          uVar54 = (ulonglong)(byte)(*pauVar48)[0];
          pauVar60 = (undefined1 (*) [16])(*local_1f8 + 1);
          pauVar59 = (undefined1 (*) [16])(*pauVar48 + 1);
          if (0xfb < uVar54) {
            if (local_1c8 < pauVar60) {
              uVar54 = 0;
            }
            else {
              puVar23 = *pauVar59;
              pauVar59 = (undefined1 (*) [16])(*pauVar48 + 3);
              uVar54 = uVar54 + (ulonglong)*(ushort *)puVar23 * 4;
              pauVar60 = (undefined1 (*) [16])(*local_1f8 + 3);
            }
          }
        }
        else {
          uVar54 = 0;
          pauVar60 = local_1f8;
        }
        local_1f8 = pauVar60;
        lVar44 = (longlong)local_1c0 + -(longlong)puVar47;
        if (lVar44 < (longlong)(uVar54 + 99)) {
          if (lVar44 < (longlong)(uVar54 + 0x5b)) goto LAB_14f3c82e5;
          if (-(longlong)puVar47 + (longlong)local_1d0 < (longlong)(uVar54 + 99))
          goto LAB_14f3c82b3;
        }
        uVar21 = *puVar61;
        puVar51 = puVar47 + uVar54 + 0x5b;
        puVar61 = puVar61 + 1;
        uVar54 = (ulonglong)(int)-(uint)uVar21;
        puVar52 = puVar47 + uVar54;
        if (puVar52 < param_4) goto LAB_14f3c8313;
        *(undefined8 *)puVar47 = *(undefined8 *)puVar52;
        *(undefined8 *)(puVar47 + 8) = *(undefined8 *)(puVar52 + 8);
        *(undefined8 *)(puVar47 + 0x10) = *(undefined8 *)(puVar52 + 0x10);
        *(undefined8 *)(puVar47 + 0x18) = *(undefined8 *)(puVar52 + 0x18);
        *(undefined8 *)(puVar47 + 0x20) = *(undefined8 *)(puVar52 + 0x20);
        *(undefined8 *)(puVar47 + 0x28) = *(undefined8 *)(puVar52 + 0x28);
        *(undefined8 *)(puVar47 + 0x30) = *(undefined8 *)(puVar52 + 0x30);
        *(undefined8 *)(puVar47 + 0x38) = *(undefined8 *)(puVar52 + 0x38);
        puVar47 = puVar47 + 0x40;
        puVar52 = puVar52 + 0x40;
        do {
          uVar1 = *(undefined8 *)puVar52;
          puVar52 = puVar52 + 8;
          *(undefined8 *)puVar47 = uVar1;
          puVar47 = puVar47 + 8;
        } while (puVar47 < puVar51);
      }
LAB_14f3c8136:
      pauVar48 = pauVar59;
    } while (pauVar63 < (undefined1 (*) [16])(local_1b8[-1] + 1));
  }
  iVar40 = (int)uVar54;
  if (local_1c0 < puVar51) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3c88ae;
    pcVar57 = "OODLE ERROR : corruption : (to_ptr <= parse_chunk_end)\n";
    iVar40 = 0x1c0;
  }
  else {
    local_1f8 = pauVar63 + 1;
    if (local_1e8 <= puVar55) {
      if (local_1f0 < puVar55) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3c88ae;
        pcVar57 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
        iVar40 = 0x1e7;
        goto LAB_14f3c88a3;
      }
      lVar44 = -(longlong)local_1f0;
      local_1f0 = local_c7;
      puVar55 = puVar55 + (longlong)(local_c7 + lVar44);
      local_1e8 = local_c7;
    }
    puVar58 = local_1d8;
    if (local_1e0 <= puVar61) {
      if (local_1d8 < puVar61) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3c88ae;
        pcVar57 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
        iVar40 = 0x1e8;
        goto LAB_14f3c88a3;
      }
      local_1e0 = local_158;
      puVar61 = (ushort *)((longlong)puVar61 + ((longlong)local_158 - (longlong)local_1d8));
      puVar58 = local_158;
    }
    puVar47 = local_1f0;
    if (pauVar63 < local_1b8) {
      pauVar48 = (undefined1 (*) [16])(*pauVar59 + 2);
      puVar52 = puVar51;
      pauVar60 = pauVar59;
      do {
        if (local_1f8 <= pauVar63) {
          local_1f8 = pauVar63 + 1;
          if (local_1e8 <= puVar55) {
            if (puVar47 < puVar55) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c88ae;
              pcVar57 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              iVar40 = 500;
              goto LAB_14f3c88a3;
            }
            lVar44 = -(longlong)puVar47;
            puVar47 = local_c7;
            puVar55 = puVar55 + (longlong)(local_c7 + lVar44);
            local_1e8 = local_c7;
            local_1f0 = puVar47;
          }
          if (local_1e0 <= puVar61) {
            if (puVar58 < puVar61) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c88ae;
              pcVar57 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              iVar40 = 0x1f5;
              goto LAB_14f3c88a3;
            }
            lVar44 = (longlong)local_158 - (longlong)puVar58;
            puVar58 = local_158;
            puVar61 = (ushort *)((longlong)puVar61 + lVar44);
            local_1e0 = local_158;
          }
        }
        bVar4 = (*pauVar63)[0];
        puVar23 = *pauVar63;
        uVar43 = (uint)uVar54;
        pauVar49 = pauVar48;
        pauVar59 = pauVar60;
        if (bVar4 < 0x18) {
          if (2 < bVar4) {
            return (uchar *)0x0;
          }
          if (bVar4 == 0) {
            if (pauVar60 < local_1c8) {
              uVar46 = (ulonglong)(byte)(*pauVar60)[0];
              pauVar49 = (undefined1 (*) [16])(*pauVar48 + 1);
              pauVar59 = (undefined1 (*) [16])(*pauVar60 + 1);
              if (0xfb < uVar46) {
                if (local_1c8 < pauVar49) {
                  uVar46 = 0;
                }
                else {
                  puVar24 = *pauVar59;
                  pauVar59 = (undefined1 (*) [16])(*pauVar60 + 3);
                  pauVar49 = (undefined1 (*) [16])(*pauVar48 + 3);
                  uVar46 = uVar46 + (ulonglong)*(ushort *)puVar24 * 4;
                }
              }
            }
            else {
              uVar46 = 0;
            }
            lVar44 = uVar46 + 0x40;
            if ((longlong)local_1c0 - (longlong)puVar52 < lVar44) goto LAB_14f3c8285;
            if ((longlong)puVar47 - (longlong)puVar55 < lVar44) goto LAB_14f3c824e;
            do {
              uVar1 = *(undefined8 *)(puVar52 + (int)uVar43);
              lVar44 = lVar44 + -8;
              uVar2 = *(undefined8 *)puVar55;
              puVar55 = puVar55 + 8;
              *(ulonglong *)puVar52 =
                   CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar1 >> 0x30) +
                                     (char)((ulonglong)uVar2 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                              (char)((ulonglong)uVar2 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                       (char)((ulonglong)uVar2 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                                (char)((ulonglong)uVar2 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar1 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar2 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar1 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar2 >> 8),(char)uVar1 + (char)uVar2)))
                                                  ))));
              puVar52 = puVar52 + 8;
            } while (8 < lVar44);
            puVar51 = puVar52 + lVar44;
            puVar55 = puVar55 + lVar44;
            uVar1 = *(undefined8 *)(puVar51 + (longlong)(int)uVar43 + -8);
            uVar2 = *(undefined8 *)(puVar55 + -8);
            *(ulonglong *)(puVar51 + -8) =
                 CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                          CONCAT16((char)((ulonglong)uVar1 >> 0x30) +
                                   (char)((ulonglong)uVar2 >> 0x30),
                                   CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                            (char)((ulonglong)uVar2 >> 0x28),
                                            CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                     (char)((ulonglong)uVar2 >> 0x20),
                                                     CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                              (char)((ulonglong)uVar2 >> 0x18),
                                                              CONCAT12((char)((ulonglong)uVar1 >>
                                                                             0x10) +
                                                                       (char)((ulonglong)uVar2 >>
                                                                             0x10),
                                                                       CONCAT11((char)((ulonglong)
                                                                                       uVar1 >> 8) +
                                                                                (char)((ulonglong)
                                                                                       uVar2 >> 8),
                                                                                (char)uVar1 +
                                                                                (char)uVar2)))))));
          }
          else {
            if (bVar4 != 1) {
              return (uchar *)0x0;
            }
            if (pauVar60 < local_1c8) {
              uVar54 = (ulonglong)(byte)(*pauVar60)[0];
              pauVar49 = (undefined1 (*) [16])(*pauVar48 + 1);
              pauVar59 = (undefined1 (*) [16])(*pauVar60 + 1);
              if (0xfb < uVar54) {
                if (local_1c8 < pauVar49) {
                  uVar54 = 0;
                }
                else {
                  puVar24 = *pauVar59;
                  pauVar59 = (undefined1 (*) [16])(*pauVar60 + 3);
                  pauVar49 = (undefined1 (*) [16])(*pauVar48 + 3);
                  uVar54 = uVar54 + (ulonglong)*(ushort *)puVar24 * 4;
                }
              }
            }
            else {
              uVar54 = 0;
            }
            lVar44 = -(longlong)puVar52 + (longlong)local_1c0;
            if (lVar44 < (longlong)(uVar54 + 99)) {
              if (lVar44 < (longlong)(uVar54 + 0x5b)) goto LAB_14f3c82e5;
              if (-(longlong)puVar52 + (longlong)local_1d0 < (longlong)(uVar54 + 99))
              goto LAB_14f3c82b3;
            }
            uVar21 = *puVar61;
            puVar51 = puVar52 + uVar54 + 0x5b;
            puVar61 = puVar61 + 1;
            uVar54 = (ulonglong)(int)-(uint)uVar21;
            puVar45 = puVar52 + uVar54;
            if (puVar45 < param_4) goto LAB_14f3c8313;
            *(undefined8 *)puVar52 = *(undefined8 *)puVar45;
            *(undefined8 *)(puVar52 + 8) = *(undefined8 *)(puVar45 + 8);
            *(undefined8 *)(puVar52 + 0x10) = *(undefined8 *)(puVar45 + 0x10);
            *(undefined8 *)(puVar52 + 0x18) = *(undefined8 *)(puVar45 + 0x18);
            *(undefined8 *)(puVar52 + 0x20) = *(undefined8 *)(puVar45 + 0x20);
            *(undefined8 *)(puVar52 + 0x28) = *(undefined8 *)(puVar45 + 0x28);
            *(undefined8 *)(puVar52 + 0x30) = *(undefined8 *)(puVar45 + 0x30);
            *(undefined8 *)(puVar52 + 0x38) = *(undefined8 *)(puVar45 + 0x38);
            puVar52 = puVar52 + 0x40;
            puVar45 = puVar45 + 0x40;
            do {
              uVar1 = *(undefined8 *)puVar45;
              puVar45 = puVar45 + 8;
              *(undefined8 *)puVar52 = uVar1;
              puVar52 = puVar52 + 8;
            } while (puVar52 < puVar51);
          }
          local_1f8 = (undefined1 (*) [16])(pauVar63[1] + 1);
          if (local_1e8 <= puVar55) {
            if (puVar47 < puVar55) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c88ae;
              pcVar57 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              iVar40 = 0x208;
              goto LAB_14f3c88a3;
            }
            lVar44 = -(longlong)puVar47;
            puVar47 = local_c7;
            puVar55 = puVar55 + (longlong)(local_c7 + lVar44);
            local_1e8 = local_c7;
            local_1f0 = puVar47;
          }
          if (local_1e0 <= puVar61) {
            if (puVar58 < puVar61) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3c88ae;
              pcVar57 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              iVar40 = 0x209;
              goto LAB_14f3c88a3;
            }
            lVar44 = (longlong)local_158 - (longlong)puVar58;
            puVar58 = local_158;
            puVar61 = (ushort *)((longlong)puVar61 + lVar44);
            local_1e0 = local_158;
          }
        }
        else {
          uVar21 = *puVar61;
          if (local_1d0 < puVar52 + 8) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3c88ae;
            pcVar57 = "OODLE ERROR : corruption : (to_ptr+8 <= overrun_chunk_end)\n";
            iVar40 = 0x1fc;
            goto LAB_14f3c88a3;
          }
          uVar1 = *(undefined8 *)puVar55;
          uVar2 = *(undefined8 *)(puVar52 + (int)uVar43);
          puVar55 = puVar55 + (bVar4 & 7);
          *(ulonglong *)puVar52 =
               CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar1 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                           (char)((ulonglong)uVar1 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                    (char)((ulonglong)uVar1 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                             (char)((ulonglong)uVar1 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar2 >>
                                                                            0x10) +
                                                                      (char)((ulonglong)uVar1 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar2 >> 8) +
                                                                               (char)((ulonglong)
                                                                                      uVar1 >> 8),
                                                                               (char)uVar2 +
                                                                               (char)uVar1)))))));
          puVar52 = puVar52 + (bVar4 & 7);
          uVar43 = uVar43 ^ (-(uint)uVar21 ^ uVar43) & (bVar4 >> 7) - 1;
          uVar54 = (ulonglong)uVar43;
          puVar61 = (ushort *)((longlong)puVar61 + (ulonglong)((bVar4 >> 7) - 1 & 2));
          puVar51 = puVar52 + (int)uVar43;
          if (puVar51 < param_4) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3c88ae;
            pcVar57 = "OODLE ERROR : corruption : mp >= window_base\n";
            iVar40 = 0x1fc;
            goto LAB_14f3c88a3;
          }
          if (local_1d0 < puVar52 + 0x10) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3c88ae;
            pcVar57 = "OODLE ERROR : corruption : (to_ptr+16 <= overrun_chunk_end)\n";
            iVar40 = 0x1fc;
            goto LAB_14f3c88a3;
          }
          *(undefined8 *)puVar52 = *(undefined8 *)puVar51;
          *(undefined8 *)(puVar52 + 8) = *(undefined8 *)(puVar51 + 8);
          puVar51 = puVar52 + (bVar4 >> 3 & 0xf);
          puVar47 = local_1f0;
        }
        iVar40 = (int)uVar54;
        pauVar48 = pauVar49;
        puVar52 = puVar51;
        pauVar60 = pauVar59;
        pauVar63 = (undefined1 (*) [16])(puVar23 + 1);
      } while ((undefined1 (*) [16])(puVar23 + 1) < local_1b8);
    }
    if (local_1c0 <= puVar51) {
      if (local_1c0 < puVar51) {
        return (uchar *)0x0;
      }
code_r0x00014f3c8960:
      if (puVar58 < puVar61) {
        return (uchar *)0x0;
      }
      if (puVar47 < puVar55) {
        return (uchar *)0x0;
      }
      *local_1b0 = iVar40;
      local_1a0->literals_ptr = puVar55 + ((longlong)local_1a8 - (longlong)puVar47);
      local_1a0->off16_ptr =
           (uchar *)(((longlong)local_198 - (longlong)puVar58) + (longlong)puVar61);
      if (local_1c8 < pauVar59) {
        return (uchar *)0x0;
      }
      local_1a0->excesses_ptr = (uchar *)pauVar59;
      return param_5;
    }
    uVar54 = (longlong)local_1c0 - (longlong)puVar51;
    if (puVar55 + uVar54 <= puVar47) {
      if (7 < (longlong)uVar54) {
        uVar46 = uVar54 >> 3;
        uVar54 = uVar54 + uVar46 * -8;
        do {
          uVar1 = *(undefined8 *)(puVar51 + iVar40);
          uVar2 = *(undefined8 *)puVar55;
          puVar55 = puVar55 + 8;
          *(ulonglong *)puVar51 =
               CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                           (char)((ulonglong)uVar2 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                    (char)((ulonglong)uVar2 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                             (char)((ulonglong)uVar2 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar1 >>
                                                                            0x10) +
                                                                      (char)((ulonglong)uVar2 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar1 >> 8) +
                                                                               (char)((ulonglong)
                                                                                      uVar2 >> 8),
                                                                               (char)uVar1 +
                                                                               (char)uVar2)))))));
          puVar51 = puVar51 + 8;
          uVar46 = uVar46 - 1;
        } while (uVar46 != 0);
      }
      for (; uVar54 != 0; uVar54 = uVar54 - 1) {
        uVar5 = *puVar55;
        puVar55 = puVar55 + 1;
        *puVar51 = puVar51[iVar40] + uVar5;
        puVar51 = puVar51 + 1;
      }
      goto code_r0x00014f3c8960;
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3c88ae;
    pcVar57 = "OODLE ERROR : corruption : (literals_ptr+lrl <= literals_end)\n";
    iVar40 = 0x217;
  }
LAB_14f3c88a3:
  pcVar50 = "v:\\devel\\projects\\oodle2\\core\\newlzf_decode_parse_outer.inl";
LAB_14f3c88aa:
  (*g_fp_OodleCore_Plugin_Printf)(0,pcVar50,iVar40,pcVar57);
LAB_14f3c88ae:
  ooLogErrorPost();
  return (uchar *)0x0;
LAB_14f3c82e5:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c88ae;
  pcVar57 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  iVar40 = 0x86;
  pcVar50 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c88aa;
LAB_14f3c82b3:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c88ae;
  pcVar57 = "OODLE ERROR : corruption : ( ml+8 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  iVar40 = 0x87;
  pcVar50 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c88aa;
LAB_14f3c8313:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c88ae;
  pcVar57 = "OODLE ERROR : corruption : mp >= window_base\n";
  iVar40 = 0x98;
  pcVar50 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c88aa;
LAB_14f3c8285:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c88ae;
  pcVar57 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(parse_chunk_end-to_ptr))\n";
  iVar40 = 0x30;
  pcVar50 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c88aa;
LAB_14f3c824e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3c88ae;
  pcVar57 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(literals_end-literals_ptr))\n";
  iVar40 = 0x31;
  pcVar50 = "v:\\devel\\projects\\oodle2\\core\\newlzf_escape_packet.inl";
  goto LAB_14f3c88aa;
}

// newlzf_getv @ 14f3c89d0

long64 __cdecl oo2::newlzf_getv(uchar **param_1,uchar *param_2)

{
  ushort uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  
  pbVar2 = *param_1;
  if (pbVar2 < param_2) {
    uVar3 = (ulonglong)*pbVar2;
    *param_1 = pbVar2 + 1;
    if (uVar3 < 0xfc) {
      return uVar3;
    }
    if (pbVar2 + 3 <= param_2) {
      uVar1 = *(ushort *)(pbVar2 + 1);
      *param_1 = pbVar2 + 3;
      return uVar3 + (ulonglong)uVar1 * 4;
    }
  }
  return 0;
}

// newlzf_unpack_escape_offsets_sse4 @ 14f3c8a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long64 __cdecl
oo2::newlzf_unpack_escape_offsets_sse4
          (uchar *param_1,uchar *param_2,uint *param_3,long64 param_4,long64 param_5)

{
  int iVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uchar *puVar10;
  uchar *puVar11;
  char *pcVar12;
  uint *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_4 == 0) {
    return 0;
  }
  iVar6 = 0xbfffff;
  if (param_5 < 0xbfffff) {
    iVar6 = (int)param_5;
  }
  iVar9 = 0;
  pauVar5 = (undefined1 (*) [16])param_1;
  if (-1 < param_4 + -4) {
    do {
      if (param_2 < pauVar5 + 1) break;
      auVar14 = pshufb(*pauVar5,___xmm_ff0b0a09ff080706ff050403ff020100);
      *(undefined1 (*) [16])(param_3 + iVar9) = auVar14;
      auVar15._0_4_ = -(uint)(iVar6 < auVar14._0_4_);
      auVar15._4_4_ = -(uint)(iVar6 < auVar14._4_4_);
      auVar15._8_4_ = -(uint)(iVar6 < auVar14._8_4_);
      auVar15._12_4_ = -(uint)(iVar6 < auVar14._12_4_);
      uVar2 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
              (ushort)((byte)(auVar15._12_4_ >> 7) & 1) << 0xc |
              (ushort)((byte)(auVar15._12_4_ >> 0xf) & 1) << 0xd |
              (ushort)((byte)(auVar15._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar15._12_4_ >> 0x1f) << 0xf;
      if (uVar2 == 0) {
        pauVar5 = (undefined1 (*) [16])(*pauVar5 + 0xc);
        iVar9 = iVar9 + 4;
      }
      else {
        iVar1 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
        iVar8 = iVar9 + (iVar1 >> 2);
        puVar13 = (uint *)(*pauVar5 + (iVar1 >> 2) * 3);
        pauVar5 = (undefined1 (*) [16])(puVar13 + 1);
        uVar7 = (*puVar13 & 0xffffff) + (uint)*(byte *)((longlong)puVar13 + 3) * 0x400000;
        if (param_5 < (longlong)(ulonglong)uVar7) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3c8bf6;
          pcVar12 = "OODLE ERROR : corruption : ((SINTa)off24 <= max_offset)\n";
          iVar6 = 0x168;
          goto LAB_14f3c8beb;
        }
        iVar9 = iVar8 + 1;
        param_3[iVar8] = uVar7;
      }
    } while ((longlong)iVar9 <= param_4 + -4);
  }
  if (iVar9 < param_4) {
    puVar13 = param_3 + iVar9;
    pauVar4 = pauVar5;
    puVar10 = *pauVar5 + 3;
    do {
      if (param_2 < puVar10) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3c8bf6;
        pcVar12 = "OODLE ERROR : corruption : comp_ptr+3 <= comp_end\n";
        iVar6 = 0x179;
        goto LAB_14f3c8beb;
      }
      puVar11 = puVar10 + 3;
      pauVar5 = (undefined1 (*) [16])(*pauVar4 + 3);
      uVar7 = (uint)*(uint3 *)*pauVar4;
      if (0xbfffff < uVar7) {
        if (param_2 <= pauVar5) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3c8bf6;
          pcVar12 = "OODLE ERROR : corruption : comp_ptr < comp_end\n";
          iVar6 = 0x17e;
LAB_14f3c8beb:
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzf_sse4.cpp",iVar6,pcVar12);
LAB_14f3c8bf6:
          ooLogErrorPost();
          return -1;
        }
        puVar3 = *pauVar5;
        puVar11 = puVar10 + 4;
        pauVar5 = (undefined1 (*) [16])(*pauVar4 + 4);
        uVar7 = uVar7 + (uint)(byte)*puVar3 * 0x400000;
      }
      if (param_5 < (longlong)(ulonglong)uVar7) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3c8bf6;
        pcVar12 = "OODLE ERROR : corruption : ((SINTa)off24 <= max_offset)\n";
        iVar6 = 0x182;
        goto LAB_14f3c8beb;
      }
      iVar9 = iVar9 + 1;
      *puVar13 = uVar7;
      puVar13 = puVar13 + 1;
      pauVar4 = pauVar5;
      puVar10 = puVar11;
    } while (iVar9 < param_4);
  }
  return (longlong)pauVar5 - (longlong)param_1;
}

// rrCtz32 @ 14f3c8c20

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

// rrPtrDiff @ 14f3c8c30

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

