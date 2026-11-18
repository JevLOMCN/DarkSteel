// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 40

// FUniformExpressionSet @ 147f66960

FUniformExpressionSet * __thiscall
FUniformExpressionSet::FUniformExpressionSet(FUniformExpressionSet *this)

{
  (this->UniformParameterEvaluations).AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformParameterEvaluations).ArrayNum = 0;
  (this->UniformParameterEvaluations).ArrayMax = 0;
  (this->UniformPreshaders).AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformPreshaders).ArrayNum = 0;
  (this->UniformPreshaders).ArrayMax = 0;
  (this->UniformPreshaderFields).AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformPreshaderFields).ArrayNum = 0;
  (this->UniformPreshaderFields).ArrayMax = 0;
  (this->UniformNumericParameters).AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformNumericParameters).ArrayNum = 0;
  (this->UniformNumericParameters).ArrayMax = 0;
  this->UniformTextureParameters[0].AllocatorInstance = (ForAnyElementType)0x0;
  this->UniformTextureParameters[0].ArrayNum = 0;
  this->UniformTextureParameters[0].ArrayMax = 0;
  this->UniformTextureParameters[1].AllocatorInstance = (ForAnyElementType)0x0;
  this->UniformTextureParameters[1].ArrayNum = 0;
  this->UniformTextureParameters[1].ArrayMax = 0;
  this->UniformTextureParameters[2].AllocatorInstance = (ForAnyElementType)0x0;
  this->UniformTextureParameters[2].ArrayNum = 0;
  this->UniformTextureParameters[2].ArrayMax = 0;
  this->UniformTextureParameters[3].AllocatorInstance = (ForAnyElementType)0x0;
  this->UniformTextureParameters[3].ArrayNum = 0;
  this->UniformTextureParameters[3].ArrayMax = 0;
  this->UniformTextureParameters[4].AllocatorInstance = (ForAnyElementType)0x0;
  this->UniformTextureParameters[4].ArrayNum = 0;
  this->UniformTextureParameters[4].ArrayMax = 0;
  this->UniformTextureParameters[5].AllocatorInstance = (ForAnyElementType)0x0;
  this->UniformTextureParameters[5].ArrayNum = 0;
  this->UniformTextureParameters[5].ArrayMax = 0;
  this->UniformTextureParameters[6].AllocatorInstance = (ForAnyElementType)0x0;
  this->UniformTextureParameters[6].ArrayNum = 0;
  this->UniformTextureParameters[6].ArrayMax = 0;
  (this->UniformExternalTextureParameters).AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformExternalTextureParameters).ArrayNum = 0;
  (this->UniformExternalTextureParameters).ArrayMax = 0;
  (this->UniformTextureCollectionParameters).AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformTextureCollectionParameters).ArrayNum = 0;
  (this->UniformTextureCollectionParameters).ArrayMax = 0;
  this->UniformPreshaderBufferSize = 0;
  (this->UniformPreshaderData).Names.AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformPreshaderData).Names.ArrayNum = 0;
  (this->UniformPreshaderData).Names.ArrayMax = 0;
  (this->UniformPreshaderData).StructTypes.AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformPreshaderData).StructTypes.ArrayNum = 0;
  (this->UniformPreshaderData).StructTypes.ArrayMax = 0;
  (this->UniformPreshaderData).StructComponentTypes.AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformPreshaderData).StructComponentTypes.ArrayNum = 0;
  (this->UniformPreshaderData).StructComponentTypes.ArrayMax = 0;
  (this->UniformPreshaderData).Data.AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformPreshaderData).Data.ArrayNum = 0;
  (this->UniformPreshaderData).Data.ArrayMax = 0;
  (this->DefaultValues).AllocatorInstance = (ForAnyElementType)0x0;
  (this->DefaultValues).ArrayNum = 0;
  (this->DefaultValues).ArrayMax = 0;
  (this->VTStacks).AllocatorInstance = (ForAnyElementType)0x0;
  (this->VTStacks).ArrayNum = 0;
  (this->VTStacks).ArrayMax = 0;
  (this->MaterialCacheTagStacks).AllocatorInstance = (ForAnyElementType)0x0;
  (this->MaterialCacheTagStacks).ArrayNum = 0;
  (this->MaterialCacheTagStacks).ArrayMax = 0;
  (this->ParameterCollections).AllocatorInstance = (ForAnyElementType)0x0;
  (this->ParameterCollections).ArrayNum = 0;
  (this->ParameterCollections).ArrayMax = 0;
  (this->UniformBufferLayoutInitializer).Name.Data.AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformBufferLayoutInitializer).Name.Data.ArrayNum = 0;
  (this->UniformBufferLayoutInitializer).Name.Data.ArrayMax = 0;
  (this->UniformBufferLayoutInitializer).Resources.AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformBufferLayoutInitializer).Resources.ArrayNum = 0;
  (this->UniformBufferLayoutInitializer).Resources.ArrayMax = 0;
  (this->UniformBufferLayoutInitializer).GraphResources.AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformBufferLayoutInitializer).GraphResources.ArrayNum = 0;
  (this->UniformBufferLayoutInitializer).GraphResources.ArrayMax = 0;
  (this->UniformBufferLayoutInitializer).GraphTextures.AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformBufferLayoutInitializer).GraphTextures.ArrayNum = 0;
  (this->UniformBufferLayoutInitializer).GraphTextures.ArrayMax = 0;
  (this->UniformBufferLayoutInitializer).GraphBuffers.AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformBufferLayoutInitializer).GraphBuffers.ArrayNum = 0;
  (this->UniformBufferLayoutInitializer).GraphBuffers.ArrayMax = 0;
  (this->UniformBufferLayoutInitializer).GraphUniformBuffers.AllocatorInstance =
       (ForAnyElementType)0x0;
  (this->UniformBufferLayoutInitializer).GraphUniformBuffers.ArrayNum = 0;
  (this->UniformBufferLayoutInitializer).GraphUniformBuffers.ArrayMax = 0;
  (this->UniformBufferLayoutInitializer).UniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformBufferLayoutInitializer).UniformBuffers.ArrayNum = 0;
  (this->UniformBufferLayoutInitializer).UniformBuffers.ArrayMax = 0;
  (this->UniformBufferLayoutInitializer).Hash = 0;
  (this->UniformBufferLayoutInitializer).ConstantBufferSize = 0;
  (this->UniformBufferLayoutInitializer).Flags = None;
  (this->UniformBufferLayoutInitializer).RenderTargetsOffset = 0xffff;
  (this->UniformBufferLayoutInitializer).StaticSlot = 0xff;
  (this->UniformBufferLayoutInitializer).BindingFlags = Shader;
  return this;
}

// ~FUniformExpressionSet @ 147f69e70

void __thiscall FUniformExpressionSet::~FUniformExpressionSet(FUniformExpressionSet *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->UniformBufferLayoutInitializer).UniformBuffers);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &(this->UniformBufferLayoutInitializer).GraphUniformBuffers);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->UniformBufferLayoutInitializer).GraphBuffers);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->UniformBufferLayoutInitializer).GraphTextures);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->UniformBufferLayoutInitializer).GraphResources);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->UniformBufferLayoutInitializer).Resources);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->UniformBufferLayoutInitializer);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->ParameterCollections);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->MaterialCacheTagStacks);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->VTStacks);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->DefaultValues);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->UniformPreshaderData).Data);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->UniformPreshaderData).StructComponentTypes);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->UniformPreshaderData).StructTypes);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->UniformPreshaderData);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->UniformTextureCollectionParameters);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->UniformExternalTextureParameters);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)(this->UniformTextureParameters + 6));
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)(this->UniformTextureParameters + 5));
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)(this->UniformTextureParameters + 4));
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)(this->UniformTextureParameters + 3));
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)(this->UniformTextureParameters + 2));
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)(this->UniformTextureParameters + 1));
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)this->UniformTextureParameters);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->UniformNumericParameters);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->UniformPreshaderFields);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->UniformPreshaders);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this);
  return;
}

// CountTextureCollections @ 147f72c70

void __thiscall
FUniformExpressionSet::CountTextureCollections
          (FUniformExpressionSet *this,uint *param_1,uint *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  undefined1 local_res8 [8];
  
  *param_2 = 0;
  FVar2 = (this->UniformTextureCollectionParameters).AllocatorInstance;
  iVar1 = (this->UniformTextureCollectionParameters).ArrayNum;
  if (((ulonglong)FVar2 & 1) != 0) {
    FVar2 = (ForAnyElementType)
            ((longlong)
             &(((TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_> *)
               (this->UniformTextureParameters + 8))->AllocatorInstance).field_0x0 +
            ((longlong)FVar2 >> 0x18));
  }
  FVar3 = (ForAnyElementType)((longlong)iVar1 * 0x1c + (longlong)FVar2);
  while( true ) {
    if ((this->UniformTextureCollectionParameters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMaterialTextureCollectionParameterInfo_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar2 == FVar3) break;
    *param_2 = (uint)*(byte *)((longlong)FVar2 + 0x18) + *param_2;
    FVar2 = (ForAnyElementType)((longlong)FVar2 + 0x1c);
  }
  *param_1 = (this->UniformTextureCollectionParameters).ArrayNum - *param_2;
  return;
}

// GetTypeLayout @ 147f7cd90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FUniformExpressionSet::GetTypeLayout(FUniformExpressionSet *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xd8;
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FUniformExpress;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FUniformExpressionSet,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "UniformParameterEvaluations";
    DAT_1552162f2 = Freeze::FindFieldNameLength(L"UniformParameterEvaluations");
    if ((DAT_15521707f & 2) == 0) {
      DAT_15521707f = DAT_15521707f | 3;
      _DAT_155217070 = 0x10;
      _DAT_155217020 = L"(TArray<T, AllocatorType>)";
      _DAT_155217038 =
           TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>
           ::CallWriteMemoryImage;
      _DAT_155217040 =
           TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>
           ::CallUnfrozenCopy;
      _DAT_155217048 =
           TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>
           ::CallAppendHash;
      _DAT_155217050 =
           TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>
           ::CallGetTargetAlignment;
      _DAT_155217058 =
           TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>
           ::CallToString;
      _DAT_155217030 =
           TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>
           ::CallDestroy;
      _DAT_155217078 = 8;
      DAT_15521707c = 0;
      _DAT_155217074 = 0x10;
    }
    _DAT_1552162d0 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    _DAT_1552162e0 = Freeze::DefaultWriteMemoryImageField;
    DAT_1552162d8 = ::TypeBuffer[0x10];
    DAT_1552162d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552162d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552162d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552162d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552162d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552162d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552162d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552162e8 = 0;
    _DAT_1552162ec = 1;
    _DAT_1552162f0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 147f7dfd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUniformExpressionSet::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  FUniformExpressionSet::InternalLinkType<6>::Initialize(param_1);
  `public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UniformTextureParameters";
  DAT_1552163b2 = Freeze::FindFieldNameLength(L"UniformTextureParameters");
  if ((DAT_155216edf & 2) == 0) {
    DAT_155216edf = DAT_155216edf | 3;
    _DAT_155216e80 = L"(TArray<T, AllocatorType>)";
    _DAT_155216e98 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_155216ea0 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_155216ea8 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_155216eb0 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_155216eb8 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_155216e90 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_155216ed0 = 0x10;
    _DAT_155216ed8 = 8;
    DAT_155216edc = 0;
    _DAT_155216ed4 = 0x10;
  }
  _DAT_1552163a8 = 0x40;
  _DAT_155216390 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_1552163ac = 7;
  _DAT_1552163a0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552163b0 = 0;
  _DAT_155216398 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UniformNumericParameters";
  DAT_155216382 = Freeze::FindFieldNameLength(L"UniformNumericParameters");
  if ((DAT_155216f47 & 2) == 0) {
    DAT_155216f47 = DAT_155216f47 | 3;
    _DAT_155216ee8 = L"(TArray<T, AllocatorType>)";
    _DAT_155216f00 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_155216f08 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_155216f10 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_155216f18 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_155216f20 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_155216ef8 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_155216f38 = 0x10;
    _DAT_155216f40 = 8;
    DAT_155216f44 = 0;
    _DAT_155216f3c = 0x10;
  }
  _DAT_155216370 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216360 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_155216378 = 0x30;
  _DAT_15521637c = 1;
  _DAT_155216380 = 0;
  _DAT_155216368 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UniformPreshaderFields";
  DAT_155216352 = Freeze::FindFieldNameLength(L"UniformPreshaderFields");
  if ((DAT_155216faf & 2) == 0) {
    DAT_155216faf = DAT_155216faf | 3;
    _DAT_155216f50 = L"(TArray<T, AllocatorType>)";
    _DAT_155216f68 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_155216f70 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_155216f78 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_155216f80 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_155216f88 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_155216f60 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_155216fa0 = 0x10;
    _DAT_155216fa8 = 8;
    DAT_155216fac = 0;
    _DAT_155216fa4 = 0x10;
  }
  _DAT_155216340 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216330 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_155216348 = 0x20;
  _DAT_15521634c = 1;
  _DAT_155216350 = 0;
  _DAT_155216338 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UniformPreshaders";
  DAT_155216322 = Freeze::FindFieldNameLength(L"UniformPreshaders");
  if ((DAT_155217017 & 2) == 0) {
    DAT_155217017 = DAT_155217017 | 3;
    _DAT_155216fb8 = L"(TArray<T, AllocatorType>)";
    _DAT_155216fd0 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_155216fd8 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_155216fe0 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_155216fe8 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_155216ff0 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_155216fc8 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_155217008 = 0x10;
    _DAT_155217010 = 8;
    DAT_155217014 = 0;
    _DAT_15521700c = 0x10;
  }
  _DAT_155216310 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216300 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_155216318 = 0x10;
  _DAT_15521631c = 1;
  _DAT_155216320 = 0;
  _DAT_155216308 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 147f7e3f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUniformExpressionSet::InternalLinkType<6>::Initialize(FTypeLayoutDesc *param_1)

{
  FUniformExpressionSet::InternalLinkType<11>::Initialize(param_1);
  `public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "DefaultValues";
  DAT_1552164a2 = Freeze::FindFieldNameLength(L"DefaultValues");
  if ((DAT_15519a2af & 2) == 0) {
    DAT_15519a2af = DAT_15519a2af | 3;
    _DAT_15519a250 = L"(TArray<T, AllocatorType>)";
    _DAT_15519a268 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_15519a270 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_15519a278 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_15519a280 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_15519a288 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<0>_>_>::CallToString;
    _DAT_15519a260 =
         TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<0>_>_>::CallDestroy;
    _DAT_15519a2a0 = 0x10;
    _DAT_15519a2a8 = 8;
    DAT_15519a2ac = 0;
    _DAT_15519a2a4 = 0x10;
  }
  _DAT_155216498 = 0x118;
  _DAT_155216480 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<unsigned_char,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15521649c = 1;
  _DAT_155216490 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552164a0 = 0;
  _DAT_155216488 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UniformPreshaderData";
  DAT_155216472 = Freeze::FindFieldNameLength(L"UniformPreshaderData");
  _DAT_155216450 = UE::Shader::FPreshaderData::StaticGetTypeLayout();
  _DAT_155216460 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216468 = 0xd8;
  _DAT_15521646c = 1;
  _DAT_155216470 = 0;
  _DAT_155216458 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UniformPreshaderBufferSize";
  DAT_155216442 = Freeze::FindFieldNameLength(L"UniformPreshaderBufferSize");
  _DAT_155216420 = StaticGetTypeLayoutDesc<unsigned_int>();
  _DAT_155216430 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216438 = 0xd0;
  _DAT_15521643c = 1;
  _DAT_155216440 = 0;
  _DAT_155216428 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UniformTextureCollectionParameters";
  DAT_155216412 = Freeze::FindFieldNameLength(L"UniformTextureCollectionParameters");
  if ((DAT_155216e0f & 2) == 0) {
    DAT_155216e0f = DAT_155216e0f | 3;
    _DAT_155216db0 = L"(TArray<T, AllocatorType>)";
    _DAT_155216dc8 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_155216dd0 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_155216dd8 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_155216de0 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_155216de8 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_155216dc0 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_155216e00 = 0x10;
    _DAT_155216e08 = 8;
    DAT_155216e0c = 0;
    _DAT_155216e04 = 0x10;
  }
  _DAT_155216400 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552163f0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_155216408 = 0xc0;
  _DAT_15521640c = 1;
  _DAT_155216410 = 0;
  _DAT_1552163f8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UniformExternalTextureParameters";
  DAT_1552163e2 = Freeze::FindFieldNameLength(L"UniformExternalTextureParameters");
  if ((DAT_155216e77 & 2) == 0) {
    DAT_155216e77 = DAT_155216e77 | 3;
    _DAT_155216e18 = L"(TArray<T, AllocatorType>)";
    _DAT_155216e30 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_155216e38 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_155216e40 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_155216e48 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_155216e50 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_155216e28 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_155216e68 = 0x10;
    _DAT_155216e70 = 8;
    DAT_155216e74 = 0;
    _DAT_155216e6c = 0x10;
  }
  _DAT_1552163d0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552163c0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_1552163d8 = 0xb0;
  _DAT_1552163dc = 1;
  _DAT_1552163e0 = 0;
  _DAT_1552163c8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 147f7ee30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUniformExpressionSet::InternalLinkType<11>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<14>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UniformBufferLayoutInitializer";
  DAT_155216562 = Freeze::FindFieldNameLength(L"UniformBufferLayoutInitializer");
  _DAT_155216540 = FRHIUniformBufferLayoutInitializer::StaticGetTypeLayout();
  _DAT_155216558 = 0x158;
  _DAT_155216550 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15521655c = 1;
  _DAT_155216560 = 0;
  _DAT_155216548 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<14>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ParameterCollections";
  DAT_155216532 = Freeze::FindFieldNameLength(L"ParameterCollections");
  if ((DAT_155216cd7 & 2) == 0) {
    DAT_155216cd7 = DAT_155216cd7 | 3;
    _DAT_155216c78 = L"(TArray<T, AllocatorType>)";
    _DAT_155216c90 =
         TStaticGetTypeLayoutHelper<TArray<FGuid,TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage;
    _DAT_155216c98 =
         TStaticGetTypeLayoutHelper<TArray<FGuid,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy;
    _DAT_155216ca0 =
         TStaticGetTypeLayoutHelper<TArray<FGuid,TMemoryImageAllocator<0>_>_>::CallAppendHash;
    _DAT_155216ca8 =
         TStaticGetTypeLayoutHelper<TArray<FGuid,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_155216cb0 =
         TStaticGetTypeLayoutHelper<TArray<FGuid,TMemoryImageAllocator<0>_>_>::CallToString;
    _DAT_155216c88 =
         TStaticGetTypeLayoutHelper<TArray<FGuid,TMemoryImageAllocator<0>_>_>::CallDestroy;
    _DAT_155216cc8 = 0x10;
    _DAT_155216cd0 = 8;
    DAT_155216cd4 = 0;
    _DAT_155216ccc = 0x10;
  }
  _DAT_155216520 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216510 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FGuid,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_155216528 = 0x148;
  _DAT_15521652c = 1;
  _DAT_155216530 = 0;
  _DAT_155216518 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "MaterialCacheTagStacks";
  DAT_155216502 = Freeze::FindFieldNameLength(L"MaterialCacheTagStacks");
  if ((DAT_155216d3f & 2) == 0) {
    DAT_155216d3f = DAT_155216d3f | 3;
    _DAT_155216ce0 = L"(TArray<T, AllocatorType>)";
    _DAT_155216cf8 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_155216d00 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_155216d08 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_155216d10 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_155216d18 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>_>::
         CallToString;
    _DAT_155216cf0 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>_>::
         CallDestroy;
    _DAT_155216d30 = 0x10;
    _DAT_155216d38 = 8;
    DAT_155216d3c = 0;
    _DAT_155216d34 = 0x10;
  }
  _DAT_1552164f0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552164e0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_1552164f8 = 0x138;
  _DAT_1552164fc = 1;
  _DAT_155216500 = 0;
  _DAT_1552164e8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "VTStacks";
  DAT_1552164d2 = Freeze::FindFieldNameLength(L"VTStacks");
  if ((DAT_155216da7 & 2) == 0) {
    DAT_155216da7 = DAT_155216da7 | 3;
    _DAT_155216d48 = L"(TArray<T, AllocatorType>)";
    _DAT_155216d60 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_155216d68 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_155216d70 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_155216d78 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_155216d80 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_155216d58 =
         TStaticGetTypeLayoutHelper<TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_155216d98 = 0x10;
    _DAT_155216da0 = 8;
    DAT_155216da4 = 0;
    _DAT_155216d9c = 0x10;
  }
  _DAT_1552164b0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_1552164c0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552164c8 = 0x128;
  _DAT_1552164cc = 1;
  _DAT_1552164d0 = 0;
  _DAT_1552164b8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 147f7f8d0

void __cdecl
FUniformExpressionSet::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    ~FUniformExpressionSet(param_1);
  }
  memset(param_1,0xfe,0x1d8);
  return;
}

// StaticGetTypeLayout @ 147f8b990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FUniformExpressionSet::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xd8;
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FUniformExpress;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FUniformExpressionSet,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "UniformParameterEvaluations";
    DAT_1552162f2 = Freeze::FindFieldNameLength(L"UniformParameterEvaluations");
    if ((DAT_15521707f & 2) == 0) {
      DAT_15521707f = DAT_15521707f | 3;
      _DAT_155217070 = 0x10;
      _DAT_155217020 = L"(TArray<T, AllocatorType>)";
      _DAT_155217038 =
           TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>
           ::CallWriteMemoryImage;
      _DAT_155217040 =
           TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>
           ::CallUnfrozenCopy;
      _DAT_155217048 =
           TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>
           ::CallAppendHash;
      _DAT_155217050 =
           TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>
           ::CallGetTargetAlignment;
      _DAT_155217058 =
           TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>
           ::CallToString;
      _DAT_155217030 =
           TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>
           ::CallDestroy;
      _DAT_155217078 = 8;
      DAT_15521707c = 0;
      _DAT_155217074 = 0x10;
    }
    _DAT_1552162d0 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    _DAT_1552162e0 = Freeze::DefaultWriteMemoryImageField;
    DAT_1552162d8 = ::TypeBuffer[0x10];
    DAT_1552162d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552162d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552162d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552162d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552162d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552162d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552162d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FUniformExpressionSet::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552162e8 = 0;
    _DAT_1552162ec = 1;
    _DAT_1552162f0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// operator== @ 147fac3b0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FUniformExpressionSet::operator==(FUniformExpressionSet *this,FUniformExpressionSet *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  TArray<unsigned_char,TMemoryImageAllocator<0>_> *pTVar15;
  longlong lVar16;
  TArray<unsigned_char,TMemoryImageAllocator<0>_> *pTVar17;
  int *piVar18;
  uint uVar19;
  TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_> *pTVar20;
  TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_> *pTVar21;
  uint local_res18;
  int local_48;
  
  piVar18 = &this->UniformTextureParameters[0].ArrayNum;
  uVar19 = 0;
  do {
    if (*piVar18 != *(int *)((longlong)piVar18 + ((longlong)param_1 - (longlong)this))) {
      return false;
    }
    uVar19 = uVar19 + 1;
    piVar18 = piVar18 + 4;
  } while (uVar19 < 7);
  iVar9 = (this->UniformNumericParameters).ArrayNum;
  if (((((iVar9 == (param_1->UniformNumericParameters).ArrayNum) &&
        ((this->UniformPreshaders).ArrayNum == (param_1->UniformPreshaders).ArrayNum)) &&
       ((this->UniformExternalTextureParameters).ArrayNum ==
        (param_1->UniformExternalTextureParameters).ArrayNum)) &&
      (((this->UniformTextureCollectionParameters).ArrayNum ==
        (param_1->UniformTextureCollectionParameters).ArrayNum &&
       ((this->VTStacks).ArrayNum == (param_1->VTStacks).ArrayNum)))) &&
     (((this->MaterialCacheTagStacks).ArrayNum == (param_1->MaterialCacheTagStacks).ArrayNum &&
      ((this->ParameterCollections).ArrayNum == (param_1->ParameterCollections).ArrayNum)))) {
    uVar19 = 0;
    if (0 < iVar9) {
      lVar16 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar19 < (param_1->UniformNumericParameters).ArrayNum) {
          uVar8 = ~uVar19 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (param_1->UniformNumericParameters).AllocatorInstance;
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForAnyElementType)
                   ((longlong)
                    &(((TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_> *)
                      (param_1->UniformTextureParameters + -1))->AllocatorInstance).field_0x0 +
                   ((longlong)FVar11 >> 0x18));
        }
        puVar1 = (undefined8 *)((longlong)FVar11 + lVar16);
        uVar8 = 0;
        if ((int)uVar19 < (this->UniformNumericParameters).ArrayNum) {
          uVar8 = ~uVar19 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (this->UniformNumericParameters).AllocatorInstance;
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForAnyElementType)
                   ((longlong)
                    &(((TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_> *)
                      (this->UniformTextureParameters + -1))->AllocatorInstance).field_0x0 +
                   ((longlong)FVar11 >> 0x18));
        }
        local_48 = (int)*puVar1;
        if (*(int *)((longlong)FVar11 + lVar16) != local_48) {
          return false;
        }
        if (*(int *)((longlong)FVar11 + 8U + lVar16) != *(int *)(puVar1 + 1)) {
          return false;
        }
        if (*(char *)((longlong)FVar11 + 0x10U + lVar16) != *(char *)(puVar1 + 2)) {
          return false;
        }
        if (*(int *)((longlong)FVar11 + 0xcU + lVar16) != *(int *)((longlong)puVar1 + 0xc)) {
          return false;
        }
        if (*(char *)((longlong)FVar11 + 0x14U + lVar16) != *(char *)((longlong)puVar1 + 0x14)) {
          return false;
        }
        if (*(int *)((longlong)FVar11 + 0x18U + lVar16) != *(int *)(puVar1 + 3)) {
          return false;
        }
        uVar19 = uVar19 + 1;
        lVar16 = lVar16 + 0x1c;
      } while ((int)uVar19 < (this->UniformNumericParameters).ArrayNum);
    }
    uVar19 = 0;
    if (0 < (this->UniformPreshaders).ArrayNum) {
      lVar16 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar19 < (param_1->UniformPreshaders).ArrayNum) {
          uVar8 = ~uVar19 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (param_1->UniformPreshaders).AllocatorInstance;
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForAnyElementType)
                   ((longlong)
                    &(((TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_> *)
                      (param_1->UniformTextureParameters + -3))->AllocatorInstance).field_0x0 +
                   ((longlong)FVar11 >> 0x18));
        }
        piVar18 = (int *)(lVar16 + (longlong)FVar11);
        uVar8 = 0;
        if ((int)uVar19 < (this->UniformPreshaders).ArrayNum) {
          uVar8 = ~uVar19 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (this->UniformPreshaders).AllocatorInstance;
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForAnyElementType)
                   ((longlong)
                    &(((TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_> *)
                      (this->UniformTextureParameters + -3))->AllocatorInstance).field_0x0 +
                   ((longlong)FVar11 >> 0x18));
        }
        piVar2 = (int *)(lVar16 + (longlong)FVar11);
        if (*piVar2 != *piVar18) {
          return false;
        }
        if (piVar2[1] != piVar18[1]) {
          return false;
        }
        if (piVar2[2] != piVar18[2]) {
          return false;
        }
        if (piVar2[3] != piVar18[3]) {
          return false;
        }
        uVar19 = uVar19 + 1;
        lVar16 = lVar16 + 0x10;
      } while ((int)uVar19 < (this->UniformPreshaders).ArrayNum);
    }
    uVar10 = 0;
    local_res18 = 0;
    do {
      uVar19 = 0;
      if (0 < this->UniformTextureParameters[uVar10].ArrayNum) {
        pTVar21 = param_1->UniformTextureParameters + uVar10;
        pTVar20 = this->UniformTextureParameters + uVar10;
        lVar16 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar19 < pTVar21->ArrayNum) {
            uVar8 = ~uVar19 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          FVar11 = pTVar21->AllocatorInstance;
          if (((ulonglong)FVar11 & 1) != 0) {
            FVar11 = (ForAnyElementType)
                     ((longlong)&(pTVar21->AllocatorInstance).field_0x0 + ((longlong)FVar11 >> 0x18)
                     );
          }
          puVar1 = (undefined8 *)(lVar16 + (longlong)FVar11);
          uVar8 = 0;
          if ((int)uVar19 < pTVar20->ArrayNum) {
            uVar8 = ~uVar19 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          FVar11 = pTVar20->AllocatorInstance;
          if (((ulonglong)FVar11 & 1) != 0) {
            FVar11 = (ForAnyElementType)
                     ((longlong)&(pTVar20->AllocatorInstance).field_0x0 + ((longlong)FVar11 >> 0x18)
                     );
          }
          local_48 = (int)*puVar1;
          if (*(int *)(lVar16 + (longlong)FVar11) != local_48) {
            return false;
          }
          if (*(int *)(lVar16 + 8 + (longlong)FVar11) != *(int *)(puVar1 + 1)) {
            return false;
          }
          if (*(char *)(lVar16 + 0x10 + (longlong)FVar11) != *(char *)(puVar1 + 2)) {
            return false;
          }
          if (*(int *)(lVar16 + 0xc + (longlong)FVar11) != *(int *)((longlong)puVar1 + 0xc)) {
            return false;
          }
          if (*(int *)(lVar16 + 0x14 + (longlong)FVar11) != *(int *)((longlong)puVar1 + 0x14)) {
            return false;
          }
          if (*(char *)(lVar16 + 0x18 + (longlong)FVar11) != *(char *)(puVar1 + 3)) {
            return false;
          }
          if (*(char *)(lVar16 + 0x19 + (longlong)FVar11) != *(char *)((longlong)puVar1 + 0x19)) {
            return false;
          }
          uVar19 = uVar19 + 1;
          lVar16 = lVar16 + 0x1c;
        } while ((int)uVar19 < this->UniformTextureParameters[uVar10].ArrayNum);
      }
      local_res18 = local_res18 + 1;
      uVar10 = (ulonglong)local_res18;
    } while (local_res18 < 7);
    uVar19 = 0;
    if (0 < (this->UniformExternalTextureParameters).ArrayNum) {
      lVar16 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar19 < (param_1->UniformExternalTextureParameters).ArrayNum) {
          uVar8 = ~uVar19 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (param_1->UniformExternalTextureParameters).AllocatorInstance;
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForAnyElementType)
                   ((longlong)
                    &(((TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_> *)
                      (param_1->UniformTextureParameters + 7))->AllocatorInstance).field_0x0 +
                   ((longlong)FVar11 >> 0x18));
        }
        puVar1 = (undefined8 *)((longlong)FVar11 + lVar16);
        uVar8 = 0;
        if ((int)uVar19 < (this->UniformExternalTextureParameters).ArrayNum) {
          uVar8 = ~uVar19 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (this->UniformExternalTextureParameters).AllocatorInstance;
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForAnyElementType)
                   ((longlong)
                    &(((TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_> *)
                      (this->UniformTextureParameters + 7))->AllocatorInstance).field_0x0 +
                   ((longlong)FVar11 >> 0x18));
        }
        piVar18 = (int *)((longlong)FVar11 + lVar16);
        if (piVar18[7] != *(int *)((longlong)puVar1 + 0x1c)) {
          return false;
        }
        if (((*(int *)(puVar1 + 3) != piVar18[6] || *(int *)((longlong)puVar1 + 0x14) != piVar18[5])
            || *(int *)(puVar1 + 2) != piVar18[4]) || *(int *)((longlong)puVar1 + 0xc) != piVar18[3]
           ) {
          return false;
        }
        local_48 = (int)*puVar1;
        if (*piVar18 != local_48) {
          return false;
        }
        if (piVar18[2] != *(int *)(puVar1 + 1)) {
          return false;
        }
        uVar19 = uVar19 + 1;
        lVar16 = lVar16 + 0x20;
      } while ((int)uVar19 < (this->UniformExternalTextureParameters).ArrayNum);
    }
    uVar19 = 0;
    if (0 < (this->UniformTextureCollectionParameters).ArrayNum) {
      lVar16 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar19 < (param_1->UniformTextureCollectionParameters).ArrayNum) {
          uVar8 = ~uVar19 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (param_1->UniformTextureCollectionParameters).AllocatorInstance;
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForAnyElementType)
                   ((longlong)
                    &(((TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_> *)
                      (param_1->UniformTextureParameters + 8))->AllocatorInstance).field_0x0 +
                   ((longlong)FVar11 >> 0x18));
        }
        puVar1 = (undefined8 *)((longlong)FVar11 + lVar16);
        uVar8 = 0;
        if ((int)uVar19 < (this->UniformTextureCollectionParameters).ArrayNum) {
          uVar8 = ~uVar19 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (this->UniformTextureCollectionParameters).AllocatorInstance;
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForAnyElementType)
                   ((longlong)
                    &(((TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_> *)
                      (this->UniformTextureParameters + 8))->AllocatorInstance).field_0x0 +
                   ((longlong)FVar11 >> 0x18));
        }
        local_48 = (int)*puVar1;
        if (*(int *)((longlong)FVar11 + lVar16) != local_48) {
          return false;
        }
        if (*(int *)((longlong)FVar11 + 8U + lVar16) != *(int *)(puVar1 + 1)) {
          return false;
        }
        if (*(char *)((longlong)FVar11 + 0x10U + lVar16) != *(char *)(puVar1 + 2)) {
          return false;
        }
        if (*(int *)((longlong)FVar11 + 0xcU + lVar16) != *(int *)((longlong)puVar1 + 0xc)) {
          return false;
        }
        if (*(int *)((longlong)FVar11 + 0x14U + lVar16) != *(int *)((longlong)puVar1 + 0x14)) {
          return false;
        }
        if (*(char *)((longlong)FVar11 + 0x18U + lVar16) != *(char *)(puVar1 + 3)) {
          return false;
        }
        uVar19 = uVar19 + 1;
        lVar16 = lVar16 + 0x1c;
      } while ((int)uVar19 < (this->UniformTextureCollectionParameters).ArrayNum);
    }
    uVar19 = 0;
    if (0 < (this->VTStacks).ArrayNum) {
      lVar16 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar19 < (param_1->VTStacks).ArrayNum) {
          uVar8 = ~uVar19 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (param_1->VTStacks).AllocatorInstance;
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForAnyElementType)
                   ((longlong)(param_1->UniformTextureParameters + 0xe) +
                   ((longlong)FVar11 >> 0x18) + 8);
        }
        puVar3 = (uint *)((longlong)FVar11 + lVar16);
        uVar8 = 0;
        if ((int)uVar19 < (this->VTStacks).ArrayNum) {
          uVar8 = ~uVar19 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (this->VTStacks).AllocatorInstance;
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForAnyElementType)
                   ((longlong)(this->UniformTextureParameters + 0xe) +
                   ((longlong)FVar11 >> 0x18) + 8);
        }
        puVar4 = (uint *)((longlong)FVar11 + lVar16);
        if (puVar4[9] != puVar3[9]) {
          return false;
        }
        uVar8 = *puVar4;
        if (uVar8 != *puVar3) {
          return false;
        }
        uVar14 = 0;
        if (uVar8 != 0) {
          lVar12 = 0;
          do {
            if (*(int *)((longlong)puVar4 + lVar12 + 4) != *(int *)((longlong)puVar3 + lVar12 + 4))
            {
              return false;
            }
            uVar14 = uVar14 + 1;
            lVar12 = lVar12 + 4;
          } while (uVar14 < uVar8);
        }
        uVar19 = uVar19 + 1;
        lVar16 = lVar16 + 0x28;
      } while ((int)uVar19 < (this->VTStacks).ArrayNum);
    }
    uVar19 = 0;
    if (0 < (this->MaterialCacheTagStacks).ArrayNum) {
      lVar16 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar19 < (param_1->MaterialCacheTagStacks).ArrayNum) {
          uVar8 = ~uVar19 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (param_1->MaterialCacheTagStacks).AllocatorInstance;
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForAnyElementType)
                   ((longlong)&(param_1->MaterialCacheTagStacks).AllocatorInstance.field_0x0 +
                   ((longlong)FVar11 >> 0x18));
        }
        piVar18 = (int *)((longlong)FVar11 + lVar16);
        uVar8 = 0;
        if ((int)uVar19 < (this->MaterialCacheTagStacks).ArrayNum) {
          uVar8 = ~uVar19 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (this->MaterialCacheTagStacks).AllocatorInstance;
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForAnyElementType)
                   ((longlong)&(this->MaterialCacheTagStacks).AllocatorInstance.field_0x0 +
                   ((longlong)FVar11 >> 0x18));
        }
        if (((piVar18[3] == *(int *)((longlong)FVar11 + 0xcU + lVar16) &&
             piVar18[2] == *(int *)((longlong)FVar11 + 8U + lVar16)) &&
            piVar18[1] == *(int *)((longlong)FVar11 + 4U + lVar16)) &&
            *(int *)((longlong)FVar11 + lVar16) == *piVar18) {
          return false;
        }
        uVar19 = uVar19 + 1;
        lVar16 = lVar16 + 0x10;
      } while ((int)uVar19 < (this->MaterialCacheTagStacks).ArrayNum);
    }
    uVar19 = 0;
    if (0 < (this->ParameterCollections).ArrayNum) {
      lVar16 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar19 < (param_1->ParameterCollections).ArrayNum) {
          uVar8 = ~uVar19 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (param_1->ParameterCollections).AllocatorInstance;
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForAnyElementType)
                   ((longlong)&(param_1->ParameterCollections).AllocatorInstance.field_0x0 +
                   ((longlong)FVar11 >> 0x18));
        }
        piVar18 = (int *)((longlong)FVar11 + lVar16);
        uVar8 = 0;
        if ((int)uVar19 < (this->ParameterCollections).ArrayNum) {
          uVar8 = ~uVar19 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (this->ParameterCollections).AllocatorInstance;
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForAnyElementType)
                   ((longlong)&(this->ParameterCollections).AllocatorInstance.field_0x0 +
                   ((longlong)FVar11 >> 0x18));
        }
        if (((piVar18[3] != *(int *)(lVar16 + 0xc + (longlong)FVar11) ||
             piVar18[2] != *(int *)(lVar16 + 8 + (longlong)FVar11)) ||
            piVar18[1] != *(int *)(lVar16 + 4 + (longlong)FVar11)) ||
            *piVar18 != *(int *)(lVar16 + (longlong)FVar11)) {
          return false;
        }
        uVar19 = uVar19 + 1;
        lVar16 = lVar16 + 0x10;
      } while ((int)uVar19 < (this->ParameterCollections).ArrayNum);
    }
    iVar9 = (this->UniformPreshaderData).Names.ArrayNum;
    if (iVar9 == (param_1->UniformPreshaderData).Names.ArrayNum) {
      FVar11 = (param_1->UniformPreshaderData).Names.AllocatorInstance;
      if (((ulonglong)FVar11 & 1) != 0) {
        FVar11 = (ForAnyElementType)
                 ((longlong)&(param_1->UniformPreshaderData).Names.AllocatorInstance.field_0x0 +
                 ((longlong)FVar11 >> 0x18));
      }
      FVar13 = (this->UniformPreshaderData).Names.AllocatorInstance;
      if (((ulonglong)FVar13 & 1) != 0) {
        FVar13 = (ForAnyElementType)
                 ((longlong)&(this->UniformPreshaderData).Names.AllocatorInstance.field_0x0 +
                 ((longlong)FVar13 >> 0x18));
      }
      bVar6 = CompareItems<FScriptName,int>((FScriptName *)FVar13,(FScriptName *)FVar11,iVar9);
      if (bVar6) {
        iVar9 = (this->UniformPreshaderData).Data.ArrayNum;
        pTVar17 = &(this->UniformPreshaderData).Data;
        pTVar15 = &(param_1->UniformPreshaderData).Data;
        if (iVar9 == (param_1->UniformPreshaderData).Data.ArrayNum) {
          FVar11 = pTVar15->AllocatorInstance;
          if (((ulonglong)FVar11 & 1) != 0) {
            FVar11 = (ForAnyElementType)
                     ((longlong)&(pTVar15->AllocatorInstance).field_0x0 + ((longlong)FVar11 >> 0x18)
                     );
          }
          FVar13 = pTVar17->AllocatorInstance;
          if (((ulonglong)FVar13 & 1) != 0) {
            FVar13 = (ForAnyElementType)
                     ((longlong)&(pTVar17->AllocatorInstance).field_0x0 + ((longlong)FVar13 >> 0x18)
                     );
          }
          if ((iVar9 == 0) ||
             (iVar9 = memcmp((void *)FVar13,(void *)FVar11,(longlong)iVar9), iVar9 == 0)) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// AddDefaultParameterValue @ 147fb0220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall
FUniformExpressionSet::AddDefaultParameterValue(FUniformExpressionSet *this,FValue *param_1)

{
  int *piVar1;
  TArray<unsigned_char,TMemoryImageAllocator<0>_> *pTVar2;
  uint uVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_e8 [32];
  FMemoryImageValue local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  piVar1 = &(this->DefaultValues).ArrayNum;
  uVar3 = *piVar1;
  pTVar2 = &this->DefaultValues;
  UE::Shader::FValue::AsMemoryImage(param_1,&local_b8);
  iVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (1,1,local_b8.Size,&pTVar2->AllocatorInstance,piVar1,
                     &(this->DefaultValues).ArrayMax);
  FVar5 = pTVar2->AllocatorInstance;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar5 >> 0x18));
  }
  if (local_b8.Size != 0) {
    memcpy((void *)((longlong)iVar4 + (longlong)FVar5),&local_b8,(longlong)(int)local_b8.Size);
  }
  return uVar3;
}

