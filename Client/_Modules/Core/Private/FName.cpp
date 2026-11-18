// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 72

// FName @ 141a6bf20

FName * __thiscall FName::FName(FName *this,FNameEntrySerialized *param_1)

{
  undefined4 uVar1;
  FNameEntryIds FVar3;
  FNameStringView_u_0 local_18;
  undefined8 uStack_10;
  size_t sVar2;
  
  local_18.Data = &param_1->field1_0x2;
  if (param_1->bIsWide == false) {
    sVar2 = strlen(local_18.Ansi);
    uVar1 = (undefined4)sVar2;
    uStack_10._4_4_ = uStack_10._4_4_ & 0xffffff00;
  }
  else {
    sVar2 = wcslen(local_18.Wide);
    uVar1 = (undefined4)sVar2;
    uStack_10 = CONCAT35(uStack_10._5_3_,0x100000000);
  }
  uStack_10 = CONCAT44(uStack_10._4_4_,uVar1);
  FVar3 = FNameHelper::FindOrStoreString((FNameStringView *)&local_18,FNAME_Add);
  (this->ComparisonIndex).Value = FVar3.ComparisonId.Value.Value;
  this->Number = 0;
  return this;
}

// FName @ 141a6bf90

FName * __thiscall FName::FName(FName *this,int param_1,char *param_2,int param_3)

{
  FNameEntryIds FVar1;
  FName local_res8;
  FNameStringView_u_0 local_18;
  uint5 uStack_10;
  undefined3 uStack_b;
  
  local_18.Ansi = param_2;
  if (param_3 == 0) {
    if (param_1 == 0) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      goto LAB_141a6c038;
    }
    uStack_10._0_4_ = param_1;
    param_3 = UE::Core::Private::ParseNumberFromName<char>(param_2,(int *)&uStack_10);
    if ((uint)uStack_10 == 0) goto LAB_141a6bffd;
    uStack_10 = (uint5)(uint)uStack_10;
  }
  else {
    if (param_1 == 0) {
LAB_141a6bffd:
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      goto LAB_141a6c038;
    }
    uStack_10 = (uint5)(uint)param_1;
  }
  FVar1 = FNameHelper::FindOrStoreString((FNameStringView *)&local_18,FNAME_Add);
  local_res8.Number = param_3;
  local_res8.ComparisonIndex.Value = FVar1.ComparisonId.Value.Value;
LAB_141a6c038:
  *this = local_res8;
  return this;
}

// FName @ 141a6c060

FName * __thiscall FName::FName(FName *this,int param_1,char *param_2,EFindName param_3)

{
  uint uVar1;
  FNameEntryIds FVar2;
  FNameStringView_u_0 local_18;
  uint5 uStack_10;
  undefined3 uStack_b;
  
  if (param_1 == 0) {
    this->ComparisonIndex = 0;
    this->Number = 0;
    return this;
  }
  local_18.Ansi = param_2;
  uStack_10._0_4_ = param_1;
  uVar1 = UE::Core::Private::ParseNumberFromName<char>(param_2,(int *)&uStack_10);
  if ((uint)uStack_10 == 0) {
    this->ComparisonIndex = 0;
    this->Number = 0;
    return this;
  }
  uStack_10 = (uint5)(uint)uStack_10;
  FVar2 = FNameHelper::FindOrStoreString((FNameStringView *)&local_18,param_3);
  (this->ComparisonIndex).Value = FVar2.ComparisonId.Value.Value;
  this->Number = uVar1;
  return this;
}

// FName @ 141a6c120

FName * __thiscall FName::FName(FName *this,int param_1,uchar *param_2,int param_3)

{
  undefined1 auVar1 [13];
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  longlong lVar9;
  FName FVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uchar *local_res8;
  FNameUtf8StringViewWithWidth local_28;
  uchar *local_18;
  undefined8 uStack_10;
  
  uVar14 = (ulonglong)param_1;
  uVar15 = 0;
  uVar12 = 0;
  local_28.Str = param_2;
  local_28.Len = param_1;
  local_18 = param_2;
  if (param_3 == 0) {
    uVar13 = uVar15;
    if ((0 < param_1) && (uVar13 = 0, 7 < (uint)param_1)) {
      auVar21 = ZEXT816(0);
      auVar20 = ZEXT816(0);
      puVar11 = (uint *)param_2;
      uVar12 = uVar15;
      do {
        uVar15 = *puVar11;
        uVar12 = uVar12 + 8;
        auVar3[0xc] = (char)(uVar15 >> 0x18);
        auVar3._0_12_ = ZEXT712(0);
        auVar7[1] = 0;
        auVar7[0] = (byte)(uVar15 >> 0x10);
        auVar7._2_3_ = auVar3._10_3_;
        auVar7._5_8_ = 0;
        auVar18[5] = 0;
        auVar18[4] = (byte)(uVar15 >> 8);
        auVar18._6_7_ = SUB137(auVar7 << 0x40,6);
        auVar18._0_4_ = uVar15 & 0xff;
        auVar18._13_3_ = 0;
        auVar21 = auVar21 | auVar18;
        uVar15 = puVar11[1];
        puVar11 = puVar11 + 2;
        auVar4[0xc] = (char)(uVar15 >> 0x18);
        auVar4._0_12_ = ZEXT712(0);
        auVar8[1] = 0;
        auVar8[0] = (byte)(uVar15 >> 0x10);
        auVar8._2_3_ = auVar4._10_3_;
        auVar8._5_8_ = 0;
        auVar19[5] = 0;
        auVar19[4] = (byte)(uVar15 >> 8);
        auVar19._6_7_ = SUB137(auVar8 << 0x40,6);
        auVar19._0_4_ = uVar15 & 0xff;
        auVar19._13_3_ = 0;
        auVar20 = auVar20 | auVar19;
      } while ((longlong)puVar11 - (longlong)param_2 < (longlong)(uVar14 & 0xfffffffffffffff8));
      auVar20 = auVar20 | auVar21 | (auVar20 | auVar21) >> 0x40;
      uVar13 = auVar20._0_4_ | auVar20._4_4_;
    }
    for (lVar9 = (longlong)(int)uVar12; lVar9 < (longlong)uVar14; lVar9 = lVar9 + 1) {
      uVar13 = uVar13 | param_2[lVar9];
    }
    local_28.bIsWide = (uVar13 & 0xffffff80) != 0;
    uStack_10 = CONCAT44(local_28._12_4_,param_1);
    if (param_1 == 0) {
      local_res8 = (uchar *)0x0;
    }
    else {
      UE::Core::Private::ParseNumberFromName<char8_t>(param_2,(int *)&uStack_10);
      FNameHelper::MakeWithNumber
                ((FNameUtf8StringViewWithWidth *)&local_res8,(EFindName)&local_18,1);
    }
    FVar10 = (FName)&local_res8;
  }
  else {
    if ((0 < param_1) && (7 < (uint)param_1)) {
      auVar21 = ZEXT816(0);
      auVar20 = ZEXT816(0);
      puVar11 = (uint *)param_2;
      uVar12 = uVar15;
      do {
        uVar15 = *puVar11;
        uVar12 = uVar12 + 8;
        auVar1[0xc] = (char)(uVar15 >> 0x18);
        auVar1._0_12_ = ZEXT712(0);
        auVar5[1] = 0;
        auVar5[0] = (byte)(uVar15 >> 0x10);
        auVar5._2_3_ = auVar1._10_3_;
        auVar5._5_8_ = 0;
        auVar16[5] = 0;
        auVar16[4] = (byte)(uVar15 >> 8);
        auVar16._6_7_ = SUB137(auVar5 << 0x40,6);
        auVar16._0_4_ = uVar15 & 0xff;
        auVar16._13_3_ = 0;
        auVar21 = auVar21 | auVar16;
        uVar15 = puVar11[1];
        puVar11 = puVar11 + 2;
        auVar2[0xc] = (char)(uVar15 >> 0x18);
        auVar2._0_12_ = ZEXT712(0);
        auVar6[1] = 0;
        auVar6[0] = (byte)(uVar15 >> 0x10);
        auVar6._2_3_ = auVar2._10_3_;
        auVar6._5_8_ = 0;
        auVar17[5] = 0;
        auVar17[4] = (byte)(uVar15 >> 8);
        auVar17._6_7_ = SUB137(auVar6 << 0x40,6);
        auVar17._0_4_ = uVar15 & 0xff;
        auVar17._13_3_ = 0;
        auVar20 = auVar20 | auVar17;
      } while ((longlong)puVar11 - (longlong)param_2 < (longlong)(uVar14 & 0xfffffffffffffff8));
      auVar20 = auVar20 | auVar21 | (auVar20 | auVar21) >> 0x40;
      uVar15 = auVar20._0_4_ | auVar20._4_4_;
    }
    for (lVar9 = (longlong)(int)uVar12; lVar9 < (longlong)uVar14; lVar9 = lVar9 + 1) {
      uVar15 = uVar15 | param_2[lVar9];
    }
    local_28.bIsWide = (uVar15 & 0xffffff80) != 0;
    uStack_10 = CONCAT44(local_28._12_4_,param_1);
    FVar10 = FNameHelper::MakeWithNumber(&local_28,(EFindName)&local_18,1);
  }
  *this = *(FName *)FVar10;
  return this;
}

// FName @ 141a6c310

FName * __thiscall FName::FName(FName *this,int param_1,uchar *param_2,EFindName param_3)

{
  undefined1 auVar1 [13];
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uchar *local_18;
  int iStack_10;
  bool bStack_c;
  undefined3 uStack_b;
  
  iVar8 = 0;
  uVar7 = 0;
  if ((0 < param_1) && (7 < (uint)param_1)) {
    auVar12 = ZEXT816(0);
    auVar11 = ZEXT816(0);
    puVar6 = (uint *)param_2;
    do {
      uVar7 = *puVar6;
      iVar8 = iVar8 + 8;
      auVar1[0xc] = (char)(uVar7 >> 0x18);
      auVar1._0_12_ = ZEXT712(0);
      auVar3[1] = 0;
      auVar3[0] = (byte)(uVar7 >> 0x10);
      auVar3._2_3_ = auVar1._10_3_;
      auVar3._5_8_ = 0;
      auVar9[5] = 0;
      auVar9[4] = (byte)(uVar7 >> 8);
      auVar9._6_7_ = SUB137(auVar3 << 0x40,6);
      auVar9._0_4_ = uVar7 & 0xff;
      auVar9._13_3_ = 0;
      auVar12 = auVar12 | auVar9;
      uVar7 = puVar6[1];
      puVar6 = puVar6 + 2;
      auVar2[0xc] = (char)(uVar7 >> 0x18);
      auVar2._0_12_ = ZEXT712(0);
      auVar4[1] = 0;
      auVar4[0] = (byte)(uVar7 >> 0x10);
      auVar4._2_3_ = auVar2._10_3_;
      auVar4._5_8_ = 0;
      auVar10[5] = 0;
      auVar10[4] = (byte)(uVar7 >> 8);
      auVar10._6_7_ = SUB137(auVar4 << 0x40,6);
      auVar10._0_4_ = uVar7 & 0xff;
      auVar10._13_3_ = 0;
      auVar11 = auVar11 | auVar10;
    } while ((longlong)puVar6 - (longlong)param_2 <
             (longlong)((longlong)param_1 & 0xfffffffffffffff8U));
    auVar11 = auVar11 | auVar12 | (auVar11 | auVar12) >> 0x40;
    uVar7 = auVar11._0_4_ | auVar11._4_4_;
  }
  for (lVar5 = (longlong)iVar8; lVar5 < param_1; lVar5 = lVar5 + 1) {
    uVar7 = uVar7 | param_2[lVar5];
  }
  _iStack_10 = CONCAT14((uVar7 & 0xffffff80) != 0,param_1);
  if (param_1 != 0) {
    local_18 = param_2;
    UE::Core::Private::ParseNumberFromName<char8_t>(param_2,&iStack_10);
    FNameHelper::MakeWithNumber((FNameUtf8StringViewWithWidth *)this,(EFindName)&local_18,param_3);
    return this;
  }
  this->ComparisonIndex = 0;
  this->Number = 0;
  return this;
}

// FName @ 141a6c440

FName * __thiscall FName::FName(FName *this,int param_1,wchar_t *param_2,int param_3)

{
  ulonglong uVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  ulonglong uVar14;
  FName FVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  FWideStringViewWithWidth local_res8 [2];
  FWideStringViewWithWidth local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  uVar14 = 0;
  uVar19 = (ulonglong)param_1;
  uVar16 = 0;
  local_28.Str = param_2;
  local_28.Len = param_1;
  local_18 = param_2;
  if (param_3 != 0) {
    if ((0 < param_1) && (7 < (uint)param_1)) {
      auVar25 = ZEXT816(0);
      auVar24 = ZEXT816(0);
      uVar18 = uVar14;
      do {
        uVar1 = *(ulonglong *)(param_2 + uVar14);
        auVar2._8_4_ = 0;
        auVar2._0_8_ = uVar1;
        auVar2._12_2_ = (short)(uVar1 >> 0x30);
        auVar6._8_2_ = (short)(uVar1 >> 0x20);
        auVar6._0_8_ = uVar1;
        auVar6._10_4_ = auVar2._10_4_;
        auVar10._6_8_ = 0;
        auVar10._0_6_ = auVar6._8_6_;
        auVar20._6_8_ = SUB148(auVar10 << 0x40,6);
        auVar20._4_2_ = (short)(uVar1 >> 0x10);
        auVar20._0_2_ = (ushort)uVar1;
        auVar20._2_2_ = 0;
        auVar20._14_2_ = 0;
        uVar16 = (int)uVar18 + 8;
        uVar18 = (ulonglong)uVar16;
        auVar25 = auVar25 | auVar20;
        uVar1 = *(ulonglong *)(param_2 + uVar14 + 4);
        uVar14 = uVar14 + 8;
        auVar3._8_4_ = 0;
        auVar3._0_8_ = uVar1;
        auVar3._12_2_ = (short)(uVar1 >> 0x30);
        auVar7._8_2_ = (short)(uVar1 >> 0x20);
        auVar7._0_8_ = uVar1;
        auVar7._10_4_ = auVar3._10_4_;
        auVar11._6_8_ = 0;
        auVar11._0_6_ = auVar7._8_6_;
        auVar21._6_8_ = SUB148(auVar11 << 0x40,6);
        auVar21._4_2_ = (short)(uVar1 >> 0x10);
        auVar21._0_2_ = (ushort)uVar1;
        auVar21._2_2_ = 0;
        auVar21._14_2_ = 0;
        auVar24 = auVar24 | auVar21;
      } while ((longlong)uVar14 < (longlong)(uVar19 & 0xfffffffffffffff8));
      auVar24 = auVar24 | auVar25 | (auVar24 | auVar25) >> 0x40;
      uVar14 = (ulonglong)(auVar24._0_4_ | auVar24._4_4_);
    }
    for (lVar17 = (longlong)(int)uVar16; lVar17 < (longlong)uVar19; lVar17 = lVar17 + 1) {
      uVar14 = (ulonglong)((uint)uVar14 | (uint)(ushort)param_2[lVar17]);
    }
    local_28.bIsWide = (uVar14 & 0xffffff80) != 0;
    uStack_10 = CONCAT44(local_28._12_4_,param_1);
    FVar15 = FNameHelper::MakeWithNumber(&local_28,(EFindName)&local_18,1);
    *this = *(FName *)FVar15;
    return this;
  }
  uVar18 = uVar14;
  if ((0 < param_1) && (uVar18 = 0, 7 < (uint)param_1)) {
    auVar25 = ZEXT816(0);
    auVar24 = ZEXT816(0);
    uVar18 = uVar14;
    do {
      uVar1 = *(ulonglong *)(param_2 + uVar18);
      auVar4._8_4_ = 0;
      auVar4._0_8_ = uVar1;
      auVar4._12_2_ = (short)(uVar1 >> 0x30);
      auVar8._8_2_ = (short)(uVar1 >> 0x20);
      auVar8._0_8_ = uVar1;
      auVar8._10_4_ = auVar4._10_4_;
      auVar12._6_8_ = 0;
      auVar12._0_6_ = auVar8._8_6_;
      auVar22._6_8_ = SUB148(auVar12 << 0x40,6);
      auVar22._4_2_ = (short)(uVar1 >> 0x10);
      auVar22._0_2_ = (ushort)uVar1;
      auVar22._2_2_ = 0;
      auVar22._14_2_ = 0;
      uVar16 = (int)uVar14 + 8;
      uVar14 = (ulonglong)uVar16;
      auVar25 = auVar25 | auVar22;
      uVar1 = *(ulonglong *)(param_2 + uVar18 + 4);
      uVar18 = uVar18 + 8;
      auVar5._8_4_ = 0;
      auVar5._0_8_ = uVar1;
      auVar5._12_2_ = (short)(uVar1 >> 0x30);
      auVar9._8_2_ = (short)(uVar1 >> 0x20);
      auVar9._0_8_ = uVar1;
      auVar9._10_4_ = auVar5._10_4_;
      auVar13._6_8_ = 0;
      auVar13._0_6_ = auVar9._8_6_;
      auVar23._6_8_ = SUB148(auVar13 << 0x40,6);
      auVar23._4_2_ = (short)(uVar1 >> 0x10);
      auVar23._0_2_ = (ushort)uVar1;
      auVar23._2_2_ = 0;
      auVar23._14_2_ = 0;
      auVar24 = auVar24 | auVar23;
    } while ((longlong)uVar18 < (longlong)(uVar19 & 0xfffffffffffffff8));
    auVar24 = auVar24 | auVar25 | (auVar24 | auVar25) >> 0x40;
    uVar18 = (ulonglong)(auVar24._0_4_ | auVar24._4_4_);
  }
  for (lVar17 = (longlong)(int)uVar16; lVar17 < (longlong)uVar19; lVar17 = lVar17 + 1) {
    uVar18 = (ulonglong)((uint)uVar18 | (uint)(ushort)param_2[lVar17]);
  }
  local_28.bIsWide = (uVar18 & 0xffffff80) != 0;
  uStack_10 = CONCAT44(local_28._12_4_,param_1);
  if (param_1 != 0) {
    UE::Core::Private::ParseNumberFromName<wchar_t>(param_2,(int *)&uStack_10);
    FNameHelper::MakeWithNumber(local_res8,(EFindName)&local_18,1);
    *this = (FName)local_res8[0].Str;
    return this;
  }
  this->ComparisonIndex = 0;
  this->Number = 0;
  return this;
}

// FName @ 141a6c630

FName * __thiscall FName::FName(FName *this,int param_1,wchar_t *param_2,EFindName param_3)

{
  ulonglong uVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  wchar_t *local_18;
  int iStack_10;
  bool bStack_c;
  undefined3 uStack_b;
  
  iVar10 = 0;
  uVar9 = 0;
  if ((0 < param_1) && (7 < (uint)param_1)) {
    auVar14 = ZEXT816(0);
    auVar13 = ZEXT816(0);
    do {
      uVar1 = *(ulonglong *)(param_2 + uVar9);
      auVar2._8_4_ = 0;
      auVar2._0_8_ = uVar1;
      auVar2._12_2_ = (short)(uVar1 >> 0x30);
      auVar4._8_2_ = (short)(uVar1 >> 0x20);
      auVar4._0_8_ = uVar1;
      auVar4._10_4_ = auVar2._10_4_;
      auVar6._6_8_ = 0;
      auVar6._0_6_ = auVar4._8_6_;
      auVar11._6_8_ = SUB148(auVar6 << 0x40,6);
      auVar11._4_2_ = (short)(uVar1 >> 0x10);
      auVar11._0_2_ = (ushort)uVar1;
      auVar11._2_2_ = 0;
      auVar11._14_2_ = 0;
      iVar10 = iVar10 + 8;
      auVar14 = auVar14 | auVar11;
      uVar1 = *(ulonglong *)(param_2 + uVar9 + 4);
      uVar9 = uVar9 + 8;
      auVar3._8_4_ = 0;
      auVar3._0_8_ = uVar1;
      auVar3._12_2_ = (short)(uVar1 >> 0x30);
      auVar5._8_2_ = (short)(uVar1 >> 0x20);
      auVar5._0_8_ = uVar1;
      auVar5._10_4_ = auVar3._10_4_;
      auVar7._6_8_ = 0;
      auVar7._0_6_ = auVar5._8_6_;
      auVar12._6_8_ = SUB148(auVar7 << 0x40,6);
      auVar12._4_2_ = (short)(uVar1 >> 0x10);
      auVar12._0_2_ = (ushort)uVar1;
      auVar12._2_2_ = 0;
      auVar12._14_2_ = 0;
      auVar13 = auVar13 | auVar12;
    } while ((longlong)uVar9 < (longlong)((longlong)param_1 & 0xfffffffffffffff8U));
    auVar13 = auVar13 | auVar14 | (auVar13 | auVar14) >> 0x40;
    uVar9 = (ulonglong)(auVar13._0_4_ | auVar13._4_4_);
  }
  for (lVar8 = (longlong)iVar10; lVar8 < param_1; lVar8 = lVar8 + 1) {
    uVar9 = (ulonglong)((uint)uVar9 | (uint)(ushort)param_2[lVar8]);
  }
  _iStack_10 = CONCAT14((uVar9 & 0xffffff80) != 0,param_1);
  if (param_1 == 0) {
    this->ComparisonIndex = 0;
    this->Number = 0;
    return this;
  }
  local_18 = param_2;
  UE::Core::Private::ParseNumberFromName<wchar_t>(param_2,&iStack_10);
  FNameHelper::MakeWithNumber((FWideStringViewWithWidth *)this,(EFindName)&local_18,param_3);
  return this;
}

// FName @ 141a6c760

FName * __thiscall FName::FName(FName *this,char *param_1)

{
  uint uVar1;
  size_t sVar2;
  FNameEntryIds FVar3;
  FNameStringView_u_0 local_18;
  uint5 uStack_10;
  undefined3 uStack_b;
  
  if (param_1 != (char *)0x0) {
    local_18.Ansi = param_1;
    sVar2 = strlen(param_1);
    uStack_10._0_4_ = (uint)sVar2;
    if ((uint)uStack_10 != 0) {
      uVar1 = UE::Core::Private::ParseNumberFromName<char>(param_1,(int *)&uStack_10);
      if ((uint)uStack_10 != 0) {
        uStack_10 = (uint5)(uint)uStack_10;
        FVar3 = FNameHelper::FindOrStoreString((FNameStringView *)&local_18,FNAME_Add);
        (this->ComparisonIndex).Value = FVar3.ComparisonId.Value.Value;
        this->Number = uVar1;
        return this;
      }
    }
  }
  this->ComparisonIndex = 0;
  this->Number = 0;
  return this;
}

// FName @ 141a6c810

FName * __thiscall FName::FName(FName *this,char *param_1,int param_2)

{
  size_t sVar1;
  FNameEntryIds FVar2;
  FNameStringView_u_0 local_18;
  uint5 uStack_10;
  undefined3 uStack_b;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    if ((uint)sVar1 != 0) {
      uStack_10 = (uint5)(uint)sVar1;
      local_18.Ansi = param_1;
      FVar2 = FNameHelper::FindOrStoreString((FNameStringView *)&local_18,FNAME_Add);
      (this->ComparisonIndex).Value = FVar2.ComparisonId.Value.Value;
      this->Number = param_2;
      return this;
    }
  }
  this->ComparisonIndex = 0;
  this->Number = 0;
  return this;
}

// FName @ 141a6c8a0

FName * __thiscall FName::FName(FName *this,char *param_1,EFindName param_2)

