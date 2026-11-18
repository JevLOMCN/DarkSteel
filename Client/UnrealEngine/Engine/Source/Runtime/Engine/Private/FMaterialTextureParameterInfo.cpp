// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// GetTypeLayout @ 147f7cd20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FMaterialTextureParameterInfo::GetTypeLayout(FMaterialTextureParameterInfo *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x1c';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialTextur;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialTextureParameterInfo,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VirtualTextureLayerIndex";
    DAT_1552161a2 = Freeze::FindFieldNameLength(L"VirtualTextureLayerIndex");
    _DAT_155216180 = StaticGetTypeLayoutDesc<unsigned_char>();
    DAT_155216188 = ::TypeBuffer[0x10];
    DAT_155216188_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216188_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216188_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216188_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216188_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216188_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216188_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216190 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216198 = 0x19;
    _DAT_15521619c = 1;
    _DAT_1552161a0 = 0;
    `public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SamplerSource";
    DAT_155216172 = Freeze::FindFieldNameLength(L"SamplerSource");
    if ((DAT_1552170e7 & 2) == 0) {
      DAT_1552170e7 = DAT_1552170e7 | 3;
      _DAT_1552170d8 = 1;
      _DAT_155217088 = L"TEnumAsByte<T>";
      _DAT_1552170a0 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallWriteMemoryImage;
      _DAT_1552170a8 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallUnfrozenCopy;
      _DAT_1552170b0 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallAppendHash;
      _DAT_1552170b8 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallGetTargetAlignment
      ;
      _DAT_1552170c0 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallToString;
      _DAT_155217098 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallDestroy;
      _DAT_1552170e0 = 1;
      DAT_1552170e4 = 0;
      _DAT_1552170dc = 1;
    }
    _DAT_155216160 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216150 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TEnumAsByte<ESamplerSourceMode>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155216158 = ::TypeBuffer[0x10];
    DAT_155216158_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216158_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216158_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216158_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216158_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216158_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216158_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216168 = 0x18;
    _DAT_15521616c = 1;
    _DAT_155216170 = 0;
    `public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureIndex";
    DAT_155216142 = Freeze::FindFieldNameLength(L"TextureIndex");
    _DAT_155216120 = StaticGetTypeLayoutDesc<int>();
    DAT_155216128 = ::TypeBuffer[0x10];
    DAT_155216128_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216128_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216128_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216128_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216128_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216128_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216128_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216130 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216138 = 0x14;
    _DAT_15521613c = 1;
    _DAT_155216140 = 0;
    `public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterInfo";
    DAT_155216112 = Freeze::FindFieldNameLength(L"ParameterInfo");
    _DAT_1552160f0 = FMemoryImageMaterialParameterInfo::StaticGetTypeLayout();
    _DAT_155216100 = Freeze::DefaultWriteMemoryImageField;
    DAT_1552160f8 = ::TypeBuffer[0x10];
    DAT_1552160f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552160f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552160f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552160f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552160f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552160f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552160f8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155216108 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15521610c = 1;
    _DAT_155216110 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 147f7f7d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FMaterialTextureParameterInfo::InternalDestroy
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
  *(undefined4 *)((longlong)param_1 + 0x18) = uVar1;
  return;
}

// StaticGetTypeLayout @ 147f8a8e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMaterialTextureParameterInfo::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x1c';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialTextur;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialTextureParameterInfo,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VirtualTextureLayerIndex";
    DAT_1552161a2 = Freeze::FindFieldNameLength(L"VirtualTextureLayerIndex");
    _DAT_155216180 = StaticGetTypeLayoutDesc<unsigned_char>();
    DAT_155216188 = ::TypeBuffer[0x10];
    DAT_155216188_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216188_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216188_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216188_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216188_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216188_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216188_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216190 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216198 = 0x19;
    _DAT_15521619c = 1;
    _DAT_1552161a0 = 0;
    `public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SamplerSource";
    DAT_155216172 = Freeze::FindFieldNameLength(L"SamplerSource");
    if ((DAT_1552170e7 & 2) == 0) {
      DAT_1552170e7 = DAT_1552170e7 | 3;
      _DAT_1552170d8 = 1;
      _DAT_155217088 = L"TEnumAsByte<T>";
      _DAT_1552170a0 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallWriteMemoryImage;
      _DAT_1552170a8 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallUnfrozenCopy;
      _DAT_1552170b0 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallAppendHash;
      _DAT_1552170b8 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallGetTargetAlignment
      ;
      _DAT_1552170c0 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallToString;
      _DAT_155217098 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_ESamplerSourceMode>_>::CallDestroy;
      _DAT_1552170e0 = 1;
      DAT_1552170e4 = 0;
      _DAT_1552170dc = 1;
    }
    _DAT_155216160 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216150 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TEnumAsByte<ESamplerSourceMode>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155216158 = ::TypeBuffer[0x10];
    DAT_155216158_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216158_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216158_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216158_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216158_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216158_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216158_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216168 = 0x18;
    _DAT_15521616c = 1;
    _DAT_155216170 = 0;
    `public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureIndex";
    DAT_155216142 = Freeze::FindFieldNameLength(L"TextureIndex");
    _DAT_155216120 = StaticGetTypeLayoutDesc<int>();
    DAT_155216128 = ::TypeBuffer[0x10];
    DAT_155216128_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216128_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216128_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216128_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216128_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216128_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216128_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216130 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216138 = 0x14;
    _DAT_15521613c = 1;
    _DAT_155216140 = 0;
    `public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterInfo";
    DAT_155216112 = Freeze::FindFieldNameLength(L"ParameterInfo");
    _DAT_1552160f0 = FMemoryImageMaterialParameterInfo::StaticGetTypeLayout();
    _DAT_155216100 = Freeze::DefaultWriteMemoryImageField;
    DAT_1552160f8 = ::TypeBuffer[0x10];
    DAT_1552160f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552160f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552160f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552160f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552160f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552160f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552160f8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155216108 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialTextureParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15521610c = 1;
    _DAT_155216110 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetGameThreadTextureValue @ 147fd2c30

