// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// Bind @ 145e908d0

void __thiscall
FShaderUniformBufferMemberParameter::Bind
          (FShaderUniformBufferMemberParameter *this,FShaderParameterMap *param_1,wchar_t *param_2)

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
  bVar1 = FShaderParameterMap::ContainsParameterAllocation(param_1,&local_18);
  this->bIsBound = bVar1;
  return;
}

// GetTypeLayout @ 145ea2be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FShaderUniformBufferMemberParameter::GetTypeLayout(FShaderUniformBufferMemberParameter *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x01';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x01';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderUniformB;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderUniformBufferMemberParameter,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderUniformBufferMemberParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "bIsBound";
    DAT_155194f32 = Freeze::FindFieldNameLength(L"bIsBound");
    _DAT_155194f10 = StaticGetTypeLayoutDesc<unsigned_char>();
    _DAT_155194f28 = 0;
    _DAT_155194f20 = Freeze::DefaultWriteMemoryImageField;
    DAT_155194f18 = ::TypeBuffer[0x10];
    DAT_155194f18_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194f18_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194f18_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194f18_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194f18_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194f18_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194f18_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderUniformBufferMemberParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194f2c = 1;
    _DAT_155194f30 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 145ea5b50

void __cdecl
FShaderUniformBufferMemberParameter::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined1 *)param_1 = 0xfe;
  return;
}

// StaticGetTypeLayout @ 145eb73a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FShaderUniformBufferMemberParameter::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x01';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x01';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderUniformB;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderUniformBufferMemberParameter,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderUniformBufferMemberParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "bIsBound";
    DAT_155194f32 = Freeze::FindFieldNameLength(L"bIsBound");
    _DAT_155194f10 = StaticGetTypeLayoutDesc<unsigned_char>();
    _DAT_155194f28 = 0;
    _DAT_155194f20 = Freeze::DefaultWriteMemoryImageField;
    DAT_155194f18 = ::TypeBuffer[0x10];
    DAT_155194f18_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194f18_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194f18_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194f18_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194f18_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194f18_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194f18_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderUniformBufferMemberParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194f2c = 1;
    _DAT_155194f30 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

