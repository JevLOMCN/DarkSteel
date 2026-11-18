// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// Bind @ 145e8f800

void __thiscall
FShaderParameter::Bind
          (FShaderParameter *this,FShaderParameterMap *param_1,wchar_t *param_2,
          EShaderParameterFlags param_3)

{
  bool bVar1;
  size_t sVar2;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_2);
    local_18.Size = (int)sVar2;
  }
  bVar1 = FShaderParameterMap::FindParameterAllocation
                    (param_1,&local_18,&this->BufferIndex,&this->BaseIndex,&this->NumBytes);
  if ((!bVar1) && (param_3 == SPF_Mandatory)) {
    FailureToBindNonOptionalParameter(L"shader parameter",param_2);
  }
  return;
}

// GetTypeLayout @ 145ea2bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FShaderParameter::GetTypeLayout(FShaderParameter *this)

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
    ::TypeBuffer._8_8_ = u_FShaderParamete;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderParameter,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderParameter::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumBytes";
    DAT_155194e42 = Freeze::FindFieldNameLength(L"NumBytes");
    _DAT_155194e20 = StaticGetTypeLayoutDesc<unsigned_short>();
    DAT_155194e28 = ::TypeBuffer[0x10];
    DAT_155194e28_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194e28_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194e28_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194e28_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194e28_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194e28_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194e28_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderParameter::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194e30 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155194e38 = 4;
    _DAT_155194e3c = 1;
    _DAT_155194e40 = 0;
    `public:_static_void___cdecl_FShaderParameter::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BaseIndex";
    DAT_155194e12 = Freeze::FindFieldNameLength(L"BaseIndex");
    _DAT_155194df0 = StaticGetTypeLayoutDesc<unsigned_short>();
    DAT_155194df8 = ::TypeBuffer[0x10];
    DAT_155194df8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194df8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194df8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194df8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194df8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194df8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194df8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderParameter::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194e00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155194e08 = 2;
    _DAT_155194e0c = 1;
    _DAT_155194e10 = 0;
    `public:_static_void___cdecl_FShaderParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BufferIndex";
    DAT_155194de2 = Freeze::FindFieldNameLength(L"BufferIndex");
    _DAT_155194dc0 = StaticGetTypeLayoutDesc<unsigned_short>();
    _DAT_155194dd0 = Freeze::DefaultWriteMemoryImageField;
    DAT_155194dc8 = ::TypeBuffer[0x10];
    DAT_155194dc8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194dc8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194dc8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194dc8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194dc8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194dc8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194dc8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155194dd8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194ddc = 1;
    _DAT_155194de0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 145ea5b20

void __cdecl
FShaderParameter::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  *(undefined2 *)((longlong)param_1 + 4) = 0xfefe;
  return;
}

// StaticGetTypeLayout @ 145eb6f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FShaderParameter::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = u_FShaderParamete;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderParameter,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderParameter::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumBytes";
    DAT_155194e42 = Freeze::FindFieldNameLength(L"NumBytes");
    _DAT_155194e20 = StaticGetTypeLayoutDesc<unsigned_short>();
    DAT_155194e28 = ::TypeBuffer[0x10];
    DAT_155194e28_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194e28_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194e28_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194e28_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194e28_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194e28_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194e28_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderParameter::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194e30 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155194e38 = 4;
    _DAT_155194e3c = 1;
    _DAT_155194e40 = 0;
    `public:_static_void___cdecl_FShaderParameter::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BaseIndex";
    DAT_155194e12 = Freeze::FindFieldNameLength(L"BaseIndex");
    _DAT_155194df0 = StaticGetTypeLayoutDesc<unsigned_short>();
    DAT_155194df8 = ::TypeBuffer[0x10];
    DAT_155194df8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194df8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194df8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194df8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194df8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194df8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194df8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderParameter::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194e00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155194e08 = 2;
    _DAT_155194e0c = 1;
    _DAT_155194e10 = 0;
    `public:_static_void___cdecl_FShaderParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BufferIndex";
    DAT_155194de2 = Freeze::FindFieldNameLength(L"BufferIndex");
    _DAT_155194dc0 = StaticGetTypeLayoutDesc<unsigned_short>();
    _DAT_155194dd0 = Freeze::DefaultWriteMemoryImageField;
    DAT_155194dc8 = ::TypeBuffer[0x10];
    DAT_155194dc8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194dc8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194dc8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194dc8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194dc8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194dc8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194dc8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155194dd8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194ddc = 1;
    _DAT_155194de0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

