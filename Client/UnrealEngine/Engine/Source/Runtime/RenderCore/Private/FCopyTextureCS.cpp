// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// FCopyTextureCS @ 145d09830

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

FCopyTextureCS * __thiscall
FCopyTextureCS::FCopyTextureCS(FCopyTextureCS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  
  FShader::FShader((FShader *)this,param_1);
  this_00 = &this->DstOffsetParam;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->DstOffsetParam).NumBytes = 0;
  (this->SrcOffsetParam).BufferIndex = 0;
  (this->SrcOffsetParam).BaseIndex = 0;
  (this->SrcOffsetParam).NumBytes = 0;
  (this->DimensionsParam).BufferIndex = 0;
  (this->DimensionsParam).BaseIndex = 0;
  (this->DimensionsParam).NumBytes = 0;
  (this->SrcResourceParam).BaseIndex = 0;
  *(undefined4 *)&(this->SrcResourceParam).NumResources = 0;
  (this->DstResourceParam).NumResources = '\0';
  (this->DstResourceParam).Type = LooseData;
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"DstOffset",SPF_Mandatory);
  FShaderParameter::Bind(&this->SrcOffsetParam,param_1->ParameterMap,L"SrcOffset",SPF_Mandatory);
  FShaderParameter::Bind(&this->DimensionsParam,param_1->ParameterMap,L"Dimensions",SPF_Mandatory);
  FShaderResourceParameter::Bind
            (&this->SrcResourceParam,param_1->ParameterMap,L"SrcResource",SPF_Mandatory);
  FShaderResourceParameter::Bind
            (&this->DstResourceParam,param_1->ParameterMap,L"DstResource",SPF_Mandatory);
  return this;
}

// GetTypeLayout @ 145d40ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FCopyTextureCS::GetTypeLayout(FCopyTextureCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FCopyTextureCS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FCopyTextureCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DstResourceParam";
    DAT_15517fc2a = Freeze::FindFieldNameLength(L"DstResourceParam");
    _DAT_15517fc08 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15517fc10 = ::TypeBuffer[0x10];
    DAT_15517fc10_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517fc10_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517fc10_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517fc10_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517fc10_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517fc10_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517fc10_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517fc18 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517fc20 = 0xf6;
    _DAT_15517fc24 = 1;
    _DAT_15517fc28 = 0;
    `public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SrcResourceParam";
    DAT_15517fbfa = Freeze::FindFieldNameLength(L"SrcResourceParam");
    _DAT_15517fbd8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15517fbe0 = ::TypeBuffer[0x10];
    DAT_15517fbe0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517fbe0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517fbe0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517fbe0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517fbe0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517fbe0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517fbe0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517fbe8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517fbf0 = 0xf2;
    _DAT_15517fbf4 = 1;
    _DAT_15517fbf8 = 0;
    `public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DimensionsParam";
    DAT_15517fbca = Freeze::FindFieldNameLength(L"DimensionsParam");
    _DAT_15517fba8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517fbb0 = ::TypeBuffer[0x10];
    DAT_15517fbb0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517fbb0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517fbb0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517fbb0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517fbb0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517fbb0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517fbb0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517fbb8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517fbc0 = 0xec;
    _DAT_15517fbc4 = 1;
    _DAT_15517fbc8 = 0;
    `public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SrcOffsetParam";
    DAT_15517fb9a = Freeze::FindFieldNameLength(L"SrcOffsetParam");
    _DAT_15517fb78 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517fb80 = ::TypeBuffer[0x10];
    DAT_15517fb80_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517fb80_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517fb80_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517fb80_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517fb80_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517fb80_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517fb80_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517fb88 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517fb90 = 0xe6;
    _DAT_15517fb94 = 1;
    _DAT_15517fb98 = 0;
    `public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DstOffsetParam";
    DAT_15517fb6a = Freeze::FindFieldNameLength(L"DstOffsetParam");
    _DAT_15517fb48 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517fb50 = ::TypeBuffer[0x10];
    DAT_15517fb50_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517fb50_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517fb50_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517fb50_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517fb50_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517fb50_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517fb50_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15517fb58 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517fb60 = 0xe0;
    _DAT_15517fb64 = 1;
    _DAT_15517fb68 = 0;
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

// InternalDestroy @ 145d43360

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
FCopyTextureCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x100);
  return;
}

// StaticGetTypeLayout @ 145d5aba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FCopyTextureCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FCopyTextureCS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FCopyTextureCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DstResourceParam";
    DAT_15517fc2a = Freeze::FindFieldNameLength(L"DstResourceParam");
    _DAT_15517fc08 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15517fc10 = ::TypeBuffer[0x10];
    DAT_15517fc10_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517fc10_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517fc10_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517fc10_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517fc10_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517fc10_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517fc10_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517fc18 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517fc20 = 0xf6;
    _DAT_15517fc24 = 1;
    _DAT_15517fc28 = 0;
    `public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SrcResourceParam";
    DAT_15517fbfa = Freeze::FindFieldNameLength(L"SrcResourceParam");
    _DAT_15517fbd8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15517fbe0 = ::TypeBuffer[0x10];
    DAT_15517fbe0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517fbe0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517fbe0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517fbe0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517fbe0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517fbe0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517fbe0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517fbe8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517fbf0 = 0xf2;
    _DAT_15517fbf4 = 1;
    _DAT_15517fbf8 = 0;
    `public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DimensionsParam";
    DAT_15517fbca = Freeze::FindFieldNameLength(L"DimensionsParam");
    _DAT_15517fba8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517fbb0 = ::TypeBuffer[0x10];
    DAT_15517fbb0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517fbb0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517fbb0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517fbb0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517fbb0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517fbb0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517fbb0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517fbb8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517fbc0 = 0xec;
    _DAT_15517fbc4 = 1;
    _DAT_15517fbc8 = 0;
    `public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SrcOffsetParam";
    DAT_15517fb9a = Freeze::FindFieldNameLength(L"SrcOffsetParam");
    _DAT_15517fb78 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517fb80 = ::TypeBuffer[0x10];
    DAT_15517fb80_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517fb80_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517fb80_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517fb80_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517fb80_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517fb80_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517fb80_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517fb88 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517fb90 = 0xe6;
    _DAT_15517fb94 = 1;
    _DAT_15517fb98 = 0;
    `public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DstOffsetParam";
    DAT_15517fb6a = Freeze::FindFieldNameLength(L"DstOffsetParam");
    _DAT_15517fb48 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517fb50 = ::TypeBuffer[0x10];
    DAT_15517fb50_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517fb50_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517fb50_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517fb50_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517fb50_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517fb50_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517fb50_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyTextureCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15517fb58 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517fb60 = 0xe0;
    _DAT_15517fb64 = 1;
    _DAT_15517fb68 = 0;
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

