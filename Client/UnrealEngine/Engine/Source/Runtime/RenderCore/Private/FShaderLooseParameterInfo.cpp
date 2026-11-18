// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// GetTypeLayout @ 145e156d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FShaderLooseParameterInfo::GetTypeLayout(FShaderLooseParameterInfo *this)

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
    ::TypeBuffer._8_8_ = u_FShaderLoosePar;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderLooseParameterInfo,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderLooseParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Size";
    DAT_15518d2a2 = Freeze::FindFieldNameLength(L"Size");
    _DAT_15518d280 = StaticGetTypeLayoutDesc<unsigned_short>();
    DAT_15518d288 = ::TypeBuffer[0x10];
    DAT_15518d288_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d288_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d288_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d288_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d288_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d288_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d288_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderLooseParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d290 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518d298 = 2;
    _DAT_15518d29c = 1;
    _DAT_15518d2a0 = 0;
    `public:_static_void___cdecl_FShaderLooseParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BaseIndex";
    DAT_15518d272 = Freeze::FindFieldNameLength(L"BaseIndex");
    _DAT_15518d250 = StaticGetTypeLayoutDesc<unsigned_short>();
    _DAT_15518d260 = Freeze::DefaultWriteMemoryImageField;
    DAT_15518d258 = ::TypeBuffer[0x10];
    DAT_15518d258_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d258_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d258_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d258_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d258_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d258_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d258_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_15518d268 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderLooseParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d26c = 1;
    _DAT_15518d270 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 145e18780

void __cdecl
FShaderLooseParameterInfo::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  return;
}

// StaticGetTypeLayout @ 145e30a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FShaderLooseParameterInfo::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = u_FShaderLoosePar;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderLooseParameterInfo,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderLooseParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Size";
    DAT_15518d2a2 = Freeze::FindFieldNameLength(L"Size");
    _DAT_15518d280 = StaticGetTypeLayoutDesc<unsigned_short>();
    DAT_15518d288 = ::TypeBuffer[0x10];
    DAT_15518d288_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d288_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d288_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d288_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d288_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d288_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d288_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderLooseParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d290 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518d298 = 2;
    _DAT_15518d29c = 1;
    _DAT_15518d2a0 = 0;
    `public:_static_void___cdecl_FShaderLooseParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BaseIndex";
    DAT_15518d272 = Freeze::FindFieldNameLength(L"BaseIndex");
    _DAT_15518d250 = StaticGetTypeLayoutDesc<unsigned_short>();
    _DAT_15518d260 = Freeze::DefaultWriteMemoryImageField;
    DAT_15518d258 = ::TypeBuffer[0x10];
    DAT_15518d258_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d258_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d258_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d258_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d258_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d258_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d258_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_15518d268 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderLooseParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d26c = 1;
    _DAT_15518d270 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

