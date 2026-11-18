// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// ConstructCompiledInstance @ 14575d560

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
FTranslucentLightingInjectPS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FMaterialShader *this;
  FShaderParametersMetadata *pFVar1;
  
  this = ::operator_new(0xf8);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    pFVar1 = FParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              ((FShaderParameterBindings *)this,(FShader *)this,param_1->PermutationId,
               param_1->ParameterMap,pFVar1,false);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14575e160

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

FShader * __cdecl FTranslucentLightingInjectPS::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0xf8);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 145776540

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

FMaterialShaderType * __cdecl FTranslucentLightingInjectPS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Material,pFVar4,L"FTranslucentLightingInjectPS",
                 L"/Engine/Private/TranslucentLightInjectionShaders.usf",L"InjectMainPS",3,0x20,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xf8,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/TranslucentLightInjectionShaders.usf");
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
      atexit(`FTranslucentLightingInjectPS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 145779f60

FTypeLayoutDesc * __thiscall
FTranslucentLightingInjectPS::GetTypeLayout(FTranslucentLightingInjectPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FTranslucentLig;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FTranslucentLightingInjectPS,0>::Do;
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
    ::FieldBuffer._8_8_ = FMaterialShader::StaticGetTypeLayout();
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

// InternalDestroy @ 1457807a0

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
FTranslucentLightingInjectPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf8);
  return;
}

// ShouldCompilePermutation @ 14578df60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FTranslucentLightingInjectPS::ShouldCompilePermutation
          (FMaterialShaderPermutationParameters *param_1)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  TShaderPermutationDomain<FTranslucentLightingInjectPS::FLightFunction,FTranslucentLightingInjectPS::FVirtualShadowMap,FTranslucentLightingInjectPS::FAdaptiveVolumetricShadowMap>
  local_resa;
  
  uVar2 = *(uint *)((longlong)&param_1->_padding_ + 4);
  uVar7 = (int)uVar2 / 2;
  if ((((int)uVar2 % 2 != 0) && ((int)uVar2 % 2 != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar6 = uVar7 & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  if (((uVar6 != 0) && (uVar6 != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  TShaderPermutationDomain<FTranslucentLightingInjectPS::FLightFunction,FTranslucentLightingInjectPS::FVirtualShadowMap,FTranslucentLightingInjectPS::FAdaptiveVolumetricShadowMap>
  ::
  TShaderPermutationDomain<FTranslucentLightingInjectPS::FLightFunction,FTranslucentLightingInjectPS::FVirtualShadowMap,FTranslucentLightingInjectPS::FAdaptiveVolumetricShadowMap>
            (&local_resa,(int)uVar7 / 2);
  if ((0xf < uVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((0x1f < uVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = DoesPlatformSupportVirtualShadowMaps((EShaderPlatform)param_1->_padding_);
  if ((((bVar4) || (local_resa.Tail.DimensionValue == false)) &&
      ((bVar4 = DoesPlatformSupportHeterogeneousVolumes((EShaderPlatform)param_1->_padding_), bVar4
       || (local_resa.Tail.Tail.DimensionValue == false)))) &&
     (((int)(param_1->MaterialParameters)._padding_ == 2 ||
      (((param_1->MaterialParameters)._padding_ & 2) != 0)))) {
    uVar1 = (ushort)param_1->_padding_;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel) &&
       ((bVar4 = RHISupportsGeometryShaders
                           ((FStaticShaderPlatform)(EShaderPlatform)param_1->_padding_), bVar4 ||
        (bVar4 = RHISupportsVertexShaderLayer
                           ((FStaticShaderPlatform)(EShaderPlatform)param_1->_padding_), bVar4)))) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 14578ec10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FTranslucentLightingInjectPS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  TShaderPermutationDomain<FTranslucentLightingInjectPS::FLightFunction,FTranslucentLightingInjectPS::FVirtualShadowMap,FTranslucentLightingInjectPS::FAdaptiveVolumetricShadowMap>
  TStackX_a;
  
  uVar2 = param_1->PermutationId;
  uVar7 = (int)uVar2 / 2;
  if ((((int)uVar2 % 2 != 0) && ((int)uVar2 % 2 != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar6 = uVar7 & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  if (((uVar6 != 0) && (uVar6 != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  TShaderPermutationDomain<FTranslucentLightingInjectPS::FLightFunction,FTranslucentLightingInjectPS::FVirtualShadowMap,FTranslucentLightingInjectPS::FAdaptiveVolumetricShadowMap>
  ::
  TShaderPermutationDomain<FTranslucentLightingInjectPS::FLightFunction,FTranslucentLightingInjectPS::FVirtualShadowMap,FTranslucentLightingInjectPS::FAdaptiveVolumetricShadowMap>
            (&TStackX_a,(int)uVar7 / 2);
  if ((0xf < uVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((0x1f < uVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = DoesPlatformSupportVirtualShadowMaps(param_1->Platform);
  if ((((bVar4) || (TStackX_a.Tail.DimensionValue == false)) &&
      ((bVar4 = DoesPlatformSupportHeterogeneousVolumes(param_1->Platform), bVar4 ||
       (TStackX_a.Tail.Tail.DimensionValue == false)))) &&
     ((param_1[1].PermutationId == 2 || ((param_1[4].Flags & IsODSCOnly) != None)))) {
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel) &&
       ((bVar4 = RHISupportsGeometryShaders((FStaticShaderPlatform)param_1->Platform), bVar4 ||
        (bVar4 = RHISupportsVertexShaderLayer((FStaticShaderPlatform)param_1->Platform), bVar4)))) {
      return true;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 14578eef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FTranslucentLightingInjectPS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 145792a40

FTypeLayoutDesc * __cdecl FTranslucentLightingInjectPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FTranslucentLig;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FTranslucentLightingInjectPS,0>::Do;
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
    ::FieldBuffer._8_8_ = FMaterialShader::StaticGetTypeLayout();
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