// AddNumericParameterEvaluation @ 147fb03b0

void __thiscall
FUniformExpressionSet::AddNumericParameterEvaluation
          (FUniformExpressionSet *this,uint param_1,uint param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType FVar5;
  ForAnyElementType FVar6;
  undefined4 local_18 [4];
  
  if ((0xffff < param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParameterIndex <= 0xffffui16",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x322,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((0xffff < param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferOffset <= 0xffffui16",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x323,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar5 = (this->UniformParameterEvaluations).AllocatorInstance;
  local_18[0] = CONCAT22((short)param_2,(short)param_1);
  FVar6 = (ForAnyElementType)
          ((longlong)
           &(((FUniformExpressionSet *)(this->UniformTextureParameters + -4))->
            UniformParameterEvaluations).AllocatorInstance.field_0x0 + ((longlong)FVar5 >> 0x18));
  if (((ulonglong)FVar5 & 1) == 0) {
    FVar6 = FVar5;
  }
  if ((ulonglong)FVar6 <= local_18) {
    if (((ulonglong)FVar5 & 1) != 0) {
      FVar5 = (ForAnyElementType)
              ((longlong)
               &(((FUniformExpressionSet *)(this->UniformTextureParameters + -4))->
                UniformParameterEvaluations).AllocatorInstance.field_0x0 + ((longlong)FVar5 >> 0x18)
              );
    }
    if ((local_18 <
         (undefined4 *)
         ((longlong)FVar5 + (longlong)(this->UniformParameterEvaluations).ArrayMax * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->UniformParameterEvaluations).ArrayNum;
  piVar1 = &(this->UniformParameterEvaluations).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x204,(ForAnyElementType *)this,piVar1);
  }
  (this->UniformParameterEvaluations).ArrayNum = iVar4 + 1;
  FVar5 = (this->UniformParameterEvaluations).AllocatorInstance;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)
             &(((FUniformExpressionSet *)(this->UniformTextureParameters + -4))->
              UniformParameterEvaluations).AllocatorInstance.field_0x0 + ((longlong)FVar5 >> 0x18));
  }
  *(undefined4 *)((longlong)FVar5 + (longlong)iVar4 * 4) = local_18[0];
  return;
}

// AddVTLayer @ 147fb2890

int __thiscall
FUniformExpressionSet::AddVTLayer(FUniformExpressionSet *this,int param_1,int param_2)

{
  TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  
  pTVar1 = &this->VTStacks;
  uVar4 = 0;
  if (param_1 < (this->VTStacks).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  FVar7 = pTVar1->AllocatorInstance;
  if (((ulonglong)FVar7 & 1) != 0) {
    FVar7 = (ForAnyElementType)
            ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar7 >> 0x18));
  }
  uVar6 = FMaterialVirtualTextureStack::AddLayer
                    ((FMaterialVirtualTextureStack *)((longlong)FVar7 + (longlong)param_1 * 0x28));
  uVar4 = 0;
  if (param_1 < (this->VTStacks).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  FVar7 = pTVar1->AllocatorInstance;
  if (((ulonglong)FVar7 & 1) != 0) {
    FVar7 = (ForAnyElementType)
            ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar7 >> 0x18));
  }
  FMaterialVirtualTextureStack::SetLayer
            ((FMaterialVirtualTextureStack *)((longlong)param_1 * 0x28 + (longlong)FVar7),uVar6,
             param_2);
  return uVar6;
}

// AddVTStack @ 147fb29c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall FUniformExpressionSet::AddVTStack(FUniformExpressionSet *this,int param_1)

{
  int *piVar1;
  TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_> *pTVar2;
  ForAnyElementType FVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  ForAnyElementType local_68;
  ForAnyElementType local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  FMaterialVirtualTextureStack local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar2 = &this->VTStacks;
  FVar9 = (ForAnyElementType)
          FMaterialVirtualTextureStack::FMaterialVirtualTextureStack(&local_38,param_1);
  FVar11 = pTVar2->AllocatorInstance;
  FVar10 = (ForAnyElementType)
           ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar11 >> 0x18));
  if (((ulonglong)FVar11 & 1) == 0) {
    FVar10 = FVar11;
  }
  FVar3 = (ForAnyElementType)
          ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar11 >> 0x18));
  if ((ulonglong)FVar10 <= (ulonglong)FVar9) {
    lVar12 = (longlong)(this->VTStacks).ArrayMax;
    FVar10 = FVar11;
    if (((ulonglong)FVar11 & 1) != 0) {
      FVar10 = FVar3;
    }
    if ((ulonglong)FVar9 < (ulonglong)((longlong)FVar10 + lVar12 * 0x28)) {
      local_50 = (longlong)(this->VTStacks).ArrayNum;
      local_48 = 0x28;
      local_60 = FVar11;
      if (((ulonglong)FVar11 & 1) != 0) {
        local_60 = FVar3;
      }
      local_68 = FVar9;
      local_58 = lVar12;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
    }
  }
  iVar8 = (this->VTStacks).ArrayNum;
  piVar1 = &(this->VTStacks).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x428,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->VTStacks).ArrayNum = iVar8 + 1;
  FVar11 = pTVar2->AllocatorInstance;
  if (((ulonglong)FVar11 & 1) != 0) {
    FVar11 = (ForAnyElementType)
             ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar11 >> 0x18));
  }
  uVar6 = *(undefined8 *)((longlong)FVar9 + 8);
  lVar12 = (longlong)iVar8;
  puVar4 = (undefined8 *)((longlong)FVar11 + lVar12 * 0x28);
  *puVar4 = *(undefined8 *)FVar9;
  puVar4[1] = uVar6;
  uVar6 = *(undefined8 *)((longlong)FVar9 + 0x18);
  puVar4 = (undefined8 *)((longlong)FVar11 + 0x10U + lVar12 * 0x28);
  *puVar4 = *(undefined8 *)((longlong)FVar9 + 0x10);
  puVar4[1] = uVar6;
  *(undefined8 *)((longlong)FVar11 + 0x20U + lVar12 * 0x28) =
       *(undefined8 *)((longlong)FVar9 + 0x20);
  return iVar8;
}

// AllocateFromUniformBuffer @ 147fb3450

uint __thiscall
FUniformExpressionSet::AllocateFromUniformBuffer(FUniformExpressionSet *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = this->UniformPreshaderBufferSize;
  this->UniformPreshaderBufferSize = param_1 + uVar1;
  return uVar1;
}

// CreateBufferStruct @ 147fbbdb0

/* WARNING: Removing unreachable block (ram,0x000147fbeb27) */
/* WARNING: Removing unreachable block (ram,0x000147fbeb4c) */
/* WARNING: Removing unreachable block (ram,0x000147fbe286) */
/* WARNING: Removing unreachable block (ram,0x000147fbe2ab) */
/* WARNING: Removing unreachable block (ram,0x000147fbe2ac) */
/* WARNING: Removing unreachable block (ram,0x000147fbdf35) */
/* WARNING: Removing unreachable block (ram,0x000147fbdf5a) */
/* WARNING: Removing unreachable block (ram,0x000147fbdd2d) */
/* WARNING: Removing unreachable block (ram,0x000147fbdd52) */
/* WARNING: Removing unreachable block (ram,0x000147fbd9d1) */
/* WARNING: Removing unreachable block (ram,0x000147fbd9f6) */
/* WARNING: Removing unreachable block (ram,0x000147fbd58c) */
/* WARNING: Removing unreachable block (ram,0x000147fbd5b1) */
/* WARNING: Removing unreachable block (ram,0x000147fbd18d) */
/* WARNING: Removing unreachable block (ram,0x000147fbd1aa) */
/* WARNING: Removing unreachable block (ram,0x000147fbd38e) */
/* WARNING: Removing unreachable block (ram,0x000147fbd3af) */
/* WARNING: Removing unreachable block (ram,0x000147fbd787) */
/* WARNING: Removing unreachable block (ram,0x000147fbd7ac) */
/* WARNING: Removing unreachable block (ram,0x000147fbdc30) */
/* WARNING: Removing unreachable block (ram,0x000147fbdc55) */
/* WARNING: Removing unreachable block (ram,0x000147fbde31) */
/* WARNING: Removing unreachable block (ram,0x000147fbde56) */
/* WARNING: Removing unreachable block (ram,0x000147fbe066) */
/* WARNING: Removing unreachable block (ram,0x000147fbe08b) */
/* WARNING: Removing unreachable block (ram,0x000147fbe811) */
/* WARNING: Removing unreachable block (ram,0x000147fbe836) */
/* WARNING: Removing unreachable block (ram,0x000147fbee29) */
/* WARNING: Removing unreachable block (ram,0x000147fbee4e) */

FShaderParametersMetadata * __thiscall
FUniformExpressionSet::CreateBufferStruct(FUniformExpressionSet *this)

