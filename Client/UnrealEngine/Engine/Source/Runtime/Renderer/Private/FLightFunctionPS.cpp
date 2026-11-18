// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// ConstructCompiledInstance @ 144bb45a0

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
FLightFunctionPS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x118);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 6) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 6) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    FShaderParameter::Bind
              ((FShaderParameter *)(this + 1),param_1->ParameterMap,L"SvPositionToLight",
               SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1]._padding_ + 6),param_1->ParameterMap,
               L"LightFunctionParameters",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1]._padding_ + 4),param_1->ParameterMap,
               L"LightFunctionParameters2",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)((longlong)&this[1]._padding_ + 2),param_1->ParameterMap,
               L"HairOnlyDepthTexture",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1]._padding_ + 6),param_1->ParameterMap,
               L"CameraRelativeLightPosition",SPF_Optional);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144bb50c0

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

FShader * __cdecl FLightFunctionPS::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x118);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 144bcc6c0

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

FMaterialShaderType * __cdecl FLightFunctionPS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Material,pFVar4,L"FLightFunctionPS",
                 L"/Engine/Private/LightFunctionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x118,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/LightFunctionPixelShader.usf");
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
      atexit(`FLightFunctionPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144bcf990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FLightFunctionPS::GetTypeLayout(FLightFunctionPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x18';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FLightFunctionP;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLightFunctionPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "CameraRelativeLightPosition";
    DAT_1550c335a = Freeze::FindFieldNameLength(L"CameraRelativeLightPosition");
    _DAT_1550c3338 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c3340 = ::TypeBuffer[0x10];
    DAT_1550c3340_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c3340_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c3340_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c3340_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c3340_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c3340_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c3340_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c3348 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c3350 = 0x10e;
    _DAT_1550c3354 = 1;
    _DAT_1550c3358 = 0;
    `public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairOnlyDepthTexture";
    DAT_1550c332a = Freeze::FindFieldNameLength(L"HairOnlyDepthTexture");
    _DAT_1550c3308 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1550c3310 = ::TypeBuffer[0x10];
    DAT_1550c3310_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c3310_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c3310_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c3310_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c3310_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c3310_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c3310_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c3318 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c3320 = 0x10a;
    _DAT_1550c3324 = 1;
    _DAT_1550c3328 = 0;
    `public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightFunctionParameters2";
    DAT_1550c32fa = Freeze::FindFieldNameLength(L"LightFunctionParameters2");
    _DAT_1550c32d8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c32e0 = ::TypeBuffer[0x10];
    DAT_1550c32e0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c32e0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c32e0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c32e0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c32e0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c32e0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c32e0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c32e8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c32f0 = 0x104;
    _DAT_1550c32f4 = 1;
    _DAT_1550c32f8 = 0;
    `public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightFunctionParameters";
    DAT_1550c32ca = Freeze::FindFieldNameLength(L"LightFunctionParameters");
    _DAT_1550c32a8 = FLightFunctionSharedParameters::StaticGetTypeLayout();
    DAT_1550c32b0 = ::TypeBuffer[0x10];
    DAT_1550c32b0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c32b0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c32b0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c32b0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c32b0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c32b0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c32b0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c32b8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c32c0 = 0xfe;
    _DAT_1550c32c4 = 1;
    _DAT_1550c32c8 = 0;
    `public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SvPositionToLight";
    DAT_1550c329a = Freeze::FindFieldNameLength(L"SvPositionToLight");
    _DAT_1550c3278 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c3280 = ::TypeBuffer[0x10];
    DAT_1550c3280_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c3280_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c3280_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c3280_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c3280_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c3280_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c3280_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550c3288 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c3290 = 0xf8;
    _DAT_1550c3294 = 1;
    _DAT_1550c3298 = 0;
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

// InternalDestroy @ 144bd0bd0

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
FLightFunctionPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x118);
  return;
}

// SetParameters @ 144be17c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLightFunctionPS::SetParameters
          (FLightFunctionPS *this,FRHIBatchedShaderParameters *param_1,FViewInfo *param_2,
          FLightSceneInfo *param_3,FMaterialRenderProxy *param_4,FMaterial *param_5,bool param_6,
          float param_7,bool param_8,FRHITexture *param_9)

{
  uchar uVar1;
  ushort uVar2;
  FLightSceneProxy *pFVar3;
  FLightFunctionAtlasSceneData *pFVar4;
  FShaderParametersMetadata *pFVar5;
  FHashedName FVar6;
  FShaderUniformBufferParameter *pFVar7;
  FDeferredLightUniformStruct *pFVar8;
  uint uVar9;
  bool bVar10;
  float _X;
  float fVar11;
  undefined1 auStackY_1d8 [32];
  undefined8 local_1a8;
  float local_1a0;
  float local_19c;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_198 [4];
  FHashedName local_190 [5];
  FDeferredLightUniformStruct local_168;
  TMatrix<float> local_a8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  FMaterialShader::SetViewParameters
            ((FMaterialShader *)this,param_1,(FSceneView *)param_2,
             (TUniformBufferRef<FViewUniformShaderParameters> *)&param_2->_padding_);
  FMaterialShader::SetParameters
            ((FMaterialShader *)this,param_1,param_4,param_5,(FSceneView *)param_2);
  if ((this->SvPositionToLight).NumBytes != 0) {
    LightFunctionSvPositionToLightTransform(&local_a8,param_2,param_3);
    uVar2 = (this->SvPositionToLight).NumBytes;
    uVar9 = (uint)uVar2;
    if (0x40 < uVar2) {
      uVar9 = 0x40;
    }
    if (uVar9 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->SvPositionToLight).BufferIndex,
                 (uint)(this->SvPositionToLight).BaseIndex,uVar9,&local_a8);
    }
  }
  fVar11 = __real_3f800000;
  uVar1 = param_3->Proxy->LightType;
  bVar10 = uVar1 == '\x02';
  local_1a8._0_4_ = __real_3f800000;
  if (bVar10) {
    _X = (float)(**(code **)(param_3->Proxy->_padding_ + 0x20))();
    local_1a8._0_4_ = tanf(_X);
  }
  if (param_3->Proxy->LightType == '\x03') {
    local_1a8._0_4_ = *(float *)((longlong)&param_3->Proxy[1].Position.field0_0x0 + 0x14);
    if ((float)local_1a8 <= 0.0) {
      bVar10 = false;
      local_1a8._0_4_ = 0.0;
    }
    else {
      bVar10 = true;
    }
  }
  local_19c = fVar11;
  if (uVar1 != '\x01') {
    local_19c = 0.0;
  }
  local_1a0 = fVar11;
  if (!bVar10) {
    local_1a0 = 0.0;
  }
  uVar2 = (this->LightFunctionParameters).LightFunctionParameters.NumBytes;
  uVar9 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar9 = 0x10;
  }
  local_1a8._4_4_ = param_7;
  if (uVar9 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightFunctionParameters).LightFunctionParameters.BufferIndex,
               (uint)(this->LightFunctionParameters).LightFunctionParameters.BaseIndex,uVar9,
               &local_1a8);
  }
  local_19c = fVar11;
  if (!param_8) {
    local_19c = 0.0;
  }
  if (!param_6) {
    fVar11 = 0.0;
  }
  uVar2 = (this->LightFunctionParameters2).NumBytes;
  uVar9 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar9 = 0x10;
  }
  local_1a8._0_4_ = param_3->Proxy->LightFunctionFadeDistance;
  local_1a8._4_4_ = param_3->Proxy->LightFunctionDisabledBrightness;
  local_1a0 = fVar11;
  if (uVar9 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightFunctionParameters2).BufferIndex,
               (uint)(this->LightFunctionParameters2).BaseIndex,uVar9,&local_1a8);
  }
  if (((this->HairOnlyDepthTexture).NumResources != '\0') && (param_9 != (FRHITexture *)0x0)) {
    SetTextureParameter(param_1,&this->HairOnlyDepthTexture,param_9);
  }
  uVar2 = (this->CameraRelativeLightPosition).NumBytes;
  uVar9 = (uint)uVar2;
  if (uVar2 != 0) {
    if (param_3->Type == LightType_Directional) {
      local_1a8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_1a0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      pFVar3 = param_3->Proxy;
      local_1a8._4_4_ = (float)((pFVar3->LightToWorld).M[3][1] - (double)param_2->_padding_);
      local_1a8._0_4_ = (float)((pFVar3->LightToWorld).M[3][0] - (double)param_2->_padding_);
      local_1a0 = (float)((pFVar3->LightToWorld).M[3][2] - (double)param_2->_padding_);
    }
    if (0xc < uVar2) {
      uVar9 = 0xc;
    }
    if (uVar9 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->CameraRelativeLightPosition).BufferIndex,
                 (uint)(this->CameraRelativeLightPosition).BaseIndex,uVar9,&local_1a8);
    }
  }
  pFVar5 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(local_190,&pFVar5->ShaderVariableHashedName);
  FVar6.Hash = (ulong64)FHashedName::FHashedName((FHashedName *)&local_1a8,local_190);
  pFVar7 = FShader::GetUniformBufferParameter((FShader *)this,FVar6);
  local_198[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar7->BaseIndex;
  if (local_198[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    pFVar4 = (param_2->LightFunctionAtlasViewData).SceneData;
    bVar10 = false;
    if (pFVar4 != (FLightFunctionAtlasSceneData *)0x0) {
      bVar10 = (bool)((byte)(pFVar4->SystemFlags >> 1) & 1);
    }
    pFVar8 = GetDeferredLightParameters(&local_168,(FSceneView *)param_2,param_3,bVar10,0);
    SetUniformBufferParameterImmediate<FDeferredLightUniformStruct>(param_1,local_198,pFVar8);
  }
  return;
}

// ShouldCompilePermutationImpl @ 144be4b20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FLightFunctionPS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1[1].PermutationId == 2) {
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
    if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel) {
      return true;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 144be4de0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FLightFunctionPS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 144be78b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FLightFunctionPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x18';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FLightFunctionP;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLightFunctionPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "CameraRelativeLightPosition";
    DAT_1550c335a = Freeze::FindFieldNameLength(L"CameraRelativeLightPosition");
    _DAT_1550c3338 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c3340 = ::TypeBuffer[0x10];
    DAT_1550c3340_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c3340_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c3340_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c3340_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c3340_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c3340_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c3340_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c3348 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c3350 = 0x10e;
    _DAT_1550c3354 = 1;
    _DAT_1550c3358 = 0;
    `public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "HairOnlyDepthTexture";
    DAT_1550c332a = Freeze::FindFieldNameLength(L"HairOnlyDepthTexture");
    _DAT_1550c3308 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1550c3310 = ::TypeBuffer[0x10];
    DAT_1550c3310_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c3310_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c3310_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c3310_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c3310_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c3310_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c3310_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c3318 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c3320 = 0x10a;
    _DAT_1550c3324 = 1;
    _DAT_1550c3328 = 0;
    `public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightFunctionParameters2";
    DAT_1550c32fa = Freeze::FindFieldNameLength(L"LightFunctionParameters2");
    _DAT_1550c32d8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c32e0 = ::TypeBuffer[0x10];
    DAT_1550c32e0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c32e0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c32e0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c32e0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c32e0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c32e0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c32e0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c32e8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c32f0 = 0x104;
    _DAT_1550c32f4 = 1;
    _DAT_1550c32f8 = 0;
    `public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightFunctionParameters";
    DAT_1550c32ca = Freeze::FindFieldNameLength(L"LightFunctionParameters");
    _DAT_1550c32a8 = FLightFunctionSharedParameters::StaticGetTypeLayout();
    DAT_1550c32b0 = ::TypeBuffer[0x10];
    DAT_1550c32b0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c32b0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c32b0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c32b0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c32b0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c32b0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c32b0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c32b8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c32c0 = 0xfe;
    _DAT_1550c32c4 = 1;
    _DAT_1550c32c8 = 0;
    `public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SvPositionToLight";
    DAT_1550c329a = Freeze::FindFieldNameLength(L"SvPositionToLight");
    _DAT_1550c3278 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c3280 = ::TypeBuffer[0x10];
    DAT_1550c3280_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c3280_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c3280_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c3280_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c3280_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c3280_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c3280_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550c3288 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c3290 = 0xf8;
    _DAT_1550c3294 = 1;
    _DAT_1550c3298 = 0;
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

