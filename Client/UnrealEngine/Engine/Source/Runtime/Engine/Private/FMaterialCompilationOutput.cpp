// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// GetTypeLayout @ 147f7ccc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

FTypeLayoutDesc * __thiscall
FMaterialCompilationOutput::GetTypeLayout(FMaterialCompilationOutput *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x02';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialCompil;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialCompilationOutput,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "UniformExpressionSet";
    DAT_155216592 = Freeze::FindFieldNameLength(L"UniformExpressionSet");
    _DAT_155216570 = FUniformExpressionSet::StaticGetTypeLayout();
    _DAT_155216580 = Freeze::DefaultWriteMemoryImageField;
    DAT_155216578 = ::TypeBuffer[0x10];
    DAT_155216578_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216578_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216578_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216578_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216578_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216578_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216578_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216588 = 0;
    _DAT_15521658c = 1;
    _DAT_155216590 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 147f7dc00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FMaterialCompilationOutput::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  FMaterialCompilationOutput::InternalLinkType<10>::Initialize(param_1);
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bUsesDBufferTextureLookup";
  DAT_155216712 = Freeze::FindFieldNameLength(L"bUsesDBufferTextureLookup");
  _DAT_1552166f0 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_155216708 = 0xffffffff;
  _DAT_155216700 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15521670c = 1;
  _DAT_155216710 = 0x100;
  _DAT_1552166f8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bNeedsSceneTextures";
  DAT_1552166e2 = Freeze::FindFieldNameLength(L"bNeedsSceneTextures");
  _DAT_1552166c0 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_1552166d0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552166d8 = 0xffffffff;
  _DAT_1552166dc = 1;
  _DAT_1552166e0 = 0x100;
  _DAT_1552166c8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "RuntimeVirtualTextureOutputAttributeMask";
  DAT_1552166b2 = Freeze::FindFieldNameLength(L"RuntimeVirtualTextureOutputAttributeMask");
  _DAT_155216690 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_1552166a0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552166a8 = 0x1f5;
  _DAT_1552166ac = 1;
  _DAT_1552166b0 = 0;
  _DAT_155216698 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UsedDBufferTextures";
  DAT_155216682 = Freeze::FindFieldNameLength(L"UsedDBufferTextures");
  _DAT_155216660 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_155216670 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216678 = 500;
  _DAT_15521667c = 1;
  _DAT_155216680 = 0;
  _DAT_155216668 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateMaterialCompilationOutput";
  DAT_155216652 = Freeze::FindFieldNameLength(L"SubstrateMaterialCompilationOutput");
  _DAT_155216630 = FSubstrateMaterialCompilationOutput::StaticGetTypeLayout();
  _DAT_155216640 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216648 = 0x1ee;
  _DAT_15521664c = 1;
  _DAT_155216650 = 0;
  _DAT_155216638 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UsedPathTracingBufferTextures";
  DAT_155216622 = Freeze::FindFieldNameLength(L"UsedPathTracingBufferTextures");
  _DAT_155216600 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_155216610 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216618 = 0x1ec;
  _DAT_15521661c = 1;
  _DAT_155216620 = 0;
  _DAT_155216608 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UsedSceneTextures";
  DAT_1552165f2 = Freeze::FindFieldNameLength(L"UsedSceneTextures");
  _DAT_1552165d0 = StaticGetTypeLayoutDesc<unsigned_int>();
  _DAT_1552165e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552165e8 = 0x1e8;
  _DAT_1552165ec = 1;
  _DAT_1552165f0 = 0;
  _DAT_1552165d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UserSceneTextureInputs";
  DAT_1552165c2 = Freeze::FindFieldNameLength(L"UserSceneTextureInputs");
  if ((DAT_15521714f & 2) == 0) {
    DAT_15521714f = DAT_15521714f | 3;
    _DAT_155217140 = 0x10;
    _DAT_1552170f0 = L"(TArray<T, AllocatorType>)";
    _DAT_155217108 =
         TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_155217110 =
         TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_155217118 =
         TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::CallAppendHash;
    _DAT_155217120 =
         TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_155217128 =
         TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::CallToString;
    _DAT_155217100 =
         TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::CallDestroy;
    _DAT_155217148 = 8;
    DAT_15521714c = 0;
    _DAT_155217144 = 0x10;
  }
  _DAT_1552165b0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552165a0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_1552165b8 = 0x1d8;
  _DAT_1552165bc = 1;
  _DAT_1552165c0 = 0;
  _DAT_1552165a8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 147f7e7e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FMaterialCompilationOutput::InternalLinkType<10>::Initialize(FTypeLayoutDesc *param_1)

{
  InternalLinkType<18>::Initialize(param_1);
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<17>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bUsesDistanceCullFade";
  DAT_155216892 = Freeze::FindFieldNameLength(L"bUsesDistanceCullFade");
  _DAT_155216870 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_155216888 = 0xffffffff;
  _DAT_155216880 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15521688c = 1;
  _DAT_155216890 = 0x100;
  _DAT_155216878 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<17>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<16>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bUsesPixelDepthOffset";
  DAT_155216862 = Freeze::FindFieldNameLength(L"bUsesPixelDepthOffset");
  _DAT_155216840 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_155216850 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216858 = 0xffffffff;
  _DAT_15521685c = 1;
  _DAT_155216860 = 0x100;
  _DAT_155216848 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<16>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<15>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bUsesGlobalDistanceField";
  DAT_155216832 = Freeze::FindFieldNameLength(L"bUsesGlobalDistanceField");
  _DAT_155216810 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_155216820 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216828 = 0xffffffff;
  _DAT_15521682c = 1;
  _DAT_155216830 = 0x100;
  _DAT_155216818 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<15>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<14>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bUsesMotionVectorWorldOffset";
  DAT_155216802 = Freeze::FindFieldNameLength(L"bUsesMotionVectorWorldOffset");
  _DAT_1552167e0 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_1552167f0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552167f8 = 0xffffffff;
  _DAT_1552167fc = 1;
  _DAT_155216800 = 0x100;
  _DAT_1552167e8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<14>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bUsesTemporalResponsiveness";
  DAT_1552167d2 = Freeze::FindFieldNameLength(L"bUsesTemporalResponsiveness");
  _DAT_1552167b0 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_1552167c0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552167c8 = 0xffffffff;
  _DAT_1552167cc = 1;
  _DAT_1552167d0 = 0x100;
  _DAT_1552167b8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bUsesWorldPositionOffset";
  DAT_1552167a2 = Freeze::FindFieldNameLength(L"bUsesWorldPositionOffset");
  _DAT_155216780 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_155216790 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216798 = 0xffffffff;
  _DAT_15521679c = 1;
  _DAT_1552167a0 = 0x100;
  _DAT_155216788 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bModifiesMeshPosition";
  DAT_155216772 = Freeze::FindFieldNameLength(L"bModifiesMeshPosition");
  _DAT_155216750 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_155216760 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216768 = 0xffffffff;
  _DAT_15521676c = 1;
  _DAT_155216770 = 0x100;
  _DAT_155216758 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bUsesEyeAdaptation";
  DAT_155216742 = Freeze::FindFieldNameLength(L"bUsesEyeAdaptation");
  _DAT_155216720 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_155216730 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216738 = 0xffffffff;
  _DAT_15521673c = 1;
  _DAT_155216740 = 0x100;
  _DAT_155216728 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 147f7eb10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FMaterialCompilationOutput::InternalLinkType<18>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<25>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bUsesCustomizedUVs";
  DAT_155216a12 = Freeze::FindFieldNameLength(L"bUsesCustomizedUVs");
  _DAT_1552169f0 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_155216a08 = 0xffffffff;
  _DAT_155216a00 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216a0c = 1;
  _DAT_155216a10 = 0x100;
  _DAT_1552169f8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<25>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<24>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bUsedWithNeuralNetworks";
  DAT_1552169e2 = Freeze::FindFieldNameLength(L"bUsedWithNeuralNetworks");
  _DAT_1552169c0 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_1552169d0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552169d8 = 0xffffffff;
  _DAT_1552169dc = 1;
  _DAT_1552169e0 = 0x100;
  _DAT_1552169c8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<24>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<23>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bUsesDisplacement";
  DAT_1552169b2 = Freeze::FindFieldNameLength(L"bUsesDisplacement");
  _DAT_155216990 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_1552169a0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552169a8 = 0xffffffff;
  _DAT_1552169ac = 1;
  _DAT_1552169b0 = 0x100;
  _DAT_155216998 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<23>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<22>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bIsLightFunctionAtlasCompatible";
  DAT_155216982 = Freeze::FindFieldNameLength(L"bIsLightFunctionAtlasCompatible");
  _DAT_155216960 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_155216970 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216978 = 0xffffffff;
  _DAT_15521697c = 1;
  _DAT_155216980 = 0x100;
  _DAT_155216968 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<22>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<21>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bUsesAnisotropy";
  DAT_155216952 = Freeze::FindFieldNameLength(L"bUsesAnisotropy");
  _DAT_155216930 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_155216940 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216948 = 0xffffffff;
  _DAT_15521694c = 1;
  _DAT_155216950 = 0x100;
  _DAT_155216938 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<21>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<20>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bHasRuntimeVirtualTextureOutputNode";
  DAT_155216922 = Freeze::FindFieldNameLength(L"bHasRuntimeVirtualTextureOutputNode");
  _DAT_155216900 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_155216910 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216918 = 0xffffffff;
  _DAT_15521691c = 1;
  _DAT_155216920 = 0x100;
  _DAT_155216908 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<20>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<19>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bUsesVertexInterpolator";
  DAT_1552168f2 = Freeze::FindFieldNameLength(L"bUsesVertexInterpolator");
  _DAT_1552168d0 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_1552168e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552168e8 = 0xffffffff;
  _DAT_1552168ec = 1;
  _DAT_1552168f0 = 0x100;
  _DAT_1552168d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<19>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<18>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bUsesPerInstanceCustomData";
  DAT_1552168c2 = Freeze::FindFieldNameLength(L"bUsesPerInstanceCustomData");
  _DAT_1552168a0 = StaticGetTypeLayoutDesc<unsigned_char>();
  _DAT_1552168b0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552168b8 = 0xffffffff;
  _DAT_1552168bc = 1;
  _DAT_1552168c0 = 0x100;
  _DAT_1552168a8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<18>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 147f7f690

void __cdecl
FMaterialCompilationOutput::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x1d8));
    FUniformExpressionSet::~FUniformExpressionSet(param_1);
  }
  memset(param_1,0xfe,0x200);
  return;
}

// StaticGetTypeLayout @ 147f89d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMaterialCompilationOutput::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x02';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialCompil;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialCompilationOutput,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "UniformExpressionSet";
    DAT_155216592 = Freeze::FindFieldNameLength(L"UniformExpressionSet");
    _DAT_155216570 = FUniformExpressionSet::StaticGetTypeLayout();
    _DAT_155216580 = Freeze::DefaultWriteMemoryImageField;
    DAT_155216578 = ::TypeBuffer[0x10];
    DAT_155216578_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155216578_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155216578_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155216578_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155216578_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155216578_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155216578_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialCompilationOutput::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155216588 = 0;
    _DAT_15521658c = 1;
    _DAT_155216590 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

