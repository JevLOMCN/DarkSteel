// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// GetTypeLayout @ 145e156c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FShaderLooseParameterBufferInfo::GetTypeLayout(FShaderLooseParameterBufferInfo *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x18';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderLoosePar;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderLooseParameterBufferInfo,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderLooseParameterBufferInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Parameters";
    DAT_15518d332 = Freeze::FindFieldNameLength(L"Parameters");
    if ((DAT_15519048f & 2) == 0) {
      DAT_15519048f = DAT_15519048f | 3;
      _DAT_155190480 = 0x10;
      _DAT_155190430 = L"(TArray<T, AllocatorType>)";
      _DAT_155190448 =
           TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>
           ::CallWriteMemoryImage;
      _DAT_155190450 =
           TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>
           ::CallUnfrozenCopy;
      _DAT_155190458 =
           TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>
           ::CallAppendHash;
      _DAT_155190460 =
           TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>
           ::CallGetTargetAlignment;
      _DAT_155190468 =
           TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>
           ::CallToString;
      _DAT_155190440 =
           TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>
           ::CallDestroy;
      _DAT_155190488 = 8;
      DAT_15519048c = 0;
      _DAT_155190484 = 0x10;
    }
    _DAT_15518d328 = 8;
    _DAT_15518d310 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_15518d318 = ::TypeBuffer[0x10];
    DAT_15518d318_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d318_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d318_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d318_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d318_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d318_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d318_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderLooseParameterBufferInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d320 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518d32c = 1;
    _DAT_15518d330 = 0;
    `public:_static_void___cdecl_FShaderLooseParameterBufferInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Size";
    DAT_15518d302 = Freeze::FindFieldNameLength(L"Size");
    _DAT_15518d2e0 = StaticGetTypeLayoutDesc<unsigned_short>();
    DAT_15518d2e8 = ::TypeBuffer[0x10];
    DAT_15518d2e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d2e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d2e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d2e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d2e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d2e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d2e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderLooseParameterBufferInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d2f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518d2f8 = 2;
    _DAT_15518d2fc = 1;
    _DAT_15518d300 = 0;
    `public:_static_void___cdecl_FShaderLooseParameterBufferInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BaseIndex";
    DAT_15518d2d2 = Freeze::FindFieldNameLength(L"BaseIndex");
    _DAT_15518d2b0 = StaticGetTypeLayoutDesc<unsigned_short>();
    _DAT_15518d2c0 = Freeze::DefaultWriteMemoryImageField;
    DAT_15518d2b8 = ::TypeBuffer[0x10];
    DAT_15518d2b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d2b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d2b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d2b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d2b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d2b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d2b8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_15518d2c8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderLooseParameterBufferInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d2cc = 1;
    _DAT_15518d2d0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 145e18740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FShaderLooseParameterBufferInfo::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 8));
  }
  uVar2 = _UNK_1506d61e8;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return;
}

// StaticGetTypeLayout @ 145e30770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FShaderLooseParameterBufferInfo::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x18';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderLoosePar;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderLooseParameterBufferInfo,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderLooseParameterBufferInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Parameters";
    DAT_15518d332 = Freeze::FindFieldNameLength(L"Parameters");
    if ((DAT_15519048f & 2) == 0) {
      DAT_15519048f = DAT_15519048f | 3;
      _DAT_155190480 = 0x10;
      _DAT_155190430 = L"(TArray<T, AllocatorType>)";
      _DAT_155190448 =
           TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>
           ::CallWriteMemoryImage;
      _DAT_155190450 =
           TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>
           ::CallUnfrozenCopy;
      _DAT_155190458 =
           TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>
           ::CallAppendHash;
      _DAT_155190460 =
           TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>
           ::CallGetTargetAlignment;
      _DAT_155190468 =
           TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>
           ::CallToString;
      _DAT_155190440 =
           TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>
           ::CallDestroy;
      _DAT_155190488 = 8;
      DAT_15519048c = 0;
      _DAT_155190484 = 0x10;
    }
    _DAT_15518d328 = 8;
    _DAT_15518d310 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterInfo,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_15518d318 = ::TypeBuffer[0x10];
    DAT_15518d318_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d318_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d318_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d318_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d318_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d318_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d318_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderLooseParameterBufferInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d320 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518d32c = 1;
    _DAT_15518d330 = 0;
    `public:_static_void___cdecl_FShaderLooseParameterBufferInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Size";
    DAT_15518d302 = Freeze::FindFieldNameLength(L"Size");
    _DAT_15518d2e0 = StaticGetTypeLayoutDesc<unsigned_short>();
    DAT_15518d2e8 = ::TypeBuffer[0x10];
    DAT_15518d2e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d2e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d2e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d2e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d2e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d2e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d2e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderLooseParameterBufferInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d2f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518d2f8 = 2;
    _DAT_15518d2fc = 1;
    _DAT_15518d300 = 0;
    `public:_static_void___cdecl_FShaderLooseParameterBufferInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BaseIndex";
    DAT_15518d2d2 = Freeze::FindFieldNameLength(L"BaseIndex");
    _DAT_15518d2b0 = StaticGetTypeLayoutDesc<unsigned_short>();
    _DAT_15518d2c0 = Freeze::DefaultWriteMemoryImageField;
    DAT_15518d2b8 = ::TypeBuffer[0x10];
    DAT_15518d2b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d2b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d2b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d2b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d2b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d2b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d2b8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_15518d2c8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderLooseParameterBufferInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d2cc = 1;
    _DAT_15518d2d0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

