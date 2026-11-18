// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FSubstrateMaterialCompilationOutput @ 148ae9ac0

/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

FSubstrateMaterialCompilationOutput * __thiscall
FSubstrateMaterialCompilationOutput::FSubstrateMaterialCompilationOutput
          (FSubstrateMaterialCompilationOutput *this)

{
  this->SubstrateMaterialType = '\0';
  this->SubstrateClosureCount = '\0';
  this->SubstrateMaterialBsdfFeatures = None;
  this->SubstrateUintPerPixel = '\0';
  return this;
}

// GetTypeLayout @ 148af1d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

FTypeLayoutDesc * __thiscall
FSubstrateMaterialCompilationOutput::GetTypeLayout(FSubstrateMaterialCompilationOutput *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x06';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSubstrateMater;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSubstrateMaterialCompilationOutput,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SubstrateMaterialBsdfFeatures";
    DAT_15525e3ca = Freeze::FindFieldNameLength(L"SubstrateMaterialBsdfFeatures");
    if ((DAT_15525e30f & 2) == 0) {
      DAT_15525e30f = DAT_15525e30f | 3;
      _DAT_15525e300 = 2;
      _DAT_15525e2b0 = L"ESubstrateBsdfFeature";
      _DAT_15525e2c8 = TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallWriteMemoryImage;
      _DAT_15525e2d0 = TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallUnfrozenCopy;
      _DAT_15525e2d8 = TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallAppendHash;
      _DAT_15525e2e0 =
           TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallGetTargetAlignment;
      _DAT_15525e2e8 = TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallToString;
      _DAT_15525e2c0 = TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallDestroy;
      _DAT_15525e308 = 2;
      DAT_15525e30c = 0;
      _DAT_15525e304 = 2;
    }
    _DAT_15525e3c0 = 4;
    _DAT_15525e3a8 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<ESubstrateBsdfFeature>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_15525e3b0 = ::TypeBuffer[0x10];
    DAT_15525e3b0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15525e3b0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15525e3b0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15525e3b0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15525e3b0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15525e3b0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15525e3b0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15525e3b8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15525e3c4 = 1;
    _DAT_15525e3c8 = 0;
    `public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SubstrateUintPerPixel";
    DAT_15525e39a = Freeze::FindFieldNameLength(L"SubstrateUintPerPixel");
    _DAT_15525e378 = StaticGetTypeLayoutDesc<unsigned_char>();
    DAT_15525e380 = ::TypeBuffer[0x10];
    DAT_15525e380_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15525e380_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15525e380_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15525e380_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15525e380_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15525e380_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15525e380_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15525e388 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15525e390 = 2;
    _DAT_15525e394 = 1;
    _DAT_15525e398 = 0;
    `public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SubstrateClosureCount";
    DAT_15525e36a = Freeze::FindFieldNameLength(L"SubstrateClosureCount");
    _DAT_15525e348 = StaticGetTypeLayoutDesc<unsigned_char>();
    DAT_15525e350 = ::TypeBuffer[0x10];
    DAT_15525e350_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15525e350_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15525e350_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15525e350_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15525e350_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15525e350_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15525e350_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15525e358 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15525e360 = 1;
    _DAT_15525e364 = 1;
    _DAT_15525e368 = 0;
    `public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SubstrateMaterialType";
    DAT_15525e33a = Freeze::FindFieldNameLength(L"SubstrateMaterialType");
    _DAT_15525e318 = StaticGetTypeLayoutDesc<unsigned_char>();
    _DAT_15525e328 = Freeze::DefaultWriteMemoryImageField;
    DAT_15525e320 = ::TypeBuffer[0x10];
    DAT_15525e320_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15525e320_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15525e320_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15525e320_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15525e320_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15525e320_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15525e320_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_15525e330 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15525e334 = 1;
    _DAT_15525e338 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 148af26d0

void __cdecl
FSubstrateMaterialCompilationOutput::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  *(undefined2 *)((longlong)param_1 + 4) = 0xfefe;
  return;
}

// StaticGetTypeLayout @ 148af6b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FSubstrateMaterialCompilationOutput::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x06';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSubstrateMater;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSubstrateMaterialCompilationOutput,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SubstrateMaterialBsdfFeatures";
    DAT_15525e3ca = Freeze::FindFieldNameLength(L"SubstrateMaterialBsdfFeatures");
    if ((DAT_15525e30f & 2) == 0) {
      DAT_15525e30f = DAT_15525e30f | 3;
      _DAT_15525e300 = 2;
      _DAT_15525e2b0 = L"ESubstrateBsdfFeature";
      _DAT_15525e2c8 = TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallWriteMemoryImage;
      _DAT_15525e2d0 = TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallUnfrozenCopy;
      _DAT_15525e2d8 = TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallAppendHash;
      _DAT_15525e2e0 =
           TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallGetTargetAlignment;
      _DAT_15525e2e8 = TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallToString;
      _DAT_15525e2c0 = TStaticGetTypeLayoutHelper<enum_ESubstrateBsdfFeature>::CallDestroy;
      _DAT_15525e308 = 2;
      DAT_15525e30c = 0;
      _DAT_15525e304 = 2;
    }
    _DAT_15525e3c0 = 4;
    _DAT_15525e3a8 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<ESubstrateBsdfFeature>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_15525e3b0 = ::TypeBuffer[0x10];
    DAT_15525e3b0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15525e3b0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15525e3b0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15525e3b0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15525e3b0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15525e3b0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15525e3b0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15525e3b8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15525e3c4 = 1;
    _DAT_15525e3c8 = 0;
    `public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SubstrateUintPerPixel";
    DAT_15525e39a = Freeze::FindFieldNameLength(L"SubstrateUintPerPixel");
    _DAT_15525e378 = StaticGetTypeLayoutDesc<unsigned_char>();
    DAT_15525e380 = ::TypeBuffer[0x10];
    DAT_15525e380_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15525e380_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15525e380_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15525e380_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15525e380_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15525e380_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15525e380_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15525e388 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15525e390 = 2;
    _DAT_15525e394 = 1;
    _DAT_15525e398 = 0;
    `public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SubstrateClosureCount";
    DAT_15525e36a = Freeze::FindFieldNameLength(L"SubstrateClosureCount");
    _DAT_15525e348 = StaticGetTypeLayoutDesc<unsigned_char>();
    DAT_15525e350 = ::TypeBuffer[0x10];
    DAT_15525e350_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15525e350_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15525e350_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15525e350_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15525e350_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15525e350_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15525e350_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15525e358 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15525e360 = 1;
    _DAT_15525e364 = 1;
    _DAT_15525e368 = 0;
    `public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SubstrateMaterialType";
    DAT_15525e33a = Freeze::FindFieldNameLength(L"SubstrateMaterialType");
    _DAT_15525e318 = StaticGetTypeLayoutDesc<unsigned_char>();
    _DAT_15525e328 = Freeze::DefaultWriteMemoryImageField;
    DAT_15525e320 = ::TypeBuffer[0x10];
    DAT_15525e320_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15525e320_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15525e320_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15525e320_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15525e320_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15525e320_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15525e320_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_15525e330 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSubstrateMaterialCompilationOutput::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15525e334 = 1;
    _DAT_15525e338 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