{
  uint uVar1;
  size_t sVar2;
  FNameEntryIds FVar3;
  FNameStringView_u_0 local_18;
  uint5 uStack_10;
  undefined3 uStack_b;
  
  if (param_1 != (char *)0x0) {
    local_18.Ansi = param_1;
    sVar2 = strlen(param_1);
    uStack_10._0_4_ = (uint)sVar2;
    if ((uint)uStack_10 != 0) {
      uVar1 = UE::Core::Private::ParseNumberFromName<char>(param_1,(int *)&uStack_10);
      if ((uint)uStack_10 != 0) {
        uStack_10 = (uint5)(uint)uStack_10;
        FVar3 = FNameHelper::FindOrStoreString((FNameStringView *)&local_18,param_2);
        (this->ComparisonIndex).Value = FVar3.ComparisonId.Value.Value;
        this->Number = uVar1;
        return this;
      }
    }
  }
  this->ComparisonIndex = 0;
  this->Number = 0;
  return this;
}

// FName @ 141a6c960

FName * __thiscall FName::FName(FName *this,uchar *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  uchar *local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  bVar4 = 0;
  pbVar3 = param_1;
  bVar5 = 0;
  if (param_1 != (uchar *)0x0) {
    bVar1 = *param_1;
    while (bVar5 = bVar4, bVar1 != 0) {
      pbVar3 = pbVar3 + 1;
      bVar4 = bVar4 | bVar1;
      bVar1 = *pbVar3;
    }
  }
  iVar2 = (int)pbVar3 - (int)param_1;
  _iStack_10 = CONCAT44(CONCAT31(uStack_c._1_3_,(bVar5 & 0x80) != 0),iVar2);
  if (iVar2 != 0) {
    local_18 = param_1;
    UE::Core::Private::ParseNumberFromName<char8_t>(param_1,&iStack_10);
    FNameHelper::MakeWithNumber((FNameUtf8StringViewWithWidth *)this,(EFindName)&local_18,1);
    return this;
  }
  this->ComparisonIndex = 0;
  this->Number = 0;
  return this;
}

// FName @ 141a6ca00

FName * __thiscall FName::FName(FName *this,uchar *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uchar *local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  bVar3 = 0;
  pbVar2 = param_1;
  bVar4 = 0;
  if (param_1 != (uchar *)0x0) {
    bVar1 = *param_1;
    while (bVar4 = bVar3, bVar1 != 0) {
      pbVar2 = pbVar2 + 1;
      bVar3 = bVar3 | bVar1;
      bVar1 = *pbVar2;
    }
  }
  _iStack_10 = CONCAT44(CONCAT31(uStack_c._1_3_,(bVar4 & 0x80) != 0),(int)pbVar2 - (int)param_1);
  local_18 = param_1;
  FNameHelper::MakeWithNumber((FNameUtf8StringViewWithWidth *)this,(EFindName)&local_18,1);
  return this;
}

// FName @ 141a6ca80

FName * __thiscall FName::FName(FName *this,uchar *param_1,EFindName param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  uchar *local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  bVar4 = 0;
  pbVar3 = param_1;
  bVar5 = 0;
  if (param_1 != (uchar *)0x0) {
    bVar1 = *param_1;
    while (bVar5 = bVar4, bVar1 != 0) {
      pbVar3 = pbVar3 + 1;
      bVar4 = bVar4 | bVar1;
      bVar1 = *pbVar3;
    }
  }
  iVar2 = (int)pbVar3 - (int)param_1;
  _iStack_10 = CONCAT44(CONCAT31(uStack_c._1_3_,(bVar5 & 0x80) != 0),iVar2);
  if (iVar2 != 0) {
    local_18 = param_1;
    UE::Core::Private::ParseNumberFromName<char8_t>(param_1,&iStack_10);
    FNameHelper::MakeWithNumber((FNameUtf8StringViewWithWidth *)this,(EFindName)&local_18,param_2);
    return this;
  }
  this->ComparisonIndex = 0;
  this->Number = 0;
  return this;
}

// FName @ 141a6cb30

FName * __thiscall FName::FName(FName *this,wchar_t *param_1)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  ushort uVar4;
  wchar_t *local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  uVar4 = 0;
  pwVar3 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    wVar1 = *param_1;
    uVar4 = 0;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      uVar4 = uVar4 | wVar1;
      wVar1 = *pwVar3;
    }
  }
  iVar2 = (int)((longlong)pwVar3 - (longlong)param_1 >> 1);
  _iStack_10 = CONCAT44(CONCAT31(uStack_c._1_3_,(uVar4 & 0xff80) != 0),iVar2);
  if (iVar2 == 0) {
    this->ComparisonIndex = 0;
    this->Number = 0;
    return this;
  }
  local_18 = param_1;
  UE::Core::Private::ParseNumberFromName<wchar_t>(param_1,&iStack_10);
  FNameHelper::MakeWithNumber((FWideStringViewWithWidth *)this,(EFindName)&local_18,1);
  return this;
}

// FName @ 141a6cbe0

FName * __thiscall FName::FName(FName *this,wchar_t *param_1,int param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  ushort uVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar3 = 0;
  pwVar2 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    wVar1 = *param_1;
    uVar3 = 0;
    while (wVar1 != L'\0') {
      pwVar2 = pwVar2 + 1;
      uVar3 = uVar3 | wVar1;
      wVar1 = *pwVar2;
    }
  }
  _uStack_10 = CONCAT44(CONCAT31(uStack_c._1_3_,(uVar3 & 0xff80) != 0),
                        (int)((longlong)pwVar2 - (longlong)param_1 >> 1));
  local_18 = param_1;
  FNameHelper::MakeWithNumber((FWideStringViewWithWidth *)this,(EFindName)&local_18,1);
  return this;
}

// FName @ 141a6cc70

FName * __thiscall FName::FName(FName *this,wchar_t *param_1,int param_2,bool param_3)

{
  wchar_t wVar1;
  FName FVar2;
  wchar_t *pwVar3;
  ushort uVar4;
  ushort uVar5;
  uint in_register_00000084;
  FWideStringViewWithWidth local_res8 [2];
  FWideStringViewWithWidth local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  FVar2.Number = in_register_00000084;
  FVar2.ComparisonIndex.Value = param_2;
  local_28.Str = param_1;
  local_18 = param_1;
  if ((param_2 != 0) || (!param_3)) {
    uVar4 = 0;
    pwVar3 = param_1;
    uVar5 = 0;
    if (param_1 != (wchar_t *)0x0) {
      wVar1 = *param_1;
      while (uVar5 = uVar4, wVar1 != L'\0') {
        pwVar3 = pwVar3 + 1;
        uVar4 = uVar4 | wVar1;
        wVar1 = *pwVar3;
      }
    }
    local_28.bIsWide = (uVar5 & 0xff80) != 0;
    local_28.Len = (int)((longlong)pwVar3 - (longlong)param_1 >> 1);
    uStack_10 = CONCAT44(local_28._12_4_,local_28.Len);
    FVar2 = FNameHelper::MakeWithNumber(&local_28,(EFindName)&local_18,1);
    *this = *(FName *)FVar2;
    return this;
  }
  uVar4 = 0;
  pwVar3 = param_1;
  if ((param_1 != (wchar_t *)0x0) && (wVar1 = *param_1, wVar1 != L'\0')) {
    uVar4 = 0;
    do {
      pwVar3 = pwVar3 + 1;
      uVar4 = uVar4 | wVar1;
      wVar1 = *pwVar3;
    } while (wVar1 != L'\0');
  }
  local_28.bIsWide = (uVar4 & 0xff80) != 0;
  local_28.Len = (int)((longlong)pwVar3 - (longlong)param_1 >> 1);
  uStack_10 = CONCAT44(local_28._12_4_,local_28.Len);
  if (local_28.Len != 0) {
    UE::Core::Private::ParseNumberFromName<wchar_t>(param_1,(int *)&uStack_10);
    FNameHelper::MakeWithNumber(local_res8,(EFindName)&local_18,1);
    *this = (FName)local_res8[0].Str;
    return this;
  }
  *this = FVar2;
  return this;
}

// FName @ 141a6cdc0

FName * __thiscall FName::FName(FName *this,wchar_t *param_1,EFindName param_2)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  ushort uVar4;
  wchar_t *local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  uVar4 = 0;
  pwVar3 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    wVar1 = *param_1;
    uVar4 = 0;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      uVar4 = uVar4 | wVar1;
      wVar1 = *pwVar3;
    }
  }
  iVar2 = (int)((longlong)pwVar3 - (longlong)param_1 >> 1);
  _iStack_10 = CONCAT44(CONCAT31(uStack_c._1_3_,(uVar4 & 0xff80) != 0),iVar2);
  if (iVar2 == 0) {
    this->ComparisonIndex = 0;
    this->Number = 0;
    return this;
  }
  local_18 = param_1;
  UE::Core::Private::ParseNumberFromName<wchar_t>(param_1,&iStack_10);
  FNameHelper::MakeWithNumber((FWideStringViewWithWidth *)this,(EFindName)&local_18,param_2);
  return this;
}

// AddNameToDisplayStringExemption @ 141a74f50

