// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// GetTypeLayout @ 144bcf9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FOnePassPointShadowProjectionShaderParameters::GetTypeLayout
          (FOnePassPointShadowProjectionShaderParameters *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x1e';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FOnePassPointShadowProjectionShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPositionOrDirection";
    DAT_1550c2e42 = Freeze::FindFieldNameLength(L"LightPositionOrDirection");
    _DAT_1550c2e20 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2e28 = ::TypeBuffer[0x10];
    DAT_1550c2e28_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2e28_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2e28_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2e28_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2e28_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2e28_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2e28_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2e30 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2e38 = 0x18;
    _DAT_1550c2e3c = 1;
    _DAT_1550c2e40 = 0;
    `public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InvShadowmapResolution";
    DAT_1550c2e12 = Freeze::FindFieldNameLength(L"InvShadowmapResolution");
    _DAT_1550c2df0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2df8 = ::TypeBuffer[0x10];
    DAT_1550c2df8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2df8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2df8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2df8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2df8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2df8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2df8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2e00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2e08 = 0x12;
    _DAT_1550c2e0c = 1;
    _DAT_1550c2e10 = 0;
    `public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowViewProjectionMatrices";
    DAT_1550c2de2 = Freeze::FindFieldNameLength(L"ShadowViewProjectionMatrices");
    _DAT_1550c2dc0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2dc8 = ::TypeBuffer[0x10];
    DAT_1550c2dc8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2dc8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2dc8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2dc8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2dc8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2dc8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2dc8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2dd0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2dd8 = 0xc;
    _DAT_1550c2ddc = 1;
    _DAT_1550c2de0 = 0;
    `public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowDepthCubeComparisonSampler";
    DAT_1550c2db2 = Freeze::FindFieldNameLength(L"ShadowDepthCubeComparisonSampler");
    _DAT_1550c2d90 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1550c2d98 = ::TypeBuffer[0x10];
    DAT_1550c2d98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2d98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2d98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2d98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2d98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2d98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2d98_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2da0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2da8 = 8;
    _DAT_1550c2dac = 1;
    _DAT_1550c2db0 = 0;
    `public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowDepthTexture2";
    DAT_1550c2d82 = Freeze::FindFieldNameLength(L"ShadowDepthTexture2");
    _DAT_1550c2d60 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1550c2d68 = ::TypeBuffer[0x10];
    DAT_1550c2d68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2d68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2d68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2d68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2d68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2d68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2d68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2d70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2d78 = 4;
    _DAT_1550c2d7c = 1;
    _DAT_1550c2d80 = 0;
    `public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowDepthTexture";
    DAT_1550c2d52 = Freeze::FindFieldNameLength(L"ShadowDepthTexture");
    _DAT_1550c2d30 = FShaderResourceParameter::StaticGetTypeLayout();
    _DAT_1550c2d40 = Freeze::DefaultWriteMemoryImageField;
    DAT_1550c2d38 = ::TypeBuffer[0x10];
    DAT_1550c2d38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2d38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2d38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2d38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2d38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2d38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2d38_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1550c2d48 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2d4c = 1;
    _DAT_1550c2d50 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 144bd0cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FOnePassPointShadowProjectionShaderParameters::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar8 = _UNK_1506d61ee;
  uVar7 = _UNK_1506d61ec;
  uVar6 = _UNK_1506d61ea;
  uVar5 = _UNK_1506d61e8;
  uVar4 = _UNK_1506d61e6;
  uVar3 = _UNK_1506d61e4;
  uVar2 = _UNK_1506d61e2;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined2 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined2 *)((longlong)param_1 + 2) = uVar2;
  *(undefined2 *)((longlong)param_1 + 4) = uVar3;
  *(undefined2 *)((longlong)param_1 + 6) = uVar4;
  *(undefined2 *)((longlong)param_1 + 8) = uVar5;
  *(undefined2 *)((longlong)param_1 + 10) = uVar6;
  *(undefined2 *)((longlong)param_1 + 0xc) = uVar7;
  *(undefined2 *)((longlong)param_1 + 0xe) = uVar8;
  *(undefined2 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x12) = uVar2;
  *(undefined2 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined2 *)((longlong)param_1 + 0x16) = uVar4;
  *(undefined2 *)((longlong)param_1 + 0x18) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x1a) = uVar2;
  *(undefined2 *)((longlong)param_1 + 0x1c) = uVar1;
  return;
}

// StaticGetTypeLayout @ 144be81b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x1e';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FOnePassPointShadowProjectionShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPositionOrDirection";
    DAT_1550c2e42 = Freeze::FindFieldNameLength(L"LightPositionOrDirection");
    _DAT_1550c2e20 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2e28 = ::TypeBuffer[0x10];
    DAT_1550c2e28_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2e28_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2e28_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2e28_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2e28_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2e28_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2e28_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2e30 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2e38 = 0x18;
    _DAT_1550c2e3c = 1;
    _DAT_1550c2e40 = 0;
    `public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InvShadowmapResolution";
    DAT_1550c2e12 = Freeze::FindFieldNameLength(L"InvShadowmapResolution");
    _DAT_1550c2df0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2df8 = ::TypeBuffer[0x10];
    DAT_1550c2df8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2df8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2df8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2df8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2df8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2df8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2df8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2e00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2e08 = 0x12;
    _DAT_1550c2e0c = 1;
    _DAT_1550c2e10 = 0;
    `public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowViewProjectionMatrices";
    DAT_1550c2de2 = Freeze::FindFieldNameLength(L"ShadowViewProjectionMatrices");
    _DAT_1550c2dc0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2dc8 = ::TypeBuffer[0x10];
    DAT_1550c2dc8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2dc8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2dc8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2dc8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2dc8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2dc8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2dc8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2dd0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2dd8 = 0xc;
    _DAT_1550c2ddc = 1;
    _DAT_1550c2de0 = 0;
    `public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowDepthCubeComparisonSampler";
    DAT_1550c2db2 = Freeze::FindFieldNameLength(L"ShadowDepthCubeComparisonSampler");
    _DAT_1550c2d90 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1550c2d98 = ::TypeBuffer[0x10];
    DAT_1550c2d98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2d98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2d98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2d98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2d98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2d98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2d98_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2da0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2da8 = 8;
    _DAT_1550c2dac = 1;
    _DAT_1550c2db0 = 0;
    `public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowDepthTexture2";
    DAT_1550c2d82 = Freeze::FindFieldNameLength(L"ShadowDepthTexture2");
    _DAT_1550c2d60 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1550c2d68 = ::TypeBuffer[0x10];
    DAT_1550c2d68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2d68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2d68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2d68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2d68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2d68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2d68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2d70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2d78 = 4;
    _DAT_1550c2d7c = 1;
    _DAT_1550c2d80 = 0;
    `public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowDepthTexture";
    DAT_1550c2d52 = Freeze::FindFieldNameLength(L"ShadowDepthTexture");
    _DAT_1550c2d30 = FShaderResourceParameter::StaticGetTypeLayout();
    _DAT_1550c2d40 = Freeze::DefaultWriteMemoryImageField;
    DAT_1550c2d38 = ::TypeBuffer[0x10];
    DAT_1550c2d38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2d38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2d38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2d38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2d38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2d38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2d38_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1550c2d48 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOnePassPointShadowProjectionShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2d4c = 1;
    _DAT_1550c2d50 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Bind @ 145580a00

void __thiscall
FOnePassPointShadowProjectionShaderParameters::Bind
          (FOnePassPointShadowProjectionShaderParameters *this,FShaderParameterMap *param_1)

{
  FShaderResourceParameter::Bind
            (&this->ShadowDepthTexture,param_1,L"ShadowDepthCubeTexture",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->ShadowDepthTexture2,param_1,L"ShadowDepthCubeTexture2",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->ShadowDepthCubeComparisonSampler,param_1,L"ShadowDepthCubeTextureSampler",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->ShadowViewProjectionMatrices,param_1,L"ShadowViewProjectionMatrices",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->InvShadowmapResolution,param_1,L"InvShadowmapResolution",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPositionOrDirection,param_1,L"LightPositionOrDirection",SPF_Optional);
  return;
}

// Set @ 1455c9060

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FOnePassPointShadowProjectionShaderParameters::Set
          (FOnePassPointShadowProjectionShaderParameters *this,FRHIBatchedShaderParameters *param_1,
          FSceneView *param_2,FProjectedShadowInfo *param_3)

{
  float *pfVar1;
  ushort uVar2;
  FRHITexture *pFVar3;
  FLightSceneProxy *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  FProjectedShadowInfo *pFVar25;
  bool bVar26;
  int iVar27;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  int iVar28;
  FRHITexture *pFVar29;
  ForElementType<UE::Math::TMatrix<float>_> FVar30;
  ulonglong uVar31;
  int *piVar32;
  uint uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  uint uVar36;
  ulonglong uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  ForElementType<UE::Math::TMatrix<float>_> local_128;
  int local_120 [3];
  uint local_114;
  float local_110 [2];
  FProjectedShadowInfo *local_108;
  ForElementType<UE::Math::TMatrix<float>_> local_100;
  int local_f8 [2];
  double local_f0;
  longlong local_e8;
  FOnePassPointShadowProjectionShaderParameters *local_e0;
  FRHIBatchedShaderParameters *local_d8;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  double local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  local_f0 = (param_2->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  pFVar29 = (GBlackTextureDepthCube->TextureRHI).Reference;
  dVar8 = (param_2->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar9 = (param_2->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  if ((param_3 != (FProjectedShadowInfo *)0x0) &&
     (pFVar3 = (((param_3->RenderTargets).DepthTarget)->RenderTargetItem).TargetableTexture.
               Reference, pFVar3 != (FRHITexture *)0x0)) {
    pFVar29 = pFVar3;
  }
  local_108 = param_3;
  local_e0 = this;
  local_d8 = param_1;
  SetTextureParameter(param_1,&this->ShadowDepthTexture,pFVar29);
  SetTextureParameter(param_1,&this->ShadowDepthTexture2,pFVar29);
  fVar24 = __real_3f800000;
  uVar2 = (this->LightPositionOrDirection).NumBytes;
  uVar36 = (uint)uVar2;
  if (uVar2 != 0) {
    if (param_3 == (FProjectedShadowInfo *)0x0) {
      local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar38 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar39 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      pFVar4 = param_3->LightSceneInfo->Proxy;
      local_a8 = *(undefined4 *)&(pFVar4->Position).field0_0x0;
      uStack_a4 = *(undefined4 *)((longlong)&(pFVar4->Position).field0_0x0 + 4);
      uStack_a0 = *(undefined4 *)((longlong)&(pFVar4->Position).field0_0x0 + 8);
      uStack_9c = *(undefined4 *)((longlong)&(pFVar4->Position).field0_0x0 + 0xc);
      uVar38 = *(undefined4 *)((longlong)&(pFVar4->Position).field0_0x0 + 0x10);
      uVar39 = *(undefined4 *)((longlong)&(pFVar4->Position).field0_0x0 + 0x14);
      uStack_90 = *(undefined4 *)((longlong)&(pFVar4->Position).field0_0x0 + 0x18);
      uStack_8c = *(undefined4 *)((longlong)&(pFVar4->Position).field0_0x0 + 0x1c);
      uVar40 = local_a8;
      uVar41 = uStack_a4;
      uVar42 = uStack_a0;
      uVar43 = uStack_9c;
      local_98 = uVar38;
      uStack_94 = uVar39;
    }
    local_bc = 0x3f800000;
    if (0x10 < uVar2) {
      uVar36 = 0x10;
    }
    local_c8 = (float)((double)CONCAT44(uVar41,uVar40) + dVar8);
    local_c4 = (float)((double)CONCAT44(uVar43,uVar42) + dVar9);
    local_c0 = (float)((double)CONCAT44(uVar39,uVar38) + local_f0);
    if (uVar36 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->LightPositionOrDirection).BufferIndex,
                 (uint)(this->LightPositionOrDirection).BaseIndex,uVar36,&local_c8);
    }
  }
  if ((this->ShadowDepthCubeComparisonSampler).NumResources != '\0') {
    SetSamplerParameter(param_1,&this->ShadowDepthCubeComparisonSampler,
                        TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                        ::StaticResource.StateRHI.Reference);
  }
  uVar36 = (this->ShadowViewProjectionMatrices).NumBytes + 0x3f >> 6;
  local_114 = uVar36;
  if (param_3 == (FProjectedShadowInfo *)0x0) {
    local_100.Data = (TMatrix<float> *)0x0;
    local_f8[0] = 0;
    local_f8[1] = 0;
    iVar27 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TMatrix<float>_>_>
                       (0x40,0x10,uVar36,&local_100,local_f8,local_f8 + 1);
    FVar30.Data = local_100.Data;
    memset(local_100.Data + iVar27,0,(ulonglong)uVar36 << 6);
    uVar33 = (uint)(this->ShadowViewProjectionMatrices).NumBytes;
    if (uVar36 << 6 < uVar33) {
      uVar33 = uVar36 << 6;
    }
    if (uVar33 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ShadowViewProjectionMatrices).BufferIndex,
                 (uint)(this->ShadowViewProjectionMatrices).BaseIndex,uVar33,FVar30.Data);
    }
    uVar2 = (this->InvShadowmapResolution).NumBytes;
    uVar36 = (uint)uVar2;
    local_110[1] = 0.0;
    if (4 < uVar2) {
      uVar36 = 4;
    }
    if (uVar36 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->InvShadowmapResolution).BufferIndex,
                 (uint)(this->InvShadowmapResolution).BaseIndex,uVar36,local_110 + 1);
    }
    if (FVar30.Data != (TMatrix<float> *)0x0) {
      pfVar1 = FVar30.Data[-1].M[3] + 2;
      MemoryTrace_Free((ulong64)pfVar1,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_00 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_00 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pfVar1,FMalloc,true);
      }
      piVar32 = (int *)((longlong)pfVar1 - (ulonglong)(uint)*pfVar1);
      LOCK();
      iVar27 = *piVar32;
      *piVar32 = *piVar32 + -1;
      UNLOCK();
      if (iVar27 == 1) {
        lVar6 = *(longlong *)(piVar32 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar32,0,0);
        if (lVar6 - (longlong)piVar32 == 0x10000) {
          this_01 = FPageAllocator::Get();
          FPageAllocator::Free(this_01,piVar32);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar32);
        }
      }
    }
  }
  else {
    uVar33 = (param_3->OnePassShadowViewProjectionMatrices).ArrayNum;
    if ((int)uVar36 < (int)uVar33) {
      uVar33 = uVar36;
    }
    uVar31 = 0;
    local_128.Data = (TMatrix<float> *)0x0;
    local_120[0] = 0;
    local_120[1] = 0;
    local_120[2] = uVar33;
    UE::Core::Private::
    ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TMatrix<float>_>_>
              (0x40,0x10,uVar33,&local_128,local_120,local_120 + 1);
    pFVar25 = local_108;
    local_e8 = (longlong)(int)uVar33;
    uVar34 = uVar31;
    uVar35 = uVar31;
    uVar37 = uVar31;
    if (0 < (int)uVar33) {
      do {
        uVar33 = (uint)uVar35;
        uVar36 = 0;
        if ((int)uVar33 < (pFVar25->OnePassShadowViewProjectionMatrices).ArrayNum) {
          uVar36 = ~uVar33 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (pFVar25->OnePassShadowViewProjectionMatrices).AllocatorInstance.Data;
        dVar8 = *(double *)(pFVar5 + uVar37 + 0x10);
        dVar9 = *(double *)(pFVar5 + uVar37 + 0x10 + 8);
        dVar10 = *(double *)(pFVar5 + uVar37);
        dVar11 = *(double *)(pFVar5 + uVar37 + 8);
        dVar12 = *(double *)(pFVar5 + uVar37 + 0x30);
        dVar13 = *(double *)(pFVar5 + uVar37 + 0x30 + 8);
        dVar14 = *(double *)(pFVar5 + uVar37 + 0x20);
        dVar15 = *(double *)(pFVar5 + uVar37 + 0x20 + 8);
        dVar16 = *(double *)(pFVar5 + uVar37 + 0x50);
        dVar17 = *(double *)(pFVar5 + uVar37 + 0x50 + 8);
        dVar18 = *(double *)(pFVar5 + uVar37 + 0x40);
        dVar19 = *(double *)(pFVar5 + uVar37 + 0x40 + 8);
        dVar20 = *(double *)(pFVar5 + uVar37 + 0x70);
        dVar21 = *(double *)(pFVar5 + uVar37 + 0x70 + 8);
        dVar22 = *(double *)(pFVar5 + uVar37 + 0x60);
        dVar23 = *(double *)(pFVar5 + uVar37 + 0x60 + 8);
        uVar36 = 0;
        if ((int)uVar33 < local_120[0]) {
          uVar36 = ~uVar33 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar34 = uVar34 + 1;
        pfVar1 = (float *)((longlong)(local_128.Data)->M[0] + uVar31);
        *pfVar1 = (float)dVar10;
        pfVar1[1] = (float)dVar11;
        pfVar1[2] = (float)dVar8;
        pfVar1[3] = (float)dVar9;
        pfVar1 = (float *)((longlong)(local_128.Data)->M[1] + uVar31);
        *pfVar1 = (float)dVar14;
        pfVar1[1] = (float)dVar15;
        pfVar1[2] = (float)dVar12;
        pfVar1[3] = (float)dVar13;
        pfVar1 = (float *)((longlong)(local_128.Data)->M[2] + uVar31);
        *pfVar1 = (float)dVar18;
        pfVar1[1] = (float)dVar19;
        pfVar1[2] = (float)dVar16;
        pfVar1[3] = (float)dVar17;
        pfVar1 = (float *)((longlong)(local_128.Data)->M[3] + uVar31);
        *pfVar1 = (float)dVar22;
        pfVar1[1] = (float)dVar23;
        pfVar1[2] = (float)dVar20;
        pfVar1[3] = (float)dVar21;
        uVar31 = uVar31 + 0x40;
        param_3 = local_108;
        this = local_e0;
        param_1 = local_d8;
        uVar35 = (ulonglong)(uVar33 + 1);
        uVar37 = uVar37 + 0x80;
        uVar36 = local_114;
        uVar33 = local_120[2];
      } while ((longlong)uVar34 < local_e8);
    }
    FVar30.Data = local_128.Data;
    if ((int)uVar33 < (int)uVar36) {
      iVar28 = uVar36 - local_120[2];
      iVar27 = UE::Core::Private::
               ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TMatrix<float>_>_>
                         (0x40,0x10,iVar28,&local_128,local_120,local_120 + 1);
      FVar30.Data = local_128.Data;
      memset(local_128.Data + iVar27,0,(longlong)iVar28 << 6);
    }
    uVar33 = (uint)(this->ShadowViewProjectionMatrices).NumBytes;
    if (uVar36 << 6 < uVar33) {
      uVar33 = uVar36 << 6;
    }
    if (uVar33 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ShadowViewProjectionMatrices).BufferIndex,
                 (uint)(this->ShadowViewProjectionMatrices).BaseIndex,uVar33,FVar30.Data);
    }
    uVar2 = (this->InvShadowmapResolution).NumBytes;
    uVar36 = (uint)uVar2;
    if (4 < uVar2) {
      uVar36 = 4;
    }
    local_110[0] = fVar24 / (float)param_3->ResolutionX;
    if (uVar36 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->InvShadowmapResolution).BufferIndex,
                 (uint)(this->InvShadowmapResolution).BaseIndex,uVar36,local_110);
    }
    if (FVar30.Data != (TMatrix<float> *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(FVar30.Data);
    }
  }
  return;
}

