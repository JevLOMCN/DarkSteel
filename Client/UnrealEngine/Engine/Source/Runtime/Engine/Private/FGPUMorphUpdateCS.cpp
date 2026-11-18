// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// FGPUMorphUpdateCS @ 148620300

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGPUMorphUpdateCS * __thiscall
FGPUMorphUpdateCS::FGPUMorphUpdateCS
          (FGPUMorphUpdateCS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderResourceParameter *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->MorphVertexBufferParameter;
  this_00->BaseIndex = 0;
  this_00->NumResources = '\0';
  this_00->Type = LooseData;
  (this->MorphTargetWeightsParameter).BufferIndex = 0;
  (this->MorphTargetWeightsParameter).BaseIndex = 0;
  (this->MorphTargetWeightsParameter).NumBytes = 0;
  (this->OffsetAndSizeParameter).BufferIndex = 0;
  *(undefined8 *)&(this->OffsetAndSizeParameter).BaseIndex = 0;
  *(undefined8 *)&(this->MorphTargetBatchOffsetsParameter).NumBytes = 0;
  (this->PositionScaleParameter).BufferIndex = 0;
  (this->PositionScaleParameter).BaseIndex = 0;
  (this->PositionScaleParameter).NumBytes = 0;
  (this->PrecisionParameter).BufferIndex = 0;
  *(undefined8 *)&(this->PrecisionParameter).BaseIndex = 0;
  *(undefined4 *)&(this->NumGroupsParameter).NumBytes = 0;
  (this->MorphDataBufferParameter).NumResources = '\0';
  (this->MorphDataBufferParameter).Type = LooseData;
  FShaderResourceParameter::Bind(this_00,param_1->ParameterMap,L"MorphVertexBuffer",SPF_Optional);
  FShaderParameter::Bind
            (&this->MorphTargetWeightsParameter,param_1->ParameterMap,L"MorphTargetWeights",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->MorphTargetBatchOffsetsParameter,param_1->ParameterMap,
             L"MorphTargetBatchOffsets",SPF_Optional);
  FShaderParameter::Bind
            (&this->MorphTargetGroupOffsetsParameter,param_1->ParameterMap,
             L"MorphTargetGroupOffsets",SPF_Optional);
  FShaderParameter::Bind
            (&this->PositionScaleParameter,param_1->ParameterMap,L"PositionScale",SPF_Optional);
  FShaderParameter::Bind(&this->PrecisionParameter,param_1->ParameterMap,L"Precision",SPF_Optional);
  FShaderParameter::Bind(&this->NumGroupsParameter,param_1->ParameterMap,L"NumGroups",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->MorphDataBufferParameter,param_1->ParameterMap,L"MorphDataBuffer",SPF_Optional);
  return this;
}

// FGPUMorphUpdateCS @ 148620460

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGPUMorphUpdateCS * __thiscall FGPUMorphUpdateCS::FGPUMorphUpdateCS(FGPUMorphUpdateCS *this)

{
  FShader::FShader((FShader *)this);
  (this->MorphVertexBufferParameter).BaseIndex = 0;
  *(undefined8 *)&(this->MorphVertexBufferParameter).NumResources = 0;
  (this->OffsetAndSizeParameter).BufferIndex = 0;
  (this->OffsetAndSizeParameter).BaseIndex = 0;
  (this->OffsetAndSizeParameter).NumBytes = 0;
  (this->MorphTargetBatchOffsetsParameter).BufferIndex = 0;
  *(undefined8 *)&(this->MorphTargetBatchOffsetsParameter).BaseIndex = 0;
  *(undefined8 *)&(this->MorphTargetGroupOffsetsParameter).NumBytes = 0;
  (this->PrecisionParameter).BufferIndex = 0;
  (this->PrecisionParameter).BaseIndex = 0;
  (this->PrecisionParameter).NumBytes = 0;
  (this->NumGroupsParameter).BufferIndex = 0;
  *(undefined8 *)&(this->NumGroupsParameter).BaseIndex = 0;
  return this;
}

