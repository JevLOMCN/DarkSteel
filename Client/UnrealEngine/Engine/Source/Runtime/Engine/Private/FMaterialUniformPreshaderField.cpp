// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetTypeLayout @ 147f7cd40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FMaterialUniformPreshaderField::GetTypeLayout(FMaterialUniformPreshaderField *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\f';
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialUniformPreshaderField,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialUniformPreshaderField::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Type";
    DAT_155215f92 = Freeze::FindFieldNameLength(L"Type");
    if ((DAT_155215b57 & 2) == 0) {
      DAT_155215b57 = DAT_155215b57 | 3;
      _DAT_155215b48 = 1;
      _DAT_155215af8 = L"UE::Shader::EValueType";
      _DAT_155215b10 = TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallWriteMemoryImage
      ;
      _DAT_155215b18 = TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallUnfrozenCopy;
      _DAT_155215b20 = TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallAppendHash;
      _DAT_155215b28 =
           TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallGetTargetAlignment;
      _DAT_155215b30 = TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallToString;
      _DAT_155215b08 = TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallDestroy;
      _DAT_155215b50 = 1;
      DAT_155215b54 = 0;
      _DAT_155215b4c = 1;
    }
    _DAT_155215f88 = 8;
    _DAT_155215f70 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<UE::Shader::EValueType>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155215f78 = ::TypeBuffer[0x10];
    DAT_155215f78_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215f78_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215f78_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215f78_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215f78_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215f78_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215f78_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformPreshaderField::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215f80 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215f8c = 1;
    _DAT_155215f90 = 0;
    `public:_static_void___cdecl_FMaterialUniformPreshaderField::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ComponentIndex";
    DAT_155215f62 = Freeze::FindFieldNameLength(L"ComponentIndex");
    _DAT_155215f40 = StaticGetTypeLayoutDesc<unsigned_int>();
    DAT_155215f48 = ::TypeBuffer[0x10];
    DAT_155215f48_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215f48_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215f48_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215f48_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215f48_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215f48_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215f48_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformPreshaderField::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215f50 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215f58 = 4;
    _DAT_155215f5c = 1;
    _DAT_155215f60 = 0;
    `public:_static_void___cdecl_FMaterialUniformPreshaderField::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BufferOffset";
    DAT_155215f32 = Freeze::FindFieldNameLength(L"BufferOffset");
    _DAT_155215f10 = StaticGetTypeLayoutDesc<unsigned_int>();
    _DAT_155215f20 = Freeze::DefaultWriteMemoryImageField;
    DAT_155215f18 = ::TypeBuffer[0x10];
    DAT_155215f18_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215f18_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215f18_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215f18_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215f18_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215f18_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215f18_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155215f28 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformPreshaderField::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215f2c = 1;
    _DAT_155215f30 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 147f7f800

void __cdecl
FMaterialUniformPreshaderField::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  *(undefined4 *)((longlong)param_1 + 8) = 0xfefefefe;
  return;
}

// StaticGetTypeLayout @ 147f8adb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMaterialUniformPreshaderField::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\f';
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialUniformPreshaderField,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialUniformPreshaderField::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Type";
    DAT_155215f92 = Freeze::FindFieldNameLength(L"Type");
    if ((DAT_155215b57 & 2) == 0) {
      DAT_155215b57 = DAT_155215b57 | 3;
      _DAT_155215b48 = 1;
      _DAT_155215af8 = L"UE::Shader::EValueType";
      _DAT_155215b10 = TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallWriteMemoryImage
      ;
      _DAT_155215b18 = TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallUnfrozenCopy;
      _DAT_155215b20 = TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallAppendHash;
      _DAT_155215b28 =
           TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallGetTargetAlignment;
      _DAT_155215b30 = TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallToString;
      _DAT_155215b08 = TStaticGetTypeLayoutHelper<enum_UE::Shader::EValueType>::CallDestroy;
      _DAT_155215b50 = 1;
      DAT_155215b54 = 0;
      _DAT_155215b4c = 1;
    }
    _DAT_155215f88 = 8;
    _DAT_155215f70 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<UE::Shader::EValueType>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155215f78 = ::TypeBuffer[0x10];
    DAT_155215f78_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215f78_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215f78_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215f78_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215f78_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215f78_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215f78_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformPreshaderField::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215f80 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215f8c = 1;
    _DAT_155215f90 = 0;
    `public:_static_void___cdecl_FMaterialUniformPreshaderField::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ComponentIndex";
    DAT_155215f62 = Freeze::FindFieldNameLength(L"ComponentIndex");
    _DAT_155215f40 = StaticGetTypeLayoutDesc<unsigned_int>();
    DAT_155215f48 = ::TypeBuffer[0x10];
    DAT_155215f48_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215f48_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215f48_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215f48_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215f48_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215f48_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215f48_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformPreshaderField::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215f50 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215f58 = 4;
    _DAT_155215f5c = 1;
    _DAT_155215f60 = 0;
    `public:_static_void___cdecl_FMaterialUniformPreshaderField::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BufferOffset";
    DAT_155215f32 = Freeze::FindFieldNameLength(L"BufferOffset");
    _DAT_155215f10 = StaticGetTypeLayoutDesc<unsigned_int>();
    _DAT_155215f20 = Freeze::DefaultWriteMemoryImageField;
    DAT_155215f18 = ::TypeBuffer[0x10];
    DAT_155215f18_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215f18_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215f18_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215f18_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215f18_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215f18_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215f18_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155215f28 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialUniformPreshaderField::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215f2c = 1;
    _DAT_155215f30 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

