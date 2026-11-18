// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// GetTypeLayout @ 14213edf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FFreezablePerPlatformFloat::GetTypeLayout(FFreezablePerPlatformFloat *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x04';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FFreezablePerPl;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FFreezablePerPlatformFloat,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FFreezablePerPlatformFloat::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Default";
    DAT_15501dc4a = Freeze::FindFieldNameLength(L"Default");
    if ((DAT_15501d607 & 2) == 0) {
      DAT_15501d607 = DAT_15501d607 | 3;
      _DAT_15501d5f8 = 4;
      _DAT_15501d5a8 = L"float";
      _DAT_15501d5c0 = TStaticGetTypeLayoutHelper<float>::CallWriteMemoryImage;
      _DAT_15501d5c8 = TStaticGetTypeLayoutHelper<float>::CallUnfrozenCopy;
      _DAT_15501d5d0 = TStaticGetTypeLayoutHelper<float>::CallAppendHash;
      _DAT_15501d5d8 = TStaticGetTypeLayoutHelper<float>::CallGetTargetAlignment;
      _DAT_15501d5e0 = TStaticGetTypeLayoutHelper<float>::CallToString;
      _DAT_15501d5b8 = TStaticGetTypeLayoutHelper<float>::CallDestroy;
      _DAT_15501d600 = 4;
      DAT_15501d604 = 0;
      _DAT_15501d5fc = 4;
    }
    _DAT_15501dc40 = 0;
    _DAT_15501dc28 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<float>::Do(void)'
          ::__l2::TypeBuffer;
    _DAT_15501dc44 = 1;
    _DAT_15501dc38 = Freeze::DefaultWriteMemoryImageField;
    DAT_15501dc30 = ::TypeBuffer[0x10];
    DAT_15501dc30_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15501dc30_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15501dc30_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15501dc30_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15501dc30_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15501dc30_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15501dc30_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FFreezablePerPlatformFloat::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15501dc48 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 1421431d0

void __cdecl
FFreezablePerPlatformFloat::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  return;
}

// StaticGetTypeLayout @ 142152700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FFreezablePerPlatformFloat::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x04';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FFreezablePerPl;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FFreezablePerPlatformFloat,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FFreezablePerPlatformFloat::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Default";
    DAT_15501dc4a = Freeze::FindFieldNameLength(L"Default");
    if ((DAT_15501d607 & 2) == 0) {
      DAT_15501d607 = DAT_15501d607 | 3;
      _DAT_15501d5f8 = 4;
      _DAT_15501d5a8 = L"float";
      _DAT_15501d5c0 = TStaticGetTypeLayoutHelper<float>::CallWriteMemoryImage;
      _DAT_15501d5c8 = TStaticGetTypeLayoutHelper<float>::CallUnfrozenCopy;
      _DAT_15501d5d0 = TStaticGetTypeLayoutHelper<float>::CallAppendHash;
      _DAT_15501d5d8 = TStaticGetTypeLayoutHelper<float>::CallGetTargetAlignment;
      _DAT_15501d5e0 = TStaticGetTypeLayoutHelper<float>::CallToString;
      _DAT_15501d5b8 = TStaticGetTypeLayoutHelper<float>::CallDestroy;
      _DAT_15501d600 = 4;
      DAT_15501d604 = 0;
      _DAT_15501d5fc = 4;
    }
    _DAT_15501dc40 = 0;
    _DAT_15501dc28 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<float>::Do(void)'
          ::__l2::TypeBuffer;
    _DAT_15501dc44 = 1;
    _DAT_15501dc38 = Freeze::DefaultWriteMemoryImageField;
    DAT_15501dc30 = ::TypeBuffer[0x10];
    DAT_15501dc30_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15501dc30_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15501dc30_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15501dc30_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15501dc30_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15501dc30_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15501dc30_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FFreezablePerPlatformFloat::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15501dc48 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

