// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 11

// ConstructCompiledInstance @ 145313ec0

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
FLightFunctionRayTracingShader::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    *(ushort *)&this[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 2) = 0xffff;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this + 1),param_1->ParameterMap,
               L"RaytracingLightFunctionParameters",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this[1]._padding_ + 2),
               param_1->ParameterMap,L"RaytracingLightGridData",SPF_Optional);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145314bf0

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

FShader * __cdecl FLightFunctionRayTracingShader::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetRayTracingPayloadType @ 145325ac0

ERayTracingPayloadType __cdecl FLightFunctionRayTracingShader::GetRayTracingPayloadType(int param_1)

{
  return RayTracingMaterial;
}

// GetShaderBindingLayout @ 145326b20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderBindingLayout * __cdecl
FLightFunctionRayTracingShader::GetShaderBindingLayout(FShaderPermutationParameters *param_1)

{
  FShaderBindingLayout *pFVar1;
  
  pFVar1 = RayTracing::GetShaderBindingLayout(param_1->Platform);
  return pFVar1;
}

// GetShaderBindings @ 145326cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FLightFunctionRayTracingShader::GetShaderBindings
          (FLightFunctionRayTracingShader *this,FScene *param_1,Type param_2,
          FMaterialRenderProxy *param_3,FMaterial *param_4,FViewInfo *param_5,
          TUniformBufferRef<FDeferredLightUniformStruct> *param_6,
          TUniformBufferRef<FLightFunctionParametersRayTracing> *param_7,
          TUniformBufferRef<FRayTracingLightGrid> *param_8,FMeshDrawSingleShaderBindings *param_9)

{
  TUniformBufferRef<FLightFunctionParametersRayTracing> TVar1;
  TUniformBufferRef<FRayTracingLightGrid> TVar2;
  code *pcVar3;
  FViewInfo *pFVar4;
  TUniformBufferRef<FDeferredLightUniformStruct> *pTVar5;
  FMeshDrawSingleShaderBindings *this_00;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  FHashedName FVar8;
  TShaderUniformBufferParameter<FViewUniformShaderParameters> *pTVar9;
  FShaderUniformBufferParameter *pFVar10;
  TShaderUniformBufferParameter<FPrimitiveUniformShaderParameters> *pTVar11;
  FHashedName local_res8;
  FHashedName local_58;
  FHashedName local_50;
  FHashedName local_48;
  FHashedName local_40;
  FHashedName local_38;
  FHashedName local_30;
  
  this_00 = param_9;
  FMaterialShader::GetShaderBindings
            ((FMaterialShader *)this,(FSceneInterface *)param_1,param_2,param_3,param_4,param_9);
  pFVar7 = FViewUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar7->ShaderVariableHashedName);
  FVar8.Hash = (ulong64)FHashedName::FHashedName(&local_48,&local_res8);
  pTVar9 = (TShaderUniformBufferParameter<FViewUniformShaderParameters> *)
           FShader::GetUniformBufferParameter((FShader *)this,FVar8);
  pFVar4 = param_5;
  FMeshDrawSingleShaderBindings::Add<FViewUniformShaderParameters>
            (this_00,pTVar9,(TUniformBufferRef<FViewUniformShaderParameters> *)&param_5->_padding_);
  pFVar7 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName((FHashedName *)&param_5,&pFVar7->ShaderVariableHashedName);
  FVar8.Hash = (ulong64)FHashedName::FHashedName(&local_40,(FHashedName *)&param_5);
  pFVar10 = FShader::GetUniformBufferParameter((FShader *)this,FVar8);
  pTVar5 = param_6;
  if (pFVar10->BaseIndex != 0xffff) {
    if (*param_6 == (TUniformBufferRef<FDeferredLightUniformStruct>)0x0) {
      FDeferredLightUniformStruct::GetStructMetadata();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x78,L"Attempted to set null uniform buffer for type %s");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (pFVar10->BaseIndex == 0xffff) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (this_00,(FRHIUniformBuffer *)*pTVar5,(uint)pFVar10->BaseIndex);
  }
  if ((this->LightMaterialsParameter).BaseIndex != 0xffff) {
    TVar1 = *param_7;
    if (TVar1 == (TUniformBufferRef<FLightFunctionParametersRayTracing>)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((this->LightMaterialsParameter).BaseIndex == 0xffff) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (this_00,(FRHIUniformBuffer *)TVar1,(uint)(this->LightMaterialsParameter).BaseIndex);
  }
  if ((this->LightDataPacked).BaseIndex != 0xffff) {
    TVar2 = *param_8;
    if (TVar2 == (TUniformBufferRef<FRayTracingLightGrid>)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((this->LightDataPacked).BaseIndex == 0xffff) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (this_00,(FRHIUniformBuffer *)TVar2,(uint)(this->LightDataPacked).BaseIndex);
  }
  pFVar7 = FPrimitiveUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_58,&pFVar7->ShaderVariableHashedName);
  FVar8.Hash = (ulong64)FHashedName::FHashedName(&local_38,&local_58);
  pTVar11 = (TShaderUniformBufferParameter<FPrimitiveUniformShaderParameters> *)
            FShader::GetUniformBufferParameter((FShader *)this,FVar8);
  FMeshDrawSingleShaderBindings::Add<FPrimitiveUniformShaderParameters>
            (this_00,pTVar11,
             (TUniformBuffer<FPrimitiveUniformShaderParameters> *)&GIdentityPrimitiveUniformBuffer);
  pFVar7 = FLumenHardwareRayTracingUniformBufferParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_50,&pFVar7->ShaderVariableHashedName);
  FVar8.Hash = (ulong64)FHashedName::FHashedName(&local_30,&local_50);
  pFVar10 = FShader::GetUniformBufferParameter((FShader *)this,FVar8);
  if (pFVar10->BaseIndex != 0xffff) {
    if (pFVar4->LumenHardwareRayTracingUniformBuffer ==
        (TUniformBufferRef<FLumenHardwareRayTracingUniformBufferParameters>)0x0) {
      FLumenHardwareRayTracingUniformBufferParameters::GetStructMetadata();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x78,L"Attempted to set null uniform buffer for type %s");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (pFVar10->BaseIndex == 0xffff) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (this_00,(FRHIUniformBuffer *)pFVar4->LumenHardwareRayTracingUniformBuffer,
               (uint)pFVar10->BaseIndex);
  }
  return;
}

