// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FHashedName @ 1419cdb40

FHashedName * __thiscall FHashedName::FHashedName(FHashedName *this,FHashedName *param_1)

{
  this->Hash = param_1->Hash;
  return this;
}

// FHashedName @ 1419cdb50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001419cdbfb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FHashedName * __thiscall FHashedName::FHashedName(FHashedName *this,FName *param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  FNameEntry *this_00;
  size_t sVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar10;
  longlong lVar12;
  uint uVar13;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined1 auStack_10f8 [32];
  FScriptContainerElement local_10d8 [128];
  ForAnyElementType local_1058;
  FScriptContainerElement *local_1050;
  uint local_1048;
  wchar_t local_1038 [4];
  undefined8 auStack_1030 [255];
  wchar_t local_838 [4];
  undefined8 auStack_830 [255];
  ulonglong local_38;
  undefined8 uStack_20;
  ulonglong uVar9;
  ulonglong uVar11;
  
  uStack_20 = 0x1419cdb66;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_10f8;
  if (*param_1 == (FName)0x0) {
    this->Hash = 0;
    return this;
  }
  this_00 = ::FName::GetComparisonNameEntry(param_1);
  uVar3 = param_1->Number;
  uVar8 = this_00.Len;
  uVar9 = (ulonglong)uVar8;
  if (this_00.bIsWide == 0) {
    FNameEntry::GetAnsiName(this_00,(char (*) [1024])local_838);
    if (uVar9 != 0) {
      lVar12 = 0;
      do {
        cVar1 = *(char *)((longlong)auStack_830 + lVar12 + -8);
        *(byte *)((longlong)auStack_1030 + lVar12 + -8) =
             cVar1 - (-((int)cVar1 - 0x61U < 0x1a) & 0x20U);
        lVar12 = lVar12 + 1;
      } while (lVar12 < (longlong)uVar9);
    }
    *(undefined1 *)((longlong)auStack_1030 + (uVar9 - 8)) = 0;
    uVar5 = CityHash64WithSeed((char *)local_1038,uVar8,(longlong)(int)uVar3);
    this->Hash = uVar5;
    return this;
  }
  FNameEntry::GetName(this_00,(wchar_t (*) [1024])local_838);
  uVar7 = 0;
  uVar10 = 0;
  if (((uVar8 != 0) && (7 < uVar8)) && (1 < __isa_available)) {
    uStack_20 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
    uVar6 = uVar7;
    uVar11 = uVar7;
    do {
      auVar20 = pmovzxwd(in_XMM2,*(undefined8 *)((longlong)auStack_830 + (uVar6 - 8)));
      auVar18._0_4_ = auVar20._0_4_ - ___xmm_00000061000000610000006100000061;
      auVar18._4_4_ = auVar20._4_4_ - _UNK_150631f54;
      auVar18._8_4_ = auVar20._8_4_ - _UNK_150631f58;
      auVar18._12_4_ = auVar20._12_4_ - _UNK_150631f5c;
      uVar10 = (int)uVar11 + 8;
      uVar11 = (ulonglong)uVar10;
      uVar7 = uVar7 + 8;
      uVar13 = ~-(uint)(((auVar18._0_4_ < ___xmm_0000001a0000001a0000001a0000001a) *
                         ___xmm_0000001a0000001a0000001a0000001a |
                        (auVar18._0_4_ >= ___xmm_0000001a0000001a0000001a0000001a) * auVar18._0_4_)
                       == auVar18._0_4_) & ___xmm_00000001000000010000000100000001;
      uVar15 = ~-(uint)(((auVar18._4_4_ < _UNK_150631f34) * _UNK_150631f34 |
                        (auVar18._4_4_ >= _UNK_150631f34) * auVar18._4_4_) == auVar18._4_4_) &
               _UNK_150631da4;
      uVar16 = ~-(uint)(((auVar18._8_4_ < _UNK_150631f38) * _UNK_150631f38 |
                        (auVar18._8_4_ >= _UNK_150631f38) * auVar18._8_4_) == auVar18._8_4_) &
               _UNK_150631da8;
      uVar17 = ~-(uint)(((auVar18._12_4_ < _UNK_150631f3c) * _UNK_150631f3c |
                        (auVar18._12_4_ >= _UNK_150631f3c) * auVar18._12_4_) == auVar18._12_4_) &
               _UNK_150631dac;
      auVar14._0_4_ = uVar13 * 0x20;
      auVar14._4_4_ = uVar15 * 0x20;
      auVar14._8_4_ = uVar16 * 0x20;
      auVar14._12_4_ = uVar17 * 0x20;
      auVar21._0_4_ = auVar20._0_4_ + uVar13 * -0x20;
      auVar21._4_4_ = auVar20._4_4_ + uVar15 * -0x20;
      auVar21._8_4_ = auVar20._8_4_ + uVar16 * -0x20;
      auVar21._12_4_ = auVar20._12_4_ + uVar17 * -0x20;
      auVar14 = pshufhw(auVar14,auVar21,0xd8);
      auVar14 = pshuflw(auVar18,auVar14,0xd8);
      auVar22._0_8_ = CONCAT44(auVar14._8_4_,auVar14._0_4_);
      auVar22._8_4_ = auVar14._4_4_;
      auVar22._12_4_ = auVar14._12_4_;
      *(undefined8 *)((longlong)auStack_1030 + (uVar6 - 8)) = auVar22._0_8_;
      auVar14 = pmovzxwd(auVar22,*(undefined8 *)((longlong)auStack_830 + uVar6));
      auVar19._0_4_ = auVar14._0_4_ - ___xmm_00000061000000610000006100000061;
      auVar19._4_4_ = auVar14._4_4_ - _UNK_150631f54;
      auVar19._8_4_ = auVar14._8_4_ - _UNK_150631f58;
      auVar19._12_4_ = auVar14._12_4_ - _UNK_150631f5c;
      uVar13 = ~-(uint)(((auVar19._0_4_ < ___xmm_0000001a0000001a0000001a0000001a) *
                         ___xmm_0000001a0000001a0000001a0000001a |
                        (auVar19._0_4_ >= ___xmm_0000001a0000001a0000001a0000001a) * auVar19._0_4_)
                       == auVar19._0_4_) & ___xmm_00000001000000010000000100000001;
      uVar15 = ~-(uint)(((auVar19._4_4_ < _UNK_150631f34) * _UNK_150631f34 |
                        (auVar19._4_4_ >= _UNK_150631f34) * auVar19._4_4_) == auVar19._4_4_) &
               _UNK_150631da4;
      uVar16 = ~-(uint)(((auVar19._8_4_ < _UNK_150631f38) * _UNK_150631f38 |
                        (auVar19._8_4_ >= _UNK_150631f38) * auVar19._8_4_) == auVar19._8_4_) &
               _UNK_150631da8;
      uVar17 = ~-(uint)(((auVar19._12_4_ < _UNK_150631f3c) * _UNK_150631f3c |
                        (auVar19._12_4_ >= _UNK_150631f3c) * auVar19._12_4_) == auVar19._12_4_) &
               _UNK_150631dac;
      auVar20._0_4_ = uVar13 * 0x20;
      auVar20._4_4_ = uVar15 * 0x20;
      auVar20._8_4_ = uVar16 * 0x20;
      auVar20._12_4_ = uVar17 * 0x20;
      auVar23._0_4_ = auVar14._0_4_ + uVar13 * -0x20;
      auVar23._4_4_ = auVar14._4_4_ + uVar15 * -0x20;
      auVar23._8_4_ = auVar14._8_4_ + uVar16 * -0x20;
      auVar23._12_4_ = auVar14._12_4_ + uVar17 * -0x20;
      auVar14 = pshufhw(auVar20,auVar23,0xd8);
      auVar14 = pshuflw(auVar19,auVar14,0xd8);
      in_XMM2._0_8_ = CONCAT44(auVar14._8_4_,auVar14._0_4_);
      in_XMM2._8_4_ = auVar14._4_4_;
      in_XMM2._12_4_ = auVar14._12_4_;
      *(undefined8 *)((longlong)auStack_1030 + uVar6) = in_XMM2._0_8_;
      uVar6 = uVar6 + 0x10;
    } while ((longlong)uVar7 < (longlong)(int)(uVar8 - (uVar8 & 0x80000007)));
  }
  for (lVar12 = (longlong)(int)uVar10; lVar12 < (longlong)uVar9; lVar12 = lVar12 + 1) {
    uVar2 = *(ushort *)((longlong)auStack_830 + lVar12 * 2 + -8);
    *(ushort *)((longlong)auStack_1030 + lVar12 * 2 + -8) =
         uVar2 - (-(ushort)(uVar2 - 0x61 < 0x1a) & 0x20);
  }
  *(undefined2 *)((longlong)auStack_1030 + uVar9 * 2 + -8) = 0;
  local_1058.Data = (FScriptContainerElement *)0x0;
  sVar4 = wcslen(local_1038);
  local_1048 = UE::Core::Private::GetConvertedLength((uchar *)0x0,local_1038,(int)sVar4);
  uVar8 = local_1048 + 1;
  uVar10 = uVar8;
  if (uVar8 < 0x81) {
    if (local_1058.Data == (FScriptContainerElement *)0x0) goto LAB_1419cdd5e;
    uVar10 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1058,0,uVar10,1);
