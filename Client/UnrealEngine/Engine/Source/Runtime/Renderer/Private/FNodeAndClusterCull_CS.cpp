// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// ConstructCompiledInstance @ 144f8a710

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
FNodeAndClusterCull_CS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  int iVar1;
  FShaderParameterMap *pFVar2;
  FShader *this;
  FShaderParametersMetadata *pFVar3;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    pFVar2 = param_1->ParameterMap;
    iVar1 = param_1->PermutationId;
    pFVar3 = FParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              (&this->Bindings,this,iVar1,pFVar2,pFVar3,true);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144f8cfa0

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

FShader * __cdecl FNodeAndClusterCull_CS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    memset(this,0,0xe0);
    FShader::FShader(this);
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 144fbe2b0

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

FGlobalShaderType * __cdecl FNodeAndClusterCull_CS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderParametersMetadata *pFVar4;
  FTypeLayoutDesc *pFVar5;
  FString *pFVar6;
  FGlobalShaderType *pFVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      pFVar5 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar5,L"FNodeAndClusterCull_CS",
                 L"/Engine/Private/Nanite/NaniteClusterCulling.usf",L"NodeAndClusterCull",5,0x120,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/Nanite/NaniteClusterCulling.usf");
      pFVar6 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar8,L"usf");
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
          pFVar7 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar7;
        }
      }
      atexit(`FNodeAndClusterCull_CS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144fc5400

FTypeLayoutDesc * __thiscall FNodeAndClusterCull_CS::GetTypeLayout(FNodeAndClusterCull_CS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FNodeAndCluster;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FNodeAndClusterCull_CS,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
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

// InternalDestroy @ 144fcb260

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
FNodeAndClusterCull_CS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 144fea3c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FNodeAndClusterCull_CS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  bool bVar1;
  TShaderPermutationDomain<FNodeAndClusterCull_CS::FCullingPassDim,FNodeAndClusterCull_CS::FCullingTypeDim,FNodeAndClusterCull_CS::FMultiViewDim,FNodeAndClusterCull_CS::FVirtualTextureTargetDim,FNodeAndClusterCull_CS::FMaterialCacheDim,FNodeAndClusterCull_CS::FDebugFlagsDim,FNodeAndClusterCull_CS::FSplineDeformDim>
  local_18;
  
  bVar1 = DoesPlatformSupportNanite(param_1->Platform,true);
  if ((!bVar1) ||
     ((TShaderPermutationDomain<FNodeAndClusterCull_CS::FCullingPassDim,FNodeAndClusterCull_CS::FCullingTypeDim,FNodeAndClusterCull_CS::FMultiViewDim,FNodeAndClusterCull_CS::FVirtualTextureTargetDim,FNodeAndClusterCull_CS::FMaterialCacheDim,FNodeAndClusterCull_CS::FDebugFlagsDim,FNodeAndClusterCull_CS::FSplineDeformDim>
       ::
       TShaderPermutationDomain<FNodeAndClusterCull_CS::FCullingPassDim,FNodeAndClusterCull_CS::FCullingTypeDim,FNodeAndClusterCull_CS::FMultiViewDim,FNodeAndClusterCull_CS::FVirtualTextureTargetDim,FNodeAndClusterCull_CS::FMaterialCacheDim,FNodeAndClusterCull_CS::FDebugFlagsDim,FNodeAndClusterCull_CS::FSplineDeformDim>
                 (&local_18,param_1->PermutationId), local_18.Tail.Tail.Tail.DimensionValue != false
      && (local_18.Tail.Tail.DimensionValue == false)))) {
    return false;
  }
  if ((local_18.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) &&
     (bVar1 = NaniteSplineMeshesSupported(), !bVar1)) {
    return false;
  }
  bVar1 = DoesPlatformSupportNanite(param_1->Platform,true);
  return bVar1;
}

// ShouldPrecachePermutation @ 144fea7b0

EShaderPermutationPrecacheRequest __cdecl
FNodeAndClusterCull_CS::ShouldPrecachePermutation(FGlobalShaderPermutationParameters *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  EShaderPermutationPrecacheRequest EVar4;
  TShaderPermutationDomain<FNodeAndClusterCull_CS::FCullingPassDim,FNodeAndClusterCull_CS::FCullingTypeDim,FNodeAndClusterCull_CS::FMultiViewDim,FNodeAndClusterCull_CS::FVirtualTextureTargetDim,FNodeAndClusterCull_CS::FMaterialCacheDim,FNodeAndClusterCull_CS::FDebugFlagsDim,FNodeAndClusterCull_CS::FSplineDeformDim>
  local_18;
  
  TShaderPermutationDomain<FNodeAndClusterCull_CS::FCullingPassDim,FNodeAndClusterCull_CS::FCullingTypeDim,FNodeAndClusterCull_CS::FMultiViewDim,FNodeAndClusterCull_CS::FVirtualTextureTargetDim,FNodeAndClusterCull_CS::FMaterialCacheDim,FNodeAndClusterCull_CS::FDebugFlagsDim,FNodeAndClusterCull_CS::FSplineDeformDim>
  ::
  TShaderPermutationDomain<FNodeAndClusterCull_CS::FCullingPassDim,FNodeAndClusterCull_CS::FCullingTypeDim,FNodeAndClusterCull_CS::FMultiViewDim,FNodeAndClusterCull_CS::FVirtualTextureTargetDim,FNodeAndClusterCull_CS::FMaterialCacheDim,FNodeAndClusterCull_CS::FDebugFlagsDim,FNodeAndClusterCull_CS::FSplineDeformDim>
            (&local_18,*(int *)&param_1->field_0x4);
  pTVar1 = CVarNanitePersistentThreadsCulling.Ref;
  if (local_18.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
    return NotPrecached;
  }
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (!bVar2) goto LAB_144fea7fc;
  }
  lVar3 = 0;
LAB_144fea7fc:
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) < 1) {
    EVar4 = Precached;
    if (local_18.Tail.DimensionValue == 2) {
      EVar4 = NotUsed;
    }
    return EVar4;
  }
  if (local_18.Tail.DimensionValue == 2) {
    return Precached;
  }
  return NotUsed;
}

// ShouldPrecachePermutationImpl @ 144feaed0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FNodeAndClusterCull_CS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  EShaderPermutationPrecacheRequest EVar4;
  TShaderPermutationDomain<FNodeAndClusterCull_CS::FCullingPassDim,FNodeAndClusterCull_CS::FCullingTypeDim,FNodeAndClusterCull_CS::FMultiViewDim,FNodeAndClusterCull_CS::FVirtualTextureTargetDim,FNodeAndClusterCull_CS::FMaterialCacheDim,FNodeAndClusterCull_CS::FDebugFlagsDim,FNodeAndClusterCull_CS::FSplineDeformDim>
  TStack_18;
  
  TShaderPermutationDomain<FNodeAndClusterCull_CS::FCullingPassDim,FNodeAndClusterCull_CS::FCullingTypeDim,FNodeAndClusterCull_CS::FMultiViewDim,FNodeAndClusterCull_CS::FVirtualTextureTargetDim,FNodeAndClusterCull_CS::FMaterialCacheDim,FNodeAndClusterCull_CS::FDebugFlagsDim,FNodeAndClusterCull_CS::FSplineDeformDim>
  ::
  TShaderPermutationDomain<FNodeAndClusterCull_CS::FCullingPassDim,FNodeAndClusterCull_CS::FCullingTypeDim,FNodeAndClusterCull_CS::FMultiViewDim,FNodeAndClusterCull_CS::FVirtualTextureTargetDim,FNodeAndClusterCull_CS::FMaterialCacheDim,FNodeAndClusterCull_CS::FDebugFlagsDim,FNodeAndClusterCull_CS::FSplineDeformDim>
            (&TStack_18,param_1->PermutationId);
  pTVar1 = CVarNanitePersistentThreadsCulling.Ref;
  if (TStack_18.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
    return NotPrecached;
  }
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (!bVar2) goto LAB_144fea7fc;
  }
  lVar3 = 0;
LAB_144fea7fc:
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) < 1) {
    EVar4 = Precached;
    if (TStack_18.Tail.DimensionValue == 2) {
      EVar4 = NotUsed;
    }
    return EVar4;
  }
  if (TStack_18.Tail.DimensionValue == 2) {
    return Precached;
  }
  return NotUsed;
}

// StaticGetTypeLayout @ 144ff4bc0

FTypeLayoutDesc * __cdecl FNodeAndClusterCull_CS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FNodeAndCluster;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FNodeAndClusterCull_CS,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
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