// GetStaticType @ 1453287b0

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

FMaterialShaderType * __cdecl FLightFunctionRayTracingShader::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Material,pFVar4,L"FLightFunctionRayTracingShader",
                 L"/Engine/Private/RayTracing/RayTracingLightingMS.usf",L"RayTracingLightingMS",7,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,GetRayTracingPayloadType,GetShaderBindingLayout,0x100
                 ,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/RayTracing/RayTracingLightingMS.usf");
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                           ,0x7e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FLightFunctionRayTracingShader::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 14532e390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FLightFunctionRayTracingShader::GetTypeLayout(FLightFunctionRayTracingShader *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FLightFunctionR;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLightFunctionRayTracingShader,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FLightFunctionRayTracingShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightDataPacked";
    DAT_15511fec2 = Freeze::FindFieldNameLength(L"LightDataPacked");
    _DAT_15511fea0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15511fea8 = ::TypeBuffer[0x10];
    DAT_15511fea8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15511fea8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15511fea8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15511fea8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15511fea8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15511fea8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15511fea8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionRayTracingShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15511feb0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15511feb8 = 0xfa;
    _DAT_15511febc = 1;
    _DAT_15511fec0 = 0;
    `public:_static_void___cdecl_FLightFunctionRayTracingShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMaterialsParameter";
    DAT_15511fe92 = Freeze::FindFieldNameLength(L"LightMaterialsParameter");
    _DAT_15511fe70 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15511fe78 = ::TypeBuffer[0x10];
    DAT_15511fe78_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15511fe78_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15511fe78_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15511fe78_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15511fe78_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15511fe78_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15511fe78_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionRayTracingShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15511fe80 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15511fe88 = 0xf8;
    _DAT_15511fe8c = 1;
    _DAT_15511fe90 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMaterialShader::StaticGetTypeLayout();
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

// InternalDestroy @ 14532f470

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
FLightFunctionRayTracingShader::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x100);
  return;
}

// ShouldCompilePermutationImpl @ 14533c9e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FLightFunctionRayTracingShader::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  if (param_1[1].PermutationId == 2) {
    bVar1 = ShouldCompileRayTracingShadersForProject(param_1->Platform);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 14533d2f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FLightFunctionRayTracingShader::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 14533de20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FLightFunctionRayTracingShader::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FLightFunctionR;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLightFunctionRayTracingShader,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FLightFunctionRayTracingShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightDataPacked";
    DAT_15511fec2 = Freeze::FindFieldNameLength(L"LightDataPacked");
    _DAT_15511fea0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15511fea8 = ::TypeBuffer[0x10];
    DAT_15511fea8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15511fea8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15511fea8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15511fea8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15511fea8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15511fea8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15511fea8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionRayTracingShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15511feb0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15511feb8 = 0xfa;
    _DAT_15511febc = 1;
    _DAT_15511fec0 = 0;
    `public:_static_void___cdecl_FLightFunctionRayTracingShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMaterialsParameter";
    DAT_15511fe92 = Freeze::FindFieldNameLength(L"LightMaterialsParameter");
    _DAT_15511fe70 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15511fe78 = ::TypeBuffer[0x10];
    DAT_15511fe78_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15511fe78_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15511fe78_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15511fe78_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15511fe78_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15511fe78_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15511fe78_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionRayTracingShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15511fe80 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15511fe88 = 0xf8;
    _DAT_15511fe8c = 1;
    _DAT_15511fe90 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMaterialShader::StaticGetTypeLayout();
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

