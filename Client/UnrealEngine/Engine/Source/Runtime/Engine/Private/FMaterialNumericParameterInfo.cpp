// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetTypeLayout @ 147f7cce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

FTypeLayoutDesc * __thiscall
FMaterialNumericParameterInfo::GetTypeLayout(FMaterialNumericParameterInfo *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x1c';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialNumeri;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialNumericParameterInfo,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialNumericParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DefaultValueOffset";
    DAT_1552160e2 = Freeze::FindFieldNameLength(L"DefaultValueOffset");
    _DAT_1552160c0 = StaticGetTypeLayoutDesc<unsigned_int>();
    DAT_1552160c8 = ::TypeBuffer[0x10];
    DAT_1552160c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552160c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552160c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552160c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552160c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552160c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552160c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialNumericParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552160d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552160d8 = 0x18;
    _DAT_1552160dc = 1;
    _DAT_1552160e0 = 0;
    `public:_static_void___cdecl_FMaterialNumericParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterType";
    DAT_1552160b2 = Freeze::FindFieldNameLength(L"ParameterType");
    if ((DAT_155215c4f & 2) == 0) {
      DAT_155215c4f = DAT_155215c4f | 3;
      _DAT_155215c40 = 1;
      _DAT_155215bf0 = L"EMaterialParameterType";
      _DAT_155215c08 = TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallWriteMemoryImage
      ;
      _DAT_155215c10 = TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallUnfrozenCopy;
      _DAT_155215c18 = TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallAppendHash;
      _DAT_155215c20 =
           TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallGetTargetAlignment;
      _DAT_155215c28 = TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallToString;
      _DAT_155215c00 = TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallDestroy;
      _DAT_155215c48 = 1;
      DAT_155215c4c = 0;
      _DAT_155215c44 = 1;
    }
    _DAT_1552160a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216090 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<EMaterialParameterType>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155216098 = ::TypeBuffer[0x10];
    DAT_155216098_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216098_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216098_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216098_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216098_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216098_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216098_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialNumericParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552160a8 = 0x14;
    _DAT_1552160ac = 1;
    _DAT_1552160b0 = 0;
    `public:_static_void___cdecl_FMaterialNumericParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterInfo";
    DAT_155216082 = Freeze::FindFieldNameLength(L"ParameterInfo");
    _DAT_155216060 = FMemoryImageMaterialParameterInfo::StaticGetTypeLayout();
    _DAT_155216070 = Freeze::DefaultWriteMemoryImageField;
    DAT_155216068 = ::TypeBuffer[0x10];
    DAT_155216068_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216068_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216068_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216068_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216068_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216068_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216068_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155216078 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialNumericParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15521607c = 1;
    _DAT_155216080 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 147f7f6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FMaterialNumericParameterInfo::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = _UNK_1506d61ec;
  uVar3 = _UNK_1506d61e8;
  uVar2 = _UNK_1506d61e4;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined4 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x18) = uVar1;
  return;
}

// StaticGetTypeLayout @ 147f8a0f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMaterialNumericParameterInfo::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x1c';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialNumeri;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialNumericParameterInfo,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialNumericParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DefaultValueOffset";
    DAT_1552160e2 = Freeze::FindFieldNameLength(L"DefaultValueOffset");
    _DAT_1552160c0 = StaticGetTypeLayoutDesc<unsigned_int>();
    DAT_1552160c8 = ::TypeBuffer[0x10];
    DAT_1552160c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552160c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552160c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552160c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552160c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552160c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552160c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialNumericParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552160d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552160d8 = 0x18;
    _DAT_1552160dc = 1;
    _DAT_1552160e0 = 0;
    `public:_static_void___cdecl_FMaterialNumericParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterType";
    DAT_1552160b2 = Freeze::FindFieldNameLength(L"ParameterType");
    if ((DAT_155215c4f & 2) == 0) {
      DAT_155215c4f = DAT_155215c4f | 3;
      _DAT_155215c40 = 1;
      _DAT_155215bf0 = L"EMaterialParameterType";
      _DAT_155215c08 = TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallWriteMemoryImage
      ;
      _DAT_155215c10 = TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallUnfrozenCopy;
      _DAT_155215c18 = TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallAppendHash;
      _DAT_155215c20 =
           TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallGetTargetAlignment;
      _DAT_155215c28 = TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallToString;
      _DAT_155215c00 = TStaticGetTypeLayoutHelper<enum_EMaterialParameterType>::CallDestroy;
      _DAT_155215c48 = 1;
      DAT_155215c4c = 0;
      _DAT_155215c44 = 1;
    }
    _DAT_1552160a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216090 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<EMaterialParameterType>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155216098 = ::TypeBuffer[0x10];
    DAT_155216098_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216098_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216098_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216098_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216098_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216098_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216098_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialNumericParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552160a8 = 0x14;
    _DAT_1552160ac = 1;
    _DAT_1552160b0 = 0;
    `public:_static_void___cdecl_FMaterialNumericParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterInfo";
    DAT_155216082 = Freeze::FindFieldNameLength(L"ParameterInfo");
    _DAT_155216060 = FMemoryImageMaterialParameterInfo::StaticGetTypeLayout();
    _DAT_155216070 = Freeze::DefaultWriteMemoryImageField;
    DAT_155216068 = ::TypeBuffer[0x10];
    DAT_155216068_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216068_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216068_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216068_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216068_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216068_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216068_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155216078 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialNumericParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15521607c = 1;
    _DAT_155216080 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