// ConstructCompiledInstance @ 148634dd0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl
FGPUMorphUpdateCS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FGPUMorphUpdateCS *pFVar1;
  
  pFVar1 = ::operator_new(0x118);
  if (pFVar1 != (FGPUMorphUpdateCS *)0x0) {
    pFVar1 = FGPUMorphUpdateCS(pFVar1,param_1);
    return (FShader *)pFVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 148634e70

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl FGPUMorphUpdateCS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x118);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.BindlessResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.BindlessResourceParameters.ArrayNum + 2) = 0;
    return this;
  }
  return (FShader *)0x0;
}

// Dispatch @ 148637ee0

void __thiscall
FGPUMorphUpdateCS::Dispatch(FGPUMorphUpdateCS *this,FRHICommandList *param_1,uint param_2)

{
  TIntVector3<int>_u_0 local_18;
  
  FComputeShaderUtils::GetGroupCountWrapped((TIntVector3<int> *)&local_18._s_0,param_2);
  FRHIComputeCommandList::DispatchComputeShader
            ((FRHIComputeCommandList *)param_1,local_18._s_0.X,local_18._s_0.Y,local_18._s_0.Z);
  return;
}

// GetStaticType @ 14864fe70

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGlobalShaderType * __cdecl FGPUMorphUpdateCS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FGPUMorphUpdateCS",
                 L"/Engine/Private/MorphTargets.usf",L"GPUMorphUpdateCS",5,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x118,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/MorphTargets.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FGPUMorphUpdateCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 148650630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FGPUMorphUpdateCS::GetTypeLayout(FGPUMorphUpdateCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x18';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FGPUMorphUpdate;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FGPUMorphUpdateCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MorphVertexBufferParameter";
    DAT_15524517a = Freeze::FindFieldNameLength(L"MorphVertexBufferParameter");
    _DAT_155245158 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155245160 = ::TypeBuffer[0x10];
    DAT_155245160_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155245160_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155245160_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155245160_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155245160_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155245160_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155245160_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155245168 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155245170 = 0xe0;
    _DAT_155245174 = 1;
    _DAT_155245178 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 148658160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FGPUMorphUpdateCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "MorphDataBufferParameter";
  DAT_1552452fa = Freeze::FindFieldNameLength(L"MorphDataBufferParameter");
  _DAT_1552452d8 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_1552452f0 = 0x10e;
  _DAT_1552452e8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552452f4 = 1;
  _DAT_1552452f8 = 0;
  _DAT_1552452e0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "NumGroupsParameter";
  DAT_1552452ca = Freeze::FindFieldNameLength(L"NumGroupsParameter");
  _DAT_1552452a8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1552452b8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552452c0 = 0x108;
  _DAT_1552452c4 = 1;
  _DAT_1552452c8 = 0;
  _DAT_1552452b0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PrecisionParameter";
  DAT_15524529a = Freeze::FindFieldNameLength(L"PrecisionParameter");
  _DAT_155245278 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155245288 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155245290 = 0x102;
  _DAT_155245294 = 1;
  _DAT_155245298 = 0;
  _DAT_155245280 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PositionScaleParameter";
  DAT_15524526a = Freeze::FindFieldNameLength(L"PositionScaleParameter");
  _DAT_155245248 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155245258 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155245260 = 0xfc;
  _DAT_155245264 = 1;
  _DAT_155245268 = 0;
  _DAT_155245250 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "MorphTargetGroupOffsetsParameter";
  DAT_15524523a = Freeze::FindFieldNameLength(L"MorphTargetGroupOffsetsParameter");
  _DAT_155245218 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155245228 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155245230 = 0xf6;
  _DAT_155245234 = 1;
  _DAT_155245238 = 0;
  _DAT_155245220 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "MorphTargetBatchOffsetsParameter";
  DAT_15524520a = Freeze::FindFieldNameLength(L"MorphTargetBatchOffsetsParameter");
  _DAT_1552451e8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1552451f8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155245200 = 0xf0;
  _DAT_155245204 = 1;
  _DAT_155245208 = 0;
  _DAT_1552451f0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "OffsetAndSizeParameter";
  DAT_1552451da = Freeze::FindFieldNameLength(L"OffsetAndSizeParameter");
  _DAT_1552451b8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1552451c8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552451d0 = 0xea;
  _DAT_1552451d4 = 1;
  _DAT_1552451d8 = 0;
  _DAT_1552451c0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "MorphTargetWeightsParameter";
  DAT_1552451aa = Freeze::FindFieldNameLength(L"MorphTargetWeightsParameter");
  _DAT_155245188 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155245198 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552451a0 = 0xe4;
  _DAT_1552451a4 = 1;
  _DAT_1552451a8 = 0;
  _DAT_155245190 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 148659770

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FGPUMorphUpdateCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x118);
  return;
}

