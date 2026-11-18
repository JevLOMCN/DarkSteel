// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// Bind @ 144a6b570

void __thiscall
FRenderLightingCacheLooseBindings::Bind
          (FRenderLightingCacheLooseBindings *this,FShaderParameterMap *param_1)

{
  FShaderResourceParameter::Bind
            (&this->SceneDepthTextureBinding,param_1,L"SceneDepthTexture",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->ShadowDepthTextureBinding,param_1,L"ShadowDepthTexture",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->ShadowDepthTextureSamplerBinding,param_1,L"ShadowDepthTextureSampler",
             SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->StaticShadowDepthTextureBinding,param_1,L"StaticShadowDepthTexture",SPF_Optional
            );
  FShaderResourceParameter::Bind
            (&this->StaticShadowDepthTextureSamplerBinding,param_1,
             L"StaticShadowDepthTextureSampler",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->ShadowDepthCubeTextureBinding,param_1,L"ShadowDepthCubeTexture",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->ShadowDepthCubeTexture2Binding,param_1,L"ShadowDepthCubeTexture2",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->ShadowDepthCubeTextureSamplerBinding,param_1,L"ShadowDepthCubeTextureSampler",
             SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->LightingCacheTextureBinding,param_1,L"LightingCacheTexture",SPF_Optional);
  return;
}

// GetTypeLayout @ 144a8dc50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FRenderLightingCacheLooseBindings::GetTypeLayout(FRenderLightingCacheLooseBindings *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '$';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FRenderLighting;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRenderLightingCacheLooseBindings,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SceneDepthTextureBinding";
    DAT_1550b944a = Freeze::FindFieldNameLength(L"SceneDepthTextureBinding");
    _DAT_1550b9428 = FShaderResourceParameter::StaticGetTypeLayout();
    _DAT_1550b9438 = Freeze::DefaultWriteMemoryImageField;
    DAT_1550b9430 = ::TypeBuffer[0x10];
    DAT_1550b9430_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b9430_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b9430_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b9430_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b9430_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b9430_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b9430_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b9440 = 0;
    _DAT_1550b9444 = 1;
    _DAT_1550b9448 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 144a9a670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FRenderLightingCacheLooseBindings::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightingCacheTextureBinding";
  DAT_1550b95ca = Freeze::FindFieldNameLength(L"LightingCacheTextureBinding");
  _DAT_1550b95a8 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_1550b95c0 = 0x20;
  _DAT_1550b95b8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550b95c4 = 1;
  _DAT_1550b95c8 = 0;
  _DAT_1550b95b0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthCubeTextureSamplerBinding";
  DAT_1550b959a = Freeze::FindFieldNameLength(L"ShadowDepthCubeTextureSamplerBinding");
  _DAT_1550b9578 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_1550b9588 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550b9590 = 0x1c;
  _DAT_1550b9594 = 1;
  _DAT_1550b9598 = 0;
  _DAT_1550b9580 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthCubeTexture2Binding";
  DAT_1550b956a = Freeze::FindFieldNameLength(L"ShadowDepthCubeTexture2Binding");
  _DAT_1550b9548 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_1550b9558 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550b9560 = 0x18;
  _DAT_1550b9564 = 1;
  _DAT_1550b9568 = 0;
  _DAT_1550b9550 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthCubeTextureBinding";
  DAT_1550b953a = Freeze::FindFieldNameLength(L"ShadowDepthCubeTextureBinding");
  _DAT_1550b9518 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_1550b9528 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550b9530 = 0x14;
  _DAT_1550b9534 = 1;
  _DAT_1550b9538 = 0;
  _DAT_1550b9520 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "StaticShadowDepthTextureSamplerBinding";
  DAT_1550b950a = Freeze::FindFieldNameLength(L"StaticShadowDepthTextureSamplerBinding");
  _DAT_1550b94e8 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_1550b94f8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550b9500 = 0x10;
  _DAT_1550b9504 = 1;
  _DAT_1550b9508 = 0;
  _DAT_1550b94f0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "StaticShadowDepthTextureBinding";
  DAT_1550b94da = Freeze::FindFieldNameLength(L"StaticShadowDepthTextureBinding");
  _DAT_1550b94b8 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_1550b94c8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550b94d0 = 0xc;
  _DAT_1550b94d4 = 1;
  _DAT_1550b94d8 = 0;
  _DAT_1550b94c0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSamplerBinding";
  DAT_1550b94aa = Freeze::FindFieldNameLength(L"ShadowDepthTextureSamplerBinding");
  _DAT_1550b9488 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_1550b9498 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550b94a0 = 8;
  _DAT_1550b94a4 = 1;
  _DAT_1550b94a8 = 0;
  _DAT_1550b9490 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureBinding";
  DAT_1550b947a = Freeze::FindFieldNameLength(L"ShadowDepthTextureBinding");
  _DAT_1550b9458 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_1550b9468 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550b9470 = 4;
  _DAT_1550b9474 = 1;
  _DAT_1550b9478 = 0;
  _DAT_1550b9460 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 144a9b640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FRenderLightingCacheLooseBindings::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = _UNK_1506d61ec;
  uVar3 = _UNK_1506d61e8;
  uVar2 = _UNK_1506d61e4;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined4 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x18) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x20) = uVar1;
  return;
}

// StaticGetTypeLayout @ 144ab4de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FRenderLightingCacheLooseBindings::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '$';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FRenderLighting;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRenderLightingCacheLooseBindings,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SceneDepthTextureBinding";
    DAT_1550b944a = Freeze::FindFieldNameLength(L"SceneDepthTextureBinding");
    _DAT_1550b9428 = FShaderResourceParameter::StaticGetTypeLayout();
    _DAT_1550b9438 = Freeze::DefaultWriteMemoryImageField;
    DAT_1550b9430 = ::TypeBuffer[0x10];
    DAT_1550b9430_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b9430_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b9430_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b9430_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b9430_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b9430_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b9430_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRenderLightingCacheLooseBindings::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b9440 = 0;
    _DAT_1550b9444 = 1;
    _DAT_1550b9448 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