LAB_1419cdd5e:
  local_1050 = local_10d8;
  if (local_1058.Data != (FScriptContainerElement *)0x0) {
    local_1050 = local_1058.Data;
  }
  UE::Core::Private::Convert((uchar *)local_1050,uVar8,local_1038,(int)sVar4 + 1);
  uVar5 = CityHash64WithSeed((char *)local_1050,local_1048,(longlong)(int)uVar3);
  this->Hash = uVar5;
  if (local_1058.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1058.Data);
  }
  return this;
}

// FHashedName @ 1419cde30

FHashedName * __thiscall FHashedName::FHashedName(FHashedName *this,FString *param_1)

{
  int iVar1;
  FName *pFVar2;
  int iVar3;
  wchar_t *pwVar4;
  FName local_res8 [4];
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(local_res8,iVar3,pwVar4,FNAME_Add);
  FHashedName(this,pFVar2);
  return this;
}

// FHashedName @ 1419cde80

FHashedName * __thiscall FHashedName::FHashedName(FHashedName *this,wchar_t *param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,param_1);
  FHashedName(this,pFVar1);
  return this;
}

// FHashedName @ 1419cdeb0

FHashedName * __thiscall FHashedName::FHashedName(FHashedName *this,ulong64 param_1)

{
  this->Hash = param_1;
  return this;
}

