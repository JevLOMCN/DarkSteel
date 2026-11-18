// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// FHairMaterialPS @ 14499dec0

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

FHairMaterialPS * __thiscall
FHairMaterialPS::FHairMaterialPS(FHairMaterialPS *this,CompiledShaderInitializerType *param_1)

{
  code *pcVar1;
  bool bVar2;
  EShadingPath EVar3;
  FHairMaterialPS *pFVar4;
  uint uVar5;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  (this->MaterialPass_MacroGroupId).BufferIndex = 0;
  (this->MaterialPass_MacroGroupId).BaseIndex = 0;
  (this->MaterialPass_MacroGroupId).NumBytes = 0;
  (this->MaterialPass_MaterialId).BufferIndex = 0;
  *(undefined8 *)&(this->MaterialPass_MaterialId).BaseIndex = 0;
  *(undefined8 *)&(this->MaterialPass_PrimitiveId).NumBytes = 0;
  (this->MaterialPass_Flags).BufferIndex = 0;
  (this->MaterialPass_Flags).BaseIndex = 0;
  (this->MaterialPass_Flags).NumBytes = 0;
  (this->MaterialPass_HairCoverageScale).BufferIndex = 0;
  (this->MaterialPass_HairCoverageScale).BaseIndex = 0;
  (this->MaterialPass_HairCoverageScale).NumBytes = 0;
  uVar5 = (uint)param_1->_padding_ >> 4 & 0xffff;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].bContainsValidPlatformInfo == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FHairMaterialPS *)(*pcVar1)();
    return pFVar4;
  }
  EVar3 = FSceneInterface::GetShadingPath
                    (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].MaxFeatureLevel);
  if ((EVar3 == Mobile) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FSceneInterface::GetShadingPath(FeatureLevel) != EShadingPath::Mobile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\HairStrands\\HairStrandsVisibility.cpp"
                         ,0x222,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FHairMaterialPS *)(*pcVar1)();
    return pFVar4;
  }
  FShaderParameter::Bind
            (&this->MaterialPass_MacroGroupId,(FShaderParameterMap *)param_1->_padding_,
             L"MaterialPass_MacroGroupId",SPF_Optional);
  FShaderParameter::Bind
            (&this->MaterialPass_MaterialId,(FShaderParameterMap *)param_1->_padding_,
             L"MaterialPass_MaterialId",SPF_Optional);
  FShaderParameter::Bind
            (&this->MaterialPass_PrimitiveId,(FShaderParameterMap *)param_1->_padding_,
             L"MaterialPass_PrimitiveId",SPF_Optional);
  FShaderParameter::Bind
            (&this->MaterialPass_LightChannelMask,(FShaderParameterMap *)param_1->_padding_,
             L"MaterialPass_LightChannelMask",SPF_Optional);
  FShaderParameter::Bind
            (&this->MaterialPass_Flags,(FShaderParameterMap *)param_1->_padding_,
             L"MaterialPass_Flags",SPF_Optional);
  FShaderParameter::Bind
            (&this->MaterialPass_HairCoverageScale,(FShaderParameterMap *)param_1->_padding_,
             L"MaterialPass_HairCoverageScale",SPF_Optional);
  return this;
}

// ConstructCompiledInstance @ 1449c6760

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
FHairMaterialPS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FHairMaterialPS *pFVar1;
  
  pFVar1 = ::operator_new(0x130);
  if (pFVar1 != (FHairMaterialPS *)0x0) {
    pFVar1 = FHairMaterialPS(pFVar1,(CompiledShaderInitializerType *)param_1);
    return (FShader *)pFVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1449c8900

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

FShader * __cdecl FHairMaterialPS::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x130);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 1449e5db0

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

