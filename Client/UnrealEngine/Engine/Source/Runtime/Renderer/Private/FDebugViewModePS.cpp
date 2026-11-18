// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 14

// FDebugViewModePS @ 1447f2b70

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

FDebugViewModePS * __thiscall
FDebugViewModePS::FDebugViewModePS(FDebugViewModePS *this,CompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  this_00 = &this->OneOverCPUTexCoordScalesParameter;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->OneOverCPUTexCoordScalesParameter).NumBytes = 0;
  (this->TexCoordIndicesParameter).BufferIndex = 0;
  (this->TexCoordIndicesParameter).BaseIndex = 0;
  (this->TexCoordIndicesParameter).NumBytes = 0;
  (this->CPUTexelFactorParameter).BufferIndex = 0;
  *(undefined8 *)&(this->CPUTexelFactorParameter).BaseIndex = 0;
  *(undefined8 *)&(this->NormalizedComplexity).NumBytes = 0;
  (this->PrimitiveAlphaParameter).BufferIndex = 0;
  (this->PrimitiveAlphaParameter).BaseIndex = 0;
  (this->PrimitiveAlphaParameter).NumBytes = 0;
  (this->PrimitiveBlendModeParameter).BufferIndex = 0;
  *(undefined8 *)&(this->PrimitiveBlendModeParameter).BaseIndex = 0;
  *(undefined8 *)&(this->TexCoordAnalysisIndexParameter).NumBytes = 0;
  (this->ShowQuadOverdraw).BufferIndex = 0;
  (this->ShowQuadOverdraw).BaseIndex = 0;
  (this->ShowQuadOverdraw).NumBytes = 0;
  (this->LODIndexParameter).BufferIndex = 0;
  *(undefined8 *)&(this->LODIndexParameter).BaseIndex = 0;
  *(undefined8 *)&(this->SkinCacheDebugColorParameter).NumBytes = 0;
  (this->VisualizeModeParameter).BufferIndex = 0;
  (this->VisualizeModeParameter).BaseIndex = 0;
  (this->VisualizeModeParameter).NumBytes = 0;
  (this->QuadBufferUAV).BaseIndex = 0;
  (this->QuadBufferUAV).NumResources = '\0';
  (this->QuadBufferUAV).Type = LooseData;
  FShaderParameter::Bind
            (this_00,(FShaderParameterMap *)param_1->_padding_,L"OneOverCPUTexCoordScales",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->TexCoordIndicesParameter,(FShaderParameterMap *)param_1->_padding_,
             L"TexCoordIndices",SPF_Optional);
  FShaderParameter::Bind
            (&this->CPUTexelFactorParameter,(FShaderParameterMap *)param_1->_padding_,
             L"CPUTexelFactor",SPF_Optional);
  FShaderParameter::Bind
            (&this->NormalizedComplexity,(FShaderParameterMap *)param_1->_padding_,
             L"NormalizedComplexity",SPF_Optional);
  FShaderParameter::Bind
            (&this->AnalysisParamsParameter,(FShaderParameterMap *)param_1->_padding_,
             L"AnalysisParams",SPF_Optional);
  FShaderParameter::Bind
            (&this->PrimitiveAlphaParameter,(FShaderParameterMap *)param_1->_padding_,
             L"PrimitiveAlpha",SPF_Optional);
  FShaderParameter::Bind
            (&this->PrimitiveBlendModeParameter,(FShaderParameterMap *)param_1->_padding_,
             L"PrimitiveBlendMode",SPF_Optional);
  FShaderParameter::Bind
            (&this->TexCoordAnalysisIndexParameter,(FShaderParameterMap *)param_1->_padding_,
             L"TexCoordAnalysisIndex",SPF_Optional);
  FShaderParameter::Bind
            (&this->CPULogDistanceParameter,(FShaderParameterMap *)param_1->_padding_,
             L"CPULogDistance",SPF_Optional);
  FShaderParameter::Bind
            (&this->ShowQuadOverdraw,(FShaderParameterMap *)param_1->_padding_,L"bShowQuadOverdraw",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->OutputQuadOverdrawParameter,(FShaderParameterMap *)param_1->_padding_,
             L"bOutputQuadOverdraw",SPF_Optional);
  FShaderParameter::Bind
            (&this->LODIndexParameter,(FShaderParameterMap *)param_1->_padding_,L"LODIndex",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->SkinCacheDebugColorParameter,(FShaderParameterMap *)param_1->_padding_,
             L"SkinCacheDebugColor",SPF_Optional);
  FShaderParameter::Bind
            (&this->VisualizeModeParameter,(FShaderParameterMap *)param_1->_padding_,
             L"VisualizeMode",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->QuadBufferUAV,(FShaderParameterMap *)param_1->_padding_,L"RWQuadBuffer",
             SPF_Optional);
  return this;
}

