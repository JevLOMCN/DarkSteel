// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// GetTypeLayout @ 144bcfa10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FUniformLightMapPolicyShaderParametersType::GetTypeLayout
          (FUniformLightMapPolicyShaderParametersType *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x06';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FUniformLightMa;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FUniformLightMapPolicyShaderParametersType,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FUniformLightMapPolicyShaderParametersType::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightmapResourceCluster";
    DAT_1550c1542 = Freeze::FindFieldNameLength(L"LightmapResourceCluster");
    _DAT_1550c1520 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_1550c1528 = ::TypeBuffer[0x10];
    DAT_1550c1528_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c1528_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c1528_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c1528_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c1528_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c1528_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c1528_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUniformLightMapPolicyShaderParametersType::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c1530 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c1538 = 4;
    _DAT_1550c153c = 1;
    _DAT_1550c1540 = 0;
    `public:_static_void___cdecl_FUniformLightMapPolicyShaderParametersType::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "IndirectLightingCacheParameter";
    DAT_1550c1512 = Freeze::FindFieldNameLength(L"IndirectLightingCacheParameter");
    _DAT_1550c14f0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_1550c14f8 = ::TypeBuffer[0x10];
    DAT_1550c14f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c14f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c14f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c14f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c14f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c14f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c14f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUniformLightMapPolicyShaderParametersType::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c1500 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c1508 = 2;
    _DAT_1550c150c = 1;
    _DAT_1550c1510 = 0;
    `public:_static_void___cdecl_FUniformLightMapPolicyShaderParametersType::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PrecomputedLightingBufferParameter";
    DAT_1550c14e2 = Freeze::FindFieldNameLength(L"PrecomputedLightingBufferParameter");
    _DAT_1550c14c0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_1550c14d0 = Freeze::DefaultWriteMemoryImageField;
    DAT_1550c14c8 = ::TypeBuffer[0x10];
    DAT_1550c14c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c14c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c14c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c14c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c14c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c14c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c14c8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1550c14d8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUniformLightMapPolicyShaderParametersType::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c14dc = 1;
    _DAT_1550c14e0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 144bd0d70

void __cdecl
FUniformLightMapPolicyShaderParametersType::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  *(undefined2 *)((longlong)param_1 + 4) = 0xfefe;
  return;
}

// StaticGetTypeLayout @ 144be8a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x06';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FUniformLightMa;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FUniformLightMapPolicyShaderParametersType,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FUniformLightMapPolicyShaderParametersType::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightmapResourceCluster";
    DAT_1550c1542 = Freeze::FindFieldNameLength(L"LightmapResourceCluster");
    _DAT_1550c1520 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_1550c1528 = ::TypeBuffer[0x10];
    DAT_1550c1528_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c1528_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c1528_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c1528_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c1528_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c1528_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c1528_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUniformLightMapPolicyShaderParametersType::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c1530 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c1538 = 4;
    _DAT_1550c153c = 1;
    _DAT_1550c1540 = 0;
    `public:_static_void___cdecl_FUniformLightMapPolicyShaderParametersType::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "IndirectLightingCacheParameter";
    DAT_1550c1512 = Freeze::FindFieldNameLength(L"IndirectLightingCacheParameter");
    _DAT_1550c14f0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_1550c14f8 = ::TypeBuffer[0x10];
    DAT_1550c14f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c14f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c14f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c14f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c14f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c14f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c14f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUniformLightMapPolicyShaderParametersType::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c1500 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c1508 = 2;
    _DAT_1550c150c = 1;
    _DAT_1550c1510 = 0;
    `public:_static_void___cdecl_FUniformLightMapPolicyShaderParametersType::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PrecomputedLightingBufferParameter";
    DAT_1550c14e2 = Freeze::FindFieldNameLength(L"PrecomputedLightingBufferParameter");
    _DAT_1550c14c0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_1550c14d0 = Freeze::DefaultWriteMemoryImageField;
    DAT_1550c14c8 = ::TypeBuffer[0x10];
    DAT_1550c14c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c14c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c14c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c14c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c14c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c14c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c14c8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1550c14d8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUniformLightMapPolicyShaderParametersType::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c14dc = 1;
    _DAT_1550c14e0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

