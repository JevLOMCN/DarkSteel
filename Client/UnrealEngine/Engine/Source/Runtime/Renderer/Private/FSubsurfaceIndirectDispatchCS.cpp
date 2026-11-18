// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// ConstructCompiledInstance @ 145239f70

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
FSubsurfaceIndirectDispatchCS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 14523b6a0

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

FShader * __cdecl FSubsurfaceIndirectDispatchCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 145251950

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

FGlobalShaderType * __cdecl FSubsurfaceIndirectDispatchCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar5,L"FSubsurfaceIndirectDispatchCS",
                 L"/Engine/Private/PostProcessSubsurface.usf",L"MainIndirectDispatchCS",5,0xc0,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/PostProcessSubsurface.usf");
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
      atexit(`FSubsurfaceIndirectDispatchCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 14525a6a0

FTypeLayoutDesc * __thiscall
FSubsurfaceIndirectDispatchCS::GetTypeLayout(FSubsurfaceIndirectDispatchCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FSubsurfaceIndi;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSubsurfaceIndirectDispatchCS,0>::Do;
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

// InternalDestroy @ 14525be70

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
FSubsurfaceIndirectDispatchCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 14525f070

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FSubsurfaceIndirectDispatchCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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

// ShouldPrecachePermutation @ 14525f9e0

EShaderPermutationPrecacheRequest __cdecl
FSubsurfaceIndirectDispatchCS::ShouldPrecachePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  uint uVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  EShaderPermutationPrecacheRequest EVar6;
  EBilateralFilterKernelFunctionType EVar7;
  longlong lVar8;
  EBilateralFilterKernelFunctionType EVar9;
  longlong lVar10;
  TShaderPermutationDomain<FSubsurfaceIndirectDispatchCS::FDimensionQuality,FSubsurfaceIndirectDispatchCS::FBilateralFilterKernelFunctionType,FSubsurfaceIndirectDispatchCS::FSubsurfaceType,FSubsurfaceIndirectDispatchCS::FDimensionHalfRes,FSubsurfaceIndirectDispatchCS::FRunningInSeparable,FSubsurfaceIndirectDispatchCS::FDimensionEnableProfileIDCache>
  local_24;
  
  uVar1 = *(uint *)&param_1->field_0x4;
  if (((1 < (int)uVar1 % 2) || ((int)uVar1 % 2 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar5)) {
    pcVar2 = (code *)swi(3);
    EVar6 = (*pcVar2)();
    return EVar6;
  }
  TShaderPermutationDomain<FSubsurfaceIndirectDispatchCS::FDimensionQuality,FSubsurfaceIndirectDispatchCS::FBilateralFilterKernelFunctionType,FSubsurfaceIndirectDispatchCS::FSubsurfaceType,FSubsurfaceIndirectDispatchCS::FDimensionHalfRes,FSubsurfaceIndirectDispatchCS::FRunningInSeparable,FSubsurfaceIndirectDispatchCS::FDimensionEnableProfileIDCache>
  ::
  TShaderPermutationDomain<FSubsurfaceIndirectDispatchCS::FDimensionQuality,FSubsurfaceIndirectDispatchCS::FBilateralFilterKernelFunctionType,FSubsurfaceIndirectDispatchCS::FSubsurfaceType,FSubsurfaceIndirectDispatchCS::FDimensionHalfRes,FSubsurfaceIndirectDispatchCS::FRunningInSeparable,FSubsurfaceIndirectDispatchCS::FDimensionEnableProfileIDCache>
            (&local_24,(int)uVar1 / 2);
  if ((0xbf < uVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar5)) {
    pcVar2 = (code *)swi(3);
    EVar6 = (*pcVar2)();
    return EVar6;
  }
  pTVar3 = CVarSSSSampleSet.Ref;
  bVar5 = IsInParallelGameThread();
  lVar10 = 0;
  if (!bVar5) {
    bVar5 = IsInGameThread();
    lVar8 = 4;
    if (!bVar5) goto LAB_14525fa9e;
  }
  lVar8 = lVar10;
LAB_14525fa9e:
  pTVar4 = CVarSSSBurleyBilateralFilterKernelFunctionType.Ref;
  EVar9 = MAX;
  if (*(int *)((longlong)pTVar3->ShadowedValue + lVar8) < 2) {
    EVar9 = *(EBilateralFilterKernelFunctionType *)((longlong)pTVar3->ShadowedValue + lVar8);
  }
  EVar7 = Depth;
  if (0 < (int)EVar9) {
    EVar7 = EVar9;
  }
  if (local_24.DimensionValue == EVar7) {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), lVar8 = 4, bVar5)) {
      lVar8 = lVar10;
    }
    EVar9 = DepthAndNormal;
    if (*(int *)((longlong)pTVar4->ShadowedValue + lVar8) < 1) {
      EVar9 = *(EBilateralFilterKernelFunctionType *)((longlong)pTVar4->ShadowedValue + lVar8);
    }
    EVar7 = Depth;
    if (0 < (int)EVar9) {
      EVar7 = EVar9;
    }
    if (local_24.Tail.DimensionValue != EVar7) {
      lVar10 = 2;
    }
    return (EShaderPermutationPrecacheRequest)lVar10;
  }
  return NotUsed;
}

// ShouldPrecachePermutationImpl @ 14525fda0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FSubsurfaceIndirectDispatchCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  uint uVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  EShaderPermutationPrecacheRequest EVar6;
  EBilateralFilterKernelFunctionType EVar7;
  longlong lVar8;
  EBilateralFilterKernelFunctionType EVar9;
  longlong lVar10;
  TShaderPermutationDomain<FSubsurfaceIndirectDispatchCS::FDimensionQuality,FSubsurfaceIndirectDispatchCS::FBilateralFilterKernelFunctionType,FSubsurfaceIndirectDispatchCS::FSubsurfaceType,FSubsurfaceIndirectDispatchCS::FDimensionHalfRes,FSubsurfaceIndirectDispatchCS::FRunningInSeparable,FSubsurfaceIndirectDispatchCS::FDimensionEnableProfileIDCache>
  TStack_24;
  
  uVar1 = param_1->PermutationId;
  if (((1 < (int)uVar1 % 2) || ((int)uVar1 % 2 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar5)) {
    pcVar2 = (code *)swi(3);
    EVar6 = (*pcVar2)();
    return EVar6;
  }
  TShaderPermutationDomain<FSubsurfaceIndirectDispatchCS::FDimensionQuality,FSubsurfaceIndirectDispatchCS::FBilateralFilterKernelFunctionType,FSubsurfaceIndirectDispatchCS::FSubsurfaceType,FSubsurfaceIndirectDispatchCS::FDimensionHalfRes,FSubsurfaceIndirectDispatchCS::FRunningInSeparable,FSubsurfaceIndirectDispatchCS::FDimensionEnableProfileIDCache>
  ::
  TShaderPermutationDomain<FSubsurfaceIndirectDispatchCS::FDimensionQuality,FSubsurfaceIndirectDispatchCS::FBilateralFilterKernelFunctionType,FSubsurfaceIndirectDispatchCS::FSubsurfaceType,FSubsurfaceIndirectDispatchCS::FDimensionHalfRes,FSubsurfaceIndirectDispatchCS::FRunningInSeparable,FSubsurfaceIndirectDispatchCS::FDimensionEnableProfileIDCache>
            (&TStack_24,(int)uVar1 / 2);
  if ((0xbf < uVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar5)) {
    pcVar2 = (code *)swi(3);
    EVar6 = (*pcVar2)();
    return EVar6;
  }
  pTVar3 = CVarSSSSampleSet.Ref;
  bVar5 = IsInParallelGameThread();
  lVar10 = 0;
  if (!bVar5) {
    bVar5 = IsInGameThread();
    lVar8 = 4;
    if (!bVar5) goto LAB_14525fa9e;
  }
  lVar8 = lVar10;
LAB_14525fa9e:
  pTVar4 = CVarSSSBurleyBilateralFilterKernelFunctionType.Ref;
  EVar9 = MAX;
  if (*(int *)((longlong)pTVar3->ShadowedValue + lVar8) < 2) {
    EVar9 = *(EBilateralFilterKernelFunctionType *)((longlong)pTVar3->ShadowedValue + lVar8);
  }
  EVar7 = Depth;
  if (0 < (int)EVar9) {
    EVar7 = EVar9;
  }
  if (TStack_24.DimensionValue == EVar7) {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), lVar8 = 4, bVar5)) {
      lVar8 = lVar10;
    }
    EVar9 = DepthAndNormal;
    if (*(int *)((longlong)pTVar4->ShadowedValue + lVar8) < 1) {
      EVar9 = *(EBilateralFilterKernelFunctionType *)((longlong)pTVar4->ShadowedValue + lVar8);
    }
    EVar7 = Depth;
    if (0 < (int)EVar9) {
      EVar7 = EVar9;
    }
    if (TStack_24.Tail.DimensionValue != EVar7) {
      lVar10 = 2;
    }
    return (EShaderPermutationPrecacheRequest)lVar10;
  }
  return NotUsed;
}

// StaticGetTypeLayout @ 145263510

FTypeLayoutDesc * __cdecl FSubsurfaceIndirectDispatchCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FSubsurfaceIndi;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSubsurfaceIndirectDispatchCS,0>::Do;
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