// FDebugViewModePS @ 1447f2de0

FDebugViewModePS * __thiscall FDebugViewModePS::FDebugViewModePS(FDebugViewModePS *this)

{
  FMaterialShader::FMaterialShader((FMaterialShader *)this);
  *(undefined2 *)&this->_padding_ = 0xffff;
  this->_padding_ = 0;
  (this->OneOverCPUTexCoordScalesParameter).BufferIndex = 0;
  (this->OneOverCPUTexCoordScalesParameter).BaseIndex = 0;
  (this->OneOverCPUTexCoordScalesParameter).NumBytes = 0;
  (this->TexCoordIndicesParameter).BufferIndex = 0;
  *(undefined8 *)&(this->TexCoordIndicesParameter).BaseIndex = 0;
  *(undefined8 *)&(this->CPUTexelFactorParameter).NumBytes = 0;
  (this->AnalysisParamsParameter).BufferIndex = 0;
  (this->AnalysisParamsParameter).BaseIndex = 0;
  (this->AnalysisParamsParameter).NumBytes = 0;
  (this->PrimitiveAlphaParameter).BufferIndex = 0;
  *(undefined8 *)&(this->PrimitiveAlphaParameter).BaseIndex = 0;
  *(undefined8 *)&(this->PrimitiveBlendModeParameter).NumBytes = 0;
  (this->CPULogDistanceParameter).BufferIndex = 0;
  (this->CPULogDistanceParameter).BaseIndex = 0;
  (this->CPULogDistanceParameter).NumBytes = 0;
  (this->ShowQuadOverdraw).BufferIndex = 0;
  *(undefined8 *)&(this->ShowQuadOverdraw).BaseIndex = 0;
  *(undefined8 *)&(this->LODIndexParameter).NumBytes = 0;
  (this->OutputQuadOverdrawParameter).BufferIndex = 0;
  (this->OutputQuadOverdrawParameter).BaseIndex = 0;
  (this->OutputQuadOverdrawParameter).NumBytes = 0;
  (this->VisualizeModeParameter).BufferIndex = 0;
  *(undefined8 *)&(this->VisualizeModeParameter).BaseIndex = 0;
  return this;
}