// operator= @ 1419d41c0

FHashedName * __thiscall FHashedName::operator=(FHashedName *this,FHashedName *param_1)

{
  this->Hash = param_1->Hash;
  return this;
}

// GetTypeLayout @ 141a046a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FHashedName::GetTypeLayout(FHashedName *this)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FPlatformTypeLayoutParameters aFStackX_8 [4];
  
  if ((::TypeBuffer[0x67] & 2) != 0) {
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  pwVar3 = L"ash";
  ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
  ::TypeBuffer[0x58] = '\b';
  ::TypeBuffer[0x59] = '\0';
  ::TypeBuffer[0x5a] = '\0';
  ::TypeBuffer[0x5b] = '\0';
  DAT_154f116d2 = '\0';
  ::TypeBuffer[0x60] = '\b';
  ::TypeBuffer[0x61] = '\0';
  ::TypeBuffer[0x62] = '\0';
  ::TypeBuffer[99] = '\0';
  ::TypeBuffer._8_8_ = u_FHashedName;
  ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
  ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
  ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
  ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
  ::TypeBuffer._64_8_ = Freeze::DefaultToString;
  ::TypeBuffer._24_8_ = InternalDestroy;
  ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FHashedName,0>::Do;
  `public:_static_void___cdecl_FHashedName::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "H";
  wVar1 = L'H';
  ::TypeBuffer[100] = '\0';
  ::TypeBuffer[0x5c] = 0xff;
  ::TypeBuffer[0x5d] = 0xff;
  ::TypeBuffer[0x5e] = 0xff;
  ::TypeBuffer[0x5f] = 0xff;
  do {
    if (wVar1 == L'_') {
      wVar1 = *pwVar3;
      pwVar2 = DeprecatedName;
      if (wVar1 == *DeprecatedName) {
        do {
          if (wVar1 == L'\0') goto LAB_141a23f76;
          wVar1 = pwVar3[1];
          pwVar3 = pwVar3 + 1;
          pwVar2 = pwVar2 + 1;
        } while (wVar1 == *pwVar2);
      }
      DAT_154f116d2 = DAT_154f116d2 + (char)((longlong)pwVar2 - (longlong)DeprecatedName >> 1);
    }
    wVar1 = *pwVar3;
    DAT_154f116d2 = DAT_154f116d2 + '\x01';
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
LAB_141a23f76:
  if ((DAT_154f115af & 2) == 0) {
    DAT_154f115af = DAT_154f115af | 3;
    _DAT_154f115a0 = 8;
    _DAT_154f11550 = L"unsigned long long";
    _DAT_154f11568 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallWriteMemoryImage;
    _DAT_154f11570 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallUnfrozenCopy;
    _DAT_154f11578 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallAppendHash;
    _DAT_154f11580 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallGetTargetAlignment;
    _DAT_154f11588 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallToString;
    _DAT_154f11560 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallDestroy;
    _DAT_154f115a8 = 8;
    DAT_154f115ac = 0;
    _DAT_154f115a4 = 8;
  }
  _DAT_154f116c8 = 0;
  _DAT_154f116b0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<unsigned___int64>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_154f116cc = 1;
  _DAT_154f116c0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_154f116b8 = ::TypeBuffer._16_8_;
  ::TypeBuffer._16_8_ =
       &`public:_static_void___cdecl_FHashedName::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  _DAT_154f116d0 = 0;
  aFStackX_8[0].Flags = 5;
  aFStackX_8[0].MaxFieldAlignment = 8;
  InitializeSizeFromFields((FTypeLayoutDesc *)::TypeBuffer,aFStackX_8);
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 141a07260

void __cdecl
FHashedName::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  return;
}

