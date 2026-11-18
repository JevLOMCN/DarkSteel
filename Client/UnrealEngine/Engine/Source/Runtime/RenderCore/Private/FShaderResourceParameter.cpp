// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// Bind @ 145e90820

void __thiscall
FShaderResourceParameter::Bind
          (FShaderResourceParameter *this,FShaderParameterMap *param_1,wchar_t *param_2,
          EShaderParameterFlags param_3)

{
  size_t sVar1;
  undefined1 local_28 [12];
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  local_28._8_4_ = 0;
  local_28._0_8_ = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_2);
    local_28._8_4_ = (undefined4)sVar1;
  }
  local_18._12_4_ = uStack_1c;
  local_18.Size = local_28._8_4_;
  local_18.DataPtr = (wchar_t *)local_28._0_8_;
  FShaderParameterMap::FindParameterAllocation
            (param_1,(TOptional<FParameterAllocation> *)local_28,&local_18);
  if (local_28[8] == false) {
    if (param_3 == SPF_Mandatory) {
      FailureToBindNonOptionalParameter(L"shader resource parameter",param_2);
    }
  }
  else {
    this->BaseIndex = local_28._2_2_;
    this->NumResources = local_28[4];
    this->Type = local_28[6];
  }
  return;
}

// GetTypeLayout @ 145ea2bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FShaderResourceParameter::GetTypeLayout(FShaderResourceParameter *this)

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
    ::TypeBuffer._8_8_ = u_FShaderResource;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderResourceParameter,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderResourceParameter::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Type";
    DAT_155194ed2 = Freeze::FindFieldNameLength(L"Type");
    _DAT_155194eb0 = StaticGetTypeLayoutDesc<enum_EShaderParameterType>();
    DAT_155194eb8 = ::TypeBuffer[0x10];
    DAT_155194eb8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194eb8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194eb8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194eb8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194eb8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194eb8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194eb8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderResourceParameter::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194ec0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155194ec8 = 3;
    _DAT_155194ecc = 1;
    _DAT_155194ed0 = 0;
    `public:_static_void___cdecl_FShaderResourceParameter::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumResources";
    DAT_155194ea2 = Freeze::FindFieldNameLength(L"NumResources");
    _DAT_155194e80 = StaticGetTypeLayoutDesc<unsigned_char>();
    DAT_155194e88 = ::TypeBuffer[0x10];
    DAT_155194e88_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194e88_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194e88_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194e88_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194e88_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194e88_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194e88_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderResourceParameter::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194e90 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155194e98 = 2;
    _DAT_155194e9c = 1;
    _DAT_155194ea0 = 0;
    `public:_static_void___cdecl_FShaderResourceParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BaseIndex";
    DAT_155194e72 = Freeze::FindFieldNameLength(L"BaseIndex");
    _DAT_155194e50 = StaticGetTypeLayoutDesc<unsigned_short>();
    _DAT_155194e60 = Freeze::DefaultWriteMemoryImageField;
    DAT_155194e58 = ::TypeBuffer[0x10];
    DAT_155194e58_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194e58_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194e58_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194e58_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194e58_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194e58_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194e58_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155194e68 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderResourceParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194e6c = 1;
    _DAT_155194e70 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 145ea5b40

void __cdecl
FShaderResourceParameter::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  return;
}

// StaticGetTypeLayout @ 145eb7180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FShaderResourceParameter::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = u_FShaderResource;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderResourceParameter,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderResourceParameter::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Type";
    DAT_155194ed2 = Freeze::FindFieldNameLength(L"Type");
    _DAT_155194eb0 = StaticGetTypeLayoutDesc<enum_EShaderParameterType>();
    DAT_155194eb8 = ::TypeBuffer[0x10];
    DAT_155194eb8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194eb8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194eb8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194eb8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194eb8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194eb8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194eb8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderResourceParameter::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194ec0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155194ec8 = 3;
    _DAT_155194ecc = 1;
    _DAT_155194ed0 = 0;
    `public:_static_void___cdecl_FShaderResourceParameter::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumResources";
    DAT_155194ea2 = Freeze::FindFieldNameLength(L"NumResources");
    _DAT_155194e80 = StaticGetTypeLayoutDesc<unsigned_char>();
    DAT_155194e88 = ::TypeBuffer[0x10];
    DAT_155194e88_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194e88_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194e88_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194e88_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194e88_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194e88_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194e88_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderResourceParameter::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194e90 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155194e98 = 2;
    _DAT_155194e9c = 1;
    _DAT_155194ea0 = 0;
    `public:_static_void___cdecl_FShaderResourceParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BaseIndex";
    DAT_155194e72 = Freeze::FindFieldNameLength(L"BaseIndex");
    _DAT_155194e50 = StaticGetTypeLayoutDesc<unsigned_short>();
    _DAT_155194e60 = Freeze::DefaultWriteMemoryImageField;
    DAT_155194e58 = ::TypeBuffer[0x10];
    DAT_155194e58_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194e58_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194e58_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194e58_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194e58_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194e58_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194e58_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155194e68 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderResourceParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194e6c = 1;
    _DAT_155194e70 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