// ConstructCompiledInstance @ 144805c20

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
FDebugViewModePS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FDebugViewModePS *pFVar1;
  
  pFVar1 = ::operator_new(0x160);
  if (pFVar1 != (FDebugViewModePS *)0x0) {
    pFVar1 = FDebugViewModePS(pFVar1,(CompiledShaderInitializerType *)param_1);
    return (FShader *)pFVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1448062c0

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

FShader * __cdecl FDebugViewModePS::ConstructSerializedInstance(void)

{
  FDebugViewModePS *pFVar1;
  
  pFVar1 = ::operator_new(0x160);
  if (pFVar1 != (FDebugViewModePS *)0x0) {
    pFVar1 = FDebugViewModePS(pFVar1);
    return (FShader *)pFVar1;
  }
  return (FShader *)0x0;
}

// GetElementShaderBindings @ 144815e70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FDebugViewModePS::GetElementShaderBindings
          (FDebugViewModePS *this,FShaderMapPointerTable *param_1,FScene *param_2,
          FSceneView *param_3,FVertexFactory *param_4,EVertexInputStreamType param_5,Type param_6,
          FPrimitiveSceneProxy *param_7,FMeshBatch *param_8,FMeshBatchElement *param_9,
          FDebugViewModeShaderElementData *param_10,FMeshDrawSingleShaderBindings *param_11,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_12)

{
  code *pcVar1;
  bool bVar2;
  FDebugViewModeInterface *pFVar3;
  
  FMeshMaterialShader::GetElementShaderBindings
            ((FMeshMaterialShader *)this,param_1,param_2,param_3,param_4,param_5,
             (FGenericStaticFeatureLevel)param_6,param_7,param_8,param_9,
             (FMeshMaterialShaderElementData *)param_10,param_11,param_12);
  pFVar3 = (FDebugViewModeInterface *)0x0;
  if (param_10->DebugViewMode < DVSM_MAX) {
    pFVar3 = FDebugViewModeInterface::Singleton;
  }
  if (pFVar3 == (FDebugViewModeInterface *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5126574536187183488>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DebugViewModeRendering.cpp"
                       ,0x180,"Interface");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (**(code **)((longlong)*pFVar3 + 0x18))
              (pFVar3,this,param_7,param_10->MaterialRenderProxy,param_10->Material,
               param_10->DebugViewMode,&param_10->ViewOrigin,param_10->VisualizeLODIndex,
               &param_10->SkinCacheDebugColor,param_9->VisualizeElementIndex,
               param_10->NumVSInstructions,param_10->NumPSInstructions,param_10->LWCComplexityVS,
               param_10->LWCComplexityPS,param_10->ViewModeParam,param_10->ViewModeParamName,
               param_11);
  }
  return;
}

// GetStaticType @ 144818430

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

FMeshMaterialShaderType * __cdecl FDebugViewModePS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,L"FDebugViewModePS",
                 L"/Engine/Private/DebugViewModePixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x160,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/DebugViewModePixelShader.usf");
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
      atexit(`FDebugViewModePS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 14481b590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FDebugViewModePS::GetTypeLayout(FDebugViewModePS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '`';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FDebugViewModeP;
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FDebugViewModePS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<8>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PrimitiveBlendModeParameter";
    DAT_155099c7a = Freeze::FindFieldNameLength(L"PrimitiveBlendModeParameter");
    _DAT_155099c58 = FShaderParameter::StaticGetTypeLayout();
    DAT_155099c60 = ::TypeBuffer[0x10];
    DAT_155099c60_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155099c60_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155099c60_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155099c60_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155099c60_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155099c60_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155099c60_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155099c68 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155099c70 = 300;
    _DAT_155099c74 = 1;
    _DAT_155099c78 = 0;
    `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PrimitiveAlphaParameter";
    DAT_155099c4a = Freeze::FindFieldNameLength(L"PrimitiveAlphaParameter");
    _DAT_155099c28 = FShaderParameter::StaticGetTypeLayout();
    DAT_155099c30 = ::TypeBuffer[0x10];
    DAT_155099c30_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155099c30_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155099c30_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155099c30_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155099c30_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155099c30_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155099c30_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155099c38 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155099c40 = 0x126;
    _DAT_155099c44 = 1;
    _DAT_155099c48 = 0;
    `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AnalysisParamsParameter";
    DAT_155099c1a = Freeze::FindFieldNameLength(L"AnalysisParamsParameter");
    _DAT_155099bf8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155099c00 = ::TypeBuffer[0x10];
    DAT_155099c00_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155099c00_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155099c00_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155099c00_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155099c00_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155099c00_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155099c00_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155099c08 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155099c10 = 0x120;
    _DAT_155099c14 = 1;
    _DAT_155099c18 = 0;
    `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NormalizedComplexity";
    DAT_155099bea = Freeze::FindFieldNameLength(L"NormalizedComplexity");
    _DAT_155099bc8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155099bd0 = ::TypeBuffer[0x10];
    DAT_155099bd0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155099bd0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155099bd0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155099bd0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155099bd0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155099bd0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155099bd0_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155099bd8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155099be0 = 0x11a;
    _DAT_155099be4 = 1;
    _DAT_155099be8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "CPUTexelFactorParameter";
    DAT_155099bba = Freeze::FindFieldNameLength(L"CPUTexelFactorParameter");
    _DAT_155099b98 = FShaderParameter::StaticGetTypeLayout();
    DAT_155099ba0 = ::TypeBuffer[0x10];
    DAT_155099ba0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155099ba0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155099ba0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155099ba0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155099ba0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155099ba0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155099ba0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155099ba8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155099bb0 = 0x114;
    _DAT_155099bb4 = 1;
    _DAT_155099bb8 = 0;
    `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TexCoordIndicesParameter";
    DAT_155099b8a = Freeze::FindFieldNameLength(L"TexCoordIndicesParameter");
    _DAT_155099b68 = FShaderParameter::StaticGetTypeLayout();
    DAT_155099b70 = ::TypeBuffer[0x10];
    DAT_155099b70_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155099b70_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155099b70_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155099b70_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155099b70_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155099b70_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155099b70_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155099b78 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155099b80 = 0x10e;
    _DAT_155099b84 = 1;
    _DAT_155099b88 = 0;
    `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OneOverCPUTexCoordScalesParameter";
    DAT_155099b5a = Freeze::FindFieldNameLength(L"OneOverCPUTexCoordScalesParameter");
    _DAT_155099b38 = FShaderParameter::StaticGetTypeLayout();
    DAT_155099b40 = ::TypeBuffer[0x10];
    DAT_155099b40_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155099b40_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155099b40_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155099b40_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155099b40_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155099b40_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155099b40_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155099b48 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155099b50 = 0x108;
    _DAT_155099b54 = 1;
    _DAT_155099b58 = 0;
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

// Initialize @ 14481c200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FDebugViewModePS::InternalLinkType<8>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<15>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "QuadBufferUAV";
  DAT_155099dfa = Freeze::FindFieldNameLength(L"QuadBufferUAV");
  _DAT_155099dd8 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_155099df0 = 0x15c;
  _DAT_155099de8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155099df4 = 1;
  _DAT_155099df8 = 0;
  _DAT_155099de0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<15>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<14>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "VisualizeModeParameter";
  DAT_155099dca = Freeze::FindFieldNameLength(L"VisualizeModeParameter");
  _DAT_155099da8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155099db8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155099dc0 = 0x156;
  _DAT_155099dc4 = 1;
  _DAT_155099dc8 = 0;
  _DAT_155099db0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<14>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "OutputQuadOverdrawParameter";
  DAT_155099d9a = Freeze::FindFieldNameLength(L"OutputQuadOverdrawParameter");
  _DAT_155099d78 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155099d88 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155099d90 = 0x150;
  _DAT_155099d94 = 1;
  _DAT_155099d98 = 0;
  _DAT_155099d80 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SkinCacheDebugColorParameter";
  DAT_155099d6a = Freeze::FindFieldNameLength(L"SkinCacheDebugColorParameter");
  _DAT_155099d48 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155099d58 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155099d60 = 0x14a;
  _DAT_155099d64 = 1;
  _DAT_155099d68 = 0;
  _DAT_155099d50 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LODIndexParameter";
  DAT_155099d3a = Freeze::FindFieldNameLength(L"LODIndexParameter");
  _DAT_155099d18 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155099d28 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155099d30 = 0x144;
  _DAT_155099d34 = 1;
  _DAT_155099d38 = 0;
  _DAT_155099d20 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShowQuadOverdraw";
  DAT_155099d0a = Freeze::FindFieldNameLength(L"ShowQuadOverdraw");
  _DAT_155099ce8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155099cf8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155099d00 = 0x13e;
  _DAT_155099d04 = 1;
  _DAT_155099d08 = 0;
  _DAT_155099cf0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "CPULogDistanceParameter";
  DAT_155099cda = Freeze::FindFieldNameLength(L"CPULogDistanceParameter");
  _DAT_155099cb8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155099cc8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155099cd0 = 0x138;
  _DAT_155099cd4 = 1;
  _DAT_155099cd8 = 0;
  _DAT_155099cc0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "TexCoordAnalysisIndexParameter";
  DAT_155099caa = Freeze::FindFieldNameLength(L"TexCoordAnalysisIndexParameter");
  _DAT_155099c88 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155099c98 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155099ca0 = 0x132;
  _DAT_155099ca4 = 1;
  _DAT_155099ca8 = 0;
  _DAT_155099c90 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 14481ca00

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
FDebugViewModePS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x160);
  return;
}

// ModifyCompilationEnvironment @ 14481d6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FDebugViewModePS::ModifyCompilationEnvironment
          (FMaterialShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FStaticShaderPlatform FVar1;
  bool bVar2;
  short sVar3;
  wchar_t *pwVar4;
  EDebugViewShaderMode EVar5;
  undefined1 auStack_48 [32];
  wchar_t local_28;
  short sStack_26;
  undefined2 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_48;
  FShaderCompilerEnvironment::SetDefine(param_2,L"UNDEFINED_ACCURACY",__real_3c75c28f);
  FShaderCompilerEnvironment::SetDefine(param_2,L"MAX_NUM_TEX_COORD",4);
  FShaderCompilerEnvironment::SetDefine(param_2,L"INITIAL_GPU_SCALE",0x100);
  FShaderCompilerEnvironment::SetDefine(param_2,L"TILE_RESOLUTION",0x20);
  FShaderCompilerEnvironment::SetDefine(param_2,L"MAX_NUM_TEXTURE_REGISTER",0x100);
  FShaderCompilerEnvironment::SetDefine(param_2,L"SCENE_TEXTURES_DISABLED",1);
  FVar1.Platform = (EShaderPlatform)param_1->_padding_;
  EVar5 = DVSM_None;
  _local_28 = 0x300075;
  local_24 = 0;
  bVar2 = IsForwardShadingEnabled(FVar1);
  if (bVar2) {
    bVar2 = FVelocityRendering::BasePassCanOutputVelocity(FVar1.Platform);
    sVar3 = bVar2 + 1;
  }
  else {
    bVar2 = FVelocityRendering::BasePassCanOutputVelocity(FVar1.Platform);
    sVar3 = bVar2 + 6;
  }
  _local_28 = CONCAT22(sStack_26 + sVar3,local_28);
  FShaderCompilerEnvironment::SetDefine(param_2,L"QUAD_BUFFER_REGISTER",&local_28);
  bVar2 = SupportDebugViewShaderMode(DVSM_QuadComplexity,(EShaderPlatform)param_1->_padding_);
  FShaderCompilerEnvironment::SetDefine(param_2,L"OUTPUT_QUAD_OVERDRAW",bVar2);
  FShaderCompilerEnvironment::SetDefine(param_2,L"BLEND_Opaque",0);
  FShaderCompilerEnvironment::SetDefine(param_2,L"BLEND_Masked",1);
  do {
    pwVar4 = DebugViewShaderModeToString(EVar5);
    FShaderCompilerEnvironment::SetDefine(param_2,pwVar4,EVar5);
    EVar5 = EVar5 + DVSM_ShaderComplexity;
  } while ((int)EVar5 < 0xe);
  return;
}

// ShouldCompilePermutation @ 144832d20

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

bool __cdecl
FDebugViewModePS::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  bVar1 = SupportDebugViewModes();
  if (!bVar1) {
    return false;
  }
  bVar1 = IsDebugViewShaderModeODSCOnly();
  return ((uint)param_1->_padding_ & (bVar1 ^ 1) + 2) != 0;
}

// ShouldCompilePermutationImpl @ 144832ed0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FDebugViewModePS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  bVar1 = SupportDebugViewModes();
  if (!bVar1) {
    return false;
  }
  bVar1 = IsDebugViewShaderModeODSCOnly();
  return (param_1->Flags & (bVar1 ^ 1) + IsODSCOnly) != None;
}

// ShouldPrecachePermutationImpl @ 144833360

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FDebugViewModePS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 144834990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FDebugViewModePS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '`';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FDebugViewModeP;
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FDebugViewModePS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<8>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PrimitiveBlendModeParameter";
    DAT_155099c7a = Freeze::FindFieldNameLength(L"PrimitiveBlendModeParameter");
    _DAT_155099c58 = FShaderParameter::StaticGetTypeLayout();
    DAT_155099c60 = ::TypeBuffer[0x10];
    DAT_155099c60_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155099c60_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155099c60_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155099c60_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155099c60_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155099c60_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155099c60_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155099c68 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155099c70 = 300;
    _DAT_155099c74 = 1;
    _DAT_155099c78 = 0;
    `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PrimitiveAlphaParameter";
    DAT_155099c4a = Freeze::FindFieldNameLength(L"PrimitiveAlphaParameter");
    _DAT_155099c28 = FShaderParameter::StaticGetTypeLayout();
    DAT_155099c30 = ::TypeBuffer[0x10];
    DAT_155099c30_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155099c30_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155099c30_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155099c30_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155099c30_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155099c30_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155099c30_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155099c38 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155099c40 = 0x126;
    _DAT_155099c44 = 1;
    _DAT_155099c48 = 0;
    `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AnalysisParamsParameter";
    DAT_155099c1a = Freeze::FindFieldNameLength(L"AnalysisParamsParameter");
    _DAT_155099bf8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155099c00 = ::TypeBuffer[0x10];
    DAT_155099c00_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155099c00_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155099c00_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155099c00_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155099c00_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155099c00_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155099c00_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155099c08 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155099c10 = 0x120;
    _DAT_155099c14 = 1;
    _DAT_155099c18 = 0;
    `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NormalizedComplexity";
    DAT_155099bea = Freeze::FindFieldNameLength(L"NormalizedComplexity");
    _DAT_155099bc8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155099bd0 = ::TypeBuffer[0x10];
    DAT_155099bd0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155099bd0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155099bd0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155099bd0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155099bd0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155099bd0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155099bd0_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155099bd8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155099be0 = 0x11a;
    _DAT_155099be4 = 1;
    _DAT_155099be8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "CPUTexelFactorParameter";
    DAT_155099bba = Freeze::FindFieldNameLength(L"CPUTexelFactorParameter");
    _DAT_155099b98 = FShaderParameter::StaticGetTypeLayout();
    DAT_155099ba0 = ::TypeBuffer[0x10];
    DAT_155099ba0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155099ba0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155099ba0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155099ba0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155099ba0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155099ba0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155099ba0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155099ba8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155099bb0 = 0x114;
    _DAT_155099bb4 = 1;
    _DAT_155099bb8 = 0;
    `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TexCoordIndicesParameter";
    DAT_155099b8a = Freeze::FindFieldNameLength(L"TexCoordIndicesParameter");
    _DAT_155099b68 = FShaderParameter::StaticGetTypeLayout();
    DAT_155099b70 = ::TypeBuffer[0x10];
    DAT_155099b70_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155099b70_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155099b70_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155099b70_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155099b70_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155099b70_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155099b70_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155099b78 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155099b80 = 0x10e;
    _DAT_155099b84 = 1;
    _DAT_155099b88 = 0;
    `public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OneOverCPUTexCoordScalesParameter";
    DAT_155099b5a = Freeze::FindFieldNameLength(L"OneOverCPUTexCoordScalesParameter");
    _DAT_155099b38 = FShaderParameter::StaticGetTypeLayout();
    DAT_155099b40 = ::TypeBuffer[0x10];
    DAT_155099b40_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155099b40_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155099b40_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155099b40_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155099b40_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155099b40_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155099b40_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDebugViewModePS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155099b48 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155099b50 = 0x108;
    _DAT_155099b54 = 1;
    _DAT_155099b58 = 0;
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

