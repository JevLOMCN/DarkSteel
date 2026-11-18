// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// ConstructCompiledInstance @ 144efe180

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
FShadeLightSamplesCS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

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

// ConstructSerializedInstance @ 144efeba0

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

FShader * __cdecl FShadeLightSamplesCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 144f15ec0

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

FGlobalShaderType * __cdecl FShadeLightSamplesCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar5,L"FShadeLightSamplesCS",
                 L"/Engine/Private/MegaLights/MegaLightsShading.usf",L"ShadeLightSamplesCS",5,0x9c0,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/MegaLights/MegaLightsShading.usf");
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
      atexit(`FShadeLightSamplesCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144f19ea0

FTypeLayoutDesc * __thiscall FShadeLightSamplesCS::GetTypeLayout(FShadeLightSamplesCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FShadeLightSamp;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShadeLightSamplesCS,0>::Do;
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

// InternalDestroy @ 144f1c640

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
FShadeLightSamplesCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 144f2b3f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETileType": Some values do not have unique names */

bool __cdecl
FShadeLightSamplesCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> local_48 [2];
  TShaderPermutationDomain<FShadeLightSamplesCS::FTileType,FShadeLightSamplesCS::FDownsampleFactorX,FShadeLightSamplesCS::FDownsampleFactorY,FShadeLightSamplesCS::FNumSamplesPerPixel1d,FShadeLightSamplesCS::FInputType,FShadeLightSamplesCS::FDebugMode,FShadeLightSamplesCS::FReferenceMode,FShadeLightSamplesCS::FHairComplexTransmittance>
  local_28;
  
  TShaderPermutationDomain<FShadeLightSamplesCS::FTileType,FShadeLightSamplesCS::FDownsampleFactorX,FShadeLightSamplesCS::FDownsampleFactorY,FShadeLightSamplesCS::FNumSamplesPerPixel1d,FShadeLightSamplesCS::FInputType,FShadeLightSamplesCS::FDebugMode,FShadeLightSamplesCS::FReferenceMode,FShadeLightSamplesCS::FHairComplexTransmittance>
  ::
  TShaderPermutationDomain<FShadeLightSamplesCS::FTileType,FShadeLightSamplesCS::FDownsampleFactorX,FShadeLightSamplesCS::FDownsampleFactorY,FShadeLightSamplesCS::FNumSamplesPerPixel1d,FShadeLightSamplesCS::FInputType,FShadeLightSamplesCS::FDebugMode,FShadeLightSamplesCS::FReferenceMode,FShadeLightSamplesCS::FHairComplexTransmittance>
            (&local_28,param_1->PermutationId);
  local_48[0].AllocatorInstance.Data._0_4_ = local_28.DimensionValue;
  local_48[0].ArrayNum = local_28.Tail.Tail.DimensionValue;
  local_48[0].ArrayMax = local_28.Tail.Tail.Tail.DimensionValue;
  local_48[0].AllocatorInstance.Data._4_4_ = local_28.Tail.DimensionValue;
  if (local_28.Tail.Tail.DimensionValue == 2) {
    local_48[0].AllocatorInstance.Data._4_4_ = 2;
  }
  if (local_28.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
    local_48[0].AllocatorInstance.Data._4_4_ = 1;
    local_48[0].ArrayNum = 1;
  }
  if (local_48[0].AllocatorInstance.Data._4_4_ != local_28.Tail.DimensionValue) {
    return false;
  }
  if (local_48[0].ArrayNum != local_28.Tail.Tail.DimensionValue) {
    return false;
  }
  pTVar3 = MegaLights::GetShadingTileTypes
                     (local_48,(EMegaLightsInput)local_28.Tail.Tail.Tail.Tail.DimensionValue);
  pFVar1 = (pTVar3->AllocatorInstance).Data;
  for (pFVar5 = pFVar1; pFVar5 != pFVar1 + (longlong)pTVar3->ArrayNum * 4; pFVar5 = pFVar5 + 4) {
    if (*(int *)pFVar5 == local_28.DimensionValue) {
      iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 2);
      goto LAB_144f2b512;
    }
  }
  iVar4 = -1;
LAB_144f2b512:
  if ((void *)CONCAT44(local_48[0].AllocatorInstance.Data._4_4_,
                       (int)local_48[0].AllocatorInstance.Data) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_48[0].AllocatorInstance.Data._4_4_,
                                   (int)local_48[0].AllocatorInstance.Data));
  }
  if (iVar4 == -1) {
    return false;
  }
  if ((EMegaLightsInput)local_28.Tail.Tail.Tail.Tail.DimensionValue == HairStrands) {
    if (local_28.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) {
      return false;
    }
  }
  else if (local_28.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) goto LAB_144f2b576;
  bVar2 = IsHairStrandsSupported(All,param_1->Platform);
  if (!bVar2) {
    return false;
  }
  bVar2 = MegaLights::IsComplexTileType((ETileType)local_28.DimensionValue);
  if (!bVar2) {
    return false;
  }
LAB_144f2b576:
  if ((local_28.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) &&
     (bVar2 = MegaLights::ShouldCompileShadersForReferenceMode(param_1->Platform), !bVar2)) {
    return false;
  }
  bVar2 = MegaLights::ShouldCompileShaders(param_1->Platform);
  return bVar2;
}

// ShouldPrecachePermutationImpl @ 144f2c3b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FShadeLightSamplesCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  int local_res8;
  int local_resc;
  TShaderPermutationDomain<FShadeLightSamplesCS::FTileType,FShadeLightSamplesCS::FDownsampleFactorX,FShadeLightSamplesCS::FDownsampleFactorY,FShadeLightSamplesCS::FNumSamplesPerPixel1d,FShadeLightSamplesCS::FInputType,FShadeLightSamplesCS::FDebugMode,FShadeLightSamplesCS::FReferenceMode,FShadeLightSamplesCS::FHairComplexTransmittance>
  local_28;
  
  TShaderPermutationDomain<FShadeLightSamplesCS::FTileType,FShadeLightSamplesCS::FDownsampleFactorX,FShadeLightSamplesCS::FDownsampleFactorY,FShadeLightSamplesCS::FNumSamplesPerPixel1d,FShadeLightSamplesCS::FInputType,FShadeLightSamplesCS::FDebugMode,FShadeLightSamplesCS::FReferenceMode,FShadeLightSamplesCS::FHairComplexTransmittance>
  ::
  TShaderPermutationDomain<FShadeLightSamplesCS::FTileType,FShadeLightSamplesCS::FDownsampleFactorX,FShadeLightSamplesCS::FDownsampleFactorY,FShadeLightSamplesCS::FNumSamplesPerPixel1d,FShadeLightSamplesCS::FInputType,FShadeLightSamplesCS::FDebugMode,FShadeLightSamplesCS::FReferenceMode,FShadeLightSamplesCS::FHairComplexTransmittance>
            (&local_28,param_1->PermutationId);
  MegaLights::GetNumSamplesPerPixel2d((EMegaLightsInput)&local_res8);
  if (local_28.Tail.Tail.Tail.DimensionValue != local_resc * local_res8) {
    return NotUsed;
  }
  if (local_28.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
    return NotPrecached;
  }
  return local_28.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false;
}

// StaticGetTypeLayout @ 144f2dbc0

FTypeLayoutDesc * __cdecl FShadeLightSamplesCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FShadeLightSamp;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShadeLightSamplesCS,0>::Do;
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

