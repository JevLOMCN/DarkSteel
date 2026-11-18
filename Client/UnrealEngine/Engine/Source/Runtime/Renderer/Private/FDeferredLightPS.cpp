// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 11

// ConstructCompiledInstance @ 144bb41b0

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
FDeferredLightPS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

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

// ConstructSerializedInstance @ 144bb4e50

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

FShader * __cdecl FDeferredLightPS::ConstructSerializedInstance(void)

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

// GetStaticType @ 144bcb640

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

FGlobalShaderType * __cdecl FDeferredLightPS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar5,L"FDeferredLightPS",
                 L"/Engine/Private/DeferredLightPixelShaders.usf",L"DeferredLightPixelMain",3,0xc000
                 ,ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl
                 ,ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/DeferredLightPixelShaders.usf");
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
      atexit(`FDeferredLightPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144bcf910

FTypeLayoutDesc * __thiscall FDeferredLightPS::GetTypeLayout(FDeferredLightPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FDeferredLightP;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FDeferredLightPS,0>::Do;
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

// InternalDestroy @ 144bd09d0

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
FDeferredLightPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// RemapPermutation @ 144bd7270

/* WARNING: Type propagation algorithm not settling */

TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
* __cdecl FDeferredLightPS::RemapPermutation
                    (TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
                     *__return_storage_ptr__,
                    TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
                    *param_1)

{
  TShaderPermutationDomain<FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
  *pTVar1;
  TShaderPermutationDomain<Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
  TVar2;
  TShaderPermutationDomain<FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
  *pTVar3;
  TShaderPermutationDomain<FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
  *pTVar4;
  TShaderPermutationDomain<FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
  *pTVar5;
  undefined3 uVar6;
  bool bVar7;
  undefined3 uVar8;
  bool bVar9;
  undefined3 uVar10;
  bool bVar11;
  undefined3 uVar12;
  bool bVar13;
  undefined3 uVar14;
  bool bVar15;
  undefined3 uVar16;
  int iVar17;
  bool bVar18;
  undefined3 uVar19;
  bool bVar20;
  
  if ((param_1->Tail).Tail.Tail.Tail.DimensionValue != false) {
    (param_1->Tail).DimensionValue = false;
    (param_1->Tail).Tail.DimensionValue = false;
    (param_1->Tail).Tail.Tail.DimensionValue = false;
    (param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
    (param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = 0;
    ((TShaderPermutationDomain<FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
      *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 8))->DimensionValue = false;
    ((TShaderPermutationDomain<FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
      *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 0xc))->DimensionValue = false;
    ((TShaderPermutationDomain<FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
      *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 0x10))->DimensionValue = false;
    ((TShaderPermutationDomain<FDeferredLightPS::FVirtualShadowMapMask> *)
    ((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 0x18))->DimensionValue = false;
    ((TShaderPermutationDomain<FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
      *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 4))->DimensionValue = false;
  }
  bVar20 = Substrate::IsSubstrateEnabled();
  if ((bVar20) &&
     ((uint)((TShaderPermutationDomain<Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
              *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 0x14))->DimensionValue <
      2)) {
    ((TShaderPermutationDomain<FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
      *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 0x10))->DimensionValue = false;
  }
  bVar20 = (param_1->Tail).DimensionValue;
  uVar6 = *(undefined3 *)&(param_1->Tail).field_0x1;
  bVar7 = (param_1->Tail).Tail.DimensionValue;
  uVar8 = *(undefined3 *)&(param_1->Tail).Tail.field_0x1;
  bVar9 = (param_1->Tail).Tail.Tail.DimensionValue;
  uVar10 = *(undefined3 *)&(param_1->Tail).Tail.Tail.field_0x1;
  pTVar4 = &param_1->Tail;
  bVar11 = (pTVar4->Tail).Tail.Tail.DimensionValue;
  uVar12 = *(undefined3 *)&(pTVar4->Tail).Tail.Tail.field_0x1;
  bVar13 = (pTVar4->Tail).Tail.Tail.Tail.DimensionValue;
  uVar14 = *(undefined3 *)&(pTVar4->Tail).Tail.Tail.Tail.field_0x1;
  pTVar5 = &(param_1->Tail).Tail.Tail;
  bVar15 = (pTVar5->Tail).Tail.Tail.DimensionValue;
  uVar16 = *(undefined3 *)&(pTVar5->Tail).Tail.Tail.field_0x1;
  iVar17 = (pTVar5->Tail).Tail.Tail.Tail.DimensionValue;
  __return_storage_ptr__->DimensionValue = param_1->DimensionValue;
  (__return_storage_ptr__->Tail).DimensionValue = bVar20;
  *(undefined3 *)&(__return_storage_ptr__->Tail).field_0x1 = uVar6;
  (__return_storage_ptr__->Tail).Tail.DimensionValue = bVar7;
  *(undefined3 *)&(__return_storage_ptr__->Tail).Tail.field_0x1 = uVar8;
  (__return_storage_ptr__->Tail).Tail.Tail.DimensionValue = bVar9;
  *(undefined3 *)&(__return_storage_ptr__->Tail).Tail.Tail.field_0x1 = uVar10;
  pTVar1 = (TShaderPermutationDomain<FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
            *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 4);
  bVar20 = pTVar1->DimensionValue;
  uVar6 = *(undefined3 *)&pTVar1->field_0x1;
  bVar7 = (pTVar1->Tail).DimensionValue;
  uVar8 = *(undefined3 *)&(pTVar1->Tail).field_0x1;
  pTVar3 = (TShaderPermutationDomain<FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
            *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 0xc);
  bVar9 = pTVar3->DimensionValue;
  uVar10 = *(undefined3 *)&pTVar3->field_0x1;
  bVar18 = (pTVar3->Tail).DimensionValue;
  uVar19 = *(undefined3 *)&(pTVar3->Tail).field_0x1;
  pTVar4 = &__return_storage_ptr__->Tail;
  (pTVar4->Tail).Tail.Tail.DimensionValue = bVar11;
  *(undefined3 *)&(pTVar4->Tail).Tail.Tail.field_0x1 = uVar12;
  (pTVar4->Tail).Tail.Tail.Tail.DimensionValue = bVar13;
  *(undefined3 *)&(pTVar4->Tail).Tail.Tail.Tail.field_0x1 = uVar14;
  pTVar5 = &(__return_storage_ptr__->Tail).Tail.Tail;
  (pTVar5->Tail).Tail.Tail.DimensionValue = bVar15;
  *(undefined3 *)&(pTVar5->Tail).Tail.Tail.field_0x1 = uVar16;
  (pTVar5->Tail).Tail.Tail.Tail.DimensionValue = iVar17;
  TVar2 = *(TShaderPermutationDomain<Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
            *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 0x14);
  pTVar1 = (TShaderPermutationDomain<FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
            *)((longlong)&(__return_storage_ptr__->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 4);
  pTVar1->DimensionValue = bVar20;
  *(undefined3 *)&pTVar1->field_0x1 = uVar6;
  (pTVar1->Tail).DimensionValue = bVar7;
  *(undefined3 *)&(pTVar1->Tail).field_0x1 = uVar8;
  pTVar3 = (TShaderPermutationDomain<FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
            *)((longlong)&(__return_storage_ptr__->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 0xc);
  pTVar3->DimensionValue = bVar9;
  *(undefined3 *)&pTVar3->field_0x1 = uVar10;
  (pTVar3->Tail).DimensionValue = bVar18;
  *(undefined3 *)&(pTVar3->Tail).field_0x1 = uVar19;
  *(TShaderPermutationDomain<Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
    *)((longlong)&(__return_storage_ptr__->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 0x14) = TVar2;
  return __return_storage_ptr__;
}

// ShouldCompilePermutation @ 144be3590

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FDeferredLightPS::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
  local_58;
  
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
  ::
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
            (&local_58,*(int *)&param_1->field_0x4);
  if (local_58.Tail.Tail.Tail.Tail.DimensionValue != false) {
    if (local_58.Tail.DimensionValue != false) {
      return false;
    }
    if (local_58.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (local_58.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (local_58.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != 0) {
      return false;
    }
    if (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue !=
        false) {
      return false;
    }
  }
  if (local_58.DimensionValue == Directional) {
    if (local_58.Tail.Tail.DimensionValue != false) {
      return false;
    }
LAB_144be364e:
    if (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue !=
        false) {
      return false;
    }
  }
  else {
    if (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (local_58.DimensionValue == Directional) goto LAB_144be364e;
  }
  if ((local_58.DimensionValue != Rect) && (local_58.Tail.DimensionValue != false)) {
    return false;
  }
  if ((local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != 0) &&
     (local_58.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false)) {
    return false;
  }
  if (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != 1) {
    if ((local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != 0) ||
       (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false))
    goto LAB_144be3685;
    local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue =
         SupportsHairComplexTransmittance(*(EShaderPlatform *)param_1);
  }
  if (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) {
    return false;
  }
LAB_144be3685:
  bVar3 = Substrate::IsSubstrateEnabled();
  if (((bVar3) && (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == 1)) &&
     (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != 0)) {
    return false;
  }
  if (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
    if (local_58.DimensionValue == Rect) {
      return false;
    }
    if (local_58.Tail.DimensionValue != false) {
      return false;
    }
    if (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == 1) {
      return false;
    }
    uVar1 = *(ushort *)param_1;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x1b4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bSupportsAnisotropicMaterials == 0) {
      return false;
    }
  }
  bVar3 = DoesPlatformSupportVirtualShadowMaps(*(EShaderPlatform *)param_1);
  if ((((bVar3) ||
       (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue ==
        false)) &&
      ((bVar3 = Substrate::ShouldCompileSubstrateTileTypePermutations
                          (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.
                           DimensionValue,*(EShaderPlatform *)param_1), bVar3 &&
       (((bVar3 = Substrate::IsSubstrateEnabled(), !bVar3 ||
         (1 < (uint)local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.
                    DimensionValue)) ||
        (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != true)))))
      ) && (((bVar3 = Substrate::IsSubstrateEnabled(), !bVar3 ||
             (bVar3 = Substrate::IsSubstrateBlendableGBufferEnabled(*(EShaderPlatform *)param_1),
             !bVar3)) ||
            (local_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue !=
             3)))) {
    bVar3 = IsFeatureLevelSupported((FStaticShaderPlatform)*(EShaderPlatform *)param_1,SM5);
    return bVar3;
  }
  return false;
}

// ShouldCompilePermutationImpl @ 144be47e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FDeferredLightPS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
  TStack_58;
  
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
  ::
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
            (&TStack_58,param_1->PermutationId);
  if (TStack_58.Tail.Tail.Tail.Tail.DimensionValue != false) {
    if (TStack_58.Tail.DimensionValue != false) {
      return false;
    }
    if (TStack_58.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (TStack_58.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != 0) {
      return false;
    }
    if (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue !=
        false) {
      return false;
    }
  }
  if (TStack_58.DimensionValue == Directional) {
    if (TStack_58.Tail.Tail.DimensionValue != false) {
      return false;
    }
LAB_144be364e:
    if (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue !=
        false) {
      return false;
    }
  }
  else {
    if (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
      return false;
    }
    if (TStack_58.DimensionValue == Directional) goto LAB_144be364e;
  }
  if ((TStack_58.DimensionValue != Rect) && (TStack_58.Tail.DimensionValue != false)) {
    return false;
  }
  if ((TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != 0) &&
     (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false)) {
    return false;
  }
  if (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != 1) {
    if ((TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != 0) ||
       (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false))
    goto LAB_144be3685;
    TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue =
         SupportsHairComplexTransmittance(param_1->Platform);
  }
  if (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) {
    return false;
  }
LAB_144be3685:
  bVar3 = Substrate::IsSubstrateEnabled();
  if (((bVar3) && (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == 1)) &&
     (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != 0)) {
    return false;
  }
  if (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
    if (TStack_58.DimensionValue == Rect) {
      return false;
    }
    if (TStack_58.Tail.DimensionValue != false) {
      return false;
    }
    if (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == 1) {
      return false;
    }
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x1b4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsAnisotropicMaterials == 0) {
      return false;
    }
  }
  bVar3 = DoesPlatformSupportVirtualShadowMaps(param_1->Platform);
  if ((((bVar3) ||
       (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue ==
        false)) &&
      ((bVar3 = Substrate::ShouldCompileSubstrateTileTypePermutations
                          (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.
                           DimensionValue,param_1->Platform), bVar3 &&
       (((bVar3 = Substrate::IsSubstrateEnabled(), !bVar3 ||
         (1 < (uint)TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.
                    DimensionValue)) ||
        (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != true))))
      )) && (((bVar3 = Substrate::IsSubstrateEnabled(), !bVar3 ||
              (bVar3 = Substrate::IsSubstrateBlendableGBufferEnabled(param_1->Platform), !bVar3)) ||
             (TStack_58.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue
              != 3)))) {
    bVar3 = IsFeatureLevelSupported((FStaticShaderPlatform)param_1->Platform,SM5);
    return bVar3;
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 144be4d40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FDeferredLightPS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
  local_48;
  
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
  ::
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FLightFunctionAtlasDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting,FDeferredLightPS::FHairComplexTransmittance,FDeferredLightPS::FAtmosphereTransmittance,FDeferredLightPS::FCloudTransmittance,FDeferredLightPS::FAnistropicMaterials,Substrate::FSubstrateTileType,FDeferredLightPS::FVirtualShadowMapMask>
            (&local_48,param_1->PermutationId);
  return local_48.Tail.Tail.Tail.Tail.DimensionValue != false;
}

// StaticGetTypeLayout @ 144be6e30

FTypeLayoutDesc * __cdecl FDeferredLightPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FDeferredLightP;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FDeferredLightPS,0>::Do;
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

// SupportsHairComplexTransmittance @ 144be9540

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FDeferredLightPS::SupportsHairComplexTransmittance(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = IsHairStrandsSupported(All,param_1);
  if (bVar2) {
    if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xd3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].Language != LANGUAGE_Nintendo) {
      return true;
    }
  }
  return false;
}

