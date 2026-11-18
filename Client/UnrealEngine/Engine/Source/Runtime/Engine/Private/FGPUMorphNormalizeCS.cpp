// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FGPUMorphNormalizeCS @ 148620220

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

FGPUMorphNormalizeCS * __thiscall
FGPUMorphNormalizeCS::FGPUMorphNormalizeCS
          (FGPUMorphNormalizeCS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderResourceParameter *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->MorphVertexBufferParameter;
  this_00->BaseIndex = 0;
  this_00->NumResources = '\0';
  this_00->Type = LooseData;
  (this->PositionScaleParameter).BufferIndex = 0;
  (this->PositionScaleParameter).BaseIndex = 0;
  (this->PositionScaleParameter).NumBytes = 0;
  (this->NumVerticesParameter).BufferIndex = 0;
  (this->NumVerticesParameter).BaseIndex = 0;
  (this->NumVerticesParameter).NumBytes = 0;
  FShaderResourceParameter::Bind(this_00,param_1->ParameterMap,L"MorphVertexBuffer",SPF_Optional);
  FShaderParameter::Bind
            (&this->PositionScaleParameter,param_1->ParameterMap,L"PositionScale",SPF_Optional);
  FShaderParameter::Bind
            (&this->NumVerticesParameter,param_1->ParameterMap,L"NumVertices",SPF_Optional);
  return this;
}

// FGPUMorphNormalizeCS @ 1486202c0

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

FGPUMorphNormalizeCS * __thiscall
FGPUMorphNormalizeCS::FGPUMorphNormalizeCS(FGPUMorphNormalizeCS *this)

{
  FShader::FShader((FShader *)this);
  (this->MorphVertexBufferParameter).BaseIndex = 0;
  *(undefined8 *)&(this->MorphVertexBufferParameter).NumResources = 0;
  (this->NumVerticesParameter).BufferIndex = 0;
  (this->NumVerticesParameter).BaseIndex = 0;
  (this->NumVerticesParameter).NumBytes = 0;
  return this;
}

// ConstructCompiledInstance @ 148634d10

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
FGPUMorphNormalizeCS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0xf0);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4 = 0;
    this[1].Bindings.Parameters.ArrayMax = 0;
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)(this + 1),param_1->ParameterMap,L"MorphVertexBuffer",
               SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4,
               param_1->ParameterMap,L"PositionScale",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2),
               param_1->ParameterMap,L"NumVertices",SPF_Optional);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 148634e10

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

FShader * __cdecl FGPUMorphNormalizeCS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xf0);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.Parameters.ArrayMax + 2) = 0;
    return this;
  }
  return (FShader *)0x0;
}

// Dispatch @ 148637e90

void __thiscall
FGPUMorphNormalizeCS::Dispatch(FGPUMorphNormalizeCS *this,FRHICommandList *param_1,uint param_2)

{
  TIntVector3<int>_u_0 local_18;
  
  FComputeShaderUtils::GetGroupCountWrapped
            ((TIntVector3<int> *)&local_18._s_0,
             (int)(((int)(param_2 + 0x3f) >> 0x1f & 0x3fU) + param_2 + 0x3f) >> 6);
  FRHIComputeCommandList::DispatchComputeShader
            ((FRHIComputeCommandList *)param_1,local_18._s_0.X,local_18._s_0.Y,local_18._s_0.Z);
  return;
}

// GetStaticType @ 14864fc70

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