void __thiscall
FMaterialTextureParameterInfo::GetGameThreadTextureValue
          (FMaterialTextureParameterInfo *this,UMaterialInterface *param_1,FMaterial *param_2,
          USparseVolumeTexture **param_3)

{
  bool bVar1;
  USparseVolumeTexture *pUVar2;
  
  if ((((this->ParameterInfo).Name.ComparisonIndex.Value != 0) ||
      ((this->ParameterInfo).Name.Number != 0)) &&
     (bVar1 = UMaterialInterface::GetSparseVolumeTextureParameterValue
                        (param_1,&this->ParameterInfo,param_3,false), bVar1)) {
    return;
  }
  pUVar2 = GetIndexedTexture<USparseVolumeTexture>(param_2,this->TextureIndex);
  *param_3 = pUVar2;
  return;
}

// GetGameThreadTextureValue @ 147fd2c90

void __thiscall
FMaterialTextureParameterInfo::GetGameThreadTextureValue
          (FMaterialTextureParameterInfo *this,UMaterialInterface *param_1,FMaterial *param_2,
          UTexture **param_3)

{
  char cVar1;
  UTexture *pUVar2;
  
  if ((((this->ParameterInfo).Name.ComparisonIndex.Value != 0) ||
      ((this->ParameterInfo).Name.Number != 0)) &&
     (cVar1 = (**(code **)(param_1->_padding_ + 0x418))(param_1,this,param_3,0), cVar1 != '\0')) {
    return;
  }
  pUVar2 = GetIndexedTexture<UTexture>(param_2,this->TextureIndex);
  *param_3 = pUVar2;
  return;
}

