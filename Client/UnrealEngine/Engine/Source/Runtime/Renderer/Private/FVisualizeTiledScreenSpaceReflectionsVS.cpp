// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ConstructCompiledInstance @ 145588920

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
_anon_B4289B73::FVisualizeTiledScreenSpaceReflectionsVS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

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
    pFVar3 = FVisualizeTiledScreenSpaceReflectionsPS::FParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              (&this->Bindings,this,iVar1,pFVar2,pFVar3,true);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14558ac30

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
_anon_B4289B73::FVisualizeTiledScreenSpaceReflectionsVS::ConstructSerializedInstance(void)

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

// GetStaticType @ 1455ad0d0

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

FGlobalShaderType * __cdecl
_anon_B4289B73::FVisualizeTiledScreenSpaceReflectionsVS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderParametersMetadata *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < `FVisualizeTiledScreenSpaceReflectionsVS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FVisualizeTiledScreenSpaceReflectionsVS::GetStaticType'::`2'::_TSS0);
    if (`FVisualizeTiledScreenSpaceReflectionsVS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FVisualizeTiledScreenSpaceReflectionsPS::FParameters::FTypeInfo::GetStructMetadata();
      if ((`FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2
          ) == 0) {
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ =
             u_FVisualizeTiled;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] |
             2;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ =
             Freeze::DefaultToString;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ =
             InternalDestroy;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FVisualizeTiledScreenSpaceReflectionsVS,0>
             ::Do;
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer._0_8_ = u_BASE;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0
        ;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0'
        ;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0'
        ;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0'
        ;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b'
        ;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0'
        ;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0'
        ;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff
        ;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff
        ;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff
        ;
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff
        ;
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x2a] = '\x04';
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] +
             '\x01';
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x10] =
             `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x11] =
             `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x12] =
             `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x13] =
             `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x14] =
             `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x15] =
             `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x16] =
             `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x17] =
             `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::
             `2'::FieldBuffer;
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x20] = '\0';
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x21] = '\0';
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x22] = '\0';
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x23] = '\0';
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x24] = '\x01';
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x25] = '\0';
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x26] = '\0';
        `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::`2'::
        FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FVisualizeTiledScreenSpaceReflectionsVS,FGlobalShader>'::
            `2'::FieldBuffer._8_8_)->Interface != NonVirtual) {
          `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66]
               + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)
                 &`FVisualizeTiledScreenSpaceReflectionsVS::GetStaticType'::`2'::StaticType,Global,
                 (FTypeLayoutDesc *)
                 `FVisualizeTiledScreenSpaceReflectionsVS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FVisualizeTiledScreenSpaceReflectionsVS",
                 L"/Engine/Private/SingleLayerWaterComposite.usf",L"WaterTileVS",0,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FVisualizeTiledScreenSpaceReflectionsVS::GetStaticType'::`2'::StaticType._0_8_ =
           FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/SingleLayerWaterComposite.usf");
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
      atexit(``anonymous_namespace'::FVisualizeTiledScreenSpaceReflectionsVS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FVisualizeTiledScreenSpaceReflectionsVS::GetStaticType'::`2'::_TSS0);
      return &`FVisualizeTiledScreenSpaceReflectionsVS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FVisualizeTiledScreenSpaceReflectionsVS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 1455b7780

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
_anon_B4289B73::FVisualizeTiledScreenSpaceReflectionsVS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 1455da390

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_B4289B73::FVisualizeTiledScreenSpaceReflectionsVS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

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

// ShouldPrecachePermutationImpl @ 1455daaa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_B4289B73::FVisualizeTiledScreenSpaceReflectionsVS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