// SetParameters @ 148667600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUMorphUpdateCS::SetParameters
          (FGPUMorphUpdateCS *this,FRHIBatchedShaderParameters *param_1,TVector4<double> *param_2,
          FMorphTargetVertexInfoBuffers *param_3,FMorphVertexBuffer *param_4,uint param_5,
          uint *param_6,uint *param_7,float *param_8)

{
  ushort uVar1;
  FRHIShaderResourceView *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMorphVertexBuffer **ppFVar5;
  FRHIBatchedShaderParametersAllocator *pFVar6;
  FMemStackBase *pFVar7;
  TArrayView<FRHIShaderParameterResource,int> *pTVar8;
  uint uVar9;
  FRHIShaderResourceView **ppFVar10;
  ushort local_res8 [4];
  float local_res18;
  float local_res1c;
  FRHIShaderResourceView *local_res20;
  FRHIShaderResourceView *local_38 [2];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  SetUAVParameter(param_1,&this->MorphVertexBufferParameter,(param_4->UAVValue).Reference);
  uVar1 = (this->PositionScaleParameter).NumBytes;
  uVar9 = (uint)uVar1;
  local_28 = (float)(param_2->field0_0x0)._s_0.X;
  if (0x10 < uVar1) {
    uVar9 = 0x10;
  }
  local_24 = (float)(param_2->field0_0x0)._s_0.Y;
  local_20 = (float)(param_2->field0_0x0)._s_0.Z;
  local_1c = (float)(param_2->field0_0x0)._s_0.W;
  if (uVar9 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PositionScaleParameter).BufferIndex,
               (uint)(this->PositionScaleParameter).BaseIndex,uVar9,&local_28);
  }
  uVar1 = (this->PrecisionParameter).NumBytes;
  uVar9 = (uint)uVar1;
  local_res18 = param_3->PositionPrecision;
  local_res1c = param_3->TangentZPrecision;
  if (8 < uVar1) {
    uVar9 = 8;
  }
  if (uVar9 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PrecisionParameter).BufferIndex,
               (uint)(this->PrecisionParameter).BaseIndex,uVar9,&local_res18);
  }
  uVar1 = (this->NumGroupsParameter).NumBytes;
  uVar9 = (uint)uVar1;
  if (4 < uVar1) {
    uVar9 = 4;
  }
  if (uVar9 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->NumGroupsParameter).BufferIndex,
               (uint)(this->NumGroupsParameter).BaseIndex,uVar9,&param_5);
  }
  pFVar2 = (param_3->MorphDataSRV).Reference;
  if ((this->MorphDataBufferParameter).NumResources != '\0') {
    uVar1 = (this->MorphDataBufferParameter).BaseIndex;
    pFVar6 = param_1->Allocator;
    if ((this->MorphDataBufferParameter).Type == BindlessSRV) {
      local_res20 = pFVar2;
      param_4._0_2_ = uVar1;
      if (pFVar6->AttachedParameters != param_1) {
        if (pFVar6->AttachedParameters != (FRHIBatchedShaderParameters *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!AttachedParameters",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                             ,0x82,
                             L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar6->AttachedParameters = param_1;
      }
      pFVar6 = param_1->Allocator;
      pTVar8 = &param_1->BindlessParameters;
      ppFVar5 = &param_4;
      ppFVar10 = &local_res20;
      pFVar7 = &pFVar6->BindlessParameters;
    }
    else {
      local_res8[0] = uVar1;
      local_38[0] = pFVar2;
      if (pFVar6->AttachedParameters != param_1) {
        if (pFVar6->AttachedParameters != (FRHIBatchedShaderParameters *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!AttachedParameters",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                             ,0x82,
                             L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar6->AttachedParameters = param_1;
      }
      pFVar6 = param_1->Allocator;
      pTVar8 = &param_1->ResourceParameters;
      ppFVar5 = (FMorphVertexBuffer **)local_res8;
      ppFVar10 = local_38;
      pFVar7 = &pFVar6->ResourceParameters;
    }
    FRHIBatchedShaderParametersAllocator::
    Emplace<FRHIShaderParameterResource,FRHIShaderResourceView_*_&,unsigned_short_&>
              (pFVar6,pFVar7,pTVar8,ppFVar10,(ushort *)ppFVar5);
  }
  uVar1 = (this->MorphTargetBatchOffsetsParameter).NumBytes;
  uVar9 = (uint)uVar1;
  if (0x200 < uVar1) {
    uVar9 = 0x200;
  }
  if (uVar9 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->MorphTargetBatchOffsetsParameter).BufferIndex,
               (uint)(this->MorphTargetBatchOffsetsParameter).BaseIndex,uVar9,param_6);
  }
  uVar1 = (this->MorphTargetGroupOffsetsParameter).NumBytes;
  uVar9 = (uint)uVar1;
  if (0x200 < uVar1) {
    uVar9 = 0x200;
  }
  if (uVar9 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->MorphTargetGroupOffsetsParameter).BufferIndex,
               (uint)(this->MorphTargetGroupOffsetsParameter).BaseIndex,uVar9,param_7);
  }
  uVar1 = (this->MorphTargetWeightsParameter).NumBytes;
  uVar9 = (uint)uVar1;
  if (0x200 < uVar1) {
    uVar9 = 0x200;
  }
  if (uVar9 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->MorphTargetWeightsParameter).BufferIndex,
               (uint)(this->MorphTargetWeightsParameter).BaseIndex,uVar9,param_8);
  }
  return;
}