void __cdecl FName::AddNameToDisplayStringExemption(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  AcquireSRWLockExclusive((PSRWLOCK)&NameToDisplayStringExemptionLock);
  if (((NameToDisplayStringExemptions.AllocatorInstance.Data <= param_1) &&
      (param_1 < NameToDisplayStringExemptions.AllocatorInstance.Data +
                 (longlong)NameToDisplayStringExemptions.ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (NameToDisplayStringExemptions.ArrayNum == NameToDisplayStringExemptions.ArrayMax) {
    NameToDisplayStringExemptions.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&NameToDisplayStringExemptions.AllocatorInstance,
                    &NameToDisplayStringExemptions.ArrayMax);
  }
  lVar3 = (longlong)NameToDisplayStringExemptions.ArrayNum;
  NameToDisplayStringExemptions.ArrayNum = NameToDisplayStringExemptions.ArrayNum + 1;
  ::FString::FString((FString *)
                     (NameToDisplayStringExemptions.AllocatorInstance.Data + lVar3 * 0x10),param_1);
                    /* WARNING: Could not recover jumptable at 0x000141a7502d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&NameToDisplayStringExemptionLock);
  return;
}

// AppendString @ 141a75ec0

void __thiscall FName::AppendString(FName *this,TStringBuilderBase<char8_t> *param_1)

{
  FNameEntry *this_00;
  
  this_00 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  FNameEntry::AppendNameToString(this_00,param_1);
  if (this->Number != 0) {
    if (param_1->End < param_1->CurPos + 1) {
      TStringBuilderBase<char8_t>::Extend(param_1,1);
    }
    *param_1->CurPos = '_';
    param_1->CurPos = param_1->CurPos + 1;
    TStringBuilderBase<char8_t>::AppendfImpl(param_1,(uchar *)"%d");
  }
  return;
}

// AppendString @ 141a75f40

void __thiscall FName::AppendString(FName *this,TStringBuilderBase<wchar_t> *param_1)

{
  FNameEntry *this_00;
  
  this_00 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  FNameEntry::AppendNameToString(this_00,param_1);
  if (this->Number != 0) {
    if (param_1->End < param_1->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    *param_1->CurPos = L'_';
    param_1->CurPos = param_1->CurPos + 1;
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%d");
  }
  return;
}

// AppendString @ 141a75fc0

void __thiscall FName::AppendString(FName *this,FString *param_1)

{
  FNameEntry *this_00;
  
  this_00 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  FNameEntry::AppendNameToString(this_00,param_1);
  if (this->Number != 0) {
    ::FString::AppendChar(param_1,L'_');
    ::FString::AppendInt(param_1,this->Number - 1);
  }
  return;
}

// AppendString @ 141a76020

void __thiscall FName::AppendString(FName *this,FUtf8String *param_1)

{
  FNameEntry *this_00;
  
  this_00 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  FNameEntry::AppendNameToString(this_00,param_1);
  if (this->Number != 0) {
    FUtf8String::AppendChar(param_1,'_');
    FUtf8String::AppendInt(param_1,this->Number - 1);
  }
  return;
}

// AutoTest @ 141a76830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141a777c7) */
/* WARNING: Removing unreachable block (ram,0x000141a777ec) */
/* WARNING: Removing unreachable block (ram,0x000141a7774b) */
/* WARNING: Removing unreachable block (ram,0x000141a77770) */
/* WARNING: Removing unreachable block (ram,0x000141a77776) */
/* WARNING: Removing unreachable block (ram,0x000141a7779b) */
/* WARNING: Removing unreachable block (ram,0x000141a7779c) */
/* WARNING: Removing unreachable block (ram,0x000141a777c1) */
/* WARNING: Removing unreachable block (ram,0x000141a777c2) */
/* WARNING: Removing unreachable block (ram,0x000141a777f9) */
/* WARNING: Removing unreachable block (ram,0x000141a7781e) */

void __cdecl FName::AutoTest(void)

{
  atomic<unsigned___int64_*> aVar1;
  ushort uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  FName FVar6;
  FNameEntryHeader *pFVar7;
  undefined4 uVar8;
  bool bVar9;
  wchar_t wVar10;
  wchar_t wVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  FNameEntryId FVar15;
  int iVar16;
  uint uVar17;
  FNameEntry *pFVar18;
  EName *pEVar19;
  FNameEntryIds FVar20;
  undefined4 extraout_var;
  FName *pFVar21;
  size_t sVar22;
  ulong64 *puVar23;
  ulong64 uVar24;
  ulong64 uVar25;
  wchar_t *pwVar26;
  ushort *puVar27;
  ushort *puVar28;
  ForAnyElementType FVar29;
  wchar_t *pwVar30;
  uint uVar31;
  FNameEntry_u_2 *pFVar32;
  uint uVar33;
  char *pcVar34;
  ulonglong uVar35;
  uint *puVar36;
  ulonglong uVar37;
  FScriptContainerElement *pFVar38;
  ulonglong uVar39;
  TNameAtomicBitSet<1024> TVar40;
  bool bVar41;
  undefined1 auStack_44c8 [32];
  FNameAnsiStringView *local_44a8;
  FNameAnsiStringView *local_44a0;
  longlong local_4498;
  longlong local_4490;
  undefined8 local_4488;
  wchar_t *local_4478;
  uint uStack_4470;
  undefined1 uStack_446c;
  undefined2 uStack_446b;
  undefined1 uStack_4469;
  ForAnyElementType local_4468;
  undefined8 local_4460;
  FIdentityFunctor local_4458;
  undefined1 local_4450 [8];
  FString local_4448;
  FString local_4438;
  FName local_4428;
  FNameEntryId local_4420;
  uint uStack_441c;
  undefined1 local_4418 [12];
  int iStack_440c;
  FString local_4408;
  FNameEntryId local_43f8;
  uint uStack_43f4;
  undefined1 local_43f0 [8];
  FName local_43e8;
  TNameAtomicBitSet<1024> local_43e0;
  undefined1 local_43d8 [8];
  undefined1 local_43d0 [8];
  undefined1 local_43c8 [8];
  undefined1 local_43c0 [8];
  undefined1 local_43b8 [8];
  undefined1 local_43b0 [8];
  FLazyName local_43a8;
  longlong local_4398;
  FName local_4390;
  FName local_4388;
  FName local_4380;
  FName local_4378;
  FNameAnsiStringView local_4370;
  int local_4360 [2];
  int local_4358 [2];
  int local_4350 [2];
  int local_4348 [2];
  int local_4340 [2];
  int local_4338 [2];
  FName local_4330;
  int local_4328 [2];
  FWideStringViewWithWidth local_4320;
  int local_4310 [2];
  int local_4308 [2];
  int local_4300 [2];
  char *local_42f8;
  int aiStack_42f0 [2];
  char *local_42e8;
  int aiStack_42e0 [2];
  char *local_42d8;
  int aiStack_42d0 [2];
  char *local_42c8;
  int aiStack_42c0 [2];
  char *local_42b8;
  int aiStack_42b0 [2];
  char *local_42a8;
  int aiStack_42a0 [2];
  char *local_4298;
  int aiStack_4290 [2];
  char *local_4288;
  int aiStack_4280 [2];
  char *local_4278;
  int aiStack_4270 [2];
  char *local_4268;
  int aiStack_4260 [2];
  undefined8 local_4258;
  undefined8 local_4250;
  FName local_4248;
  FName local_4240;
  undefined8 local_4238;
  FString local_4230;
  FString local_4220;
  FString local_4210;
  FString local_4200;
  FString local_41f0;
  undefined1 local_41e0 [8];
  undefined1 local_41d8 [8];
  undefined1 local_41d0 [8];
  undefined1 local_41c8 [8];
  undefined1 local_41c0 [8];
  undefined1 local_41b8 [8];
  undefined1 local_41b0 [8];
  undefined1 local_41a8 [8];
  undefined1 local_41a0 [8];
  undefined1 local_4198 [8];
  undefined1 local_4190 [8];
  undefined1 local_4188 [8];
  undefined1 local_4180 [8];
  undefined1 local_4178 [8];
  undefined1 local_4170 [8];
  undefined1 local_4168 [8];
  undefined1 local_4160 [8];
  undefined1 local_4158 [8];
  undefined1 local_4150 [8];
  FNameAnsiStringView local_4148;
  ulonglong local_4138;
  undefined1 local_4130 [4];
  undefined1 local_412c [8];
  undefined1 local_4124 [20];
  undefined8 uStack_4110;
  FScriptContainerElement *local_4108;
  undefined8 uStack_4100;
  FString local_40f8;
  undefined1 local_40e8 [8];
  undefined1 local_40e0 [8];
  undefined1 local_40d8 [8];
  undefined1 local_40d0 [8];
  undefined1 local_40c8 [8];
  undefined1 local_40c0 [8];
  undefined1 local_40b8 [8];
  undefined1 local_40b0 [8];
  undefined1 local_40a8 [8];
  undefined1 local_40a0 [8];
  undefined1 local_4098 [8];
  undefined1 local_4090 [8];
  undefined1 local_4088 [8];
  undefined1 local_4080 [8];
  undefined1 local_4078 [8];
  undefined1 local_4070 [8];
  undefined1 local_4068 [8];
  undefined1 local_4060 [8];
  FString local_4058;
  FString local_4048;
  FString local_4038;
  FString local_4028;
  undefined8 local_4018;
  undefined8 uStack_4010;
  FLazyName local_4008;
  FLazyName local_3ff8;
  FLazyName local_3fe8;
  FLazyName local_3fd8;
  FLazyName local_3fc8;
  FLazyName local_3fb8;
  FLazyName local_3fa8;
  FLazyName local_3f98;
  FLazyName local_3f88;
  FLazyName local_3f78;
  FLazyName local_3f68;
  FNameAnsiStringView local_3f58;
  wchar_t *local_3f48;
  undefined8 uStack_3f40;
  wchar_t *local_3f38;
  undefined8 uStack_3f30;
  undefined *local_3f28;
  undefined8 uStack_3f20;
  FName local_3f18;
  FName local_3f10;
  FName local_3f08;
  FName local_3f00;
  FName local_3ef8;
  FName local_3ef0;
  FName local_3ee8;
  FName local_3ee0;
  FName local_3ed8;
  FName local_3ed0;
  FName local_3ec8;
  FName local_3ec0;
  FName local_3eb8;
  FName local_3eb0;
  FName local_3ea8;
  FName local_3ea0;
  FName local_3e98;
  FName local_3e90;
  FName local_3e88;
  FName local_3e80;
  FName local_3e78;
  FName local_3e70;
  FName local_3e68;
  FName local_3e60;
  FName local_3e58;
  FName local_3e50 [2];
  undefined2 local_3e3b;
  undefined1 local_3e39;
  FNameStringView_u_0 local_3e38;
  undefined8 uStack_3e30;
  undefined2 local_3e1b;
  undefined1 local_3e19;
  FNameStringView_u_0 local_3e18;
  undefined8 uStack_3e10;
  wchar_t *local_3e08;
  undefined8 uStack_3e00;
  wchar_t *local_3df8;
  undefined8 uStack_3df0;
  undefined2 local_3ddb;
  undefined1 local_3dd9;
  FNameStringView_u_0 local_3dd8;
  undefined8 uStack_3dd0;
  undefined2 local_3dbb;
  undefined1 local_3db9;
  FNameStringView_u_0 local_3db8;
  undefined8 uStack_3db0;
  undefined2 local_3d9b;
  undefined1 local_3d99;
  FNameStringView_u_0 local_3d98;
  undefined8 uStack_3d90;
  undefined2 local_3d7b;
  undefined1 local_3d79;
  FNameStringView_u_0 local_3d78;
  undefined8 uStack_3d70;
  undefined2 local_3d5b;
  undefined1 local_3d59;
  FNameStringView_u_0 local_3d58;
  undefined8 uStack_3d50;
  undefined2 local_3d3b;
  undefined1 local_3d39;
  FNameStringView_u_0 local_3d38;
  undefined8 uStack_3d30;
  undefined2 local_3d1b;
  undefined1 local_3d19;
  FNameStringView_u_0 local_3d18;
  undefined8 uStack_3d10;
  undefined2 local_3cfb;
  undefined1 local_3cf9;
  FNameStringView_u_0 local_3cf8;
  undefined8 uStack_3cf0;
  undefined2 local_3cdb;
  undefined1 local_3cd9;
  FNameStringView_u_0 local_3cd8;
  undefined8 uStack_3cd0;
  undefined *local_3cc8;
  undefined8 uStack_3cc0;
  undefined2 local_3cab;
  undefined1 local_3ca9;
  FNameStringView_u_0 local_3ca8;
  undefined8 uStack_3ca0;
  undefined2 local_3c8b;
  undefined1 local_3c89;
  FNameStringView local_3c88;
  char *local_3c78;
  undefined8 uStack_3c70;
  char *local_3c68;
  undefined8 uStack_3c60;
  char *local_3c58;
  undefined8 uStack_3c50;
  char *local_3c48;
  undefined8 uStack_3c40;
  char *local_3c38;
  undefined8 uStack_3c30;
  undefined2 local_3c1b;
  undefined1 local_3c19;
  FNameStringView local_3c18;
  char *local_3c08;
  undefined8 uStack_3c00;
  undefined2 local_3beb;
  undefined1 local_3be9;
  FNameStringView local_3be8;
  char *local_3bd8;
  undefined8 uStack_3bd0;
  undefined2 local_3bbb;
  undefined1 local_3bb9;
  FNameStringView local_3bb8;
  char *local_3ba8;
  undefined8 uStack_3ba0;
  undefined2 local_3b8b;
  undefined1 local_3b89;
  FNameStringView local_3b88;
  char *local_3b78;
  undefined8 uStack_3b70;
  undefined2 local_3b5b;
  undefined1 local_3b59;
  FNameStringView local_3b58;
  char *local_3b48;
  undefined8 uStack_3b40;
  undefined2 local_3b2b;
  undefined1 local_3b29;
  FNameStringView local_3b28;
  char *local_3b18;
  undefined8 uStack_3b10;
  char *local_3b08;
  longlong lStack_3b00;
  char *local_3af8;
  longlong lStack_3af0;
  char *local_3ae8;
  undefined8 uStack_3ae0;
  char *local_3ad8;
  undefined8 uStack_3ad0;
  char *local_3ac8;
  undefined8 uStack_3ac0;
  char *local_3ab8;
  undefined8 uStack_3ab0;
  char *local_3aa8;
  undefined8 uStack_3aa0;
  char *local_3a98;
  undefined8 uStack_3a90;
  char *local_3a88;
  undefined8 uStack_3a80;
  char *local_3a78;
  undefined8 uStack_3a70;
  char *local_3a68;
  undefined8 uStack_3a60;
  char *local_3a58;
  undefined8 uStack_3a50;
  char *local_3a48;
  undefined8 uStack_3a40;
  wchar_t *local_3a38;
  undefined8 uStack_3a30;
  wchar_t *local_3a28;
  undefined8 uStack_3a20;
  char *local_3a18;
  undefined8 uStack_3a10;
  char *local_3a08;
  undefined8 uStack_3a00;
  char *local_39f8;
  undefined8 uStack_39f0;
  char *local_39e8;
  undefined8 uStack_39e0;
  char *local_39d8;
  undefined8 uStack_39d0;
  char *local_39c8;
  undefined8 uStack_39c0;
  undefined *local_39b8;
  undefined8 uStack_39b0;
  undefined *local_39a8;
  undefined8 uStack_39a0;
  undefined *local_3998;
  undefined8 uStack_3990;
  char *local_3988;
  undefined8 uStack_3980;
  undefined *local_3978;
  undefined8 uStack_3970;
  undefined *local_3968;
  undefined8 uStack_3960;
  char *local_3958;
  undefined8 uStack_3950;
  char *local_3948;
  undefined8 uStack_3940;
  char *local_3938;
  undefined8 uStack_3930;
  char *local_3928;
  undefined8 uStack_3920;
  undefined *local_3918;
  undefined8 uStack_3910;
  char *local_3908;
  undefined8 uStack_3900;
  char *local_38f8;
  undefined8 uStack_38f0;
  char *local_38e8;
  undefined8 uStack_38e0;
  char *local_38d8;
  undefined8 uStack_38d0;
  FNameEntry_u_2 local_3898;
  FNameEntry_u_2 local_3098;
  FNameEntry_u_2 local_2898;
  FNameEntry_u_2 local_2098;
  FNameEntry_u_2 local_1898;
  FNameEntry_u_2 local_1098;
  uint local_898 [12];
  wchar_t local_868 [8];
  wchar_t local_858 [1040];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x141a7685a;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_44c8;
  FName(&local_4428,"AutoTest_1");
  local_43a8.Number = 10;
  local_43a8.Either.AnsiLiteral = "autoTest_1";
  uStack_4110 = CONCAT44(local_43a8._12_4_,10);
  local_4124._12_8_ = "autoTest_1";
  uStack_43f4 = UE::Core::Private::ParseNumberFromName<char>("autoTest_1",(int *)&uStack_4110);
  uVar37 = 0;
  uVar17 = 0;
  uVar13 = (uint)uStack_4110;
  bVar41 = false;
  uVar33 = 0;
  if (uVar13 == 0) {
    uStack_43f4 = 0;
    local_43f8.Value = 0;
  }
  else {
    local_4438.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_4124._12_8_;
    local_4438.Data.ArrayMax._1_2_ = local_3e3b;
    local_4438.Data.ArrayMax._3_1_ = local_3e39;
    local_4438.Data.ArrayMax._0_1_ = 0;
    uStack_3e30 = CONCAT17(local_3e39,CONCAT25(local_3e3b,(uint5)uVar13));
    local_3e38.Data = (void *)local_4124._12_8_;
    local_4438.Data.ArrayNum = uVar13;
    FVar20 = FNameHelper::FindOrStoreString((FNameStringView *)&local_3e38,FNAME_Add);
    local_43f8 = FVar20.ComparisonId.Value;
  }
  uVar13 = uStack_43f4;
  FVar15.Value = local_43f8.Value;
  local_43a8.Number = 10;
  local_43a8.Either.AnsiLiteral = "autoTeSt_1";
  uStack_4100 = CONCAT44(local_43a8._12_4_,10);
  local_4108 = (FScriptContainerElement *)0x1506e5728;
  uVar12 = UE::Core::Private::ParseNumberFromName<char>("autoTeSt_1",(int *)&uStack_4100);
  uVar31 = (uint)uStack_4100;
  if (uVar31 == 0) {
    local_4398 = 0;
    uVar12 = uVar17;
  }
  else {
    local_4438.Data.AllocatorInstance.Data = local_4108;
    local_4438.Data.ArrayMax._1_2_ = local_3e1b;
    local_4438.Data.ArrayMax._3_1_ = local_3e19;
    local_4438.Data.ArrayMax._0_1_ = 0;
    uStack_3e10 = CONCAT17(local_3e19,CONCAT25(local_3e1b,(uint5)uVar31));
    local_3e18.Data = local_4108;
    local_4438.Data.ArrayNum = uVar31;
    FVar20 = FNameHelper::FindOrStoreString((FNameStringView *)&local_3e18,FNAME_Add);
    local_4398 = CONCAT44(uVar12,FVar20.ComparisonId.Value.Value);
  }
  local_4418._0_8_ = L"AutoTest_2";
  wVar11 = L'\0';
  pwVar26 = L"AutoTest_2";
  uVar39 = uVar37;
  wVar10 = wVar11;
  do {
    pwVar30 = pwVar26;
    pwVar26 = pwVar30 + 1;
    uVar31 = (uint)uVar39 | (uint)(ushort)wVar10;
    uVar39 = (ulonglong)uVar31;
    wVar10 = *pwVar26;
  } while (wVar10 != L'\0');
  iStack_440c = CONCAT31(iStack_440c._1_3_,(uVar31 & 0xffffff80) != 0);
  local_4418._8_4_ = (undefined4)((longlong)(pwVar30 + -0xa8372b9b) >> 1);
  uStack_3f40 = CONCAT44(iStack_440c,local_4418._8_4_);
  local_3f48 = L"AutoTest_2";
  if (local_4418._8_4_ == 0) {
    local_4450 = (undefined1  [8])0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"AutoTest_2",(int *)&uStack_3f40);
    local_3e08 = local_3f48;
    uStack_3e00 = uStack_3f40;
    FNameHelper::MakeWithNumber((FWideStringViewWithWidth *)local_4450,(EFindName)&local_3e08,1);
  }
  local_4418._0_8_ = L"AutoTestB_2";
  pwVar26 = L"AutoTestB_2";
  uVar39 = uVar37;
  do {
    pwVar30 = pwVar26;
    pwVar26 = pwVar30 + 1;
    uVar31 = (uint)uVar39 | (uint)(ushort)wVar11;
    uVar39 = (ulonglong)uVar31;
    wVar11 = *pwVar26;
  } while (wVar11 != L'\0');
  iStack_440c = CONCAT31(iStack_440c._1_3_,(uVar31 & 0xffffff80) != 0);
  local_4418._8_4_ = (undefined4)((longlong)(pwVar30 + -0xa8372ba7) >> 1);
  uStack_3f30 = CONCAT44(iStack_440c,local_4418._8_4_);
  local_3f38 = L"AutoTestB_2";
  if (local_4418._8_4_ == 0) {
    local_43f0 = (undefined1  [8])0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"AutoTestB_2",(int *)&uStack_3f30);
    local_3df8 = local_3f38;
    uStack_3df0 = uStack_3f30;
    FNameHelper::MakeWithNumber((FWideStringViewWithWidth *)local_43f0,(EFindName)&local_3df8,1);
  }
  if ((local_4428.Number != 2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AutoTest_1.GetNumber() == (1 + 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1005,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((uVar13 != 2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("autoTest_1.GetNumber() == (1 + 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1006,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((uVar12 != 2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("autoTeSt_1.GetNumber() == (1 + 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1007,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((local_4450._4_4_ != 3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AutoTest_2.GetNumber() == (2 + 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1008,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((local_43f0._4_4_ != 3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AutoTestB_2.GetNumber() == (2 + 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1009,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((undefined1  [8])CONCAT44(local_4428.Number,local_4428.ComparisonIndex.Value) == local_4450)
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("AutoTest_1 != AutoTest_2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                            ,0x100b,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar5 = CONCAT44(uStack_43f4,local_43f8.Value);
  if ((CONCAT44(local_4428.Number,local_4428.ComparisonIndex.Value) != lVar5) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AutoTest_1 == autoTest_1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x100c,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((CONCAT44(local_4428.Number,local_4428.ComparisonIndex.Value) != local_4398) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AutoTest_1 == autoTeSt_1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x100d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((CONCAT44(local_4428.Number,local_4428.ComparisonIndex.Value) != lVar5) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AutoTest_1.ToUnstableInt() == autoTest_1.ToUnstableInt()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x100f,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((undefined1  [8])CONCAT44(local_4428.Number,local_4428.ComparisonIndex.Value) == local_4450)
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("AutoTest_1.ToUnstableInt() != AutoTest_2.ToUnstableInt()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                            ,0x1010,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((FVar15.Value != local_4450._0_4_) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("autoTest_1.GetComparisonIndex() == AutoTest_2.GetComparisonIndex()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1021,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar18 = ResolveEntry(local_4428.ComparisonIndex);
  pFVar32 = &pFVar18->field1_0x2;
  uVar12 = pFVar18->Len;
  if (pFVar18->bIsWide == 0) {
    if (pFVar32 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_3898,(void *)0x0,pFVar18->Len);
      pFVar32 = &local_3898;
    }
    ::FString::ConstructFromPtrSize(&local_41f0,pFVar32->AnsiName,uVar12);
  }
  else {
    if (pFVar32 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_3898,(void *)0x0,pFVar18->Len * 2);
      pFVar32 = &local_3898;
    }
    ::FString::ConstructFromPtrSize(&local_41f0,pFVar32->WideName,uVar12);
  }
  pFVar18 = ResolveEntry(FVar15);
  pFVar32 = &pFVar18->field1_0x2;
  uVar12 = pFVar18->Len;
  if (pFVar18->bIsWide == 0) {
    if (pFVar32 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_3098,(void *)0x0,pFVar18->Len);
      pFVar32 = &local_3098;
    }
    ::FString::ConstructFromPtrSize(&local_4220,pFVar32->AnsiName,uVar12);
  }
  else {
    if (pFVar32 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_3098,(void *)0x0,pFVar18->Len * 2);
      pFVar32 = &local_3098;
    }
    ::FString::ConstructFromPtrSize(&local_4220,pFVar32->WideName,uVar12);
  }
  if (local_4220.Data.ArrayNum == local_41f0.Data.ArrayNum) {
    bVar9 = bVar41;
    if (1 < local_4220.Data.ArrayNum) {
      iVar14 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)local_4220.Data.AllocatorInstance.Data,
                          (wchar_t *)local_41f0.Data.AllocatorInstance.Data);
      bVar9 = iVar14 != 0;
    }
  }
  else {
    bVar9 = local_4220.Data.ArrayNum + local_41f0.Data.ArrayNum != 1;
  }
  if (local_4220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4220.Data.AllocatorInstance.Data);
  }
  if (local_41f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_41f0.Data.AllocatorInstance.Data);
  }
  if ((bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("autoTest_1.GetPlainNameString() == AutoTest_1.GetPlainNameString()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1022,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar18 = ResolveEntry((FNameEntryId)local_4450._0_4_);
  pFVar32 = &pFVar18->field1_0x2;
  uVar12 = pFVar18->Len;
  if (pFVar18->bIsWide == 0) {
    if (pFVar32 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_2898,(void *)0x0,pFVar18->Len);
      pFVar32 = &local_2898;
    }
    ::FString::ConstructFromPtrSize(&local_4210,pFVar32->AnsiName,uVar12);
  }
  else {
    if (pFVar32 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_2898,(void *)0x0,pFVar18->Len * 2);
      pFVar32 = &local_2898;
    }
    ::FString::ConstructFromPtrSize(&local_4210,pFVar32->WideName,uVar12);
  }
  pFVar18 = ResolveEntry(FVar15);
  pFVar32 = &pFVar18->field1_0x2;
  uVar12 = pFVar18->Len;
  if (pFVar18->bIsWide == 0) {
    if (pFVar32 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_2098,(void *)0x0,pFVar18->Len);
      pFVar32 = &local_2098;
    }
    ::FString::ConstructFromPtrSize(&local_4200,pFVar32->AnsiName,uVar12);
  }
  else {
    if (pFVar32 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_2098,(void *)0x0,pFVar18->Len * 2);
      pFVar32 = &local_2098;
    }
    ::FString::ConstructFromPtrSize(&local_4200,pFVar32->WideName,uVar12);
  }
  if (local_4200.Data.ArrayNum == local_4210.Data.ArrayNum) {
    bVar9 = bVar41;
    if (1 < local_4200.Data.ArrayNum) {
      iVar14 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)local_4200.Data.AllocatorInstance.Data,
                          (wchar_t *)local_4210.Data.AllocatorInstance.Data);
      bVar9 = iVar14 != 0;
    }
  }
  else {
    bVar9 = local_4200.Data.ArrayNum + local_4210.Data.ArrayNum != 1;
  }
  if (local_4200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4200.Data.AllocatorInstance.Data);
  }
  if (local_4210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4210.Data.AllocatorInstance.Data);
  }
  if ((bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("autoTest_1.GetPlainNameString() == AutoTest_2.GetPlainNameString()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1023,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar18 = ResolveEntry((FNameEntryId)local_43f0._0_4_);
  pFVar32 = &pFVar18->field1_0x2;
  uVar12 = pFVar18->Len;
  if (pFVar18->bIsWide == 0) {
    if (pFVar32 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_1898,(void *)0x0,pFVar18->Len);
      pFVar32 = &local_1898;
    }
    ::FString::ConstructFromPtrSize((FString *)local_4418,pFVar32->AnsiName,uVar12);
  }
  else {
    if (pFVar32 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_1898,(void *)0x0,pFVar18->Len * 2);
      pFVar32 = &local_1898;
    }
    ::FString::ConstructFromPtrSize((FString *)local_4418,pFVar32->WideName,uVar12);
  }
  pFVar38 = (FScriptContainerElement *)L"";
  if (local_4418._8_4_ != 0) {
    pFVar38 = (FScriptContainerElement *)local_4418._0_8_;
  }
  pFVar18 = ResolveEntry((FNameEntryId)local_4450._0_4_);
  pFVar32 = &pFVar18->field1_0x2;
  uVar12 = pFVar18->Len;
  if (pFVar18->bIsWide == 0) {
    if (pFVar32 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_1098,(void *)0x0,pFVar18->Len);
      pFVar32 = &local_1098;
    }
    ::FString::ConstructFromPtrSize(&local_40f8,pFVar32->AnsiName,uVar12);
  }
  else {
    if (pFVar32 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_1098,(void *)0x0,pFVar18->Len * 2);
      pFVar32 = &local_1098;
    }
    ::FString::ConstructFromPtrSize(&local_40f8,pFVar32->WideName,uVar12);
  }
  FVar29.Data = (FScriptContainerElement *)L"";
  if (local_40f8.Data.ArrayNum != 0) {
    FVar29.Data = local_40f8.Data.AllocatorInstance.Data;
  }
  if (local_40f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40f8.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_4418._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_4418._0_8_);
  }
  if ((pFVar38 == FVar29.Data) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("*AutoTestB_2.GetPlainNameString() != *AutoTest_2.GetPlainNameString()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1024,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = local_4450._4_4_;
  if ((local_43f0._4_4_ != local_4450._4_4_) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AutoTestB_2.GetNumber() == AutoTest_2.GetNumber()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1025,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((uVar13 == uVar8) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("autoTest_1.GetNumber() != AutoTest_2.GetNumber()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1026,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((local_4428.Number != uVar13) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AutoTest_1.GetNumber() == autoTest_1.GetNumber()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1027,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar18 = ResolveEntry((FNameEntryId)0x0);
  if ((pFVar18.Len != 4) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FCStringAnsi::Strlen(\"None\") == FName().GetStringLength()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1029,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  aiStack_42e0[0] = 3;
  local_42e8 = "ABC";
  uVar12 = UE::Core::Private::ParseNumberFromName<char>("ABC",aiStack_42e0);
  uVar31 = aiStack_42e0[0];
  uVar13 = uVar17;
  FVar15.Value = uVar33;
  if (uVar31 != 0) {
    local_4478 = (wchar_t *)local_42e8;
    uStack_446b = local_3ddb;
    uStack_4469 = local_3dd9;
    uStack_446c = 0;
    uStack_3dd0 = CONCAT17(local_3dd9,CONCAT25(local_3ddb,(uint5)uVar31));
    local_3dd8.Data = local_42e8;
    uStack_4470 = uVar31;
    FVar20 = FNameHelper::FindOrStoreString((FNameStringView *)&local_3dd8,FNAME_Add);
    uVar13 = uVar12;
    FVar15.Value = FVar20.ComparisonId.Value.Value;
  }
  pFVar18 = ResolveEntry(FVar15);
  uVar12 = pFVar18.Len;
  if (uVar13 != 0) {
    uVar12 = uVar12 + 2;
    for (iVar14 = uVar13 - 1; 9 < iVar14; iVar14 = iVar14 / 10) {
      uVar12 = uVar12 + 1;
    }
  }
  if ((uVar12 != 3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FCStringAnsi::Strlen(\"ABC\") == FName(\"ABC\").GetStringLength()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x102a,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  aiStack_42d0[0] = 5;
  local_42d8 = "ABC_0";
  uVar12 = UE::Core::Private::ParseNumberFromName<char>("ABC_0",aiStack_42d0);
  uVar31 = aiStack_42d0[0];
  uVar13 = uVar17;
  FVar15.Value = uVar33;
  if (uVar31 != 0) {
    local_4478 = (wchar_t *)local_42d8;
    uStack_446b = local_3dbb;
    uStack_4469 = local_3db9;
    uStack_446c = 0;
    uStack_3db0 = CONCAT17(local_3db9,CONCAT25(local_3dbb,(uint5)uVar31));
    local_3db8.Data = local_42d8;
    uStack_4470 = uVar31;
    FVar20 = FNameHelper::FindOrStoreString((FNameStringView *)&local_3db8,FNAME_Add);
    uVar13 = uVar12;
    FVar15.Value = FVar20.ComparisonId.Value.Value;
  }
  pFVar18 = ResolveEntry(FVar15);
  uVar12 = pFVar18.Len;
  if (uVar13 != 0) {
    uVar12 = uVar12 + 2;
    for (iVar14 = uVar13 - 1; 9 < iVar14; iVar14 = iVar14 / 10) {
      uVar12 = uVar12 + 1;
    }
  }
  if ((uVar12 != 5) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FCStringAnsi::Strlen(\"ABC_0\") == FName(\"ABC_0\").GetStringLength()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x102b,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  aiStack_42b0[0] = 5;
  local_42b8 = "ABC_9";
  uVar12 = UE::Core::Private::ParseNumberFromName<char>("ABC_9",aiStack_42b0);
  uVar31 = aiStack_42b0[0];
  uVar13 = uVar17;
  FVar15.Value = uVar33;
  if (uVar31 != 0) {
    local_4478 = (wchar_t *)local_42b8;
    uStack_446b = local_3d9b;
    uStack_4469 = local_3d99;
    uStack_446c = 0;
    uStack_3d90 = CONCAT17(local_3d99,CONCAT25(local_3d9b,(uint5)uVar31));
    local_3d98.Data = local_42b8;
    uStack_4470 = uVar31;
    FVar20 = FNameHelper::FindOrStoreString((FNameStringView *)&local_3d98,FNAME_Add);
    uVar13 = uVar12;
    FVar15.Value = FVar20.ComparisonId.Value.Value;
  }
  pFVar18 = ResolveEntry(FVar15);
  uVar12 = pFVar18.Len;
  if (uVar13 != 0) {
    uVar12 = uVar12 + 2;
    for (iVar14 = uVar13 - 1; 9 < iVar14; iVar14 = iVar14 / 10) {
      uVar12 = uVar12 + 1;
    }
  }
  if ((uVar12 != 5) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FCStringAnsi::Strlen(\"ABC_9\") == FName(\"ABC_9\").GetStringLength()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x102c,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  aiStack_42c0[0] = 6;
  local_42c8 = "ABC_10";
  uVar13 = UE::Core::Private::ParseNumberFromName<char>("ABC_10",aiStack_42c0);
  uVar12 = aiStack_42c0[0];
  if (uVar12 == 0) {
    local_4390.ComparisonIndex.Value = 0;
    local_4390.Number = 0;
  }
  else {
    local_4478 = (wchar_t *)local_42c8;
    uStack_446b = local_3d7b;
    uStack_4469 = local_3d79;
    uStack_446c = 0;
    uStack_3d70 = CONCAT17(local_3d79,CONCAT25(local_3d7b,(uint5)uVar12));
    local_3d78.Data = local_42c8;
    uStack_4470 = uVar12;
    FVar20 = FNameHelper::FindOrStoreString((FNameStringView *)&local_3d78,FNAME_Add);
    local_4390.Number = uVar13;
    local_4390.ComparisonIndex.Value = FVar20.ComparisonId.Value.Value;
  }
  uVar13 = GetStringLength(&local_4390);
  if ((uVar13 != 6) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FCStringAnsi::Strlen(\"ABC_10\") == FName(\"ABC_10\").GetStringLength()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x102d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  aiStack_42a0[0] = 0xe;
  local_42a8 = "ABC_2000000000";
  uVar13 = UE::Core::Private::ParseNumberFromName<char>("ABC_2000000000",aiStack_42a0);
  uVar12 = aiStack_42a0[0];
  if (uVar12 == 0) {
    local_4388.ComparisonIndex.Value = 0;
    local_4388.Number = 0;
  }
  else {
    local_4478 = (wchar_t *)local_42a8;
    uStack_446b = local_3d5b;
    uStack_4469 = local_3d59;
    uStack_446c = 0;
    uStack_3d50 = CONCAT17(local_3d59,CONCAT25(local_3d5b,(uint5)uVar12));
    local_3d58.Data = local_42a8;
    uStack_4470 = uVar12;
    FVar20 = FNameHelper::FindOrStoreString((FNameStringView *)&local_3d58,FNAME_Add);
    local_4388.Number = uVar13;
    local_4388.ComparisonIndex.Value = FVar20.ComparisonId.Value.Value;
  }
  uVar13 = GetStringLength(&local_4388);
  if ((uVar13 != 0xe) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FCStringAnsi::Strlen(\"ABC_2000000000\") == FName(\"ABC_2000000000\").GetStringLength()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x102e,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  aiStack_4290[0] = 0xe;
  local_4298 = "ABC_4000000000";
  uVar13 = UE::Core::Private::ParseNumberFromName<char>("ABC_4000000000",aiStack_4290);
  uVar12 = aiStack_4290[0];
  if (uVar12 == 0) {
    local_4380.ComparisonIndex.Value = 0;
    local_4380.Number = 0;
  }
  else {
    local_4478 = (wchar_t *)local_4298;
    uStack_446b = local_3d3b;
    uStack_4469 = local_3d39;
    uStack_446c = 0;
    uStack_3d30 = CONCAT17(local_3d39,CONCAT25(local_3d3b,(uint5)uVar12));
    local_3d38.Data = local_4298;
    uStack_4470 = uVar12;
    FVar20 = FNameHelper::FindOrStoreString((FNameStringView *)&local_3d38,FNAME_Add);
    local_4380.Number = uVar13;
    local_4380.ComparisonIndex.Value = FVar20.ComparisonId.Value.Value;
  }
  uVar13 = GetStringLength(&local_4380);
  if ((uVar13 != 0xe) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FCStringAnsi::Strlen(\"ABC_4000000000\") == FName(\"ABC_4000000000\").GetStringLength()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x102f,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_4258 = 0;
  local_4250 = 0;
  local_4238 = 0;
  aiStack_4280[0] = 4;
  local_4288 = "None";
  uVar12 = UE::Core::Private::ParseNumberFromName<char>("None",aiStack_4280);
  uVar31 = aiStack_4280[0];
  uVar13 = uVar17;
  FVar15.Value = uVar33;
  if (uVar31 != 0) {
    local_4478 = (wchar_t *)local_4288;
    uStack_446b = local_3d1b;
    uStack_4469 = local_3d19;
    uStack_446c = 0;
    uStack_3d10 = CONCAT17(local_3d19,CONCAT25(local_3d1b,(uint5)uVar31));
    local_3d18.Data = local_4288;
    uStack_4470 = uVar31;
    FVar20 = FNameHelper::FindOrStoreString((FNameStringView *)&local_3d18,FNAME_Add);
    uVar13 = uVar12;
    FVar15.Value = FVar20.ComparisonId.Value.Value;
  }
  if ((CONCAT44(uVar13,FVar15.Value) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NullName == FName(\"None\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1038,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  aiStack_4270[0] = 4;
  local_4278 = "none";
  uVar12 = UE::Core::Private::ParseNumberFromName<char>("none",aiStack_4270);
  uVar31 = aiStack_4270[0];
  uVar13 = uVar17;
  FVar15.Value = uVar33;
  if (uVar31 != 0) {
    local_4478 = (wchar_t *)local_4278;
    uStack_446b = local_3cfb;
    uStack_4469 = local_3cf9;
    uStack_446c = 0;
    uStack_3cf0 = CONCAT17(local_3cf9,CONCAT25(local_3cfb,(uint5)uVar31));
    local_3cf8.Data = local_4278;
    uStack_4470 = uVar31;
    FVar20 = FNameHelper::FindOrStoreString((FNameStringView *)&local_3cf8,FNAME_Add);
    uVar13 = uVar12;
    FVar15.Value = FVar20.ComparisonId.Value.Value;
  }
  if ((CONCAT44(uVar13,FVar15.Value) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NullName == FName(\"none\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1039,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  aiStack_4260[0] = 4;
  local_4268 = "NONE";
  uVar12 = UE::Core::Private::ParseNumberFromName<char>("NONE",aiStack_4260);
  uVar31 = aiStack_4260[0];
  uVar13 = uVar17;
  FVar15.Value = uVar33;
  if (uVar31 != 0) {
    local_4478 = (wchar_t *)local_4268;
    uStack_446b = local_3cdb;
    uStack_4469 = local_3cd9;
    uStack_446c = 0;
    uStack_3cd0 = CONCAT17(local_3cd9,CONCAT25(local_3cdb,(uint5)uVar31));
    local_3cd8.Data = local_4268;
    uStack_4470 = uVar31;
    FVar20 = FNameHelper::FindOrStoreString((FNameStringView *)&local_3cd8,FNAME_Add);
    uVar13 = uVar12;
    FVar15.Value = FVar20.ComparisonId.Value.Value;
  }
  if ((CONCAT44(uVar13,FVar15.Value) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NullName == FName(\"NONE\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x103a,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_4478 = L"None";
  uVar13 = 0;
  puVar28 = (ushort *)&u_None;
  uVar39 = uVar37;
  do {
    puVar27 = puVar28;
    puVar28 = puVar27 + 1;
    uVar12 = (uint)uVar39 | uVar13;
    uVar39 = (ulonglong)uVar12;
    uVar2 = *puVar28;
    uVar13 = (uint)uVar2;
  } while (uVar2 != 0);
  uStack_446c = (uVar12 & 0xffffff80) != 0;
  uStack_4470 = (uint)((longlong)(puVar27 + -0xa830fbeb) >> 1);
  uStack_3f20 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,uStack_4470)));
  local_3f28 = &u_None;
  if (uStack_4470 == 0) {
    local_4320.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"None",(int *)&uStack_3f20);
    local_3cc8 = local_3f28;
    uStack_3cc0 = uStack_3f20;
    FNameHelper::MakeWithNumber(&local_4320,(EFindName)&local_3cc8,1);
  }
  if ((local_4320.Str != (wchar_t *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NullName == FName(L\"None\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x103b,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_4240.ComparisonIndex.Value = 0;
  local_4240.Number = 0;
  pEVar19 = ToEName(&local_4240);
  if ((pEVar19 == (EName *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName().ToEName()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x103c,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_4248.ComparisonIndex.Value = 0;
  local_4248.Number = 0;
  pEVar19 = ToEName(&local_4248);
  if ((*pEVar19 != None) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("*FName().ToEName() == NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x103d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  aiStack_42f0[0] = 6;
  local_42f8 = "None_7";
  uVar13 = UE::Core::Private::ParseNumberFromName<char>("None_7",aiStack_42f0);
  uVar12 = aiStack_42f0[0];
  if (uVar12 == 0) {
    uStack_441c = 0;
    local_4420.Value = 0;
LAB_141a77c78:
    uVar13 = uStack_441c;
    FVar15.Value = local_4420.Value;
    pFVar18 = ResolveEntry(local_4420);
    FNameEntry::GetPlainNameString(pFVar18,&local_4438);
  }
  else {
    local_4478 = (wchar_t *)local_42f8;
    uStack_446b = local_3cab;
    uStack_4469 = local_3ca9;
    uStack_446c = 0;
    uStack_3ca0 = CONCAT17(local_3ca9,CONCAT25(local_3cab,(uint5)uVar12));
    local_3ca8.Data = local_42f8;
    uStack_4470 = uVar12;
    FVar20 = FNameHelper::FindOrStoreString((FNameStringView *)&local_3ca8,FNAME_Add);
    FVar15 = FVar20.ComparisonId.Value;
    local_4420.Value = FVar15.Value;
    uStack_441c = uVar13;
    if (uVar13 == 0) goto LAB_141a77c78;
    local_4408.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4408.Data.ArrayNum = 0;
    local_4408.Data.ArrayMax = 0;
    pFVar18 = ResolveEntry(FVar15);
    ::FString::Reset(&local_4408,pFVar18.Len + 6);
    FNameEntry::AppendNameToString(pFVar18,&local_4408);
    ::FString::AppendChar(&local_4408,L'_');
    ::FString::AppendInt(&local_4408,uVar13 - 1);
    local_4438.Data.AllocatorInstance.Data = local_4408.Data.AllocatorInstance.Data;
    local_4408.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4438.Data.ArrayNum = local_4408.Data.ArrayNum;
    local_4438.Data.ArrayMax._0_1_ = (undefined1)local_4408.Data.ArrayMax;
    local_4438.Data.ArrayMax._1_2_ = local_4408.Data.ArrayMax._1_2_;
    local_4438.Data.ArrayMax._3_1_ = local_4408.Data.ArrayMax._3_1_;
    local_4408.Data.ArrayNum = 0;
    local_4408.Data.ArrayMax = 0;
    local_4420.Value = FVar15.Value;
  }
  FVar29.Data = (FScriptContainerElement *)L"";
  if (local_4438.Data.ArrayNum != 0) {
    FVar29.Data = local_4438.Data.AllocatorInstance.Data;
  }
  iVar14 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar29.Data,"None_7");
  if (local_4438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4438.Data.AllocatorInstance.Data);
  }
  if ((iVar14 != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("None_7.ToString() == \"None_7\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1042,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((FVar15.Value != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("None_7.GetComparisonIndex() == FNameEntryId::FromEName(EName::None)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1043,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((uVar13 != 8) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("None_7.GetNumber() == (7 + 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1044,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar39 = CONCAT44(uStack_441c,local_4420.Value);
  if (uVar39 != 0x800000000) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("FName(EName::None, (7 + 1)) == None_7",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0x1045,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((uVar39 != 0x800000000) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("FName(FName(), (7 + 1)) == None_7",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0x1046,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uStack_446b = local_3c8b;
  uStack_4469 = local_3c89;
  local_4478 = L"None";
  uStack_4470 = 4;
  uStack_446c = 0;
  local_3c88._13_2_ = local_3c8b;
  local_3c88.Len = 4;
  local_3c88.bIsWide = false;
  local_3c88._15_1_ = local_3c89;
  local_3c88.field0_0x0.Data = "None";
  FVar20 = FNameHelper::FindOrStoreString(&local_3c88,FNAME_Add);
  if ((((ulonglong)FVar20 & 0xffffffff | 0x800000000) != uVar39) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"None\", (7 + 1)) == None_7",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1047,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((uVar39 != 0x800000000) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(FNameEntryId::FromEName(EName::None), FNameEntryId::FromEName(EName::None), (7 + 1)) == None_7"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1048,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((uVar39 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!None_7.IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1049,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_4470 = 2;
  local_4478 = L"_7";
  uStack_3c70 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,2)));
  local_3c78 = "_7";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_412c,(EFindName)&local_3c78);
  if ((local_412c != (undefined1  [8])0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"_7\").IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x104c,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_4470 = 2;
  local_4478 = L"_0";
  uStack_3c60 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,2)));
  local_3c68 = "_0";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4124,(EFindName)&local_3c68);
  if (((char *)local_4124._0_8_ != (char *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"_0\").IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x104d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_4470 = 0xb;
  local_4478 = L"_2147483646";
  uStack_3c50 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,0xb)));
  local_3c58 = "_2147483646";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_40e8,(EFindName)&local_3c58);
  if ((local_40e8 != (undefined1  [8])0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"_2147483646\").IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x104e,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_4470 = 0xb;
  local_4478 = L"_2147483647";
  uStack_3c40 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,0xb)));
  local_3c48 = "_2147483647";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_40e0,(EFindName)&local_3c48);
  if ((local_40e0 == (undefined1  [8])0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FName(\"_2147483647\").IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x104f,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar15 = FNameEntryId::FromValidEName((EName)local_4130);
  uStack_4470 = 8;
  local_4378.Number = 0;
  local_4378.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar15.Value);
  pcVar34 = (char *)(ulonglong)local_4378.ComparisonIndex.Value;
  local_4478 = L"Cylinder";
  uStack_3c30 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,8)));
  local_3c38 = "Cylinder";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_40d8,(EFindName)&local_3c38);
  if (((undefined1  [8])pcVar34 != local_40d8) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cylinder == FName(\"Cylinder\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1052,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pEVar19 = ToEName(&local_4378);
  if ((pEVar19 == (EName *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cylinder.ToEName()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1053,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pEVar19 = ToEName(&local_4378);
  if ((*pEVar19 != Cylinder) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("*Cylinder.ToEName() == NAME_Cylinder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1054,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar18 = ResolveEntry(local_4378.ComparisonIndex);
  FNameEntry::GetPlainNameString(pFVar18,&local_4058);
  FVar29.Data = (FScriptContainerElement *)L"";
  if (local_4058.Data.ArrayNum != 0) {
    FVar29.Data = local_4058.Data.AllocatorInstance.Data;
  }
  iVar14 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar29.Data,L"Cylinder");
  if (local_4058.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4058.Data.AllocatorInstance.Data);
  }
  if ((iVar14 != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cylinder.GetPlainNameString() == L\"Cylinder\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1055,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_446b = local_3c1b;
  uStack_4469 = local_3c19;
  local_4478 = L"Text";
  uStack_4470 = 4;
  uStack_446c = 0;
  local_3c18._13_2_ = local_3c1b;
  local_3c18.Len = 4;
  local_3c18.bIsWide = false;
  local_3c18._15_1_ = local_3c19;
  local_3c18.field0_0x0.Data = "Text";
  FVar20 = FNameHelper::FindOrStoreString(&local_3c18,FNAME_Add);
  uStack_4470 = 6;
  local_4478 = L"Text_0";
  uStack_3c00 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,6)));
  local_3c08 = "Text_0";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_40d0,(EFindName)&local_3c08);
  if ((local_40d0 != (undefined1  [8])((ulonglong)FVar20 & 0xffffffff | 0x100000000)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Text_0\") == FName(\"Text\", (0 + 1))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1058,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_446b = local_3beb;
  uStack_4469 = local_3be9;
  local_4478 = L"Text";
  uStack_4470 = 4;
  uStack_446c = 0;
  local_3be8._13_2_ = local_3beb;
  local_3be8.Len = 4;
  local_3be8.bIsWide = false;
  local_3be8._15_1_ = local_3be9;
  local_3be8.field0_0x0.Data = "Text";
  FVar20 = FNameHelper::FindOrStoreString(&local_3be8,FNAME_Add);
  uStack_4470 = 6;
  local_4478 = L"Text_1";
  uStack_3bd0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,6)));
  local_3bd8 = "Text_1";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_40c8,(EFindName)&local_3bd8);
  if ((local_40c8 != (undefined1  [8])((ulonglong)FVar20 & 0xffffffff | 0x200000000)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Text_1\") == FName(\"Text\", (1 + 1))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1059,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_446b = local_3bbb;
  uStack_4469 = local_3bb9;
  local_4478 = L"Text_1";
  uStack_4470 = 6;
  uStack_446c = 0;
  local_3bb8._13_2_ = local_3bbb;
  local_3bb8.Len = 6;
  local_3bb8.bIsWide = false;
  local_3bb8._15_1_ = local_3bb9;
  local_3bb8.field0_0x0.Data = "Text_1";
  FVar20 = FNameHelper::FindOrStoreString(&local_3bb8,FNAME_Add);
  uStack_4470 = 8;
  local_4478 = L"Text_1_0";
  uStack_3ba0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,8)));
  local_3ba8 = "Text_1_0";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_40c0,(EFindName)&local_3ba8);
  if ((local_40c0 != (undefined1  [8])((ulonglong)FVar20 & 0xffffffff | 0x100000000)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Text_1_0\") == FName(\"Text_1\", (0 + 1))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x105a,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_446b = local_3b8b;
  uStack_4469 = local_3b89;
  local_4478 = L"Text_0";
  uStack_4470 = 6;
  uStack_446c = 0;
  local_3b88._13_2_ = local_3b8b;
  local_3b88.Len = 6;
  local_3b88.bIsWide = false;
  local_3b88._15_1_ = local_3b89;
  local_3b88.field0_0x0.Data = "Text_0";
  FVar20 = FNameHelper::FindOrStoreString(&local_3b88,FNAME_Add);
  uStack_4470 = 8;
  local_4478 = L"Text_0_1";
  uStack_3b70 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,8)));
  local_3b78 = "Text_0_1";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_40b8,(EFindName)&local_3b78);
  if ((local_40b8 != (undefined1  [8])((ulonglong)FVar20 & 0xffffffff | 0x200000000)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Text_0_1\") == FName(\"Text_0\", (1 + 1))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x105b,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_446b = local_3b5b;
  uStack_4469 = local_3b59;
  local_4478 = L"Text_00";
  uStack_4470 = 7;
  uStack_446c = 0;
  local_3b58._13_2_ = local_3b5b;
  local_3b58.Len = 7;
  local_3b58.bIsWide = false;
  local_3b58._15_1_ = local_3b59;
  local_3b58.field0_0x0.Data = "Text_00";
  FVar20 = FNameHelper::FindOrStoreString(&local_3b58,FNAME_Add);
  local_4478 = L"Text_00";
  uStack_4470 = 7;
  uStack_3b40 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,7)));
  local_3b48 = "Text_00";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_40b0,(EFindName)&local_3b48);
  if ((local_40b0 != (undefined1  [8])((ulonglong)FVar20 & 0xffffffff)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Text_00\") == FName(\"Text_00\", 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x105c,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_446b = local_3b2b;
  uStack_4469 = local_3b29;
  local_4478 = L"Text_01";
  uStack_4470 = 7;
  uStack_446c = 0;
  local_3b28._13_2_ = local_3b2b;
  local_3b28.Len = 7;
  local_3b28.bIsWide = false;
  local_3b28._15_1_ = local_3b29;
  local_3b28.field0_0x0.Data = "Text_01";
  FVar20 = FNameHelper::FindOrStoreString(&local_3b28,FNAME_Add);
  local_4478 = L"Text_01";
  uStack_4470 = 7;
  uStack_3b10 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,7)));
  local_3b18 = "Text_01";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_40a8,(EFindName)&local_3b18);
  if ((local_40a8 != (undefined1  [8])((ulonglong)FVar20 & 0xffffffff)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Text_01\") == FName(\"Text_01\", 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x105d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_4470 = 0;
  local_4478 = L"Unused";
  lStack_3b00 = (ulonglong)CONCAT13(uStack_4469,CONCAT21(uStack_446b,uStack_446c)) << 0x20;
  local_3b08 = "Unused";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_40a0,(EFindName)&local_3b08);
  uStack_4470 = 0;
  local_4478 = L"";
  lStack_3af0 = (ulonglong)CONCAT13(uStack_4469,CONCAT21(uStack_446b,uStack_446c)) << 0x20;
  local_3af8 = "";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4098,(EFindName)&local_3af8);
  if ((local_4098 != local_40a0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"\") == FName(0, \"Unused\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1060,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3f18,4,"UsedUnused",FNAME_Add);
  uStack_4470 = 4;
  local_4478 = L"Used";
  uStack_3ae0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,4)));
  local_3ae8 = "Used";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4090,(EFindName)&local_3ae8);
  if (((FName)local_4090 != *pFVar21) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Used\") == FName(4, \"UsedUnused\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1061,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3f10,4,"Used",FNAME_Add);
  local_4478 = L"Used";
  uStack_4470 = 4;
  uStack_3ad0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,4)));
  local_3ad8 = "Used";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4088,(EFindName)&local_3ad8);
  if (((FName)local_4088 != *pFVar21) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Used\") == FName(4, \"Used\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1062,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3f08,6,"Used_01",FNAME_Add);
  uStack_4470 = 6;
  local_4478 = L"Used_0";
  uStack_3ac0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,6)));
  local_3ac8 = "Used_0";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4080,(EFindName)&local_3ac8);
  if (((FName)local_4080 != *pFVar21) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Used_0\") == FName(6, \"Used_01\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1063,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3f00,7,"Used_012",FNAME_Add);
  local_4478 = L"Used_01";
  uStack_4470 = 7;
  uStack_3ab0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,7)));
  local_3ab8 = "Used_01";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4078,(EFindName)&local_3ab8);
  if (((FName)local_4078 != *pFVar21) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Used_01\") == FName(7, \"Used_012\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1064,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3ef8,8,"Used_123456",FNAME_Add);
  uStack_4470 = 8;
  local_4478 = L"Used_123";
  uStack_3aa0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,8)));
  local_3aa8 = "Used_123";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4070,(EFindName)&local_3aa8);
  if (((FName)local_4070 != *pFVar21) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Used_123\") == FName(8, \"Used_123456\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1065,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3ef0,8,"Used_123_456",FNAME_Add);
  local_4478 = L"Used_123";
  uStack_4470 = 8;
  uStack_3a90 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,8)));
  local_3a98 = "Used_123";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4068,(EFindName)&local_3a98);
  if (((FName)local_4068 != *pFVar21) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Used_123\") == FName(8, \"Used_123_456\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1066,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3ee8,8,L"Used_123456",FNAME_Add);
  local_4478 = L"Used_123";
  uStack_4470 = 8;
  uStack_3a80 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,8)));
  local_3a88 = "Used_123";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4060,(EFindName)&local_3a88);
  if (((FName)local_4060 != *pFVar21) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Used_123\") == FName(8, L\"Used_123456\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1067,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3ee0,8,L"Used_123_456",FNAME_Add);
  local_4478 = L"Used_123";
  uStack_4470 = 8;
  uStack_3a70 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,8)));
  local_3a78 = "Used_123";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>(&local_3f58,(EFindName)&local_3a78);
  if (((FName)local_3f58.Str != *pFVar21) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Used_123\") == FName(8, L\"Used_123_456\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1068,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3ed8,0xf,L"Used_2147483646123",FNAME_Add);
  uStack_4470 = 0xf;
  local_4478 = L"Used_2147483646";
  uStack_3a60 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,0xf)));
  local_3a68 = "Used_2147483646";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_41e0,(EFindName)&local_3a68);
  if (((FName)local_41e0 != *pFVar21) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Used_2147483646\") == FName(15, L\"Used_2147483646123\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1069,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3ed0,0xf,L"Used_2147483647123",FNAME_Add);
  uStack_4470 = 0xf;
  local_4478 = L"Used_2147483647";
  uStack_3a50 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,0xf)));
  local_3a58 = "Used_2147483647";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_41d8,(EFindName)&local_3a58);
  if (((FName)local_41d8 != *pFVar21) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Used_2147483647\") == FName(15, L\"Used_2147483647123\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x106a,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3ec8,0xf,L"Used_2147483648123",FNAME_Add);
  uStack_4470 = 0xf;
  local_4478 = L"Used_2147483648";
  uStack_3a40 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,0xf)));
  local_3a48 = "Used_2147483648";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_41d0,(EFindName)&local_3a48);
  if (((FName)local_41d0 != *pFVar21) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(\"Used_2147483648\") == FName(15, L\"Used_2147483648123\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x106b,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ::FString::FString(&local_4448,"Wide ");
  uVar13 = local_4448.Data.ArrayNum - 1U;
  if (local_4448.Data.ArrayNum == 0) {
    uVar13 = uVar33;
  }
  if ((int)uVar13 < 5) {
    uVar13 = uVar33;
    if (local_4448.Data.ArrayNum != 0) {
      uVar13 = local_4448.Data.ArrayNum - 1U;
    }
    local_44a0 = (FNameAnsiStringView *)CONCAT44(local_44a0._4_4_,uVar13);
    local_44a8 = (FNameAnsiStringView *)CONCAT44(local_44a8._4_4_,4);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x107,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(wchar_t *)(local_4448.Data.AllocatorInstance.Data + 8) = L'\xea60';
  FVar29.Data = (FScriptContainerElement *)L"";
  if (local_4448.Data.ArrayNum != 0) {
    FVar29.Data = local_4448.Data.AllocatorInstance.Data;
  }
  FName(&local_4330,(wchar_t *)FVar29.Data);
  pFVar18 = ResolveEntry(local_4330.ComparisonIndex);
  FNameEntry::GetPlainNameString(pFVar18,&local_4048);
  if (local_4048.Data.ArrayNum == local_4448.Data.ArrayNum) {
    bVar9 = bVar41;
    if (1 < local_4048.Data.ArrayNum) {
      iVar14 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)local_4048.Data.AllocatorInstance.Data,
                          (wchar_t *)local_4448.Data.AllocatorInstance.Data);
      bVar9 = iVar14 != 0;
    }
  }
  else {
    bVar9 = local_4048.Data.ArrayNum + local_4448.Data.ArrayNum != 1;
  }
  if (local_4048.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4048.Data.AllocatorInstance.Data);
  }
  if ((bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("WideName.GetPlainNameString() == Wide",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1071,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar29.Data = (FScriptContainerElement *)L"";
  if (local_4448.Data.ArrayNum != 0) {
    FVar29.Data = local_4448.Data.AllocatorInstance.Data;
  }
  pFVar21 = FName(&local_3ec0,(wchar_t *)FVar29.Data);
  pFVar18 = ResolveEntry((FNameEntryId)(pFVar21->ComparisonIndex).Value);
  FNameEntry::GetPlainNameString(pFVar18,&local_4038);
  if (local_4038.Data.ArrayNum == local_4448.Data.ArrayNum) {
    bVar9 = bVar41;
    if (1 < local_4038.Data.ArrayNum) {
      iVar14 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)local_4038.Data.AllocatorInstance.Data,
                          (wchar_t *)local_4448.Data.AllocatorInstance.Data);
      bVar9 = iVar14 != 0;
    }
  }
  else {
    bVar9 = local_4038.Data.ArrayNum + local_4448.Data.ArrayNum != 1;
  }
  if (local_4038.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4038.Data.AllocatorInstance.Data);
  }
  if ((bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FName(*Wide).GetPlainNameString() == Wide",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1072,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar29.Data = (FScriptContainerElement *)L"";
  if (local_4448.Data.ArrayNum != 0) {
    FVar29.Data = local_4448.Data.AllocatorInstance.Data;
  }
  pFVar21 = FName(local_3e50,(wchar_t *)FVar29.Data);
  uVar13 = ToStringInternal(pFVar21,local_858,0x40b);
  iVar14 = local_4448.Data.ArrayNum;
  if (uVar13 == 5) {
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_4448.Data.ArrayNum != 0) {
      FVar29.Data = local_4448.Data.AllocatorInstance.Data;
    }
    iVar16 = wcscmp(local_858,(wchar_t *)FVar29.Data);
    if (iVar16 != 0) goto LAB_141a78ed8;
  }
  else {
LAB_141a78ed8:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("FName(*Wide).ToString(Buffer) == 5 && !FCString::Strcmp(Buffer, *Wide)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0x1073,L"");
    iVar14 = local_4448.Data.ArrayNum;
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar13 = iVar14 - 1;
  if (iVar14 == 0) {
    uVar13 = uVar17;
  }
  uVar17 = GetStringLength(&local_4330);
  if ((uVar13 != uVar17) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Wide.Len() == WideName.GetStringLength()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1074,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ::FString::ChrN(&local_4230,1000,L'\xea60');
  FVar29.Data = (FScriptContainerElement *)L"";
  if (local_4230.Data.ArrayNum != 0) {
    FVar29.Data = local_4230.Data.AllocatorInstance.Data;
  }
  pFVar21 = FName(&local_3eb8,(wchar_t *)FVar29.Data);
  pFVar18 = ResolveEntry((FNameEntryId)(pFVar21->ComparisonIndex).Value);
  FNameEntry::GetPlainNameString(pFVar18,&local_4028);
  if (local_4028.Data.ArrayNum == local_4230.Data.ArrayNum) {
    if (1 < local_4028.Data.ArrayNum) {
      iVar14 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)local_4028.Data.AllocatorInstance.Data,
                          (wchar_t *)local_4230.Data.AllocatorInstance.Data);
      bVar41 = iVar14 != 0;
    }
  }
  else {
    bVar41 = local_4028.Data.ArrayNum + local_4230.Data.ArrayNum != 1;
  }
  if (local_4028.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4028.Data.AllocatorInstance.Data);
  }
  if ((bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(*WideLong).GetPlainNameString() == WideLong",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x1076,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (Once != false) {
    pFVar21 = FName(&local_3eb0,"UniqueUnicorn!!",FNAME_Find);
    if ((*pFVar21 != (FName)0x0) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("FName(\"UniqueUnicorn!!\", FNAME_Find) == FName()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                            ,0x107d,L""), bVar41)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FName(&local_43e8,"UniqueUnicorn!!",FNAME_Add);
    pFVar21 = FName(&local_3ea8,"UniqueUnicorn!!",FNAME_Find);
    if ((*pFVar21 != local_43e8) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("FName(\"UniqueUnicorn!!\", FNAME_Find) == UniqueName",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                            ,0x1081,L""), bVar41)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar13 = 0;
    local_4478 = L"UniqueUnicorn!!";
    wVar10 = L'\0';
    pwVar26 = L"UniqueUnicorn!!";
    uVar39 = uVar37;
    do {
      pwVar30 = pwVar26;
      pwVar26 = pwVar30 + 1;
      uVar17 = (uint)uVar39 | (uint)(ushort)wVar10;
      uVar39 = (ulonglong)uVar17;
      wVar10 = *pwVar26;
    } while (wVar10 != L'\0');
    uStack_446c = (uVar17 & 0xffffff80) != 0;
    uStack_4470 = (uint)((longlong)(pwVar30 + -0xa83733e3) >> 1);
    uStack_3a30 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,uStack_4470)));
    local_3a38 = L"UniqueUnicorn!!";
    FNameHelper::MakeDetectNumber<FWideStringViewWithWidth>
              ((FWideStringViewWithWidth *)local_41c8,(EFindName)&local_3a38);
    if (((FName)local_41c8 != local_43e8) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("FName(L\"UniqueUnicorn!!\", FNAME_Find) == UniqueName",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                            ,0x1082,L""), bVar41)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar21 = FName(&local_3ea0,"UNIQUEUNICORN!!",FNAME_Find);
    if ((*pFVar21 != local_43e8) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("FName(\"UNIQUEUNICORN!!\", FNAME_Find) == UniqueName",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                            ,0x1083,L""), bVar41)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_4478 = L"UNIQUEUNICORN!!";
    pwVar26 = L"UNIQUEUNICORN!!";
    uVar39 = uVar37;
    do {
      pwVar30 = pwVar26;
      pwVar26 = pwVar30 + 1;
      uVar17 = (uint)uVar39 | uVar13;
      uVar39 = (ulonglong)uVar17;
      wVar10 = *pwVar26;
      uVar13 = (uint)(ushort)wVar10;
    } while (wVar10 != L'\0');
    uStack_446c = (uVar17 & 0xffffff80) != 0;
    uStack_4470 = (uint)((longlong)(pwVar30 + -0xa8373433) >> 1);
    uStack_3a20 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,uStack_4470)));
    local_3a28 = L"UNIQUEUNICORN!!";
    FNameHelper::MakeDetectNumber<FWideStringViewWithWidth>
              ((FWideStringViewWithWidth *)local_41c0,(EFindName)&local_3a28);
    if (((FName)local_41c0 != local_43e8) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("FName(L\"UNIQUEUNICORN!!\", FNAME_Find) == UniqueName",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                            ,0x1084,L""), bVar41)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar21 = FName(&local_3e98,"uniqueunicorn!!",FNAME_Find);
    if ((*pFVar21 != local_43e8) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("FName(\"uniqueunicorn!!\", FNAME_Find) == UniqueName",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                            ,0x1085,L""), bVar41)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    Once = false;
  }
  uStack_4470 = 4;
  local_4478 = L"FooB";
  uStack_3a10 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,4)));
  local_3a18 = "FooB";
  local_4468.Data = (FScriptContainerElement *)0x0;
  local_4460 = 0;
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>(&local_4370,(EFindName)&local_3a18);
  if (local_4468.Data <= &local_4370) {
    if (&local_4370 < (FNameAnsiStringView *)(local_4468.Data + (longlong)local_4460._4_4_ * 8)) {
      local_4490 = (longlong)(int)local_4460;
      local_4488 = 8;
      local_44a8 = &local_4370;
      local_44a0 = (FNameAnsiStringView *)local_4468.Data;
      local_4498 = (longlong)local_4460._4_4_;
      bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar41) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar14 = (int)local_4460;
  if ((int)local_4460 == local_4460._4_4_) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_4468,(int *)((longlong)&local_4460 + 4));
  }
  uStack_4470 = 7;
  local_4478 = L"FooABCD";
  uStack_3a00 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,7)));
  *(char **)(local_4468.Data + (longlong)iVar14 * 8) = local_4370.Str;
  local_3a08 = "FooABCD";
  local_4460._0_4_ = iVar14 + 1;
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_43d8,(EFindName)&local_3a08);
  if ((local_4468.Data <= (FNameAnsiStringView *)local_43d8) &&
     ((FScriptContainerElement *)local_43d8 < local_4468.Data + (longlong)local_4460._4_4_ * 8)) {
    local_4490 = (longlong)(int)local_4460;
    local_4488 = 8;
    local_44a8 = (FNameAnsiStringView *)local_43d8;
    local_44a0 = (FNameAnsiStringView *)local_4468.Data;
    local_4498 = (longlong)local_4460._4_4_;
    bVar41 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar41) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((int)local_4460 == local_4460._4_4_) {
    local_4460._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_4468,(int *)((longlong)&local_4460 + 4));
  }
  uStack_4470 = 6;
  local_4478 = L"FooABC";
  uStack_39f0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,6)));
  *(undefined1 (*) [8])(local_4468.Data + (longlong)(int)local_4460 * 8) = local_43d8;
  local_39f8 = "FooABC";
  local_4460._0_4_ = (int)local_4460 + 1;
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_43d0,(EFindName)&local_39f8);
  if ((local_4468.Data <= (FNameAnsiStringView *)local_43d0) &&
     ((FScriptContainerElement *)local_43d0 < local_4468.Data + (longlong)local_4460._4_4_ * 8)) {
    local_4490 = (longlong)(int)local_4460;
    local_4488 = 8;
    local_44a8 = (FNameAnsiStringView *)local_43d0;
    local_44a0 = (FNameAnsiStringView *)local_4468.Data;
    local_4498 = (longlong)local_4460._4_4_;
    bVar41 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar41) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((int)local_4460 == local_4460._4_4_) {
    local_4460._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_4468,(int *)((longlong)&local_4460 + 4));
  }
  uStack_4470 = 5;
  local_4478 = L"FooAB";
  uStack_39e0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,5)));
  *(undefined1 (*) [8])(local_4468.Data + (longlong)(int)local_4460 * 8) = local_43d0;
  local_39e8 = "FooAB";
  local_4460._0_4_ = (int)local_4460 + 1;
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_43c8,(EFindName)&local_39e8);
  if ((local_4468.Data <= (FNameAnsiStringView *)local_43c8) &&
     ((FNameAnsiStringView *)local_43c8 <
      (FNameAnsiStringView *)(local_4468.Data + (longlong)local_4460._4_4_ * 8))) {
    local_4490 = (longlong)(int)local_4460;
    local_4488 = 8;
    local_44a0 = (FNameAnsiStringView *)local_4468.Data;
    local_44a8 = (FNameAnsiStringView *)local_43c8;
    local_4498 = (longlong)local_4460._4_4_;
    bVar41 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar41) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((int)local_4460 == local_4460._4_4_) {
    local_4460._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_4468,(int *)((longlong)&local_4460 + 4));
  }
  uStack_4470 = 4;
  local_4478 = L"FooA";
  uStack_39d0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,4)));
  *(undefined1 (*) [8])(local_4468.Data + (longlong)(int)local_4460 * 8) = local_43c8;
  local_39d8 = "FooA";
  local_4460._0_4_ = (int)local_4460 + 1;
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_43c0,(EFindName)&local_39d8);
  if ((local_4468.Data <= (FNameAnsiStringView *)local_43c0) &&
     ((FScriptContainerElement *)local_43c0 < local_4468.Data + (longlong)local_4460._4_4_ * 8)) {
    local_4490 = (longlong)(int)local_4460;
    local_4488 = 8;
    local_44a8 = (FNameAnsiStringView *)local_43c0;
    local_44a0 = (FNameAnsiStringView *)local_4468.Data;
    local_4498 = (longlong)local_4460._4_4_;
    bVar41 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar41) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((int)local_4460 == local_4460._4_4_) {
    local_4460._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_4468,(int *)((longlong)&local_4460 + 4));
  }
  uStack_4470 = 4;
  local_4478 = L"FooC";
  uStack_39c0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,4)));
  *(undefined1 (*) [8])(local_4468.Data + (longlong)(int)local_4460 * 8) = local_43c0;
  local_39c8 = "FooC";
  local_4460._0_4_ = (int)local_4460 + 1;
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_43b8,(EFindName)&local_39c8);
  if ((local_4468.Data <= (FNameAnsiStringView *)local_43b8) &&
     ((FScriptContainerElement *)local_43b8 < local_4468.Data + (longlong)local_4460._4_4_ * 8)) {
    local_4490 = (longlong)(int)local_4460;
    local_4488 = 8;
    local_44a8 = (FNameAnsiStringView *)local_43b8;
    local_44a0 = (FNameAnsiStringView *)local_4468.Data;
    local_4498 = (longlong)local_4460._4_4_;
    bVar41 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar41) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((int)local_4460 == local_4460._4_4_) {
    local_4460._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_4468,(int *)((longlong)&local_4460 + 4));
  }
  *(undefined1 (*) [8])(local_4468.Data + (longlong)(int)local_4460 * 8) = local_43b8;
  builtin_wcsncpy(local_868,L"Fooߐ",5);
  local_4460._0_4_ = (int)local_4460 + 1;
  FName((FName *)local_43b0,local_868);
  if ((local_4468.Data <= (FNameAnsiStringView *)local_43b0) &&
     ((FScriptContainerElement *)local_43b0 < local_4468.Data + (longlong)local_4460._4_4_ * 8)) {
    local_4490 = (longlong)(int)local_4460;
    local_4488 = 8;
    local_44a8 = (FNameAnsiStringView *)local_43b0;
    local_44a0 = (FNameAnsiStringView *)local_4468.Data;
    local_4498 = (longlong)local_4460._4_4_;
    bVar41 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar41) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar14 = (int)local_4460;
  if ((int)local_4460 == local_4460._4_4_) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_4468,(int *)((longlong)&local_4460 + 4));
  }
  local_4460 = CONCAT44(local_4460._4_4_,iVar14 + 1);
  ((FName *)(local_4468.Data + (longlong)iVar14 * 8))->ComparisonIndex =
       (FNameEntryId)local_43b0._0_4_;
  ((FName *)(local_4468.Data + (longlong)iVar14 * 8))->Number = local_43b0._4_4_;
  AlgoImpl::IntroSortInternal<FName,int,FIdentityFunctor,FNameLexicalLess>
            ((FName *)local_4468.Data,iVar14 + 1,local_4458,(FNameLexicalLess)local_4458);
  if ((int)local_4460 < 1) {
    local_44a8 = (FNameAnsiStringView *)0x0;
    local_44a0 = (FNameAnsiStringView *)(longlong)(int)local_4460;
    bVar41 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar41) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar41 = FNameHelper::EqualsString<char>(*(FName *)local_4468.Data,"FooA",4);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("Names[0] == \"FooA\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x1095,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_4460 < 2) {
    local_44a8 = (FNameAnsiStringView *)&DAT_00000001;
    local_44a0 = (FNameAnsiStringView *)(longlong)(int)local_4460;
    bVar41 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar41) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar41 = FNameHelper::EqualsString<char>(*(FName *)(local_4468.Data + 8),"FooAB",5);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("Names[1] == \"FooAB\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x1096,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_4460 < 3) {
    local_44a8 = (FNameAnsiStringView *)&DAT_00000002;
    local_44a0 = (FNameAnsiStringView *)(longlong)(int)local_4460;
    bVar41 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar41) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar41 = FNameHelper::EqualsString<char>
                     ((FName)((FNameAnsiStringView *)(local_4468.Data + 0x10))->Str,"FooABC",6);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("Names[2] == \"FooABC\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x1097,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_4460 < 4) {
    local_44a8 = (FNameAnsiStringView *)&DAT_00000003;
    local_44a0 = (FNameAnsiStringView *)(longlong)(int)local_4460;
    bVar41 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar41) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar41 = FNameHelper::EqualsString<char>(*(FName *)(local_4468.Data + 0x18),"FooABCD",7);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("Names[3] == \"FooABCD\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x1098,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_4460 < 5) {
    local_44a8 = (FNameAnsiStringView *)&DAT_00000004;
    local_44a0 = (FNameAnsiStringView *)(longlong)(int)local_4460;
    bVar41 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar41) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar41 = FNameHelper::EqualsString<char>
                     ((FName)((FNameAnsiStringView *)(local_4468.Data + 0x20))->Str,"FooB",4);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("Names[4] == \"FooB\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x1099,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_4460 < 6) {
    local_44a8 = (FNameAnsiStringView *)&DAT_00000005;
    local_44a0 = (FNameAnsiStringView *)(longlong)(int)local_4460;
    bVar41 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar41) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar41 = FNameHelper::EqualsString<char>(*(FName *)(local_4468.Data + 0x28),"FooC",4);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("Names[5] == \"FooC\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x109a,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_4460 < 7) {
    local_44a8 = (FNameAnsiStringView *)&DAT_00000006;
    local_44a0 = (FNameAnsiStringView *)(longlong)(int)local_4460;
    bVar41 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar41) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar29.Data = local_4468.Data;
  sVar22 = wcslen(local_868);
  bVar41 = FNameHelper::EqualsString<wchar_t>
                     ((FName)((FNameAnsiStringView *)(FVar29.Data + 0x30))->Str,local_868,
                      (int)sVar22);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("Names[6] == FooWide",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x109b,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)0x0,L"None",4);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName() == L\"None\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x109d,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)0x0,L"none",4);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName() == L\"none\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x109e,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)0x0,L"",0);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName() == L\"\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x109f,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_4010 = 0;
  local_4018 = 0;
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)0x0,(wchar_t *)0x0,0);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName() == FStringView()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10a0,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_4470 = 1;
  local_4478 = L"a";
  uStack_39b0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,1)));
  local_39b8 = &s_a;
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_41b8,(EFindName)&local_39b8);
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)local_41b8,L"a",1);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"a\") == L\"a\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10a1,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_4478 = L"a";
  uStack_4470 = 1;
  uStack_39a0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,1)));
  local_39a8 = &s_a;
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_41b0,(EFindName)&local_39a8);
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)local_41b0,L"A",1);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"a\") == L\"A\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10a2,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_4470 = 1;
  local_4478 = L"A";
  uStack_3990 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,1)));
  local_3998 = &s_A;
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_41a8,(EFindName)&local_3998);
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)local_41a8,L"a",1);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"A\") == L\"a\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10a3,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_4470 = 2;
  local_4478 = L"aa";
  uStack_3980 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,2)));
  local_3988 = "aa";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_41a0,(EFindName)&local_3988);
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)local_41a0,L"a",1);
  if ((bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"aa\") != L\"a\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10a4,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_4478 = L"a";
  uStack_4470 = 1;
  uStack_3970 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,1)));
  local_3978 = &s_a;
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4198,(EFindName)&local_3978);
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)local_4198,L"aa",2);
  if ((bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"a\") != L\"aa\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10a5,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_4478 = L"a";
  uStack_4470 = 1;
  uStack_3960 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,1)));
  local_3968 = &s_a;
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4190,(EFindName)&local_3968);
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)local_4190,L"aa",1);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"a\") == L\"aa\"_PrivateSV.Left(1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10a6,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_4478 = L"aa";
  uStack_4470 = 2;
  uStack_3950 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,2)));
  local_3958 = "aa";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4188,(EFindName)&local_3958);
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)local_4188,L"ab",2);
  if ((bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"aa\") != L\"ab\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10a7,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_4470 = 3;
  local_4478 = L"a_0";
  uStack_3940 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,3)));
  local_3948 = "a_0";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4180,(EFindName)&local_3948);
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)local_4180,L"a_0",3);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"a_0\") == L\"a_0\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10a8,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_4470 = 3;
  local_4478 = L"a_1";
  uStack_3930 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,3)));
  local_3938 = "a_1";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4178,(EFindName)&local_3938);
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)local_4178,L"a_0",3);
  if ((bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"a_1\") != L\"a_0\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10a9,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_4470 = 4;
  local_4478 = L"a_10";
  uStack_3920 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,4)));
  local_3928 = "a_10";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4170,(EFindName)&local_3928);
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)local_4170,L"a_10",4);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"a_10\") == L\"a_10\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10aa,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_4478 = L"a";
  uStack_4470 = 1;
  uStack_3910 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,1)));
  local_3918 = &s_a;
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4168,(EFindName)&local_3918);
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)local_4168,L"a_10",1);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"a\") == L\"a_10\"_PrivateSV.Left(1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10ab,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_4470 = 2;
  local_4478 = L"a_";
  uStack_3900 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,2)));
  local_3908 = "a_";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4160,(EFindName)&local_3908);
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)local_4160,L"a_10",2);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"a_\") == L\"a_10\"_PrivateSV.Left(2)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10ac,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_4478 = L"a_1";
  uStack_4470 = 3;
  uStack_38f0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,3)));
  local_38f8 = "a_1";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4158,(EFindName)&local_38f8);
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)local_4158,L"a_10",3);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"a_1\") == L\"a_10\"_PrivateSV.Left(3)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10ad,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_4470 = 0xc;
  local_4478 = L"a_2147483646";
  uStack_38e0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,0xc)));
  local_38e8 = "a_2147483646";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>
            ((FNameAnsiStringView *)local_4150,(EFindName)&local_38e8);
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)local_4150,L"a_2147483646",0xc);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"a_2147483646\") == L\"a_2147483646\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10ae,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_4470 = 0xc;
  local_4478 = L"a_2147483647";
  uStack_38d0 = CONCAT17(uStack_4469,CONCAT25(uStack_446b,CONCAT14(uStack_446c,0xc)));
  local_38d8 = "a_2147483647";
  FNameHelper::MakeDetectNumber<FNameAnsiStringView>(&local_4148,(EFindName)&local_38d8);
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)local_4148.Str,L"a_2147483647",0xc);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"a_2147483647\") == L\"a_2147483647\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10af,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3e90,"a_");
  bVar41 = FNameHelper::EqualsString<wchar_t>(*pFVar21,L"a_",2);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"a_\") == L\"a_\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10b0,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3e88,"_");
  bVar41 = FNameHelper::EqualsString<wchar_t>(*pFVar21,L"_",1);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"_\") == L\"_\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10b1,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3e80,"_3");
  bVar41 = FNameHelper::EqualsString<wchar_t>(*pFVar21,L"_3",2);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"_3\") == L\"_3\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10b2,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar41 = FNameHelper::EqualsString<wchar_t>((FName)0x0,L"_123",4);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName() == L\"_123\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10b3,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3e78,"_3");
  bVar41 = FNameHelper::EqualsString<wchar_t>(*pFVar21,L"None",4);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"_3\") == L\"None\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10b4,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3e70,"none_1");
  bVar41 = FNameHelper::EqualsString<wchar_t>(*pFVar21,L"none_1",6);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"none_1\") == L\"none_1\"_PrivateSV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10b5,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar6.Number = local_4330.Number;
  FVar6.ComparisonIndex.Value = local_4330.ComparisonIndex.Value;
  uVar13 = local_4448.Data.ArrayNum - 1;
  if (local_4448.Data.ArrayNum == 0) {
    uVar13 = uVar33;
  }
  bVar41 = FNameHelper::EqualsString<wchar_t>
                     (FVar6,(wchar_t *)local_4448.Data.AllocatorInstance.Data,uVar13);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("WideName == FStringView(Wide)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10b6,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3e68,"a");
  bVar41 = FNameHelper::EqualsString<char>(*pFVar21,"a",1);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"a\") == (\"a\"_PrivateASV)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10b7,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3e60,"a");
  bVar41 = FNameHelper::EqualsString<char>(*pFVar21,"A",1);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"a\") == (\"A\"_PrivateASV)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10b8,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = FName(&local_3e58,"A");
  bVar41 = FNameHelper::EqualsString<char>(*pFVar21,"b",1);
  if ((bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FName(\"A\") != (\"b\"_PrivateASV)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10b9,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FNameAutoTestTruncateHelper::TestInner<0>();
  FNameAutoTestTruncateHelper::TestInner<1>();
  FNameAutoTestTruncateHelper::TestInner<2>();
  FNameAutoTestTruncateHelper::TestInner<3>();
  FNameAutoTestTruncateHelper::TestInner<4>();
  FNameAutoTestTruncateHelper::TestInner<5>();
  FNameAutoTestTruncateHelper::TestInner<6>();
  FNameAutoTestTruncateHelper::TestInner<7>();
  FNameAutoTestTruncateHelper::TestInner<8>();
  FNameAutoTestTruncateHelper::TestInner<9>();
  FNameAutoTestTruncateHelper::TestInner<10>();
  FNameAutoTestTruncateHelper::TestInner<11>();
  FNameAutoTestTruncateHelper::TestInner<12>();
  FNameAutoTestTruncateHelper::TestInner<13>();
  FNameAutoTestTruncateHelper::TestInner<14>();
  FNameAutoTestTruncateHelper::TestInner<15>();
  FNameAutoTestTruncateHelper::TestInner<16>();
  FNameAutoTestTruncateHelper::TestInner<17>();
  CheckLazyName<char,4>((char (*) [4])"Hej");
  CheckLazyName<char,4>((char (*) [4])"hej");
  CheckLazyName<char,4>((char (*) [4])"HEJ");
  CheckLazyName<char8_t,4>((uchar (*) [4])"Hej");
  CheckLazyName<wchar_t,4>((wchar_t (*) [4])L"Hej");
  CheckLazyName<char,6>((char (*) [6])"Hej_0");
  CheckLazyName<char,7>((char (*) [7])"Hej_00");
  CheckLazyName<char,6>((char (*) [6])"Hej_1");
  CheckLazyName<char,7>((char (*) [7])"Hej_01");
  CheckLazyName<char,7>((char (*) [7])"Hej_-1");
  CheckLazyName<char,7>((char (*) [7])"Hej__0");
  CheckLazyName<char,15>((char (*) [15])"Hej_2147483646");
  CheckLazyName<char,15>((char (*) [15])"Hej_2147483647");
  CheckLazyName<char,8>((char (*) [8])"Hej_123");
  CheckLazyName<char,5>((char (*) [5])"None");
  CheckLazyName<char,5>((char (*) [5])&s_none);
  CheckLazyName<char,7>((char (*) [7])"None_0");
  CheckLazyName<char,7>((char (*) [7])"None_1");
  local_4008.Either.AnsiLiteral = "Hej";
  local_4370.Len = 3;
  local_4008.Number =
       UE::Core::Private::ParseNumberFromName<char8_t>((uchar *)"Hej",&local_4370.Len);
  local_4008.LiteralType = Utf8Literal;
  local_3ff8.Either.AnsiLiteral = "Hej";
  local_4360[0] = 3;
  local_3ff8.Number = UE::Core::Private::ParseNumberFromName<char>("Hej",local_4360);
  local_3ff8.LiteralType = AnsiLiteral;
  bVar41 = FLazyName::UEOpEquals(&local_3ff8,&local_4008);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FLazyName(\"Hej\") == FLazyName(u8\"Hej\")",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10d1,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_3fe8.Either.AnsiLiteral = "Hej";
  local_4358[0] = 3;
  local_3fe8.Number = UE::Core::Private::ParseNumberFromName<wchar_t>(L"Hej",local_4358);
  local_3fe8.LiteralType = WideLiteral;
  local_3fd8.Either.AnsiLiteral = "Hej";
  local_4350[0] = 3;
  local_3fd8.Number = UE::Core::Private::ParseNumberFromName<char>("Hej",local_4350);
  local_3fd8.LiteralType = AnsiLiteral;
  bVar41 = FLazyName::UEOpEquals(&local_3fd8,&local_3fe8);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FLazyName(\"Hej\") == FLazyName(L\"Hej\")",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10d2,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_3fc8.Either.AnsiLiteral = "Hej";
  local_4348[0] = 3;
  local_3fc8.Number = UE::Core::Private::ParseNumberFromName<char>("Hej",local_4348);
  local_3fc8.LiteralType = AnsiLiteral;
  local_3fb8.Either.AnsiLiteral = "Hej";
  local_4340[0] = 3;
  local_3fb8.Number = UE::Core::Private::ParseNumberFromName<char8_t>((uchar *)"Hej",local_4340);
  local_3fb8.LiteralType = Utf8Literal;
  bVar41 = FLazyName::UEOpEquals(&local_3fb8,&local_3fc8);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FLazyName(u8\"Hej\") == FLazyName(\"Hej\")",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10d3,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_3fa8.Either.AnsiLiteral = "Hej";
  local_4328[0] = 3;
  local_3fa8.Number = UE::Core::Private::ParseNumberFromName<wchar_t>(L"Hej",local_4328);
  local_3fa8.LiteralType = WideLiteral;
  local_3f98.Either.AnsiLiteral = "Hej";
  local_4338[0] = 3;
  local_3f98.Number = UE::Core::Private::ParseNumberFromName<char8_t>((uchar *)"Hej",local_4338);
  local_3f98.LiteralType = Utf8Literal;
  bVar41 = FLazyName::UEOpEquals(&local_3f98,&local_3fa8);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FLazyName(u8\"Hej\") == FLazyName(L\"Hej\")",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10d4,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_3f88.Either.AnsiLiteral = "Hej";
  local_4320.Len = 3;
  local_3f88.Number = UE::Core::Private::ParseNumberFromName<char>("Hej",&local_4320.Len);
  local_3f88.LiteralType = AnsiLiteral;
  local_3f78.Either.AnsiLiteral = "Hej";
  local_4310[0] = 3;
  local_3f78.Number = UE::Core::Private::ParseNumberFromName<wchar_t>(L"Hej",local_4310);
  local_3f78.LiteralType = WideLiteral;
  bVar41 = FLazyName::UEOpEquals(&local_3f78,&local_3f88);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FLazyName(L\"Hej\") == FLazyName(\"Hej\")",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10d5,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_3f68.Either.AnsiLiteral = "Hej";
  local_4308[0] = 3;
  local_3f68.Number = UE::Core::Private::ParseNumberFromName<char8_t>((uchar *)"Hej",local_4308);
  local_3f68.LiteralType = Utf8Literal;
  local_43a8.Either.AnsiLiteral = "Hej";
  local_4300[0] = 3;
  local_43a8.Number = UE::Core::Private::ParseNumberFromName<wchar_t>(L"Hej",local_4300);
  local_43a8.LiteralType = WideLiteral;
  bVar41 = FLazyName::UEOpEquals(&local_43a8,&local_3f68);
  if ((!bVar41) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("FLazyName(L\"Hej\") == FLazyName(u8\"Hej\")",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10d6,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TestNameBatch();
  local_898[0] = 0;
  local_43e0.Data = (atomic<unsigned___int64_*>)0x0;
  puVar36 = local_898;
  local_898[1] = 3;
  local_898[2] = 0x22;
  local_898[3] = 0x23;
  local_898[4] = 0x35;
  local_898[5] = 0x41;
  local_898[6] = 0x20b;
  local_898[7] = 0x216;
  local_898[8] = 0x28e;
  local_898[9] = 0x3e9;
  local_898[10] = 0x3ff;
  do {
    uVar13 = *puVar36;
    uVar39 = 1L << ((byte)uVar13 & 0x3f);
    puVar23 = TNameAtomicBitSet<1024>::GetBuffer(&local_43e0);
    puVar23 = puVar23 + (uVar13 >> 6);
    uVar24 = *puVar23;
    do {
      LOCK();
      uVar25 = *puVar23;
      bVar41 = uVar24 == uVar25;
      if (bVar41) {
        *puVar23 = uVar24 | uVar39;
        uVar25 = uVar24;
      }
      UNLOCK();
      uVar24 = uVar25;
    } while (!bVar41);
    if (((uVar39 & uVar25) != 0) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("bWasSet == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                            ,0x10f7,L""), bVar41)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar36 = puVar36 + 1;
  } while (puVar36 != local_898 + 0xb);
  puVar23 = TNameAtomicBitSet<1024>::GetBuffer(&local_43e0);
  uVar24 = *puVar23;
  do {
    LOCK();
    uVar25 = *puVar23;
    bVar41 = uVar24 == uVar25;
    if (bVar41) {
      *puVar23 = uVar24 | 0x400000000;
      uVar25 = uVar24;
    }
    UNLOCK();
    uVar24 = uVar25;
  } while (!bVar41);
  if (((uVar25 & 0x400000000) == 0) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("b32WasSet",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x10fb,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((local_43e0.Data != (atomic<unsigned___int64_*>)0x0) &&
     (aVar1 = local_43e0.Data + 0x80, uVar39 = uVar37, TVar40.Data = local_43e0.Data,
     local_43e0.Data != aVar1)) {
    do {
      uVar3 = *(ulonglong *)TVar40.Data;
      uVar13 = 0;
      uVar35 = 1;
      local_4148._8_8_ = uVar3;
      do {
        if ((uVar3 & uVar35) != 0) {
          if (((int)uVar39 + uVar13 != local_898[uVar37]) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index == SetBits[Expected]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                  ,0x1100,L""), bVar41)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar37 = (ulonglong)((int)uVar37 + 1);
        }
        uVar13 = uVar13 + 1;
        uVar35 = uVar35 << 1 | (ulonglong)((longlong)uVar35 < 0);
      } while (uVar13 < 0x40);
      uVar39 = (ulonglong)((int)uVar39 + 0x40);
      TVar40.Data = TVar40.Data + 8;
    } while (TVar40.Data != aVar1);
    if ((int)uVar37 == 0xb) goto LAB_141a7adfe;
  }
  bVar41 = ::FDebug::CheckVerifyFailedImpl2
                     ("Expected == (sizeof(UEArrayCountHelper(SetBits)) - 1)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                      ,0x1103,L"");
  if (bVar41) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_141a7adfe:
  puVar23 = TNameAtomicBitSet<1024>::GetBuffer(&local_43e0);
  uVar24 = puVar23[0xf];
  do {
    LOCK();
    uVar25 = puVar23[0xf];
    bVar41 = uVar24 == uVar25;
    if (bVar41) {
      puVar23[0xf] = uVar24 & 0x7fffffffffffffff;
      uVar25 = uVar24;
    }
    UNLOCK();
    uVar24 = uVar25;
  } while (!bVar41);
  if ((-1 < (longlong)uVar25) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("b1023WasSet == true",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                          ,0x1106,L""), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((local_43e0.Data != (atomic<unsigned___int64_*>)0x0) &&
     (aVar1 = local_43e0.Data + 0x80, local_43e0.Data != aVar1)) {
    iVar14 = 0;
    TVar40.Data = local_43e0.Data;
    do {
      uVar37 = *(ulonglong *)TVar40.Data;
      uVar13 = 0;
      uVar39 = 1;
      local_4138 = uVar37;
      do {
        if ((((uVar37 & uVar39) != 0) && (iVar14 + uVar13 == 0x3ff)) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index != 1023",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                ,0x1109,L""), bVar41)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = uVar13 + 1;
        uVar39 = uVar39 << 1 | (ulonglong)((longlong)uVar39 < 0);
      } while (uVar13 < 0x40);
      iVar14 = iVar14 + 0x40;
      TVar40.Data = TVar40.Data + 8;
    } while (TVar40.Data != aVar1);
  }
  if ((FNameAnsiStringView *)local_4468.Data != (FNameAnsiStringView *)0x0) {
    FMemory::Free(local_4468.Data);
  }
  if (local_4230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4230.Data.AllocatorInstance.Data);
  }
  if (local_4448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4448.Data.AllocatorInstance.Data);
  }
  return;
}

// Compare @ 141a7c890

int __thiscall FName::Compare(FName *this,FName *param_1)

{
  FNameEntryId FVar1;
  FNameEntryId FVar2;
  int iVar3;
  
  FVar1.Value = (param_1->ComparisonIndex).Value;
  FVar2.Value = (this->ComparisonIndex).Value;
  if (FVar2.Value == FVar1.Value) {
    return this->Number - param_1->Number;
  }
  iVar3 = CompareDifferentIdsAlphabetically<1>(FVar2,FVar1);
  return iVar3;
}

// DebugDump @ 141a7d370

TArray<FNameEntry_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FName::DebugDump(TArray<FNameEntry_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FLowLevelMemTracker *this;
  uchar *this_00;
  
  if (bNamePoolInitialized) {
    this_00 = NamePoolData;
  }
  else {
    this_00 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(this);
  }
  FNamePool::DebugDump((FNamePool *)this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// DisplayHash @ 141a7df90

void __cdecl FName::DisplayHash(FOutputDevice *param_1)

{
  FLowLevelMemTracker *this;
  uchar *this_00;
  
  if (bNamePoolInitialized) {
    this_00 = NamePoolData;
  }
  else {
    this_00 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(this);
  }
  FNamePool::LogStats((FNamePool *)this_00,param_1);
  return;
}

// Equals @ 141a7e5c0

bool __cdecl FName::Equals(FName param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  
  iVar2 = 0;
  if (param_2 != (char *)0x0) {
    sVar3 = strlen(param_2);
    iVar2 = (int)sVar3;
  }
  bVar1 = FNameHelper::EqualsString<char>(param_1,param_2,iVar2);
  return bVar1;
}

// Equals @ 141a7e600

bool __cdecl FName::Equals(FName param_1,wchar_t *param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  
  iVar2 = 0;
  if (param_2 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_2);
    iVar2 = (int)sVar3;
  }
  bVar1 = FNameHelper::EqualsString<wchar_t>(param_1,param_2,iVar2);
  return bVar1;
}

// Equals @ 141a7e640

bool __cdecl FName::Equals(FName param_1,TStringView<char> *param_2)

{
  bool bVar1;
  
  bVar1 = FNameHelper::EqualsString<char>(param_1,param_2->DataPtr,param_2->Size);
  return bVar1;
}

// Equals @ 141a7e660

bool __cdecl FName::Equals(FName param_1,TStringView<wchar_t> *param_2)

{
  bool bVar1;
  
  bVar1 = FNameHelper::EqualsString<wchar_t>(param_1,param_2->DataPtr,param_2->Size);
  return bVar1;
}

// GetComparisonNameEntry @ 141a809f0

FNameEntry * __thiscall FName::GetComparisonNameEntry(FName *this)

{
  FNameEntry *pFVar1;
  
  pFVar1 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  return pFVar1;
}

// GetDisplayNameEntry @ 141a80a70

FNameEntry * __thiscall FName::GetDisplayNameEntry(FName *this)

{
  FNameEntry *pFVar1;
  
  pFVar1 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  return pFVar1;
}

// GetEntry @ 141a80a80

FNameEntry * __cdecl FName::GetEntry(FNameEntryId param_1)

{
  FLowLevelMemTracker *this;
  uchar *puVar1;
  
  if (bNamePoolInitialized) {
    puVar1 = NamePoolData;
  }
  else {
    puVar1 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(this);
  }
  return (FNameEntry *)
         ((((FNamePool *)puVar1)->Entries).Blocks[param_1.Value >> 0x10] +
         (param_1.Value & 0xffff) * 2);
}

// GetEntry @ 141a80a90

FNameEntry * __cdecl FName::GetEntry(EName param_1)

{
  uint uVar1;
  FLowLevelMemTracker *this;
  uchar *puVar2;
  
  if (bNamePoolInitialized) {
    puVar2 = NamePoolData;
  }
  else {
    puVar2 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(this);
  }
  uVar1 = ((FNamePool *)puVar2)->ENameToEntry[param_1].Value;
  return (FNameEntry *)
         ((((FNamePool *)puVar2)->Entries).Blocks[uVar1 >> 0x10] + (uVar1 & 0xffff) * 2);
}

// GetNameEntryMemoryEstimatedAvailable @ 141a80c20

long64 __cdecl FName::GetNameEntryMemoryEstimatedAvailable(void)

{
  FLowLevelMemTracker *this;
  uchar *puVar1;
  
  if (bNamePoolInitialized) {
    puVar1 = NamePoolData;
  }
  else {
    puVar1 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(this);
  }
  return (ulonglong)(~(((FNamePool *)puVar1)->Entries).CurrentBlock + 0x2000) << 0x11;
}

// GetNameEntryMemorySize @ 141a80c90

long64 __cdecl FName::GetNameEntryMemorySize(void)

{
  FNamePool *pFVar1;
  FLowLevelMemTracker *this;
  
  if (bNamePoolInitialized) {
    return (ulonglong)(NamePoolData._8_4_ + 1) << 0x11;
  }
  pFVar1 = FNamePool::FNamePool((FNamePool *)NamePoolData);
  bNamePoolInitialized = true;
  this = FLowLevelMemTracker::TrackerInstance;
  if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
    this = FLowLevelMemTracker::Construct();
  }
  FLowLevelMemTracker::FinishInitialise(this);
  return (ulonglong)((pFVar1->Entries).CurrentBlock + 1) << 0x11;
}

// GetNameTableMemorySize @ 141a80de0

long64 __cdecl FName::GetNameTableMemorySize(void)

{
  uint uVar1;
  FLowLevelMemTracker *pFVar2;
  FNamePoolShard<1> *pFVar3;
  ulonglong uVar4;
  uchar *puVar5;
  uchar *puVar6;
  
  puVar5 = NamePoolData;
  if (bNamePoolInitialized) {
    puVar6 = NamePoolData;
  }
  else {
    puVar6 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    pFVar2 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar2 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(pFVar2);
  }
  uVar1 = (((FNamePool *)puVar6)->Entries).CurrentBlock;
  if (bNamePoolInitialized == false) {
    puVar5 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    pFVar2 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar2 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(pFVar2);
  }
  uVar4 = 0;
  for (pFVar3 = ((FNamePool *)puVar5)->ComparisonShards;
      pFVar3 != (FNamePoolShard<1> *)((FNamePool *)puVar5)->TracedNames; pFVar3 = pFVar3 + 1) {
    uVar4 = (ulonglong)(uint)((int)uVar4 + 1 + *(int *)&pFVar3->field_0xc);
  }
  return (ulonglong)(uVar1 + 1) * 0x20000 + 0x26fc0 + uVar4 * 4;
}

// GetNumAnsiNames @ 141a80ec0

int __cdecl FName::GetNumAnsiNames(void)

{
  TNameAtomicBitSet<65536> *pTVar1;
  FLowLevelMemTracker *this;
  FNamePoolShard<1> *pFVar2;
  uchar *puVar3;
  FNamePoolShard<1> *pFVar4;
  int iVar5;
  int iVar6;
  
  if (bNamePoolInitialized) {
    puVar3 = NamePoolData;
  }
  else {
    puVar3 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(this);
  }
  pFVar2 = ((FNamePool *)puVar3)->ComparisonShards;
  iVar5 = 0;
  pTVar1 = ((FNamePool *)puVar3)->TracedNames;
  iVar6 = 0;
  pFVar4 = pFVar2;
  if (pFVar2 != (FNamePoolShard<1> *)pTVar1) {
    do {
      iVar6 = iVar6 + *(int *)&pFVar4->field_0x20 + *(int *)&pFVar4->field_0x28;
      pFVar4 = pFVar4 + 1;
    } while (pFVar4 != (FNamePoolShard<1> *)pTVar1);
    do {
      iVar5 = iVar5 + *(int *)&pFVar2->field_0x24;
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != (FNamePoolShard<1> *)pTVar1);
  }
  return iVar6 - iVar5;
}

// GetNumWideNames @ 141a80f70

int __cdecl FName::GetNumWideNames(void)

{
  int iVar1;
  FLowLevelMemTracker *this;
  FNamePoolShard<1> *pFVar2;
  uchar *puVar3;
  
  if (bNamePoolInitialized) {
    puVar3 = NamePoolData;
  }
  else {
    puVar3 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(this);
  }
  iVar1 = 0;
  for (pFVar2 = ((FNamePool *)puVar3)->ComparisonShards;
      pFVar2 != (FNamePoolShard<1> *)((FNamePool *)puVar3)->TracedNames; pFVar2 = pFVar2 + 1) {
    iVar1 = iVar1 + *(int *)&pFVar2->field_0x24;
  }
  return iVar1;
}

// GetPlainANSIString @ 141a81000

void __thiscall FName::GetPlainANSIString(FName *this,char (*param_1) [1024])

{
  code *pcVar1;
  bool bVar2;
  FNameEntry *pFVar3;
  
  pFVar3 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  if (pFVar3.bIsWide != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsWide()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0x99e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  memcpy(param_1,&pFVar3->field1_0x2,pFVar3.Len);
  (*param_1)[pFVar3.Len] = '\0';
  return;
}

// GetPlainNameString @ 141a81080

FString * __thiscall FName::GetPlainNameString(FName *this,FString *__return_storage_ptr__)

{
  FNameEntry *this_00;
  
  this_00 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  FNameEntry::GetPlainNameString(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPlainNameString @ 141a810b0

uint __thiscall FName::GetPlainNameString(FName *this,wchar_t (*param_1) [1024])

{
  FNameEntry *this_00;
  
  this_00 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  FNameEntry::GetName(this_00,param_1);
  return this_00.Len;
}

// GetPlainWIDEString @ 141a81290

void __thiscall FName::GetPlainWIDEString(FName *this,wchar_t (*param_1) [1024])

{
  FNameEntry *this_00;
  
  this_00 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  FNameEntry::GetWideName(this_00,param_1);
  return;
}

// GetStringLength @ 141a812e0

uint __thiscall FName::GetStringLength(FName *this)

{
  FNameEntry *pFVar1;
  int iVar2;
  uint uVar3;
  
  pFVar1 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  uVar3 = pFVar1.Len;
  if (this->Number != 0) {
    uVar3 = uVar3 + 2;
    for (iVar2 = this->Number - 1; 9 < iVar2; iVar2 = iVar2 / 10) {
      uVar3 = uVar3 + 1;
    }
  }
  return uVar3;
}

// IsValidGroupName @ 141a84cf0

bool __thiscall FName::IsValidGroupName(FName *this,FText *param_1,bool param_2)

{
  bool bVar1;
  FString local_18;
  
  ::FString::FString(&local_18,L"\\:*?\"<>|\' ,.&!~\n\r\t@#");
  bVar1 = IsValidXName(*this,&local_18,param_1,(FText *)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsValidObjectName @ 141a84d50

bool __thiscall FName::IsValidObjectName(FName *this,FText *param_1)

{
  bool bVar1;
  FString local_18;
  
  ::FString::FString(&local_18,L"\"\' ,/.:|&!~\n\r\t@#(){}[]=;^%$`");
  bVar1 = IsValidXName(*this,&local_18,param_1,(FText *)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsValidXName @ 141a84db0

bool __thiscall FName::IsValidXName(FName *this,FText *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,L"\"\' ,\n\r\t");
  bVar1 = IsValidXName(*this,pFVar2,param_1,(FText *)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsValidXName @ 141a84e10

bool __thiscall FName::IsValidXName(FName *this)

{
  bool bVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,L"\"\' ,\n\r\t");
  bVar1 = IsValidXName(*this,pFVar2,(FText *)0x0,(FText *)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsValidXName @ 141a84e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
FName::IsValidXName(TStringView<wchar_t> *param_1,FString *param_2,FText *param_3,FText *param_4)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  TRefCountPtr<ITextData> TVar11;
  ForElementType<FSetElementId> FVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  wchar_t *pwVar20;
  ForElementType<FSetElementId> FVar21;
  undefined1 auStack_2f8 [32];
  FText *local_2d8;
  FText *local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  TArray<FText,TSizedDefaultAllocator<32>_> local_2a8;
  undefined1 local_298;
  undefined1 local_297 [3];
  wchar_t local_294 [2];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_290
  ;
  FString local_280;
  FText *local_270;
  FString local_268;
  FText local_258;
  wchar_t local_248 [2];
  undefined1 local_244 [4];
  undefined1 local_240 [4];
  undefined1 local_23c [4];
  FText local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FFormatArgumentValue local_1f8;
  FFormatArgumentValue local_1d8;
  FFormatArgumentValue local_1b8;
  FText local_198;
  FText local_188;
  FText local_178;
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FTextFormat local_c8;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  FTextFormat local_a8;
  FTextFormat local_98;
  ForElementType<FSetElementId> local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  FVar15 = (ForElementType<FSetElementId>)0x0;
  local_294[0] = L'\0';
  local_294[1] = L'\0';
  if (param_1->Size != 0) {
    iVar16 = (param_2->Data).ArrayNum;
    if (1 < iVar16) {
      pFVar18 = (param_2->Data).AllocatorInstance.Data;
      local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_280.Data.ArrayNum = 0;
      local_280.Data.ArrayMax = 0;
      pFVar17 = pFVar18 + ((longlong)iVar16 + -1) * 2;
      local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a8.ArrayNum = 0;
      local_2a8.ArrayMax = 0;
      local_88 = (ForElementType<FSetElementId>)0x0;
      local_80 = 0;
      local_68 = 0;
      local_60 = 0;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = (ForElementType<FSetElementId>)0x0;
      local_40 = 0;
      FVar21 = FVar15;
      local_270 = param_3;
      do {
        while( true ) {
          if ((param_2->Data).ArrayNum != iVar16) {
            local_298 = 0;
            `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_298);
            FVar15 = local_88;
            FVar21 = local_48;
          }
          pFVar8 = local_270;
          if (pFVar18 == pFVar17) {
            iVar7 = local_2a8.ArrayNum;
            iVar16 = local_280.Data.ArrayNum + -1;
            if (local_280.Data.ArrayNum == 0) {
              iVar16 = 0;
            }
            if ((iVar16 < 1) && (local_2a8.ArrayNum < 1)) {
              bVar4 = true;
            }
            else {
              if (local_270 != (FText *)0x0) {
                pFVar9 = FText::FromString(&local_188,L", ");
                FText::Join(&local_238,pFVar9,&local_2a8);
                if (local_188.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
                }
                local_290.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_290.Pairs.ArrayNum = 0;
                local_290.Pairs.ArrayMax = 0;
                if (param_4 == (FText *)0x0) {
                  pFVar9 = FText::AsLocalizable_Advanced_LocText
                                     (&local_178,L"Core",L"NameDefaultErrorCtx",L"Name");
                  bVar3 = false;
                  bVar4 = true;
                  TVar11.Reference = local_258.TextData.Reference;
                }
                else {
                  TVar11.Reference = (param_4->TextData).Reference;
                  local_258.TextData.Reference = TVar11.Reference;
                  if (TVar11.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*TVar11.Reference + 8))(TVar11.Reference,local_244);
                  }
                  pFVar9 = &local_258;
                  local_258.Flags = param_4->Flags;
                  bVar3 = true;
                  bVar4 = false;
                }
                local_1f8.Type = Text;
                local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference =
                     (TRefCountPtr<ITextData>)(pFVar9->TextData).Reference;
                if (local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0
                   ) {
                  (**(code **)((longlong)
                               *(ITextData *)
                                local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference + 8))
                            (local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference,local_240)
                  ;
                }
                local_1f8.TextValue.field0_0x0.TypedValue.Flags = pFVar9->Flags;
                if ((local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference ==
                     (ITextData *)0x0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0xbd,
                                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                      ), bVar6)) {
                  pcVar2 = (code *)swi(3);
                  uVar5 = (*pcVar2)();
                  return (bool)uVar5;
                }
                ::FString::FString(&local_228,L"ErrorCtx");
                TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                ::Emplace<FString,FFormatArgumentValue>(&local_290,&local_228,&local_1f8);
                if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_228.Data.AllocatorInstance.Data);
                }
                if (local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0
                   ) {
                  (**(code **)((longlong)
                               *(ITextData *)
                                local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
                  )();
                }
                if ((bVar4) && (local_178.TextData.Reference != (ITextData *)0x0)) {
                  (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
                }
                if ((bVar3) && (TVar11.Reference != (ITextData *)0x0)) {
                  (**(code **)((longlong)*TVar11.Reference + 0x10))(TVar11.Reference);
                }
                if (0 < iVar7) {
                  local_1d8.Type = Text;
                  local_1d8.TextValue.field0_0x0.TypedValue.TextData.Reference =
                       (TRefCountPtr<ITextData>)
                       (TRefCountPtr<ITextData>)local_238.TextData.Reference;
                  if (local_238.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_238.TextData.Reference + 8))
                              (local_238.TextData.Reference,local_23c);
                  }
                  local_1d8.TextValue.field0_0x0.TypedValue.Flags = local_238.Flags;
                  if ((local_1d8.TextValue.field0_0x0.TypedValue.TextData.Reference ==
                       (ITextData *)0x0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsSet()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                         ,0xbd,
                                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    uVar5 = (*pcVar2)();
                    return (bool)uVar5;
                  }
                  ::FString::FString(&local_218,L"InvalidWhitespaceChars");
                  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                  ::Emplace<FString,FFormatArgumentValue>(&local_290,&local_218,&local_1d8);
                  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_218.Data.AllocatorInstance.Data);
                  }
                  if (local_1d8.TextValue.field0_0x0.TypedValue.TextData.Reference !=
                      (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *(ITextData *)
                                  local_1d8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                                0x10))();
                  }
                  pFVar9 = FText::AsLocalizable_Advanced_LocText
                                     (&local_158,L"Core",L"NameContainsInvalidWhitespaceCharacters",
                                      L"{ErrorCtx} may not contain whitespace characters ({InvalidWhitespaceChars})"
                                     );
                  pFVar10 = FTextFormat::FTextFormat(&local_a8,pFVar9,Default);
                  pFVar9 = FText::Format(&local_168,pFVar10,&local_290);
                  FText::operator=(pFVar8,pFVar9);
                  if (local_168.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
                  }
                  if (local_158.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
                  }
                }
                if (0 < iVar16) {
                  iVar16 = local_280.Data.ArrayNum;
                  uVar13 = (ulonglong)local_280.Data.ArrayNum;
                  local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_268.Data.ArrayNum = 0;
                  local_268.Data.ArrayMax = 0;
                  pFVar17 = local_280.Data.AllocatorInstance.Data + uVar13 * 2 + -2;
                  FVar19.Data = local_280.Data.AllocatorInstance.Data;
                  if (local_280.Data.ArrayNum == 0) {
                    pFVar17 = local_280.Data.AllocatorInstance.Data + uVar13 * 2;
                  }
                  while( true ) {
                    if ((int)uVar13 != iVar16) {
                      local_297[0] = 0;
                      `TCheckedPointerIterator<wchar_t,int,0>::operator!='::__l2::<lambda_1>::
                      operator()(local_297);
                    }
                    if (FVar19.Data == pFVar17) break;
                    bVar4 = FTextChar::IsWhitespace((uint)*(ushort *)FVar19.Data);
                    pwVar14 = L" U+%04X";
                    if (!bVar4) {
                      pwVar14 = L" %c";
                    }
                    ::FString::AppendfImpl(&local_268,pwVar14);
                    uVar13 = local_280.Data._8_8_ & 0xffffffff;
                    FVar19.Data = FVar19.Data + 2;
                  }
                  pFVar8 = FText::FromString(&local_148,&local_268);
                  local_1b8.Type = Text;
                  FText::FText((FText *)&local_1b8.TextValue,pFVar8);
                  pFVar8 = local_270;
                  if ((local_1b8.TextValue.field0_0x0.TypedValue.TextData.Reference ==
                       (ITextData *)0x0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsSet()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                         ,0xbd,
                                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    uVar5 = (*pcVar2)();
                    return (bool)uVar5;
                  }
                  ::FString::FString(&local_208,L"InvalidCharacters");
                  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                  ::Emplace<FString,FFormatArgumentValue>(&local_290,&local_208,&local_1b8);
                  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_208.Data.AllocatorInstance.Data);
                  }
                  if (local_1b8.TextValue.field0_0x0.TypedValue.TextData.Reference !=
                      (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *(ITextData *)
                                  local_1b8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                                0x10))();
                  }
                  if (local_148.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
                  }
                  pwVar20 = 
                  L"{ErrorCtx} may not contain whitespace characters ({InvalidWhitespaceChars}) or the following characters:{InvalidCharacters}"
                  ;
                  pwVar14 = L"NameContainsInvalidMixedCharacters";
                  bVar4 = iVar7 < 1;
                  pFVar9 = &local_108;
                  if (iVar7 < 1) {
                    pwVar20 = 
                    L"{ErrorCtx} may not contain the following characters:{InvalidCharacters}";
                    pwVar14 = L"NameContainsInvalidNonwhitespaceCharacters";
                    pFVar9 = &local_128;
                  }
                  pFVar9 = FText::AsLocalizable_Advanced_LocText(pFVar9,L"Core",pwVar14,pwVar20);
                  pFVar10 = &local_98;
                  if (0 < iVar7) {
                    pFVar10 = &local_c8;
                  }
                  pFVar10 = FTextFormat::FTextFormat(pFVar10,pFVar9,Default);
                  pFVar9 = &local_138;
                  if (0 < iVar7) {
                    pFVar9 = &local_118;
                  }
                  pFVar9 = FText::Format(pFVar9,pFVar10,&local_290);
                  FText::operator=(pFVar8,pFVar9);
                  if ((bVar4) && (local_138.TextData.Reference != (ITextData *)0x0)) {
                    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
                  }
                  if ((bVar4) && (local_128.TextData.Reference != (ITextData *)0x0)) {
                    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
                  }
                  if ((!bVar4) && (local_118.TextData.Reference != (ITextData *)0x0)) {
                    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
                  }
                  if ((!bVar4) && (local_108.TextData.Reference != (ITextData *)0x0)) {
                    (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
                  }
                  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_268.Data.AllocatorInstance.Data);
                  }
                }
                DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                          ((TTuple<FString,FFormatArgumentValue> *)
                           local_290.Pairs.AllocatorInstance.Data,local_290.Pairs.ArrayNum);
                if ((TTuple<FString,FFormatArgumentValue> *)local_290.Pairs.AllocatorInstance.Data
                    != (TTuple<FString,FFormatArgumentValue> *)0x0) {
                  FMemory::Free(local_290.Pairs.AllocatorInstance.Data);
                }
                FVar21 = local_48;
                if (local_238.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
                  FVar21 = local_48;
                }
              }
              bVar4 = false;
            }
            local_40 = 0;
            if (FVar21 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)FVar21);
            }
            TSparseArray<TSparseSetElement<wchar_t>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<wchar_t>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<wchar_t>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)&local_88);
            DestructItems<FText,int>((FText *)local_2a8.AllocatorInstance.Data,local_2a8.ArrayNum);
            if ((FText *)local_2a8.AllocatorInstance.Data != (FText *)0x0) {
              FMemory::Free(local_2a8.AllocatorInstance.Data);
            }
            if (local_280.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return bVar4;
            }
            FMemory::Free(local_280.Data.AllocatorInstance.Data);
            return bVar4;
          }
          wVar1 = *(wchar_t *)pFVar18;
          local_294[0] = wVar1;
          if ((int)local_80 != local_54) {
            FVar12 = (ForElementType<FSetElementId>)local_50;
            if (FVar21 != (ForElementType<FSetElementId>)0x0) {
              FVar12 = FVar21;
            }
            for (iVar7 = *(int *)((longlong)FVar12 +
                                 ((ulonglong)(local_40 - 1) & (ulonglong)(ushort)wVar1) * 4);
                iVar7 != -1;
                iVar7 = *(int *)((undefined1 *)((longlong)FVar15 + 4) + (longlong)iVar7 * 0xc)) {
              if (*(wchar_t *)((longlong)FVar15 + (longlong)iVar7 * 0xc) == wVar1)
              goto LAB_141a853b2;
            }
          }
          local_b8 = param_1->DataPtr;
          uStack_b0 = *(undefined8 *)&param_1->Size;
          pwVar14 = local_b8;
          if (local_b8 < local_b8 + (int)*(undefined8 *)&param_1->Size) break;
LAB_141a853b2:
          pFVar18 = pFVar18 + 2;
        }
        do {
          if (*pwVar14 == wVar1) {
            if ((int)((longlong)pwVar14 - (longlong)local_b8 >> 1) != -1) {
              if (wVar1 == L'\t') {
                pFVar8 = FText::AsLocalizable_Advanced_LocText
                                   (&local_198,L"Core",L"FNameTabName",L"tab");
                if (local_2a8.AllocatorInstance.Data <= pFVar8) {
                  if (pFVar8 < (FText *)(local_2a8.AllocatorInstance.Data +
                                        (longlong)local_2a8.ArrayMax * 0x10)) {
                    local_2c0 = (longlong)local_2a8.ArrayNum;
                    local_2b8 = 0x10;
                    local_2d0 = (FText *)local_2a8.AllocatorInstance.Data;
                    local_2d8 = pFVar8;
                    local_2c8 = (longlong)local_2a8.ArrayMax;
                    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar4) {
                      pcVar2 = (code *)swi(3);
                      uVar5 = (*pcVar2)();
                      return (bool)uVar5;
                    }
                  }
                }
                iVar7 = local_2a8.ArrayNum;
                if (local_2a8.ArrayNum == local_2a8.ArrayMax) {
                  iVar7 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
                }
                local_2a8.ArrayNum = iVar7 + 1;
                FText::FText((FText *)(local_2a8.AllocatorInstance.Data + (longlong)iVar7 * 0x10),
                             pFVar8);
                TVar11.Reference = local_198.TextData.Reference;
LAB_141a85381:
                if (TVar11.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*TVar11.Reference + 0x10))();
                }
              }
              else {
                if (wVar1 == L'\n') {
                  pFVar8 = FText::AsLocalizable_Advanced_LocText
                                     (&local_d8,L"Core",L"FNameLineFeedName",L"line feed [\\n]");
                  if (local_2a8.AllocatorInstance.Data <= pFVar8) {
                    if (pFVar8 < (FText *)(local_2a8.AllocatorInstance.Data +
                                          (longlong)local_2a8.ArrayMax * 0x10)) {
                      local_2c0 = (longlong)local_2a8.ArrayNum;
                      local_2b8 = 0x10;
                      local_2d0 = (FText *)local_2a8.AllocatorInstance.Data;
                      local_2d8 = pFVar8;
                      local_2c8 = (longlong)local_2a8.ArrayMax;
                      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        );
                      if (bVar4) {
                        pcVar2 = (code *)swi(3);
                        uVar5 = (*pcVar2)();
                        return (bool)uVar5;
                      }
                    }
                  }
                  iVar7 = local_2a8.ArrayNum;
                  if (local_2a8.ArrayNum == local_2a8.ArrayMax) {
                    iVar7 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x810,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
                  }
                  local_2a8.ArrayNum = iVar7 + 1;
                  FText::FText((FText *)(local_2a8.AllocatorInstance.Data + (longlong)iVar7 * 0x10),
                               pFVar8);
                  TVar11.Reference = local_d8.TextData.Reference;
                  goto LAB_141a85381;
                }
                if (wVar1 == L'\r') {
                  pFVar8 = FText::AsLocalizable_Advanced_LocText
                                     (&local_e8,L"Core",L"FNameCarriageReturnName",
                                      L"carriage return [\\r]");
                  if (local_2a8.AllocatorInstance.Data <= pFVar8) {
                    if (pFVar8 < (FText *)(local_2a8.AllocatorInstance.Data +
                                          (longlong)local_2a8.ArrayMax * 0x10)) {
                      local_2c0 = (longlong)local_2a8.ArrayNum;
                      local_2b8 = 0x10;
                      local_2d0 = (FText *)local_2a8.AllocatorInstance.Data;
                      local_2d8 = pFVar8;
                      local_2c8 = (longlong)local_2a8.ArrayMax;
                      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        );
                      if (bVar4) {
                        pcVar2 = (code *)swi(3);
                        uVar5 = (*pcVar2)();
                        return (bool)uVar5;
                      }
                    }
                  }
                  iVar7 = local_2a8.ArrayNum;
                  if (local_2a8.ArrayNum == local_2a8.ArrayMax) {
                    iVar7 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x810,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
                  }
                  local_2a8.ArrayNum = iVar7 + 1;
                  FText::FText((FText *)(local_2a8.AllocatorInstance.Data + (longlong)iVar7 * 0x10),
                               pFVar8);
                  TVar11.Reference = local_e8.TextData.Reference;
                  goto LAB_141a85381;
                }
                if (wVar1 == L' ') {
                  pFVar8 = FText::AsLocalizable_Advanced_LocText
                                     (&local_f8,L"Core",L"FNameSpaceName",L"space");
                  if (local_2a8.AllocatorInstance.Data <= pFVar8) {
                    if (pFVar8 < (FText *)(local_2a8.AllocatorInstance.Data +
                                          (longlong)local_2a8.ArrayMax * 0x10)) {
                      local_2c0 = (longlong)local_2a8.ArrayNum;
                      local_2b8 = 0x10;
                      local_2d0 = (FText *)local_2a8.AllocatorInstance.Data;
                      local_2d8 = pFVar8;
                      local_2c8 = (longlong)local_2a8.ArrayMax;
                      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        );
                      if (bVar4) {
                        pcVar2 = (code *)swi(3);
                        uVar5 = (*pcVar2)();
                        return (bool)uVar5;
                      }
                    }
                  }
                  iVar7 = local_2a8.ArrayNum;
                  if (local_2a8.ArrayNum == local_2a8.ArrayMax) {
                    iVar7 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x810,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
                  }
                  local_2a8.ArrayNum = iVar7 + 1;
                  FText::FText((FText *)(local_2a8.AllocatorInstance.Data + (longlong)iVar7 * 0x10),
                               pFVar8);
                  TVar11.Reference = local_f8.TextData.Reference;
                  goto LAB_141a85381;
                }
                ::FString::AppendChar(&local_280,wVar1);
              }
              TSet<wchar_t,DefaultKeyFuncs<wchar_t,0>,FDefaultSetAllocator>::
              Emplace<wchar_t_const_&>
                        ((TSet<wchar_t,DefaultKeyFuncs<wchar_t,0>,FDefaultSetAllocator> *)&local_88,
                         local_248,(bool *)local_294);
              FVar15 = local_88;
              FVar21 = local_48;
            }
            goto LAB_141a853b2;
          }
          pwVar14 = pwVar14 + 1;
        } while (pwVar14 < local_b8 + (int)*(undefined8 *)&param_1->Size);
        pFVar18 = pFVar18 + 2;
      } while( true );
    }
  }
  return true;
}

// IsValidXName @ 141a85960

bool __cdecl FName::IsValidXName(FString *param_1,FString *param_2,FText *param_3,FText *param_4)

{
  int iVar1;
  bool bVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  bVar2 = IsValidXName(&local_18,param_2,param_3,param_4);
  return bVar2;
}

// IsValidXName @ 141a859a0

bool __cdecl FName::IsValidXName(wchar_t *param_1,FString *param_2,FText *param_3,FText *param_4)

{
  bool bVar1;
  size_t sVar2;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    local_18.Size = (int)sVar2;
  }
  bVar1 = IsValidXName(&local_18,param_2,param_3,param_4);
  return bVar1;
}

// IsValidXName @ 141a85a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FName::IsValidXName(FName param_1,FString *param_2,FText *param_3,FText *param_4)

{
  bool bVar1;
  FNameEntry *this;
  undefined1 auStack_898 [32];
  TStringView<wchar_t> local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_898;
  local_868.Base = local_848;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.CurPos = local_848;
  local_868.End = local_32;
  this = ResolveEntry(param_1.ComparisonIndex.Value);
  FNameEntry::AppendNameToString(this,&local_868);
  if (param_1.Number != 0) {
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'_';
    local_868.CurPos = local_868.CurPos + 1;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"%d");
  }
  local_878.DataPtr = local_868.Base;
  local_878.Size = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
  bVar1 = IsValidXName(&local_878,param_2,param_3,param_4);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return bVar1;
}

// IsWithinBounds @ 141a85b20

bool __cdecl FName::IsWithinBounds(FNameEntryId param_1)

{
  return param_1.Value >> 0x10 < NamePoolData._8_4_ + 1;
}

// NameToDisplayString @ 141a8bf80

FString * __cdecl
FName::NameToDisplayString(FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FString *pFVar14;
  size_t sVar15;
  ulonglong uVar16;
  wchar_t _C;
  wchar_t *_Str;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  uint uVar20;
  wchar_t **ppwVar21;
  bool bVar22;
  bool bVar23;
  undefined1 local_f0 [4];
  uint local_ec;
  int local_e8;
  uint local_e4;
  int local_e0;
  FScriptContainerElement *local_d8;
  longlong local_d0;
  wchar_t *local_c8;
  wchar_t *local_c0 [4];
  wchar_t *local_a0;
  wchar_t *local_98;
  wchar_t *local_90;
  wchar_t *local_88;
  wchar_t *local_80;
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  wchar_t *local_60;
  wchar_t *local_58;
  
  AcquireSRWLockShared((PSRWLOCK)&NameToDisplayStringExemptionLock);
  local_d8 = (param_1->Data).AllocatorInstance.Data;
  uVar20 = 0;
  iVar12 = (param_1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  uVar11 = (param_1->Data).ArrayNum;
  local_e0 = iVar12 + -1;
  if (iVar12 == 0) {
    local_e0 = 0;
  }
  bVar5 = false;
  bVar9 = false;
  bVar23 = false;
  bVar3 = false;
  bVar7 = false;
  bVar22 = false;
  bVar4 = false;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (0 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar11,(ForAnyElementType *)__return_storage_ptr__,0,
               &(__return_storage_ptr__->Data).ArrayMax);
  }
  iVar12 = (param_1->Data).ArrayNum;
  if (0 < iVar12) {
    do {
      uVar11 = 0;
      if ((int)uVar20 < iVar12) {
        uVar11 = ~uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        pFVar14 = (FString *)(*pcVar2)();
        return pFVar14;
      }
      _C = *(wchar_t *)((param_1->Data).AllocatorInstance.Data + (longlong)(int)uVar20 * 2);
      uVar10 = iswlower(_C);
      local_e4 = uVar10;
      uVar11 = iswupper(_C);
      local_ec = uVar11;
      local_e8 = iswdigit(_C);
      if (uVar20 == 0) {
        if ((!param_2) ||
           (((_C != L'b' || ((param_1->Data).ArrayNum < 2)) ||
            (iVar12 = iswupper(*(wint_t *)((param_1->Data).AllocatorInstance.Data + 2)), iVar12 == 0
            )))) {
LAB_141a8c14c:
          iVar12 = NameToDisplayStringExemptions.ArrayNum;
          pFVar17 = NameToDisplayStringExemptions.AllocatorInstance.Data +
                    (longlong)NameToDisplayStringExemptions.ArrayNum * 0x10;
          FVar18.Data = NameToDisplayStringExemptions.AllocatorInstance.Data;
          while( true ) {
            if (NameToDisplayStringExemptions.ArrayNum != iVar12) {
              local_f0[0] = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_f0);
            }
            uVar11 = local_ec;
            uVar10 = local_e4;
            bVar8 = bVar3;
            bVar23 = bVar4;
            if (FVar18.Data == pFVar17) goto LAB_141a8c307;
            uVar11 = 0;
            if ((int)uVar20 < 0) {
              uVar11 = uVar20;
            }
            iVar13 = uVar20 - uVar11;
            if (local_e0 < (int)(uVar20 - uVar11)) {
              iVar13 = local_e0;
            }
            uVar10 = local_e0 - iVar13;
            if ((int)(uVar11 + 0x7fffffff) < local_e0 - iVar13) {
              uVar10 = uVar11 + 0x7fffffff;
            }
            uVar11 = 0;
            if (0 < (int)uVar10) {
              uVar11 = uVar10;
            }
            uVar10 = *(int *)(FVar18.Data + 8) - 1;
            if (*(int *)(FVar18.Data + 8) == 0) {
              uVar10 = 0;
            }
            if ((int)uVar10 < (int)uVar11) {
              uVar11 = uVar10;
            }
            uVar19 = 0;
            if (0 < (int)uVar11) {
              uVar19 = uVar11;
            }
            if ((uVar10 == uVar19) &&
               ((((uVar10 == 0 || (uVar19 == 0)) ||
                 (iVar13 = wcsncmp(*(wchar_t **)FVar18.Data,
                                   (wchar_t *)(local_d8 + (longlong)iVar13 * 2),
                                   (longlong)(int)uVar19), iVar13 == 0)) && (uVar10 == uVar19))))
            break;
            FVar18.Data = FVar18.Data + 0x10;
          }
          iVar12 = *(int *)(FVar18.Data + 8) + -1;
          if (*(int *)(FVar18.Data + 8) == 0) {
            iVar12 = 0;
          }
          ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)FVar18.Data,iVar12);
          uVar11 = *(int *)(FVar18.Data + 8) + -1 + uVar20;
          if (*(int *)(FVar18.Data + 8) == 0) {
            uVar11 = uVar20;
          }
          if ((int)uVar11 < local_e0) {
            uVar20 = 0;
            if ((int)uVar11 < (param_1->Data).ArrayNum) {
              uVar20 = ~uVar11 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar2 = (code *)swi(3);
              pFVar14 = (FString *)(*pcVar2)();
              return pFVar14;
            }
            uVar1 = *(ushort *)((param_1->Data).AllocatorInstance.Data + (longlong)(int)uVar11 * 2);
            uVar16 = 0;
            if (uVar1 < 0x40) {
              uVar16 = 1L << ((byte)uVar1 & 0x3f);
            }
            if ((uVar16 & 0x8c00520300000000) == 0) {
              ::FString::AppendChar(__return_storage_ptr__,L' ');
              bVar22 = true;
            }
          }
          uVar20 = uVar11 - 1;
          bVar9 = bVar3;
        }
      }
      else {
        if ((bVar22) || (bVar8 = false, bVar9)) goto LAB_141a8c14c;
LAB_141a8c307:
        if ((((uVar11 != 0) || ((local_e8 != 0 && (!bVar23)))) && (!bVar5)) &&
           ((!bVar8 && (!bVar7)))) {
          if (!bVar22) {
            iVar13 = (__return_storage_ptr__->Data).ArrayNum;
            iVar12 = iVar13 + -1;
            if (iVar13 == 0) {
              iVar12 = 0;
            }
            if (0 < iVar12) {
              ::FString::AppendChar(__return_storage_ptr__,L' ');
              bVar22 = true;
              bVar5 = true;
              goto LAB_141a8c391;
            }
          }
          bVar5 = true;
        }
LAB_141a8c391:
        bVar6 = false;
        if (uVar10 == 0) {
          bVar6 = bVar5;
        }
        if (_C == L'_') {
          _C = L' ';
          bVar6 = true;
        }
        iVar13 = (__return_storage_ptr__->Data).ArrayNum;
        iVar12 = iVar13 + -1;
        if (iVar13 == 0) {
          iVar12 = 0;
        }
        if (iVar12 == 0) {
          _C = _C - (-(ushort)((ushort)_C - 0x61 < 0x1a) & 0x20);
        }
        else if ((local_e8 == 0) && ((bVar22 || (bVar8)))) {
          local_c0[0] = L"As";
          local_c8 = L"In";
          local_c0[1] = L"To";
          ppwVar21 = &local_c8;
          local_ec = 0;
          local_c0[2] = L"Or";
          _Str = L"In";
          local_c0[3] = L"At";
          local_a0 = L"On";
          local_98 = L"If";
          local_90 = L"Be";
          local_88 = L"By";
          local_80 = L"The";
          local_78 = L"For";
          local_70 = L"And";
          local_68 = L"With";
          local_60 = L"When";
          local_58 = L"From";
          local_e4 = ~uVar20 >> 0x1f;
          local_d0 = (longlong)(int)uVar20 * 2;
          while( true ) {
            sVar15 = wcslen(_Str);
            iVar12 = (param_1->Data).ArrayNum;
            iVar13 = (int)sVar15;
            if (iVar13 < (int)(iVar12 - uVar20)) {
              uVar10 = iVar13 + uVar20;
              uVar11 = 0;
              if ((int)uVar10 < iVar12) {
                uVar11 = ~uVar10 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar2 = (code *)swi(3);
                pFVar14 = (FString *)(*pcVar2)();
                return pFVar14;
              }
              iVar12 = iswlower(*(wint_t *)
                                 ((param_1->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 2
                                 ));
              if (iVar12 == 0) {
                uVar11 = 0;
                if ((int)uVar10 < (param_1->Data).ArrayNum) {
                  uVar11 = ~uVar10 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar2 = (code *)swi(3);
                  pFVar14 = (FString *)(*pcVar2)();
                  return pFVar14;
                }
                if (*(short *)((param_1->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 2)
                    != 0) {
                  uVar11 = 0;
                  if ((int)uVar20 < (param_1->Data).ArrayNum) {
                    uVar11 = local_e4;
                  }
                  if ((uVar11 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar2 = (code *)swi(3);
                    pFVar14 = (FString *)(*pcVar2)();
                    return pFVar14;
                  }
                  iVar12 = wcsncmp((wchar_t *)((param_1->Data).AllocatorInstance.Data + local_d0),
                                   _Str,(longlong)iVar13);
                  if (iVar12 == 0) {
                    _C = _C + (-(ushort)((ushort)_C - 0x41 < 0x1a) & 0x20);
                    goto LAB_141a8c3ed;
                  }
                }
              }
            }
            ppwVar21 = ppwVar21 + 1;
            local_ec = local_ec + 1;
            if (0xe < local_ec) break;
            _Str = *ppwVar21;
          }
          _C = _C - (-(ushort)((ushort)_C - 0x61 < 0x1a) & 0x20);
        }
LAB_141a8c3ed:
        bVar22 = _C == L' ';
        bVar9 = _C == L'(';
        bVar23 = _C == L'-';
        bVar3 = bVar9;
        bVar4 = bVar23;
        bVar5 = bVar6;
        if ((local_e8 != 0) || ((bVar7 && ((ushort)(_C + L'ￓ') < 2)))) {
          bVar7 = true;
          ::FString::AppendChar(__return_storage_ptr__,_C);
        }
        else {
          bVar7 = false;
          ::FString::AppendChar(__return_storage_ptr__,_C);
        }
      }
      iVar12 = (param_1->Data).ArrayNum;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar12);
  }
  ReleaseSRWLockShared((PSRWLOCK)&NameToDisplayStringExemptionLock);
  return __return_storage_ptr__;
}

// RemoveNameToDisplayStringExemption @ 141a8fc10

void __cdecl FName::RemoveNameToDisplayStringExemption(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  <lambda_1> local_res8 [4];
  
  AcquireSRWLockExclusive((PSRWLOCK)&NameToDisplayStringExemptionLock);
  if ((NameToDisplayStringExemptions.AllocatorInstance.Data <= param_1) &&
     (param_1 < NameToDisplayStringExemptions.AllocatorInstance.Data +
                (longlong)NameToDisplayStringExemptions.ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0].Item = param_1;
  TArray<FString,TSizedDefaultAllocator<32>_>::
  RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
            (&NameToDisplayStringExemptions,local_res8);
                    /* WARNING: Could not recover jumptable at 0x000141a8fcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&NameToDisplayStringExemptionLock);
  return;
}

// Reserve @ 141a8fcd0

void __cdecl FName::Reserve(uint param_1,uint param_2)

{
  if (CpuChannel->Enabled < 0) {
    FNamePool::Reserve((FNamePool *)NamePoolData,param_1,param_2);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId2643,"FName Reserve",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
             ,0xa53);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2643);
  FNamePool::Reserve((FNamePool *)NamePoolData,param_1,param_2);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// ResolveEntry @ 141a907e0

FNameEntry * __cdecl FName::ResolveEntry(FNameEntryId param_1)

{
  FLowLevelMemTracker *this;
  uchar *puVar1;
  
  if (bNamePoolInitialized) {
    puVar1 = NamePoolData;
  }
  else {
    puVar1 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(this);
  }
  return (FNameEntry *)
         ((((FNamePool *)puVar1)->Entries).Blocks[param_1.Value >> 0x10] +
         (param_1.Value & 0xffff) * 2);
}

// ResolveEntryRecursive @ 141a90860

FNameEntry * __cdecl FName::ResolveEntryRecursive(FNameEntryId param_1)

{
  FLowLevelMemTracker *this;
  uchar *puVar1;
  
  if (bNamePoolInitialized) {
    puVar1 = NamePoolData;
  }
  else {
    puVar1 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(this);
  }
  return (FNameEntry *)
         ((((FNamePool *)puVar1)->Entries).Blocks[param_1.Value >> 0x10] +
         (param_1.Value & 0xffff) * 2);
}

// SafeString @ 141a90ae0

FString * __cdecl
FName::SafeString(FString *__return_storage_ptr__,FNameEntryId param_1,int param_2)

{
  FNameEntry *pFVar1;
  FString local_18;
  
  if (param_2 == 0) {
    pFVar1 = ResolveEntry(param_1);
    FNameEntry::GetPlainNameString(pFVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  pFVar1 = ResolveEntry(param_1);
  ::FString::Reset(&local_18,pFVar1.Len + 6);
  FNameEntry::AppendNameToString(pFVar1,&local_18);
  ::FString::AppendChar(&local_18,L'_');
  ::FString::AppendInt(&local_18,param_2 + -1);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  return __return_storage_ptr__;
}

// SanitizeWhitespace @ 141a90ba0

FString * __cdecl FName::SanitizeWhitespace(FString *__return_storage_ptr__,FString *param_1)

{
  wchar_t wVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar2 = (param_1->Data).ArrayNum;
  pFVar4 = (param_1->Data).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 2 + -2;
  if (iVar2 == 0) {
    pFVar5 = pFVar4 + (longlong)iVar2 * 2;
  }
  while( true ) {
    if ((param_1->Data).ArrayNum != iVar2) {
      `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    wVar1 = *(wchar_t *)pFVar4;
    bVar3 = FTextChar::IsWhitespace((uint)(ushort)wVar1);
    if (((!bVar3) || (wVar1 == L' ')) || ((uint)(ushort)wVar1 == L'\t')) {
      ::FString::AppendChar(__return_storage_ptr__,wVar1);
    }
    pFVar4 = pFVar4 + 2;
  }
  return __return_storage_ptr__;
}

// TearDown @ 141a942c0

void __cdecl FName::TearDown(void)

{
  code *pcVar1;
  bool bVar2;
  FNamePoolShardBase *this;
  longlong lVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0x118a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (bNamePoolInitialized != false) {
    NamePoolData[0x26fb0] = '\0';
    NamePoolData[0x26fb1] = '\0';
    NamePoolData[0x26fb2] = '\0';
    NamePoolData[0x26fb3] = '\0';
    if (NamePoolData._159656_8_ != 0) {
      FMemory::Free((void *)NamePoolData._159656_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FNameEntryId,enum_EName>_>,TInlineSparseArrayAllocator<512,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FNameEntryId,enum_EName>_>,TInlineSparseArrayAllocator<512,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              (NamePoolData + 0x24b40);
    this = (FNamePoolShardBase *)(NamePoolData + 0x14040);
    lVar3 = 0x100;
    do {
      this = this + -1;
      FNamePoolShardBase::~FNamePoolShardBase(this);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    FNameEntryAllocator::~FNameEntryAllocator((FNameEntryAllocator *)NamePoolData);
    bNamePoolInitialized = false;
  }
  return;
}

// ToEName @ 141a96cc0

EName * __thiscall FName::ToEName(FName *this)

{
  uint uVar1;
  EName *pEVar2;
  uchar *puVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = (this->ComparisonIndex).Value;
  if ((uint)NamePoolData._150332_4_ < uVar1) {
    return (EName *)0x0;
  }
  if (NamePoolData._158536_4_ != NamePoolData._158628_4_) {
    puVar3 = NamePoolData + 0x26ba8;
    if (NamePoolData._159656_8_ != 0) {
      puVar3 = (uchar *)NamePoolData._159656_8_;
    }
    iVar5 = *(int *)(puVar3 + (ulonglong)
                              (NamePoolData._159664_4_ - 1 &
                              ((uVar1 & 0xffff) >> 4) +
                              uVar1 * 0x10000 + (uVar1 >> 0x10) * 0x80001 + (uVar1 & 0xffff)) * 4);
    if (iVar5 != -1) {
      do {
        lVar4 = (longlong)iVar5;
        puVar3 = NamePoolData + 0x24b40;
        if (NamePoolData._158528_8_ != 0) {
          puVar3 = (uchar *)NamePoolData._158528_8_;
        }
        if (*(uint *)(puVar3 + lVar4 * 0x10) == uVar1) {
          if (iVar5 == -1) {
            return (EName *)0x0;
          }
          puVar3 = NamePoolData + 0x24b40;
          if (NamePoolData._158528_8_ != 0) {
            puVar3 = (uchar *)NamePoolData._158528_8_;
          }
          pEVar2 = (EName *)(puVar3 + lVar4 * 0x10 + 4);
          if (puVar3 + lVar4 * 0x10 == (uchar *)0x0) {
            pEVar2 = (EName *)0x0;
          }
          return pEVar2;
        }
        puVar3 = NamePoolData + 0x24b40;
        if (NamePoolData._158528_8_ != 0) {
          puVar3 = (uchar *)NamePoolData._158528_8_;
        }
        iVar5 = *(int *)(puVar3 + lVar4 * 0x10 + 8);
      } while (iVar5 != -1);
    }
  }
  return (EName *)0x0;
}

// ToString @ 141a97260

FString * __thiscall FName::ToString(FName *this,FString *__return_storage_ptr__)

{
  FNameEntryId FVar1;
  FNameEntry *pFVar2;
  uint uVar3;
  FString local_18;
  
  FVar1.Value = (this->ComparisonIndex).Value;
  if (this->Number == 0) {
    pFVar2 = ResolveEntry(FVar1);
    FNameEntry::GetPlainNameString(pFVar2,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  pFVar2 = ResolveEntry(FVar1);
  uVar3 = pFVar2.Len;
  if (this->Number == 0) {
    ::FString::Reset(&local_18,uVar3);
    FNameEntry::AppendNameToString(pFVar2,&local_18);
  }
  else {
    ::FString::Reset(&local_18,uVar3 + 6);
    FNameEntry::AppendNameToString(pFVar2,&local_18);
    ::FString::AppendChar(&local_18,L'_');
    ::FString::AppendInt(&local_18,this->Number - 1);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  return __return_storage_ptr__;
}

// ToString @ 141a97340

void __thiscall FName::ToString(FName *this,TStringBuilderBase<char8_t> *param_1)

{
  FNameEntry *this_00;
  
  param_1->CurPos = param_1->Base;
  this_00 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  FNameEntry::AppendNameToString(this_00,param_1);
  if (this->Number != 0) {
    if (param_1->End < param_1->CurPos + 1) {
      TStringBuilderBase<char8_t>::Extend(param_1,1);
    }
    *param_1->CurPos = '_';
    param_1->CurPos = param_1->CurPos + 1;
    TStringBuilderBase<char8_t>::AppendfImpl(param_1,(uchar *)"%d");
  }
  return;
}

// ToString @ 141a973c0

void __thiscall FName::ToString(FName *this,TStringBuilderBase<wchar_t> *param_1)

{
  param_1->CurPos = param_1->Base;
  AppendString(this,param_1);
  return;
}

// ToString @ 141a973e0

void __thiscall FName::ToString(FName *this,FString *param_1)

{
  FNameEntry *this_00;
  uint uVar1;
  
  this_00 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  uVar1 = this_00.Len;
  if (this->Number == 0) {
    ::FString::Reset(param_1,uVar1);
    FNameEntry::AppendNameToString(this_00,param_1);
    return;
  }
  ::FString::Reset(param_1,uVar1 + 6);
  FNameEntry::AppendNameToString(this_00,param_1);
  ::FString::AppendChar(param_1,L'_');
  ::FString::AppendInt(param_1,this->Number - 1);
  return;
}

// ToString @ 141a97470

void __thiscall FName::ToString(FName *this,FUtf8String *param_1)

{
  int iVar1;
  FNameEntry *this_00;
  
  this_00 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  if (this->Number == 0) {
    iVar1 = FNameEntry::GetNameLengthUtf8(this_00);
    FUtf8String::Reset(param_1,iVar1);
    FNameEntry::AppendNameToString(this_00,param_1);
    return;
  }
  iVar1 = FNameEntry::GetNameLengthUtf8(this_00);
  FUtf8String::Reset(param_1,iVar1 + 6);
  FNameEntry::AppendNameToString(this_00,param_1);
  FUtf8String::AppendChar(param_1,'_');
  FUtf8String::AppendInt(param_1,this->Number - 1);
  return;
}

// ToStringInternal @ 141a97630

uint __thiscall FName::ToStringInternal(FName *this,wchar_t *param_1,uint param_2)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FNameEntry *pFVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  uint uVar9;
  uint uVar10;
  ulonglong _Size;
  
  if ((param_2 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xe67,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar4 = param_2 - 1;
  pFVar6 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  uVar10 = pFVar6.Len;
  uVar9 = uVar4;
  if (uVar10 < uVar4) {
    uVar9 = uVar10;
  }
  _Size = (ulonglong)uVar9;
  if (pFVar6.bIsWide == 0) {
    memcpy(param_1,&pFVar6->field1_0x2,_Size);
    if (uVar9 != 0) {
      lVar7 = _Size + (longlong)param_1;
      pwVar8 = param_1 + _Size;
      do {
        pcVar1 = (char *)(lVar7 + -1);
        lVar7 = lVar7 + -1;
        pwVar8[-1] = (short)*pcVar1;
        pwVar8 = pwVar8 + -1;
        uVar9 = (int)_Size - 1;
        _Size = (ulonglong)uVar9;
      } while (uVar9 != 0);
    }
  }
  else {
    memcpy(param_1,&pFVar6->field1_0x2,_Size * 2);
  }
  if ((this->Number != 0) && (uVar10 < uVar4)) {
    iVar5 = TCString<wchar_t>::SnprintfImpl(param_1 + uVar10,param_2 - uVar10,L"_%d");
    uVar10 = uVar10 + iVar5;
    if (iVar5 < 0) {
      uVar10 = uVar4;
    }
    return uVar10;
  }
  if (uVar4 < uVar10) {
    uVar10 = uVar4;
  }
  param_1[uVar10] = L'\0';
  return uVar10;
}

// ToUtf8String @ 141a97850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUtf8String * __thiscall FName::ToUtf8String(FName *this,FUtf8String *__return_storage_ptr__)

{
  FNameEntryId FVar1;
  FNameEntryHeader *pFVar2;
  int iVar3;
  FNameEntry *pFVar4;
  FNameEntry_u_2 *pFVar5;
  uint uVar6;
  undefined1 auStack_848 [32];
  FUtf8String local_828;
  FNameEntry_u_2 local_818;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_848;
  FVar1.Value = (this->ComparisonIndex).Value;
  if (this->Number == 0) {
    pFVar4 = ResolveEntry(FVar1);
    pFVar5 = &pFVar4->field1_0x2;
    uVar6 = pFVar4->Len;
    if (pFVar4->bIsWide == 0) {
      if (pFVar5 == (FNameEntry_u_2 *)0x0) {
        memcpy(&local_818,(void *)0x0,pFVar4->Len);
        pFVar5 = &local_818;
      }
      FUtf8String::ConstructFromPtrSize(__return_storage_ptr__,pFVar5->AnsiName,uVar6);
    }
    else {
      if (pFVar5 == (FNameEntry_u_2 *)0x0) {
        memcpy(&local_818,(void *)0x0,pFVar4->Len * 2);
        pFVar5 = &local_818;
      }
      FUtf8String::ConstructFromPtrSize(__return_storage_ptr__,pFVar5->WideName,uVar6);
    }
  }
  else {
    local_828.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_828.Data.ArrayNum = 0;
    local_828.Data.ArrayMax = 0;
    pFVar4 = ResolveEntry(FVar1);
    if (this->Number == 0) {
      iVar3 = FNameEntry::GetNameLengthUtf8(pFVar4);
      FUtf8String::Reset(&local_828,iVar3);
      FNameEntry::AppendNameToString(pFVar4,&local_828);
    }
    else {
      iVar3 = FNameEntry::GetNameLengthUtf8(pFVar4);
      FUtf8String::Reset(&local_828,iVar3 + 6);
      FNameEntry::AppendNameToString(pFVar4,&local_828);
      FUtf8String::AppendChar(&local_828,'_');
      FUtf8String::AppendInt(&local_828,this->Number - 1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_828.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_828.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_828.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// TraceName @ 141a97d10

TEventRef<unsigned_int> __cdecl FName::TraceName(FName *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  FLowLevelMemTracker *this;
  uint *in_RDX;
  uchar *this_00;
  
  uVar1 = *in_RDX;
  if (bNamePoolInitialized) {
    this_00 = NamePoolData;
  }
  else {
    this_00 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(this);
  }
  bVar2 = TNameAtomicBitSet<65536>::SetBitAtomic
                    (((FNamePool *)this_00)->TracedNames + (uVar1 >> 0x10),uVar1 & 0xffff);
  if (!bVar2) {
    FNamePool::TraceDefinition((FNamePool *)this_00,&param_1->ComparisonIndex);
    return (TEventRef<unsigned_int>)param_1;
  }
  uVar3 = FStringsFNameFields::GetUid();
  param_1->Number = uVar3;
  (param_1->ComparisonIndex).Value = uVar1;
  return (TEventRef<unsigned_int>)param_1;
}

// TraceNamesOnConnection @ 141a97dd0

void __cdecl FName::TraceNamesOnConnection(void)

{
  atomic<unsigned___int64_*> aVar1;
  FLowLevelMemTracker *this;
  ulonglong uVar2;
  ulonglong uVar3;
  TNameAtomicBitSet<65536> TVar4;
  uint uVar5;
  uchar *this_00;
  uint uVar6;
  FNameEntryId local_res10 [2];
  
  if (bNamePoolInitialized) {
    this_00 = NamePoolData;
  }
  else {
    this_00 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(this);
  }
  uVar6 = 0;
  uVar2 = 0;
  do {
    TVar4.Data = ((FNamePool *)this_00)->TracedNames[uVar2].Data;
    if (TVar4.Data != (atomic<unsigned___int64_*>)0x0) {
      aVar1 = TVar4.Data + 0x2000;
      for (; TVar4.Data != aVar1; TVar4.Data = TVar4.Data + 8) {
        uVar2 = *(ulonglong *)TVar4.Data;
        uVar5 = 0;
        uVar3 = 1;
        do {
          if ((uVar3 & uVar2) != 0) {
            FNamePool::TraceDefinition((FNamePool *)this_00,local_res10);
          }
          uVar5 = uVar5 + 1;
          uVar3 = uVar3 << 1 | (ulonglong)((longlong)uVar3 < 0);
        } while (uVar5 < 0x40);
      }
    }
    uVar6 = uVar6 + 1;
    uVar2 = (ulonglong)uVar6;
  } while (uVar6 < 0x2000);
  return;
}

// TryAppendAnsiString @ 141a981b0

bool __thiscall FName::TryAppendAnsiString(FName *this,TStringBuilderBase<char> *param_1)

{
  int iVar1;
  FNameEntry *pFVar2;
  ulonglong uVar3;
  
  pFVar2 = ResolveEntry((FNameEntryId)(this->ComparisonIndex).Value);
  if (pFVar2.bIsWide != 0) {
    return false;
  }
  uVar3 = pFVar2.Len;
  if (param_1->End < param_1->CurPos + uVar3) {
    TStringBuilderBase<char>::Extend(param_1,uVar3);
  }
  iVar1 = *(int *)&param_1->CurPos;
  param_1->CurPos = param_1->CurPos + uVar3;
  memcpy(param_1->Base + (iVar1 - *(int *)&param_1->Base),&pFVar2->field1_0x2,pFVar2.Len);
  if (this->Number != 0) {
    if (param_1->End < param_1->CurPos + 1) {
      TStringBuilderBase<char>::Extend(param_1,1);
    }
    *param_1->CurPos = '_';
    param_1->CurPos = param_1->CurPos + 1;
    TStringBuilderBase<char>::AppendfImpl(param_1,"%d");
  }
  return true;
}

