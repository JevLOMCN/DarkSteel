// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// GetTypeLayout @ 145e15700

FTypeLayoutDesc * __thiscall FShaderParameterMapInfo::GetTypeLayout(FShaderParameterMapInfo *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderParamete;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderParameterMapInfo,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<1>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 145e16c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FShaderParameterMapInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FShaderParameterMapInfo::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "H";
  DAT_15518d422 = Freeze::FindFieldNameLength(L"H");
  if ((DAT_154f115af & 2) == 0) {
    DAT_154f115af = DAT_154f115af | 3;
    _DAT_154f115a0 = 8;
    _DAT_154f11550 = L"unsigned long long";
    _DAT_154f11568 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallWriteMemoryImage;
    _DAT_154f11570 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallUnfrozenCopy;
    _DAT_154f11578 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallAppendHash;
    _DAT_154f11580 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallGetTargetAlignment;
    _DAT_154f11588 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallToString;
    _DAT_154f11560 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallDestroy;
    _DAT_154f115a8 = 8;
    DAT_154f115ac = 0;
    _DAT_154f115a4 = 8;
  }
  _DAT_15518d418 = 0x40;
  _DAT_15518d400 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<unsigned___int64>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15518d41c = 1;
  _DAT_15518d410 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518d420 = 0;
  _DAT_15518d408 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShaderParameterMapInfo::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShaderParameterMapInfo::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LooseParameterBuffers";
  DAT_15518d3f2 = Freeze::FindFieldNameLength(L"LooseParameterBuffers");
  if ((DAT_155190357 & 2) == 0) {
    DAT_155190357 = DAT_155190357 | 3;
    _DAT_1551902f8 = L"(TArray<T, AllocatorType>)";
    _DAT_155190310 =
         TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_155190318 =
         TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_155190320 =
         TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_155190328 =
         TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_155190330 =
         TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_155190308 =
         TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_155190348 = 0x10;
    _DAT_155190350 = 8;
    DAT_155190354 = 0;
    _DAT_15519034c = 0x10;
  }
  _DAT_15518d3e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518d3d0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15518d3e8 = 0x30;
  _DAT_15518d3ec = 1;
  _DAT_15518d3f0 = 0;
  _DAT_15518d3d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShaderParameterMapInfo::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShaderParameterMapInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SRVs";
  DAT_15518d3c2 = Freeze::FindFieldNameLength(L"SRVs");
  _DAT_15518d3a0 =
       StaticGetTypeLayoutDesc<TArray<FShaderResourceParameterInfo,TMemoryImageAllocator<0>_>_>();
  _DAT_15518d3b0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518d3b8 = 0x20;
  _DAT_15518d3bc = 1;
  _DAT_15518d3c0 = 0;
  _DAT_15518d3a8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShaderParameterMapInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShaderParameterMapInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "TextureSamplers";
  DAT_15518d392 = Freeze::FindFieldNameLength(L"TextureSamplers");
  _DAT_15518d370 =
       StaticGetTypeLayoutDesc<TArray<FShaderResourceParameterInfo,TMemoryImageAllocator<0>_>_>();
  _DAT_15518d380 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518d388 = 0x10;
  _DAT_15518d38c = 1;
  _DAT_15518d390 = 0;
  _DAT_15518d378 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShaderParameterMapInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShaderParameterMapInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UniformBuffers";
  DAT_15518d362 = Freeze::FindFieldNameLength(L"UniformBuffers");
  if ((DAT_155190427 & 2) == 0) {
    DAT_155190427 = DAT_155190427 | 3;
    _DAT_1551903c8 = L"(TArray<T, AllocatorType>)";
    _DAT_1551903e0 =
         TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_1551903e8 =
         TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_1551903f0 =
         TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_1551903f8 =
         TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_155190400 =
         TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_1551903d8 =
         TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_155190418 = 0x10;
    _DAT_155190420 = 8;
    DAT_155190424 = 0;
    _DAT_15519041c = 0x10;
  }
  _DAT_15518d340 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameterInfo,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15518d350 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518d358 = 0;
  _DAT_15518d35c = 1;
  _DAT_15518d360 = 0;
  _DAT_15518d348 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShaderParameterMapInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 145e18840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FShaderParameterMapInfo::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FShaderLooseParameterBufferInfo *pFVar3;
  
  if (!param_4) {
    pFVar3 = *(FShaderLooseParameterBufferInfo **)((longlong)param_1 + 0x30);
    if (((ulonglong)pFVar3 & 1) != 0) {
      pFVar3 = (FShaderLooseParameterBufferInfo *)
               ((longlong)
                &(((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x30))->Data).field0_0x0 +
               ((longlong)pFVar3 >> 0x18));
    }
    DestructItems<FShaderLooseParameterBufferInfo,int>(pFVar3,*(int *)((longlong)param_1 + 0x38));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x30));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x20));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x10));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase(param_1);
  }
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
  return;
}

// StaticGetTypeLayout @ 145e31040

FTypeLayoutDesc * __cdecl FShaderParameterMapInfo::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderParamete;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderParameterMapInfo,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<1>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

