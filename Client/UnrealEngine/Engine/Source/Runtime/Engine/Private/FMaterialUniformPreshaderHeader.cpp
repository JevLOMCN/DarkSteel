// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetTypeLayout @ 147f7cd50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FMaterialUniformPreshaderHeader::GetTypeLayout(FMaterialUniformPreshaderHeader *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FMaterialUnifor;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialUniformPreshaderHeader,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumFields";
    DAT_155216052 = Freeze::FindFieldNameLength(L"NumFields");
    _DAT_155216030 = StaticGetTypeLayoutDesc<unsigned_int>();
    DAT_155216038 = ::TypeBuffer[0x10];
    DAT_155216038_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216038_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216038_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216038_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216038_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216038_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216038_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216040 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216048 = 0xc;
    _DAT_15521604c = 1;
    _DAT_155216050 = 0;
    `public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "FieldIndex";
    DAT_155216022 = Freeze::FindFieldNameLength(L"FieldIndex");
    _DAT_155216000 = StaticGetTypeLayoutDesc<unsigned_int>();
    DAT_155216008 = ::TypeBuffer[0x10];
    DAT_155216008_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216008_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216008_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216008_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216008_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216008_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216008_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216010 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216018 = 8;
    _DAT_15521601c = 1;
    _DAT_155216020 = 0;
    `public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OpcodeSize";
    DAT_155215ff2 = Freeze::FindFieldNameLength(L"OpcodeSize");
    _DAT_155215fd0 = StaticGetTypeLayoutDesc<unsigned_int>();
    DAT_155215fd8 = ::TypeBuffer[0x10];
    DAT_155215fd8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215fd8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215fd8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215fd8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215fd8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215fd8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215fd8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215fe0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215fe8 = 4;
    _DAT_155215fec = 1;
    _DAT_155215ff0 = 0;
    `public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OpcodeOffset";
    DAT_155215fc2 = Freeze::FindFieldNameLength(L"OpcodeOffset");
    _DAT_155215fa0 = StaticGetTypeLayoutDesc<unsigned_int>();
    DAT_155215fa8 = ::TypeBuffer[0x10];
    DAT_155215fa8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215fa8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215fa8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215fa8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215fa8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215fa8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215fa8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155215fb0 = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215fb8 = 0;
    _DAT_155215fbc = 1;
    _DAT_155215fc0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 147f7f820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FMaterialUniformPreshaderHeader::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_1506d61e8;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// StaticGetTypeLayout @ 147f8b070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMaterialUniformPreshaderHeader::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FMaterialUnifor;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialUniformPreshaderHeader,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumFields";
    DAT_155216052 = Freeze::FindFieldNameLength(L"NumFields");
    _DAT_155216030 = StaticGetTypeLayoutDesc<unsigned_int>();
    DAT_155216038 = ::TypeBuffer[0x10];
    DAT_155216038_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216038_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216038_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216038_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216038_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216038_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216038_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216040 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216048 = 0xc;
    _DAT_15521604c = 1;
    _DAT_155216050 = 0;
    `public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "FieldIndex";
    DAT_155216022 = Freeze::FindFieldNameLength(L"FieldIndex");
    _DAT_155216000 = StaticGetTypeLayoutDesc<unsigned_int>();
    DAT_155216008 = ::TypeBuffer[0x10];
    DAT_155216008_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216008_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216008_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216008_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216008_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216008_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216008_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216010 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216018 = 8;
    _DAT_15521601c = 1;
    _DAT_155216020 = 0;
    `public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OpcodeSize";
    DAT_155215ff2 = Freeze::FindFieldNameLength(L"OpcodeSize");
    _DAT_155215fd0 = StaticGetTypeLayoutDesc<unsigned_int>();
    DAT_155215fd8 = ::TypeBuffer[0x10];
    DAT_155215fd8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215fd8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215fd8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215fd8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215fd8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215fd8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215fd8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215fe0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215fe8 = 4;
    _DAT_155215fec = 1;
    _DAT_155215ff0 = 0;
    `public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OpcodeOffset";
    DAT_155215fc2 = Freeze::FindFieldNameLength(L"OpcodeOffset");
    _DAT_155215fa0 = StaticGetTypeLayoutDesc<unsigned_int>();
    DAT_155215fa8 = ::TypeBuffer[0x10];
    DAT_155215fa8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215fa8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215fa8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215fa8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215fa8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215fa8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215fa8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155215fb0 = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformPreshaderHeader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215fb8 = 0;
    _DAT_155215fbc = 1;
    _DAT_155215fc0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

