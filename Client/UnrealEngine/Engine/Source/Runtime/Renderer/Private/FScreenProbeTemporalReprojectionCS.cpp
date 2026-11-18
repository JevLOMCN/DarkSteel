// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// ConstructCompiledInstance @ 144e038a0

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
FScreenProbeTemporalReprojectionCS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 144e04740

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

FShader * __cdecl FScreenProbeTemporalReprojectionCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 144e222c0

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

FGlobalShaderType * __cdecl FScreenProbeTemporalReprojectionCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar5,L"FScreenProbeTemporalReprojectionCS",
                 L"/Engine/Private/Lumen/LumenScreenProbeGatherTemporal.usf",
                 L"ScreenProbeTemporalReprojectionCS",5,0x180,ConstructSerializedInstance,
                 ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/Lumen/LumenScreenProbeGatherTemporal.usf");
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
      atexit(`FScreenProbeTemporalReprojectionCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144e27380

FTypeLayoutDesc * __thiscall
FScreenProbeTemporalReprojectionCS::GetTypeLayout(FScreenProbeTemporalReprojectionCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FScreenProbeTem;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FScreenProbeTemporalReprojectionCS,0>::Do;
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

// InternalDestroy @ 144e27ff0

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
FScreenProbeTemporalReprojectionCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutation @ 144e30010

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FScreenProbeTemporalReprojectionCS::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  TShaderPermutationDomain<FScreenProbeTemporalReprojectionCS::FOverflowTile,FScreenProbeTemporalReprojectionCS::FSupportBackfaceDiffuse,FScreenProbeTemporalReprojectionCS::FIntegrateDownsampleFactor,FScreenProbeTemporalReprojectionCS::FShortRangeAOMode,FScreenProbeTemporalReprojectionCS::FShortRangeAODownsampleFactor,FScreenProbeTemporalReprojectionCS::FShortRangeGI>
  TStack_20;
  
  uVar1 = *(uint *)&param_1->field_0x4;
  uVar11 = (int)uVar1 / 2;
  if ((((int)uVar1 % 2 != 0) && ((int)uVar1 % 2 != 1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  uVar10 = uVar11 & 0x80000001;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
  }
  if (((uVar10 != 0) && (uVar10 != 1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  TShaderPermutationDomain<FScreenProbeTemporalReprojectionCS::FOverflowTile,FScreenProbeTemporalReprojectionCS::FSupportBackfaceDiffuse,FScreenProbeTemporalReprojectionCS::FIntegrateDownsampleFactor,FScreenProbeTemporalReprojectionCS::FShortRangeAOMode,FScreenProbeTemporalReprojectionCS::FShortRangeAODownsampleFactor,FScreenProbeTemporalReprojectionCS::FShortRangeGI>
  ::
  TShaderPermutationDomain<FScreenProbeTemporalReprojectionCS::FOverflowTile,FScreenProbeTemporalReprojectionCS::FSupportBackfaceDiffuse,FScreenProbeTemporalReprojectionCS::FIntegrateDownsampleFactor,FScreenProbeTemporalReprojectionCS::FShortRangeAOMode,FScreenProbeTemporalReprojectionCS::FShortRangeAODownsampleFactor,FScreenProbeTemporalReprojectionCS::FShortRangeGI>
            (&TStack_20,(int)uVar11 / 2);
  if ((0xbf < uVar11) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((0x17f < uVar1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  bVar5 = TStack_20.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  iVar4 = TStack_20.Tail.Tail.Tail.DimensionValue;
  bVar6 = TStack_20.Tail.DimensionValue;
  iVar3 = TStack_20.Tail.Tail.Tail.Tail.DimensionValue;
  if (TStack_20.Tail.Tail.Tail.DimensionValue == 0) {
    iVar3 = 1;
  }
  bVar8 = Lumen::SupportsMultipleClosureEvaluation(*(EShaderPlatform *)param_1);
  cVar9 = TStack_20.DimensionValue;
  if (!bVar8) {
    cVar9 = '\0';
  }
  if (((((bool)cVar9 == TStack_20.DimensionValue) && (bVar6 == TStack_20.Tail.DimensionValue)) &&
      (iVar4 == TStack_20.Tail.Tail.Tail.DimensionValue)) &&
     ((iVar3 == TStack_20.Tail.Tail.Tail.Tail.DimensionValue &&
      (bVar5 == TStack_20.Tail.Tail.Tail.Tail.Tail.DimensionValue)))) {
    DoesPlatformSupportLumenGI(*(EShaderPlatform *)param_1,false);
    bVar6 = DoesPlatformSupportLumenGI(*(EShaderPlatform *)param_1,false);
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// ShouldCompilePermutationImpl @ 144e30a50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FScreenProbeTemporalReprojectionCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  TShaderPermutationDomain<FScreenProbeTemporalReprojectionCS::FOverflowTile,FScreenProbeTemporalReprojectionCS::FSupportBackfaceDiffuse,FScreenProbeTemporalReprojectionCS::FIntegrateDownsampleFactor,FScreenProbeTemporalReprojectionCS::FShortRangeAOMode,FScreenProbeTemporalReprojectionCS::FShortRangeAODownsampleFactor,FScreenProbeTemporalReprojectionCS::FShortRangeGI>
  TStack_20;
  
  uVar1 = param_1->PermutationId;
  uVar11 = (int)uVar1 / 2;
  if ((((int)uVar1 % 2 != 0) && ((int)uVar1 % 2 != 1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  uVar10 = uVar11 & 0x80000001;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
  }
  if (((uVar10 != 0) && (uVar10 != 1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  TShaderPermutationDomain<FScreenProbeTemporalReprojectionCS::FOverflowTile,FScreenProbeTemporalReprojectionCS::FSupportBackfaceDiffuse,FScreenProbeTemporalReprojectionCS::FIntegrateDownsampleFactor,FScreenProbeTemporalReprojectionCS::FShortRangeAOMode,FScreenProbeTemporalReprojectionCS::FShortRangeAODownsampleFactor,FScreenProbeTemporalReprojectionCS::FShortRangeGI>
  ::
  TShaderPermutationDomain<FScreenProbeTemporalReprojectionCS::FOverflowTile,FScreenProbeTemporalReprojectionCS::FSupportBackfaceDiffuse,FScreenProbeTemporalReprojectionCS::FIntegrateDownsampleFactor,FScreenProbeTemporalReprojectionCS::FShortRangeAOMode,FScreenProbeTemporalReprojectionCS::FShortRangeAODownsampleFactor,FScreenProbeTemporalReprojectionCS::FShortRangeGI>
            (&TStack_20,(int)uVar11 / 2);
  if ((0xbf < uVar11) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((0x17f < uVar1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  bVar5 = TStack_20.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  iVar4 = TStack_20.Tail.Tail.Tail.DimensionValue;
  bVar6 = TStack_20.Tail.DimensionValue;
  iVar3 = TStack_20.Tail.Tail.Tail.Tail.DimensionValue;
  if (TStack_20.Tail.Tail.Tail.DimensionValue == 0) {
    iVar3 = 1;
  }
  bVar8 = Lumen::SupportsMultipleClosureEvaluation(param_1->Platform);
  cVar9 = TStack_20.DimensionValue;
  if (!bVar8) {
    cVar9 = '\0';
  }
  if (((((bool)cVar9 == TStack_20.DimensionValue) && (bVar6 == TStack_20.Tail.DimensionValue)) &&
      (iVar4 == TStack_20.Tail.Tail.Tail.DimensionValue)) &&
     ((iVar3 == TStack_20.Tail.Tail.Tail.Tail.DimensionValue &&
      (bVar5 == TStack_20.Tail.Tail.Tail.Tail.Tail.DimensionValue)))) {
    DoesPlatformSupportLumenGI(param_1->Platform,false);
    bVar6 = DoesPlatformSupportLumenGI(param_1->Platform,false);
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// ShouldPrecachePermutationImpl @ 144e314b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FScreenProbeTemporalReprojectionCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 144e33ff0

FTypeLayoutDesc * __cdecl FScreenProbeTemporalReprojectionCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FScreenProbeTem;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FScreenProbeTemporalReprojectionCS,0>::Do;
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

