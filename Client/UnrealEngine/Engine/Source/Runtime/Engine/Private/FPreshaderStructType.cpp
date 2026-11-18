// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetTypeLayout @ 1485cbba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
UE::Shader::FPreshaderStructType::GetTypeLayout(FPreshaderStructType *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_UE__Shader__FPr;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<UE::Shader::FPreshaderStructType,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_UE::Shader::FPreshaderStructType::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumComponents";
    DAT_155243072 = Freeze::FindFieldNameLength(L"NumComponents");
    _DAT_155243050 = StaticGetTypeLayoutDesc<int>();
    DAT_155243058 = ::TypeBuffer[0x10];
    DAT_155243058_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243058_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243058_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243058_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243058_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243058_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243058_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_UE::Shader::FPreshaderStructType::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243060 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243068 = 0xc;
    _DAT_15524306c = 1;
    _DAT_155243070 = 0;
    `public:_static_void___cdecl_UE::Shader::FPreshaderStructType::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ComponentTypeIndex";
    DAT_155243042 = Freeze::FindFieldNameLength(L"ComponentTypeIndex");
    _DAT_155243020 = StaticGetTypeLayoutDesc<int>();
    DAT_155243028 = ::TypeBuffer[0x10];
    DAT_155243028_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243028_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243028_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243028_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243028_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243028_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243028_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_UE::Shader::FPreshaderStructType::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243030 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243038 = 8;
    _DAT_15524303c = 1;
    _DAT_155243040 = 0;
    `public:_static_void___cdecl_UE::Shader::FPreshaderStructType::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "H";
    DAT_155243012 = Freeze::FindFieldNameLength(L"H");
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
    _DAT_155243000 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155242ff0 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<unsigned___int64>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155242ff8 = ::TypeBuffer[0x10];
    DAT_155242ff8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155242ff8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155242ff8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155242ff8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155242ff8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155242ff8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155242ff8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_UE::Shader::FPreshaderStructType::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243008 = 0;
    _DAT_15524300c = 1;
    _DAT_155243010 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 1485cdbd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Shader::FPreshaderStructType::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_1506d61e8;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// StaticGetTypeLayout @ 1485dc7d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl UE::Shader::FPreshaderStructType::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_UE__Shader__FPr;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<UE::Shader::FPreshaderStructType,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_UE::Shader::FPreshaderStructType::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumComponents";
    DAT_155243072 = Freeze::FindFieldNameLength(L"NumComponents");
    _DAT_155243050 = StaticGetTypeLayoutDesc<int>();
    DAT_155243058 = ::TypeBuffer[0x10];
    DAT_155243058_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243058_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243058_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243058_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243058_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243058_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243058_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_UE::Shader::FPreshaderStructType::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243060 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243068 = 0xc;
    _DAT_15524306c = 1;
    _DAT_155243070 = 0;
    `public:_static_void___cdecl_UE::Shader::FPreshaderStructType::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ComponentTypeIndex";
    DAT_155243042 = Freeze::FindFieldNameLength(L"ComponentTypeIndex");
    _DAT_155243020 = StaticGetTypeLayoutDesc<int>();
    DAT_155243028 = ::TypeBuffer[0x10];
    DAT_155243028_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243028_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243028_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243028_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243028_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243028_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243028_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_UE::Shader::FPreshaderStructType::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243030 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243038 = 8;
    _DAT_15524303c = 1;
    _DAT_155243040 = 0;
    `public:_static_void___cdecl_UE::Shader::FPreshaderStructType::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "H";
    DAT_155243012 = Freeze::FindFieldNameLength(L"H");
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
    _DAT_155243000 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155242ff0 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<unsigned___int64>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155242ff8 = ::TypeBuffer[0x10];
    DAT_155242ff8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155242ff8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155242ff8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155242ff8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155242ff8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155242ff8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155242ff8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_UE::Shader::FPreshaderStructType::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243008 = 0;
    _DAT_15524300c = 1;
    _DAT_155243010 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

