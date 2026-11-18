// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FUpdateTexture2DSubresourceCS @ 148909e00

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

FUpdateTexture2DSubresourceCS * __thiscall
FUpdateTexture2DSubresourceCS::FUpdateTexture2DSubresourceCS
          (FUpdateTexture2DSubresourceCS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->SrcPosPitchParameter;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->SrcPosPitchParameter).NumBytes = 0;
  (this->SrcBuffer).BaseIndex = 0;
  *(undefined8 *)&(this->SrcBuffer).NumResources = 0;
  (this->DestTexture).BaseIndex = 0;
  (this->DestTexture).NumResources = '\0';
  (this->DestTexture).Type = LooseData;
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"TSrcPosPitch",SPF_Mandatory);
  FShaderResourceParameter::Bind(&this->SrcBuffer,param_1->ParameterMap,L"TSrcBuffer",SPF_Mandatory)
  ;
  FShaderParameter::Bind
            (&this->DestPosSizeParameter,param_1->ParameterMap,L"TDestPosSize",SPF_Mandatory);
  FShaderResourceParameter::Bind
            (&this->DestTexture,param_1->ParameterMap,L"TDestTexture",SPF_Mandatory);
  return this;
}

// GetTypeLayout @ 14895eed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FUpdateTexture2DSubresourceCS::GetTypeLayout(FUpdateTexture2DSubresourceCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FUpdateTexture2;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FUpdateTexture2DSubresourceCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DestTexture";
    DAT_15525763a = Freeze::FindFieldNameLength(L"DestTexture");
    _DAT_155257618 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155257620 = ::TypeBuffer[0x10];
    DAT_155257620_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155257620_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155257620_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155257620_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155257620_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155257620_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155257620_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155257628 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155257630 = 0xf0;
    _DAT_155257634 = 1;
    _DAT_155257638 = 0;
    `public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DestPosSizeParameter";
    DAT_15525760a = Freeze::FindFieldNameLength(L"DestPosSizeParameter");
    _DAT_1552575e8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1552575f0 = ::TypeBuffer[0x10];
    DAT_1552575f0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552575f0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552575f0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552575f0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552575f0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552575f0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552575f0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552575f8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155257600 = 0xea;
    _DAT_155257604 = 1;
    _DAT_155257608 = 0;
    `public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SrcBuffer";
    DAT_1552575da = Freeze::FindFieldNameLength(L"SrcBuffer");
    _DAT_1552575b8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1552575c0 = ::TypeBuffer[0x10];
    DAT_1552575c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552575c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552575c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552575c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552575c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552575c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552575c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552575c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552575d0 = 0xe6;
    _DAT_1552575d4 = 1;
    _DAT_1552575d8 = 0;
    `public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SrcPosPitchParameter";
    DAT_1552575aa = Freeze::FindFieldNameLength(L"SrcPosPitchParameter");
    _DAT_155257588 = FShaderParameter::StaticGetTypeLayout();
    DAT_155257590 = ::TypeBuffer[0x10];
    DAT_155257590_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155257590_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155257590_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155257590_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155257590_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155257590_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155257590_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155257598 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552575a0 = 0xe0;
    _DAT_1552575a4 = 1;
    _DAT_1552575a8 = 0;
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

// InternalDestroy @ 148966000

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
FUpdateTexture2DSubresourceCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf8);
  return;
}

// StaticGetTypeLayout @ 148982150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FUpdateTexture2DSubresourceCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FUpdateTexture2;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FUpdateTexture2DSubresourceCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DestTexture";
    DAT_15525763a = Freeze::FindFieldNameLength(L"DestTexture");
    _DAT_155257618 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155257620 = ::TypeBuffer[0x10];
    DAT_155257620_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155257620_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155257620_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155257620_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155257620_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155257620_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155257620_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155257628 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155257630 = 0xf0;
    _DAT_155257634 = 1;
    _DAT_155257638 = 0;
    `public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DestPosSizeParameter";
    DAT_15525760a = Freeze::FindFieldNameLength(L"DestPosSizeParameter");
    _DAT_1552575e8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1552575f0 = ::TypeBuffer[0x10];
    DAT_1552575f0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552575f0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552575f0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552575f0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552575f0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552575f0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552575f0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552575f8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155257600 = 0xea;
    _DAT_155257604 = 1;
    _DAT_155257608 = 0;
    `public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SrcBuffer";
    DAT_1552575da = Freeze::FindFieldNameLength(L"SrcBuffer");
    _DAT_1552575b8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1552575c0 = ::TypeBuffer[0x10];
    DAT_1552575c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552575c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552575c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552575c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552575c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552575c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552575c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552575c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552575d0 = 0xe6;
    _DAT_1552575d4 = 1;
    _DAT_1552575d8 = 0;
    `public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SrcPosPitchParameter";
    DAT_1552575aa = Freeze::FindFieldNameLength(L"SrcPosPitchParameter");
    _DAT_155257588 = FShaderParameter::StaticGetTypeLayout();
    DAT_155257590 = ::TypeBuffer[0x10];
    DAT_155257590_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155257590_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155257590_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155257590_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155257590_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155257590_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155257590_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUpdateTexture2DSubresourceCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155257598 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552575a0 = 0xe0;
    _DAT_1552575a4 = 1;
    _DAT_1552575a8 = 0;
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

