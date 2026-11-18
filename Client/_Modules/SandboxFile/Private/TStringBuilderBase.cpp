// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SandboxFile
// Functions: 1

// Append<TStringView<char>_> @ 148b80300

TStringBuilderBase<wchar_t> * __thiscall
TStringBuilderBase<wchar_t>::Append<TStringView<char>_>
          (TStringBuilderBase<wchar_t> *this,TStringView<char> *param_1)

{
  wchar_t *pwVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  uint uVar9;
  wchar_t *pwVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong64 uVar14;
  undefined1 (*pauVar15) [16];
  undefined1 auVar16 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  uVar5 = *(undefined8 *)&param_1->Size;
  pwVar7 = (wchar_t *)param_1->DataPtr;
  uVar13 = (uint)uVar5;
  uVar14 = (ulong64)(int)uVar13;
  if (this->End < this->CurPos + uVar14) {
    Extend(this,uVar14);
  }
  if (uVar13 == 0) {
    return this;
  }
  pwVar6 = this->CurPos;
  iVar11 = 0;
  iVar12 = iVar11;
  if (((0 < (int)uVar13) && (iVar12 = 0, 3 < uVar13)) &&
     (((wchar_t *)((longlong)(int)(uVar13 - 1) + (longlong)pwVar7) < pwVar6 ||
      (pwVar6 + (int)(uVar13 - 1) < pwVar7)))) {
    if (0x1f < uVar13) {
      uVar9 = uVar13 & 0x8000001f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      pwVar10 = pwVar7 + 8;
      pauVar15 = (undefined1 (*) [16])(pwVar6 + 0x10);
      do {
        uVar2 = *(ulonglong *)(pwVar10 + -8);
        iVar11 = iVar11 + 0x20;
        uVar3 = *(ulonglong *)(pwVar10 + -4);
        pwVar1 = pwVar10 + 0x10;
        uVar32 = (undefined1)(uVar2 >> 0x38);
        auVar21._8_6_ = 0;
        auVar21._0_8_ = uVar2;
        auVar21[0xe] = uVar32;
        auVar21[0xf] = uVar32;
        uVar32 = (undefined1)(uVar2 >> 0x30);
        auVar20._14_2_ = auVar21._14_2_;
        auVar20._8_5_ = 0;
        auVar20._0_8_ = uVar2;
        auVar20[0xd] = uVar32;
        auVar19._13_3_ = auVar20._13_3_;
        auVar19._8_4_ = 0;
        auVar19._0_8_ = uVar2;
        auVar19[0xc] = uVar32;
        uVar32 = (undefined1)(uVar2 >> 0x28);
        auVar18._12_4_ = auVar19._12_4_;
        auVar18._8_3_ = 0;
        auVar18._0_8_ = uVar2;
        auVar18[0xb] = uVar32;
        auVar17._11_5_ = auVar18._11_5_;
        auVar17._8_2_ = 0;
        auVar17._0_8_ = uVar2;
        auVar17[10] = uVar32;
        uVar32 = (undefined1)(uVar2 >> 0x20);
        auVar16._10_6_ = auVar17._10_6_;
        auVar16[8] = 0;
        auVar16._0_8_ = uVar2;
        auVar16[9] = uVar32;
        auVar43._9_7_ = auVar16._9_7_;
        auVar43[8] = uVar32;
        auVar43._0_8_ = uVar2;
        uVar32 = (undefined1)(uVar2 >> 0x18);
        auVar22._8_8_ = auVar43._8_8_;
        auVar22[7] = uVar32;
        auVar22[6] = uVar32;
        uVar32 = (undefined1)(uVar2 >> 0x10);
        auVar22[5] = uVar32;
        auVar22[4] = uVar32;
        uVar32 = (undefined1)(uVar2 >> 8);
        auVar22[3] = uVar32;
        auVar22[2] = uVar32;
        auVar22[0] = (undefined1)uVar2;
        auVar22[1] = auVar22[0];
        uVar32 = (undefined1)(uVar3 >> 0x38);
        auVar42._8_6_ = 0;
        auVar42._0_8_ = uVar3;
        auVar42[0xe] = uVar32;
        auVar42[0xf] = uVar32;
        uVar32 = (undefined1)(uVar3 >> 0x30);
        auVar41._14_2_ = auVar42._14_2_;
        auVar41._8_5_ = 0;
        auVar41._0_8_ = uVar3;
        auVar41[0xd] = uVar32;
        auVar40._13_3_ = auVar41._13_3_;
        auVar40._8_4_ = 0;
        auVar40._0_8_ = uVar3;
        auVar40[0xc] = uVar32;
        uVar32 = (undefined1)(uVar3 >> 0x28);
        auVar39._12_4_ = auVar40._12_4_;
        auVar39._8_3_ = 0;
        auVar39._0_8_ = uVar3;
        auVar39[0xb] = uVar32;
        auVar38._11_5_ = auVar39._11_5_;
        auVar38._8_2_ = 0;
        auVar38._0_8_ = uVar3;
        auVar38[10] = uVar32;
        uVar32 = (undefined1)(uVar3 >> 0x20);
        auVar37._10_6_ = auVar38._10_6_;
        auVar37[8] = 0;
        auVar37._0_8_ = uVar3;
        auVar37[9] = uVar32;
        auVar36._9_7_ = auVar37._9_7_;
        auVar36[8] = uVar32;
        auVar36._0_8_ = uVar3;
        uVar32 = (undefined1)(uVar3 >> 0x18);
        auVar35._8_8_ = auVar36._8_8_;
        auVar35[7] = uVar32;
        auVar35[6] = uVar32;
        uVar32 = (undefined1)(uVar3 >> 0x10);
        auVar35[5] = uVar32;
        auVar35[4] = uVar32;
        uVar32 = (undefined1)(uVar3 >> 8);
        auVar35[3] = uVar32;
        auVar35[2] = uVar32;
        auVar35[0] = (undefined1)uVar3;
        auVar35[1] = auVar35[0];
        auVar22 = psraw(auVar22,8);
        auVar43 = psraw(auVar35,8);
        pauVar15[-2] = auVar22;
        uVar2 = *(ulonglong *)pwVar10;
        uVar32 = (undefined1)(uVar2 >> 0x38);
        auVar30._8_6_ = 0;
        auVar30._0_8_ = uVar2;
        auVar30[0xe] = uVar32;
        auVar30[0xf] = uVar32;
        uVar32 = (undefined1)(uVar2 >> 0x30);
        auVar29._14_2_ = auVar30._14_2_;
        auVar29._8_5_ = 0;
        auVar29._0_8_ = uVar2;
        auVar29[0xd] = uVar32;
        auVar28._13_3_ = auVar29._13_3_;
        auVar28._8_4_ = 0;
        auVar28._0_8_ = uVar2;
        auVar28[0xc] = uVar32;
        uVar32 = (undefined1)(uVar2 >> 0x28);
        auVar27._12_4_ = auVar28._12_4_;
        auVar27._8_3_ = 0;
        auVar27._0_8_ = uVar2;
        auVar27[0xb] = uVar32;
        auVar26._11_5_ = auVar27._11_5_;
        auVar26._8_2_ = 0;
        auVar26._0_8_ = uVar2;
        auVar26[10] = uVar32;
        uVar32 = (undefined1)(uVar2 >> 0x20);
        auVar25._10_6_ = auVar26._10_6_;
        auVar25[8] = 0;
        auVar25._0_8_ = uVar2;
        auVar25[9] = uVar32;
        auVar24._9_7_ = auVar25._9_7_;
        auVar24[8] = uVar32;
        auVar24._0_8_ = uVar2;
        uVar32 = (undefined1)(uVar2 >> 0x18);
        auVar23._8_8_ = auVar24._8_8_;
        auVar23[7] = uVar32;
        auVar23[6] = uVar32;
        uVar32 = (undefined1)(uVar2 >> 0x10);
        auVar23[5] = uVar32;
        auVar23[4] = uVar32;
        uVar32 = (undefined1)(uVar2 >> 8);
        auVar23[3] = uVar32;
        auVar23[2] = uVar32;
        auVar23[0] = (undefined1)uVar2;
        auVar23[1] = auVar23[0];
        auVar22 = psraw(auVar23,8);
        pauVar15[-1] = auVar43;
        uVar2 = *(ulonglong *)(pwVar10 + 4);
        uVar32 = (undefined1)(uVar2 >> 0x38);
        auVar51._8_6_ = 0;
        auVar51._0_8_ = uVar2;
        auVar51[0xe] = uVar32;
        auVar51[0xf] = uVar32;
        uVar32 = (undefined1)(uVar2 >> 0x30);
        auVar50._14_2_ = auVar51._14_2_;
        auVar50._8_5_ = 0;
        auVar50._0_8_ = uVar2;
        auVar50[0xd] = uVar32;
        auVar49._13_3_ = auVar50._13_3_;
        auVar49._8_4_ = 0;
        auVar49._0_8_ = uVar2;
        auVar49[0xc] = uVar32;
        uVar32 = (undefined1)(uVar2 >> 0x28);
        auVar48._12_4_ = auVar49._12_4_;
        auVar48._8_3_ = 0;
        auVar48._0_8_ = uVar2;
        auVar48[0xb] = uVar32;
        auVar47._11_5_ = auVar48._11_5_;
        auVar47._8_2_ = 0;
        auVar47._0_8_ = uVar2;
        auVar47[10] = uVar32;
        uVar32 = (undefined1)(uVar2 >> 0x20);
        auVar46._10_6_ = auVar47._10_6_;
        auVar46[8] = 0;
        auVar46._0_8_ = uVar2;
        auVar46[9] = uVar32;
        auVar45._9_7_ = auVar46._9_7_;
        auVar45[8] = uVar32;
        auVar45._0_8_ = uVar2;
        uVar32 = (undefined1)(uVar2 >> 0x18);
        auVar44._8_8_ = auVar45._8_8_;
        auVar44[7] = uVar32;
        auVar44[6] = uVar32;
        uVar32 = (undefined1)(uVar2 >> 0x10);
        auVar44[5] = uVar32;
        auVar44[4] = uVar32;
        uVar32 = (undefined1)(uVar2 >> 8);
        auVar44[3] = uVar32;
        auVar44[2] = uVar32;
        auVar44[0] = (undefined1)uVar2;
        auVar44[1] = auVar44[0];
        auVar43 = psraw(auVar44,8);
        *pauVar15 = auVar22;
        pauVar15[1] = auVar43;
        pwVar10 = pwVar1;
        pauVar15 = pauVar15 + 4;
      } while ((-0x10 - (longlong)pwVar7) + (longlong)pwVar1 < (longlong)(int)(uVar13 - uVar9));
      iVar12 = iVar11;
      if (((byte)uVar5 & 0x1f) < 4) goto LAB_148b80471;
    }
    lVar8 = (longlong)iVar11;
    uVar9 = uVar13 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    iVar12 = iVar11;
    do {
      uVar4 = *(undefined4 *)(lVar8 + (longlong)pwVar7);
      iVar12 = iVar12 + 4;
      uVar34 = (undefined1)((uint)uVar4 >> 0x18);
      uVar33 = (undefined1)((uint)uVar4 >> 0x10);
      uVar32 = (undefined1)((uint)uVar4 >> 8);
      auVar31._4_4_ =
           (int)(CONCAT35(CONCAT21(CONCAT11(uVar34,uVar34),uVar33),CONCAT14(uVar33,uVar4)) >> 0x20);
      auVar31[3] = uVar32;
      auVar31[2] = uVar32;
      auVar31[0] = (undefined1)uVar4;
      auVar31[1] = auVar31[0];
      auVar31._8_8_ = 0;
      auVar22 = psraw(auVar31,8);
      *(longlong *)(pwVar6 + lVar8) = auVar22._0_8_;
      lVar8 = lVar8 + 4;
    } while (lVar8 < (int)(uVar13 - uVar9));
  }
LAB_148b80471:
  for (lVar8 = (longlong)iVar12; lVar8 < (longlong)uVar14; lVar8 = lVar8 + 1) {
    pwVar6[lVar8] = (short)*(char *)(lVar8 + (longlong)pwVar7);
  }
  this->CurPos = pwVar6 + uVar14;
  return this;
}