{
  code *pcVar1;
  TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_> *pTVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  FShaderParametersMetadata *pFVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  FShaderParametersMetadata *pFVar9;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  EUseCase *pEVar19;
  FString *pFVar20;
  FShaderParametersMetadata *pFVar21;
  FShaderParametersMetadata *pFVar22;
  longlong lVar23;
  FShaderParametersMetadata *pFVar24;
  FShaderParametersMetadata *local_res10;
  uint local_res18 [2];
  uint local_res20 [2];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_d8;
  int local_d0 [2];
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_c8;
  undefined8 local_c0;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_b8;
  undefined8 local_b0;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_a8;
  undefined8 local_a0;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_98;
  undefined8 local_90;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_88;
  undefined8 local_80;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_> *local_58;
  
  pFVar9 = (FShaderParametersMetadata *)0x0;
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.ArrayNum = 0;
  local_2b8.ArrayMax = 0;
  local_res10 = (FShaderParametersMetadata *)0x0;
  pFVar6 = pFVar9;
  if ((this->UniformTextureCollectionParameters).ArrayNum != 0) {
    local_res20[0] = 0;
    local_res18[0] = 0;
    CountTextureCollections(this,local_res20,local_res18);
    pFVar6 = (FShaderParametersMetadata *)0x0;
    if (local_res18[0] != 0) {
      puVar5 = operator_new<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_>
                         (0x30,&local_2b8);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = L"TextureCollectionPackedUniforms";
        puVar5[1] = L"FIndirectVirtualTextureUniform";
        puVar5[2] = 0x199;
        *(undefined2 *)(puVar5 + 3) = 3;
        *(uint *)((longlong)puVar5 + 0x24) = local_res18[0] * 4;
        *(undefined4 *)((longlong)puVar5 + 0x1c) = 1;
        *(undefined4 *)(puVar5 + 4) = 4;
        puVar5[5] = 0;
      }
      uVar13 = (this->UniformTextureCollectionParameters).ArrayNum << 6;
      pFVar6 = (FShaderParametersMetadata *)(ulonglong)uVar13;
      local_res10 = (FShaderParametersMetadata *)(ulonglong)uVar13;
    }
  }
  if ((this->VTStacks).ArrayNum != 0) {
    puVar5 = operator_new<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_>
                       (0x30,&local_2b8);
    if (puVar5 != (undefined8 *)0x0) {
      iVar14 = (this->VTStacks).ArrayNum;
      *puVar5 = L"VTPackedPageTableUniform";
      *(int *)((longlong)puVar5 + 0x24) = iVar14 * 2;
      puVar5[1] = L"";
      *(undefined4 *)(puVar5 + 2) = 0x1a1;
      *(int *)((longlong)puVar5 + 0x14) = (int)pFVar6;
      *(undefined2 *)(puVar5 + 3) = 3;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = 1;
      *(undefined4 *)(puVar5 + 4) = 4;
      puVar5[5] = 0;
    }
    uVar13 = (int)pFVar6 + (this->VTStacks).ArrayNum * 0x20;
    pFVar6 = (FShaderParametersMetadata *)(ulonglong)uVar13;
    local_res10 = (FShaderParametersMetadata *)(ulonglong)uVar13;
  }
  if ((this->MaterialCacheTagStacks).ArrayNum != 0) {
    puVar5 = operator_new<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_>
                       (0x30,&local_2b8);
    if (puVar5 != (undefined8 *)0x0) {
      iVar14 = (this->MaterialCacheTagStacks).ArrayNum;
      *puVar5 = L"MaterialCacheTagPageTableUniform";
      puVar5[1] = L"";
      *(undefined4 *)(puVar5 + 2) = 0x1a7;
      *(int *)((longlong)puVar5 + 0x14) = (int)pFVar6;
      *(undefined2 *)(puVar5 + 3) = 3;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = 1;
      *(undefined4 *)(puVar5 + 4) = 4;
      *(int *)((longlong)puVar5 + 0x24) = iVar14;
      puVar5[5] = 0;
    }
    uVar13 = (int)pFVar6 + (this->MaterialCacheTagStacks).ArrayNum * 0x10;
    pFVar6 = (FShaderParametersMetadata *)(ulonglong)uVar13;
    local_res10 = (FShaderParametersMetadata *)(ulonglong)uVar13;
  }
  iVar14 = this->UniformTextureParameters[5].ArrayNum;
  if (0 < iVar14) {
    puVar5 = operator_new<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_>
                       (0x30,&local_2b8);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = L"";
      *puVar5 = L"VTPackedUniform";
      *(undefined4 *)(puVar5 + 2) = 0x1af;
      *(int *)((longlong)puVar5 + 0x14) = (int)pFVar6;
      *(undefined2 *)(puVar5 + 3) = 3;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = 1;
      *(undefined4 *)(puVar5 + 4) = 4;
      *(int *)((longlong)puVar5 + 0x24) = iVar14;
      puVar5[5] = 0;
    }
    uVar13 = (int)pFVar6 + iVar14 * 0x10;
    pFVar6 = (FShaderParametersMetadata *)(ulonglong)uVar13;
    local_res10 = (FShaderParametersMetadata *)(ulonglong)uVar13;
  }
  iVar14 = this->UniformTextureParameters[6].ArrayNum;
  if (0 < iVar14) {
    puVar5 = operator_new<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_>
                       (0x30,&local_2b8);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = L"";
      *puVar5 = L"SVTPackedUniform";
      *(int *)((longlong)puVar5 + 0x24) = iVar14 * 2;
      *(undefined4 *)(puVar5 + 2) = 0x1b7;
      *(int *)((longlong)puVar5 + 0x14) = (int)pFVar6;
      *(undefined2 *)(puVar5 + 3) = 3;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = 1;
      *(undefined4 *)(puVar5 + 4) = 4;
      puVar5[5] = 0;
    }
    uVar13 = (int)pFVar6 + iVar14 * 0x20;
    pFVar6 = (FShaderParametersMetadata *)(ulonglong)uVar13;
    local_res10 = (FShaderParametersMetadata *)(ulonglong)uVar13;
  }
  if (this->UniformPreshaderBufferSize != 0) {
    puVar5 = operator_new<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_>
                       (0x30,&local_2b8);
    if (puVar5 != (undefined8 *)0x0) {
      uVar13 = this->UniformPreshaderBufferSize;
      *puVar5 = L"PreshaderBuffer";
      puVar5[1] = L"";
      *(undefined4 *)(puVar5 + 2) = 0x1bd;
      *(int *)((longlong)puVar5 + 0x14) = (int)pFVar6;
      *(undefined2 *)(puVar5 + 3) = 4;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = 1;
      *(undefined4 *)(puVar5 + 4) = 4;
      *(uint *)((longlong)puVar5 + 0x24) = uVar13;
      puVar5[5] = 0;
    }
    uVar13 = (int)pFVar6 + this->UniformPreshaderBufferSize * 0x10;
    pFVar6 = (FShaderParametersMetadata *)(ulonglong)uVar13;
    local_res10 = (FShaderParametersMetadata *)(ulonglong)uVar13;
  }
  piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar18 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__Texture2DNames__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar18 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__Texture2DSamplerNames__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar18 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__TextureCubeNames__);
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar18 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__TextureCubeSamplerNames__);
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar18 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__Texture2DArrayNames__);
    _Init_thread_footer(&::_TSS4);
  }
  if ((*piVar18 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__Texture2DArraySamplerNames__);
    _Init_thread_footer(&::_TSS5);
  }
  if ((*piVar18 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__TextureCubeArrayNames__);
    _Init_thread_footer(&::_TSS6);
  }
  if ((*piVar18 < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__TextureCubeArraySamplerNames__);
    _Init_thread_footer(&::_TSS7);
  }
  if ((*piVar18 < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__VolumeTextureNames__);
    _Init_thread_footer(&::_TSS8);
  }
  if ((*piVar18 < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__VolumeTextureSamplerNames__);
    _Init_thread_footer(&::_TSS9);
  }
  if ((*piVar18 < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__ExternalTextureNames__);
    _Init_thread_footer(&::_TSS10);
  }
  if ((*piVar18 < ::_TSS11) && (_Init_thread_header(&::_TSS11), ::_TSS11 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__TextureCollectionNames__);
    _Init_thread_footer(&::_TSS11);
  }
  if ((*piVar18 < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__TextureCollectionPhysicalNames__);
    _Init_thread_footer(&::_TSS12);
  }
  if ((*piVar18 < ::_TSS13) && (_Init_thread_header(&::_TSS13), ::_TSS13 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__TextureCollectionSamplerNames__);
    _Init_thread_footer(&::_TSS13);
  }
  if ((*piVar18 < ::_TSS14) && (_Init_thread_header(&::_TSS14), ::_TSS14 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__TextureCollectionPageTableNames__);
    _Init_thread_footer(&::_TSS14);
  }
  if ((*piVar18 < ::_TSS15) && (_Init_thread_header(&::_TSS15), ::_TSS15 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__MediaTextureSamplerNames__);
    _Init_thread_footer(&::_TSS15);
  }
  if ((*piVar18 < _TSS16) && (_Init_thread_header(&_TSS16), _TSS16 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__VirtualTexturePageTableNames0__);
    _Init_thread_footer(&_TSS16);
  }
  if ((*piVar18 < _TSS17) && (_Init_thread_header(&_TSS17), _TSS17 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__VirtualTexturePageTableNames1__);
    _Init_thread_footer(&_TSS17);
  }
  if ((*piVar18 < _TSS18) && (_Init_thread_header(&_TSS18), _TSS18 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__VirtualTexturePageTableIndirectionNames__);
    _Init_thread_footer(&_TSS18);
  }
  if ((*piVar18 < _TSS19) && (_Init_thread_header(&_TSS19), _TSS19 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__VirtualTexturePhysicalNames__);
    _Init_thread_footer(&_TSS19);
  }
  if ((*piVar18 < _TSS20) && (_Init_thread_header(&_TSS20), _TSS20 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__VirtualTexturePhysicalSamplerNames__);
    _Init_thread_footer(&_TSS20);
  }
  if ((*piVar18 < _TSS21) && (_Init_thread_header(&_TSS21), _TSS21 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__SparseVolumeTexturePageTableNames__);
    _Init_thread_footer(&_TSS21);
  }
  if ((*piVar18 < _TSS22) && (_Init_thread_header(&_TSS22), _TSS22 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__SparseVolumeTexturePhysicalANames__);
    _Init_thread_footer(&_TSS22);
  }
  if ((*piVar18 < _TSS23) && (_Init_thread_header(&_TSS23), _TSS23 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__SparseVolumeTexturePhysicalBNames__);
    _Init_thread_footer(&_TSS23);
  }
  if ((*piVar18 < _TSS24) && (_Init_thread_header(&_TSS24), _TSS24 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__SparseVolumeTexturePhysicalSamplerNames__);
    _Init_thread_footer(&_TSS24);
  }
  if ((*piVar18 < _TSS25) && (_Init_thread_header(&_TSS25), _TSS25 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__MaterialCacheTagBuffer__);
    _Init_thread_footer(&_TSS25);
  }
  if ((*piVar18 < _TSS26) && (_Init_thread_header(&_TSS26), _TSS26 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__MaterialCacheTagPageTableNames0__);
    _Init_thread_footer(&_TSS26);
  }
  if ((*piVar18 < _TSS27) && (_Init_thread_header(&_TSS27), _TSS27 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__MaterialCacheTagPhysicalNames__);
    _Init_thread_footer(&_TSS27);
  }
  if ((*piVar18 < _TSS28) && (_Init_thread_header(&_TSS28), _TSS28 == -1)) {
    atexit(`FUniformExpressionSet::CreateBufferStruct'::__l2::
           _dynamic_atexit_destructor_for__MaterialCacheTagPhysicalSamplerNames__);
    _Init_thread_footer(&_TSS28);
  }
  if (bInitializedTextureNames == false) {
    bInitializedTextureNames = true;
    pFVar21 = pFVar9;
    pFVar22 = pFVar9;
    pFVar24 = pFVar9;
    do {
      ::FString::PrintfImpl(&local_2a8,L"Texture2D_%d");
      pEVar19 = &pFVar21[0x2aa42ff].UseCase;
      if ((FString *)pEVar19 != &local_2a8) {
        if (*(void **)pEVar19 != (void *)0x0) {
          FMemory::Free(*(void **)pEVar19);
        }
        *(FScriptContainerElement **)pEVar19 = local_2a8.Data.AllocatorInstance.Data;
        *(int *)&pFVar21[0x2aa42ff].Layout.Reference = local_2a8.Data.ArrayNum;
        *(int *)((longlong)&pFVar21[0x2aa42ff].Layout.Reference + 4) = local_2a8.Data.ArrayMax;
        local_2a8.Data.ArrayNum = 0;
        local_2a8.Data.ArrayMax = 0;
        local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_298,L"Texture2D_%dSampler");
      pFVar20 = Texture2DSamplerNames + (longlong)pFVar22;
      if (pFVar20 != &local_298) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_298.Data.AllocatorInstance.Data;
        Texture2DSamplerNames[(longlong)pFVar22].Data.ArrayNum = local_298.Data.ArrayNum;
        Texture2DSamplerNames[(longlong)pFVar22].Data.ArrayMax = local_298.Data.ArrayMax;
        local_298.Data.ArrayNum = 0;
        local_298.Data.ArrayMax = 0;
        local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_288,L"TextureCube_%d");
      pFVar20 = TextureCubeNames + (longlong)pFVar22;
      if (pFVar20 != &local_288) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_288.Data.AllocatorInstance.Data;
        TextureCubeNames[(longlong)pFVar22].Data.ArrayNum = local_288.Data.ArrayNum;
        TextureCubeNames[(longlong)pFVar22].Data.ArrayMax = local_288.Data.ArrayMax;
        local_288.Data.ArrayNum = 0;
        local_288.Data.ArrayMax = 0;
        local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_278,L"TextureCube_%dSampler");
      pFVar20 = TextureCubeSamplerNames + (longlong)pFVar22;
      if (pFVar20 != &local_278) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_278.Data.AllocatorInstance.Data;
        TextureCubeSamplerNames[(longlong)pFVar22].Data.ArrayNum = local_278.Data.ArrayNum;
        TextureCubeSamplerNames[(longlong)pFVar22].Data.ArrayMax = local_278.Data.ArrayMax;
        local_278.Data.ArrayNum = 0;
        local_278.Data.ArrayMax = 0;
        local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_268,L"Texture2DArray_%d");
      pFVar20 = Texture2DArrayNames + (longlong)pFVar22;
      if (pFVar20 != &local_268) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_268.Data.AllocatorInstance.Data;
        Texture2DArrayNames[(longlong)pFVar22].Data.ArrayNum = local_268.Data.ArrayNum;
        Texture2DArrayNames[(longlong)pFVar22].Data.ArrayMax = local_268.Data.ArrayMax;
        local_268.Data.ArrayNum = 0;
        local_268.Data.ArrayMax = 0;
        local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_258,L"Texture2DArray_%dSampler");
      pFVar20 = Texture2DArraySamplerNames + (longlong)pFVar22;
      if (pFVar20 != &local_258) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_258.Data.AllocatorInstance.Data;
        Texture2DArraySamplerNames[(longlong)pFVar22].Data.ArrayNum = local_258.Data.ArrayNum;
        Texture2DArraySamplerNames[(longlong)pFVar22].Data.ArrayMax = local_258.Data.ArrayMax;
        local_258.Data.ArrayNum = 0;
        local_258.Data.ArrayMax = 0;
        local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_248,L"TextureCubeArray_%d");
      pFVar20 = TextureCubeArrayNames + (longlong)pFVar22;
      if (pFVar20 != &local_248) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_248.Data.AllocatorInstance.Data;
        TextureCubeArrayNames[(longlong)pFVar22].Data.ArrayNum = local_248.Data.ArrayNum;
        TextureCubeArrayNames[(longlong)pFVar22].Data.ArrayMax = local_248.Data.ArrayMax;
        local_248.Data.ArrayNum = 0;
        local_248.Data.ArrayMax = 0;
        local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_238,L"TextureCubeArray_%dSampler");
      pFVar20 = TextureCubeArraySamplerNames + (longlong)pFVar22;
      if (pFVar20 != &local_238) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_238.Data.AllocatorInstance.Data;
        TextureCubeArraySamplerNames[(longlong)pFVar22].Data.ArrayNum = local_238.Data.ArrayNum;
        TextureCubeArraySamplerNames[(longlong)pFVar22].Data.ArrayMax = local_238.Data.ArrayMax;
        local_238.Data.ArrayNum = 0;
        local_238.Data.ArrayMax = 0;
        local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_228,L"VolumeTexture_%d");
      pFVar20 = VolumeTextureNames + (longlong)pFVar22;
      if (pFVar20 != &local_228) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_228.Data.AllocatorInstance.Data;
        VolumeTextureNames[(longlong)pFVar22].Data.ArrayNum = local_228.Data.ArrayNum;
        VolumeTextureNames[(longlong)pFVar22].Data.ArrayMax = local_228.Data.ArrayMax;
        local_228.Data.ArrayNum = 0;
        local_228.Data.ArrayMax = 0;
        local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_218,L"VolumeTexture_%dSampler");
      pFVar20 = VolumeTextureSamplerNames + (longlong)pFVar22;
      if (pFVar20 != &local_218) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_218.Data.AllocatorInstance.Data;
        VolumeTextureSamplerNames[(longlong)pFVar22].Data.ArrayNum = local_218.Data.ArrayNum;
        VolumeTextureSamplerNames[(longlong)pFVar22].Data.ArrayMax = local_218.Data.ArrayMax;
        local_218.Data.ArrayNum = 0;
        local_218.Data.ArrayMax = 0;
        local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_208,L"ExternalTexture_%d");
      pFVar20 = ExternalTextureNames + (longlong)pFVar22;
      if (pFVar20 != &local_208) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_208.Data.AllocatorInstance.Data;
        ExternalTextureNames[(longlong)pFVar22].Data.ArrayNum = local_208.Data.ArrayNum;
        ExternalTextureNames[(longlong)pFVar22].Data.ArrayMax = local_208.Data.ArrayMax;
        local_208.Data.ArrayNum = 0;
        local_208.Data.ArrayMax = 0;
        local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_1f8,L"TextureCollection_%d");
      pFVar20 = TextureCollectionNames + (longlong)pFVar22;
      if (pFVar20 != &local_1f8) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_1f8.Data.AllocatorInstance.Data;
        TextureCollectionNames[(longlong)pFVar22].Data.ArrayNum = local_1f8.Data.ArrayNum;
        TextureCollectionNames[(longlong)pFVar22].Data.ArrayMax = local_1f8.Data.ArrayMax;
        local_1f8.Data.ArrayNum = 0;
        local_1f8.Data.ArrayMax = 0;
        local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_1e8,L"TextureCollectionPhysical_%d");
      pFVar20 = TextureCollectionPhysicalNames + (longlong)pFVar22;
      if (pFVar20 != &local_1e8) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
        TextureCollectionPhysicalNames[(longlong)pFVar22].Data.ArrayNum = local_1e8.Data.ArrayNum;
        TextureCollectionPhysicalNames[(longlong)pFVar22].Data.ArrayMax = local_1e8.Data.ArrayMax;
        local_1e8.Data.ArrayNum = 0;
        local_1e8.Data.ArrayMax = 0;
        local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_1d8,L"TextureCollectionSampler_%d");
      pFVar20 = TextureCollectionSamplerNames + (longlong)pFVar22;
      if (pFVar20 != &local_1d8) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
        TextureCollectionSamplerNames[(longlong)pFVar22].Data.ArrayNum = local_1d8.Data.ArrayNum;
        TextureCollectionSamplerNames[(longlong)pFVar22].Data.ArrayMax = local_1d8.Data.ArrayMax;
        local_1d8.Data.ArrayNum = 0;
        local_1d8.Data.ArrayMax = 0;
        local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_1c8,L"TextureCollectionPageTable_%d");
      pFVar20 = TextureCollectionPageTableNames + (longlong)pFVar22;
      if (pFVar20 != &local_1c8) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
        TextureCollectionPageTableNames[(longlong)pFVar22].Data.ArrayNum = local_1c8.Data.ArrayNum;
        TextureCollectionPageTableNames[(longlong)pFVar22].Data.ArrayMax = local_1c8.Data.ArrayMax;
        local_1c8.Data.ArrayNum = 0;
        local_1c8.Data.ArrayMax = 0;
        local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_1b8,L"ExternalTexture_%dSampler");
      pFVar20 = MediaTextureSamplerNames + (longlong)pFVar22;
      if (pFVar20 != &local_1b8) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
        MediaTextureSamplerNames[(longlong)pFVar22].Data.ArrayNum = local_1b8.Data.ArrayNum;
        MediaTextureSamplerNames[(longlong)pFVar22].Data.ArrayMax = local_1b8.Data.ArrayMax;
        local_1b8.Data.ArrayNum = 0;
        local_1b8.Data.ArrayMax = 0;
        local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_1a8,L"VirtualTexturePageTable0_%d");
      pFVar20 = VirtualTexturePageTableNames0 + (longlong)pFVar22;
      if (pFVar20 != &local_1a8) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
        VirtualTexturePageTableNames0[(longlong)pFVar22].Data.ArrayNum = local_1a8.Data.ArrayNum;
        VirtualTexturePageTableNames0[(longlong)pFVar22].Data.ArrayMax = local_1a8.Data.ArrayMax;
        local_1a8.Data.ArrayNum = 0;
        local_1a8.Data.ArrayMax = 0;
        local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_198,L"VirtualTexturePageTable1_%d");
      pFVar20 = VirtualTexturePageTableNames1 + (longlong)pFVar22;
      if (pFVar20 != &local_198) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
        VirtualTexturePageTableNames1[(longlong)pFVar22].Data.ArrayNum = local_198.Data.ArrayNum;
        VirtualTexturePageTableNames1[(longlong)pFVar22].Data.ArrayMax = local_198.Data.ArrayMax;
        local_198.Data.ArrayNum = 0;
        local_198.Data.ArrayMax = 0;
        local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_188,L"VirtualTexturePageTableIndirection_%d");
      pFVar20 = VirtualTexturePageTableIndirectionNames + (longlong)pFVar22;
      if (pFVar20 != &local_188) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
        VirtualTexturePageTableIndirectionNames[(longlong)pFVar22].Data.ArrayNum =
             local_188.Data.ArrayNum;
        VirtualTexturePageTableIndirectionNames[(longlong)pFVar22].Data.ArrayMax =
             local_188.Data.ArrayMax;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_178,L"VirtualTexturePhysical_%d");
      pFVar20 = VirtualTexturePhysicalNames + (longlong)pFVar22;
      if (pFVar20 != &local_178) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
        VirtualTexturePhysicalNames[(longlong)pFVar22].Data.ArrayNum = local_178.Data.ArrayNum;
        VirtualTexturePhysicalNames[(longlong)pFVar22].Data.ArrayMax = local_178.Data.ArrayMax;
        local_178.Data.ArrayNum = 0;
        local_178.Data.ArrayMax = 0;
        local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_168,L"VirtualTexturePhysical_%dSampler");
      pFVar20 = VirtualTexturePhysicalSamplerNames + (longlong)pFVar22;
      if (pFVar20 != &local_168) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
        VirtualTexturePhysicalSamplerNames[(longlong)pFVar22].Data.ArrayNum =
             local_168.Data.ArrayNum;
        VirtualTexturePhysicalSamplerNames[(longlong)pFVar22].Data.ArrayMax =
             local_168.Data.ArrayMax;
        local_168.Data.ArrayNum = 0;
        local_168.Data.ArrayMax = 0;
        local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_158,L"SparseVolumeTexturePageTable_%d");
      pFVar20 = SparseVolumeTexturePageTableNames + (longlong)pFVar22;
      if (pFVar20 != &local_158) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
        SparseVolumeTexturePageTableNames[(longlong)pFVar22].Data.ArrayNum = local_158.Data.ArrayNum
        ;
        SparseVolumeTexturePageTableNames[(longlong)pFVar22].Data.ArrayMax = local_158.Data.ArrayMax
        ;
        local_158.Data.ArrayNum = 0;
        local_158.Data.ArrayMax = 0;
        local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_148,L"SparseVolumeTexturePhysicalA_%d");
      pFVar20 = SparseVolumeTexturePhysicalANames + (longlong)pFVar22;
      if (pFVar20 != &local_148) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
        SparseVolumeTexturePhysicalANames[(longlong)pFVar22].Data.ArrayNum = local_148.Data.ArrayNum
        ;
        SparseVolumeTexturePhysicalANames[(longlong)pFVar22].Data.ArrayMax = local_148.Data.ArrayMax
        ;
        local_148.Data.ArrayNum = 0;
        local_148.Data.ArrayMax = 0;
        local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_138,L"SparseVolumeTexturePhysicalB_%d");
      pFVar20 = SparseVolumeTexturePhysicalBNames + (longlong)pFVar22;
      if (pFVar20 != &local_138) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
        SparseVolumeTexturePhysicalBNames[(longlong)pFVar22].Data.ArrayNum = local_138.Data.ArrayNum
        ;
        SparseVolumeTexturePhysicalBNames[(longlong)pFVar22].Data.ArrayMax = local_138.Data.ArrayMax
        ;
        local_138.Data.ArrayNum = 0;
        local_138.Data.ArrayMax = 0;
        local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_128,L"SparseVolumeTexturePhysical_%dSampler");
      pFVar20 = SparseVolumeTexturePhysicalSamplerNames + (longlong)pFVar22;
      if (pFVar20 != &local_128) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
        SparseVolumeTexturePhysicalSamplerNames[(longlong)pFVar22].Data.ArrayNum =
             local_128.Data.ArrayNum;
        SparseVolumeTexturePhysicalSamplerNames[(longlong)pFVar22].Data.ArrayMax =
             local_128.Data.ArrayMax;
        local_128.Data.ArrayNum = 0;
        local_128.Data.ArrayMax = 0;
        local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_118,L"MaterialCacheTagBuffer_%d");
      pFVar20 = MaterialCacheTagBuffer + (longlong)pFVar22;
      if (pFVar20 != &local_118) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
        MaterialCacheTagBuffer[(longlong)pFVar22].Data.ArrayNum = local_118.Data.ArrayNum;
        MaterialCacheTagBuffer[(longlong)pFVar22].Data.ArrayMax = local_118.Data.ArrayMax;
        local_118.Data.ArrayNum = 0;
        local_118.Data.ArrayMax = 0;
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_108,L"MaterialCacheTagPageTable0_%d");
      pFVar20 = MaterialCacheTagPageTableNames0 + (longlong)pFVar22;
      if (pFVar20 != &local_108) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
        MaterialCacheTagPageTableNames0[(longlong)pFVar22].Data.ArrayNum = local_108.Data.ArrayNum;
        MaterialCacheTagPageTableNames0[(longlong)pFVar22].Data.ArrayMax = local_108.Data.ArrayMax;
        local_108.Data.ArrayNum = 0;
        local_108.Data.ArrayMax = 0;
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_f8,L"MaterialCacheTagPhysical_%d");
      pFVar20 = MaterialCacheTagPhysicalNames + (longlong)pFVar22;
      if (pFVar20 != &local_f8) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
        MaterialCacheTagPhysicalNames[(longlong)pFVar22].Data.ArrayNum = local_f8.Data.ArrayNum;
        MaterialCacheTagPhysicalNames[(longlong)pFVar22].Data.ArrayMax = local_f8.Data.ArrayMax;
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_e8,L"MaterialCacheTagPhysical_%dSampler");
      pFVar20 = MaterialCacheTagPhysicalSamplerNames + (longlong)pFVar22;
      if (pFVar20 != &local_e8) {
        pFVar12 = (pFVar20->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar20->Data).AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
        MaterialCacheTagPhysicalSamplerNames[(longlong)pFVar22].Data.ArrayNum =
             local_e8.Data.ArrayNum;
        MaterialCacheTagPhysicalSamplerNames[(longlong)pFVar22].Data.ArrayMax =
             local_e8.Data.ArrayMax;
        local_e8.Data.ArrayNum = 0;
        local_e8.Data.ArrayMax = 0;
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      uVar13 = (int)pFVar24 + 1;
      pFVar24 = (FShaderParametersMetadata *)(ulonglong)uVar13;
      pFVar22 = (FShaderParametersMetadata *)((longlong)&pFVar22->_padding_ + 1);
      pFVar21 = (FShaderParametersMetadata *)&pFVar21->StructTypeName;
      pFVar6 = local_res10;
    } while (uVar13 < 0x80);
  }
  if ((0x80 < (uint)this->UniformTextureParameters[0].ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformTextureParameters[TypeIndex].Num() <= MaxUniformExpressions",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x20d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
    return pFVar6;
  }
  if ((0x80 < (uint)this->UniformTextureParameters[1].ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformTextureParameters[TypeIndex].Num() <= MaxUniformExpressions",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x20d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
    return pFVar6;
  }
  if ((0x80 < (uint)this->UniformTextureParameters[2].ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformTextureParameters[TypeIndex].Num() <= MaxUniformExpressions",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x20d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
    return pFVar6;
  }
  if ((0x80 < (uint)this->UniformTextureParameters[3].ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformTextureParameters[TypeIndex].Num() <= MaxUniformExpressions",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x20d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
    return pFVar6;
  }
  if ((0x80 < (uint)this->UniformTextureParameters[4].ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformTextureParameters[TypeIndex].Num() <= MaxUniformExpressions",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x20d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
    return pFVar6;
  }
  if ((0x80 < (uint)this->UniformTextureParameters[5].ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformTextureParameters[TypeIndex].Num() <= MaxUniformExpressions",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x20d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
    return pFVar6;
  }
  if ((0x80 < (uint)this->UniformTextureParameters[6].ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformTextureParameters[TypeIndex].Num() <= MaxUniformExpressions",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x20d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
    return pFVar6;
  }
  if ((0x80 < (uint)(this->VTStacks).ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("VTStacks.Num() <= MaxUniformExpressions",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x20f,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
    return pFVar6;
  }
  if ((0x80 < (uint)(this->MaterialCacheTagStacks).ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaterialCacheTagStacks.Num() <= MaxUniformExpressions",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x210,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
    return pFVar6;
  }
  uVar13 = 0;
  pFVar21 = pFVar9;
  pFVar22 = pFVar9;
  if (0 < this->UniformTextureParameters[0].ArrayNum) {
    do {
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        local_2b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      lVar23 = (longlong)local_2b8.ArrayNum;
      uVar16 = local_2b8.ArrayNum + 1;
      uVar4 = 0;
      if (local_2b8.ArrayNum < (int)uVar16) {
        uVar4 = (uint)~local_2b8.ArrayNum >> 0x1f;
      }
      local_2b8.ArrayNum = uVar16;
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
      iVar14 = (int)pFVar6;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if (*(int *)&pFVar22[0x2aa42ff].Layout.Reference == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)&pFVar22[0x2aa42ff].UseCase;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"Texture2D";
        *(undefined4 *)(pFVar12 + 0x10) = 0x215;
        *(int *)(pFVar12 + 0x14) = iVar14;
        *(undefined2 *)(pFVar12 + 0x18) = 5;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      uVar4 = local_2b8.ArrayNum;
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      local_2b8.ArrayNum = uVar4 + 1;
      uVar16 = uVar13;
      if ((int)uVar4 < local_2b8.ArrayNum) {
        uVar16 = ~uVar4 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if (*(int *)&pFVar22[0x2aa430f].Layout.Reference == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)&pFVar22[0x2aa430f].UseCase;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"SamplerState";
        *(undefined4 *)(pFVar12 + 0x10) = 0x217;
        *(int *)(pFVar12 + 0x14) = iVar14 + 8;
        *(undefined2 *)(pFVar12 + 0x18) = 8;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      pFVar6 = (FShaderParametersMetadata *)(ulonglong)(iVar14 + 0x10);
      uVar4 = (int)pFVar21 + 1;
      pFVar21 = (FShaderParametersMetadata *)(ulonglong)uVar4;
      pFVar22 = (FShaderParametersMetadata *)&pFVar22->StructTypeName;
    } while ((int)uVar4 < this->UniformTextureParameters[0].ArrayNum);
  }
  pFVar21 = pFVar9;
  pFVar22 = pFVar9;
  if (0 < this->UniformTextureParameters[1].ArrayNum) {
    do {
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        local_2b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      lVar23 = (longlong)local_2b8.ArrayNum;
      uVar16 = local_2b8.ArrayNum + 1;
      uVar4 = uVar13;
      if (local_2b8.ArrayNum < (int)uVar16) {
        uVar4 = (uint)~local_2b8.ArrayNum >> 0x1f;
      }
      local_2b8.ArrayNum = uVar16;
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
      iVar14 = (int)pFVar6;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if (*(int *)&pFVar22[0x2aa431f].Layout.Reference == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)&pFVar22[0x2aa431f].UseCase;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"TextureCube";
        *(undefined4 *)(pFVar12 + 0x10) = 0x21e;
        *(int *)(pFVar12 + 0x14) = iVar14;
        *(undefined2 *)(pFVar12 + 0x18) = 5;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      uVar4 = local_2b8.ArrayNum;
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      local_2b8.ArrayNum = uVar4 + 1;
      uVar16 = uVar13;
      if ((int)uVar4 < local_2b8.ArrayNum) {
        uVar16 = ~uVar4 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if (*(int *)&pFVar22[0x2aa432f].Layout.Reference == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)&pFVar22[0x2aa432f].UseCase;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"SamplerState";
        *(undefined4 *)(pFVar12 + 0x10) = 0x220;
        *(int *)(pFVar12 + 0x14) = iVar14 + 8;
        *(undefined2 *)(pFVar12 + 0x18) = 8;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      pFVar6 = (FShaderParametersMetadata *)(ulonglong)(iVar14 + 0x10);
      uVar4 = (int)pFVar21 + 1;
      pFVar21 = (FShaderParametersMetadata *)(ulonglong)uVar4;
      pFVar22 = (FShaderParametersMetadata *)&pFVar22->StructTypeName;
    } while ((int)uVar4 < this->UniformTextureParameters[1].ArrayNum);
  }
  pFVar21 = pFVar9;
  pFVar22 = pFVar9;
  if (0 < this->UniformTextureParameters[2].ArrayNum) {
    do {
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        local_2b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      lVar23 = (longlong)local_2b8.ArrayNum;
      uVar16 = local_2b8.ArrayNum + 1;
      uVar4 = uVar13;
      if (local_2b8.ArrayNum < (int)uVar16) {
        uVar4 = (uint)~local_2b8.ArrayNum >> 0x1f;
      }
      local_2b8.ArrayNum = uVar16;
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
      iVar14 = (int)pFVar6;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if (*(int *)&pFVar22[0x2aa433f].Layout.Reference == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)&pFVar22[0x2aa433f].UseCase;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"Texture2DArray";
        *(undefined4 *)(pFVar12 + 0x10) = 0x227;
        *(int *)(pFVar12 + 0x14) = iVar14;
        *(undefined2 *)(pFVar12 + 0x18) = 5;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      uVar4 = local_2b8.ArrayNum;
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      local_2b8.ArrayNum = uVar4 + 1;
      uVar16 = uVar13;
      if ((int)uVar4 < local_2b8.ArrayNum) {
        uVar16 = ~uVar4 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if (*(int *)&pFVar22[0x2aa434f].Layout.Reference == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)&pFVar22[0x2aa434f].UseCase;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"SamplerState";
        *(undefined4 *)(pFVar12 + 0x10) = 0x229;
        *(int *)(pFVar12 + 0x14) = iVar14 + 8;
        *(undefined2 *)(pFVar12 + 0x18) = 8;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      pFVar6 = (FShaderParametersMetadata *)(ulonglong)(iVar14 + 0x10);
      uVar4 = (int)pFVar21 + 1;
      pFVar21 = (FShaderParametersMetadata *)(ulonglong)uVar4;
      pFVar22 = (FShaderParametersMetadata *)&pFVar22->StructTypeName;
    } while ((int)uVar4 < this->UniformTextureParameters[2].ArrayNum);
  }
  pFVar21 = pFVar9;
  pFVar22 = pFVar9;
  if (0 < this->UniformTextureParameters[3].ArrayNum) {
    do {
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        local_2b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      lVar23 = (longlong)local_2b8.ArrayNum;
      uVar16 = local_2b8.ArrayNum + 1;
      uVar4 = uVar13;
      if (local_2b8.ArrayNum < (int)uVar16) {
        uVar4 = (uint)~local_2b8.ArrayNum >> 0x1f;
      }
      local_2b8.ArrayNum = uVar16;
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
      iVar14 = (int)pFVar6;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar22[0x2aa435f].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar22[0x2aa435f].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"TextureCubeArray";
        *(undefined4 *)(pFVar12 + 0x10) = 0x230;
        *(int *)(pFVar12 + 0x14) = iVar14;
        *(undefined2 *)(pFVar12 + 0x18) = 5;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      uVar4 = local_2b8.ArrayNum;
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      local_2b8.ArrayNum = uVar4 + 1;
      uVar16 = uVar13;
      if ((int)uVar4 < local_2b8.ArrayNum) {
        uVar16 = ~uVar4 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar22[0x2aa436f].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar22[0x2aa436f].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"SamplerState";
        *(undefined4 *)(pFVar12 + 0x10) = 0x232;
        *(int *)(pFVar12 + 0x14) = iVar14 + 8;
        *(undefined2 *)(pFVar12 + 0x18) = 8;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      pFVar6 = (FShaderParametersMetadata *)(ulonglong)(iVar14 + 0x10);
      uVar4 = (int)pFVar21 + 1;
      pFVar21 = (FShaderParametersMetadata *)(ulonglong)uVar4;
      pFVar22 = (FShaderParametersMetadata *)&pFVar22->StructTypeName;
    } while ((int)uVar4 < this->UniformTextureParameters[3].ArrayNum);
  }
  iVar14 = this->UniformTextureParameters[4].ArrayNum;
  uVar4 = 0;
  pFVar21 = pFVar9;
  pFVar22 = pFVar9;
  if (0 < iVar14) {
    do {
      uVar11 = (uint)pFVar22;
      uVar16 = uVar13;
      if ((int)uVar11 < iVar14) {
        uVar16 = ~uVar11 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        local_2b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      lVar23 = (longlong)local_2b8.ArrayNum;
      uVar17 = local_2b8.ArrayNum + 1;
      uVar16 = uVar4;
      if (local_2b8.ArrayNum < (int)uVar17) {
        uVar16 = (uint)~local_2b8.ArrayNum >> 0x1f;
      }
      local_2b8.ArrayNum = uVar17;
      if ((uVar16 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
      iVar15 = (int)pFVar6;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar21[0x2aa437f].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar21[0x2aa437f].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"Texture3D";
        *(undefined4 *)(pFVar12 + 0x10) = 0x23b;
        *(int *)(pFVar12 + 0x14) = iVar15;
        *(undefined2 *)(pFVar12 + 0x18) = 5;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      uVar16 = local_2b8.ArrayNum;
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        uVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      local_2b8.ArrayNum = uVar16 + 1;
      uVar17 = uVar4;
      if ((int)uVar16 < local_2b8.ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x30;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar21[0x2aa438f].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar21[0x2aa438f].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"SamplerState";
        *(undefined4 *)(pFVar12 + 0x10) = 0x23d;
        *(int *)(pFVar12 + 0x14) = iVar15 + 8;
        *(undefined2 *)(pFVar12 + 0x18) = 8;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      iVar14 = this->UniformTextureParameters[4].ArrayNum;
      pFVar6 = (FShaderParametersMetadata *)(ulonglong)(iVar15 + 0x10);
      pFVar21 = (FShaderParametersMetadata *)&pFVar21->StructTypeName;
      pFVar22 = (FShaderParametersMetadata *)(ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < iVar14);
  }
  iVar14 = this->UniformTextureParameters[6].ArrayNum;
  pFVar21 = pFVar9;
  pFVar22 = pFVar9;
  if (0 < iVar14) {
    do {
      uVar16 = (uint)pFVar22;
      uVar13 = uVar4;
      if ((int)uVar16 < iVar14) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        local_2b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      lVar23 = (longlong)local_2b8.ArrayNum;
      uVar11 = local_2b8.ArrayNum + 1;
      uVar13 = uVar4;
      if (local_2b8.ArrayNum < (int)uVar11) {
        uVar13 = (uint)~local_2b8.ArrayNum >> 0x1f;
      }
      local_2b8.ArrayNum = uVar11;
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
      iVar15 = (int)pFVar6;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar21[0x2aa444f].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar21[0x2aa444f].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"Texture3D<uint>";
        *(undefined4 *)(pFVar12 + 0x10) = 0x247;
        *(int *)(pFVar12 + 0x14) = iVar15;
        *(undefined2 *)(pFVar12 + 0x18) = 5;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        local_2b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      lVar23 = (longlong)local_2b8.ArrayNum;
      uVar11 = local_2b8.ArrayNum + 1;
      uVar13 = uVar4;
      if (local_2b8.ArrayNum < (int)uVar11) {
        uVar13 = (uint)~local_2b8.ArrayNum >> 0x1f;
      }
      local_2b8.ArrayNum = uVar11;
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar21[0x2aa445f].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar21[0x2aa445f].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"Texture3D";
        *(undefined4 *)(pFVar12 + 0x10) = 0x24c;
        *(int *)(pFVar12 + 0x14) = iVar15 + 8;
        *(undefined2 *)(pFVar12 + 0x18) = 5;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        local_2b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      lVar23 = (longlong)local_2b8.ArrayNum;
      uVar11 = local_2b8.ArrayNum + 1;
      uVar13 = uVar4;
      if (local_2b8.ArrayNum < (int)uVar11) {
        uVar13 = (uint)~local_2b8.ArrayNum >> 0x1f;
      }
      local_2b8.ArrayNum = uVar11;
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar21[0x2aa446f].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar21[0x2aa446f].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"Texture3D";
        *(undefined4 *)(pFVar12 + 0x10) = 0x251;
        *(int *)(pFVar12 + 0x14) = iVar15 + 0x10;
        *(undefined2 *)(pFVar12 + 0x18) = 5;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        local_2b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      lVar23 = (longlong)local_2b8.ArrayNum;
      uVar11 = local_2b8.ArrayNum + 1;
      uVar13 = uVar4;
      if (local_2b8.ArrayNum < (int)uVar11) {
        uVar13 = (uint)~local_2b8.ArrayNum >> 0x1f;
      }
      local_2b8.ArrayNum = uVar11;
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar21[0x2aa447f].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar21[0x2aa447f].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"SamplerState";
        *(undefined4 *)(pFVar12 + 0x10) = 0x256;
        *(int *)(pFVar12 + 0x14) = iVar15 + 0x18;
        *(undefined2 *)(pFVar12 + 0x18) = 8;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      iVar14 = this->UniformTextureParameters[6].ArrayNum;
      pFVar6 = (FShaderParametersMetadata *)(ulonglong)(iVar15 + 0x20);
      pFVar21 = (FShaderParametersMetadata *)&pFVar21->StructTypeName;
      pFVar22 = (FShaderParametersMetadata *)(ulonglong)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < iVar14);
  }
  pFVar21 = pFVar9;
  pFVar22 = pFVar9;
  if (0 < (this->UniformExternalTextureParameters).ArrayNum) {
    do {
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        local_2b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      lVar23 = (longlong)local_2b8.ArrayNum;
      uVar16 = local_2b8.ArrayNum + 1;
      uVar13 = uVar4;
      if (local_2b8.ArrayNum < (int)uVar16) {
        uVar13 = (uint)~local_2b8.ArrayNum >> 0x1f;
      }
      local_2b8.ArrayNum = uVar16;
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
      iVar14 = (int)pFVar6;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar22[0x2aa439f].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar22[0x2aa439f].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"TextureExternal";
        *(undefined4 *)(pFVar12 + 0x10) = 0x25d;
        *(int *)(pFVar12 + 0x14) = iVar14;
        *(undefined2 *)(pFVar12 + 0x18) = 5;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      uVar13 = local_2b8.ArrayNum;
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        uVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      local_2b8.ArrayNum = uVar13 + 1;
      uVar16 = uVar4;
      if ((int)uVar13 < local_2b8.ArrayNum) {
        uVar16 = ~uVar13 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar22[0x2aa43ef].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar22[0x2aa43ef].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"SamplerState";
        *(undefined4 *)(pFVar12 + 0x10) = 0x25f;
        *(int *)(pFVar12 + 0x14) = iVar14 + 8;
        *(undefined2 *)(pFVar12 + 0x18) = 8;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      pFVar6 = (FShaderParametersMetadata *)(ulonglong)(iVar14 + 0x10);
      uVar13 = (int)pFVar21 + 1;
      pFVar21 = (FShaderParametersMetadata *)(ulonglong)uVar13;
      pFVar22 = (FShaderParametersMetadata *)&pFVar22->StructTypeName;
    } while ((int)uVar13 < (this->UniformExternalTextureParameters).ArrayNum);
  }
  if (0 < (this->UniformTextureCollectionParameters).ArrayNum) {
    pFVar21 = pFVar9;
    pFVar22 = pFVar9;
    pFVar24 = pFVar9;
    do {
      iVar14 = (int)pFVar6;
      uVar16 = (uint)pFVar21;
      uVar13 = uVar4;
      if ((int)uVar16 < (this->UniformTextureCollectionParameters).ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      FVar7 = (this->UniformTextureCollectionParameters).AllocatorInstance;
      if (((ulonglong)FVar7 & 1) != 0) {
        FVar7 = (ForAnyElementType)
                ((longlong)&(this->UniformTextureCollectionParameters).AllocatorInstance.field_0x0 +
                ((longlong)FVar7 >> 0x18));
      }
      if (*(char *)((longlong)&pFVar22->ShaderVariableName + (longlong)FVar7) == '\0') {
        if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
          local_2b8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
        }
        lVar23 = (longlong)local_2b8.ArrayNum;
        uVar11 = local_2b8.ArrayNum + 1;
        uVar13 = uVar4;
        if (local_2b8.ArrayNum < (int)uVar11) {
          uVar13 = (uint)~local_2b8.ArrayNum >> 0x1f;
        }
        local_2b8.ArrayNum = uVar11;
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
          return pFVar6;
        }
        pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          if ((int)pFVar24[0x2aa43af].GlobalListLink._padding_ == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = (wchar_t *)pFVar24[0x2aa43af].GlobalListLink._padding_;
          }
          *(wchar_t **)pFVar12 = pwVar8;
          *(wchar_t **)(pFVar12 + 8) = L"FResourceCollection";
          *(undefined4 *)(pFVar12 + 0x10) = 0x26a;
          *(int *)(pFVar12 + 0x14) = iVar14;
          *(undefined2 *)(pFVar12 + 0x18) = 0x18;
          *(undefined4 *)(pFVar12 + 0x1c) = 1;
          *(undefined8 *)(pFVar12 + 0x20) = 1;
          *(undefined8 *)(pFVar12 + 0x28) = 0;
        }
      }
      else {
        if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
          local_2b8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
        }
        lVar23 = (longlong)local_2b8.ArrayNum;
        uVar11 = local_2b8.ArrayNum + 1;
        uVar13 = uVar4;
        if (local_2b8.ArrayNum < (int)uVar11) {
          uVar13 = (uint)~local_2b8.ArrayNum >> 0x1f;
        }
        local_2b8.ArrayNum = uVar11;
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
          return pFVar6;
        }
        pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          if ((int)pFVar24[0x2aa43af].GlobalListLink._padding_ == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = (wchar_t *)pFVar24[0x2aa43af].GlobalListLink._padding_;
          }
          *(wchar_t **)pFVar12 = pwVar8;
          *(wchar_t **)(pFVar12 + 8) = L"FIndirectVirtualTexture";
          *(undefined4 *)(pFVar12 + 0x10) = 0x26f;
          *(int *)(pFVar12 + 0x14) = iVar14;
          *(undefined2 *)(pFVar12 + 0x18) = 6;
          *(undefined4 *)(pFVar12 + 0x1c) = 1;
          *(undefined8 *)(pFVar12 + 0x20) = 1;
          *(undefined8 *)(pFVar12 + 0x28) = 0;
        }
        uVar13 = local_2b8.ArrayNum;
        if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
          uVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
        }
        local_2b8.ArrayNum = uVar13 + 1;
        uVar11 = uVar4;
        if ((int)uVar13 < local_2b8.ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
          return pFVar6;
        }
        pFVar12 = local_2b8.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          if ((int)pFVar24[0x2aa43df].GlobalListLink._padding_ == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = (wchar_t *)pFVar24[0x2aa43df].GlobalListLink._padding_;
          }
          *(wchar_t **)pFVar12 = pwVar8;
          *(wchar_t **)(pFVar12 + 8) = L"Texture2D<uint4>";
          *(undefined4 *)(pFVar12 + 0x10) = 0x272;
          *(int *)(pFVar12 + 0x14) = iVar14 + 8;
          *(undefined2 *)(pFVar12 + 0x18) = 5;
          *(undefined4 *)(pFVar12 + 0x1c) = 1;
          *(undefined8 *)(pFVar12 + 0x20) = 1;
          *(undefined8 *)(pFVar12 + 0x28) = 0;
        }
        uVar13 = local_2b8.ArrayNum;
        if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
          uVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
        }
        local_2b8.ArrayNum = uVar13 + 1;
        uVar11 = uVar4;
        if ((int)uVar13 < local_2b8.ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
          return pFVar6;
        }
        pFVar12 = local_2b8.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          if ((int)pFVar24[0x2aa43bf].GlobalListLink._padding_ == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = (wchar_t *)pFVar24[0x2aa43bf].GlobalListLink._padding_;
          }
          *(wchar_t **)pFVar12 = pwVar8;
          *(wchar_t **)(pFVar12 + 8) = L"Texture2D";
          *(undefined4 *)(pFVar12 + 0x10) = 0x275;
          *(int *)(pFVar12 + 0x14) = iVar14 + 0x10;
          *(undefined2 *)(pFVar12 + 0x18) = 6;
          *(undefined4 *)(pFVar12 + 0x1c) = 1;
          *(undefined8 *)(pFVar12 + 0x20) = 1;
          *(undefined8 *)(pFVar12 + 0x28) = 0;
        }
        iVar14 = iVar14 + 0x18;
        uVar13 = local_2b8.ArrayNum;
        if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
          uVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
        }
        local_2b8.ArrayNum = uVar13 + 1;
        uVar11 = uVar4;
        if ((int)uVar13 < local_2b8.ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
          return pFVar6;
        }
        pFVar12 = local_2b8.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          if ((int)pFVar24[0x2aa43cf].GlobalListLink._padding_ == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = (wchar_t *)pFVar24[0x2aa43cf].GlobalListLink._padding_;
          }
          *(wchar_t **)pFVar12 = pwVar8;
          *(wchar_t **)(pFVar12 + 8) = L"SamplerState";
          *(undefined4 *)(pFVar12 + 0x10) = 0x278;
          *(int *)(pFVar12 + 0x14) = iVar14;
          *(undefined2 *)(pFVar12 + 0x18) = 8;
          *(undefined4 *)(pFVar12 + 0x1c) = 1;
          *(undefined8 *)(pFVar12 + 0x20) = 1;
          *(undefined8 *)(pFVar12 + 0x28) = 0;
        }
      }
      pFVar6 = (FShaderParametersMetadata *)(ulonglong)(iVar14 + 8);
      pFVar21 = (FShaderParametersMetadata *)(ulonglong)(uVar16 + 1);
      pFVar22 = (FShaderParametersMetadata *)((longlong)&pFVar22->ShaderVariableName + 4);
      pFVar24 = (FShaderParametersMetadata *)&pFVar24->StructTypeName;
    } while ((int)(uVar16 + 1) < (this->UniformTextureCollectionParameters).ArrayNum);
  }
  if (0 < (this->VTStacks).ArrayNum) {
    local_58 = &this->VTStacks;
    local_res10 = (FShaderParametersMetadata *)0x0;
    pFVar21 = pFVar9;
    pFVar22 = pFVar9;
    do {
      pTVar2 = local_58;
      uVar16 = (uint)pFVar22;
      uVar13 = uVar4;
      if ((int)uVar16 < local_58->ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      FVar7 = pTVar2->AllocatorInstance;
      if (((ulonglong)FVar7 & 1) != 0) {
        FVar7 = (ForAnyElementType)
                ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar7 >> 0x18));
      }
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        local_2b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      lVar23 = (longlong)local_2b8.ArrayNum;
      uVar11 = local_2b8.ArrayNum + 1;
      uVar13 = uVar4;
      if (local_2b8.ArrayNum < (int)uVar11) {
        uVar13 = (uint)~local_2b8.ArrayNum >> 0x1f;
      }
      local_2b8.ArrayNum = uVar11;
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
      iVar14 = (int)pFVar6;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar21[0x2aa43ff].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar21[0x2aa43ff].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"Texture2D<uint4>";
        *(undefined4 *)(pFVar12 + 0x10) = 0x281;
        *(int *)(pFVar12 + 0x14) = iVar14;
        *(undefined2 *)(pFVar12 + 0x18) = 5;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      iVar15 = iVar14 + 8;
      if (4 < *(uint *)((longlong)FVar7 + (longlong)local_res10)) {
        if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
          local_2b8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
        }
        lVar23 = (longlong)local_2b8.ArrayNum;
        uVar11 = local_2b8.ArrayNum + 1;
        uVar13 = uVar4;
        if (local_2b8.ArrayNum < (int)uVar11) {
          uVar13 = (uint)~local_2b8.ArrayNum >> 0x1f;
        }
        local_2b8.ArrayNum = uVar11;
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
          return pFVar6;
        }
        pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          if ((int)pFVar21[0x2aa440f].GlobalListLink._padding_ == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = (wchar_t *)pFVar21[0x2aa440f].GlobalListLink._padding_;
          }
          *(wchar_t **)pFVar12 = pwVar8;
          *(wchar_t **)(pFVar12 + 8) = L"Texture2D<uint4>";
          *(undefined4 *)(pFVar12 + 0x10) = 0x285;
          *(int *)(pFVar12 + 0x14) = iVar15;
          *(undefined2 *)(pFVar12 + 0x18) = 5;
          *(undefined4 *)(pFVar12 + 0x1c) = 1;
          *(undefined8 *)(pFVar12 + 0x20) = 1;
          *(undefined8 *)(pFVar12 + 0x28) = 0;
        }
        iVar15 = iVar14 + 0x10;
      }
      uVar13 = local_2b8.ArrayNum;
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        uVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      local_2b8.ArrayNum = uVar13 + 1;
      uVar11 = uVar4;
      if ((int)uVar13 < local_2b8.ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar21[0x2aa441f].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar21[0x2aa441f].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"Texture2D<uint>";
        *(undefined4 *)(pFVar12 + 0x10) = 0x288;
        *(int *)(pFVar12 + 0x14) = iVar15;
        *(undefined2 *)(pFVar12 + 0x18) = 5;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      local_res10 = (FShaderParametersMetadata *)((longlong)local_res10 + 0x28);
      pFVar6 = (FShaderParametersMetadata *)(ulonglong)(iVar15 + 8);
      pFVar22 = (FShaderParametersMetadata *)(ulonglong)(uVar16 + 1);
      pFVar21 = (FShaderParametersMetadata *)&pFVar21->StructTypeName;
    } while ((int)(uVar16 + 1) < (this->VTStacks).ArrayNum);
  }
  pFVar21 = pFVar9;
  pFVar22 = pFVar9;
  if (0 < (this->MaterialCacheTagStacks).ArrayNum) {
    do {
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        local_2b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      lVar23 = (longlong)local_2b8.ArrayNum;
      uVar16 = local_2b8.ArrayNum + 1;
      uVar13 = uVar4;
      if (local_2b8.ArrayNum < (int)uVar16) {
        uVar13 = (uint)~local_2b8.ArrayNum >> 0x1f;
      }
      local_2b8.ArrayNum = uVar16;
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
      iVar14 = (int)pFVar6;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar21[0x2aa448f].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar21[0x2aa448f].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"StructuredBuffer<FMaterialCacheTagEntry>";
        *(undefined4 *)(pFVar12 + 0x10) = 0x290;
        *(int *)(pFVar12 + 0x14) = iVar14;
        *(undefined2 *)(pFVar12 + 0x18) = 6;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      uVar13 = local_2b8.ArrayNum;
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        uVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      local_2b8.ArrayNum = uVar13 + 1;
      uVar16 = uVar4;
      if ((int)uVar13 < local_2b8.ArrayNum) {
        uVar16 = ~uVar13 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar21[0x2aa449f].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar21[0x2aa449f].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"Texture2D<uint4>";
        *(undefined4 *)(pFVar12 + 0x10) = 0x293;
        *(int *)(pFVar12 + 0x14) = iVar14 + 8;
        *(undefined2 *)(pFVar12 + 0x18) = 5;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      pFVar6 = (FShaderParametersMetadata *)(ulonglong)(iVar14 + 0x10);
      pFVar24 = pFVar9;
      do {
        if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
          local_2b8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
        }
        lVar23 = (longlong)local_2b8.ArrayNum;
        uVar16 = local_2b8.ArrayNum + 1;
        uVar13 = uVar4;
        if (local_2b8.ArrayNum < (int)uVar16) {
          uVar13 = (uint)~local_2b8.ArrayNum >> 0x1f;
        }
        local_2b8.ArrayNum = uVar16;
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
          return pFVar6;
        }
        pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          uVar13 = (int)pFVar24 + (int)pFVar22 * 8;
          if (MaterialCacheTagPhysicalNames[uVar13].Data.ArrayNum == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = (wchar_t *)MaterialCacheTagPhysicalNames[uVar13].Data.AllocatorInstance.Data;
          }
          *(wchar_t **)pFVar12 = pwVar8;
          *(wchar_t **)(pFVar12 + 8) = L"Texture2D";
          *(undefined4 *)(pFVar12 + 0x10) = 0x298;
          *(int *)(pFVar12 + 0x14) = (int)pFVar6;
          *(undefined2 *)(pFVar12 + 0x18) = 6;
          *(undefined4 *)(pFVar12 + 0x1c) = 1;
          *(undefined8 *)(pFVar12 + 0x20) = 1;
          *(undefined8 *)(pFVar12 + 0x28) = 0;
        }
        pFVar6 = (FShaderParametersMetadata *)(ulonglong)((int)pFVar6 + 8);
        uVar13 = (int)pFVar24 + 1;
        pFVar24 = (FShaderParametersMetadata *)(ulonglong)uVar13;
      } while (uVar13 < 8);
      uVar13 = (int)pFVar22 + 1;
      pFVar21 = (FShaderParametersMetadata *)&pFVar21->StructTypeName;
      pFVar22 = (FShaderParametersMetadata *)(ulonglong)uVar13;
    } while ((int)uVar13 < (this->MaterialCacheTagStacks).ArrayNum);
  }
  uVar13 = (uint)pFVar6;
  pFVar21 = pFVar9;
  pFVar22 = pFVar9;
  if (0 < this->UniformTextureParameters[5].ArrayNum) {
    do {
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        local_2b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      lVar23 = (longlong)local_2b8.ArrayNum;
      uVar16 = local_2b8.ArrayNum + 1;
      uVar13 = uVar4;
      if (local_2b8.ArrayNum < (int)uVar16) {
        uVar13 = (uint)~local_2b8.ArrayNum >> 0x1f;
      }
      local_2b8.ArrayNum = uVar16;
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
      iVar14 = (int)pFVar6;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar22[0x2aa442f].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar22[0x2aa442f].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"Texture2D";
        *(undefined4 *)(pFVar12 + 0x10) = 0x2a2;
        *(int *)(pFVar12 + 0x14) = iVar14;
        *(undefined2 *)(pFVar12 + 0x18) = 6;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      uVar13 = local_2b8.ArrayNum;
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        uVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      local_2b8.ArrayNum = uVar13 + 1;
      uVar16 = uVar4;
      if ((int)uVar13 < local_2b8.ArrayNum) {
        uVar16 = ~uVar13 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
        return pFVar6;
      }
      pFVar12 = local_2b8.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        if ((int)pFVar22[0x2aa443f].GlobalListLink._padding_ == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)pFVar22[0x2aa443f].GlobalListLink._padding_;
        }
        *(wchar_t **)pFVar12 = pwVar8;
        *(wchar_t **)(pFVar12 + 8) = L"SamplerState";
        *(undefined4 *)(pFVar12 + 0x10) = 0x2a4;
        *(int *)(pFVar12 + 0x14) = iVar14 + 8;
        *(undefined2 *)(pFVar12 + 0x18) = 8;
        *(undefined4 *)(pFVar12 + 0x1c) = 1;
        *(undefined8 *)(pFVar12 + 0x20) = 1;
        *(undefined8 *)(pFVar12 + 0x28) = 0;
      }
      uVar13 = iVar14 + 0x10;
      pFVar6 = (FShaderParametersMetadata *)(ulonglong)uVar13;
      uVar16 = (int)pFVar21 + 1;
      pFVar21 = (FShaderParametersMetadata *)(ulonglong)uVar16;
      pFVar22 = (FShaderParametersMetadata *)&pFVar22->StructTypeName;
    } while ((int)uVar16 < this->UniformTextureParameters[5].ArrayNum);
  }
  if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
    local_2b8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
  }
  lVar23 = (longlong)local_2b8.ArrayNum;
  uVar11 = local_2b8.ArrayNum + 1;
  uVar16 = uVar4;
  if (local_2b8.ArrayNum < (int)uVar11) {
    uVar16 = (uint)~local_2b8.ArrayNum >> 0x1f;
  }
  local_2b8.ArrayNum = uVar11;
  if ((uVar16 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
    return pFVar6;
  }
  pFVar12 = local_2b8.AllocatorInstance.Data + lVar23 * 0x30;
  if (pFVar12 != (FScriptContainerElement *)0x0) {
    *(wchar_t **)(pFVar12 + 8) = L"SamplerState";
    *(wchar_t **)pFVar12 = L"Wrap_WorldGroupSettings";
    *(undefined4 *)(pFVar12 + 0x10) = 0x2a8;
    *(uint *)(pFVar12 + 0x14) = uVar13;
    *(undefined2 *)(pFVar12 + 0x18) = 8;
    *(undefined4 *)(pFVar12 + 0x1c) = 1;
    *(undefined8 *)(pFVar12 + 0x20) = 1;
    *(undefined8 *)(pFVar12 + 0x28) = 0;
  }
  uVar16 = local_2b8.ArrayNum;
  if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
    uVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
  }
  local_2b8.ArrayNum = uVar16 + 1;
  if ((int)uVar16 < (int)(uVar16 + 1)) {
    uVar4 = ~uVar16 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FShaderParametersMetadata *)(*pcVar1)();
    return pFVar6;
  }
  pFVar12 = local_2b8.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x30;
  if (pFVar12 != (FScriptContainerElement *)0x0) {
    *(wchar_t **)(pFVar12 + 8) = L"SamplerState";
    *(wchar_t **)pFVar12 = L"Clamp_WorldGroupSettings";
    *(undefined4 *)(pFVar12 + 0x10) = 0x2ab;
    *(uint *)(pFVar12 + 0x14) = uVar13 + 8;
    *(undefined2 *)(pFVar12 + 0x18) = 8;
    *(undefined4 *)(pFVar12 + 0x1c) = 1;
    *(undefined8 *)(pFVar12 + 0x20) = 1;
    *(undefined8 *)(pFVar12 + 0x28) = 0;
  }
  local_d8.Packed = 0;
  local_d0[0] = 0;
  local_d0[1] = 0;
  UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_d8.Frozen,local_d0,local_d0 + 1);
  TVar10 = local_d8;
  if ((local_d8.Packed & 1) != 0) {
    TVar10.UnfrozenPtr =
         (FScriptContainerElement *)((longlong)&local_d8 + ((longlong)local_d8.Packed >> 0x18));
  }
  FGenericPlatformString::Memcpy(TVar10.UnfrozenPtr,L"Material",0x12);
  local_c8.Packed = 0;
  local_c0 = 0;
  local_b8.Packed = 0;
  local_b0 = 0;
  local_a8.Packed = 0;
  local_a0 = 0;
  local_98.Packed = 0;
  local_90 = 0;
  local_88.Packed = 0;
  local_80 = 0;
  local_78.Packed = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0x1ffffff;
  local_5c = 0;
  FRHIUniformBufferLayoutInitializer::operator=
            (&this->UniformBufferLayoutInitializer,
             (FRHIUniformBufferLayoutInitializer *)&local_d8.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_78.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_88.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_98.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_a8.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_b8.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_c8.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_d8.Frozen);
  pFVar6 = ::operator_new(0x80);
  if (pFVar6 != (FShaderParametersMetadata *)0x0) {
    pFVar9 = FShaderParametersMetadata::FShaderParametersMetadata
                       (pFVar6,DataDrivenUniformBuffer,Shader,L"Material",L"MaterialUniforms",
                        L"Material",(wchar_t *)0x0,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                        ,0x2ba,uVar13 + 0x1f & 0xfffffff0,&local_2b8,false,
                        &this->UniformBufferLayoutInitializer,None);
  }
  if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  return pFVar9;
}

// FillUniformBuffer @ 147fc8260

void __thiscall
FUniformExpressionSet::FillUniformBuffer
          (FUniformExpressionSet *this,FMaterialRenderContext *param_1,
          FUniformExpressionCache *param_2,FRHIUniformBufferLayout *param_3,uchar *param_4,
          int param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<IAllocatedVirtualTexture_*_const,int> local_18;
  
  pFVar2 = (param_2->AllocatedVTs).AllocatorInstance.Data;
  iVar1 = (param_2->AllocatedVTs).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (IAllocatedVirtualTexture **)pFVar2;
  FillUniformBuffer(this,param_1,&local_18,param_3,param_4,param_5);
  return;
}

// FillUniformBuffer @ 147fc8310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FUniformExpressionSet::FillUniformBuffer
          (FUniformExpressionSet *this,FMaterialRenderContext *param_1,
          TArrayView<IAllocatedVirtualTexture_*_const,int> *param_2,FRHIUniformBufferLayout *param_3
          ,uchar *param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  undefined1 uVar6;
  FValueComponent FVar3;
  ITextData *pIVar4;
  FMaterialRenderProxy *pFVar5;
  code *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  void *pvVar10;
  UTexture *pUVar11;
  FRHIUniformBufferLayout *pFVar12;
  bool bVar13;
  EValueComponentType EVar14;
  EValueType EVar15;
  char cVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  FVirtualTextureCollectionResource *this_00;
  FIndirectVirtualTextureUniform *pFVar21;
  IRendererModule *pIVar22;
  longlong *plVar23;
  FTextureRenderResources *this_01;
  FType *pFVar24;
  ForElementType<UE::Shader::FValueComponent> FVar25;
  FPreshaderValue *pFVar26;
  FValueTypeDescription *pFVar27;
  FMaterialTextureParameterInfo *pFVar28;
  UClass *pUVar29;
  undefined8 *puVar30;
  FText *pFVar31;
  FText *pFVar32;
  FText *pFVar33;
  FTextFormat *pFVar34;
  FOutputDeviceRedirector *this_02;
  FTextureResource *pFVar35;
  FRHISamplerState *pFVar36;
  FExternalTextureRegistry *this_03;
  FTextureCollectionResource *pFVar37;
  ForAnyElementType FVar38;
  FRHITexture *pFVar39;
  TConsoleVariableData<int> *pTVar40;
  IAllocatedVirtualTexture *pIVar41;
  TRefCountPtr<FRHISamplerState> TVar42;
  undefined1 *puVar43;
  ForAnyElementType FVar44;
  wchar_t *pwVar45;
  FSharedSamplerState *pFVar46;
  TRefCountPtr<FRHISamplerState> *pTVar47;
  FRHIShaderResourceView *pFVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  int iVar52;
  ForAnyElementType FVar53;
  FMemoryImageMaterialParameterInfo *pFVar54;
  uint *puVar55;
  longlong lVar56;
  TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_> *pTVar57;
  uchar *puVar58;
  uint *puVar59;
  longlong lVar60;
  uint *puVar61;
  int iVar62;
  TIntVector4<unsigned_int> *pTVar63;
  int *piVar64;
  ulonglong uVar65;
  longlong lVar66;
  FScriptName *this_04;
  undefined1 auStackY_aa8 [32];
  uint *local_a58;
  TIntVector4<unsigned_int> *local_a40;
  undefined1 local_a38;
  undefined1 local_a37;
  undefined1 local_a36;
  undefined1 local_a35;
  uint local_a34;
  int *local_a30;
  UTexture *local_a28;
  FRHIUniformBufferLayout *local_a20;
  int local_a18;
  uchar *local_a10;
  uint *local_a08;
  TArrayView<IAllocatedVirtualTexture_*_const,int> *local_a00;
  uint local_9f8;
  uint local_9f4;
  uint local_9f0;
  ushort local_9ec;
  undefined2 local_9ea;
  uint local_9e8 [2];
  UTexture *local_9e0;
  UTexture *local_9d8;
  TRefCountPtr<FRHISamplerState> local_9d0;
  ushort local_9c8;
  undefined2 local_9c6;
  uint *local_9b8;
  UTexture *local_9a8;
  UTexture *local_9a0;
  UTexture *local_998;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_990;
  UTextureCollection *local_980;
  TRefCountPtr<FRHITexture> local_978;
  UTextureCollection *local_970;
  uint local_968;
  URuntimeVirtualTexture *local_960;
  uint local_958 [2];
  UTexture *local_950;
  URuntimeVirtualTexture *local_948;
  USparseVolumeTexture *local_940;
  USparseVolumeTexture *local_938;
  FName local_930;
  FName local_928 [2];
  TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_> *local_918;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  FName local_8d8;
  FName local_8d0;
  FScriptName *local_8c8;
  FString local_8c0;
  FString local_8b0;
  FPreshaderType local_8a0;
  FValueComponent *local_880;
  undefined8 uStack_878;
  FTextFormat local_870;
  FText local_860;
  UTexture **local_850;
  FMaterialRenderContext *local_848;
  uint *local_840;
  uint *local_838;
  undefined8 local_830;
  undefined8 uStack_828;
  FString local_820;
  void *local_810 [2];
  FText local_800;
  void *local_7f0 [2];
  FGuid local_7e0;
  FText local_7d0;
  FText local_7c0;
  FTextFormat local_7b0;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  FType local_738;
  FPreshaderDataContext local_718;
  FPreshaderDataContext local_6d8;
  FPreshaderValue local_698;
  longlong local_668;
  longlong local_660;
  undefined1 local_658 [64];
  undefined1 *local_618;
  int local_610;
  FFormatArgumentValue local_608;
  undefined4 local_5e8;
  longlong local_5e0;
  longlong *local_5d8;
  undefined4 local_5d0;
  undefined4 local_5c8;
  FText local_5b8;
  FValue local_5a8;
  FValue local_500;
  FValue local_458;
  FPreshaderStack local_3b0;
  FIndirectVirtualTextureUniform local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_aa8;
  local_a10 = param_4;
  local_a20 = param_3;
  local_a00 = param_2;
  bVar13 = IsInParallelRenderingThread();
  if ((!bVar13) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                          ,0x409,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (param_3->ConstantBufferSize != 0) {
    if ((param_4 + param_5 < param_4) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferCursor <= TempBuffer + TempBufferSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                            ,0x411,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((this->UniformTextureCollectionParameters).ArrayNum != 0) {
      iVar62 = (this->UniformTextureCollectionParameters).ArrayNum;
      FVar38 = (this->UniformTextureCollectionParameters).AllocatorInstance;
      if (((ulonglong)FVar38 & 1) != 0) {
        FVar38 = (ForAnyElementType)
                 ((longlong)&(this->UniformTextureCollectionParameters).AllocatorInstance.field_0x0
                 + ((longlong)FVar38 >> 0x18));
      }
      FVar53 = (ForAnyElementType)((longlong)iVar62 * 0x1c + (longlong)FVar38);
      while( true ) {
        if ((this->UniformTextureCollectionParameters).ArrayNum != iVar62) {
          local_a38 = 0;
          `TCheckedPointerIterator<FMaterialTextureCollectionParameterInfo_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_a38);
        }
        param_2 = local_a00;
        if (FVar38 == FVar53) break;
        pTVar63 = (TIntVector4<unsigned_int> *)param_4;
        if (*(char *)((longlong)FVar38 + 0x18) == '\0') {
LAB_147fc8519:
          FVar38 = (ForAnyElementType)((longlong)FVar38 + 0x1c);
          param_4 = (uchar *)pTVar63;
        }
        else {
          iVar20 = *(int *)((longlong)FVar38 + 0x14);
          local_980 = (UTextureCollection *)0x0;
          if ((((*(int *)FVar38 == 0) && (*(int *)((longlong)FVar38 + 8) == 0)) ||
              (param_1->MaterialRenderProxy == (FMaterialRenderProxy *)0x0)) ||
             (bVar13 = FMaterialRenderProxy::GetTextureCollectionValue
                                 (param_1->MaterialRenderProxy,
                                  (FMemoryImageMaterialParameterInfo *)FVar38,&local_980,param_1),
             !bVar13)) {
            local_980 = GetIndexedTextureCollection(param_1->Material,iVar20);
          }
          pTVar63 = (TIntVector4<unsigned_int> *)((longlong)param_4 + 0x40);
          this_00 = (FVirtualTextureCollectionResource *)UTextureCollection::GetResource(local_980);
          if (this_00 == (FVirtualTextureCollectionResource *)0x0) {
            *(undefined8 *)&((TIntVector4<unsigned_int> *)param_4)->field0_0x0 = 0;
            *(undefined8 *)((longlong)&((TIntVector4<unsigned_int> *)param_4)->field0_0x0 + 8) = 0;
            *(undefined8 *)&((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x10))->field0_0x0 =
                 0;
            *(undefined8 *)
             ((longlong)&((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x10))->field0_0x0 + 8)
                 = 0;
            *(undefined8 *)&((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x20))->field0_0x0 =
                 0;
            *(undefined8 *)
             ((longlong)&((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x20))->field0_0x0 + 8)
                 = 0;
            *(undefined8 *)&((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x30))->field0_0x0 =
                 0;
            *(undefined8 *)
             ((longlong)&((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x30))->field0_0x0 + 8)
                 = 0;
            local_778 = 0;
            uStack_770 = 0;
            local_768 = 0;
            uStack_760 = 0;
            local_758 = 0;
            uStack_750 = 0;
            local_748 = 0;
            uStack_740 = 0;
            goto LAB_147fc8519;
          }
          pFVar21 = FVirtualTextureCollectionResource::GetVirtualPackedUniform(this_00,&local_88);
          FVar38 = (ForAnyElementType)((longlong)FVar38 + 0x1c);
          uVar9 = *(undefined8 *)((longlong)&(pFVar21->Pad).field0_0x0 + 8);
          *(undefined8 *)&((TIntVector4<unsigned_int> *)param_4)->field0_0x0 =
               *(undefined8 *)&(pFVar21->Pad).field0_0x0;
          *(undefined8 *)((longlong)&((TIntVector4<unsigned_int> *)param_4)->field0_0x0 + 8) = uVar9
          ;
          uVar9 = *(undefined8 *)((longlong)&pFVar21->PackedPageTableUniform[0].field0_0x0 + 8);
          *(undefined8 *)&((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x10))->field0_0x0 =
               *(undefined8 *)&pFVar21->PackedPageTableUniform[0].field0_0x0;
          *(undefined8 *)
           ((longlong)&((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x10))->field0_0x0 + 8) =
               uVar9;
          uVar9 = *(undefined8 *)((longlong)&pFVar21->PackedPageTableUniform[1].field0_0x0 + 8);
          *(undefined8 *)&((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x20))->field0_0x0 =
               *(undefined8 *)&pFVar21->PackedPageTableUniform[1].field0_0x0;
          *(undefined8 *)
           ((longlong)&((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x20))->field0_0x0 + 8) =
               uVar9;
          uVar49 = (pFVar21->PackedUniform).field0_0x0._s_0.Y;
          uVar51 = (pFVar21->PackedUniform).field0_0x0._s_0.Z;
          uVar8 = (pFVar21->PackedUniform).field0_0x0._s_0.W;
          (((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x30))->field0_0x0)._s_0.X =
               (pFVar21->PackedUniform).field0_0x0._s_0.X;
          (((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x30))->field0_0x0)._s_0.Y = uVar49;
          (((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x30))->field0_0x0)._s_0.Z = uVar51;
          (((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x30))->field0_0x0)._s_0.W = uVar8;
          param_4 = (uchar *)pTVar63;
        }
      }
    }
    if ((param_2->ArrayNum != (this->VTStacks).ArrayNum) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("AllocatedVTs.Num() == VTStacks.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                            ,0x42f,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar49 = 0;
    local_a40 = (TIntVector4<unsigned_int> *)param_4;
    if (0 < (this->VTStacks).ArrayNum) {
      lVar56 = 0;
      do {
        uVar51 = 0;
        if ((int)uVar49 < param_2->ArrayNum) {
          uVar51 = ~uVar49 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar23 = *(longlong **)(lVar56 + (longlong)param_2->DataPtr);
        if (plVar23 == (longlong *)0x0) {
          local_908 = 0;
          uStack_900 = 0;
          local_8f8 = 0;
          uStack_8f0 = 0;
          *(undefined8 *)&((TIntVector4<unsigned_int> *)param_4)->field0_0x0 = 0;
          *(undefined8 *)((longlong)&((TIntVector4<unsigned_int> *)param_4)->field0_0x0 + 8) = 0;
          *(undefined8 *)&((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x10))->field0_0x0 = 0;
          *(undefined8 *)
           ((longlong)&((TIntVector4<unsigned_int> *)((longlong)param_4 + 0x10))->field0_0x0 + 8) =
               0;
        }
        else {
          (**(code **)(*plVar23 + 0x38))(plVar23,param_4);
        }
        param_4 = (uchar *)((longlong)param_4 + 0x20);
        uVar49 = uVar49 + 1;
        lVar56 = lVar56 + 8;
        local_a40 = (TIntVector4<unsigned_int> *)param_4;
      } while ((int)uVar49 < (this->VTStacks).ArrayNum);
    }
    uVar49 = 0;
    if (0 < (this->MaterialCacheTagStacks).ArrayNum) {
      do {
        uVar51 = 0;
        if ((int)uVar49 < (this->MaterialCacheTagStacks).ArrayNum) {
          uVar51 = ~uVar49 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar38 = (this->MaterialCacheTagStacks).AllocatorInstance;
        if (((ulonglong)FVar38 & 1) != 0) {
          FVar38 = (ForAnyElementType)
                   ((longlong)&(this->MaterialCacheTagStacks).AllocatorInstance.field_0x0 +
                   ((longlong)FVar38 >> 0x18));
        }
        pIVar22 = GetRendererModule();
        plVar23 = (longlong *)(**(code **)((longlong)*pIVar22 + 0x138))(pIVar22);
        (**(code **)(*plVar23 + 0x10))
                  (plVar23,&local_830,(longlong)(int)uVar49 * 0x10 + (longlong)FVar38);
        uVar49 = uVar49 + 1;
        *(undefined8 *)&local_a40->field0_0x0 = local_830;
        *(undefined8 *)((longlong)&local_a40->field0_0x0 + 8) = uStack_828;
        local_a40 = local_a40 + 1;
      } while ((int)uVar49 < (this->MaterialCacheTagStacks).ArrayNum);
    }
    uVar49 = 0;
    if (0 < this->UniformTextureParameters[5].ArrayNum) {
      lVar56 = 0;
      pTVar63 = local_a40;
      do {
        uVar51 = 0;
        if ((int)uVar49 < this->UniformTextureParameters[5].ArrayNum) {
          uVar51 = ~uVar49 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar38 = this->UniformTextureParameters[5].AllocatorInstance;
        if (((ulonglong)FVar38 & 1) != 0) {
          FVar38 = (ForAnyElementType)
                   ((longlong)&this->UniformTextureParameters[5].AllocatorInstance.field_0x0 +
                   ((longlong)FVar38 >> 0x18));
        }
        local_950 = (UTexture *)0x0;
        local_a40 = pTVar63 + 1;
        GetTextureValue(this,Virtual,uVar49,param_1,param_1->Material,&local_950);
        if (local_950 == (UTexture *)0x0) {
          local_948 = (URuntimeVirtualTexture *)0x0;
          GetTextureValue(this,uVar49,param_1,param_1->Material,&local_948);
          if (local_948 != (URuntimeVirtualTexture *)0x0) {
            pIVar41 = URuntimeVirtualTexture::GetAllocatedVirtualTexture(local_948);
            if (pIVar41 == (IAllocatedVirtualTexture *)0x0) {
              local_8e8 = 0;
              uStack_8e0 = 0;
              *(undefined8 *)&pTVar63->field0_0x0 = 0;
              *(undefined8 *)((longlong)&pTVar63->field0_0x0 + 8) = 0;
            }
            else {
              (**(code **)(pIVar41->_padding_ + 0x40))
                        (pIVar41,pTVar63,*(undefined1 *)((longlong)FVar38 + 0x19U + lVar56));
            }
          }
        }
        else {
          GetVTStackAndLayerIndex(this,(int)&local_9c8);
          uVar65 = (ulonglong)local_9c8;
          if ((local_a00->ArrayNum <= (int)(uint)local_9c8) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pIVar41 = local_a00->DataPtr[uVar65];
          if (pIVar41 != (IAllocatedVirtualTexture *)0x0) {
            (**(code **)(pIVar41->_padding_ + 0x40))(pIVar41,pTVar63,local_9c6);
          }
        }
        uVar49 = uVar49 + 1;
        lVar56 = lVar56 + 0x1c;
        pTVar63 = local_a40;
      } while ((int)uVar49 < this->UniformTextureParameters[5].ArrayNum);
    }
    uVar49 = 0;
    if (0 < this->UniformTextureParameters[6].ArrayNum) {
      do {
        uVar51 = 0;
        if ((int)uVar49 < this->UniformTextureParameters[6].ArrayNum) {
          uVar51 = ~uVar49 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_940 = (USparseVolumeTexture *)0x0;
        pTVar63 = local_a40 + 2;
        GetTextureValue(this,uVar49,param_1,param_1->Material,&local_940);
        if ((local_940 == (USparseVolumeTexture *)0x0) ||
           (this_01 = (FTextureRenderResources *)(**(code **)(*(longlong *)local_940 + 0x310))(),
           this_01 == (FTextureRenderResources *)0x0)) {
          local_7a0 = 0;
          uStack_798 = 0;
          *(undefined8 *)&local_a40->field0_0x0 = 0;
          *(undefined8 *)((longlong)&local_a40->field0_0x0 + 8) = 0;
          local_790 = 0;
          uStack_788 = 0;
          *(undefined8 *)&local_a40[1].field0_0x0 = 0;
          *(undefined8 *)((longlong)&local_a40[1].field0_0x0 + 8) = 0;
        }
        else {
          UE::SVT::FTextureRenderResources::GetPackedUniforms(this_01,local_a40,local_a40 + 1);
        }
        uVar49 = uVar49 + 1;
        local_a40 = pTVar63;
      } while ((int)uVar49 < this->UniformTextureParameters[6].ArrayNum);
    }
    FVar38 = (this->UniformParameterEvaluations).AllocatorInstance;
    iVar62 = (this->UniformParameterEvaluations).ArrayNum;
    if (((ulonglong)FVar38 & 1) != 0) {
      FVar38 = (ForAnyElementType)
               ((longlong)
                &(((FUniformExpressionSet *)(this->UniformTextureParameters + -4))->
                 UniformParameterEvaluations).AllocatorInstance.field_0x0 +
               ((longlong)FVar38 >> 0x18));
    }
    FVar53 = (ForAnyElementType)((longlong)FVar38 + (longlong)iVar62 * 4);
    while( true ) {
      if ((this->UniformParameterEvaluations).ArrayNum != iVar62) {
        local_a37 = 0;
        `TCheckedPointerIterator<FMaterialUniformParameterEvaluation_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_a37);
      }
      if (FVar38 == FVar53) break;
      uVar2 = *(ushort *)FVar38;
      if (((this->UniformNumericParameters).ArrayNum <= (int)(uint)uVar2) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar44 = (this->UniformNumericParameters).AllocatorInstance;
      if (((ulonglong)FVar44 & 1) != 0) {
        FVar44 = (ForAnyElementType)
                 ((longlong)&(this->UniformNumericParameters).AllocatorInstance.field_0x0 +
                 ((longlong)FVar44 >> 0x18));
      }
      local_5a8.Component.ArrayMax = 0x10;
      local_5a8.Type.StructType = (FStructType *)0x0;
      pFVar54 = (FMemoryImageMaterialParameterInfo *)((ulonglong)uVar2 * 0x1c + (longlong)FVar44);
      local_5a8.Type.ObjectType.ComparisonIndex.Value = 0;
      local_5a8.Type.ObjectType.Number = 0;
      local_5a8.Type._16_8_ = local_5a8.Type._16_8_ & 0xffffffffffffff00;
      local_5a8.Component.AllocatorInstance.SecondaryData =
           (ForElementType<UE::Shader::FValueComponent>)0x0;
      local_5a8.Component.ArrayNum = 0;
      if ((param_1->MaterialRenderProxy == (FMaterialRenderProxy *)0x0) ||
         (bVar13 = FMaterialRenderProxy::GetParameterShaderValue
                             (param_1->MaterialRenderProxy,
                              (EMaterialParameterType)pFVar54[1].Name.ComparisonIndex.Value,pFVar54,
                              &local_5a8,param_1), !bVar13)) {
        FVar44 = (this->DefaultValues).AllocatorInstance;
        uVar49 = pFVar54[1].Name.DisplayIndex.Value;
        if (((ulonglong)FVar44 & 1) != 0) {
          FVar44 = (ForAnyElementType)
                   ((longlong)&(this->DefaultValues).AllocatorInstance.field_0x0 +
                   ((longlong)FVar44 >> 0x18));
        }
        pFVar24 = GetShaderValueType(&local_738,
                                     (EMaterialParameterType)pFVar54[1].Name.ComparisonIndex.Value);
        UE::Shader::FValue::FromMemoryImage
                  (&local_500,pFVar24->ValueType,(void *)((longlong)FVar44 + (ulonglong)uVar49),
                   (uint *)0x0);
        local_5a8.Type.ValueType = local_500.Type.ValueType;
        local_5a8.Type._17_7_ = local_500.Type._17_7_;
        local_5a8.Type.StructType = local_500.Type.StructType;
        local_5a8.Type.ObjectType = local_500.Type.ObjectType;
        if (local_500.Component.AllocatorInstance.SecondaryData ==
            (ForElementType<UE::Shader::FValueComponent>)0x0) {
          local_5a8.Component.AllocatorInstance.InlineData[0] =
               local_500.Component.AllocatorInstance.InlineData[0];
          local_5a8.Component.AllocatorInstance.InlineData[1] =
               local_500.Component.AllocatorInstance.InlineData[1];
          local_5a8.Component.AllocatorInstance.InlineData[2] =
               local_500.Component.AllocatorInstance.InlineData[2];
          local_5a8.Component.AllocatorInstance.InlineData[3] =
               local_500.Component.AllocatorInstance.InlineData[3];
          local_5a8.Component.AllocatorInstance.InlineData[4] =
               local_500.Component.AllocatorInstance.InlineData[4];
          local_5a8.Component.AllocatorInstance.InlineData[5] =
               local_500.Component.AllocatorInstance.InlineData[5];
          local_5a8.Component.AllocatorInstance.InlineData[6] =
               local_500.Component.AllocatorInstance.InlineData[6];
          local_5a8.Component.AllocatorInstance.InlineData[7] =
               local_500.Component.AllocatorInstance.InlineData[7];
          local_5a8.Component.AllocatorInstance.InlineData[8] =
               local_500.Component.AllocatorInstance.InlineData[8];
          local_5a8.Component.AllocatorInstance.InlineData[9] =
               local_500.Component.AllocatorInstance.InlineData[9];
          local_5a8.Component.AllocatorInstance.InlineData[10] =
               local_500.Component.AllocatorInstance.InlineData[10];
          local_5a8.Component.AllocatorInstance.InlineData[0xb] =
               local_500.Component.AllocatorInstance.InlineData[0xb];
          local_5a8.Component.AllocatorInstance.InlineData[0xc] =
               local_500.Component.AllocatorInstance.InlineData[0xc];
          local_5a8.Component.AllocatorInstance.InlineData[0xd] =
               local_500.Component.AllocatorInstance.InlineData[0xd];
          local_5a8.Component.AllocatorInstance.InlineData[0xe] =
               local_500.Component.AllocatorInstance.InlineData[0xe];
          local_5a8.Component.AllocatorInstance.InlineData[0xf] =
               local_500.Component.AllocatorInstance.InlineData[0xf];
          local_5a8.Component.AllocatorInstance.InlineData[0x10] =
               local_500.Component.AllocatorInstance.InlineData[0x10];
          local_5a8.Component.AllocatorInstance.InlineData[0x11] =
               local_500.Component.AllocatorInstance.InlineData[0x11];
          local_5a8.Component.AllocatorInstance.InlineData[0x12] =
               local_500.Component.AllocatorInstance.InlineData[0x12];
          local_5a8.Component.AllocatorInstance.InlineData[0x13] =
               local_500.Component.AllocatorInstance.InlineData[0x13];
          local_5a8.Component.AllocatorInstance.InlineData[0x14] =
               local_500.Component.AllocatorInstance.InlineData[0x14];
          local_5a8.Component.AllocatorInstance.InlineData[0x15] =
               local_500.Component.AllocatorInstance.InlineData[0x15];
          local_5a8.Component.AllocatorInstance.InlineData[0x16] =
               local_500.Component.AllocatorInstance.InlineData[0x16];
          local_5a8.Component.AllocatorInstance.InlineData[0x17] =
               local_500.Component.AllocatorInstance.InlineData[0x17];
          local_5a8.Component.AllocatorInstance.InlineData[0x18] =
               local_500.Component.AllocatorInstance.InlineData[0x18];
          local_5a8.Component.AllocatorInstance.InlineData[0x19] =
               local_500.Component.AllocatorInstance.InlineData[0x19];
          local_5a8.Component.AllocatorInstance.InlineData[0x1a] =
               local_500.Component.AllocatorInstance.InlineData[0x1a];
          local_5a8.Component.AllocatorInstance.InlineData[0x1b] =
               local_500.Component.AllocatorInstance.InlineData[0x1b];
          local_5a8.Component.AllocatorInstance.InlineData[0x1c] =
               local_500.Component.AllocatorInstance.InlineData[0x1c];
          local_5a8.Component.AllocatorInstance.InlineData[0x1d] =
               local_500.Component.AllocatorInstance.InlineData[0x1d];
          local_5a8.Component.AllocatorInstance.InlineData[0x1e] =
               local_500.Component.AllocatorInstance.InlineData[0x1e];
          local_5a8.Component.AllocatorInstance.InlineData[0x1f] =
               local_500.Component.AllocatorInstance.InlineData[0x1f];
          local_5a8.Component.AllocatorInstance.InlineData[0x20] =
               local_500.Component.AllocatorInstance.InlineData[0x20];
          local_5a8.Component.AllocatorInstance.InlineData[0x21] =
               local_500.Component.AllocatorInstance.InlineData[0x21];
          local_5a8.Component.AllocatorInstance.InlineData[0x22] =
               local_500.Component.AllocatorInstance.InlineData[0x22];
          local_5a8.Component.AllocatorInstance.InlineData[0x23] =
               local_500.Component.AllocatorInstance.InlineData[0x23];
          local_5a8.Component.AllocatorInstance.InlineData[0x24] =
               local_500.Component.AllocatorInstance.InlineData[0x24];
          local_5a8.Component.AllocatorInstance.InlineData[0x25] =
               local_500.Component.AllocatorInstance.InlineData[0x25];
          local_5a8.Component.AllocatorInstance.InlineData[0x26] =
               local_500.Component.AllocatorInstance.InlineData[0x26];
          local_5a8.Component.AllocatorInstance.InlineData[0x27] =
               local_500.Component.AllocatorInstance.InlineData[0x27];
          local_5a8.Component.AllocatorInstance.InlineData[0x28] =
               local_500.Component.AllocatorInstance.InlineData[0x28];
          local_5a8.Component.AllocatorInstance.InlineData[0x29] =
               local_500.Component.AllocatorInstance.InlineData[0x29];
          local_5a8.Component.AllocatorInstance.InlineData[0x2a] =
               local_500.Component.AllocatorInstance.InlineData[0x2a];
          local_5a8.Component.AllocatorInstance.InlineData[0x2b] =
               local_500.Component.AllocatorInstance.InlineData[0x2b];
          local_5a8.Component.AllocatorInstance.InlineData[0x2c] =
               local_500.Component.AllocatorInstance.InlineData[0x2c];
          local_5a8.Component.AllocatorInstance.InlineData[0x2d] =
               local_500.Component.AllocatorInstance.InlineData[0x2d];
          local_5a8.Component.AllocatorInstance.InlineData[0x2e] =
               local_500.Component.AllocatorInstance.InlineData[0x2e];
          local_5a8.Component.AllocatorInstance.InlineData[0x2f] =
               local_500.Component.AllocatorInstance.InlineData[0x2f];
          local_5a8.Component.AllocatorInstance.InlineData[0x30] =
               local_500.Component.AllocatorInstance.InlineData[0x30];
          local_5a8.Component.AllocatorInstance.InlineData[0x31] =
               local_500.Component.AllocatorInstance.InlineData[0x31];
          local_5a8.Component.AllocatorInstance.InlineData[0x32] =
               local_500.Component.AllocatorInstance.InlineData[0x32];
          local_5a8.Component.AllocatorInstance.InlineData[0x33] =
               local_500.Component.AllocatorInstance.InlineData[0x33];
          local_5a8.Component.AllocatorInstance.InlineData[0x34] =
               local_500.Component.AllocatorInstance.InlineData[0x34];
          local_5a8.Component.AllocatorInstance.InlineData[0x35] =
               local_500.Component.AllocatorInstance.InlineData[0x35];
          local_5a8.Component.AllocatorInstance.InlineData[0x36] =
               local_500.Component.AllocatorInstance.InlineData[0x36];
          local_5a8.Component.AllocatorInstance.InlineData[0x37] =
               local_500.Component.AllocatorInstance.InlineData[0x37];
          local_5a8.Component.AllocatorInstance.InlineData[0x38] =
               local_500.Component.AllocatorInstance.InlineData[0x38];
          local_5a8.Component.AllocatorInstance.InlineData[0x39] =
               local_500.Component.AllocatorInstance.InlineData[0x39];
          local_5a8.Component.AllocatorInstance.InlineData[0x3a] =
               local_500.Component.AllocatorInstance.InlineData[0x3a];
          local_5a8.Component.AllocatorInstance.InlineData[0x3b] =
               local_500.Component.AllocatorInstance.InlineData[0x3b];
          local_5a8.Component.AllocatorInstance.InlineData[0x3c] =
               local_500.Component.AllocatorInstance.InlineData[0x3c];
          local_5a8.Component.AllocatorInstance.InlineData[0x3d] =
               local_500.Component.AllocatorInstance.InlineData[0x3d];
          local_5a8.Component.AllocatorInstance.InlineData[0x3e] =
               local_500.Component.AllocatorInstance.InlineData[0x3e];
          local_5a8.Component.AllocatorInstance.InlineData[0x3f] =
               local_500.Component.AllocatorInstance.InlineData[0x3f];
          local_5a8.Component.AllocatorInstance.InlineData[0x40] =
               local_500.Component.AllocatorInstance.InlineData[0x40];
          local_5a8.Component.AllocatorInstance.InlineData[0x41] =
               local_500.Component.AllocatorInstance.InlineData[0x41];
          local_5a8.Component.AllocatorInstance.InlineData[0x42] =
               local_500.Component.AllocatorInstance.InlineData[0x42];
          local_5a8.Component.AllocatorInstance.InlineData[0x43] =
               local_500.Component.AllocatorInstance.InlineData[0x43];
          local_5a8.Component.AllocatorInstance.InlineData[0x44] =
               local_500.Component.AllocatorInstance.InlineData[0x44];
          local_5a8.Component.AllocatorInstance.InlineData[0x45] =
               local_500.Component.AllocatorInstance.InlineData[0x45];
          local_5a8.Component.AllocatorInstance.InlineData[0x46] =
               local_500.Component.AllocatorInstance.InlineData[0x46];
          local_5a8.Component.AllocatorInstance.InlineData[0x47] =
               local_500.Component.AllocatorInstance.InlineData[0x47];
          local_5a8.Component.AllocatorInstance.InlineData[0x48] =
               local_500.Component.AllocatorInstance.InlineData[0x48];
          local_5a8.Component.AllocatorInstance.InlineData[0x49] =
               local_500.Component.AllocatorInstance.InlineData[0x49];
          local_5a8.Component.AllocatorInstance.InlineData[0x4a] =
               local_500.Component.AllocatorInstance.InlineData[0x4a];
          local_5a8.Component.AllocatorInstance.InlineData[0x4b] =
               local_500.Component.AllocatorInstance.InlineData[0x4b];
          local_5a8.Component.AllocatorInstance.InlineData[0x4c] =
               local_500.Component.AllocatorInstance.InlineData[0x4c];
          local_5a8.Component.AllocatorInstance.InlineData[0x4d] =
               local_500.Component.AllocatorInstance.InlineData[0x4d];
          local_5a8.Component.AllocatorInstance.InlineData[0x4e] =
               local_500.Component.AllocatorInstance.InlineData[0x4e];
          local_5a8.Component.AllocatorInstance.InlineData[0x4f] =
               local_500.Component.AllocatorInstance.InlineData[0x4f];
          local_5a8.Component.AllocatorInstance.InlineData[0x50] =
               local_500.Component.AllocatorInstance.InlineData[0x50];
          local_5a8.Component.AllocatorInstance.InlineData[0x51] =
               local_500.Component.AllocatorInstance.InlineData[0x51];
          local_5a8.Component.AllocatorInstance.InlineData[0x52] =
               local_500.Component.AllocatorInstance.InlineData[0x52];
          local_5a8.Component.AllocatorInstance.InlineData[0x53] =
               local_500.Component.AllocatorInstance.InlineData[0x53];
          local_5a8.Component.AllocatorInstance.InlineData[0x54] =
               local_500.Component.AllocatorInstance.InlineData[0x54];
          local_5a8.Component.AllocatorInstance.InlineData[0x55] =
               local_500.Component.AllocatorInstance.InlineData[0x55];
          local_5a8.Component.AllocatorInstance.InlineData[0x56] =
               local_500.Component.AllocatorInstance.InlineData[0x56];
          local_5a8.Component.AllocatorInstance.InlineData[0x57] =
               local_500.Component.AllocatorInstance.InlineData[0x57];
          local_5a8.Component.AllocatorInstance.InlineData[0x58] =
               local_500.Component.AllocatorInstance.InlineData[0x58];
          local_5a8.Component.AllocatorInstance.InlineData[0x59] =
               local_500.Component.AllocatorInstance.InlineData[0x59];
          local_5a8.Component.AllocatorInstance.InlineData[0x5a] =
               local_500.Component.AllocatorInstance.InlineData[0x5a];
          local_5a8.Component.AllocatorInstance.InlineData[0x5b] =
               local_500.Component.AllocatorInstance.InlineData[0x5b];
          local_5a8.Component.AllocatorInstance.InlineData[0x5c] =
               local_500.Component.AllocatorInstance.InlineData[0x5c];
          local_5a8.Component.AllocatorInstance.InlineData[0x5d] =
               local_500.Component.AllocatorInstance.InlineData[0x5d];
          local_5a8.Component.AllocatorInstance.InlineData[0x5e] =
               local_500.Component.AllocatorInstance.InlineData[0x5e];
          local_5a8.Component.AllocatorInstance.InlineData[0x5f] =
               local_500.Component.AllocatorInstance.InlineData[0x5f];
          local_5a8.Component.AllocatorInstance.InlineData[0x60] =
               local_500.Component.AllocatorInstance.InlineData[0x60];
          local_5a8.Component.AllocatorInstance.InlineData[0x61] =
               local_500.Component.AllocatorInstance.InlineData[0x61];
          local_5a8.Component.AllocatorInstance.InlineData[0x62] =
               local_500.Component.AllocatorInstance.InlineData[0x62];
          local_5a8.Component.AllocatorInstance.InlineData[99] =
               local_500.Component.AllocatorInstance.InlineData[99];
          local_5a8.Component.AllocatorInstance.InlineData[100] =
               local_500.Component.AllocatorInstance.InlineData[100];
          local_5a8.Component.AllocatorInstance.InlineData[0x65] =
               local_500.Component.AllocatorInstance.InlineData[0x65];
          local_5a8.Component.AllocatorInstance.InlineData[0x66] =
               local_500.Component.AllocatorInstance.InlineData[0x66];
          local_5a8.Component.AllocatorInstance.InlineData[0x67] =
               local_500.Component.AllocatorInstance.InlineData[0x67];
          local_5a8.Component.AllocatorInstance.InlineData[0x68] =
               local_500.Component.AllocatorInstance.InlineData[0x68];
          local_5a8.Component.AllocatorInstance.InlineData[0x69] =
               local_500.Component.AllocatorInstance.InlineData[0x69];
          local_5a8.Component.AllocatorInstance.InlineData[0x6a] =
               local_500.Component.AllocatorInstance.InlineData[0x6a];
          local_5a8.Component.AllocatorInstance.InlineData[0x6b] =
               local_500.Component.AllocatorInstance.InlineData[0x6b];
          local_5a8.Component.AllocatorInstance.InlineData[0x6c] =
               local_500.Component.AllocatorInstance.InlineData[0x6c];
          local_5a8.Component.AllocatorInstance.InlineData[0x6d] =
               local_500.Component.AllocatorInstance.InlineData[0x6d];
          local_5a8.Component.AllocatorInstance.InlineData[0x6e] =
               local_500.Component.AllocatorInstance.InlineData[0x6e];
          local_5a8.Component.AllocatorInstance.InlineData[0x6f] =
               local_500.Component.AllocatorInstance.InlineData[0x6f];
          local_5a8.Component.AllocatorInstance.InlineData[0x70] =
               local_500.Component.AllocatorInstance.InlineData[0x70];
          local_5a8.Component.AllocatorInstance.InlineData[0x71] =
               local_500.Component.AllocatorInstance.InlineData[0x71];
          local_5a8.Component.AllocatorInstance.InlineData[0x72] =
               local_500.Component.AllocatorInstance.InlineData[0x72];
          local_5a8.Component.AllocatorInstance.InlineData[0x73] =
               local_500.Component.AllocatorInstance.InlineData[0x73];
          local_5a8.Component.AllocatorInstance.InlineData[0x74] =
               local_500.Component.AllocatorInstance.InlineData[0x74];
          local_5a8.Component.AllocatorInstance.InlineData[0x75] =
               local_500.Component.AllocatorInstance.InlineData[0x75];
          local_5a8.Component.AllocatorInstance.InlineData[0x76] =
               local_500.Component.AllocatorInstance.InlineData[0x76];
          local_5a8.Component.AllocatorInstance.InlineData[0x77] =
               local_500.Component.AllocatorInstance.InlineData[0x77];
          local_5a8.Component.AllocatorInstance.InlineData[0x78] =
               local_500.Component.AllocatorInstance.InlineData[0x78];
          local_5a8.Component.AllocatorInstance.InlineData[0x79] =
               local_500.Component.AllocatorInstance.InlineData[0x79];
          local_5a8.Component.AllocatorInstance.InlineData[0x7a] =
               local_500.Component.AllocatorInstance.InlineData[0x7a];
          local_5a8.Component.AllocatorInstance.InlineData[0x7b] =
               local_500.Component.AllocatorInstance.InlineData[0x7b];
          local_5a8.Component.AllocatorInstance.InlineData[0x7c] =
               local_500.Component.AllocatorInstance.InlineData[0x7c];
          local_5a8.Component.AllocatorInstance.InlineData[0x7d] =
               local_500.Component.AllocatorInstance.InlineData[0x7d];
          local_5a8.Component.AllocatorInstance.InlineData[0x7e] =
               local_500.Component.AllocatorInstance.InlineData[0x7e];
          local_5a8.Component.AllocatorInstance.InlineData[0x7f] =
               local_500.Component.AllocatorInstance.InlineData[0x7f];
        }
        FVar25 = local_500.Component.AllocatorInstance.SecondaryData;
        if (local_5a8.Component.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Shader::FValueComponent>)0x0) {
          FMemory::Free((void *)local_5a8.Component.AllocatorInstance.SecondaryData);
          FVar25 = local_500.Component.AllocatorInstance.SecondaryData;
        }
        local_5a8.Component.ArrayNum = local_500.Component.ArrayNum;
        local_5a8.Component.ArrayMax = local_500.Component.ArrayMax;
        local_500.Component.ArrayMax = 0x10;
        local_500.Component.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Shader::FValueComponent>)0x0;
        local_500.Component.ArrayNum = 0;
        local_5a8.Component.AllocatorInstance.SecondaryData = FVar25;
      }
      CopyValueToUniformBuffer
                (&local_5a8,(float *)local_a40,(uint)*(ushort *)((longlong)FVar38 + 2));
      if (local_5a8.Component.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Shader::FValueComponent>)0x0) {
        FMemory::Free((void *)local_5a8.Component.AllocatorInstance.SecondaryData);
      }
      FVar38 = (ForAnyElementType)((longlong)FVar38 + 4);
    }
    local_3b0.Values.ArrayMax = 8;
    local_3b0.Values.AllocatorInstance.Data =
         (FPreshaderType *)local_3b0.Values.AllocatorInstance.InlineData;
    local_3b0.Values.ArrayNum = 0;
    local_3b0.Components.AllocatorInstance.Data =
         (FValueComponent *)local_3b0.Components.AllocatorInstance.InlineData;
    local_3b0.Components.ArrayNum = 0;
    local_3b0.Components.ArrayMax = 0x40;
    UE::Shader::FPreshaderDataContext::FPreshaderDataContext(&local_718,&this->UniformPreshaderData)
    ;
    FVar38 = (this->UniformPreshaders).AllocatorInstance;
    piVar64 = &(this->UniformPreshaders).ArrayNum;
    local_a18 = *piVar64;
    if (((ulonglong)FVar38 & 1) != 0) {
      FVar38 = (ForAnyElementType)
               ((longlong)
                &(((TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_> *)
                  (this->UniformTextureParameters + -3))->AllocatorInstance).field_0x0 +
               ((longlong)FVar38 >> 0x18));
    }
    puVar59 = (uint *)((longlong)FVar38 + 8);
    local_9b8 = (uint *)((longlong)local_a18 * 0x10 + (longlong)FVar38);
    local_a30 = piVar64;
    while( true ) {
      puVar55 = local_9b8;
      local_a08 = puVar59;
      if (*piVar64 != local_a18) {
        local_a36 = 0;
        `TCheckedPointerIterator<FMaterialUniformPreshaderHeader_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_a36);
      }
      puVar58 = local_a10;
      if (puVar59 + -2 == puVar55) break;
      UE::Shader::FPreshaderDataContext::FPreshaderDataContext
                (&local_6d8,&local_718,puVar59[-2],puVar59[-1]);
      pFVar26 = UE::Shader::EvaluatePreshader(&local_698,this,param_1,&local_3b0,&local_6d8);
      uVar49 = *puVar59;
      pTVar57 = &this->UniformPreshaderFields;
      local_8a0.StructTypeHash = (pFVar26->Type).StructTypeHash;
      local_8a0.StructComponentTypes.DataPtr = (pFVar26->Type).StructComponentTypes.DataPtr;
      local_8a0.StructComponentTypes.ArrayNum = (pFVar26->Type).StructComponentTypes.ArrayNum;
      local_8a0.StructComponentTypes._12_4_ =
           *(undefined4 *)&(pFVar26->Type).StructComponentTypes.field_0xc;
      local_8a0.ValueType = (pFVar26->Type).ValueType;
      local_8a0._25_7_ = *(undefined7 *)&(pFVar26->Type).field_0x19;
      local_880 = (pFVar26->Component).DataPtr;
      uStack_878 = *(undefined8 *)&(pFVar26->Component).ArrayNum;
      uVar51 = 0;
      if ((int)uVar49 < (this->UniformPreshaderFields).ArrayNum) {
        uVar51 = ~uVar49 >> 0x1f;
      }
      local_918 = pTVar57;
      if ((uVar51 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar38 = pTVar57->AllocatorInstance;
      if (((ulonglong)FVar38 & 1) != 0) {
        FVar38 = (ForAnyElementType)
                 ((longlong)&(pTVar57->AllocatorInstance).field_0x0 + ((longlong)FVar38 >> 0x18));
      }
      bVar1 = *(byte *)((longlong)FVar38 + 8U + (longlong)(int)uVar49 * 0xc);
      uVar49 = (uint)bVar1;
      local_9f8 = (uint)bVar1;
      uVar51 = (uint)bVar1;
      local_968 = (uint)local_8a0.ValueType;
      if (local_9f8 < local_8a0.ValueType) {
        local_968 = uVar51;
      }
      uVar65 = (ulonglong)local_968;
      local_9f4 = 0;
      if (puVar59[1] != 0) {
        uVar8 = (uint)local_8a0.ValueType;
        if (local_8a0.ValueType < uVar51) {
          uVar8 = uVar51;
        }
        do {
          uVar51 = (uint)uVar65;
          if ((uVar51 == 0) || (4 < uVar8)) {
            uVar51 = *puVar59 + local_9f4;
            uVar49 = 0;
            if ((int)uVar51 < pTVar57->ArrayNum) {
              uVar49 = ~uVar51 >> 0x1f;
            }
            if ((uVar49 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar38 = pTVar57->AllocatorInstance;
            if (((ulonglong)FVar38 & 1) != 0) {
              FVar38 = (ForAnyElementType)
                       ((longlong)&(pTVar57->AllocatorInstance).field_0x0 +
                       ((longlong)FVar38 >> 0x18));
            }
            lVar56 = (longlong)(int)uVar51;
            pFVar27 = UE::Shader::GetValueTypeDescription
                                (*(EValueType *)((longlong)FVar38 + 8U + lVar56 * 0xc));
            iVar62 = (int)uStack_878 - *(int *)((longlong)FVar38 + 4U + lVar56 * 0xc);
            uVar6 = pFVar27->NumComponents;
            if ((char)uVar6 < iVar62) {
              iVar62 = (int)(char)uVar6;
            }
            if ((iVar62 < 1) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("NumResultComponents > 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                    ,0x4e7,L""), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            EVar14 = UE::Shader::FPreshaderType::GetComponentType
                               (&local_8a0,*(int *)((longlong)FVar38 + 4U + lVar56 * 0xc));
            iVar52 = (int)(char)iVar62;
            EVar15 = UE::Shader::MakeValueType(EVar14,iVar52);
            UE::Shader::FType::FType(&local_458.Type,EVar15);
            local_458.Component.ArrayMax = 0x10;
            local_458.Component.AllocatorInstance.SecondaryData =
                 (ForElementType<UE::Shader::FValueComponent>)0x0;
            local_458.Component.ArrayNum = 0;
            iVar20 = UE::Core::Private::
                     ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                               (8,8,iVar52,&local_458.Component.AllocatorInstance,
                                &local_458.Component.ArrayNum,&local_458.Component.ArrayMax);
            FVar25 = (ForElementType<UE::Shader::FValueComponent>)&local_458.Component;
            if (local_458.Component.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Shader::FValueComponent>)0x0) {
              FVar25 = local_458.Component.AllocatorInstance.SecondaryData;
            }
            DefaultConstructItems<UE::Shader::FValueComponent,int>
                      ((void *)((longlong)FVar25 + (longlong)iVar20 * 8),iVar52);
            iVar20 = 0;
            if (0 < iVar62) {
              lVar66 = 0;
              do {
                uVar51 = *(int *)((longlong)FVar38 + 4U + lVar56 * 0xc) + iVar20;
                uVar49 = 0;
                if ((int)uVar51 < (int)uStack_878) {
                  uVar49 = ~uVar51 >> 0x1f;
                }
                if ((uVar49 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar13)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar3 = local_880[(int)uVar51];
                if ((local_458.Component.ArrayNum <= iVar20) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar25 = (ForElementType<UE::Shader::FValueComponent>)&local_458.Component;
                if (local_458.Component.AllocatorInstance.SecondaryData !=
                    (ForElementType<UE::Shader::FValueComponent>)0x0) {
                  FVar25 = local_458.Component.AllocatorInstance.SecondaryData;
                }
                iVar20 = iVar20 + 1;
                *(FValueComponent *)((longlong)FVar25 + lVar66) = FVar3;
                lVar66 = lVar66 + 8;
              } while (iVar20 < iVar62);
              uVar65 = (ulonglong)local_968;
              piVar64 = local_a30;
            }
            CopyValueToUniformBuffer
                      (&local_458,(float *)local_a40,*(uint *)((longlong)FVar38 + lVar56 * 0xc));
            uVar49 = local_9f8;
            if (local_458.Component.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Shader::FValueComponent>)0x0) {
              FMemory::Free((void *)local_458.Component.AllocatorInstance.SecondaryData);
              uVar49 = local_9f8;
            }
          }
          else {
            uVar50 = *puVar59;
            uVar19 = 0;
            if ((int)uVar50 < pTVar57->ArrayNum) {
              uVar19 = ~uVar50 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar38 = pTVar57->AllocatorInstance;
            if (((ulonglong)FVar38 & 1) == 0) {
              uVar50 = *(uint *)((longlong)FVar38 + (longlong)(int)uVar50 * 0xc);
            }
            else {
              uVar50 = *(uint *)((longlong)&pTVar57->AllocatorInstance +
                                (longlong)(int)uVar50 * 0xc + ((longlong)FVar38 >> 0x18));
            }
            puVar59 = (local_a40->field0_0x0).XYZW + uVar50;
            uVar50 = 0;
            lVar56 = 0;
            do {
              uVar19 = 0;
              if ((int)uVar50 < (int)uStack_878) {
                uVar19 = ~uVar50 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar50 = uVar50 + 1;
              puVar55 = (uint *)((longlong)local_880 + lVar56);
              lVar56 = lVar56 + 8;
              *puVar59 = *puVar55;
              puVar59 = puVar59 + 1;
            } while ((int)uVar50 < (int)uVar51);
            piVar64 = local_a30;
            if (uVar51 < uVar49) {
              memset(puVar59,0,((longlong)(int)uVar49 - uVar65) * 4);
              piVar64 = local_a30;
            }
          }
          local_9f4 = local_9f4 + 1;
          puVar59 = local_a08;
          pTVar57 = local_918;
        } while (local_9f4 < local_a08[1]);
      }
      puVar59 = puVar59 + 4;
    }
    local_a58 = (local_a40->field0_0x0).XYZW + (this->UniformPreshaderBufferSize << 2);
    if ((local_a10 + param_5 < local_a58) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferCursor <= TempBuffer + TempBufferSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                            ,0x4f7,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar62 = 0;
    iVar20 = 0;
    uVar49 = 0;
    if (0 < (this->VTStacks).ArrayNum) {
      lVar56 = 0;
      do {
        uVar51 = 0;
        if ((int)uVar49 < (this->VTStacks).ArrayNum) {
          uVar51 = ~uVar49 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar38 = (this->VTStacks).AllocatorInstance;
        if (((ulonglong)FVar38 & 1) != 0) {
          FVar38 = (ForAnyElementType)
                   ((longlong)&(this->VTStacks).AllocatorInstance.field_0x0 +
                   ((longlong)FVar38 >> 0x18));
        }
        iVar20 = iVar20 + 1;
        uVar49 = uVar49 + 1;
        iVar62 = iVar62 + (4 < *(uint *)(lVar56 + (longlong)FVar38)) + 1;
        lVar56 = lVar56 + 0x28;
        puVar58 = local_a10;
      } while ((int)uVar49 < (this->VTStacks).ArrayNum);
    }
    local_9f0 = 0;
    local_9e8[0] = 0;
    CountTextureCollections(this,&local_9f0,local_9e8);
    if (((local_a20->Resources).ArrayNum !=
         local_9f0 + 2 +
         ((this->MaterialCacheTagStacks).ArrayNum * 5 +
          (this->UniformTextureParameters[6].ArrayNum + local_9e8[0]) * 2 +
          (this->UniformExternalTextureParameters).ArrayNum +
          this->UniformTextureParameters[5].ArrayNum + this->UniformTextureParameters[4].ArrayNum +
          this->UniformTextureParameters[3].ArrayNum + this->UniformTextureParameters[2].ArrayNum +
          this->UniformTextureParameters[1].ArrayNum + this->UniformTextureParameters[0].ArrayNum) *
         2 + iVar20 + iVar62) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("UniformBufferLayout->Resources.Num() == UniformTextureParameters[(uint32)EMaterialTextureParameterType::Standard2D].Num() * 2 + UniformTextureParameters[(uint32)EMaterialTextureParameterType::Cube].Num() * 2 + UniformTextureParameters[(uint32)EMaterialTextureParameterType::Array2D].Num() * 2 + UniformTextureParameters[(uint32)EMaterialTextureParameterType::ArrayCube].Num() * 2 + UniformTextureParameters[(uint32)EMaterialTextureParameterType::Volume].Num() * 2 + UniformTextureParameters[(uint32)EMaterialTextureParameterType::SparseVolume].Num() * 4 + UniformExternalTextureParameters.Num() * 2 + BindlessCollectionCount * 1 + VirtualCollectionCount * 4 + UniformTextureParameters[(uint32)EMaterialTextureParameterType::Virtual].Num() * 2 + MaterialCacheTagStacks.Num() * (MaterialCacheMaxRuntimeLayers + 2) + NumPageTableTextures + NumPageTableIndirectionTextures + 2"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                            ,0x515,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_a34 = 0;
    if (0 < this->UniformTextureParameters[0].ArrayNum) {
      local_a20 = (FRHIUniformBufferLayout *)(puVar58 + param_5);
      puVar59 = local_a58;
      do {
        uVar49 = local_a34;
        uVar51 = 0;
        if ((int)local_a34 < this->UniformTextureParameters[0].ArrayNum) {
          uVar51 = ~local_a34 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar51 = local_a34;
        FVar38 = this->UniformTextureParameters[0].AllocatorInstance;
        if (((ulonglong)FVar38 & 1) != 0) {
          FVar38 = (ForAnyElementType)
                   ((longlong)&this->UniformTextureParameters[0].AllocatorInstance.field_0x0 +
                   ((longlong)FVar38 >> 0x18));
        }
        local_a28 = (UTexture *)0x0;
        this_04 = (FScriptName *)((longlong)(int)uVar49 * 0x1c + (longlong)FVar38);
        bVar13 = IsInParallelRenderingThread();
        if ((!bVar13) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInParallelRenderingThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x36e,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar28 = GetTextureParameter(this,Standard2D,uVar51);
        iVar62 = pFVar28->TextureIndex;
        if (((((pFVar28->ParameterInfo).Name.ComparisonIndex.Value == 0) &&
             ((pFVar28->ParameterInfo).Name.Number == 0)) ||
            (param_1->MaterialRenderProxy == (FMaterialRenderProxy *)0x0)) ||
           (bVar13 = FMaterialRenderProxy::GetTextureValue
                               (param_1->MaterialRenderProxy,&pFVar28->ParameterInfo,&local_a28,
                                param_1), !bVar13)) {
          local_a28 = GetIndexedTexture<UTexture>(param_1->Material,iVar62);
        }
        if (local_a28 != (UTexture *)0x0) {
          bVar13 = UObjectBase::IsValidLowLevel((UObjectBase *)local_a28);
          if (!bVar13) {
            local_8c8 = this_04;
            `FUniformExpressionSet::FillUniformBuffer'[::K]::<lambda_1>::operator()(&local_8c8);
          }
          pUVar11 = local_a28;
          pUVar29 = Z_Construct_UClass_UTexture_NoRegister();
          iVar62 = (int)pUVar29->_padding_;
          if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar62) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar62 * 8) !=
              &pUVar29->_padding_)) {
            (**(code **)(param_1->Material->_padding_ + 0x390))(param_1->Material,local_810);
            FScriptName::ToString(this_04,&local_820);
            local_8d8 = *(FName *)(local_a28->_padding_ + 0x18);
            ::FName::ToString(&local_8d8,&local_8b0);
            local_8d0 = (FName)local_a28->_padding_;
            ::FName::ToString(&local_8d0,&local_8c0);
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Value->IsA<UTexture>()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x533,
                                L"Expecting a UTexture! Name(%s), Type(%s), TextureParameter(%s), Expression(%d), Material(%s)"
                               );
            if (local_8c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8c0.Data.AllocatorInstance.Data);
            }
            if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
            }
            if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_820.Data.AllocatorInstance.Data);
            }
            if (local_810[0] != (void *)0x0) {
              FMemory::Free(local_810[0]);
            }
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          lVar56 = (**(code **)(local_a28->_padding_ + 0x340))();
          if (lVar56 == 0x1000) {
            puVar30 = (undefined8 *)
                      (**(code **)(param_1->Material->_padding_ + 0x390))
                                (param_1->Material,local_7f0);
            if (*(int *)(puVar30 + 1) == 0) {
              pwVar45 = L"";
            }
            else {
              pwVar45 = (wchar_t *)*puVar30;
            }
            pFVar31 = FText::FromString(&local_7d0,pwVar45);
            local_928[0].Number = this_04->Number;
            local_9b8 = *(uint **)this_04;
            lVar56 = (longlong)(int)local_a34;
            local_928[0].ComparisonIndex.Value = (uint)local_9b8;
            pFVar32 = FText::FromName(&local_7c0,local_928);
            pFVar33 = FText::AsLocalizable_Advanced_LocText
                                (&local_800,L"MaterialExpressions",L"IncompatibleExternalTexture",
                                 L" applied to a non-external Texture2D sampler. This may work by chance on some platforms but is not portable. Please change sampler type to \'External\'. Parameter \'{0}\' (slot {1}) in material \'{2}\'"
                                );
            pFVar34 = FTextFormat::FTextFormat(&local_7b0,pFVar33,Default);
            local_608.Type = Text;
            FText::FText((FText *)&local_608.TextValue,pFVar32);
            if ((local_608.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
               && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0xbd,
                                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                      ), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_5e8 = 0;
            local_5d8 = (longlong *)0x0;
            local_5d0 = 0;
            local_5c8 = 4;
            local_5e0 = lVar56;
            FText::FText(&local_5b8,pFVar31);
            if ((local_5b8.TextData.Reference == (ITextData *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0xbd,
                                    L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                   ), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_990.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_990.ArrayNum = 3;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,3,0,&local_990.AllocatorInstance,3,&local_990.ArrayMax);
            ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                      (local_990.AllocatorInstance.Data,&local_608,3);
            local_870.TextFormatData.Object = (pFVar34->TextFormatData).Object;
            local_870.TextFormatData.SharedReferenceCount.ReferenceController =
                 (pFVar34->TextFormatData).SharedReferenceCount.ReferenceController;
            if (local_870.TextFormatData.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_870.TextFormatData.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_870.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            FText::Format(&local_860,&local_870,&local_990);
            DestructItems<FFormatArgumentValue,int>
                      ((FFormatArgumentValue *)local_990.AllocatorInstance.Data,local_990.ArrayNum);
            if ((FFormatArgumentValue *)local_990.AllocatorInstance.Data !=
                (FFormatArgumentValue *)0x0) {
              FMemory::Free(local_990.AllocatorInstance.Data);
            }
            if (local_5b8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_5b8.TextData.Reference + 0x10))();
            }
            if (local_5d8 != (longlong *)0x0) {
              (**(code **)(*local_5d8 + 0x10))();
            }
            if (local_608.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)
                            local_608.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((pFVar34->TextFormatData).SharedReferenceCount.ReferenceController);
            pIVar4 = (pFVar32->TextData).Reference;
            if (pIVar4 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar4 + 0x10))();
            }
            pIVar4 = (pFVar31->TextData).Reference;
            if (pIVar4 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar4 + 0x10))();
            }
            if (local_800.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_800.TextData.Reference + 0x10))();
            }
            if (local_7f0[0] != (void *)0x0) {
              FMemory::Free(local_7f0[0]);
            }
            this_02 = GetGlobalLogSingleton();
            FText::ToString(&local_860);
            FOutputDevice::LogfImpl((FOutputDevice *)this_02,Warning,L"%s");
            if (local_860.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_860.TextData.Reference + 0x10))();
            }
          }
        }
        local_a58 = puVar59 + 4;
        if ((local_a20 < local_a58) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("BufferCursor <= TempBuffer + TempBufferSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x545,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((((local_a28 == (UTexture *)0x0) ||
             (pFVar35 = UTexture::GetResource(local_a28), pFVar35 == (FTextureResource *)0x0)) ||
            ((local_a28->TextureReference->TextureReferenceRHI).Reference ==
             (FRHITextureReference *)0x0)) ||
           (uVar65 = (**(code **)(local_a28->_padding_ + 0x340))(), (uVar65 & 0x3010) == 0)) {
LAB_147fc99b1:
          if (((GWhiteTexture->TextureRHI).Reference == (FRHITexture *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GWhiteTexture->TextureRHI",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x572,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(FRHITexture **)puVar59 = (GWhiteTexture->TextureRHI).Reference;
          if (((GWhiteTexture->SamplerStateRHI).Reference == (FRHISamplerState *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GWhiteTexture->SamplerStateRHI",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x574,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar36 = (GWhiteTexture->SamplerStateRHI).Reference;
        }
        else {
          pFVar35 = UTexture::GetResource(local_a28);
          pTVar47 = (TRefCountPtr<FRHISamplerState> *)&pFVar35->_padding_;
          bVar1 = (byte)this_04[2].ComparisonIndex.Value;
          local_958[0] = (uint)bVar1;
          pFVar46 = Wrap_WorldGroupSettings;
          if ((local_958[0] == 1) || (pFVar46 = Clamp_WorldGroupSettings, bVar1 == 2)) {
            pTVar47 = &pFVar46->SamplerStateRHI;
          }
          if (pTVar47->Reference == (FRHISamplerState *)0x0) {
            local_850 = &local_a28;
            local_840 = &local_a34;
            local_838 = local_958;
            local_848 = param_1;
            `FUniformExpressionSet::FillUniformBuffer'::__l172::<lambda_2>::operator()(&local_850);
            goto LAB_147fc99b1;
          }
          *(FRHITextureReference **)puVar59 =
               (local_a28->TextureReference->TextureReferenceRHI).Reference;
          pFVar36 = pTVar47->Reference;
        }
        *(FRHISamplerState **)(puVar59 + 2) = pFVar36;
        local_a34 = local_a34 + 1;
        puVar59 = local_a58;
      } while ((int)local_a34 < this->UniformTextureParameters[0].ArrayNum);
    }
    uVar49 = 0;
    if (0 < this->UniformTextureParameters[1].ArrayNum) {
      local_a20 = (FRHIUniformBufferLayout *)(local_a10 + param_5);
      lVar56 = 0;
      puVar59 = local_a58;
      do {
        uVar51 = 0;
        if ((int)uVar49 < this->UniformTextureParameters[1].ArrayNum) {
          uVar51 = ~uVar49 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar38 = this->UniformTextureParameters[1].AllocatorInstance;
        if (((ulonglong)FVar38 & 1) != 0) {
          FVar38 = (ForAnyElementType)
                   ((longlong)&this->UniformTextureParameters[1].AllocatorInstance.field_0x0 +
                   ((longlong)FVar38 >> 0x18));
        }
        local_9e0 = (UTexture *)0x0;
        bVar13 = IsInParallelRenderingThread();
        if ((!bVar13) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInParallelRenderingThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x36e,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar28 = GetTextureParameter(this,Cube,uVar49);
        iVar62 = pFVar28->TextureIndex;
        if (((((pFVar28->ParameterInfo).Name.ComparisonIndex.Value == 0) &&
             ((pFVar28->ParameterInfo).Name.Number == 0)) ||
            (param_1->MaterialRenderProxy == (FMaterialRenderProxy *)0x0)) ||
           (bVar13 = FMaterialRenderProxy::GetTextureValue
                               (param_1->MaterialRenderProxy,&pFVar28->ParameterInfo,&local_9e0,
                                param_1), !bVar13)) {
          local_9e0 = GetIndexedTexture<UTexture>(param_1->Material,iVar62);
        }
        local_a58 = puVar59 + 4;
        if ((local_a20 < local_a58) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("BufferCursor <= TempBuffer + TempBufferSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x584,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (((local_9e0 == (UTexture *)0x0) ||
            (pFVar35 = UTexture::GetResource(local_9e0), pFVar35 == (FTextureResource *)0x0)) ||
           (((local_9e0->TextureReference->TextureReferenceRHI).Reference ==
             (FRHITextureReference *)0x0 ||
            (uVar65 = (**(code **)(local_9e0->_padding_ + 0x340))(), (uVar65 & 0x20) == 0)))) {
          if (((GWhiteTextureCube->TextureRHI).Reference == (FRHITexture *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GWhiteTextureCube->TextureRHI",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x59b,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(FRHITexture **)puVar59 = (GWhiteTextureCube->TextureRHI).Reference;
          if (((GWhiteTextureCube->SamplerStateRHI).Reference == (FRHISamplerState *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GWhiteTextureCube->SamplerStateRHI",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x59d,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar36 = (GWhiteTextureCube->SamplerStateRHI).Reference;
        }
        else {
          *(FRHITextureReference **)puVar59 =
               (local_9e0->TextureReference->TextureReferenceRHI).Reference;
          pFVar35 = UTexture::GetResource(local_9e0);
          pTVar47 = (TRefCountPtr<FRHISamplerState> *)&pFVar35->_padding_;
          cVar16 = *(char *)((longlong)FVar38 + 0x18U + lVar56);
          if (cVar16 == '\x01') {
            pTVar47 = &Wrap_WorldGroupSettings->SamplerStateRHI;
          }
          else if (cVar16 == '\x02') {
            pTVar47 = &Clamp_WorldGroupSettings->SamplerStateRHI;
          }
          else if ((cVar16 == '\x03') &&
                  (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                      ("SourceMode != SSM_TerrainWeightmapGroupSettings",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                       ,0x594,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((pTVar47->Reference == (FRHISamplerState *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("*SamplerSource",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x596,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar36 = pTVar47->Reference;
        }
        uVar49 = uVar49 + 1;
        lVar56 = lVar56 + 0x1c;
        *(FRHISamplerState **)(puVar59 + 2) = pFVar36;
        puVar59 = local_a58;
      } while ((int)uVar49 < this->UniformTextureParameters[1].ArrayNum);
    }
    uVar49 = 0;
    if (0 < this->UniformTextureParameters[2].ArrayNum) {
      lVar56 = 0;
      puVar59 = local_a58;
      do {
        uVar51 = 0;
        if ((int)uVar49 < this->UniformTextureParameters[2].ArrayNum) {
          uVar51 = ~uVar49 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar38 = this->UniformTextureParameters[2].AllocatorInstance;
        if (((ulonglong)FVar38 & 1) != 0) {
          FVar38 = (ForAnyElementType)
                   ((longlong)&this->UniformTextureParameters[2].AllocatorInstance.field_0x0 +
                   ((longlong)FVar38 >> 0x18));
        }
        bVar13 = IsInParallelRenderingThread();
        if ((!bVar13) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInParallelRenderingThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x36e,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar28 = GetTextureParameter(this,Array2D,uVar49);
        iVar62 = pFVar28->TextureIndex;
        if (((((pFVar28->ParameterInfo).Name.ComparisonIndex.Value == 0) &&
             ((pFVar28->ParameterInfo).Name.Number == 0)) ||
            (param_1->MaterialRenderProxy == (FMaterialRenderProxy *)0x0)) ||
           (bVar13 = FMaterialRenderProxy::GetTextureValue
                               (param_1->MaterialRenderProxy,&pFVar28->ParameterInfo,&local_9a8,
                                param_1), !bVar13)) {
          local_9a8 = GetIndexedTexture<UTexture>(param_1->Material,iVar62);
        }
        local_a58 = puVar59 + 4;
        if (((local_9a8 == (UTexture *)0x0) ||
            (pFVar35 = UTexture::GetResource(local_9a8), pFVar35 == (FTextureResource *)0x0)) ||
           (((local_9a8->TextureReference->TextureReferenceRHI).Reference ==
             (FRHITextureReference *)0x0 ||
            (uVar65 = (**(code **)(local_9a8->_padding_ + 0x340))(), (uVar65 & 0x40) == 0)))) {
          if (((GBlackArrayTexture->TextureRHI).Reference == (FRHITexture *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GBlackArrayTexture->TextureRHI",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x5c2,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(FRHITexture **)puVar59 = (GBlackArrayTexture->TextureRHI).Reference;
          if (((GBlackArrayTexture->SamplerStateRHI).Reference == (FRHISamplerState *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GBlackArrayTexture->SamplerStateRHI",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x5c4,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar36 = (GBlackArrayTexture->SamplerStateRHI).Reference;
        }
        else {
          *(FRHITextureReference **)puVar59 =
               (local_9a8->TextureReference->TextureReferenceRHI).Reference;
          pFVar35 = UTexture::GetResource(local_9a8);
          pTVar47 = (TRefCountPtr<FRHISamplerState> *)&pFVar35->_padding_;
          cVar16 = *(char *)((longlong)FVar38 + 0x18U + lVar56);
          if (cVar16 == '\x01') {
            pTVar47 = &Wrap_WorldGroupSettings->SamplerStateRHI;
          }
          else if (cVar16 == '\x02') {
            pTVar47 = &Clamp_WorldGroupSettings->SamplerStateRHI;
          }
          else if ((cVar16 == '\x03') &&
                  (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                      ("SourceMode != SSM_TerrainWeightmapGroupSettings",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                       ,0x5bb,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((pTVar47->Reference == (FRHISamplerState *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("*SamplerSource",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x5bd,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar36 = pTVar47->Reference;
        }
        uVar49 = uVar49 + 1;
        lVar56 = lVar56 + 0x1c;
        *(FRHISamplerState **)(puVar59 + 2) = pFVar36;
        puVar59 = local_a58;
      } while ((int)uVar49 < this->UniformTextureParameters[2].ArrayNum);
    }
    uVar49 = 0;
    if (0 < this->UniformTextureParameters[3].ArrayNum) {
      lVar56 = 0;
      puVar59 = local_a58;
      do {
        uVar51 = 0;
        if ((int)uVar49 < this->UniformTextureParameters[3].ArrayNum) {
          uVar51 = ~uVar49 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar38 = this->UniformTextureParameters[3].AllocatorInstance;
        if (((ulonglong)FVar38 & 1) != 0) {
          FVar38 = (ForAnyElementType)
                   ((longlong)&this->UniformTextureParameters[3].AllocatorInstance.field_0x0 +
                   ((longlong)FVar38 >> 0x18));
        }
        bVar13 = IsInParallelRenderingThread();
        if ((!bVar13) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInParallelRenderingThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x36e,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar28 = GetTextureParameter(this,ArrayCube,uVar49);
        iVar62 = pFVar28->TextureIndex;
        if (((((pFVar28->ParameterInfo).Name.ComparisonIndex.Value == 0) &&
             ((pFVar28->ParameterInfo).Name.Number == 0)) ||
            (param_1->MaterialRenderProxy == (FMaterialRenderProxy *)0x0)) ||
           (bVar13 = FMaterialRenderProxy::GetTextureValue
                               (param_1->MaterialRenderProxy,&pFVar28->ParameterInfo,&local_9a0,
                                param_1), !bVar13)) {
          local_9a0 = GetIndexedTexture<UTexture>(param_1->Material,iVar62);
        }
        local_a58 = puVar59 + 4;
        if (((local_9a0 == (UTexture *)0x0) ||
            (pFVar35 = UTexture::GetResource(local_9a0), pFVar35 == (FTextureResource *)0x0)) ||
           (((local_9a0->TextureReference->TextureReferenceRHI).Reference ==
             (FRHITextureReference *)0x0 ||
            (cVar16 = (**(code **)(local_9a0->_padding_ + 0x340))(), -1 < cVar16)))) {
          if (((GBlackArrayTexture->TextureRHI).Reference == (FRHITexture *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GBlackArrayTexture->TextureRHI",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x5e9,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(FRHITexture **)puVar59 = (GBlackCubeArrayTexture->TextureRHI).Reference;
          if (((GBlackArrayTexture->SamplerStateRHI).Reference == (FRHISamplerState *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GBlackArrayTexture->SamplerStateRHI",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x5eb,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar36 = (GBlackCubeArrayTexture->SamplerStateRHI).Reference;
        }
        else {
          *(FRHITextureReference **)puVar59 =
               (local_9a0->TextureReference->TextureReferenceRHI).Reference;
          pFVar35 = UTexture::GetResource(local_9a0);
          pTVar47 = (TRefCountPtr<FRHISamplerState> *)&pFVar35->_padding_;
          cVar16 = *(char *)((longlong)FVar38 + 0x18U + lVar56);
          if (cVar16 == '\x01') {
            pTVar47 = &Wrap_WorldGroupSettings->SamplerStateRHI;
          }
          else if (cVar16 == '\x02') {
            pTVar47 = &Clamp_WorldGroupSettings->SamplerStateRHI;
          }
          else if ((cVar16 == '\x03') &&
                  (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                      ("SourceMode != SSM_TerrainWeightmapGroupSettings",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                       ,0x5e2,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((pTVar47->Reference == (FRHISamplerState *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("*SamplerSource",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x5e4,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar36 = pTVar47->Reference;
        }
        uVar49 = uVar49 + 1;
        lVar56 = lVar56 + 0x1c;
        *(FRHISamplerState **)(puVar59 + 2) = pFVar36;
        puVar59 = local_a58;
      } while ((int)uVar49 < this->UniformTextureParameters[3].ArrayNum);
    }
    uVar49 = 0;
    if (0 < this->UniformTextureParameters[4].ArrayNum) {
      local_a30 = (int *)(local_a10 + param_5);
      lVar56 = 0;
      do {
        uVar51 = 0;
        if ((int)uVar49 < this->UniformTextureParameters[4].ArrayNum) {
          uVar51 = ~uVar49 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar38 = this->UniformTextureParameters[4].AllocatorInstance;
        if (((ulonglong)FVar38 & 1) != 0) {
          FVar38 = (ForAnyElementType)
                   ((longlong)&this->UniformTextureParameters[4].AllocatorInstance.field_0x0 +
                   ((longlong)FVar38 >> 0x18));
        }
        puVar59 = local_a58 + 4;
        if ((local_a30 < puVar59) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("BufferCursor <= TempBuffer + TempBufferSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x5f8,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_9d8 = (UTexture *)0x0;
        bVar13 = IsInParallelRenderingThread();
        if ((!bVar13) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInParallelRenderingThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x36e,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar28 = GetTextureParameter(this,Volume,uVar49);
        iVar62 = pFVar28->TextureIndex;
        if (((((pFVar28->ParameterInfo).Name.ComparisonIndex.Value == 0) &&
             ((pFVar28->ParameterInfo).Name.Number == 0)) ||
            (param_1->MaterialRenderProxy == (FMaterialRenderProxy *)0x0)) ||
           (bVar13 = FMaterialRenderProxy::GetTextureValue
                               (param_1->MaterialRenderProxy,&pFVar28->ParameterInfo,&local_9d8,
                                param_1), !bVar13)) {
          local_9d8 = GetIndexedTexture<UTexture>(param_1->Material,iVar62);
        }
        if (((local_9d8 == (UTexture *)0x0) ||
            (pFVar35 = UTexture::GetResource(local_9d8), pFVar35 == (FTextureResource *)0x0)) ||
           (((local_9d8->TextureReference->TextureReferenceRHI).Reference ==
             (FRHITextureReference *)0x0 ||
            (uVar65 = (**(code **)(local_9d8->_padding_ + 0x340))(), (uVar65 >> 8 & 1) == 0)))) {
          if (((GBlackVolumeTexture->TextureRHI).Reference == (FRHITexture *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GBlackVolumeTexture->TextureRHI",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x611,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(FRHITexture **)local_a58 = (GBlackVolumeTexture->TextureRHI).Reference;
          if (((GBlackVolumeTexture->SamplerStateRHI).Reference == (FRHISamplerState *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GBlackVolumeTexture->SamplerStateRHI",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x613,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar36 = (GBlackVolumeTexture->SamplerStateRHI).Reference;
        }
        else {
          *(FRHITextureReference **)local_a58 =
               (local_9d8->TextureReference->TextureReferenceRHI).Reference;
          pFVar35 = UTexture::GetResource(local_9d8);
          pTVar47 = (TRefCountPtr<FRHISamplerState> *)&pFVar35->_padding_;
          cVar16 = *(char *)((longlong)FVar38 + 0x18U + lVar56);
          pFVar46 = Wrap_WorldGroupSettings;
          if ((cVar16 == '\x01') || (pFVar46 = Clamp_WorldGroupSettings, cVar16 == '\x02')) {
            pTVar47 = &pFVar46->SamplerStateRHI;
          }
          if ((pTVar47->Reference == (FRHISamplerState *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("*SamplerSource",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x60c,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar36 = pTVar47->Reference;
        }
        uVar49 = uVar49 + 1;
        lVar56 = lVar56 + 0x1c;
        *(FRHISamplerState **)(local_a58 + 2) = pFVar36;
        local_a58 = puVar59;
      } while ((int)uVar49 < this->UniformTextureParameters[4].ArrayNum);
    }
    uVar49 = 0;
    if (0 < this->UniformTextureParameters[6].ArrayNum) {
      puVar59 = (uint *)(local_a10 + param_5);
      local_9b8 = puVar59;
      do {
        uVar51 = 0;
        if ((int)uVar49 < this->UniformTextureParameters[6].ArrayNum) {
          uVar51 = ~uVar49 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar55 = local_a58 + 6;
        puVar61 = local_a58 + 8;
        local_a20 = (FRHIUniformBufferLayout *)puVar55;
        if ((puVar59 < puVar61) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("BufferCursor <= TempBuffer + TempBufferSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x623,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (((GBlackVolumeTexture->TextureRHI).Reference == (FRHITexture *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("GBlackVolumeTexture->TextureRHI",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x625,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(FRHITexture **)local_a58 = (GBlackUintVolumeTexture->TextureRHI).Reference;
        *(FRHITexture **)(local_a58 + 2) = (GBlackVolumeTexture->TextureRHI).Reference;
        *(FRHITexture **)(local_a58 + 4) = (GBlackVolumeTexture->TextureRHI).Reference;
        if (((GBlackVolumeTexture->SamplerStateRHI).Reference == (FRHISamplerState *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("GBlackVolumeTexture->SamplerStateRHI",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x629,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(FRHISamplerState **)puVar55 = (GBlackVolumeTexture->SamplerStateRHI).Reference;
        local_938 = (USparseVolumeTexture *)0x0;
        GetTextureValue(this,uVar49,param_1,param_1->Material,&local_938);
        if ((local_938 != (USparseVolumeTexture *)0x0) &&
           (lVar56 = (**(code **)(*(longlong *)local_938 + 0x310))(), lVar56 != 0)) {
          bVar13 = IsInParallelRenderingThread();
          if ((!bVar13) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsInParallelRenderingThread()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\SparseVolumeTexture\\SparseVolumeTexture.h"
                                  ,0x10c,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar66 = *(longlong *)(lVar56 + 0xb0);
          bVar13 = IsInParallelRenderingThread();
          if ((!bVar13) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsInParallelRenderingThread()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\SparseVolumeTexture\\SparseVolumeTexture.h"
                                  ,0x10d,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar60 = *(longlong *)(lVar56 + 0xb8);
          bVar13 = IsInParallelRenderingThread();
          if ((!bVar13) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsInParallelRenderingThread()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\SparseVolumeTexture\\SparseVolumeTexture.h"
                                  ,0x10e,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar56 = *(longlong *)(lVar56 + 0xc0);
          if (lVar66 == 0) {
            lVar66 = *(longlong *)local_a58;
          }
          *(longlong *)local_a58 = lVar66;
          if (lVar60 == 0) {
            lVar60 = *(longlong *)(local_a58 + 2);
          }
          *(longlong *)(local_a58 + 2) = lVar60;
          if (lVar56 == 0) {
            lVar56 = *(longlong *)(local_a58 + 4);
          }
          *(longlong *)(local_a58 + 4) = lVar56;
          local_a20->_padding_ =
               (longlong)
               TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
          puVar59 = local_9b8;
        }
        uVar49 = uVar49 + 1;
        local_a58 = puVar61;
      } while ((int)uVar49 < this->UniformTextureParameters[6].ArrayNum);
    }
    uVar65 = 0;
    uVar49 = 0;
    pFVar5 = param_1->MaterialRenderProxy;
    local_a20 = (FRHIUniformBufferLayout *)&pFVar5->ImmutableSamplerState;
    (((FImmutableSamplerState *)local_a20)->ImmutableSamplers).Elements[0] = (FRHISamplerState *)0x0
    ;
    (pFVar5->ImmutableSamplerState).ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
    if (0 < (this->UniformExternalTextureParameters).ArrayNum) {
      local_9b8 = (uint *)(local_a10 + param_5);
      lVar56 = 0;
      do {
        local_978.Reference = (FRHITexture *)0x0;
        local_9d0.Reference = (FRHISamplerState *)0x0;
        puVar59 = local_a58 + 4;
        if ((local_9b8 < puVar59) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("BufferCursor <= TempBuffer + TempBufferSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x64c,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar51 = 0;
        if ((int)uVar49 < (this->UniformExternalTextureParameters).ArrayNum) {
          uVar51 = ~uVar49 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar38 = (this->UniformExternalTextureParameters).AllocatorInstance;
        if (((ulonglong)FVar38 & 1) != 0) {
          FVar38 = (ForAnyElementType)
                   ((longlong)&(this->UniformExternalTextureParameters).AllocatorInstance.field_0x0
                   + ((longlong)FVar38 >> 0x18));
        }
        bVar13 = IsInParallelRenderingThread();
        if ((!bVar13) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInParallelRenderingThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x83d,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_930.Number = *(uint *)(lVar56 + 8 + (longlong)FVar38);
        local_918 = *(TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_> **)
                     (lVar56 + (longlong)FVar38);
        local_930.ComparisonIndex.Value = (uint)local_918;
        FMaterialRenderContext::GetExternalTextureGuid
                  (param_1,&local_7e0,(FGuid *)((longlong)FVar38 + 0xcU + lVar56),&local_930,
                   *(int *)(lVar56 + 0x1c + (longlong)FVar38));
        this_03 = FExternalTextureRegistry::Get();
        bVar13 = FExternalTextureRegistry::GetExternalTexture
                           (this_03,param_1->MaterialRenderProxy,&local_7e0,&local_978,&local_9d0);
        if (bVar13) {
          *(FRHITexture **)local_a58 = local_978.Reference;
          *(FRHISamplerState **)(local_a58 + 2) = local_9d0.Reference;
          cVar16 = (**(code **)(*(longlong *)local_9d0.Reference + 0x10))();
          if (cVar16 != '\0') {
            ((ForAnyElementType *)&local_a20->_padding_)[uVar65] =
                 (ForAnyElementType)local_9d0.Reference;
            uVar65 = (ulonglong)((int)uVar65 + 1);
          }
        }
        else {
          if (((GWhiteTexture->TextureRHI).Reference == (FRHITexture *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GWhiteTexture->TextureRHI",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x65a,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(FRHITexture **)local_a58 = (GWhiteTexture->TextureRHI).Reference;
          if (((GWhiteTexture->SamplerStateRHI).Reference == (FRHISamplerState *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GWhiteTexture->SamplerStateRHI",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x65c,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(FRHISamplerState **)(local_a58 + 2) = (GWhiteTexture->SamplerStateRHI).Reference;
        }
        if ((ForAnyElementType)local_9d0.Reference != (ForAnyElementType)0x0) {
          FRHIResource::Release((FRHIResource *)local_9d0.Reference);
        }
        if (local_978.Reference != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)local_978.Reference);
        }
        uVar49 = uVar49 + 1;
        lVar56 = lVar56 + 0x20;
        local_a58 = puVar59;
      } while ((int)uVar49 < (this->UniformExternalTextureParameters).ArrayNum);
    }
    if ((this->UniformTextureCollectionParameters).ArrayNum != 0) {
      iVar62 = (this->UniformTextureCollectionParameters).ArrayNum;
      FVar38 = (this->UniformTextureCollectionParameters).AllocatorInstance;
      if (((ulonglong)FVar38 & 1) != 0) {
        FVar38 = (ForAnyElementType)
                 ((longlong)&(this->UniformTextureCollectionParameters).AllocatorInstance.field_0x0
                 + ((longlong)FVar38 >> 0x18));
      }
      FVar53 = (ForAnyElementType)((longlong)iVar62 * 0x1c + (longlong)FVar38);
      puVar59 = (uint *)(local_a10 + param_5);
      while( true ) {
        if ((this->UniformTextureCollectionParameters).ArrayNum != iVar62) {
          local_a35 = 0;
          `TCheckedPointerIterator<FMaterialTextureCollectionParameterInfo_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_a35);
        }
        if (FVar38 == FVar53) break;
        iVar20 = *(int *)((longlong)FVar38 + 0x14);
        local_970 = (UTextureCollection *)0x0;
        if ((((*(int *)FVar38 == 0) && (*(int *)((longlong)FVar38 + 8) == 0)) ||
            (param_1->MaterialRenderProxy == (FMaterialRenderProxy *)0x0)) ||
           (bVar13 = FMaterialRenderProxy::GetTextureCollectionValue
                               (param_1->MaterialRenderProxy,
                                (FMemoryImageMaterialParameterInfo *)FVar38,&local_970,param_1),
           !bVar13)) {
          local_970 = GetIndexedTextureCollection(param_1->Material,iVar20);
        }
        if (local_970 == (UTextureCollection *)0x0) {
          pFVar37 = (FTextureCollectionResource *)0x0;
        }
        else {
          pFVar37 = UTextureCollection::GetResource(local_970);
        }
        if (*(char *)((longlong)FVar38 + 0x18) == '\0') {
          lVar56 = GEmptyResourceCollection._32_8_;
          if (pFVar37 != (FTextureCollectionResource *)0x0) {
            if ((pFVar37[1]._padding_ == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ResourceCollectionRHI",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TextureCollection.h"
                                    ,0x24,L""), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar56 = pFVar37[1]._padding_;
          }
          *(longlong *)local_a58 = lVar56;
          local_a58 = local_a58 + 2;
          if (puVar59 < local_a58) {
            iVar20 = 0x678;
LAB_147fcac07:
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("BufferCursor <= TempBuffer + TempBufferSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,iVar20,L"");
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
        }
        else {
          if (pFVar37 == (FTextureCollectionResource *)0x0) {
            *(FRHIShaderResourceView **)local_a58 =
                 (GEmptyVertexBufferUInt4WithUAV->ShaderResourceViewRHI).Reference;
            *(FRHITexture **)(local_a58 + 2) = (GBlackUintTexture->TextureRHI).Reference;
            pFVar39 = (GBlackTexture->TextureRHI).Reference;
          }
          else {
            lVar56._0_1_ = pFVar37[1].bIsBindless;
            lVar56._1_1_ = pFVar37[1].field_0x21;
            lVar56._2_2_ = pFVar37[1]._padding_;
            lVar56._4_4_ = pFVar37[1].CollectionName.ComparisonIndex;
            if ((lVar56 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("VirtualCollectionRHISRV",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\VirtualTextureCollection.h"
                                    ,0x37,L""), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(longlong *)local_a58 = *(longlong *)&pFVar37[1].bIsBindless;
            *(longlong *)(local_a58 + 2) = *(longlong *)&pFVar37[1].CollectionName.Number;
            pFVar39 = (FRHITexture *)pFVar37[2]._padding_;
          }
          *(FRHITexture **)(local_a58 + 4) = pFVar39;
          *(FRHISamplerState **)(local_a58 + 6) =
               TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
          local_a58 = local_a58 + 8;
          if (puVar59 < local_a58) {
            iVar20 = 0x691;
            goto LAB_147fcac07;
          }
        }
        FVar38 = (ForAnyElementType)((longlong)FVar38 + 0x1c);
      }
    }
    uVar49 = 0;
    if (0 < (this->VTStacks).ArrayNum) {
      local_a08 = (uint *)0x0;
      local_a40 = (TIntVector4<unsigned_int> *)0x0;
      do {
        puVar59 = local_a08;
        uVar51 = 0;
        if ((int)uVar49 < (this->VTStacks).ArrayNum) {
          uVar51 = ~uVar49 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar38 = (this->VTStacks).AllocatorInstance;
        if (((ulonglong)FVar38 & 1) != 0) {
          FVar38 = (ForAnyElementType)
                   ((longlong)&(this->VTStacks).AllocatorInstance.field_0x0 +
                   ((longlong)FVar38 >> 0x18));
        }
        puVar55 = (uint *)0x0;
        puVar61 = local_a58 + 2;
        if (4 < *(uint *)((longlong)local_a40 + (longlong)FVar38)) {
          puVar61 = local_a58 + 4;
          puVar55 = local_a58 + 2;
        }
        uVar51 = 0;
        if ((int)uVar49 < local_a00->ArrayNum) {
          uVar51 = ~uVar49 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar23 = *(longlong **)((longlong)puVar59 + (longlong)local_a00->DataPtr);
        if (plVar23 == (longlong *)0x0) {
          *(FRHITexture **)local_a58 = (GBlackUintTexture->TextureRHI).Reference;
          if (puVar55 != (uint *)0x0) {
            *(FRHITexture **)puVar55 = (GBlackUintTexture->TextureRHI).Reference;
          }
          pFVar39 = (GBlackUintTexture->TextureRHI).Reference;
          local_a08 = puVar59;
        }
        else {
          lVar56 = (**(code **)(*plVar23 + 0x10))(plVar23);
          if ((lVar56 == 0) &&
             (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<1774855081422751402>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x6aa,"PageTable0RHI"), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(longlong *)local_a58 = lVar56;
          if (puVar55 != (uint *)0x0) {
            lVar56 = (**(code **)(*plVar23 + 0x10))(plVar23);
            if ((lVar56 == 0) &&
               (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<1774855081422751408>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                    ,0x6b0,"PageTable1RHI"), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(longlong *)puVar55 = lVar56;
          }
          pFVar39 = (FRHITexture *)(**(code **)(*plVar23 + 0x18))(plVar23);
          if ((pFVar39 == (FRHITexture *)0x0) &&
             (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<1774855081422751413>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x6b5,"PageTableIndirectionRHI"), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        local_a40 = (TIntVector4<unsigned_int> *)((longlong)local_a40 + 0x28);
        local_a08 = local_a08 + 2;
        *(FRHITexture **)puVar61 = pFVar39;
        uVar49 = uVar49 + 1;
        local_a58 = puVar61 + 2;
      } while ((int)uVar49 < (this->VTStacks).ArrayNum);
    }
    uVar49 = 0;
    puVar59 = local_a58;
    if (0 < (this->MaterialCacheTagStacks).ArrayNum) {
      do {
        uVar51 = 0;
        if ((int)uVar49 < (this->MaterialCacheTagStacks).ArrayNum) {
          uVar51 = ~uVar49 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar38 = (this->MaterialCacheTagStacks).AllocatorInstance;
        if (((ulonglong)FVar38 & 1) != 0) {
          FVar38 = (ForAnyElementType)
                   ((longlong)&(this->MaterialCacheTagStacks).AllocatorInstance.field_0x0 +
                   ((longlong)FVar38 >> 0x18));
        }
        pIVar22 = GetRendererModule();
        plVar23 = (longlong *)(**(code **)((longlong)*pIVar22 + 0x138))(pIVar22);
        (**(code **)(*plVar23 + 8))
                  (plVar23,&local_668,(longlong)(int)uVar49 * 0x10 + (longlong)FVar38);
        *(longlong *)puVar59 = local_668;
        if ((local_668 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data.TagBufferSRV",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x6cd,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(longlong *)(puVar59 + 2) = local_660;
        if ((local_660 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data.PageTableSRV",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x6d0,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar51 = 0;
        do {
          if ((int)uVar51 < local_610) {
            if ((local_610 <= (int)uVar51) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            puVar43 = local_658;
            if (local_618 != (undefined1 *)0x0) {
              puVar43 = local_618;
            }
            pFVar48 = *(FRHIShaderResourceView **)(puVar43 + (longlong)(int)uVar51 * 8);
          }
          else {
            pFVar48 = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
          }
          *(FRHIShaderResourceView **)(puVar59 + (ulonglong)(uVar51 + 2) * 2) = pFVar48;
          if ((pFVar48 == (FRHIShaderResourceView *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SRV",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x6d6,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar51 = uVar51 + 1;
        } while (uVar51 < 8);
        puVar59 = puVar59 + 0x14;
        if (local_618 != (undefined1 *)0x0) {
          FMemory::Free(local_618);
        }
        uVar49 = uVar49 + 1;
      } while ((int)uVar49 < (this->MaterialCacheTagStacks).ArrayNum);
    }
    uVar49 = 0;
    if (0 < this->UniformTextureParameters[5].ArrayNum) {
      local_a20 = (FRHIUniformBufferLayout *)(this->UniformTextureParameters + 5);
      local_a58 = (uint *)0x0;
      puVar55 = puVar59;
      do {
        pFVar12 = local_a20;
        uVar51 = 0;
        if ((int)uVar49 < *(int *)&local_a20->_padding_) {
          uVar51 = ~uVar49 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar38 = *(ForAnyElementType *)&pFVar12->_padding_;
        if (((ulonglong)FVar38 & 1) != 0) {
          FVar38 = (ForAnyElementType)
                   ((longlong)&((ForAnyElementType *)&pFVar12->_padding_)->field_0x0 +
                   ((longlong)FVar38 >> 0x18));
        }
        puVar59 = puVar55 + 4;
        local_998 = (UTexture *)0x0;
        local_a30 = (int *)(puVar55 + 2);
        bVar13 = IsInParallelRenderingThread();
        if ((!bVar13) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInParallelRenderingThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                ,0x36e,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar28 = GetTextureParameter(this,Virtual,uVar49);
        iVar62 = pFVar28->TextureIndex;
        if (((((pFVar28->ParameterInfo).Name.ComparisonIndex.Value == 0) &&
             ((pFVar28->ParameterInfo).Name.Number == 0)) ||
            (param_1->MaterialRenderProxy == (FMaterialRenderProxy *)0x0)) ||
           (bVar13 = FMaterialRenderProxy::GetTextureValue
                               (param_1->MaterialRenderProxy,&pFVar28->ParameterInfo,&local_998,
                                param_1), !bVar13)) {
          local_998 = GetIndexedTexture<UTexture>(param_1->Material,iVar62);
        }
        bVar13 = false;
        if ((local_998 != (UTexture *)0x0) &&
           (pFVar35 = UTexture::GetResource(local_998), pFVar35 != (FTextureResource *)0x0)) {
          GetVTStackAndLayerIndex(this,(int)&local_9ec);
          pFVar35 = UTexture::GetResource(local_998);
          if ((pFVar35 == (FTextureResource *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("VTResource",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                                  ,0x6f2,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar65 = (ulonglong)local_9ec;
          if ((local_a00->ArrayNum <= (int)(uint)local_9ec) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pIVar41 = local_a00->DataPtr[uVar65];
          bVar13 = false;
          if ((pIVar41 != (IAllocatedVirtualTexture *)0x0) &&
             (lVar56 = (**(code **)(pIVar41->_padding_ + 0x30))
                                 (pIVar41,local_9ea,
                                  *(undefined1 *)((longlong)&pFVar35->_padding_ + 6)), lVar56 != 0))
          {
            bVar13 = true;
            *(longlong *)puVar55 = lVar56;
            *(longlong *)(puVar55 + 2) = pFVar35->_padding_;
          }
        }
        pvVar10 = ThreadLocalStoragePointer;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
          if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
             ((IConsoleManager::SetupSingleton(),
              IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
              (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Singleton != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x4fb,L""), bVar17)))) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          plVar23 = (longlong *)
                    (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                              (IConsoleManager::Singleton,L"r.VT.AnisotropicFiltering",1);
          pTVar40 = (TConsoleVariableData<int> *)0x0;
          if (plVar23 != (longlong *)0x0) {
            pTVar40 = (TConsoleVariableData<int> *)(**(code **)(*plVar23 + 0x68))(plVar23);
          }
          CVarVTAnisotropic = pTVar40;
          _Init_thread_footer(&::_TSS4);
        }
        pTVar40 = CVarVTAnisotropic;
        if (CVarVTAnisotropic == (TConsoleVariableData<int> *)0x0) {
LAB_147fcb373:
          bVar17 = false;
        }
        else {
          bVar17 = IsInParallelGameThread();
          if ((bVar17) || (bVar17 = IsInGameThread(), bVar17)) {
            lVar56 = 0;
          }
          else {
            lVar56 = 4;
          }
          if (*(int *)((longlong)pTVar40->ShadowedValue + lVar56) == 0) goto LAB_147fcb373;
          bVar17 = true;
        }
        if ((*(int *)(*(longlong *)((longlong)pvVar10 + (ulonglong)_tls_index * 8) + 0x9d4c) <
             ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
          if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
             ((IConsoleManager::SetupSingleton(),
              IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
              (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Singleton != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x4fb,L""), bVar18)))) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          plVar23 = (longlong *)
                    (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                              (IConsoleManager::Singleton,L"r.VT.MaxAnisotropy",1);
          pTVar40 = (TConsoleVariableData<int> *)0x0;
          if (plVar23 != (longlong *)0x0) {
            pTVar40 = (TConsoleVariableData<int> *)(**(code **)(*plVar23 + 0x68))(plVar23);
          }
          CVarVTMaxAnisotropic = pTVar40;
          _Init_thread_footer(&::_TSS5);
        }
        pTVar40 = CVarVTMaxAnisotropic;
        if ((bVar17) && (CVarVTMaxAnisotropic != (TConsoleVariableData<int> *)0x0)) {
          bVar17 = IsInParallelGameThread();
          if ((bVar17) || (bVar17 = IsInGameThread(), bVar17)) {
            iVar62 = pTVar40->ShadowedValue[0];
          }
          else {
            iVar62 = pTVar40->ShadowedValue[1];
          }
        }
        else {
          iVar62 = 1;
        }
        if (!bVar13) {
          local_960 = (URuntimeVirtualTexture *)0x0;
          GetTextureValue(this,uVar49,param_1,param_1->Material,&local_960);
          if ((local_960 == (URuntimeVirtualTexture *)0x0) ||
             (pIVar41 = URuntimeVirtualTexture::GetAllocatedVirtualTexture(local_960),
             pIVar41 == (IAllocatedVirtualTexture *)0x0)) {
LAB_147fcb518:
            *(FRHIShaderResourceView **)puVar55 =
                 (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
            TVar42 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                     ::StaticResource.StateRHI;
          }
          else {
            bVar1 = *(byte *)((longlong)local_a58 + 0x19 + (longlong)FVar38);
            pcVar7 = *(code **)(pIVar41->_padding_ + 0x30);
            bVar13 = URuntimeVirtualTexture::IsLayerSRGB(local_960,(uint)bVar1);
            lVar56 = (*pcVar7)(pIVar41,bVar1,bVar13);
            if (lVar56 == 0) goto LAB_147fcb518;
            *(longlong *)puVar55 = lVar56;
            TVar42 = TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                     ::StaticResource.StateRHI;
            if (((iVar62 < 8) &&
                (TVar42 = TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                          ::StaticResource.StateRHI, iVar62 < 4)) &&
               (TVar42 = TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                         ::StaticResource.StateRHI, 1 < iVar62)) {
              TVar42 = TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource.StateRHI;
            }
          }
          *(FRHISamplerState **)local_a30 = TVar42.Reference;
        }
        local_a58 = (uint *)((longlong)local_a58 + 0x1c);
        uVar49 = uVar49 + 1;
        puVar55 = puVar59;
      } while ((int)uVar49 < this->UniformTextureParameters[5].ArrayNum);
    }
    if (((Wrap_WorldGroupSettings->SamplerStateRHI).Reference == (FRHISamplerState *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Wrap_WorldGroupSettings->SamplerStateRHI",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                            ,0x733,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(FRHISamplerState **)puVar59 = (Wrap_WorldGroupSettings->SamplerStateRHI).Reference;
    if (((Clamp_WorldGroupSettings->SamplerStateRHI).Reference == (FRHISamplerState *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Clamp_WorldGroupSettings->SamplerStateRHI",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                            ,0x737,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(FRHISamplerState **)(puVar59 + 2) = (Clamp_WorldGroupSettings->SamplerStateRHI).Reference;
    if ((local_a10 + param_5 < puVar59 + 4) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferCursor <= TempBuffer + TempBufferSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                            ,0x73b,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (local_3b0.Components.AllocatorInstance.Data !=
        (FValueComponent *)local_3b0.Components.AllocatorInstance.InlineData) {
      FMemory::Free(local_3b0.Components.AllocatorInstance.Data);
    }
    if (local_3b0.Values.AllocatorInstance.Data !=
        (FPreshaderType *)local_3b0.Values.AllocatorInstance.InlineData) {
      FMemory::Free(local_3b0.Values.AllocatorInstance.Data);
    }
  }
  return;
}

// FindOrAddExternalTextureParameter @ 147fcc670

int __thiscall
FUniformExpressionSet::FindOrAddExternalTextureParameter
          (FUniformExpressionSet *this,FMaterialExternalTextureParameterInfo *param_1)

{
  TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_> *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  longlong lVar13;
  int local_18;
  
  iVar9 = (this->UniformExternalTextureParameters).ArrayNum;
  pTVar1 = &this->UniformExternalTextureParameters;
  uVar12 = 0;
  if (0 < iVar9) {
    lVar13 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < iVar9) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
      FVar10 = pTVar1->AllocatorInstance;
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar10 = (ForAnyElementType)
                 ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
      }
      piVar2 = (int *)(lVar13 + (longlong)FVar10);
      if ((piVar2[7] == param_1->SourceTextureIndex) &&
         (((piVar2[6] == (param_1->ExternalTextureGuid).D &&
           piVar2[5] == (param_1->ExternalTextureGuid).C) &&
          piVar2[4] == (param_1->ExternalTextureGuid).B) &&
          piVar2[3] == (param_1->ExternalTextureGuid).A)) {
        uVar4 = (param_1->ParameterName).ComparisonIndex;
        if ((*piVar2 == uVar4) && (piVar2[2] == (param_1->ParameterName).Number)) {
          return uVar12;
        }
      }
      iVar9 = (this->UniformExternalTextureParameters).ArrayNum;
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x20;
    } while ((int)uVar12 < iVar9);
  }
  FVar10 = pTVar1->AllocatorInstance;
  FVar11 = (ForAnyElementType)
           ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
  if (((ulonglong)FVar10 & 1) == 0) {
    FVar11 = FVar10;
  }
  if ((ulonglong)FVar11 <= param_1) {
    if (((ulonglong)FVar10 & 1) != 0) {
      FVar10 = (ForAnyElementType)
               ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
    }
    if ((param_1 < (FMaterialExternalTextureParameterInfo *)
                   ((longlong)FVar10 +
                   (longlong)(this->UniformExternalTextureParameters).ArrayMax * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar9 = (*pcVar5)();
      return iVar9;
    }
  }
  iVar9 = (this->UniformExternalTextureParameters).ArrayNum;
  piVar2 = &(this->UniformExternalTextureParameters).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x420,&pTVar1->AllocatorInstance,piVar2);
    (this->UniformExternalTextureParameters).ArrayNum = iVar9;
  }
  (this->UniformExternalTextureParameters).ArrayNum = iVar9 + 1;
  FVar10 = pTVar1->AllocatorInstance;
  if (((ulonglong)FVar10 & 1) != 0) {
    FVar10 = (ForAnyElementType)
             ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
  }
  uVar6 = *(undefined8 *)&(param_1->ParameterName).Number;
  puVar3 = (undefined8 *)((longlong)iVar9 * 0x20 + (longlong)FVar10);
  *puVar3 = *(undefined8 *)&param_1->ParameterName;
  puVar3[1] = uVar6;
  uVar6 = *(undefined8 *)&(param_1->ExternalTextureGuid).D;
  puVar3 = (undefined8 *)((longlong)iVar9 * 0x20 + 0x10 + (longlong)FVar10);
  *puVar3 = *(undefined8 *)&(param_1->ExternalTextureGuid).B;
  puVar3[1] = uVar6;
  return iVar9;
}

// FindOrAddNumericParameter @ 147fcc870

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

int __thiscall
FUniformExpressionSet::FindOrAddNumericParameter
          (FUniformExpressionSet *this,EMaterialParameterType param_1,
          FMaterialParameterInfo *param_2,uint param_3)

{
  TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_> *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  ulonglong *puVar12;
  longlong lVar13;
  uint local_58;
  undefined4 local_38;
  
  iVar8 = (this->UniformNumericParameters).ArrayNum;
  pTVar1 = &this->UniformNumericParameters;
  uVar11 = 0;
  if (0 < iVar8) {
    lVar13 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < iVar8) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      FVar10 = pTVar1->AllocatorInstance;
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar10 = (ForAnyElementType)
                 ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
      }
      puVar3 = (undefined8 *)(lVar13 + (longlong)FVar10);
      if ((*(EMaterialParameterType *)(lVar13 + 0x14 + (longlong)FVar10) == param_1) &&
         (*(uint *)(puVar3 + 3) == param_3)) {
        local_58 = (uint)*puVar3;
        if (((param_2->Name).ComparisonIndex.Value == local_58) &&
           ((((param_2->Name).Number == *(uint *)(puVar3 + 1) &&
             (*(int *)((longlong)puVar3 + 0xc) == param_2->Index)) &&
            (*(uchar *)(puVar3 + 2) == (param_2->Association).Value)))) {
          return uVar11;
        }
      }
      iVar8 = (this->UniformNumericParameters).ArrayNum;
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x1c;
    } while ((int)uVar11 < iVar8);
  }
  piVar2 = &(this->UniformNumericParameters).ArrayMax;
  iVar9 = iVar8;
  if (iVar8 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x41c,&pTVar1->AllocatorInstance,piVar2);
    (this->UniformNumericParameters).ArrayNum = iVar9;
  }
  (this->UniformNumericParameters).ArrayNum = iVar9 + 1;
  FVar10 = pTVar1->AllocatorInstance;
  if (((ulonglong)FVar10 & 1) != 0) {
    FVar10 = (ForAnyElementType)
             ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
  }
  puVar12 = (ulonglong *)((longlong)iVar9 * 0x1c + (longlong)FVar10);
  DefaultConstructItems<FMaterialNumericParameterInfo,int>(puVar12,1);
  *(EMaterialParameterType *)((longlong)puVar12 + 0x14) = param_1;
  FVar4 = param_2->Name;
  iVar9 = param_2->Index;
  local_38 = CONCAT31(local_38._1_3_,(param_2->Association).Value);
  *puVar12 = (ulonglong)FVar4 & 0xffffffff;
  puVar12[1] = CONCAT44(iVar9,FVar4.Number);
  *(undefined4 *)(puVar12 + 2) = local_38;
  *(uint *)(puVar12 + 3) = param_3;
  return iVar8;
}

// FindOrAddTextureCollectionParameter @ 147fcca20

int __thiscall
FUniformExpressionSet::FindOrAddTextureCollectionParameter
          (FUniformExpressionSet *this,FMaterialTextureCollectionParameterInfo *param_1)

{
  TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_> *pTVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  longlong lVar12;
  int local_18;
  
  pTVar1 = &this->UniformTextureCollectionParameters;
  iVar8 = (this->UniformTextureCollectionParameters).ArrayNum;
  uVar11 = 0;
  if (0 < iVar8) {
    lVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < iVar8) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
      FVar9 = pTVar1->AllocatorInstance;
      if (((ulonglong)FVar9 & 1) != 0) {
        FVar9 = (ForAnyElementType)
                ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
      }
      uVar3 = (param_1->ParameterInfo).Name.ComparisonIndex;
      piVar2 = (int *)(lVar12 + (longlong)FVar9);
      if (((((*piVar2 == uVar3) && (piVar2[2] == (param_1->ParameterInfo).Name.Number)) &&
           ((uchar)piVar2[4] == (param_1->ParameterInfo).Association.Value)) &&
          ((piVar2[3] == (param_1->ParameterInfo).Index &&
           (piVar2[5] == param_1->TextureCollectionIndex)))) &&
         ((bool)(char)piVar2[6] == param_1->bIsVirtualCollection)) {
        return uVar11;
      }
      iVar8 = (this->UniformTextureCollectionParameters).ArrayNum;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x1c;
    } while ((int)uVar11 < iVar8);
  }
  FVar9 = pTVar1->AllocatorInstance;
  FVar10 = (ForAnyElementType)
           ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
  if (((ulonglong)FVar9 & 1) == 0) {
    FVar10 = FVar9;
  }
  if ((ulonglong)FVar10 <= param_1) {
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = (ForAnyElementType)
              ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
    }
    if ((param_1 < (FMaterialTextureCollectionParameterInfo *)
                   ((longlong)FVar9 +
                   (longlong)(this->UniformTextureCollectionParameters).ArrayMax * 0x1c)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
  }
  iVar8 = (this->UniformTextureCollectionParameters).ArrayNum;
  piVar2 = &(this->UniformTextureCollectionParameters).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x41c,&pTVar1->AllocatorInstance,piVar2);
    (this->UniformTextureCollectionParameters).ArrayNum = iVar8;
  }
  (this->UniformTextureCollectionParameters).ArrayNum = iVar8 + 1;
  FVar9 = pTVar1->AllocatorInstance;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar9 = (ForAnyElementType)
            ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
  }
  uVar5 = *(undefined8 *)&(param_1->ParameterInfo).Name.Number;
  lVar12 = (longlong)iVar8 * 0x1c;
  *(undefined8 *)(lVar12 + (longlong)FVar9) = *(undefined8 *)&(param_1->ParameterInfo).Name;
  ((undefined8 *)(lVar12 + (longlong)FVar9))[1] = uVar5;
  *(undefined8 *)(lVar12 + 0x10 + (longlong)FVar9) =
       *(undefined8 *)&(param_1->ParameterInfo).Association;
  *(undefined4 *)(lVar12 + 0x18 + (longlong)FVar9) = *(undefined4 *)&param_1->bIsVirtualCollection;
  return iVar8;
}

// FindOrAddTextureParameter @ 147fccc20

int __thiscall
FUniformExpressionSet::FindOrAddTextureParameter
          (FUniformExpressionSet *this,EMaterialTextureParameterType param_1,
          FMaterialTextureParameterInfo *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  uint uVar10;
  ForAnyElementType *pFVar11;
  int local_28;
  
  uVar10 = 0;
  iVar6 = this->UniformTextureParameters[(int)param_1].ArrayNum;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar10 < iVar6) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      FVar7 = this->UniformTextureParameters[(int)param_1].AllocatorInstance;
      if (((ulonglong)FVar7 & 1) != 0) {
        FVar7 = (ForAnyElementType)
                ((longlong)&this->UniformTextureParameters[(int)param_1].AllocatorInstance.field_0x0
                + ((longlong)FVar7 >> 0x18));
      }
      uVar1 = (param_2->ParameterInfo).Name.ComparisonIndex;
      if (((((*(int *)(lVar9 + (longlong)FVar7) == uVar1) &&
            (*(uint *)(lVar9 + 8 + (longlong)FVar7) == (param_2->ParameterInfo).Name.Number)) &&
           (*(uchar *)(lVar9 + 0x10 + (longlong)FVar7) == (param_2->ParameterInfo).Association.Value
           )) && ((*(int *)(lVar9 + 0xc + (longlong)FVar7) == (param_2->ParameterInfo).Index &&
                  (*(int *)(lVar9 + 0x14 + (longlong)FVar7) == param_2->TextureIndex)))) &&
         ((*(uchar *)(lVar9 + 0x18 + (longlong)FVar7) == (param_2->SamplerSource).Value &&
          (*(uchar *)(lVar9 + 0x19 + (longlong)FVar7) == param_2->VirtualTextureLayerIndex)))) {
        return uVar10;
      }
      iVar6 = this->UniformTextureParameters[(int)param_1].ArrayNum;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x1c;
    } while ((int)uVar10 < iVar6);
  }
  pFVar11 = &this->UniformTextureParameters[(int)param_1].AllocatorInstance;
  FVar7 = *pFVar11;
  FVar8 = (ForAnyElementType)((longlong)&pFVar11->field_0x0 + ((longlong)FVar7 >> 0x18));
  if (((ulonglong)FVar7 & 1) == 0) {
    FVar8 = FVar7;
  }
  if ((ulonglong)FVar8 <= param_2) {
    if (((ulonglong)FVar7 & 1) != 0) {
      FVar7 = (ForAnyElementType)((longlong)&pFVar11->field_0x0 + ((longlong)FVar7 >> 0x18));
    }
    if ((param_2 < (FMaterialTextureParameterInfo *)
                   ((longlong)*(int *)&pFVar11[1].field_0x4 * 0x1c + (longlong)FVar7)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
  }
  iVar6 = *(int *)(pFVar11 + 1);
  if (iVar6 == *(int *)&pFVar11[1].field_0x4) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x41c,pFVar11,(int *)&pFVar11[1].field_0x4);
  }
  *(int *)(pFVar11 + 1) = iVar6 + 1;
  FVar7 = *pFVar11;
  if (((ulonglong)FVar7 & 1) != 0) {
    FVar7 = (ForAnyElementType)((longlong)&pFVar11->field_0x0 + ((longlong)FVar7 >> 0x18));
  }
  uVar3 = *(undefined8 *)&(param_2->ParameterInfo).Name.Number;
  lVar9 = (longlong)iVar6 * 0x1c;
  *(undefined8 *)(lVar9 + (longlong)FVar7) = *(undefined8 *)&(param_2->ParameterInfo).Name;
  ((undefined8 *)(lVar9 + (longlong)FVar7))[1] = uVar3;
  *(undefined8 *)(lVar9 + 0x10 + (longlong)FVar7) =
       *(undefined8 *)&(param_2->ParameterInfo).Association;
  *(undefined4 *)(lVar9 + 0x18 + (longlong)FVar7) = *(undefined4 *)&param_2->SamplerSource;
  return iVar6;
}

// GetGameThreadTextureCollectionValue @ 147fd2b60

void __thiscall
FUniformExpressionSet::GetGameThreadTextureCollectionValue
          (FUniformExpressionSet *this,int param_1,UMaterialInterface *param_2,FMaterial *param_3,
          UTextureCollection **param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FMaterialTextureCollectionParameterInfo *pFVar4;
  UTextureCollection *pUVar5;
  
  bVar2 = IsInGameThread();
  if (((!bVar2) && (bVar2 = IsInParallelGameThread(), !bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInParallelGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x3ab,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_4 = (UTextureCollection *)0x0;
  pFVar4 = GetTextureCollectionParameter(this,param_1);
  if ((((pFVar4->ParameterInfo).Name.ComparisonIndex.Value != 0) ||
      ((pFVar4->ParameterInfo).Name.Number != 0)) &&
     (cVar3 = (**(code **)(param_2->_padding_ + 0x420))(param_2,pFVar4,param_4,0), cVar3 != '\0')) {
    return;
  }
  pUVar5 = GetIndexedTextureCollection(param_3,pFVar4->TextureCollectionIndex);
  *param_4 = pUVar5;
  return;
}

// GetGameThreadTextureValue @ 147fd2d00

void __thiscall
FUniformExpressionSet::GetGameThreadTextureValue
          (FUniformExpressionSet *this,EMaterialTextureParameterType param_1,int param_2,
          UMaterialInterface *param_3,FMaterial *param_4,UTexture **param_5,bool param_6)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FMaterialTextureParameterInfo *pFVar4;
  UTexture *pUVar5;
  
  bVar2 = IsInGameThread();
  if (((!bVar2) && (bVar2 = IsInParallelGameThread(), !bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInParallelGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x35b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_5 = (UTexture *)0x0;
  pFVar4 = GetTextureParameter(this,param_1,param_2);
  if ((((pFVar4->ParameterInfo).Name.ComparisonIndex.Value != 0) ||
      ((pFVar4->ParameterInfo).Name.Number != 0)) &&
     (cVar3 = (**(code **)(param_3->_padding_ + 0x418))(param_3,pFVar4,param_5,0), cVar3 != '\0')) {
    return;
  }
  pUVar5 = GetIndexedTexture<UTexture>(param_4,pFVar4->TextureIndex);
  *param_5 = pUVar5;
  return;
}

// GetNumericParameterEvaluationOffset @ 147fd4460

uint __thiscall
FUniformExpressionSet::GetNumericParameterEvaluationOffset(FUniformExpressionSet *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForAnyElementType FVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->UniformParameterEvaluations).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  FVar4 = (this->UniformParameterEvaluations).AllocatorInstance;
  if (((ulonglong)FVar4 & 1) != 0) {
    FVar4 = (ForAnyElementType)
            ((longlong)
             &(((FUniformExpressionSet *)(this->UniformTextureParameters + -4))->
              UniformParameterEvaluations).AllocatorInstance.field_0x0 + ((longlong)FVar4 >> 0x18));
  }
  return (uint)*(ushort *)((longlong)FVar4 + 2U + (longlong)(int)param_1 * 4);
}

// GetReferencedTexture2DRHIHash @ 147fd6730

uint __thiscall
FUniformExpressionSet::GetReferencedTexture2DRHIHash
          (FUniformExpressionSet *this,FMaterialRenderContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMaterialTextureParameterInfo *pFVar5;
  FTextureResource *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  FRHITexture *pFVar9;
  int iVar10;
  UTexture *local_res8;
  
  uVar4 = 0;
  iVar10 = 0;
  if (0 < this->UniformTextureParameters[0].ArrayNum) {
    do {
      bVar3 = IsInParallelRenderingThread();
      if ((!bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInParallelRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                             ,0x36e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      pFVar5 = GetTextureParameter(this,Standard2D,iVar10);
      iVar1 = pFVar5->TextureIndex;
      if (((((pFVar5->ParameterInfo).Name.ComparisonIndex.Value == 0) &&
           ((pFVar5->ParameterInfo).Name.Number == 0)) ||
          (param_1->MaterialRenderProxy == (FMaterialRenderProxy *)0x0)) ||
         (bVar3 = FMaterialRenderProxy::GetTextureValue
                            (param_1->MaterialRenderProxy,&pFVar5->ParameterInfo,&local_res8,param_1
                            ), !bVar3)) {
        local_res8 = GetIndexedTexture<UTexture>(param_1->Material,iVar1);
      }
      pFVar9 = (FRHITexture *)0x0;
      if (((local_res8 != (UTexture *)0x0) &&
          (pFVar6 = UTexture::GetResource(local_res8), pFVar6 != (FTextureResource *)0x0)) &&
         (((local_res8->TextureReference->TextureReferenceRHI).Reference !=
           (FRHITextureReference *)0x0 &&
          (uVar7 = (**(code **)(local_res8->_padding_ + 0x340))(), (uVar7 & 0x3010) != 0)))) {
        pFVar9 = (((local_res8->TextureReference->TextureReferenceRHI).Reference)->ReferencedTexture
                 ).Reference;
      }
      iVar10 = iVar10 + 1;
      uVar8 = ((uint)((ulonglong)pFVar9 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar9 >> 4)) *
              -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      uVar8 = uVar8 >> 0x10 ^ uVar8;
      uVar4 = uVar4 + uVar8 * 0x40 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar8;
    } while (iVar10 < this->UniformTextureParameters[0].ArrayNum);
  }
  return uVar4;
}

// GetSummaryString @ 147fd7c70

FString * __thiscall
FUniformExpressionSet::GetSummaryString(FUniformExpressionSet *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"(%u preshaders, %u 2d tex, %u cube tex, %u 2darray tex, %u cubearray tex, %u 3d tex, %u virtual tex, %u sparse volume tex, %u external tex, %u tex collections, %u VT stacks, %u material cache tag stacks, %u collections)"
            );
  return __return_storage_ptr__;
}

// GetTextureCollectionParameter @ 147fd8ce0

FMaterialTextureCollectionParameterInfo * __thiscall
FUniformExpressionSet::GetTextureCollectionParameter(FUniformExpressionSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMaterialTextureCollectionParameterInfo *pFVar4;
  ForAnyElementType FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->UniformTextureCollectionParameters).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMaterialTextureCollectionParameterInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  FVar5 = (this->UniformTextureCollectionParameters).AllocatorInstance;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)&(this->UniformTextureCollectionParameters).AllocatorInstance.field_0x0 +
            ((longlong)FVar5 >> 0x18));
  }
  return (FMaterialTextureCollectionParameterInfo *)((longlong)param_1 * 0x1c + (longlong)FVar5);
}

// GetTextureCollectionValue @ 147fd8e60

void __thiscall
FUniformExpressionSet::GetTextureCollectionValue
          (FUniformExpressionSet *this,int param_1,FMaterialRenderContext *param_2,
          FMaterial *param_3,UTextureCollection **param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FMaterialTextureCollectionParameterInfo *pFVar4;
  UTextureCollection *pUVar5;
  
  bVar3 = IsInParallelRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x39d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->UniformTextureCollectionParameters).ArrayNum <= param_1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1774855081422750622>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                       ,0x39e,"Index < GetNumTextureCollections()");
    if (!bVar3) {
      *param_4 = (UTextureCollection *)0x0;
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar4 = GetTextureCollectionParameter(this,param_1);
  iVar1 = pFVar4->TextureCollectionIndex;
  if (((((pFVar4->ParameterInfo).Name.ComparisonIndex.Value != 0) ||
       ((pFVar4->ParameterInfo).Name.Number != 0)) &&
      (param_2->MaterialRenderProxy != (FMaterialRenderProxy *)0x0)) &&
     (bVar3 = FMaterialRenderProxy::GetTextureCollectionValue
                        (param_2->MaterialRenderProxy,&pFVar4->ParameterInfo,param_4,param_2), bVar3
     )) {
    return;
  }
  pUVar5 = GetIndexedTextureCollection(param_2->Material,iVar1);
  *param_4 = pUVar5;
  return;
}

// GetTextureValue @ 147fd9540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FUniformExpressionSet::GetTextureValue
          (FUniformExpressionSet *this,int param_1,FMaterialRenderContext *param_2,
          FMaterial *param_3,URuntimeVirtualTexture **param_4)

{
  int iVar1;
  FMaterial *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMaterialTextureParameterInfo *pFVar5;
  UClass *pUVar6;
  URuntimeVirtualTexture *pUVar7;
  longlong local_38;
  int local_30;
  void *local_28 [2];
  
  bVar4 = IsInParallelRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x37f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->UniformTextureParameters[5].ArrayNum <= param_1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1774855081422750593>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                       ,0x381,"Index < VirtualTexturesNum");
    if (!bVar4) {
      *param_4 = (URuntimeVirtualTexture *)0x0;
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = GetTextureParameter(this,Virtual,param_1);
  iVar1 = pFVar5->TextureIndex;
  if (((((pFVar5->ParameterInfo).Name.ComparisonIndex.Value != 0) ||
       ((pFVar5->ParameterInfo).Name.Number != 0)) &&
      (param_2->MaterialRenderProxy != (FMaterialRenderProxy *)0x0)) &&
     (bVar4 = FMaterialRenderProxy::GetTextureValue
                        (param_2->MaterialRenderProxy,&pFVar5->ParameterInfo,param_4,param_2), bVar4
     )) {
    return;
  }
  pFVar2 = param_2->Material;
  (**(code **)(pFVar2->_padding_ + 0x4f8))(pFVar2,&local_38);
  if (((iVar1 < 0) || (local_30 <= iVar1)) ||
     (pUVar7 = *(URuntimeVirtualTexture **)(local_38 + (longlong)iVar1 * 8),
     pUVar7 == (URuntimeVirtualTexture *)0x0)) {
    if (bWarnedOnce == false) {
      if (2 < (byte)LogMaterial._0_1_) {
        (**(code **)(pFVar2->_padding_ + 0x390))(pFVar2,local_28);
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u__s__Requesting__1519d2550,
                   (FLogCategoryBase *)&LogMaterial);
        if (local_28[0] != (void *)0x0) {
          FMemory::Free(local_28[0]);
        }
      }
      bWarnedOnce = true;
    }
  }
  else {
    pUVar6 = Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_147fd96e3;
  }
  pUVar7 = (URuntimeVirtualTexture *)0x0;
LAB_147fd96e3:
  *param_4 = pUVar7;
  return;
}

// GetTextureValue @ 147fd9710

void __thiscall
FUniformExpressionSet::GetTextureValue
          (FUniformExpressionSet *this,int param_1,FMaterialRenderContext *param_2,
          FMaterial *param_3,USparseVolumeTexture **param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FMaterialTextureParameterInfo *pFVar4;
  USparseVolumeTexture *pUVar5;
  
  bVar3 = IsInParallelRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x38e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->UniformTextureParameters[6].ArrayNum <= param_1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1774855081422750608>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                       ,0x390,"Index < VolumeTexturesNum");
    if (!bVar3) {
      *param_4 = (USparseVolumeTexture *)0x0;
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar4 = GetTextureParameter(this,SparseVolume,param_1);
  iVar1 = pFVar4->TextureIndex;
  if (((((pFVar4->ParameterInfo).Name.ComparisonIndex.Value != 0) ||
       ((pFVar4->ParameterInfo).Name.Number != 0)) &&
      (param_2->MaterialRenderProxy != (FMaterialRenderProxy *)0x0)) &&
     (bVar3 = FMaterialRenderProxy::GetTextureValue
                        (param_2->MaterialRenderProxy,&pFVar4->ParameterInfo,param_4,param_2), bVar3
     )) {
    return;
  }
  pUVar5 = GetIndexedTexture<USparseVolumeTexture>(param_2->Material,iVar1);
  *param_4 = pUVar5;
  return;
}

// GetTextureValue @ 147fd9810

void __thiscall
FUniformExpressionSet::GetTextureValue
          (FUniformExpressionSet *this,EMaterialTextureParameterType param_1,int param_2,
          FMaterialRenderContext *param_3,FMaterial *param_4,UTexture **param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FMaterialTextureParameterInfo *pFVar4;
  UTexture *pUVar5;
  
  bVar3 = IsInParallelRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x36e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar4 = GetTextureParameter(this,param_1,param_2);
  iVar1 = pFVar4->TextureIndex;
  if (((((pFVar4->ParameterInfo).Name.ComparisonIndex.Value != 0) ||
       ((pFVar4->ParameterInfo).Name.Number != 0)) &&
      (param_3->MaterialRenderProxy != (FMaterialRenderProxy *)0x0)) &&
     (bVar3 = FMaterialRenderProxy::GetTextureValue
                        (param_3->MaterialRenderProxy,&pFVar4->ParameterInfo,param_5,param_3), bVar3
     )) {
    return;
  }
  pUVar5 = GetIndexedTexture<UTexture>(param_3->Material,iVar1);
  *param_5 = pUVar5;
  return;
}

// GetVTStackAndLayerIndex @ 147fda840

FVTPackedStackAndLayerIndex __thiscall
FUniformExpressionSet::GetVTStackAndLayerIndex(FUniformExpressionSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  undefined4 in_register_00000014;
  undefined4 *puVar7;
  int in_R8D;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_00000014,param_1);
  iVar5 = (this->VTStacks).ArrayNum;
  uVar4 = 0;
  if (0 < iVar5) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar5) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FVTPackedStackAndLayerIndex)uVar4;
      }
      FVar6 = (this->VTStacks).AllocatorInstance;
      if (((ulonglong)FVar6 & 1) != 0) {
        FVar6 = (ForAnyElementType)
                ((longlong)(this->UniformTextureParameters + 0xe) + ((longlong)FVar6 >> 0x18) + 8);
      }
      iVar5 = FMaterialVirtualTextureStack::FindLayer
                        ((FMaterialVirtualTextureStack *)
                         ((longlong)FVar6 + (longlong)(int)uVar4 * 0x28),in_R8D);
      if (-1 < iVar5) {
        *(short *)puVar7 = (short)uVar4;
        *(short *)((longlong)puVar7 + 2) = (short)iVar5;
        return (FVTPackedStackAndLayerIndex)param_1;
      }
      iVar5 = (this->VTStacks).ArrayNum;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar5);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                     ,0x2cf,L"");
  if (!bVar2) {
    *puVar7 = 0xffffffff;
    return (FVTPackedStackAndLayerIndex)param_1;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (FVTPackedStackAndLayerIndex)uVar4;
}

// IsEmpty @ 147fe2700

bool __thiscall FUniformExpressionSet::IsEmpty(FUniformExpressionSet *this)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = &this->UniformTextureParameters[0].ArrayNum;
  do {
    if (*piVar1 != 0) {
      return false;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 4;
  } while (uVar2 < 7);
  if (((((this->UniformNumericParameters).ArrayNum == 0) &&
       ((this->UniformPreshaders).ArrayNum == 0)) &&
      ((this->UniformExternalTextureParameters).ArrayNum == 0)) &&
     ((((this->UniformTextureCollectionParameters).ArrayNum == 0 && ((this->VTStacks).ArrayNum == 0)
       ) && (((this->MaterialCacheTagStacks).ArrayNum == 0 &&
             ((this->ParameterCollections).ArrayNum == 0)))))) {
    return true;
  }
  return false;
}

// SetParameterCollections @ 147ff67f0

void __thiscall
FUniformExpressionSet::SetParameterCollections
          (FUniformExpressionSet *this,
          TArrayView<UMaterialParameterCollection_const_*_const,int> *param_1)

{
  int *piVar1;
  TArray<FGuid,TMemoryImageAllocator<0>_> *pTVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  
  uVar8 = param_1->ArrayNum;
  uVar13 = (ulonglong)uVar8;
  pTVar2 = &this->ParameterCollections;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar13);
  }
  piVar1 = &(this->ParameterCollections).ArrayMax;
  (this->ParameterCollections).ArrayNum = 0;
  if (*piVar1 != uVar8) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x10,4,uVar8,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar12 = 0;
  if (0 < (int)uVar8) {
    lVar15 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (int)uVar13) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar11 = pTVar2->AllocatorInstance;
      lVar4 = *(longlong *)(lVar15 + (longlong)param_1->DataPtr);
      FVar14 = (ForAnyElementType)(lVar4 + 0x28);
      FVar10 = (ForAnyElementType)
               ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar11 >> 0x18));
      if (((ulonglong)FVar11 & 1) == 0) {
        FVar10 = FVar11;
      }
      if ((ulonglong)FVar10 <= (ulonglong)FVar14) {
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForAnyElementType)
                   ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar11 >> 0x18));
        }
        if (((ulonglong)FVar14 < (ulonglong)((longlong)FVar11 + (longlong)*piVar1 * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar9 = (this->ParameterCollections).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                          (0x410,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ParameterCollections).ArrayNum = iVar9 + 1;
      FVar11 = pTVar2->AllocatorInstance;
      if (((ulonglong)FVar11 & 1) != 0) {
        FVar11 = (ForAnyElementType)
                 ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar11 >> 0x18));
      }
      uVar6 = *(undefined8 *)(lVar4 + 0x30);
      uVar8 = param_1->ArrayNum;
      uVar13 = (ulonglong)uVar8;
      uVar12 = uVar12 + 1;
      lVar15 = lVar15 + 8;
      puVar3 = (undefined8 *)((longlong)FVar11 + (longlong)iVar9 * 0x10);
      *puVar3 = *(undefined8 *)FVar14;
      puVar3[1] = uVar6;
    } while ((int)uVar12 < (int)uVar8);
  }
  return;
}

// SetVTLayer @ 147ff7350

void __thiscall
FUniformExpressionSet::SetVTLayer(FUniformExpressionSet *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForAnyElementType FVar4;
  
  uVar3 = 0;
  if (param_1 < (this->VTStacks).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar4 = (this->VTStacks).AllocatorInstance;
  if (((ulonglong)FVar4 & 1) != 0) {
    FVar4 = (ForAnyElementType)
            ((longlong)&(this->VTStacks).AllocatorInstance.field_0x0 + ((longlong)FVar4 >> 0x18));
  }
  FMaterialVirtualTextureStack::SetLayer
            ((FMaterialVirtualTextureStack *)((longlong)FVar4 + (longlong)param_1 * 0x28),param_2,
             param_3);
  return;
}

// WriteUniformPreshaderEntry @ 148001c60

void __thiscall
FUniformExpressionSet::WriteUniformPreshaderEntry
          (FUniformExpressionSet *this,uint param_1,EValueType param_2,
          TFunction<void___cdecl(UE::Shader::FPreshaderData_&)> *param_3)

{
  TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_> *pTVar1;
  TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_> *pTVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  longlong *plVar9;
  int *piVar10;
  
  iVar5 = (this->UniformPreshaders).ArrayNum;
  pTVar1 = &this->UniformPreshaders;
  piVar10 = &(this->UniformPreshaders).ArrayMax;
  if (iVar5 == *piVar10) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x410,&pTVar1->AllocatorInstance,piVar10);
  }
  (this->UniformPreshaders).ArrayNum = iVar5 + 1;
  FVar8 = pTVar1->AllocatorInstance;
  if (((ulonglong)FVar8 & 1) != 0) {
    FVar8 = (ForAnyElementType)
            ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18));
  }
  piVar10 = (int *)((longlong)iVar5 * 0x10 + (longlong)FVar8);
  piVar10[2] = (this->UniformPreshaderFields).ArrayNum;
  piVar10[3] = 1;
  *piVar10 = (this->UniformPreshaderData).Data.ArrayNum;
  UE::Core::Private::Function::CheckCallable(*(void **)param_3);
  pcVar4 = *(code **)param_3;
  plVar9 = (longlong *)&param_3->field_0x10;
  if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
    plVar9 = *(longlong **)&param_3->field_0x28;
  }
  uVar6 = (**(code **)(*plVar9 + 8))();
  (*pcVar4)(uVar6,&this->UniformPreshaderData);
  pTVar2 = &this->UniformPreshaderFields;
  piVar3 = &(this->UniformPreshaderFields).ArrayMax;
  piVar10[1] = (this->UniformPreshaderData).Data.ArrayNum - *piVar10;
  iVar5 = (this->UniformPreshaderFields).ArrayNum;
  if (iVar5 == *piVar3) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x40c,&pTVar2->AllocatorInstance,piVar3);
  }
  (this->UniformPreshaderFields).ArrayNum = iVar5 + 1;
  FVar8 = pTVar2->AllocatorInstance;
  if (((ulonglong)FVar8 & 1) != 0) {
    FVar8 = (ForAnyElementType)
            ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18));
  }
  lVar7 = (longlong)iVar5;
  *(uint *)((longlong)FVar8 + lVar7 * 0xc) = param_1;
  *(EValueType *)((longlong)FVar8 + 8U + lVar7 * 0xc) = param_2;
  *(undefined4 *)((undefined1 *)((longlong)FVar8 + 4) + lVar7 * 0xc) = 0;
  return;
}

// GetNumericParameter @ 1485c6a60

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

FMaterialNumericParameterInfo * __thiscall
FUniformExpressionSet::GetNumericParameter(FUniformExpressionSet *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMaterialNumericParameterInfo *pFVar4;
  ForAnyElementType FVar5;
  
  uVar3 = 0;
  if ((int)param_1 < (this->UniformNumericParameters).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMaterialNumericParameterInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  FVar5 = (this->UniformNumericParameters).AllocatorInstance;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)&(this->UniformNumericParameters).AllocatorInstance.field_0x0 +
            ((longlong)FVar5 >> 0x18));
  }
  return (FMaterialNumericParameterInfo *)((longlong)(int)param_1 * 0x1c + (longlong)FVar5);
}

// operator() @ 15051ef20

bool __thiscall `FUniformExpressionSet::FillUniformBuffer'[::K]::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1774855081422751017>);
  if (bVar2) {
    FScriptName::ToString(*(FScriptName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1774855081422751017>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15051ef87;
    }
  }
  bVar2 = false;
LAB_15051ef87:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15051f2b0

bool __thiscall
`FUniformExpressionSet::FillUniformBuffer'::__l172::<lambda_2>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FName local_res10;
  FName local_res18 [2];
  FString local_68;
  FString local_58;
  void *local_48 [2];
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar6 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1774855081422751084>);
  if (bVar6) {
    UTexture::GetResource((UTexture *)**(undefined8 **)this);
    plVar1 = *(longlong **)(*(longlong *)((longlong)this + 8) + 8);
    (**(code **)(*plVar1 + 0x390))(plVar1,local_48);
    local_res10 = *(FName *)(*(longlong *)(**(longlong **)this + 0x10) + 0x18);
    ::FName::ToString(&local_res10,&local_58);
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_68);
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar6 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1774855081422751084>,&::ENSURE_Static);
    if (bVar6) {
      bVar6 = true;
      goto LAB_15051f41c;
    }
  }
  bVar6 = false;
LAB_15051f41c:
  if ((bVar3) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_48[0] != (void *)0x0)) {
    FMemory::Free(local_48[0]);
  }
  if (bVar6) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  return false;
}

