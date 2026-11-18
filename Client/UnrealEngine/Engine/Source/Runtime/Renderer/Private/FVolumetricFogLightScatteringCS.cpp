// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// ConstructCompiledInstance @ 1458693a0

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
FVolumetricFogLightScatteringCS::ConstructCompiledInstance
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
    pFVar3 = FParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              (&this->Bindings,this,iVar1,pFVar2,pFVar3,true);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145869f30

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

FShader * __cdecl FVolumetricFogLightScatteringCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 1458771d0

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

FGlobalShaderType * __cdecl FVolumetricFogLightScatteringCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar5,L"FVolumetricFogLightScatteringCS",
                 L"/Engine/Private/VolumetricFog.usf",L"LightScatteringCS",5,0x400,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/VolumetricFog.usf");
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
      atexit(`FVolumetricFogLightScatteringCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 14587a0a0

FTypeLayoutDesc * __thiscall
FVolumetricFogLightScatteringCS::GetTypeLayout(FVolumetricFogLightScatteringCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FVolumetricFogL;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FVolumetricFogLightScatteringCS,0>::Do;
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

// InternalDestroy @ 14587e8d0

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
FVolumetricFogLightScatteringCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 14588b350

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FVolumetricFogLightScatteringCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  FStaticShaderPlatform FVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  undefined8 local_38;
  undefined4 uStack_30;
  TShaderPermutationDomain<FVolumetricFogLightScatteringCS::FSuperSampleCount,FVolumetricFogLightScatteringCS::FTemporalReprojection,FVolumetricFogLightScatteringCS::FDistanceFieldSkyOcclusion,FVolumetricFogLightScatteringCS::FLumenGI,FVolumetricFogLightScatteringCS::FVirtualShadowMap,FVolumetricFogLightScatteringCS::FRaytracedShadowsVolume,FVolumetricFogLightScatteringCS::FSampleLightFunctionAtlas,FVolumetricFogLightScatteringCS::FMegaLights,FVolumetricFogLightScatteringCS::FLightSoftFading>
  local_28;
  
  TShaderPermutationDomain<FVolumetricFogLightScatteringCS::FSuperSampleCount,FVolumetricFogLightScatteringCS::FTemporalReprojection,FVolumetricFogLightScatteringCS::FDistanceFieldSkyOcclusion,FVolumetricFogLightScatteringCS::FLumenGI,FVolumetricFogLightScatteringCS::FVirtualShadowMap,FVolumetricFogLightScatteringCS::FRaytracedShadowsVolume,FVolumetricFogLightScatteringCS::FSampleLightFunctionAtlas,FVolumetricFogLightScatteringCS::FMegaLights,FVolumetricFogLightScatteringCS::FLightSoftFading>
  ::
  TShaderPermutationDomain<FVolumetricFogLightScatteringCS::FSuperSampleCount,FVolumetricFogLightScatteringCS::FTemporalReprojection,FVolumetricFogLightScatteringCS::FDistanceFieldSkyOcclusion,FVolumetricFogLightScatteringCS::FLumenGI,FVolumetricFogLightScatteringCS::FVirtualShadowMap,FVolumetricFogLightScatteringCS::FRaytracedShadowsVolume,FVolumetricFogLightScatteringCS::FSampleLightFunctionAtlas,FVolumetricFogLightScatteringCS::FMegaLights,FVolumetricFogLightScatteringCS::FLightSoftFading>
            (&local_28,param_1->PermutationId);
  cVar8 = local_28.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar5 = local_28.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  cVar9 = local_28.Tail.Tail.DimensionValue;
  iVar3 = local_28.DimensionValue;
  FVar1.Platform = param_1->Platform;
  local_38 = CONCAT17(local_28.Tail.Tail.Tail.Tail.DimensionValue,
                      CONCAT16(local_28.Tail.Tail.Tail.DimensionValue,
                               CONCAT15(local_28.Tail.Tail.DimensionValue,
                                        CONCAT14(local_28.Tail.DimensionValue,
                                                 local_28.DimensionValue))));
  uStack_30 = CONCAT13(local_28.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue,
                       CONCAT12(local_28.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue,
                                CONCAT11(local_28.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue,
                                         local_28.Tail.Tail.Tail.Tail.Tail.DimensionValue)));
  bVar4 = IsMobileVolumetricFog(FVar1);
  if (bVar4) {
    cVar9 = '\0';
    local_38._5_3_ = (undefined3)((ulonglong)local_38 >> 0x28);
    local_38 = CONCAT35(local_38._5_3_,(uint5)(uint)iVar3);
    cVar8 = '\0';
    uStack_30 = CONCAT22((short)((uint)uStack_30 >> 0x10),(ushort)bVar5);
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[FVar1.Platform].bContainsValidPlatformInfo == 0)
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid(Platform)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                            ,0x20e,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  cVar7 = local_38._6_1_;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[FVar1.Platform].bSupportsLumenGI == 0) {
    cVar7 = '\0';
  }
  bVar5 = ShouldCompileRayTracingShadersForProject(FVar1.Platform);
  bVar10 = (byte)uStack_30;
  if (!bVar5) {
    bVar10 = 0;
  }
  bVar5 = MegaLights::ShouldCompileShaders(FVar1.Platform);
  if (!bVar5) {
    cVar8 = '\0';
  }
  if (cVar7 != '\0') {
    cVar9 = '\0';
  }
  if (((((((uint)local_38 == local_28.DimensionValue) &&
         ((bool)(char)((ulonglong)local_38 >> 0x20) == local_28.Tail.DimensionValue)) &&
        ((bool)cVar9 == local_28.Tail.Tail.DimensionValue)) &&
       (((bool)cVar7 == local_28.Tail.Tail.Tail.DimensionValue &&
        ((bool)local_38._7_1_ == local_28.Tail.Tail.Tail.Tail.DimensionValue)))) &&
      (((bool)bVar10 == local_28.Tail.Tail.Tail.Tail.Tail.DimensionValue &&
       (((bool)(char)((uint)uStack_30 >> 8) == local_28.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue
        && ((bool)cVar8 == local_28.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue)))))) &&
     ((bool)(char)((uint)uStack_30 >> 0x18) ==
      local_28.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

// ShouldPrecachePermutation @ 14588b660

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FVolumetricFogLightScatteringCS::ShouldPrecachePermutation(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  FStaticShaderPlatform FVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  EShaderPermutationPrecacheRequest EVar8;
  int iVar9;
  TShaderPermutationDomain<FVolumetricFogLightScatteringCS::FSuperSampleCount,FVolumetricFogLightScatteringCS::FTemporalReprojection,FVolumetricFogLightScatteringCS::FDistanceFieldSkyOcclusion,FVolumetricFogLightScatteringCS::FLumenGI,FVolumetricFogLightScatteringCS::FVirtualShadowMap,FVolumetricFogLightScatteringCS::FRaytracedShadowsVolume,FVolumetricFogLightScatteringCS::FSampleLightFunctionAtlas,FVolumetricFogLightScatteringCS::FMegaLights,FVolumetricFogLightScatteringCS::FLightSoftFading>
  *pTVar10;
  char cVar11;
  uint6 local_28;
  undefined2 uStack_22;
  TShaderPermutationDomain<FVolumetricFogLightScatteringCS::FSuperSampleCount,FVolumetricFogLightScatteringCS::FTemporalReprojection,FVolumetricFogLightScatteringCS::FDistanceFieldSkyOcclusion,FVolumetricFogLightScatteringCS::FLumenGI,FVolumetricFogLightScatteringCS::FVirtualShadowMap,FVolumetricFogLightScatteringCS::FRaytracedShadowsVolume,FVolumetricFogLightScatteringCS::FSampleLightFunctionAtlas,FVolumetricFogLightScatteringCS::FMegaLights,FVolumetricFogLightScatteringCS::FLightSoftFading>
  local_18;
  
  EVar1 = param_1->Platform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x20e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    EVar8 = (*pcVar4)();
    return EVar8;
  }
  FVar2.Platform = param_1->Platform;
  pTVar10 = TShaderPermutationDomain<FVolumetricFogLightScatteringCS::FSuperSampleCount,FVolumetricFogLightScatteringCS::FTemporalReprojection,FVolumetricFogLightScatteringCS::FDistanceFieldSkyOcclusion,FVolumetricFogLightScatteringCS::FLumenGI,FVolumetricFogLightScatteringCS::FVirtualShadowMap,FVolumetricFogLightScatteringCS::FRaytracedShadowsVolume,FVolumetricFogLightScatteringCS::FSampleLightFunctionAtlas,FVolumetricFogLightScatteringCS::FMegaLights,FVolumetricFogLightScatteringCS::FLightSoftFading>
            ::
            TShaderPermutationDomain<FVolumetricFogLightScatteringCS::FSuperSampleCount,FVolumetricFogLightScatteringCS::FTemporalReprojection,FVolumetricFogLightScatteringCS::FDistanceFieldSkyOcclusion,FVolumetricFogLightScatteringCS::FLumenGI,FVolumetricFogLightScatteringCS::FVirtualShadowMap,FVolumetricFogLightScatteringCS::FRaytracedShadowsVolume,FVolumetricFogLightScatteringCS::FSampleLightFunctionAtlas,FVolumetricFogLightScatteringCS::FMegaLights,FVolumetricFogLightScatteringCS::FLightSoftFading>
                      (&local_18,param_1->PermutationId);
  local_28._0_4_ = pTVar10->DimensionValue;
  local_28._4_1_ = (pTVar10->Tail).DimensionValue;
  local_28._5_1_ = (pTVar10->Tail).Tail.DimensionValue;
  uVar5 = (pTVar10->Tail).Tail.Tail.DimensionValue;
  uVar6 = (pTVar10->Tail).Tail.Tail.Tail.DimensionValue;
  unique0x100000d4 = CONCAT11(uVar6,uVar5);
  bVar7 = IsMobileVolumetricFog(FVar2);
  if (bVar7) {
    local_28 = (uint6)(uint)(undefined4)local_28;
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[FVar2.Platform].bContainsValidPlatformInfo == 0)
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid(Platform)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                            ,0x20e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    EVar8 = (*pcVar4)();
    return EVar8;
  }
  cVar11 = (char)uStack_22;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[FVar2.Platform].bSupportsLumenGI == 0) {
    cVar11 = '\0';
  }
  ShouldCompileRayTracingShadersForProject(FVar2.Platform);
  MegaLights::ShouldCompileShaders(FVar2.Platform);
  if (((cVar11 == '\0') ||
      (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsLumenGI != 0)) &&
     (((char)((ulonglong)_local_28 >> 0x20) == '\0' || (GVolumetricFogTemporalReprojection != 0))))
  {
    if (GVolumetricFogHistoryMissSupersampleCount < 2) {
      iVar9 = 1;
    }
    else if (GVolumetricFogHistoryMissSupersampleCount < 5) {
      iVar9 = 4;
    }
    else {
      iVar9 = 0x10;
      if (GVolumetricFogHistoryMissSupersampleCount < 9) {
        iVar9 = 8;
      }
    }
    EVar8 = Precached;
    if ((int)_local_28 != iVar9) {
      EVar8 = NotUsed;
    }
  }
  else {
    EVar8 = NotUsed;
  }
  return EVar8;
}

// ShouldPrecachePermutationImpl @ 14588b9c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FVolumetricFogLightScatteringCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  FStaticShaderPlatform FVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  EShaderPermutationPrecacheRequest EVar8;
  int iVar9;
  TShaderPermutationDomain<FVolumetricFogLightScatteringCS::FSuperSampleCount,FVolumetricFogLightScatteringCS::FTemporalReprojection,FVolumetricFogLightScatteringCS::FDistanceFieldSkyOcclusion,FVolumetricFogLightScatteringCS::FLumenGI,FVolumetricFogLightScatteringCS::FVirtualShadowMap,FVolumetricFogLightScatteringCS::FRaytracedShadowsVolume,FVolumetricFogLightScatteringCS::FSampleLightFunctionAtlas,FVolumetricFogLightScatteringCS::FMegaLights,FVolumetricFogLightScatteringCS::FLightSoftFading>
  *pTVar10;
  char cVar11;
  uint6 uStack_28;
  undefined2 uStack_22;
  TShaderPermutationDomain<FVolumetricFogLightScatteringCS::FSuperSampleCount,FVolumetricFogLightScatteringCS::FTemporalReprojection,FVolumetricFogLightScatteringCS::FDistanceFieldSkyOcclusion,FVolumetricFogLightScatteringCS::FLumenGI,FVolumetricFogLightScatteringCS::FVirtualShadowMap,FVolumetricFogLightScatteringCS::FRaytracedShadowsVolume,FVolumetricFogLightScatteringCS::FSampleLightFunctionAtlas,FVolumetricFogLightScatteringCS::FMegaLights,FVolumetricFogLightScatteringCS::FLightSoftFading>
  TStack_18;
  
  EVar1 = param_1->Platform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x20e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    EVar8 = (*pcVar4)();
    return EVar8;
  }
  FVar2.Platform = param_1->Platform;
  pTVar10 = TShaderPermutationDomain<FVolumetricFogLightScatteringCS::FSuperSampleCount,FVolumetricFogLightScatteringCS::FTemporalReprojection,FVolumetricFogLightScatteringCS::FDistanceFieldSkyOcclusion,FVolumetricFogLightScatteringCS::FLumenGI,FVolumetricFogLightScatteringCS::FVirtualShadowMap,FVolumetricFogLightScatteringCS::FRaytracedShadowsVolume,FVolumetricFogLightScatteringCS::FSampleLightFunctionAtlas,FVolumetricFogLightScatteringCS::FMegaLights,FVolumetricFogLightScatteringCS::FLightSoftFading>
            ::
            TShaderPermutationDomain<FVolumetricFogLightScatteringCS::FSuperSampleCount,FVolumetricFogLightScatteringCS::FTemporalReprojection,FVolumetricFogLightScatteringCS::FDistanceFieldSkyOcclusion,FVolumetricFogLightScatteringCS::FLumenGI,FVolumetricFogLightScatteringCS::FVirtualShadowMap,FVolumetricFogLightScatteringCS::FRaytracedShadowsVolume,FVolumetricFogLightScatteringCS::FSampleLightFunctionAtlas,FVolumetricFogLightScatteringCS::FMegaLights,FVolumetricFogLightScatteringCS::FLightSoftFading>
                      (&TStack_18,param_1->PermutationId);
  uStack_28._0_4_ = pTVar10->DimensionValue;
  uStack_28._4_1_ = (pTVar10->Tail).DimensionValue;
  uStack_28._5_1_ = (pTVar10->Tail).Tail.DimensionValue;
  uVar5 = (pTVar10->Tail).Tail.Tail.DimensionValue;
  uVar6 = (pTVar10->Tail).Tail.Tail.Tail.DimensionValue;
  unique0x100000d4 = CONCAT11(uVar6,uVar5);
  bVar7 = IsMobileVolumetricFog(FVar2);
  if (bVar7) {
    uStack_28 = (uint6)(uint)(undefined4)uStack_28;
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[FVar2.Platform].bContainsValidPlatformInfo == 0)
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid(Platform)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                            ,0x20e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    EVar8 = (*pcVar4)();
    return EVar8;
  }
  cVar11 = (char)uStack_22;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[FVar2.Platform].bSupportsLumenGI == 0) {
    cVar11 = '\0';
  }
  ShouldCompileRayTracingShadersForProject(FVar2.Platform);
  MegaLights::ShouldCompileShaders(FVar2.Platform);
  if (((cVar11 == '\0') ||
      (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsLumenGI != 0)) &&
     (((char)((ulonglong)_uStack_28 >> 0x20) == '\0' || (GVolumetricFogTemporalReprojection != 0))))
  {
    if (GVolumetricFogHistoryMissSupersampleCount < 2) {
      iVar9 = 1;
    }
    else if (GVolumetricFogHistoryMissSupersampleCount < 5) {
      iVar9 = 4;
    }
    else {
      iVar9 = 0x10;
      if (GVolumetricFogHistoryMissSupersampleCount < 9) {
        iVar9 = 8;
      }
    }
    EVar8 = Precached;
    if ((int)_uStack_28 != iVar9) {
      EVar8 = NotUsed;
    }
  }
  else {
    EVar8 = NotUsed;
  }
  return EVar8;
}

// StaticGetTypeLayout @ 14588e8a0

FTypeLayoutDesc * __cdecl FVolumetricFogLightScatteringCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FVolumetricFogL;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FVolumetricFogLightScatteringCS,0>::Do;
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

