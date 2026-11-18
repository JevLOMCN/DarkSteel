// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// Init @ 14149b5c0

void __thiscall
TStringConversion<TStringConvert<char,wchar_t>,128>::Init
          (TStringConversion<TStringConvert<char,wchar_t>,128> *this,char *param_1,int param_2,
          ENullTerminatedString param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
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
  
  iVar11 = 0;
  this->StringLength = param_2;
  uVar12 = (uint)(param_3 == Yes) + param_2;
  uVar7 = uVar12;
  if (uVar12 < 0x81) {
    if (this->_padding_ != 0) {
      uVar7 = 0;
      goto LAB_14149b60f;
    }
  }
  else {
LAB_14149b60f:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->_padding_,0,uVar7,2);
  }
  pTVar10 = this;
  if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)this->_padding_ !=
      (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
    pTVar10 = (TStringConversion<TStringConvert<char,wchar_t>,128> *)this->_padding_;
  }
  this->Ptr = (wchar_t *)pTVar10;
  if (((0 < (int)uVar12) && (3 < uVar12)) &&
     (((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_1 + (int)(uVar12 - 1)) <
       pTVar10 ||
      ((char *)((longlong)&pTVar10->_padding_ + (longlong)(int)(uVar12 - 1) * 2) < param_1)))) {
    if (0x1f < uVar12) {
      uVar7 = uVar12 & 0x8000001f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
      }
      puVar8 = (ulonglong *)(param_1 + 0x10);
      plVar13 = &pTVar10->_padding_;
      do {
        uVar2 = puVar8[-2];
        iVar11 = iVar11 + 0x20;
        uVar3 = puVar8[-1];
        puVar1 = puVar8 + 4;
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
        ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(plVar13 + -4))->_padding_ =
             auVar20._0_8_;
        ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(plVar13 + -4))->_padding_ =
             auVar20._8_8_;
        uVar2 = *puVar8;
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
        *(undefined1 (*) [16])(plVar13 + -2) = auVar41;
        uVar2 = puVar8[1];
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
        *(undefined1 (*) [16])plVar13 = auVar20;
        *(undefined1 (*) [16])(plVar13 + 2) = auVar41;
        puVar8 = puVar1;
        plVar13 = plVar13 + 8;
      } while ((-0x10 - (longlong)param_1) + (longlong)puVar1 < (longlong)(int)(uVar12 - uVar7));
      if (((byte)uVar12 & 0x1f) < 4) goto LAB_14149b74f;
    }
    lVar9 = (longlong)iVar11;
    uVar7 = uVar12 & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    do {
      uVar4 = *(undefined4 *)(param_1 + lVar9);
      iVar11 = iVar11 + 4;
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
      *(longlong *)((longlong)&pTVar10->_padding_ + lVar9 * 2) = auVar20._0_8_;
      lVar9 = lVar9 + 4;
    } while (lVar9 < (int)(uVar12 - uVar7));
  }
