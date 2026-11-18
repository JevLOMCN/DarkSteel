// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// ConstructCompiledInstance @ 144e03ba0

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
FScreenSpaceShortRangeAOCS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

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

// ConstructSerializedInstance @ 144e04920

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

FShader * __cdecl FScreenSpaceShortRangeAOCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 144e22f20

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

FGlobalShaderType * __cdecl FScreenSpaceShortRangeAOCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar5,L"FScreenSpaceShortRangeAOCS",
                 L"/Engine/Private/Lumen/LumenScreenSpaceBentNormal.usf",
                 L"ScreenSpaceShortRangeAOCS",5,0xc00,ConstructSerializedInstance,
                 ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/Lumen/LumenScreenSpaceBentNormal.usf");
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
      atexit(`FScreenSpaceShortRangeAOCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144e273e0

FTypeLayoutDesc * __thiscall
FScreenSpaceShortRangeAOCS::GetTypeLayout(FScreenSpaceShortRangeAOCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FScreenSpaceSho;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FScreenSpaceShortRangeAOCS,0>::Do;
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

// InternalDestroy @ 144e28170

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
FScreenSpaceShortRangeAOCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 144e30ca0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FScreenSpaceShortRangeAOCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  char cStack_64;
  char cStack_5c;
  ulonglong local_58;
  TShaderPermutationDomain<FScreenSpaceShortRangeAOCS::FHorizonSearch,FScreenSpaceShortRangeAOCS::FHorizonSearchVisibilityBitmask,FScreenSpaceShortRangeAOCS::FHorizonSearchHZB,FScreenSpaceShortRangeAOCS::FShortRangeGI,FScreenSpaceShortRangeAOCS::FNumPixelRays,FScreenSpaceShortRangeAOCS::FOverflow,FScreenSpaceShortRangeAOCS::FHairStrandsScreen,FScreenSpaceShortRangeAOCS::FHairStrandsVoxel,FScreenSpaceShortRangeAOCS::FOutputBentNormal,FScreenSpaceShortRangeAOCS::FDownsampleFactor,FScreenSpaceShortRangeAOCS::FUseDistanceFieldRepresentationBit>
  local_38;
  
  TShaderPermutationDomain<FScreenSpaceShortRangeAOCS::FHorizonSearch,FScreenSpaceShortRangeAOCS::FHorizonSearchVisibilityBitmask,FScreenSpaceShortRangeAOCS::FHorizonSearchHZB,FScreenSpaceShortRangeAOCS::FShortRangeGI,FScreenSpaceShortRangeAOCS::FNumPixelRays,FScreenSpaceShortRangeAOCS::FOverflow,FScreenSpaceShortRangeAOCS::FHairStrandsScreen,FScreenSpaceShortRangeAOCS::FHairStrandsVoxel,FScreenSpaceShortRangeAOCS::FOutputBentNormal,FScreenSpaceShortRangeAOCS::FDownsampleFactor,FScreenSpaceShortRangeAOCS::FUseDistanceFieldRepresentationBit>
  ::
  TShaderPermutationDomain<FScreenSpaceShortRangeAOCS::FHorizonSearch,FScreenSpaceShortRangeAOCS::FHorizonSearchVisibilityBitmask,FScreenSpaceShortRangeAOCS::FHorizonSearchHZB,FScreenSpaceShortRangeAOCS::FShortRangeGI,FScreenSpaceShortRangeAOCS::FNumPixelRays,FScreenSpaceShortRangeAOCS::FOverflow,FScreenSpaceShortRangeAOCS::FHairStrandsScreen,FScreenSpaceShortRangeAOCS::FHairStrandsVoxel,FScreenSpaceShortRangeAOCS::FOutputBentNormal,FScreenSpaceShortRangeAOCS::FDownsampleFactor,FScreenSpaceShortRangeAOCS::FUseDistanceFieldRepresentationBit>
            (&local_38,param_1->PermutationId);
  iVar4 = local_38.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar3 = local_38.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar6 = local_38.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  cVar9 = local_38.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  iVar2 = local_38.Tail.Tail.Tail.Tail.DimensionValue;
  cVar7 = local_38.Tail.Tail.DimensionValue;
  cStack_5c = local_38.Tail.Tail.Tail.DimensionValue;
  cStack_64 = local_38.Tail.DimensionValue;
  local_58 = CONCAT44(local_38.Tail.Tail.Tail.Tail.Tail._0_4_,
                      local_38.Tail.Tail.Tail.Tail.DimensionValue);
  EVar1 = param_1->Platform;
  bVar5 = Substrate::IsSubstrateEnabled();
  if ((!bVar5) || (bVar5 = Substrate::IsSubstrateBlendableGBufferEnabled(EVar1), bVar5)) {
    local_58 = (ulonglong)(uint)iVar2;
  }
  if (local_38.DimensionValue == false) {
    cVar7 = '\0';
    cStack_64 = '\0';
    cStack_5c = '\0';
    cVar10 = local_38.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
    uVar8 = (uint)local_58;
  }
  else {
    cVar9 = '\0';
    local_58 = CONCAT44(local_58._4_4_,4);
    cVar10 = '\0';
    uVar8 = 4;
  }
  if (((((((bool)cStack_64 == local_38.Tail.DimensionValue) &&
         ((bool)cVar7 == local_38.Tail.Tail.DimensionValue)) &&
        ((bool)cStack_5c == local_38.Tail.Tail.Tail.DimensionValue)) &&
       ((uVar8 == local_38.Tail.Tail.Tail.Tail.DimensionValue &&
        ((bool)(char)(local_58 >> 0x20) == local_38.Tail.Tail.Tail.Tail.Tail.DimensionValue)))) &&
      (((bool)cVar9 == local_38.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue &&
       ((bVar6 == local_38.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue &&
        (bVar3 == local_38.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue)))))) &&
     ((iVar4 == local_38.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue &&
      ((bool)cVar10 == local_38.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue))))
  {
    bVar6 = DoesPlatformSupportLumenGI(param_1->Platform,false);
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// ShouldPrecachePermutation @ 144e31170

EShaderPermutationPrecacheRequest __cdecl
FScreenSpaceShortRangeAOCS::ShouldPrecachePermutation(FGlobalShaderPermutationParameters *param_1)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  TShaderPermutationDomain<FScreenSpaceShortRangeAOCS::FHorizonSearch,FScreenSpaceShortRangeAOCS::FHorizonSearchVisibilityBitmask,FScreenSpaceShortRangeAOCS::FHorizonSearchHZB,FScreenSpaceShortRangeAOCS::FShortRangeGI,FScreenSpaceShortRangeAOCS::FNumPixelRays,FScreenSpaceShortRangeAOCS::FOverflow,FScreenSpaceShortRangeAOCS::FHairStrandsScreen,FScreenSpaceShortRangeAOCS::FHairStrandsVoxel,FScreenSpaceShortRangeAOCS::FOutputBentNormal,FScreenSpaceShortRangeAOCS::FDownsampleFactor,FScreenSpaceShortRangeAOCS::FUseDistanceFieldRepresentationBit>
  local_38;
  
  TShaderPermutationDomain<FScreenSpaceShortRangeAOCS::FHorizonSearch,FScreenSpaceShortRangeAOCS::FHorizonSearchVisibilityBitmask,FScreenSpaceShortRangeAOCS::FHorizonSearchHZB,FScreenSpaceShortRangeAOCS::FShortRangeGI,FScreenSpaceShortRangeAOCS::FNumPixelRays,FScreenSpaceShortRangeAOCS::FOverflow,FScreenSpaceShortRangeAOCS::FHairStrandsScreen,FScreenSpaceShortRangeAOCS::FHairStrandsVoxel,FScreenSpaceShortRangeAOCS::FOutputBentNormal,FScreenSpaceShortRangeAOCS::FDownsampleFactor,FScreenSpaceShortRangeAOCS::FUseDistanceFieldRepresentationBit>
  ::
  TShaderPermutationDomain<FScreenSpaceShortRangeAOCS::FHorizonSearch,FScreenSpaceShortRangeAOCS::FHorizonSearchVisibilityBitmask,FScreenSpaceShortRangeAOCS::FHorizonSearchHZB,FScreenSpaceShortRangeAOCS::FShortRangeGI,FScreenSpaceShortRangeAOCS::FNumPixelRays,FScreenSpaceShortRangeAOCS::FOverflow,FScreenSpaceShortRangeAOCS::FHairStrandsScreen,FScreenSpaceShortRangeAOCS::FHairStrandsVoxel,FScreenSpaceShortRangeAOCS::FOutputBentNormal,FScreenSpaceShortRangeAOCS::FDownsampleFactor,FScreenSpaceShortRangeAOCS::FUseDistanceFieldRepresentationBit>
            (&local_38,*(int *)&param_1->field_0x4);
  pTVar2 = CVarLumenShortRangeAOBentNormal.Ref;
  bVar8 = GLumenShortRangeAOScreenSpaceHorizonSearchHZB != 0;
  bVar9 = GLumenShortRangeAOScreenSpaceHorizonSearchVisibilityBitmask != 0;
  bVar10 = GLumenShortRangeGlobalIllumination != 0;
  if ((GLumenShortRangeAOScreenSpaceHorizonSearch == 1) || (bVar10)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar6 = 0;
  }
  else {
    lVar6 = 4;
  }
  iVar1 = *(int *)((longlong)pTVar2->ShadowedValue + lVar6);
  uVar5 = LumenShortRangeAO::GetDownsampleFactor();
  EVar4 = GLumenShortRangeAOHairStrandsScreenTrace < 1;
  if (((((local_38.DimensionValue == bVar7) && (local_38.Tail.Tail.Tail.DimensionValue == bVar10))
       && (local_38.Tail.Tail.DimensionValue == bVar8)) &&
      ((local_38.Tail.DimensionValue == bVar9 &&
       (local_38.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == (iVar1 != 0))))) &&
     (local_38.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == uVar5)) {
    if ((local_38.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) ||
       (0 < GLumenShortRangeAOHairStrandsVoxelTrace)) {
      if (local_38.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) {
        EVar4 = Precached;
      }
    }
    else {
      EVar4 = NotUsed;
    }
  }
  else {
    EVar4 = NotPrecached;
  }
  return EVar4;
}

// ShouldPrecachePermutationImpl @ 144e31540

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FScreenSpaceShortRangeAOCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  TShaderPermutationDomain<FScreenSpaceShortRangeAOCS::FHorizonSearch,FScreenSpaceShortRangeAOCS::FHorizonSearchVisibilityBitmask,FScreenSpaceShortRangeAOCS::FHorizonSearchHZB,FScreenSpaceShortRangeAOCS::FShortRangeGI,FScreenSpaceShortRangeAOCS::FNumPixelRays,FScreenSpaceShortRangeAOCS::FOverflow,FScreenSpaceShortRangeAOCS::FHairStrandsScreen,FScreenSpaceShortRangeAOCS::FHairStrandsVoxel,FScreenSpaceShortRangeAOCS::FOutputBentNormal,FScreenSpaceShortRangeAOCS::FDownsampleFactor,FScreenSpaceShortRangeAOCS::FUseDistanceFieldRepresentationBit>
  TStack_38;
  
  TShaderPermutationDomain<FScreenSpaceShortRangeAOCS::FHorizonSearch,FScreenSpaceShortRangeAOCS::FHorizonSearchVisibilityBitmask,FScreenSpaceShortRangeAOCS::FHorizonSearchHZB,FScreenSpaceShortRangeAOCS::FShortRangeGI,FScreenSpaceShortRangeAOCS::FNumPixelRays,FScreenSpaceShortRangeAOCS::FOverflow,FScreenSpaceShortRangeAOCS::FHairStrandsScreen,FScreenSpaceShortRangeAOCS::FHairStrandsVoxel,FScreenSpaceShortRangeAOCS::FOutputBentNormal,FScreenSpaceShortRangeAOCS::FDownsampleFactor,FScreenSpaceShortRangeAOCS::FUseDistanceFieldRepresentationBit>
  ::
  TShaderPermutationDomain<FScreenSpaceShortRangeAOCS::FHorizonSearch,FScreenSpaceShortRangeAOCS::FHorizonSearchVisibilityBitmask,FScreenSpaceShortRangeAOCS::FHorizonSearchHZB,FScreenSpaceShortRangeAOCS::FShortRangeGI,FScreenSpaceShortRangeAOCS::FNumPixelRays,FScreenSpaceShortRangeAOCS::FOverflow,FScreenSpaceShortRangeAOCS::FHairStrandsScreen,FScreenSpaceShortRangeAOCS::FHairStrandsVoxel,FScreenSpaceShortRangeAOCS::FOutputBentNormal,FScreenSpaceShortRangeAOCS::FDownsampleFactor,FScreenSpaceShortRangeAOCS::FUseDistanceFieldRepresentationBit>
            (&TStack_38,param_1->PermutationId);
  pTVar2 = CVarLumenShortRangeAOBentNormal.Ref;
  bVar8 = GLumenShortRangeAOScreenSpaceHorizonSearchHZB != 0;
  bVar9 = GLumenShortRangeAOScreenSpaceHorizonSearchVisibilityBitmask != 0;
  bVar10 = GLumenShortRangeGlobalIllumination != 0;
  if ((GLumenShortRangeAOScreenSpaceHorizonSearch == 1) || (bVar10)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar6 = 0;
  }
  else {
    lVar6 = 4;
  }
  iVar1 = *(int *)((longlong)pTVar2->ShadowedValue + lVar6);
  uVar5 = LumenShortRangeAO::GetDownsampleFactor();
  EVar4 = GLumenShortRangeAOHairStrandsScreenTrace < 1;
  if (((((TStack_38.DimensionValue == bVar7) && (TStack_38.Tail.Tail.Tail.DimensionValue == bVar10))
       && (TStack_38.Tail.Tail.DimensionValue == bVar8)) &&
      ((TStack_38.Tail.DimensionValue == bVar9 &&
       (TStack_38.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == (iVar1 != 0))))) &&
     (TStack_38.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == uVar5)) {
    if ((TStack_38.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) ||
       (0 < GLumenShortRangeAOHairStrandsVoxelTrace)) {
      if (TStack_38.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) {
        EVar4 = Precached;
      }
    }
    else {
      EVar4 = NotUsed;
    }
  }
  else {
    EVar4 = NotPrecached;
  }
  return EVar4;
}

// StaticGetTypeLayout @ 144e347d0

FTypeLayoutDesc * __cdecl FScreenSpaceShortRangeAOCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FScreenSpaceSho;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FScreenSpaceShortRangeAOCS,0>::Do;
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

