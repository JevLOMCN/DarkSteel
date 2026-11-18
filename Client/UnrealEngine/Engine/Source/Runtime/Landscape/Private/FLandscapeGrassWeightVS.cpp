// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 8

// ConstructCompiledInstance @ 145f86a30

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
FLandscapeGrassWeightVS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FMeshMaterialShader *this;
  FShaderParametersMetadata *pFVar1;
  
  this = ::operator_new(0x110);
  if (this != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    FShaderParameter::Bind
              ((FShaderParameter *)(this + 1),param_1->ParameterMap,L"RenderOffset",SPF_Optional);
    pFVar1 = FSceneTextureUniformParameters::GetStructMetadata();
    FShaderUniformBufferParameter::Bind
              (&this->PassUniformBuffer,param_1->ParameterMap,pFVar1->ShaderVariableName,
               SPF_Optional);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145f86b20

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

FShader * __cdecl FLandscapeGrassWeightVS::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 145f94750

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

FMeshMaterialShaderType * __cdecl FLandscapeGrassWeightVS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMeshMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,L"FLandscapeGrassWeightVS",
                 L"/Engine/Private/LandscapeGrassWeight.usf",L"VSMain",0,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/LandscapeGrassWeight.usf");
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshMaterialShaderType.h"
                           ,0x2e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMeshMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FLandscapeGrassWeightVS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 145f96100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FLandscapeGrassWeightVS::GetTypeLayout(FLandscapeGrassWeightVS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FLandscapeGrass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLandscapeGrassWeightVS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FLandscapeGrassWeightVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "RenderOffsetParameter";
    DAT_15519aa52 = Freeze::FindFieldNameLength(L"RenderOffsetParameter");
    _DAT_15519aa30 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519aa38 = ::TypeBuffer[0x10];
    DAT_15519aa38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519aa38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519aa38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519aa38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519aa38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519aa38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519aa38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLandscapeGrassWeightVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15519aa40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519aa48 = 0x108;
    _DAT_15519aa4c = 1;
    _DAT_15519aa50 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
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

// InternalDestroy @ 145f97c50

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
FLandscapeGrassWeightVS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x110);
  return;
}

// ShouldCompilePermutationImpl @ 145fa2f90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

bool __cdecl
FLandscapeGrassWeightVS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *pFVar5;
  FVertexFactoryType *pFVar6;
  FHashedName FStackX_8;
  FName FStackX_10;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (((int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel < 3) ||
     ((param_1->Flags & HasEditorOnlyData) == None)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((GGrassMapAlwaysBuildRuntimeGenerationResources != 0) ||
     ((GGrassEnable != 0 && ((bVar3 || (GGrassMapUseRuntimeGeneration != 0)))))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  pFVar5 = ::FName::FName(&FStackX_10,L"FLandscapeFixedGridVertexFactory",FNAME_Find);
  FHashedName::FHashedName(&FStackX_8,pFVar5);
  pFVar6 = FindVertexFactoryType(&FStackX_8);
  if ((((param_1[4].Flags & 0x80000002) != None) &&
      (*(FVertexFactoryType **)&param_1[7].PermutationId == pFVar6)) && (bVar3)) {
    return true;
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 145fa3510

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FLandscapeGrassWeightVS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 145fa42f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FLandscapeGrassWeightVS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FLandscapeGrass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLandscapeGrassWeightVS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FLandscapeGrassWeightVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "RenderOffsetParameter";
    DAT_15519aa52 = Freeze::FindFieldNameLength(L"RenderOffsetParameter");
    _DAT_15519aa30 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519aa38 = ::TypeBuffer[0x10];
    DAT_15519aa38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519aa38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519aa38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519aa38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519aa38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519aa38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519aa38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLandscapeGrassWeightVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15519aa40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519aa48 = 0x108;
    _DAT_15519aa4c = 1;
    _DAT_15519aa50 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
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

