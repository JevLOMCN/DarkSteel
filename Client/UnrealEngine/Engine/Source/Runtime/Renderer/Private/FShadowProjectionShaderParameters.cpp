// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// GetTypeLayout @ 144bcf9f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FShadowProjectionShaderParameters::GetTypeLayout(FShadowProjectionShaderParameters *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'P';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer[0x60] = '\x02';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShadowProjectionShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<7>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionDepthBias";
    DAT_1550c2ba2 = Freeze::FindFieldNameLength(L"ProjectionDepthBias");
    _DAT_1550c2b80 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2b88 = ::TypeBuffer[0x10];
    DAT_1550c2b88_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2b88_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2b88_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2b88_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2b88_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2b88_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2b88_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2b90 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2b98 = 0x1a;
    _DAT_1550c2b9c = 1;
    _DAT_1550c2ba0 = 0;
    `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
    DAT_1550c2b72 = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
    _DAT_1550c2b50 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1550c2b58 = ::TypeBuffer[0x10];
    DAT_1550c2b58_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2b58_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2b58_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2b58_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2b58_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2b58_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2b58_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2b60 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2b68 = 0x16;
    _DAT_1550c2b6c = 1;
    _DAT_1550c2b70 = 0;
    `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowDepthTexture";
    DAT_1550c2b42 = Freeze::FindFieldNameLength(L"ShadowDepthTexture");
    _DAT_1550c2b20 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1550c2b28 = ::TypeBuffer[0x10];
    DAT_1550c2b28_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2b28_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2b28_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2b28_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2b28_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2b28_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2b28_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2b30 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2b38 = 0x12;
    _DAT_1550c2b3c = 1;
    _DAT_1550c2b40 = 0;
    `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowBufferSize";
    DAT_1550c2b12 = Freeze::FindFieldNameLength(L"ShadowBufferSize");
    _DAT_1550c2af0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2af8 = ::TypeBuffer[0x10];
    DAT_1550c2af8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2af8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2af8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2af8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2af8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2af8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2af8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1550c2b00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2b08 = 0xc;
    _DAT_1550c2b0c = 1;
    _DAT_1550c2b10 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SoftTransitionScale";
    DAT_1550c2ae2 = Freeze::FindFieldNameLength(L"SoftTransitionScale");
    _DAT_1550c2ac0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2ac8 = ::TypeBuffer[0x10];
    DAT_1550c2ac8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2ac8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2ac8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2ac8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2ac8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2ac8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2ac8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2ad0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2ad8 = 6;
    _DAT_1550c2adc = 1;
    _DAT_1550c2ae0 = 0;
    `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ScreenToShadowMatrix";
    DAT_1550c2ab2 = Freeze::FindFieldNameLength(L"ScreenToShadowMatrix");
    _DAT_1550c2a90 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2a98 = ::TypeBuffer[0x10];
    DAT_1550c2a98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2a98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2a98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2a98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2a98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2a98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2a98_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1550c2aa0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2aa8 = 0;
    _DAT_1550c2aac = 1;
    _DAT_1550c2ab0 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 144bd02b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FShadowProjectionShaderParameters::InternalLinkType<7>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<14>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bCascadeUseFadePlane";
  DAT_1550c2d22 = Freeze::FindFieldNameLength(L"bCascadeUseFadePlane");
  _DAT_1550c2d00 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1550c2d18 = 0x4a;
  _DAT_1550c2d10 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550c2d1c = 1;
  _DAT_1550c2d20 = 0;
  _DAT_1550c2d08 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<14>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowNearAndFarDepth";
  DAT_1550c2cf2 = Freeze::FindFieldNameLength(L"ShadowNearAndFarDepth");
  _DAT_1550c2cd0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1550c2ce0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550c2ce8 = 0x44;
  _DAT_1550c2cec = 1;
  _DAT_1550c2cf0 = 0;
  _DAT_1550c2cd8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "InvPerObjectShadowFadeLength";
  DAT_1550c2cc2 = Freeze::FindFieldNameLength(L"InvPerObjectShadowFadeLength");
  _DAT_1550c2ca0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1550c2cb0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550c2cb8 = 0x3e;
  _DAT_1550c2cbc = 1;
  _DAT_1550c2cc0 = 0;
  _DAT_1550c2ca8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PerObjectShadowFadeStart";
  DAT_1550c2c92 = Freeze::FindFieldNameLength(L"PerObjectShadowFadeStart");
  _DAT_1550c2c70 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1550c2c80 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550c2c88 = 0x38;
  _DAT_1550c2c8c = 1;
  _DAT_1550c2c90 = 0;
  _DAT_1550c2c78 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPositionOrDirection";
  DAT_1550c2c62 = Freeze::FindFieldNameLength(L"LightPositionOrDirection");
  _DAT_1550c2c40 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1550c2c50 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550c2c58 = 0x32;
  _DAT_1550c2c5c = 1;
  _DAT_1550c2c60 = 0;
  _DAT_1550c2c48 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowTileOffsetAndSizeParam";
  DAT_1550c2c32 = Freeze::FindFieldNameLength(L"ShadowTileOffsetAndSizeParam");
  _DAT_1550c2c10 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1550c2c20 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550c2c28 = 0x2c;
  _DAT_1550c2c2c = 1;
  _DAT_1550c2c30 = 0;
  _DAT_1550c2c18 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "InvFadePlaneLength";
  DAT_1550c2c02 = Freeze::FindFieldNameLength(L"InvFadePlaneLength");
  _DAT_1550c2be0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1550c2bf0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550c2bf8 = 0x26;
  _DAT_1550c2bfc = 1;
  _DAT_1550c2c00 = 0;
  _DAT_1550c2be8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "FadePlaneOffset";
  DAT_1550c2bd2 = Freeze::FindFieldNameLength(L"FadePlaneOffset");
  _DAT_1550c2bb0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1550c2bc0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1550c2bc8 = 0x20;
  _DAT_1550c2bcc = 1;
  _DAT_1550c2bd0 = 0;
  _DAT_1550c2bb8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 144bd0d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FShadowProjectionShaderParameters::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_1506d61e8;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar2;
  return;
}

