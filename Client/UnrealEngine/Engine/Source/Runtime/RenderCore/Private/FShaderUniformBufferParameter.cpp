// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// Bind @ 145e90930

void __thiscall
FShaderUniformBufferParameter::Bind
          (FShaderUniformBufferParameter *this,FShaderParameterMap *param_1,wchar_t *param_2,
          EShaderParameterFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  TOptional<FParameterAllocation> local_38;
  wchar_t *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  iStack_20 = 0;
  local_28 = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_2);
    iStack_20 = (int)sVar3;
  }
  local_18._12_4_ = uStack_1c;
  local_18.Size = iStack_20;
  local_18.DataPtr = local_28;
  FShaderParameterMap::FindParameterAllocation(param_1,&local_38,&local_18);
  if (local_38.bIsSet == false) {
    this->BaseIndex = 0xffff;
    if (param_3 == SPF_Mandatory) {
      FailureToBindNonOptionalParameter(L"shader resource parameter",param_2);
    }
  }
  else {
    this->BaseIndex = local_38.TypedValue.BufferIndex;
    if (local_38.TypedValue.BufferIndex == 0xffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBound()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameters.cpp"
                         ,0x74,
                         L"UniformBuffer Parameter \'%s\' was not bound with a valid index. This can cause instability at runtime."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// GetTypeLayout @ 145ea2bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FShaderUniformBufferParameter::GetTypeLayout(FShaderUniformBufferParameter *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x02';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderUniformBufferParameter,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderUniformBufferParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BaseIndex";
    DAT_155194f02 = Freeze::FindFieldNameLength(L"BaseIndex");
    _DAT_155194ee0 = StaticGetTypeLayoutDesc<unsigned_short>();
    _DAT_155194ef8 = 0;
    _DAT_155194ef0 = Freeze::DefaultWriteMemoryImageField;
    DAT_155194ee8 = ::TypeBuffer[0x10];
    DAT_155194ee8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194ee8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194ee8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194ee8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194ee8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194ee8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194ee8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderUniformBufferParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194efc = 1;
    _DAT_155194f00 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 145ea5b60

void __cdecl
FShaderUniformBufferParameter::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined2 *)param_1 = 0xfefe;
  return;
}

// StaticGetTypeLayout @ 145eb74f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FShaderUniformBufferParameter::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x02';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderUniformBufferParameter,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderUniformBufferParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BaseIndex";
    DAT_155194f02 = Freeze::FindFieldNameLength(L"BaseIndex");
    _DAT_155194ee0 = StaticGetTypeLayoutDesc<unsigned_short>();
    _DAT_155194ef8 = 0;
    _DAT_155194ef0 = Freeze::DefaultWriteMemoryImageField;
    DAT_155194ee8 = ::TypeBuffer[0x10];
    DAT_155194ee8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155194ee8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155194ee8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155194ee8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155194ee8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155194ee8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155194ee8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderUniformBufferParameter::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155194efc = 1;
    _DAT_155194f00 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

