// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// CallToString @ 1419e3d10

void __cdecl
FMemoryImageString::InternalLinkType<2>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  if (0 < *(int *)((longlong)param_1 + 8)) {
    TStringBuilderBase<wchar_t>::AppendfImpl(param_4->String,L"\"%s\"\n");
    return;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_4->String,L"\"\"\n",3);
  return;
}

// GetTypeLayout @ 141a046b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FMemoryImageString::GetTypeLayout(FMemoryImageString *this)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FPlatformTypeLayoutParameters aFStackX_8 [4];
  
  if ((::TypeBuffer[0x67] & 2) != 0) {
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  pwVar3 = L"ata";
  ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
  ::TypeBuffer[0x58] = '\x10';
  ::TypeBuffer[0x59] = '\0';
  ::TypeBuffer[0x5a] = '\0';
  ::TypeBuffer[0x5b] = '\0';
  DAT_154f116a2 = '\0';
  ::TypeBuffer[0x60] = '\b';
  ::TypeBuffer[0x61] = '\0';
  ::TypeBuffer[0x62] = '\0';
  ::TypeBuffer[99] = '\0';
  ::TypeBuffer._8_8_ = u_FMemoryImageStr;
  ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
  ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
  ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
  ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
  ::TypeBuffer._24_8_ = InternalDestroy;
  ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMemoryImageString,0>::Do;
  ::TypeBuffer._64_8_ = InternalLinkType<2>::CallToString;
  `public:_static_void___cdecl_FMemoryImageString::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "D";
  wVar1 = L'D';
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
          if (wVar1 == L'\0') goto LAB_141a241c6;
          wVar1 = pwVar3[1];
          pwVar3 = pwVar3 + 1;
          pwVar2 = pwVar2 + 1;
        } while (wVar1 == *pwVar2);
      }
      DAT_154f116a2 = DAT_154f116a2 + (char)((longlong)pwVar2 - (longlong)DeprecatedName >> 1);
    }
    wVar1 = *pwVar3;
    DAT_154f116a2 = DAT_154f116a2 + '\x01';
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
LAB_141a241c6:
  if ((DAT_154f1173f & 2) == 0) {
    DAT_154f1173f = DAT_154f1173f | 3;
    _DAT_154f11730 = 0x10;
    _DAT_154f116e0 = L"(TArray<T, AllocatorType>)";
    _DAT_154f116f8 =
         TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_154f11700 =
         TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy;
    _DAT_154f11708 =
         TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::CallAppendHash;
    _DAT_154f11710 =
         TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_154f11718 =
         TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::CallToString;
    _DAT_154f116f0 =
         TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::CallDestroy;
    _DAT_154f11738 = 8;
    DAT_154f1173c = 0;
    _DAT_154f11734 = 0x10;
  }
  _DAT_154f11698 = 0;
  _DAT_154f11680 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_154f1169c = 1;
  _DAT_154f11690 = Freeze::DefaultWriteMemoryImageField;
  _DAT_154f11688 = ::TypeBuffer._16_8_;
  ::TypeBuffer._16_8_ =
       &`public:_static_void___cdecl_FMemoryImageString::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  _DAT_154f116a0 = 0;
  aFStackX_8[0].Flags = 5;
  aFStackX_8[0].MaxFieldAlignment = 8;
  InitializeSizeFromFields((FTypeLayoutDesc *)::TypeBuffer,aFStackX_8);
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 141a07280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FMemoryImageString::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase(param_1);
  }
  uVar1 = _UNK_1506d61e8;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// StaticGetTypeLayout @ 141a240b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMemoryImageString::StaticGetTypeLayout(void)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FPlatformTypeLayoutParameters local_res8 [4];
  
  if ((::TypeBuffer[0x67] & 2) != 0) {
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  pwVar3 = L"ata";
  ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
  ::TypeBuffer[0x58] = '\x10';
  ::TypeBuffer[0x59] = '\0';
  ::TypeBuffer[0x5a] = '\0';
  ::TypeBuffer[0x5b] = '\0';
  DAT_154f116a2 = '\0';
  ::TypeBuffer[0x60] = '\b';
  ::TypeBuffer[0x61] = '\0';
  ::TypeBuffer[0x62] = '\0';
  ::TypeBuffer[99] = '\0';
  ::TypeBuffer._8_8_ = u_FMemoryImageStr;
  ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
  ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
  ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
  ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
  ::TypeBuffer._24_8_ = InternalDestroy;
  ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMemoryImageString,0>::Do;
  ::TypeBuffer._64_8_ = InternalLinkType<2>::CallToString;
  `public:_static_void___cdecl_FMemoryImageString::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "D";
  wVar1 = L'D';
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
          if (wVar1 == L'\0') goto LAB_141a241c6;
          wVar1 = pwVar3[1];
          pwVar3 = pwVar3 + 1;
          pwVar2 = pwVar2 + 1;
        } while (wVar1 == *pwVar2);
      }
      DAT_154f116a2 = DAT_154f116a2 + (char)((longlong)pwVar2 - (longlong)DeprecatedName >> 1);
    }
    wVar1 = *pwVar3;
    DAT_154f116a2 = DAT_154f116a2 + '\x01';
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
LAB_141a241c6:
  if ((DAT_154f1173f & 2) == 0) {
    DAT_154f1173f = DAT_154f1173f | 3;
    _DAT_154f11730 = 0x10;
    _DAT_154f116e0 = L"(TArray<T, AllocatorType>)";
    _DAT_154f116f8 =
         TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_154f11700 =
         TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy;
    _DAT_154f11708 =
         TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::CallAppendHash;
    _DAT_154f11710 =
         TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_154f11718 =
         TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::CallToString;
    _DAT_154f116f0 =
         TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::CallDestroy;
    _DAT_154f11738 = 8;
    DAT_154f1173c = 0;
    _DAT_154f11734 = 0x10;
  }
  _DAT_154f11698 = 0;
  _DAT_154f11680 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<wchar_t,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_154f1169c = 1;
  _DAT_154f11690 = Freeze::DefaultWriteMemoryImageField;
  _DAT_154f11688 = ::TypeBuffer._16_8_;
  ::TypeBuffer._16_8_ =
       &`public:_static_void___cdecl_FMemoryImageString::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  _DAT_154f116a0 = 0;
  local_res8[0].Flags = 5;
  local_res8[0].MaxFieldAlignment = 8;
  InitializeSizeFromFields((FTypeLayoutDesc *)::TypeBuffer,local_res8);
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// ToString @ 141a25600

void __thiscall
FMemoryImageString::ToString(FMemoryImageString *this,FMemoryToStringContext *param_1)

{
  if (0 < (this->Data).ArrayNum) {
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1->String,L"\"%s\"\n");
    return;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1->String,L"\"\"\n",3);
  return;
}