LAB_14149b74f:
  for (lVar9 = (longlong)iVar11; lVar9 < (int)uVar12; lVar9 = lVar9 + 1) {
    *(short *)((longlong)&pTVar10->_padding_ + lVar9 * 2) = (short)param_1[lVar9];
  }
  if (((longlong)&pTVar10->_padding_ + (longlong)(int)uVar12 * 2 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  return;
}

// Init @ 1416a2310

void __thiscall
TStringConversion<TStringConvert<wchar_t,char>,128>::Init
          (TStringConversion<TStringConvert<wchar_t,char>,128> *this,wchar_t *param_1,int param_2,
          ENullTerminatedString param_3)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar6 = 0;
  this->StringLength = param_2;
  uVar7 = (uint)(param_3 == Yes) + param_2;
  uVar8 = uVar7;
  if (uVar7 < 0x81) {
    if (this->_padding_ == 0) goto LAB_1416a2370;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->_padding_,0,uVar8,1);
LAB_1416a2370:
  lVar9 = (longlong)(int)uVar7;
  pTVar5 = this;
  if ((TStringConversion<TStringConvert<wchar_t,char>,128> *)this->_padding_ !=
      (TStringConversion<TStringConvert<wchar_t,char>,128> *)0x0) {
    pTVar5 = (TStringConversion<TStringConvert<wchar_t,char>,128> *)this->_padding_;
  }
  bVar3 = false;
  this->Ptr = (char *)pTVar5;
  lVar4 = lVar6;
  if (0 < (int)uVar7) {
    do {
      wVar1 = param_1[lVar4];
      *(char *)((longlong)&pTVar5->_padding_ + lVar4) = (char)wVar1;
      lVar4 = lVar4 + 1;
      bVar3 = (bool)(bVar3 | 0x7f < (ushort)wVar1);
    } while (lVar4 < lVar9);
    if (bVar3) {
      do {
        if (0x7f < (ushort)param_1[lVar6]) {
          *(undefined1 *)((longlong)&pTVar5->_padding_ + lVar6) = 0x3f;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar9);
    }
  }
  if (((longlong)&pTVar5->_padding_ + lVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// TStringConversion<FUTF8ToTCHAR_Convert,128> @ 141814b50

TStringConversion<FUTF8ToTCHAR_Convert,128> * __thiscall
TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
          (TStringConversion<FUTF8ToTCHAR_Convert,128> *this,char *param_1)

{
  int iVar1;
  size_t sVar2;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar3;
  
  this->_padding_ = 0;
  if (param_1 != (char *)0x0) {
    sVar2 = strlen(param_1);
    iVar1 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)param_1,(int)sVar2);
    this->StringLength = iVar1;
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
    ResizeAllocation((ForElementType<wchar_t> *)this,0,iVar1 + 1,2);
    pTVar3 = this;
    if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)this->_padding_ !=
        (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
      pTVar3 = (TStringConversion<FUTF8ToTCHAR_Convert,128> *)this->_padding_;
    }
    this->Ptr = (wchar_t *)pTVar3;
    UE::Core::Private::Convert((wchar_t *)pTVar3,iVar1 + 1,(uchar *)param_1,(int)sVar2 + 1);
    return this;
  }
  this->Ptr = (wchar_t *)0x0;
  this->StringLength = 0;
  return this;
}

// TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128><char32_t> @ 1418a9aa0

TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> * __thiscall
TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128>::
TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128><char32_t>
          (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *this,wchar32 *param_1,
          int param_2)

{
  wchar32 wVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *local_res8;
  
  uVar5 = 0;
  this->_padding_ = 0;
  if (param_1 == (wchar32 *)0x0) {
    this->Ptr = (wchar_t *)0x0;
    this->StringLength = 0;
    return this;
  }
  uVar7 = 0;
  if ((0 < param_2) && (uVar7 = 0, param_1[(longlong)param_2 + -1] == L'\0')) {
    uVar7 = 1;
    param_2 = param_2 + -1;
  }
  uVar3 = param_2 * 2;
  uVar6 = uVar5;
  uVar4 = 0;
  if (0 < param_2) {
    do {
      wVar1 = param_1[uVar6];
      uVar4 = (uint)uVar5;
      if (uVar3 == 0) break;
      if (((((uint)wVar1 < 0xfffe) || ((uint)(wVar1 + L'\xffff0000') < 0x100000)) &&
          (0x3ff < (uint)(wVar1 + L'\xffff2800'))) && (0x3ff < (uint)(wVar1 + L'\xffff2400'))) {
        if (0xfffff < (uint)(wVar1 + L'\xffff0000')) goto LAB_1418a9b61;
        uVar2 = uVar4;
        if (1 < uVar3) {
          uVar2 = uVar4 + 2;
        }
      }
      else {
        local_res8 = (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                     CONCAT44(local_res8._4_4_,0x3f);
LAB_1418a9b61:
        uVar2 = uVar4 + 1;
      }
      if ((int)(uVar2 - uVar4) < 1) break;
      uVar3 = uVar3 - (uVar2 - uVar4);
      uVar6 = uVar6 + 1;
      uVar5 = (ulonglong)uVar2;
      uVar4 = uVar2;
    } while ((longlong)uVar6 < (longlong)param_2);
  }
  this->StringLength = uVar4;
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
  ResizeAllocation((ForElementType<wchar_t> *)this,0,uVar4 + uVar7,2);
  local_res8 = this;
  if ((TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)this->_padding_ !=
      (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)0x0) {
    local_res8 = (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)this->_padding_;
  }
  this->Ptr = (wchar_t *)local_res8;
  TUTF32ToUTF16_Convert<char32_t,wchar_t>::Convert_Impl<wchar_t_*>
            ((wchar_t **)&local_res8,uVar4 + uVar7,param_1,uVar7 + param_2);
  return this;
}

// TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t> @ 1418a9c10

TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> * __thiscall
TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
          (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *this,wchar_t *param_1,
          int param_2)

{
  int iVar1;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar2;
  int iVar3;
  
  iVar3 = 0;
  this->_padding_ = 0;
  if (param_1 == (wchar_t *)0x0) {
    this->Ptr = (char *)0x0;
    this->StringLength = 0;
  }
  else {
    if ((0 < param_2) && (param_1[(longlong)param_2 + -1] == L'\0')) {
      iVar3 = 1;
      param_2 = param_2 + -1;
    }
    iVar1 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,param_2);
    this->StringLength = iVar1;
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::
    ResizeAllocation((ForElementType<char> *)this,0,iVar1 + iVar3,1);
    pTVar2 = this;
    if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)this->_padding_ !=
        (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
      pTVar2 = (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)this->_padding_;
    }
    this->Ptr = (char *)pTVar2;
    UE::Core::Private::Convert((uchar *)pTVar2,iVar1 + iVar3,param_1,iVar3 + param_2);
  }
  return this;
}

// TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t> @ 141c62190

TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> * __thiscall
TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
          (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *this,wchar_t *param_1)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar4;
  uint uVar5;
  
  this->_padding_ = 0;
  if (param_1 == (wchar_t *)0x0) {
    this->Ptr = (char *)0x0;
    this->StringLength = 0;
    return this;
  }
  sVar3 = wcslen(param_1);
  iVar2 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,(int)sVar3);
  this->StringLength = iVar2;
  uVar1 = iVar2 + 1;
  uVar5 = uVar1;
  if (uVar1 < 0x81) {
    if (this->_padding_ == 0) goto LAB_141c62210;
    uVar5 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->_padding_,0,uVar5,1);
LAB_141c62210:
  pTVar4 = this;
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)this->_padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    pTVar4 = (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)this->_padding_;
  }
  this->Ptr = (char *)pTVar4;
  UE::Core::Private::Convert((uchar *)pTVar4,uVar1,param_1,(int)sVar3 + 1);
  return this;
}

// Init @ 141d01d40

void __thiscall
TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::Init
          (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *this,wchar_t *param_1,
          int param_2,ENullTerminatedString param_3)

{
  int iVar1;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,param_2);
  this->StringLength = iVar1;
  uVar3 = (uint)(param_3 == Yes) + iVar1;
  uVar4 = uVar3;
  if (uVar3 < 0x81) {
    if (this->_padding_ == 0) goto LAB_141d01dab;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->_padding_,0,uVar4,1);
LAB_141d01dab:
  pTVar2 = this;
  if ((TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)this->_padding_ !=
      (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)0x0) {
    pTVar2 = (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)this->_padding_;
  }
  this->Ptr = (char *)pTVar2;
  UE::Core::Private::Convert((uchar *)pTVar2,uVar3,param_1,(uint)(param_3 == Yes) + param_2);
  return;
}

