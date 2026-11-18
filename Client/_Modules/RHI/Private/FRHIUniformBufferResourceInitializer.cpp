// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// GetTypeLayout @ 145caece0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FTypeLayoutDesc * __thiscall
FRHIUniformBufferResourceInitializer::GetTypeLayout(FRHIUniformBufferResourceInitializer *this)

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
    ::TypeBuffer._8_8_ = u_FRHIUniformBuff;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRHIUniformBufferResourceInitializer,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FRHIUniformBufferResourceInitializer::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MemberType";
    DAT_155178702 = Freeze::FindFieldNameLength(L"MemberType");
    if ((DAT_1551785d7 & 2) == 0) {
      DAT_1551785d7 = DAT_1551785d7 | 3;
      _DAT_1551785c8 = 1;
      _DAT_155178578 = L"EUniformBufferBaseType";
      _DAT_155178590 = TStaticGetTypeLayoutHelper<enum_EUniformBufferBaseType>::CallWriteMemoryImage
      ;
      _DAT_155178598 = TStaticGetTypeLayoutHelper<enum_EUniformBufferBaseType>::CallUnfrozenCopy;
      _DAT_1551785a0 = TStaticGetTypeLayoutHelper<enum_EUniformBufferBaseType>::CallAppendHash;
      _DAT_1551785a8 =
           TStaticGetTypeLayoutHelper<enum_EUniformBufferBaseType>::CallGetTargetAlignment;
      _DAT_1551785b0 = TStaticGetTypeLayoutHelper<enum_EUniformBufferBaseType>::CallToString;
      _DAT_155178588 = TStaticGetTypeLayoutHelper<enum_EUniformBufferBaseType>::CallDestroy;
      _DAT_1551785d0 = 1;
      DAT_1551785d4 = 0;
      _DAT_1551785cc = 1;
    }
    _DAT_1551786f8 = 2;
    _DAT_1551786e0 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<EUniformBufferBaseType>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_1551786e8 = ::TypeBuffer[0x10];
    DAT_1551786e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551786e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551786e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551786e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551786e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551786e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551786e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRHIUniformBufferResourceInitializer::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551786f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551786fc = 1;
    _DAT_155178700 = 0;
    `public:_static_void___cdecl_FRHIUniformBufferResourceInitializer::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MemberOffset";
    DAT_1551786d2 = Freeze::FindFieldNameLength(L"MemberOffset");
    _DAT_1551786b0 = StaticGetTypeLayoutDesc<unsigned_short>();
    _DAT_1551786c0 = Freeze::DefaultWriteMemoryImageField;
    DAT_1551786b8 = ::TypeBuffer[0x10];
    DAT_1551786b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551786b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551786b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551786b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551786b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551786b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551786b8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1551786c8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRHIUniformBufferResourceInitializer::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551786cc = 1;
    _DAT_1551786d0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 145cb1650

void __cdecl
FRHIUniformBufferResourceInitializer::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  return;
}

// StaticGetTypeLayout @ 145cc23e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FRHIUniformBufferResourceInitializer::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = u_FRHIUniformBuff;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRHIUniformBufferResourceInitializer,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FRHIUniformBufferResourceInitializer::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MemberType";
    DAT_155178702 = Freeze::FindFieldNameLength(L"MemberType");
    if ((DAT_1551785d7 & 2) == 0) {
      DAT_1551785d7 = DAT_1551785d7 | 3;
      _DAT_1551785c8 = 1;
      _DAT_155178578 = L"EUniformBufferBaseType";
      _DAT_155178590 = TStaticGetTypeLayoutHelper<enum_EUniformBufferBaseType>::CallWriteMemoryImage
      ;
      _DAT_155178598 = TStaticGetTypeLayoutHelper<enum_EUniformBufferBaseType>::CallUnfrozenCopy;
      _DAT_1551785a0 = TStaticGetTypeLayoutHelper<enum_EUniformBufferBaseType>::CallAppendHash;
      _DAT_1551785a8 =
           TStaticGetTypeLayoutHelper<enum_EUniformBufferBaseType>::CallGetTargetAlignment;
      _DAT_1551785b0 = TStaticGetTypeLayoutHelper<enum_EUniformBufferBaseType>::CallToString;
      _DAT_155178588 = TStaticGetTypeLayoutHelper<enum_EUniformBufferBaseType>::CallDestroy;
      _DAT_1551785d0 = 1;
      DAT_1551785d4 = 0;
      _DAT_1551785cc = 1;
    }
    _DAT_1551786f8 = 2;
    _DAT_1551786e0 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<EUniformBufferBaseType>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_1551786e8 = ::TypeBuffer[0x10];
    DAT_1551786e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551786e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551786e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551786e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551786e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551786e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551786e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRHIUniformBufferResourceInitializer::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551786f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551786fc = 1;
    _DAT_155178700 = 0;
    `public:_static_void___cdecl_FRHIUniformBufferResourceInitializer::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MemberOffset";
    DAT_1551786d2 = Freeze::FindFieldNameLength(L"MemberOffset");
    _DAT_1551786b0 = StaticGetTypeLayoutDesc<unsigned_short>();
    _DAT_1551786c0 = Freeze::DefaultWriteMemoryImageField;
    DAT_1551786b8 = ::TypeBuffer[0x10];
    DAT_1551786b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551786b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551786b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551786b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551786b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551786b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551786b8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1551786c8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRHIUniformBufferResourceInitializer::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551786cc = 1;
    _DAT_1551786d0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

