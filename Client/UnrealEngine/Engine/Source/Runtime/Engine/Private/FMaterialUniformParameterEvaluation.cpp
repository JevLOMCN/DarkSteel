// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetTypeLayout @ 147f7cd30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FMaterialUniformParameterEvaluation::GetTypeLayout(FMaterialUniformParameterEvaluation *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x04';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialUniformParameterEvaluation,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialUniformParameterEvaluation::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BufferOffset";
    DAT_155215f02 = Freeze::FindFieldNameLength(L"BufferOffset");
    _DAT_155215ee0 = StaticGetTypeLayoutDesc<unsigned_short>();
    DAT_155215ee8 = ::TypeBuffer[0x10];
    DAT_155215ee8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215ee8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215ee8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215ee8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215ee8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215ee8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215ee8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformParameterEvaluation::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215ef0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215ef8 = 2;
    _DAT_155215efc = 1;
    _DAT_155215f00 = 0;
    `public:_static_void___cdecl_FMaterialUniformParameterEvaluation::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterIndex";
    DAT_155215ed2 = Freeze::FindFieldNameLength(L"ParameterIndex");
    _DAT_155215eb0 = StaticGetTypeLayoutDesc<unsigned_short>();
    _DAT_155215ec0 = Freeze::DefaultWriteMemoryImageField;
    DAT_155215eb8 = ::TypeBuffer[0x10];
    DAT_155215eb8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215eb8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215eb8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215eb8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215eb8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215eb8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215eb8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155215ec8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformParameterEvaluation::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215ecc = 1;
    _DAT_155215ed0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 147f7f7f0

void __cdecl
FMaterialUniformParameterEvaluation::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  return;
}

// StaticGetTypeLayout @ 147f8ac00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMaterialUniformParameterEvaluation::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x04';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialUniformParameterEvaluation,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialUniformParameterEvaluation::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BufferOffset";
    DAT_155215f02 = Freeze::FindFieldNameLength(L"BufferOffset");
    _DAT_155215ee0 = StaticGetTypeLayoutDesc<unsigned_short>();
    DAT_155215ee8 = ::TypeBuffer[0x10];
    DAT_155215ee8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215ee8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215ee8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215ee8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215ee8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215ee8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215ee8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformParameterEvaluation::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215ef0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215ef8 = 2;
    _DAT_155215efc = 1;
    _DAT_155215f00 = 0;
    `public:_static_void___cdecl_FMaterialUniformParameterEvaluation::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterIndex";
    DAT_155215ed2 = Freeze::FindFieldNameLength(L"ParameterIndex");
    _DAT_155215eb0 = StaticGetTypeLayoutDesc<unsigned_short>();
    _DAT_155215ec0 = Freeze::DefaultWriteMemoryImageField;
    DAT_155215eb8 = ::TypeBuffer[0x10];
    DAT_155215eb8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215eb8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215eb8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215eb8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215eb8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215eb8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215eb8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155215ec8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformParameterEvaluation::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215ecc = 1;
    _DAT_155215ed0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

