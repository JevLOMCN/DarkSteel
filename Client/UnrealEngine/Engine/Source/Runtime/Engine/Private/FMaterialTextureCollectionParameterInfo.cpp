// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// GetTypeLayout @ 147f7cd10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FMaterialTextureCollectionParameterInfo::GetTypeLayout
          (FMaterialTextureCollectionParameterInfo *this)

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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialTextureCollectionParameterInfo,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialTextureCollectionParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "bIsVirtualCollection";
    DAT_155216232 = Freeze::FindFieldNameLength(L"bIsVirtualCollection");
    _DAT_155216210 = StaticGetTypeLayoutDesc<bool>();
    DAT_155216218 = ::TypeBuffer[0x10];
    DAT_155216218_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216218_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216218_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216218_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216218_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216218_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216218_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialTextureCollectionParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216220 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216228 = 0x18;
    _DAT_15521622c = 1;
    _DAT_155216230 = 0;
    `public:_static_void___cdecl_FMaterialTextureCollectionParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureCollectionIndex";
    DAT_155216202 = Freeze::FindFieldNameLength(L"TextureCollectionIndex");
    _DAT_1552161e0 = StaticGetTypeLayoutDesc<int>();
    DAT_1552161e8 = ::TypeBuffer[0x10];
    DAT_1552161e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552161e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552161e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552161e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552161e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552161e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552161e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialTextureCollectionParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552161f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552161f8 = 0x14;
    _DAT_1552161fc = 1;
    _DAT_155216200 = 0;
    `public:_static_void___cdecl_FMaterialTextureCollectionParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterInfo";
    DAT_1552161d2 = Freeze::FindFieldNameLength(L"ParameterInfo");
    _DAT_1552161b0 = FMemoryImageMaterialParameterInfo::StaticGetTypeLayout();
    _DAT_1552161c0 = Freeze::DefaultWriteMemoryImageField;
    DAT_1552161b8 = ::TypeBuffer[0x10];
    DAT_1552161b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552161b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552161b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552161b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552161b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552161b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552161b8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1552161c8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialTextureCollectionParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552161cc = 1;
    _DAT_1552161d0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 147f7f7b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FMaterialTextureCollectionParameterInfo::InternalDestroy
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

// StaticGetTypeLayout @ 147f8a6c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMaterialTextureCollectionParameterInfo::StaticGetTypeLayout(void)

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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialTextureCollectionParameterInfo,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialTextureCollectionParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "bIsVirtualCollection";
    DAT_155216232 = Freeze::FindFieldNameLength(L"bIsVirtualCollection");
    _DAT_155216210 = StaticGetTypeLayoutDesc<bool>();
    DAT_155216218 = ::TypeBuffer[0x10];
    DAT_155216218_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216218_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216218_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216218_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216218_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216218_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216218_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialTextureCollectionParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216220 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216228 = 0x18;
    _DAT_15521622c = 1;
    _DAT_155216230 = 0;
    `public:_static_void___cdecl_FMaterialTextureCollectionParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureCollectionIndex";
    DAT_155216202 = Freeze::FindFieldNameLength(L"TextureCollectionIndex");
    _DAT_1552161e0 = StaticGetTypeLayoutDesc<int>();
    DAT_1552161e8 = ::TypeBuffer[0x10];
    DAT_1552161e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552161e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552161e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552161e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552161e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552161e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552161e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialTextureCollectionParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552161f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552161f8 = 0x14;
    _DAT_1552161fc = 1;
    _DAT_155216200 = 0;
    `public:_static_void___cdecl_FMaterialTextureCollectionParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterInfo";
    DAT_1552161d2 = Freeze::FindFieldNameLength(L"ParameterInfo");
    _DAT_1552161b0 = FMemoryImageMaterialParameterInfo::StaticGetTypeLayout();
    _DAT_1552161c0 = Freeze::DefaultWriteMemoryImageField;
    DAT_1552161b8 = ::TypeBuffer[0x10];
    DAT_1552161b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552161b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552161b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552161b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552161b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552161b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552161b8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1552161c8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialTextureCollectionParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552161cc = 1;
    _DAT_1552161d0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetGameThreadTextureCollectionValue @ 147fd2af0

void __thiscall
FMaterialTextureCollectionParameterInfo::GetGameThreadTextureCollectionValue
          (FMaterialTextureCollectionParameterInfo *this,UMaterialInterface *param_1,
          FMaterial *param_2,UTextureCollection **param_3)

{
  char cVar1;
  UTextureCollection *pUVar2;
  
  if ((((this->ParameterInfo).Name.ComparisonIndex.Value != 0) ||
      ((this->ParameterInfo).Name.Number != 0)) &&
     (cVar1 = (**(code **)(param_1->_padding_ + 0x420))(param_1,this,param_3,0), cVar1 != '\0')) {
    return;
  }
  pUVar2 = GetIndexedTextureCollection(param_2,this->TextureCollectionIndex);
  *param_3 = pUVar2;
  return;
}

// GetTextureCollection @ 147fd8c70

void __thiscall
FMaterialTextureCollectionParameterInfo::GetTextureCollection
          (FMaterialTextureCollectionParameterInfo *this,FMaterialRenderContext *param_1,
          UTextureCollection **param_2)

{
  int iVar1;
  bool bVar2;
  UTextureCollection *pUVar3;
  
  iVar1 = this->TextureCollectionIndex;
  if (((((this->ParameterInfo).Name.ComparisonIndex.Value != 0) ||
       ((this->ParameterInfo).Name.Number != 0)) &&
      (param_1->MaterialRenderProxy != (FMaterialRenderProxy *)0x0)) &&
     (bVar2 = FMaterialRenderProxy::GetTextureCollectionValue
                        (param_1->MaterialRenderProxy,&this->ParameterInfo,param_2,param_1), bVar2))
  {
    return;
  }
  pUVar3 = GetIndexedTextureCollection(param_1->Material,iVar1);
  *param_2 = pUVar3;
  return;
}