// StaticGetTypeLayout @ 141a23e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FHashedName::StaticGetTypeLayout(void)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FPlatformTypeLayoutParameters local_res8 [4];
  
  if ((::TypeBuffer[0x67] & 2) != 0) {
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  pwVar3 = L"ash";
  ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
  ::TypeBuffer[0x58] = '\b';
  ::TypeBuffer[0x59] = '\0';
  ::TypeBuffer[0x5a] = '\0';
  ::TypeBuffer[0x5b] = '\0';
  DAT_154f116d2 = '\0';
  ::TypeBuffer[0x60] = '\b';
  ::TypeBuffer[0x61] = '\0';
  ::TypeBuffer[0x62] = '\0';
  ::TypeBuffer[99] = '\0';
  ::TypeBuffer._8_8_ = u_FHashedName;
  ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
  ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
  ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
  ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
  ::TypeBuffer._64_8_ = Freeze::DefaultToString;
  ::TypeBuffer._24_8_ = InternalDestroy;
  ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FHashedName,0>::Do;
  `public:_static_void___cdecl_FHashedName::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "H";
  wVar1 = L'H';
  ::TypeBuffer[100] = '\0';
  ::TypeBuffer[0x5c] = 0xff;
  ::TypeBuffer[0x5d] = 0xff;
  ::TypeBuffer[0x5e] = 0xff;
  ::TypeBuffer[0x5f] = 0xff;
  do {
    if (wVar1 == L'_') {
      wVar1 = *pwVar3;
      pwVar2 = DeprecatedName;
      if (wVar1 == *DeprecatedName) {
        do {
          if (wVar1 == L'\0') goto LAB_141a23f76;
          wVar1 = pwVar3[1];
          pwVar3 = pwVar3 + 1;
          pwVar2 = pwVar2 + 1;
        } while (wVar1 == *pwVar2);
      }
      DAT_154f116d2 = DAT_154f116d2 + (char)((longlong)pwVar2 - (longlong)DeprecatedName >> 1);
    }
    wVar1 = *pwVar3;
    DAT_154f116d2 = DAT_154f116d2 + '\x01';
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
LAB_141a23f76:
  if ((DAT_154f115af & 2) == 0) {
    DAT_154f115af = DAT_154f115af | 3;
    _DAT_154f115a0 = 8;
    _DAT_154f11550 = L"unsigned long long";
    _DAT_154f11568 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallWriteMemoryImage;
    _DAT_154f11570 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallUnfrozenCopy;
    _DAT_154f11578 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallAppendHash;
    _DAT_154f11580 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallGetTargetAlignment;
    _DAT_154f11588 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallToString;
    _DAT_154f11560 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallDestroy;
    _DAT_154f115a8 = 8;
    DAT_154f115ac = 0;
    _DAT_154f115a4 = 8;
  }
  _DAT_154f116c8 = 0;
  _DAT_154f116b0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<unsigned___int64>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_154f116cc = 1;
  _DAT_154f116c0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_154f116b8 = ::TypeBuffer._16_8_;
  ::TypeBuffer._16_8_ =
       &`public:_static_void___cdecl_FHashedName::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  _DAT_154f116d0 = 0;
  local_res8[0].Flags = 5;
  local_res8[0].MaxFieldAlignment = 8;
  InitializeSizeFromFields((FTypeLayoutDesc *)::TypeBuffer,local_res8);
  return (FTypeLayoutDesc *)::TypeBuffer;
}

