// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetTypeLayout @ 147f7ccd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FMaterialExternalTextureParameterInfo::GetTypeLayout(FMaterialExternalTextureParameterInfo *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialExtern;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialExternalTextureParameterInfo,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialExternalTextureParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SourceTextureIndex";
    DAT_1552162c2 = Freeze::FindFieldNameLength(L"SourceTextureIndex");
    _DAT_1552162a0 = StaticGetTypeLayoutDesc<int>();
    DAT_1552162a8 = ::TypeBuffer[0x10];
    DAT_1552162a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552162a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552162a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552162a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552162a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552162a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552162a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialExternalTextureParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552162b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552162b8 = 0x1c;
    _DAT_1552162bc = 1;
    _DAT_1552162c0 = 0;
    `public:_static_void___cdecl_FMaterialExternalTextureParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ExternalTextureGuid";
    DAT_155216292 = Freeze::FindFieldNameLength(L"ExternalTextureGuid");
    _DAT_155216270 = StaticGetTypeLayoutDesc<FGuid>();
    DAT_155216278 = ::TypeBuffer[0x10];
    DAT_155216278_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216278_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216278_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216278_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216278_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216278_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216278_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialExternalTextureParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216280 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216288 = 0xc;
    _DAT_15521628c = 1;
    _DAT_155216290 = 0;
    `public:_static_void___cdecl_FMaterialExternalTextureParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterName";
    DAT_155216262 = Freeze::FindFieldNameLength(L"ParameterName");
    _DAT_155216240 = StaticGetTypeLayoutDesc<FScriptName>();
    _DAT_155216250 = Freeze::DefaultWriteMemoryImageField;
    DAT_155216248 = ::TypeBuffer[0x10];
    DAT_155216248_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216248_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216248_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216248_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216248_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216248_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216248_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155216258 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialExternalTextureParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15521625c = 1;
    _DAT_155216260 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 147f7f6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FMaterialExternalTextureParameterInfo::InternalDestroy
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
  return;
}

// StaticGetTypeLayout @ 147f89ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMaterialExternalTextureParameterInfo::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialExtern;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialExternalTextureParameterInfo,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialExternalTextureParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SourceTextureIndex";
    DAT_1552162c2 = Freeze::FindFieldNameLength(L"SourceTextureIndex");
    _DAT_1552162a0 = StaticGetTypeLayoutDesc<int>();
    DAT_1552162a8 = ::TypeBuffer[0x10];
    DAT_1552162a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552162a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552162a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552162a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552162a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552162a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552162a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialExternalTextureParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552162b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552162b8 = 0x1c;
    _DAT_1552162bc = 1;
    _DAT_1552162c0 = 0;
    `public:_static_void___cdecl_FMaterialExternalTextureParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ExternalTextureGuid";
    DAT_155216292 = Freeze::FindFieldNameLength(L"ExternalTextureGuid");
    _DAT_155216270 = StaticGetTypeLayoutDesc<FGuid>();
    DAT_155216278 = ::TypeBuffer[0x10];
    DAT_155216278_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216278_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216278_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216278_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216278_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216278_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216278_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialExternalTextureParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216280 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155216288 = 0xc;
    _DAT_15521628c = 1;
    _DAT_155216290 = 0;
    `public:_static_void___cdecl_FMaterialExternalTextureParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterName";
    DAT_155216262 = Freeze::FindFieldNameLength(L"ParameterName");
    _DAT_155216240 = StaticGetTypeLayoutDesc<FScriptName>();
    _DAT_155216250 = Freeze::DefaultWriteMemoryImageField;
    DAT_155216248 = ::TypeBuffer[0x10];
    DAT_155216248_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216248_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216248_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216248_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216248_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216248_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216248_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155216258 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialExternalTextureParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15521625c = 1;
    _DAT_155216260 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetExternalTexture @ 147fd2660

bool __thiscall
FMaterialExternalTextureParameterInfo::GetExternalTexture
          (FMaterialExternalTextureParameterInfo *this,FMaterialRenderContext *param_1,
          TRefCountPtr<FRHITexture> *param_2,TRefCountPtr<FRHISamplerState> *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FExternalTextureRegistry *this_00;
  FName local_res8;
  uint local_28;
  FGuid local_18;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                       ,0x83d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_res8.Number = (this->ParameterName).Number;
  uVar1 = (this->ParameterName).ComparisonIndex;
  local_res8.ComparisonIndex.Value = uVar1;
  FMaterialRenderContext::GetExternalTextureGuid
            (param_1,&local_18,&this->ExternalTextureGuid,&local_res8,this->SourceTextureIndex);
  this_00 = FExternalTextureRegistry::Get();
  bVar3 = FExternalTextureRegistry::GetExternalTexture
                    (this_00,param_1->MaterialRenderProxy,&local_18,param_2,param_3);
  return bVar3;
}

