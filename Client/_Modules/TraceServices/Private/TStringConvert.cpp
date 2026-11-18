// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// Convert<char> @ 14d3c2c80

void __cdecl
TStringConvert<char,wchar_t>::Convert<char>(wchar_t *param_1,int param_2,char *param_3,int param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  uVar6 = param_4;
  if (param_2 <= param_4) {
    uVar6 = param_2;
  }
  iVar12 = 0;
  iVar13 = iVar12;
  if (((0 < (int)uVar6) && (iVar13 = 0, 3 < uVar6)) &&
     ((param_3 + (int)(uVar6 - 1) < param_1 || (param_1 + (int)(uVar6 - 1) < param_3)))) {
    if (0x1f < uVar6) {
      uVar8 = uVar6 & 0x8000001f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
      }
      puVar9 = (ulonglong *)(param_3 + 0x10);
      pauVar11 = (undefined1 (*) [16])(param_1 + 0x10);
      do {
        uVar2 = puVar9[-2];
        iVar12 = iVar12 + 0x20;
        uVar3 = puVar9[-1];
        puVar1 = puVar9 + 4;
        uVar30 = (undefined1)(uVar2 >> 0x38);
        auVar19._8_6_ = 0;
        auVar19._0_8_ = uVar2;
        auVar19[0xe] = uVar30;
        auVar19[0xf] = uVar30;
        uVar30 = (undefined1)(uVar2 >> 0x30);
        auVar18._14_2_ = auVar19._14_2_;
        auVar18._8_5_ = 0;
        auVar18._0_8_ = uVar2;
        auVar18[0xd] = uVar30;
        auVar17._13_3_ = auVar18._13_3_;
        auVar17._8_4_ = 0;
        auVar17._0_8_ = uVar2;
        auVar17[0xc] = uVar30;
        uVar30 = (undefined1)(uVar2 >> 0x28);
        auVar16._12_4_ = auVar17._12_4_;
        auVar16._8_3_ = 0;
        auVar16._0_8_ = uVar2;
        auVar16[0xb] = uVar30;
        auVar15._11_5_ = auVar16._11_5_;
        auVar15._8_2_ = 0;
        auVar15._0_8_ = uVar2;
        auVar15[10] = uVar30;
        uVar30 = (undefined1)(uVar2 >> 0x20);
        auVar14._10_6_ = auVar15._10_6_;
        auVar14[8] = 0;
        auVar14._0_8_ = uVar2;
        auVar14[9] = uVar30;
        auVar41._9_7_ = auVar14._9_7_;
        auVar41[8] = uVar30;
        auVar41._0_8_ = uVar2;
        uVar30 = (undefined1)(uVar2 >> 0x18);
        auVar20._8_8_ = auVar41._8_8_;
        auVar20[7] = uVar30;
        auVar20[6] = uVar30;
        uVar30 = (undefined1)(uVar2 >> 0x10);
        auVar20[5] = uVar30;
        auVar20[4] = uVar30;
        uVar30 = (undefined1)(uVar2 >> 8);
        auVar20[3] = uVar30;
        auVar20[2] = uVar30;
        auVar20[0] = (undefined1)uVar2;
        auVar20[1] = auVar20[0];
        uVar30 = (undefined1)(uVar3 >> 0x38);
        auVar40._8_6_ = 0;
        auVar40._0_8_ = uVar3;
        auVar40[0xe] = uVar30;
        auVar40[0xf] = uVar30;
        uVar30 = (undefined1)(uVar3 >> 0x30);
        auVar39._14_2_ = auVar40._14_2_;
        auVar39._8_5_ = 0;
        auVar39._0_8_ = uVar3;
        auVar39[0xd] = uVar30;
        auVar38._13_3_ = auVar39._13_3_;
        auVar38._8_4_ = 0;
        auVar38._0_8_ = uVar3;
        auVar38[0xc] = uVar30;
        uVar30 = (undefined1)(uVar3 >> 0x28);
        auVar37._12_4_ = auVar38._12_4_;
        auVar37._8_3_ = 0;
        auVar37._0_8_ = uVar3;
        auVar37[0xb] = uVar30;
        auVar36._11_5_ = auVar37._11_5_;
        auVar36._8_2_ = 0;
        auVar36._0_8_ = uVar3;
        auVar36[10] = uVar30;
        uVar30 = (undefined1)(uVar3 >> 0x20);
        auVar35._10_6_ = auVar36._10_6_;
        auVar35[8] = 0;
        auVar35._0_8_ = uVar3;
        auVar35[9] = uVar30;
        auVar34._9_7_ = auVar35._9_7_;
        auVar34[8] = uVar30;
        auVar34._0_8_ = uVar3;
        uVar30 = (undefined1)(uVar3 >> 0x18);
        auVar33._8_8_ = auVar34._8_8_;
        auVar33[7] = uVar30;
        auVar33[6] = uVar30;
        uVar30 = (undefined1)(uVar3 >> 0x10);
        auVar33[5] = uVar30;
        auVar33[4] = uVar30;
        uVar30 = (undefined1)(uVar3 >> 8);
        auVar33[3] = uVar30;
        auVar33[2] = uVar30;
        auVar33[0] = (undefined1)uVar3;
        auVar33[1] = auVar33[0];
        auVar20 = psraw(auVar20,8);
        auVar41 = psraw(auVar33,8);
        pauVar11[-2] = auVar20;
        uVar2 = *puVar9;
        uVar30 = (undefined1)(uVar2 >> 0x38);
        auVar28._8_6_ = 0;
        auVar28._0_8_ = uVar2;
        auVar28[0xe] = uVar30;
        auVar28[0xf] = uVar30;
        uVar30 = (undefined1)(uVar2 >> 0x30);
        auVar27._14_2_ = auVar28._14_2_;
        auVar27._8_5_ = 0;
        auVar27._0_8_ = uVar2;
        auVar27[0xd] = uVar30;
        auVar26._13_3_ = auVar27._13_3_;
        auVar26._8_4_ = 0;
        auVar26._0_8_ = uVar2;
        auVar26[0xc] = uVar30;
        uVar30 = (undefined1)(uVar2 >> 0x28);
        auVar25._12_4_ = auVar26._12_4_;
        auVar25._8_3_ = 0;
        auVar25._0_8_ = uVar2;
        auVar25[0xb] = uVar30;
        auVar24._11_5_ = auVar25._11_5_;
        auVar24._8_2_ = 0;
        auVar24._0_8_ = uVar2;
        auVar24[10] = uVar30;
        uVar30 = (undefined1)(uVar2 >> 0x20);
        auVar23._10_6_ = auVar24._10_6_;
        auVar23[8] = 0;
        auVar23._0_8_ = uVar2;
        auVar23[9] = uVar30;
        auVar22._9_7_ = auVar23._9_7_;
        auVar22[8] = uVar30;
        auVar22._0_8_ = uVar2;
        uVar30 = (undefined1)(uVar2 >> 0x18);
        auVar21._8_8_ = auVar22._8_8_;
        auVar21[7] = uVar30;
        auVar21[6] = uVar30;
        uVar30 = (undefined1)(uVar2 >> 0x10);
        auVar21[5] = uVar30;
        auVar21[4] = uVar30;
        uVar30 = (undefined1)(uVar2 >> 8);
        auVar21[3] = uVar30;
        auVar21[2] = uVar30;
        auVar21[0] = (undefined1)uVar2;
        auVar21[1] = auVar21[0];
        auVar20 = psraw(auVar21,8);
        pauVar11[-1] = auVar41;
        uVar2 = puVar9[1];
        uVar30 = (undefined1)(uVar2 >> 0x38);
        auVar49._8_6_ = 0;
        auVar49._0_8_ = uVar2;
        auVar49[0xe] = uVar30;
        auVar49[0xf] = uVar30;
        uVar30 = (undefined1)(uVar2 >> 0x30);
        auVar48._14_2_ = auVar49._14_2_;
        auVar48._8_5_ = 0;
        auVar48._0_8_ = uVar2;
        auVar48[0xd] = uVar30;
        auVar47._13_3_ = auVar48._13_3_;
        auVar47._8_4_ = 0;
        auVar47._0_8_ = uVar2;
        auVar47[0xc] = uVar30;
        uVar30 = (undefined1)(uVar2 >> 0x28);
        auVar46._12_4_ = auVar47._12_4_;
        auVar46._8_3_ = 0;
        auVar46._0_8_ = uVar2;
        auVar46[0xb] = uVar30;
        auVar45._11_5_ = auVar46._11_5_;
        auVar45._8_2_ = 0;
        auVar45._0_8_ = uVar2;
        auVar45[10] = uVar30;
        uVar30 = (undefined1)(uVar2 >> 0x20);
        auVar44._10_6_ = auVar45._10_6_;
        auVar44[8] = 0;
        auVar44._0_8_ = uVar2;
        auVar44[9] = uVar30;
        auVar43._9_7_ = auVar44._9_7_;
        auVar43[8] = uVar30;
        auVar43._0_8_ = uVar2;
        uVar30 = (undefined1)(uVar2 >> 0x18);
        auVar42._8_8_ = auVar43._8_8_;
        auVar42[7] = uVar30;
        auVar42[6] = uVar30;
        uVar30 = (undefined1)(uVar2 >> 0x10);
        auVar42[5] = uVar30;
        auVar42[4] = uVar30;
        uVar30 = (undefined1)(uVar2 >> 8);
        auVar42[3] = uVar30;
        auVar42[2] = uVar30;
        auVar42[0] = (undefined1)uVar2;
        auVar42[1] = auVar42[0];
        auVar41 = psraw(auVar42,8);
        *pauVar11 = auVar20;
        pauVar11[1] = auVar41;
        puVar9 = puVar1;
        pauVar11 = pauVar11 + 4;
      } while ((-0x10 - (longlong)param_3) + (longlong)puVar1 < (longlong)(int)(uVar6 - uVar8));
      iVar13 = iVar12;
      if (((byte)uVar6 & 0x1f) < 4) goto LAB_14d3c2dc1;
    }
    lVar10 = (longlong)iVar12;
    uVar8 = uVar6 & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    iVar13 = iVar12;
    do {
      uVar4 = *(undefined4 *)(param_3 + lVar10);
      iVar13 = iVar13 + 4;
      uVar32 = (undefined1)((uint)uVar4 >> 0x18);
      uVar31 = (undefined1)((uint)uVar4 >> 0x10);
      uVar30 = (undefined1)((uint)uVar4 >> 8);
      auVar29._4_4_ =
           (int)(CONCAT35(CONCAT21(CONCAT11(uVar32,uVar32),uVar31),CONCAT14(uVar31,uVar4)) >> 0x20);
      auVar29[3] = uVar30;
      auVar29[2] = uVar30;
      auVar29[0] = (undefined1)uVar4;
      auVar29[1] = auVar29[0];
      auVar29._8_8_ = 0;
      auVar20 = psraw(auVar29,8);
      *(longlong *)(param_1 + lVar10) = auVar20._0_8_;
      lVar10 = lVar10 + 4;
    } while (lVar10 < (int)(uVar6 - uVar8));
  }
LAB_14d3c2dc1:
  for (lVar10 = (longlong)iVar13; lVar10 < (int)uVar6; lVar10 = lVar10 + 1) {
    param_1[lVar10] = (short)param_3[lVar10];
  }
  if (((param_2 < param_4) || (param_1 + (int)uVar6 == (wchar_t *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  return;
}

