// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FDebugUniformExpressionSet @ 145575b40

FDebugUniformExpressionSet * __thiscall
FDebugUniformExpressionSet::FDebugUniformExpressionSet
          (FDebugUniformExpressionSet *this,FUniformExpressionSet *param_1)

{
  this->NumPreshaders = (param_1->UniformPreshaders).ArrayNum;
  this->NumTextureExpressions[0] = param_1->UniformTextureParameters[0].ArrayNum;
  this->NumTextureExpressions[1] = param_1->UniformTextureParameters[1].ArrayNum;
  this->NumTextureExpressions[2] = param_1->UniformTextureParameters[2].ArrayNum;
  this->NumTextureExpressions[3] = param_1->UniformTextureParameters[3].ArrayNum;
  this->NumTextureExpressions[4] = param_1->UniformTextureParameters[4].ArrayNum;
  this->NumTextureExpressions[5] = param_1->UniformTextureParameters[5].ArrayNum;
  this->NumTextureExpressions[6] = param_1->UniformTextureParameters[6].ArrayNum;
  return this;
}

// FDebugUniformExpressionSet @ 145575b90

FDebugUniformExpressionSet * __thiscall
FDebugUniformExpressionSet::FDebugUniformExpressionSet(FDebugUniformExpressionSet *this)

{
  this->NumPreshaders = 0;
  this->NumTextureExpressions[0] = 0;
  this->NumTextureExpressions[1] = 0;
  this->NumTextureExpressions[2] = 0;
  this->NumTextureExpressions[3] = 0;
  this->NumTextureExpressions[4] = 0;
  this->NumTextureExpressions[5] = 0;
  this->NumTextureExpressions[6] = 0;
  return this;
}

// GetTypeLayout @ 1455b0e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FDebugUniformExpressionSet::GetTypeLayout(FDebugUniformExpressionSet *this)

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
    ::TypeBuffer._8_8_ = u_FDebugUniformEx;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FDebugUniformExpressionSet,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FDebugUniformExpressionSet::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumTextureExpressions";
    DAT_1551340f2 = Freeze::FindFieldNameLength(L"NumTextureExpressions");
    _DAT_1551340d0 = StaticGetTypeLayoutDesc<int>();
    DAT_1551340d8 = ::TypeBuffer[0x10];
    DAT_1551340d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551340d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551340d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551340d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551340d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551340d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551340d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugUniformExpressionSet::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551340e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551340e8 = 4;
    _DAT_1551340ec = 7;
    _DAT_1551340f0 = 0;
    `public:_static_void___cdecl_FDebugUniformExpressionSet::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumPreshaders";
    DAT_1551340c2 = Freeze::FindFieldNameLength(L"NumPreshaders");
    _DAT_1551340a0 = StaticGetTypeLayoutDesc<int>();
    _DAT_1551340b0 = Freeze::DefaultWriteMemoryImageField;
    DAT_1551340a8 = ::TypeBuffer[0x10];
    DAT_1551340a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551340a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551340a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551340a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551340a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551340a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551340a8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1551340b8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugUniformExpressionSet::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551340bc = 1;
    _DAT_1551340c0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InitFromExpressionSet @ 1455b2620

void __thiscall
FDebugUniformExpressionSet::InitFromExpressionSet
          (FDebugUniformExpressionSet *this,FUniformExpressionSet *param_1)

{
  this->NumPreshaders = (param_1->UniformPreshaders).ArrayNum;
  this->NumTextureExpressions[0] = param_1->UniformTextureParameters[0].ArrayNum;
  this->NumTextureExpressions[1] = param_1->UniformTextureParameters[1].ArrayNum;
  this->NumTextureExpressions[2] = param_1->UniformTextureParameters[2].ArrayNum;
  this->NumTextureExpressions[3] = param_1->UniformTextureParameters[3].ArrayNum;
  this->NumTextureExpressions[4] = param_1->UniformTextureParameters[4].ArrayNum;
  this->NumTextureExpressions[5] = param_1->UniformTextureParameters[5].ArrayNum;
  this->NumTextureExpressions[6] = param_1->UniformTextureParameters[6].ArrayNum;
  return;
}

// InternalDestroy @ 1455b6f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FDebugUniformExpressionSet::InternalDestroy
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

// Matches @ 1455ba9f0

bool __thiscall
FDebugUniformExpressionSet::Matches(FDebugUniformExpressionSet *this,FUniformExpressionSet *param_1)

{
  uint uVar1;
  FDebugUniformExpressionSet *pFVar2;
  int *piVar3;
  
  uVar1 = 0;
  piVar3 = &param_1->UniformTextureParameters[0].ArrayNum;
  pFVar2 = this;
  do {
    pFVar2 = (FDebugUniformExpressionSet *)pFVar2->NumTextureExpressions;
    if (*(int *)pFVar2 != *piVar3) {
      return false;
    }
    uVar1 = uVar1 + 1;
    piVar3 = piVar3 + 4;
  } while (uVar1 < 7);
  return this->NumPreshaders == (param_1->UniformPreshaders).ArrayNum;
}

// StaticGetTypeLayout @ 1455e4f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FDebugUniformExpressionSet::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = u_FDebugUniformEx;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FDebugUniformExpressionSet,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FDebugUniformExpressionSet::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumTextureExpressions";
    DAT_1551340f2 = Freeze::FindFieldNameLength(L"NumTextureExpressions");
    _DAT_1551340d0 = StaticGetTypeLayoutDesc<int>();
    DAT_1551340d8 = ::TypeBuffer[0x10];
    DAT_1551340d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551340d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551340d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551340d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551340d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551340d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551340d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugUniformExpressionSet::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551340e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551340e8 = 4;
    _DAT_1551340ec = 7;
    _DAT_1551340f0 = 0;
    `public:_static_void___cdecl_FDebugUniformExpressionSet::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumPreshaders";
    DAT_1551340c2 = Freeze::FindFieldNameLength(L"NumPreshaders");
    _DAT_1551340a0 = StaticGetTypeLayoutDesc<int>();
    _DAT_1551340b0 = Freeze::DefaultWriteMemoryImageField;
    DAT_1551340a8 = ::TypeBuffer[0x10];
    DAT_1551340a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551340a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551340a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551340a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551340a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551340a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551340a8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1551340b8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugUniformExpressionSet::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551340bc = 1;
    _DAT_1551340c0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

