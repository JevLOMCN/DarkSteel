// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// GetTypeLayout @ 144a8db70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FRenderAmbientOcclusionLooseBindings::GetTypeLayout(FRenderAmbientOcclusionLooseBindings *this)

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
    ::TypeBuffer._8_8_ = u_FRenderAmbientO;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRenderAmbientOcclusionLooseBindings,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FRenderAmbientOcclusionLooseBindings::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SceneDepthTextureBinding";
    DAT_1550b84a2 = Freeze::FindFieldNameLength(L"SceneDepthTextureBinding");
    _DAT_1550b8480 = FShaderResourceParameter::StaticGetTypeLayout();
    _DAT_1550b8498 = 0;
    _DAT_1550b8490 = Freeze::DefaultWriteMemoryImageField;
    DAT_1550b8488 = ::TypeBuffer[0x10];
    DAT_1550b8488_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b8488_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b8488_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b8488_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b8488_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b8488_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b8488_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRenderAmbientOcclusionLooseBindings::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b849c = 1;
    _DAT_1550b84a0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 144a9b2f0

void __cdecl
FRenderAmbientOcclusionLooseBindings::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  return;
}

// StaticGetTypeLayout @ 144ab3aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FRenderAmbientOcclusionLooseBindings::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = u_FRenderAmbientO;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRenderAmbientOcclusionLooseBindings,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FRenderAmbientOcclusionLooseBindings::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SceneDepthTextureBinding";
    DAT_1550b84a2 = Freeze::FindFieldNameLength(L"SceneDepthTextureBinding");
    _DAT_1550b8480 = FShaderResourceParameter::StaticGetTypeLayout();
    _DAT_1550b8498 = 0;
    _DAT_1550b8490 = Freeze::DefaultWriteMemoryImageField;
    DAT_1550b8488 = ::TypeBuffer[0x10];
    DAT_1550b8488_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550b8488_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550b8488_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550b8488_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550b8488_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550b8488_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550b8488_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRenderAmbientOcclusionLooseBindings::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550b849c = 1;
    _DAT_1550b84a0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