// StaticGetTypeLayout @ 144be8500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FShadowProjectionShaderParameters::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'P';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer[0x60] = '\x02';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShadowProjectionShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<7>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionDepthBias";
    DAT_1550c2ba2 = Freeze::FindFieldNameLength(L"ProjectionDepthBias");
    _DAT_1550c2b80 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2b88 = ::TypeBuffer[0x10];
    DAT_1550c2b88_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2b88_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2b88_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2b88_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2b88_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2b88_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2b88_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2b90 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2b98 = 0x1a;
    _DAT_1550c2b9c = 1;
    _DAT_1550c2ba0 = 0;
    `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
    DAT_1550c2b72 = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
    _DAT_1550c2b50 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1550c2b58 = ::TypeBuffer[0x10];
    DAT_1550c2b58_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2b58_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2b58_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2b58_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2b58_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2b58_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2b58_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2b60 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2b68 = 0x16;
    _DAT_1550c2b6c = 1;
    _DAT_1550c2b70 = 0;
    `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowDepthTexture";
    DAT_1550c2b42 = Freeze::FindFieldNameLength(L"ShadowDepthTexture");
    _DAT_1550c2b20 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1550c2b28 = ::TypeBuffer[0x10];
    DAT_1550c2b28_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2b28_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2b28_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2b28_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2b28_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2b28_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2b28_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2b30 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2b38 = 0x12;
    _DAT_1550c2b3c = 1;
    _DAT_1550c2b40 = 0;
    `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowBufferSize";
    DAT_1550c2b12 = Freeze::FindFieldNameLength(L"ShadowBufferSize");
    _DAT_1550c2af0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2af8 = ::TypeBuffer[0x10];
    DAT_1550c2af8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2af8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2af8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2af8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2af8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2af8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2af8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1550c2b00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2b08 = 0xc;
    _DAT_1550c2b0c = 1;
    _DAT_1550c2b10 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SoftTransitionScale";
    DAT_1550c2ae2 = Freeze::FindFieldNameLength(L"SoftTransitionScale");
    _DAT_1550c2ac0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2ac8 = ::TypeBuffer[0x10];
    DAT_1550c2ac8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2ac8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2ac8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2ac8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2ac8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2ac8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2ac8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2ad0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2ad8 = 6;
    _DAT_1550c2adc = 1;
    _DAT_1550c2ae0 = 0;
    `public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ScreenToShadowMatrix";
    DAT_1550c2ab2 = Freeze::FindFieldNameLength(L"ScreenToShadowMatrix");
    _DAT_1550c2a90 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2a98 = ::TypeBuffer[0x10];
    DAT_1550c2a98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2a98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2a98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2a98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2a98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2a98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2a98_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1550c2aa0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2aa8 = 0;
    _DAT_1550c2aac = 1;
    _DAT_1550c2ab0 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowProjectionShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Bind @ 145580aa0

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

