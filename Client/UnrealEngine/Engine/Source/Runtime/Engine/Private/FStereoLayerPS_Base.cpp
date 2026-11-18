// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FStereoLayerPS_Base @ 14877ccb0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FStereoLayerPS_Base * __thiscall
FStereoLayerPS_Base::FStereoLayerPS_Base
          (FStereoLayerPS_Base *this,FShaderCompiledShaderInitializerType *param_1,wchar_t *param_2)

{
  FShaderResourceParameter *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->InTexture;
  this_00->BaseIndex = 0;
  this_00->NumResources = '\0';
  this_00->Type = LooseData;
  (this->InTextureSampler).BaseIndex = 0;
  *(undefined8 *)&(this->InTextureSampler).NumResources = 0;
  FShaderResourceParameter::Bind(this_00,param_1->ParameterMap,param_2,SPF_Mandatory);
  FShaderResourceParameter::Bind
            (&this->InTextureSampler,param_1->ParameterMap,L"InTextureSampler",SPF_Optional);
  FShaderParameter::Bind(&this->InIsOpaque,param_1->ParameterMap,L"InIsOpaque",SPF_Optional);
  return this;
}

// GetTypeLayout @ 1487a6720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FStereoLayerPS_Base::GetTypeLayout(FStereoLayerPS_Base *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FStereoLayerPS_;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FStereoLayerPS_Base,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FStereoLayerPS_Base::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InIsOpaque";
    DAT_155249dea = Freeze::FindFieldNameLength(L"InIsOpaque");
    _DAT_155249dc8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155249dd0 = ::TypeBuffer[0x10];
    DAT_155249dd0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155249dd0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155249dd0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155249dd0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155249dd0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155249dd0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155249dd0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStereoLayerPS_Base::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155249dd8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155249de0 = 0xe8;
    _DAT_155249de4 = 1;
    _DAT_155249de8 = 0;
    `public:_static_void___cdecl_FStereoLayerPS_Base::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InTextureSampler";
    DAT_155249dba = Freeze::FindFieldNameLength(L"InTextureSampler");
    _DAT_155249d98 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155249da0 = ::TypeBuffer[0x10];
    DAT_155249da0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155249da0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155249da0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155249da0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155249da0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155249da0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155249da0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStereoLayerPS_Base::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155249da8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155249db0 = 0xe4;
    _DAT_155249db4 = 1;
    _DAT_155249db8 = 0;
    `public:_static_void___cdecl_FStereoLayerPS_Base::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InTexture";
    DAT_155249d8a = Freeze::FindFieldNameLength(L"InTexture");
    _DAT_155249d68 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155249d70 = ::TypeBuffer[0x10];
    DAT_155249d70_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155249d70_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155249d70_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155249d70_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155249d70_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155249d70_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155249d70_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStereoLayerPS_Base::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155249d78 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155249d80 = 0xe0;
    _DAT_155249d84 = 1;
    _DAT_155249d88 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 1487ae640

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FStereoLayerPS_Base::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf0);
  return;
}

// StaticGetTypeLayout @ 1487c5090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FStereoLayerPS_Base::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FStereoLayerPS_;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FStereoLayerPS_Base,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FStereoLayerPS_Base::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InIsOpaque";
    DAT_155249dea = Freeze::FindFieldNameLength(L"InIsOpaque");
    _DAT_155249dc8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155249dd0 = ::TypeBuffer[0x10];
    DAT_155249dd0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155249dd0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155249dd0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155249dd0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155249dd0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155249dd0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155249dd0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStereoLayerPS_Base::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155249dd8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155249de0 = 0xe8;
    _DAT_155249de4 = 1;
    _DAT_155249de8 = 0;
    `public:_static_void___cdecl_FStereoLayerPS_Base::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InTextureSampler";
    DAT_155249dba = Freeze::FindFieldNameLength(L"InTextureSampler");
    _DAT_155249d98 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155249da0 = ::TypeBuffer[0x10];
    DAT_155249da0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155249da0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155249da0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155249da0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155249da0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155249da0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155249da0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStereoLayerPS_Base::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155249da8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155249db0 = 0xe4;
    _DAT_155249db4 = 1;
    _DAT_155249db8 = 0;
    `public:_static_void___cdecl_FStereoLayerPS_Base::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InTexture";
    DAT_155249d8a = Freeze::FindFieldNameLength(L"InTexture");
    _DAT_155249d68 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155249d70 = ::TypeBuffer[0x10];
    DAT_155249d70_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155249d70_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155249d70_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155249d70_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155249d70_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155249d70_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155249d70_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStereoLayerPS_Base::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155249d78 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155249d80 = 0xe0;
    _DAT_155249d84 = 1;
    _DAT_155249d88 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