FMeshMaterialShaderType * __cdecl FHairMaterialPS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,L"FHairMaterialPS",
                 L"/Engine/Private/HairStrands/HairStrandsMaterialPS.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x130,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/HairStrands/HairStrandsMaterialPS.usf");
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
      atexit(`FHairMaterialPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 1449f22b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FHairMaterialPS::GetTypeLayout(FHairMaterialPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FHairMaterialPS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FHairMaterialPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaterialPass_HairCoverageScale";
    DAT_1550aee4a = Freeze::FindFieldNameLength(L"MaterialPass_HairCoverageScale");
    _DAT_1550aee28 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550aee30 = ::TypeBuffer[0x10];
    DAT_1550aee30_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550aee30_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550aee30_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550aee30_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550aee30_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550aee30_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550aee30_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550aee38 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550aee40 = 0x126;
    _DAT_1550aee44 = 1;
    _DAT_1550aee48 = 0;
    `public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaterialPass_Flags";
    DAT_1550aee1a = Freeze::FindFieldNameLength(L"MaterialPass_Flags");
    _DAT_1550aedf8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550aee00 = ::TypeBuffer[0x10];
    DAT_1550aee00_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550aee00_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550aee00_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550aee00_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550aee00_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550aee00_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550aee00_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550aee08 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550aee10 = 0x120;
    _DAT_1550aee14 = 1;
    _DAT_1550aee18 = 0;
    `public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaterialPass_LightChannelMask";
    DAT_1550aedea = Freeze::FindFieldNameLength(L"MaterialPass_LightChannelMask");
    _DAT_1550aedc8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550aedd0 = ::TypeBuffer[0x10];
    DAT_1550aedd0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550aedd0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550aedd0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550aedd0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550aedd0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550aedd0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550aedd0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550aedd8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550aede0 = 0x11a;
    _DAT_1550aede4 = 1;
    _DAT_1550aede8 = 0;
    `public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaterialPass_PrimitiveId";
    DAT_1550aedba = Freeze::FindFieldNameLength(L"MaterialPass_PrimitiveId");
    _DAT_1550aed98 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550aeda0 = ::TypeBuffer[0x10];
    DAT_1550aeda0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550aeda0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550aeda0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550aeda0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550aeda0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550aeda0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550aeda0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550aeda8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550aedb0 = 0x114;
    _DAT_1550aedb4 = 1;
    _DAT_1550aedb8 = 0;
    `public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaterialPass_MaterialId";
    DAT_1550aed8a = Freeze::FindFieldNameLength(L"MaterialPass_MaterialId");
    _DAT_1550aed68 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550aed70 = ::TypeBuffer[0x10];
    DAT_1550aed70_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550aed70_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550aed70_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550aed70_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550aed70_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550aed70_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550aed70_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550aed78 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550aed80 = 0x10e;
    _DAT_1550aed84 = 1;
    _DAT_1550aed88 = 0;
    `public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaterialPass_MacroGroupId";
    DAT_1550aed5a = Freeze::FindFieldNameLength(L"MaterialPass_MacroGroupId");
    _DAT_1550aed38 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550aed40 = ::TypeBuffer[0x10];
    DAT_1550aed40_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550aed40_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550aed40_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550aed40_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550aed40_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550aed40_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550aed40_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550aed48 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550aed50 = 0x108;
    _DAT_1550aed54 = 1;
    _DAT_1550aed58 = 0;
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

// InternalDestroy @ 1449f4680

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
FHairMaterialPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x130);
  return;
}

// ShouldCompilePermutationImpl @ 1449ff340

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FHairMaterialPS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res8 [4];
  
  bVar1 = IsCompatibleWithHairStrands
                    (param_1->Platform,(FMaterialShaderParameters *)&param_1[1].PermutationId);
  if (bVar1) {
    pFVar2 = ::FName::FName(local_res8,L"FHairStrandsVertexFactory");
    if (*(FName *)(*(longlong *)&param_1[7].PermutationId + 0x28) == *pFVar2) {
      return true;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 144a00530

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FHairMaterialPS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 144a03ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FHairMaterialPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FHairMaterialPS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FHairMaterialPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaterialPass_HairCoverageScale";
    DAT_1550aee4a = Freeze::FindFieldNameLength(L"MaterialPass_HairCoverageScale");
    _DAT_1550aee28 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550aee30 = ::TypeBuffer[0x10];
    DAT_1550aee30_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550aee30_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550aee30_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550aee30_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550aee30_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550aee30_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550aee30_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550aee38 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550aee40 = 0x126;
    _DAT_1550aee44 = 1;
    _DAT_1550aee48 = 0;
    `public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaterialPass_Flags";
    DAT_1550aee1a = Freeze::FindFieldNameLength(L"MaterialPass_Flags");
    _DAT_1550aedf8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550aee00 = ::TypeBuffer[0x10];
    DAT_1550aee00_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550aee00_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550aee00_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550aee00_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550aee00_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550aee00_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550aee00_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550aee08 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550aee10 = 0x120;
    _DAT_1550aee14 = 1;
    _DAT_1550aee18 = 0;
    `public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaterialPass_LightChannelMask";
    DAT_1550aedea = Freeze::FindFieldNameLength(L"MaterialPass_LightChannelMask");
    _DAT_1550aedc8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550aedd0 = ::TypeBuffer[0x10];
    DAT_1550aedd0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550aedd0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550aedd0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550aedd0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550aedd0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550aedd0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550aedd0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550aedd8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550aede0 = 0x11a;
    _DAT_1550aede4 = 1;
    _DAT_1550aede8 = 0;
    `public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaterialPass_PrimitiveId";
    DAT_1550aedba = Freeze::FindFieldNameLength(L"MaterialPass_PrimitiveId");
    _DAT_1550aed98 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550aeda0 = ::TypeBuffer[0x10];
    DAT_1550aeda0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550aeda0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550aeda0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550aeda0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550aeda0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550aeda0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550aeda0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550aeda8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550aedb0 = 0x114;
    _DAT_1550aedb4 = 1;
    _DAT_1550aedb8 = 0;
    `public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaterialPass_MaterialId";
    DAT_1550aed8a = Freeze::FindFieldNameLength(L"MaterialPass_MaterialId");
    _DAT_1550aed68 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550aed70 = ::TypeBuffer[0x10];
    DAT_1550aed70_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550aed70_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550aed70_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550aed70_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550aed70_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550aed70_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550aed70_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550aed78 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550aed80 = 0x10e;
    _DAT_1550aed84 = 1;
    _DAT_1550aed88 = 0;
    `public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaterialPass_MacroGroupId";
    DAT_1550aed5a = Freeze::FindFieldNameLength(L"MaterialPass_MacroGroupId");
    _DAT_1550aed38 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550aed40 = ::TypeBuffer[0x10];
    DAT_1550aed40_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550aed40_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550aed40_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550aed40_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550aed40_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550aed40_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550aed40_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FHairMaterialPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550aed48 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550aed50 = 0x108;
    _DAT_1550aed54 = 1;
    _DAT_1550aed58 = 0;
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