// ShouldCompilePermutation @ 1486680f0

bool __cdecl
FGPUMorphUpdateCS::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *(ushort *)param_1;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1486681b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FGPUMorphUpdateCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldPrecachePermutationImpl @ 1486683c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FGPUMorphUpdateCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 148668920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FGPUMorphUpdateCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x18';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FGPUMorphUpdate;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FGPUMorphUpdateCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MorphVertexBufferParameter";
    DAT_15524517a = Freeze::FindFieldNameLength(L"MorphVertexBufferParameter");
    _DAT_155245158 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155245160 = ::TypeBuffer[0x10];
    DAT_155245160_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155245160_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155245160_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155245160_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155245160_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155245160_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155245160_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGPUMorphUpdateCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155245168 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155245170 = 0xe0;
    _DAT_155245174 = 1;
    _DAT_155245178 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// UnsetParameters @ 148669da0

void __thiscall
FGPUMorphUpdateCS::UnsetParameters(FGPUMorphUpdateCS *this,FRHIBatchedShaderUnbinds *param_1)

{
  int *piVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  if (((this->MorphVertexBufferParameter).NumResources != '\0') &&
     ((this->MorphVertexBufferParameter).Type != BindlessSRV)) {
    iVar4 = (param_1->Unbinds).ArrayNum;
    piVar1 = &(param_1->Unbinds).ArrayMax;
    uVar2 = (this->MorphVertexBufferParameter).BaseIndex;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x204,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->Unbinds).ArrayNum = iVar4 + 1;
    pFVar3 = (param_1->Unbinds).AllocatorInstance.Data;
    *(ushort *)(pFVar3 + (longlong)iVar4 * 4) = uVar2;
    pFVar3[(longlong)iVar4 * 4 + 2] = (FScriptContainerElement)0x1;
  }
  return;
}