void __thiscall
FShadowProjectionShaderParameters::Bind
          (FShadowProjectionShaderParameters *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  
  pFVar1 = param_1->ParameterMap;
  FShaderParameter::Bind(&this->ScreenToShadowMatrix,pFVar1,L"ScreenToShadowMatrix",SPF_Optional);
  FShaderParameter::Bind(&this->SoftTransitionScale,pFVar1,L"SoftTransitionScale",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowBufferSize,pFVar1,L"ShadowBufferSize",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->ShadowDepthTexture,pFVar1,L"ShadowDepthTexture",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->ShadowDepthTextureSampler,pFVar1,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind
            (&this->ProjectionDepthBias,pFVar1,L"ProjectionDepthBiasParameters",SPF_Optional);
  FShaderParameter::Bind(&this->FadePlaneOffset,pFVar1,L"FadePlaneOffset",SPF_Optional);
  FShaderParameter::Bind(&this->InvFadePlaneLength,pFVar1,L"InvFadePlaneLength",SPF_Optional);
  FShaderParameter::Bind
            (&this->ShadowTileOffsetAndSizeParam,pFVar1,L"ShadowTileOffsetAndSize",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPositionOrDirection,pFVar1,L"LightPositionOrDirection",SPF_Optional);
  FShaderParameter::Bind
            (&this->PerObjectShadowFadeStart,pFVar1,L"PerObjectShadowFadeStart",SPF_Optional);
  FShaderParameter::Bind
            (&this->InvPerObjectShadowFadeLength,pFVar1,L"InvPerObjectShadowFadeLength",SPF_Optional
            );
  FShaderParameter::Bind(&this->ShadowNearAndFarDepth,pFVar1,L"ShadowNearAndFarDepth",SPF_Optional);
  FShaderParameter::Bind(&this->bCascadeUseFadePlane,pFVar1,L"bCascadeUseFadePlane",SPF_Optional);
  return;
}

// Set @ 1455c9650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FShadowProjectionShaderParameters::Set
          (FShadowProjectionShaderParameters *this,FRHIBatchedShaderParameters *param_1,
          FSceneView *param_2,FProjectedShadowInfo *param_3,bool param_4,bool param_5,bool param_6)

{
  undefined1 *puVar1;
  uchar uVar2;
  ushort uVar3;
  IPooledRenderTarget *pIVar4;
  FLightSceneProxy *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  IPooledRenderTarget *pIVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  TRefCountPtr<FRHISamplerState> TVar19;
  bool bVar20;
  TMatrix<double> *pTVar21;
  float *pfVar22;
  TConsoleVariableData<float> *pTVar23;
  uint uVar24;
  double dVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStackY_308 [32];
  float local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint uStack_2bc;
  float local_2b8;
  float local_2b4;
  undefined8 local_2b0;
  float local_2a8;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  undefined4 local_25c;
  float local_258;
  float local_254;
  float local_250;
  undefined4 local_24c;
  double local_238;
  TMatrix<double> local_228;
  TMatrix<double> local_1a8;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_238 = (param_2->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar28 = (param_2->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar7 = (param_2->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FProjectedShadowInfo::GetShadowBufferResolution(param_3);
  fVar30 = __real_3f800000;
  uVar3 = (this->ShadowTileOffsetAndSizeParam).NumBytes;
  uVar24 = (uint)uVar3;
  if (uVar3 != 0) {
    if (0x10 < uVar3) {
      uVar24 = 0x10;
    }
    local_298 = (float)(param_3->X + param_3->BorderSize) *
                (__real_3f800000 / (float)(int)local_2c0);
    local_294 = (float)(param_3->Y + param_3->BorderSize) *
                (__real_3f800000 / (float)(int)uStack_2bc);
    local_290 = (float)param_3->ResolutionX * (__real_3f800000 / (float)(int)local_2c0);
    local_28c = (float)param_3->ResolutionY * (__real_3f800000 / (float)(int)uStack_2bc);
    if (uVar24 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ShadowTileOffsetAndSizeParam).BufferIndex,
                 (uint)(this->ShadowTileOffsetAndSizeParam).BaseIndex,uVar24,&local_298);
    }
  }
  if (param_4) {
    pTVar21 = FProjectedShadowInfo::GetScreenToShadowMatrix
                        (param_3,&local_1a8,param_2,0,0,local_2c0,uStack_2bc);
    uVar3 = (this->ScreenToShadowMatrix).NumBytes;
    uVar24 = (uint)uVar3;
    uStack_120 = CONCAT44((float)pTVar21->M[0][3],(float)pTVar21->M[0][2]);
    local_128 = CONCAT44((float)pTVar21->M[0][1],(float)pTVar21->M[0][0]);
    local_118 = (float)pTVar21->M[1][0];
    fStack_114 = (float)pTVar21->M[1][1];
    fStack_110 = (float)pTVar21->M[1][2];
    fStack_10c = (float)pTVar21->M[1][3];
    uStack_100 = CONCAT44((float)pTVar21->M[2][3],(float)pTVar21->M[2][2]);
    local_108 = CONCAT44((float)pTVar21->M[2][1],(float)pTVar21->M[2][0]);
    local_f8 = (float)pTVar21->M[3][0];
    fStack_f4 = (float)pTVar21->M[3][1];
    if (0x40 < uVar3) {
      uVar24 = 0x40;
    }
    fStack_f0 = (float)pTVar21->M[3][2];
    fStack_ec = (float)pTVar21->M[3][3];
    if (uVar24 != 0) {
      pfVar22 = (float *)&local_128;
LAB_1455c990e:
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ScreenToShadowMatrix).BufferIndex,
                 (uint)(this->ScreenToShadowMatrix).BaseIndex,uVar24,pfVar22);
    }
  }
  else {
    FProjectedShadowInfo::GetScreenToShadowMatrix
              (param_3,&local_228,param_2,param_3->X,param_3->Y,param_3->ResolutionX,
               param_3->ResolutionY);
    local_e8 = (float)local_228.M[0][0];
    fStack_e4 = (float)local_228.M[0][1];
    uVar3 = (this->ScreenToShadowMatrix).NumBytes;
    uVar24 = (uint)uVar3;
    if (0x40 < uVar3) {
      uVar24 = 0x40;
    }
    local_d8 = CONCAT44((float)local_228.M[1][1],(float)local_228.M[1][0]);
    fStack_e0 = (float)local_228.M[0][2];
    fStack_dc = (float)local_228.M[0][3];
    uStack_d0 = CONCAT44((float)local_228.M[1][3],(float)local_228.M[1][2]);
    local_c8 = (float)local_228.M[2][0];
    fStack_c4 = (float)local_228.M[2][1];
    fStack_c0 = (float)local_228.M[2][2];
    fStack_bc = (float)local_228.M[2][3];
    local_b8 = CONCAT44((float)local_228.M[3][1],(float)local_228.M[3][0]);
    uStack_b0 = CONCAT44((float)local_228.M[3][3],(float)local_228.M[3][2]);
    if (uVar24 != 0) {
      pfVar22 = &local_e8;
      goto LAB_1455c990e;
    }
  }
  fVar32 = 0.0;
  if ((this->SoftTransitionScale).NumBytes != 0) {
    local_2b0 = 0;
    local_2a8 = FProjectedShadowInfo::ComputeTransitionSize(param_3);
    uVar3 = (this->SoftTransitionScale).NumBytes;
    uVar24 = (uint)uVar3;
    local_2a8 = fVar30 / local_2a8;
    if (0xc < uVar3) {
      uVar24 = 0xc;
    }
    if (uVar24 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->SoftTransitionScale).BufferIndex,
                 (uint)(this->SoftTransitionScale).BaseIndex,uVar24,&local_2b0);
    }
  }
  dVar29 = __real_3ff0000000000000;
  uVar3 = (this->ShadowBufferSize).NumBytes;
  uVar24 = (uint)uVar3;
  if (uVar3 != 0) {
    if (0x10 < uVar3) {
      uVar24 = 0x10;
    }
    local_288 = (float)(int)local_2c0;
    local_284 = (float)(int)uStack_2bc;
    local_280 = (float)(__real_3ff0000000000000 / (double)(int)local_2c0);
    local_27c = (float)(__real_3ff0000000000000 / (double)(int)uStack_2bc);
    if (uVar24 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ShadowBufferSize).BufferIndex,
                 (uint)(this->ShadowBufferSize).BaseIndex,uVar24,&local_288);
    }
  }
  TVar19.Reference =
       TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pIVar4 = (param_3->RenderTargets).DepthTarget;
  pIVar11 = (IPooledRenderTarget *)GSystemTextures._40_8_;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    pIVar11 = pIVar4;
  }
  SetTextureParameter(param_1,&this->ShadowDepthTexture,
                      (pIVar11->RenderTargetItem).TargetableTexture.Reference);
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,TVar19.Reference);
  if ((this->ShadowDepthTextureSampler).NumResources != '\0') {
    SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,TVar19.Reference);
  }
  fVar31 = param_3->MaxSubjectZ - param_3->MinSubjectZ;
  uVar2 = param_3->LightSceneInfo->Proxy->LightType;
  pTVar23 = CVarCSMShadowReceiverBias.Ref;
  if (uVar2 != '\0') {
    if (uVar2 == '\x01') {
      local_270 = param_3->ShaderSlopeDepthBias;
      goto LAB_1455c9ae7;
    }
    pTVar23 = CVarSpotLightShadowReceiverBias.Ref;
    if ((uVar2 != '\x02') &&
       (pTVar23 = CVarRectLightShadowReceiverBias.Ref, local_270 = fVar30, uVar2 != '\x03'))
    goto LAB_1455c9ae7;
  }
  bVar20 = IsInParallelRenderingThread();
  if ((!bVar20) &&
     (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_270 = pTVar23->ShadowedValue[1];
LAB_1455c9ae7:
  local_278 = param_3->ShaderDepthBias;
  if (fVar30 <= local_270) {
    local_270 = fVar30;
  }
  uVar3 = (this->ProjectionDepthBias).NumBytes;
  uVar24 = (uint)uVar3;
  local_274 = param_3->ShaderSlopeDepthBias;
  if (0x10 < uVar3) {
    uVar24 = 0x10;
  }
  if (local_270 <= 0.0) {
    local_270 = 0.0;
  }
  local_270 = fVar30 - local_270;
  local_26c = fVar31;
  if (uVar24 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ProjectionDepthBias).BufferIndex,
               (uint)(this->ProjectionDepthBias).BaseIndex,uVar24,&local_278);
  }
  uVar3 = (this->FadePlaneOffset).NumBytes;
  uVar24 = (uint)uVar3;
  if (4 < uVar3) {
    uVar24 = 4;
  }
  if (uVar24 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->FadePlaneOffset).BufferIndex,
               (uint)(this->FadePlaneOffset).BaseIndex,uVar24,
               &(param_3->CascadeSettings).FadePlaneOffset);
  }
  if (((this->InvFadePlaneLength).NumBytes != 0) && (param_5)) {
    if (((param_3->CascadeSettings).FadePlaneLength <= 0.0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("ShadowInfo->CascadeSettings.FadePlaneLength > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.h"
                            ,0x49a,L""), bVar20)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar3 = (this->InvFadePlaneLength).NumBytes;
    uVar24 = (uint)uVar3;
    local_2c8 = fVar30 / (param_3->CascadeSettings).FadePlaneLength;
    if (4 < uVar3) {
      uVar24 = 4;
    }
    if (uVar24 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->InvFadePlaneLength).BufferIndex,
                 (uint)(this->InvFadePlaneLength).BaseIndex,uVar24,&local_2c8);
    }
  }
  uVar3 = (this->LightPositionOrDirection).NumBytes;
  if (uVar3 != 0) {
    pFVar5 = param_3->LightSceneInfo->Proxy;
    if (pFVar5->LightType == '\0') {
      pfVar22 = &local_268;
      local_268 = (float)(pFVar5->WorldToLight).M[0][0];
      local_25c = 0;
      local_264 = (float)(pFVar5->WorldToLight).M[1][0];
      local_260 = (float)(pFVar5->WorldToLight).M[2][0];
    }
    else {
      local_258 = (float)((pFVar5->Position).field0_0x0._s_0.X + dVar28);
      local_24c = 0x3f800000;
      pfVar22 = &local_258;
      local_254 = (float)((pFVar5->Position).field0_0x0._s_0.Y + dVar7);
      local_250 = (float)((pFVar5->Position).field0_0x0._s_0.Z + local_238);
    }
    uVar24 = (uint)uVar3;
    if (0x10 < uVar3) {
      uVar24 = 0x10;
    }
    if (uVar24 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->LightPositionOrDirection).BufferIndex,
                 (uint)(this->LightPositionOrDirection).BaseIndex,uVar24,pfVar22);
    }
  }
  if (param_6) {
    if (param_3->bDirectionalLight == 1 &&
        (param_3->bPreShadow == 0 && param_3->bPerObjectOpaqueShadow == 0)) {
      dVar12 = (param_2->ViewMatrices).ProjectionMatrix.M[1][2];
      dVar13 = (param_2->ViewMatrices).ProjectionMatrix.M[1][3];
      dVar14 = (param_2->ViewMatrices).ProjectionMatrix.M[3][2];
      dVar15 = (param_2->ViewMatrices).ProjectionMatrix.M[3][3];
      dVar16 = (param_2->ViewMatrices).ProjectionMatrix.M[0][2];
      dVar17 = (param_2->ViewMatrices).ProjectionMatrix.M[0][3];
      dVar18 = (param_2->ViewMatrices).ProjectionMatrix.M[2][2];
      dVar27 = (param_2->ViewMatrices).ProjectionMatrix.M[2][3];
      dVar28 = (double)(param_3->CascadeSettings).SplitNear;
      dVar7 = dVar12 * 0.0 + dVar16 * 0.0 + dVar28 * dVar18 + dVar29 * dVar14;
      dVar8 = dVar13 * 0.0 + dVar17 * 0.0 + dVar28 * dVar27 + dVar29 * dVar15;
      dVar28 = (double)(param_3->CascadeSettings).SplitFar;
      dVar27 = dVar28 * dVar27;
      auVar9._4_8_ = dVar27;
      auVar9._0_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar25._0_8_ = auVar9._0_8_ << 0x20;
      auVar25._8_4_ = SUB84(dVar8,0);
      auVar25._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      dVar28 = dVar12 * 0.0 + dVar16 * 0.0 + dVar28 * dVar18 + dVar29 * dVar14;
      dVar29 = dVar13 * 0.0 + dVar17 * 0.0 + dVar27 + dVar29 * dVar15;
      auVar10._4_8_ = dVar8;
      auVar10._0_4_ = (int)((ulonglong)dVar28 >> 0x20);
      auVar26._0_8_ = auVar10._0_8_ << 0x20;
      auVar26._8_4_ = SUB84(dVar29,0);
      auVar26._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      fVar30 = (float)(dVar7 / auVar25._8_8_);
      fVar32 = (float)(dVar28 / auVar26._8_8_);
    }
    uVar3 = (this->ShadowNearAndFarDepth).NumBytes;
    uVar24 = (uint)uVar3;
    if (8 < uVar3) {
      uVar24 = 8;
    }
    local_2b8 = fVar30;
    local_2b4 = fVar32;
    if (uVar24 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ShadowNearAndFarDepth).BufferIndex,
                 (uint)(this->ShadowNearAndFarDepth).BaseIndex,uVar24,&local_2b8);
    }
    uVar3 = (this->bCascadeUseFadePlane).NumBytes;
    local_2c4 = (uint)param_5;
    uVar24 = (uint)uVar3;
    if (4 < uVar3) {
      uVar24 = 4;
    }
    if (uVar24 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->bCascadeUseFadePlane).BufferIndex,
                 (uint)(this->bCascadeUseFadePlane).BaseIndex,uVar24,&local_2c4);
    }
  }
  uVar3 = (this->PerObjectShadowFadeStart).NumBytes;
  uVar24 = (uint)uVar3;
  if (4 < uVar3) {
    uVar24 = 4;
  }
  if (uVar24 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PerObjectShadowFadeStart).BufferIndex,
               (uint)(this->PerObjectShadowFadeStart).BaseIndex,uVar24,
               &param_3->PerObjectShadowFadeStart);
  }
  uVar3 = (this->InvPerObjectShadowFadeLength).NumBytes;
  uVar24 = (uint)uVar3;
  if (4 < uVar3) {
    uVar24 = 4;
  }
  if (uVar24 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->InvPerObjectShadowFadeLength).BufferIndex,
               (uint)(this->InvPerObjectShadowFadeLength).BaseIndex,uVar24,
               &param_3->InvPerObjectShadowFadeLength);
  }
  return;
}

