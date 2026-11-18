// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 4

// pas_committed_pages_vector_construct @ 140d91d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_committed_pages_vector_construct
          (pas_committed_pages_vector *param_1,void *param_2,ulong64 param_3,
          pas_allocation_config *param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  char *pcVar4;
  SIZE_T SVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  _MEMORY_BASIC_INFORMATION local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar7 = pas_page_malloc_cached_alignment;
  if (pas_page_malloc_cached_alignment == 0) {
    uVar7 = pas_page_malloc_alignment_slow();
  }
  pas_page_malloc_cached_alignment = uVar7;
  if (pas_page_malloc_cached_alignment_shift == 0) {
    pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
    if ((uVar7 ^ uVar7 - 1) <= uVar7 - 1) goto LAB_140d91eee;
  }
  else if ((uVar7 ^ uVar7 - 1) <= uVar7 - 1) {
LAB_140d91eee:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar7 = uVar7 - 1;
  if ((uVar7 & (ulonglong)param_2) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar7 & param_3) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  bVar3 = (byte)pas_page_malloc_cached_alignment_shift;
  uVar8 = param_3 >> (bVar3 & 0x3f);
  pcVar4 = (*param_4->allocate)
                     (uVar8,"pas_committed_pages_vector/raw_data",pas_object_allocation,param_4->arg
                     );
  param_1->raw_data = pcVar4;
  param_1->size = uVar8;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      SVar5 = VirtualQuery((LPCVOID)((uVar9 << (bVar3 & 0x3f)) + (longlong)param_2),&local_78,0x30);
      if (SVar5 != 0x30) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((local_78.RegionSize & uVar7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar6 = local_78.RegionSize >> (bVar3 & 0x3f);
      if (uVar8 - uVar9 <= uVar6) {
        uVar6 = uVar8 - uVar9;
      }
      uVar1 = uVar6 + uVar9;
      if (uVar9 < uVar1) {
        do {
          if (uVar8 <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          param_1->raw_data[uVar9] = (byte)(local_78.State >> 0xc) & 1;
          uVar9 = uVar9 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar9 = uVar1;
    } while (uVar1 < uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// pas_committed_pages_vector_destruct @ 140d91f00

void __cdecl
pas_committed_pages_vector_destruct
          (pas_committed_pages_vector *param_1,pas_allocation_config *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140d91f15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2->deallocate)(param_1->raw_data,param_1->size,pas_object_allocation,param_2->arg);
  return;
}

// pas_committed_pages_vector_count_committed @ 140d91f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl pas_committed_pages_vector_count_committed(pas_committed_pages_vector *param_1)

{
  ulonglong uVar1;
  char *pcVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  uVar1 = param_1->size;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    pcVar2 = param_1->raw_data;
    if (uVar1 < 4) {
      uVar3 = 0;
      uVar4 = uVar1;
    }
    else {
      uVar4 = (ulonglong)((uint)uVar1 & 3);
      lVar5 = 0;
      lVar8 = 0;
      lVar9 = 0;
      lVar6 = 0;
      lVar7 = 0;
      do {
        auVar10 = psllw(ZEXT216(*(ushort *)(pcVar2 + lVar5 + (uVar1 - 2))),8);
        auVar10 = auVar10 | ZEXT216(*(ushort *)(pcVar2 + lVar5 + (uVar1 - 2)) >> 8);
        auVar22 = psllw(ZEXT216(*(ushort *)(pcVar2 + lVar5 + (uVar1 - 4))),8);
        auVar22 = auVar22 | ZEXT216(*(ushort *)(pcVar2 + lVar5 + (uVar1 - 4)) >> 8);
        auVar11[0] = -(auVar10[0] == '\0');
        auVar11[1] = -(auVar10[1] == '\0');
        auVar11[2] = -(auVar10[2] == '\0');
        auVar11[3] = -(auVar10[3] == '\0');
        auVar11[4] = -(auVar10[4] == '\0');
        auVar11[5] = -(auVar10[5] == '\0');
        auVar11[6] = -(auVar10[6] == '\0');
        auVar11[7] = -(auVar10[7] == '\0');
        auVar11[8] = -(auVar10[8] == '\0');
        auVar11[9] = -(auVar10[9] == '\0');
        auVar11[10] = -(auVar10[10] == '\0');
        auVar11[0xb] = -(auVar10[0xb] == '\0');
        auVar11[0xc] = -(auVar10[0xc] == '\0');
        auVar11[0xd] = -(auVar10[0xd] == '\0');
        auVar11[0xe] = -(auVar10[0xe] == '\0');
        auVar11[0xf] = -(auVar10[0xf] == '\0');
        auVar10._8_4_ = 0xffffffff;
        auVar10._0_8_ = 0xffffffffffffffff;
        auVar10._12_4_ = 0xffffffff;
        auVar11 = auVar11 ^ auVar10;
        auVar19._0_14_ = auVar11._0_14_;
        auVar19[0xe] = auVar11[7];
        auVar19[0xf] = auVar11[7];
        auVar18._14_2_ = auVar19._14_2_;
        auVar18._0_13_ = auVar11._0_13_;
        auVar18[0xd] = auVar11[6];
        auVar17._13_3_ = auVar18._13_3_;
        auVar17._0_12_ = auVar11._0_12_;
        auVar17[0xc] = auVar11[6];
        auVar16._12_4_ = auVar17._12_4_;
        auVar16._0_11_ = auVar11._0_11_;
        auVar16[0xb] = auVar11[5];
        auVar15._11_5_ = auVar16._11_5_;
        auVar15._0_10_ = auVar11._0_10_;
        auVar15[10] = auVar11[5];
        auVar14._10_6_ = auVar15._10_6_;
        auVar14._0_9_ = auVar11._0_9_;
        auVar14[9] = auVar11[4];
        auVar13._9_7_ = auVar14._9_7_;
        auVar13._0_8_ = auVar11._0_8_;
        auVar13[8] = auVar11[4];
        auVar12._8_8_ = auVar13._8_8_;
        auVar12[7] = auVar11[3];
        auVar12[6] = auVar11[3];
        auVar12[5] = auVar11[2];
        auVar12[4] = auVar11[2];
        auVar12[3] = auVar11[1];
        auVar12[2] = auVar11[1];
        auVar12[0] = auVar11[0];
        auVar12[1] = auVar12[0];
        auVar10 = pshuflw(auVar12,auVar12,0xd4);
        auVar20._12_4_ = auVar10._12_4_;
        auVar20._0_8_ = auVar10._0_8_;
        auVar20._8_4_ = auVar10._4_4_;
        auVar20 = auVar20 & ___xmm_00000000000000010000000000000001;
        lVar8 = lVar8 + auVar20._0_8_;
        lVar9 = lVar9 + auVar20._8_8_;
        auVar23[0] = -(auVar22[0] == '\0');
        auVar23[1] = -(auVar22[1] == '\0');
        auVar23[2] = -(auVar22[2] == '\0');
        auVar23[3] = -(auVar22[3] == '\0');
        auVar23[4] = -(auVar22[4] == '\0');
        auVar23[5] = -(auVar22[5] == '\0');
        auVar23[6] = -(auVar22[6] == '\0');
        auVar23[7] = -(auVar22[7] == '\0');
        auVar23[8] = -(auVar22[8] == '\0');
        auVar23[9] = -(auVar22[9] == '\0');
        auVar23[10] = -(auVar22[10] == '\0');
        auVar23[0xb] = -(auVar22[0xb] == '\0');
        auVar23[0xc] = -(auVar22[0xc] == '\0');
        auVar23[0xd] = -(auVar22[0xd] == '\0');
        auVar23[0xe] = -(auVar22[0xe] == '\0');
        auVar23[0xf] = -(auVar22[0xf] == '\0');
        auVar22._8_4_ = 0xffffffff;
        auVar22._0_8_ = 0xffffffffffffffff;
        auVar22._12_4_ = 0xffffffff;
        auVar23 = auVar23 ^ auVar22;
        auVar31._0_14_ = auVar23._0_14_;
        auVar31[0xe] = auVar23[7];
        auVar31[0xf] = auVar23[7];
        auVar30._14_2_ = auVar31._14_2_;
        auVar30._0_13_ = auVar23._0_13_;
        auVar30[0xd] = auVar23[6];
        auVar29._13_3_ = auVar30._13_3_;
        auVar29._0_12_ = auVar23._0_12_;
        auVar29[0xc] = auVar23[6];
        auVar28._12_4_ = auVar29._12_4_;
        auVar28._0_11_ = auVar23._0_11_;
        auVar28[0xb] = auVar23[5];
        auVar27._11_5_ = auVar28._11_5_;
        auVar27._0_10_ = auVar23._0_10_;
        auVar27[10] = auVar23[5];
        auVar26._10_6_ = auVar27._10_6_;
        auVar26._0_9_ = auVar23._0_9_;
        auVar26[9] = auVar23[4];
        auVar25._9_7_ = auVar26._9_7_;
        auVar25._0_8_ = auVar23._0_8_;
        auVar25[8] = auVar23[4];
        auVar24._8_8_ = auVar25._8_8_;
        auVar24[7] = auVar23[3];
        auVar24[6] = auVar23[3];
        auVar24[5] = auVar23[2];
        auVar24[4] = auVar23[2];
        auVar24[3] = auVar23[1];
        auVar24[2] = auVar23[1];
        auVar24[0] = auVar23[0];
        auVar24[1] = auVar24[0];
        auVar10 = pshuflw(auVar20,auVar24,0xd4);
        auVar21._12_4_ = auVar10._12_4_;
        auVar21._0_8_ = auVar10._0_8_;
        auVar21._8_4_ = auVar10._4_4_;
        lVar6 = lVar6 + SUB168(auVar21 & ___xmm_00000000000000010000000000000001,0);
        lVar7 = lVar7 + SUB168(auVar21 & ___xmm_00000000000000010000000000000001,8);
        lVar5 = lVar5 + -4;
      } while (-lVar5 != (uVar1 & 0xfffffffffffffffc));
      uVar3 = lVar7 + lVar9 + lVar6 + lVar8;
      if (uVar1 == (uVar1 & 0xfffffffffffffffc)) {
        return uVar3;
      }
    }
    do {
      uVar3 = (uVar3 + 1) - (ulonglong)(pcVar2[uVar4 - 1] == '\0');
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return uVar3;
}

// pas_count_committed_pages @ 140d92060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl
pas_count_committed_pages(void *param_1,ulong64 param_2,pas_allocation_config *param_3)

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_78 [40];
  pas_committed_pages_vector local_50;
  ulonglong local_40;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_78;
  pas_committed_pages_vector_construct(&local_50,param_1,param_2,param_3);
  if (local_50.size == 0) {
    uVar3 = 0;
  }
  else {
    if (local_50.size < 4) {
      uVar3 = 0;
      uVar2 = local_50.size;
    }
    else {
      uVar2 = (ulong64)((uint)local_50.size & 3);
      lVar4 = 0;
      lVar7 = 0;
      lVar8 = 0;
      lVar5 = 0;
      lVar6 = 0;
      do {
        auVar9 = psllw(ZEXT216(*(ushort *)(local_50.raw_data + lVar4 + (local_50.size - 2))),8);
        auVar9 = auVar9 | ZEXT216(*(ushort *)(local_50.raw_data + lVar4 + (local_50.size - 2)) >> 8)
        ;
        auVar21 = psllw(ZEXT216(*(ushort *)(local_50.raw_data + lVar4 + (local_50.size - 4))),8);
        auVar21 = auVar21 | ZEXT216(*(ushort *)(local_50.raw_data + lVar4 + (local_50.size - 4)) >>
                                    8);
        auVar10[0] = -(auVar9[0] == '\0');
        auVar10[1] = -(auVar9[1] == '\0');
        auVar10[2] = -(auVar9[2] == '\0');
        auVar10[3] = -(auVar9[3] == '\0');
        auVar10[4] = -(auVar9[4] == '\0');
        auVar10[5] = -(auVar9[5] == '\0');
        auVar10[6] = -(auVar9[6] == '\0');
        auVar10[7] = -(auVar9[7] == '\0');
        auVar10[8] = -(auVar9[8] == '\0');
        auVar10[9] = -(auVar9[9] == '\0');
        auVar10[10] = -(auVar9[10] == '\0');
        auVar10[0xb] = -(auVar9[0xb] == '\0');
        auVar10[0xc] = -(auVar9[0xc] == '\0');
        auVar10[0xd] = -(auVar9[0xd] == '\0');
        auVar10[0xe] = -(auVar9[0xe] == '\0');
        auVar10[0xf] = -(auVar9[0xf] == '\0');
        auVar9._8_4_ = 0xffffffff;
        auVar9._0_8_ = 0xffffffffffffffff;
        auVar9._12_4_ = 0xffffffff;
        auVar10 = auVar10 ^ auVar9;
        auVar18._0_14_ = auVar10._0_14_;
        auVar18[0xe] = auVar10[7];
        auVar18[0xf] = auVar10[7];
        auVar17._14_2_ = auVar18._14_2_;
        auVar17._0_13_ = auVar10._0_13_;
        auVar17[0xd] = auVar10[6];
        auVar16._13_3_ = auVar17._13_3_;
        auVar16._0_12_ = auVar10._0_12_;
        auVar16[0xc] = auVar10[6];
        auVar15._12_4_ = auVar16._12_4_;
        auVar15._0_11_ = auVar10._0_11_;
        auVar15[0xb] = auVar10[5];
        auVar14._11_5_ = auVar15._11_5_;
        auVar14._0_10_ = auVar10._0_10_;
        auVar14[10] = auVar10[5];
        auVar13._10_6_ = auVar14._10_6_;
        auVar13._0_9_ = auVar10._0_9_;
        auVar13[9] = auVar10[4];
        auVar12._9_7_ = auVar13._9_7_;
        auVar12._0_8_ = auVar10._0_8_;
        auVar12[8] = auVar10[4];
        auVar11._8_8_ = auVar12._8_8_;
        auVar11[7] = auVar10[3];
        auVar11[6] = auVar10[3];
        auVar11[5] = auVar10[2];
        auVar11[4] = auVar10[2];
        auVar11[3] = auVar10[1];
        auVar11[2] = auVar10[1];
        auVar11[0] = auVar10[0];
        auVar11[1] = auVar11[0];
        auVar9 = pshuflw(auVar11,auVar11,0xd4);
        auVar19._12_4_ = auVar9._12_4_;
        auVar19._0_8_ = auVar9._0_8_;
        auVar19._8_4_ = auVar9._4_4_;
        auVar19 = auVar19 & ___xmm_00000000000000010000000000000001;
        lVar7 = lVar7 + auVar19._0_8_;
        lVar8 = lVar8 + auVar19._8_8_;
        auVar22[0] = -(auVar21[0] == '\0');
        auVar22[1] = -(auVar21[1] == '\0');
        auVar22[2] = -(auVar21[2] == '\0');
        auVar22[3] = -(auVar21[3] == '\0');
        auVar22[4] = -(auVar21[4] == '\0');
        auVar22[5] = -(auVar21[5] == '\0');
        auVar22[6] = -(auVar21[6] == '\0');
        auVar22[7] = -(auVar21[7] == '\0');
        auVar22[8] = -(auVar21[8] == '\0');
        auVar22[9] = -(auVar21[9] == '\0');
        auVar22[10] = -(auVar21[10] == '\0');
        auVar22[0xb] = -(auVar21[0xb] == '\0');
        auVar22[0xc] = -(auVar21[0xc] == '\0');
        auVar22[0xd] = -(auVar21[0xd] == '\0');
        auVar22[0xe] = -(auVar21[0xe] == '\0');
        auVar22[0xf] = -(auVar21[0xf] == '\0');
        auVar21._8_4_ = 0xffffffff;
        auVar21._0_8_ = 0xffffffffffffffff;
        auVar21._12_4_ = 0xffffffff;
        auVar22 = auVar22 ^ auVar21;
        auVar30._0_14_ = auVar22._0_14_;
        auVar30[0xe] = auVar22[7];
        auVar30[0xf] = auVar22[7];
        auVar29._14_2_ = auVar30._14_2_;
        auVar29._0_13_ = auVar22._0_13_;
        auVar29[0xd] = auVar22[6];
        auVar28._13_3_ = auVar29._13_3_;
        auVar28._0_12_ = auVar22._0_12_;
        auVar28[0xc] = auVar22[6];
        auVar27._12_4_ = auVar28._12_4_;
        auVar27._0_11_ = auVar22._0_11_;
        auVar27[0xb] = auVar22[5];
        auVar26._11_5_ = auVar27._11_5_;
        auVar26._0_10_ = auVar22._0_10_;
        auVar26[10] = auVar22[5];
        auVar25._10_6_ = auVar26._10_6_;
        auVar25._0_9_ = auVar22._0_9_;
        auVar25[9] = auVar22[4];
        auVar24._9_7_ = auVar25._9_7_;
        auVar24._0_8_ = auVar22._0_8_;
        auVar24[8] = auVar22[4];
        auVar23._8_8_ = auVar24._8_8_;
        auVar23[7] = auVar22[3];
        auVar23[6] = auVar22[3];
        auVar23[5] = auVar22[2];
        auVar23[4] = auVar22[2];
        auVar23[3] = auVar22[1];
        auVar23[2] = auVar22[1];
        auVar23[0] = auVar22[0];
        auVar23[1] = auVar23[0];
        auVar9 = pshuflw(auVar19,auVar23,0xd4);
        auVar20._12_4_ = auVar9._12_4_;
        auVar20._0_8_ = auVar9._0_8_;
        auVar20._8_4_ = auVar9._4_4_;
        lVar5 = lVar5 + SUB168(auVar20 & ___xmm_00000000000000010000000000000001,0);
        lVar6 = lVar6 + SUB168(auVar20 & ___xmm_00000000000000010000000000000001,8);
        lVar4 = lVar4 + -4;
      } while (-lVar4 != (local_50.size & 0xfffffffffffffffc));
      uVar3 = lVar6 + lVar8 + lVar5 + lVar7;
      if (local_50.size == (local_50.size & 0xfffffffffffffffc)) goto LAB_140d921ae;
    }
    do {
      uVar3 = (uVar3 + 1) - (ulonglong)(local_50.raw_data[uVar2 - 1] == '\0');
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
LAB_140d921ae:
  (*param_3->deallocate)(local_50.raw_data,local_50.size,pas_object_allocation,param_3->arg);
  if ((local_40 ^ (ulonglong)auStack_78) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return uVar3;
}