FGlobalShaderType * __cdecl FGPUMorphNormalizeCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FGPUMorphNormalizeCS",
                 L"/Engine/Private/MorphTargets.usf",L"GPUMorphNormalizeCS",5,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xf0,(FShaderParametersMetadata *)0x0);
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
      atexit(`FGPUMorphNormalizeCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 148650620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FGPUMorphNormalizeCS::GetTypeLayout(FGPUMorphNormalizeCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FGPUMorphNormal;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FGPUMorphNormalizeCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FGPUMorphNormalizeCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumVerticesParameter";
    DAT_15524538a = Freeze::FindFieldNameLength(L"NumVerticesParameter");
    _DAT_155245368 = FShaderParameter::StaticGetTypeLayout();
    DAT_155245370 = ::TypeBuffer[0x10];
    DAT_155245370_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155245370_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155245370_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155245370_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155245370_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155245370_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155245370_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGPUMorphNormalizeCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155245378 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155245380 = 0xea;
    _DAT_155245384 = 1;
    _DAT_155245388 = 0;
    `public:_static_void___cdecl_FGPUMorphNormalizeCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PositionScaleParameter";
    DAT_15524535a = Freeze::FindFieldNameLength(L"PositionScaleParameter");
    _DAT_155245338 = FShaderParameter::StaticGetTypeLayout();
    DAT_155245340 = ::TypeBuffer[0x10];
    DAT_155245340_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155245340_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155245340_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155245340_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155245340_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155245340_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155245340_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGPUMorphNormalizeCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155245348 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155245350 = 0xe4;
    _DAT_155245354 = 1;
    _DAT_155245358 = 0;
    `public:_static_void___cdecl_FGPUMorphNormalizeCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MorphVertexBufferParameter";
    DAT_15524532a = Freeze::FindFieldNameLength(L"MorphVertexBufferParameter");
    _DAT_155245308 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155245310 = ::TypeBuffer[0x10];
    DAT_155245310_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155245310_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155245310_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155245310_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155245310_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155245310_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155245310_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGPUMorphNormalizeCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155245318 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155245320 = 0xe0;
    _DAT_155245324 = 1;
    _DAT_155245328 = 0;
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
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// InternalDestroy @ 148659730

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
FGPUMorphNormalizeCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf0);
  return;
}

// SetParameters @ 148667500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUMorphNormalizeCS::SetParameters
          (FGPUMorphNormalizeCS *this,FRHIBatchedShaderParameters *param_1,TVector4<double> *param_2
          ,FMorphTargetVertexInfoBuffers *param_3,FMorphVertexBuffer *param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  SetUAVParameter(param_1,&this->MorphVertexBufferParameter,(param_4->UAVValue).Reference);
  uVar1 = (this->PositionScaleParameter).NumBytes;
  uVar2 = (uint)uVar1;
  local_18 = (float)(param_2->field0_0x0)._s_0.X;
  if (0x10 < uVar1) {
    uVar2 = 0x10;
  }
  local_14 = (float)(param_2->field0_0x0)._s_0.Y;
  local_10 = (float)(param_2->field0_0x0)._s_0.Z;
  local_c = (float)(param_2->field0_0x0)._s_0.W;
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PositionScaleParameter).BufferIndex,
               (uint)(this->PositionScaleParameter).BaseIndex,uVar2,&local_18);
  }
  uVar1 = (this->NumVerticesParameter).NumBytes;
  uVar2 = (uint)uVar1;
  if (4 < uVar1) {
    uVar2 = 4;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->NumVerticesParameter).BufferIndex,
               (uint)(this->NumVerticesParameter).BaseIndex,uVar2,&param_5);
  }
  return;
}

// ShouldCompilePermutation @ 148668090

bool __cdecl
FGPUMorphNormalizeCS::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

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

// ShouldCompilePermutationImpl @ 148668150

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGPUMorphNormalizeCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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

// ShouldPrecachePermutationImpl @ 1486683b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FGPUMorphNormalizeCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 1486686a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FGPUMorphNormalizeCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FGPUMorphNormal;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FGPUMorphNormalizeCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FGPUMorphNormalizeCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumVerticesParameter";
    DAT_15524538a = Freeze::FindFieldNameLength(L"NumVerticesParameter");
    _DAT_155245368 = FShaderParameter::StaticGetTypeLayout();
    DAT_155245370 = ::TypeBuffer[0x10];
    DAT_155245370_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155245370_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155245370_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155245370_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155245370_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155245370_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155245370_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGPUMorphNormalizeCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155245378 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155245380 = 0xea;
    _DAT_155245384 = 1;
    _DAT_155245388 = 0;
    `public:_static_void___cdecl_FGPUMorphNormalizeCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PositionScaleParameter";
    DAT_15524535a = Freeze::FindFieldNameLength(L"PositionScaleParameter");
    _DAT_155245338 = FShaderParameter::StaticGetTypeLayout();
    DAT_155245340 = ::TypeBuffer[0x10];
    DAT_155245340_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155245340_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155245340_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155245340_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155245340_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155245340_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155245340_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGPUMorphNormalizeCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155245348 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155245350 = 0xe4;
    _DAT_155245354 = 1;
    _DAT_155245358 = 0;
    `public:_static_void___cdecl_FGPUMorphNormalizeCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MorphVertexBufferParameter";
    DAT_15524532a = Freeze::FindFieldNameLength(L"MorphVertexBufferParameter");
    _DAT_155245308 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155245310 = ::TypeBuffer[0x10];
    DAT_155245310_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155245310_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155245310_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155245310_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155245310_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155245310_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155245310_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGPUMorphNormalizeCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155245318 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155245320 = 0xe0;
    _DAT_155245324 = 1;
    _DAT_155245328 = 0;
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
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// UnsetParameters @ 148669d30

void __thiscall
FGPUMorphNormalizeCS::UnsetParameters(FGPUMorphNormalizeCS *this,FRHIBatchedShaderUnbinds *param_1)

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

