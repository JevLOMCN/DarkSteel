// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 12

// FSharedBasePassUniformParameters @ 14472e830

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSharedBasePassUniformParameters * __thiscall
FSharedBasePassUniformParameters::FSharedBasePassUniformParameters
          (FSharedBasePassUniformParameters *this)

{
  FForwardLightUniformParameters::FForwardLightUniformParameters(&this->Forward);
  (this->Reflection).SkyLightParameters.field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&(this->Reflection).SkyLightParameters.field0_0x0 = 0;
  (this->Reflection).SkyLightParameters.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->PlanarReflection).ReflectionPlane.field0_0x0 = 0;
  (this->PlanarReflection).ReflectionPlane.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->PlanarReflection).PlanarReflectionOrigin.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PlanarReflection).PlanarReflectionXAxis.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PlanarReflection).PlanarReflectionYAxis.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PlanarReflection).ReflectionPlane.field0_0x0 + 0xc) = 0x3f800000
  ;
  *(undefined8 *)((longlong)&(this->PlanarReflection).PlanarReflectionOrigin.field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->PlanarReflection).PlanarReflectionXAxis.field0_0x0 + 0xc) =
       0x3f800000;
  (this->PlanarReflection).PlanarReflectionYAxis.field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&(this->PlanarReflection).PlanarReflectionScreenScaleBias.Elements[0].field0_0x0 =
       0;
  (this->PlanarReflection).PlanarReflectionScreenScaleBias.Elements[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)
   ((longlong)&(this->PlanarReflection).PlanarReflectionScreenScaleBias.Elements[0].field0_0x0 + 0xc
   ) = 0x3f800000;
  *(undefined8 *)
   ((longlong)&(this->PlanarReflection).PlanarReflectionScreenScaleBias.Elements[1].field0_0x0 + 4)
       = 0;
  (this->PlanarReflection).PlanarReflectionScreenScaleBias.Elements[1].field0_0x0._s_0.W = 1.0;
  (this->Reflection).SkyLightCubemap = (FRDGTexture *)0x0;
  (this->Reflection).SkyLightCubemapSampler = (FRHISamplerState *)0x0;
  (this->Reflection).SkyLightBlendDestinationCubemap = (FRHITexture *)0x0;
  (this->Reflection).SkyLightBlendDestinationCubemapSampler = (FRHISamplerState *)0x0;
  (this->Reflection).ReflectionCubemap = (FRHITexture *)0x0;
  (this->Reflection).ReflectionCubemapSampler = (FRHISamplerState *)0x0;
  (this->Reflection).PreIntegratedGF = (FRHITexture *)0x0;
  (this->Reflection).PreIntegratedGFSampler = (FRHISamplerState *)0x0;
  (this->PlanarReflection).PlanarReflectionTexture = (FRHITexture *)0x0;
  (this->PlanarReflection).PlanarReflectionSampler = (FRHISamplerState *)0x0;
  *(undefined8 *)&(this->Fog).ExponentialFogParameters.field0_0x0 = 0;
  (this->Fog).ExponentialFogParameters.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->Fog).ExponentialFogParameters2.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->Fog).ExponentialFogColorParameter.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->Fog).ExponentialFogParameters3.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->Fog).SkyAtmosphereAmbientContributionColorScale.field0_0x0 + 4)
       = 0;
  *(undefined8 *)((longlong)&(this->Fog).InscatteringLightDirection.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->Fog).DirectionalInscatteringColor.field0_0x0 + 4) = 0;
  *(undefined8 *)&(this->FogISR).ExponentialFogParameters.field0_0x0 = 0;
  (this->FogISR).ExponentialFogParameters.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->FogISR).ExponentialFogParameters2.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->FogISR).ExponentialFogColorParameter.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->FogISR).ExponentialFogParameters3.field0_0x0 + 4) = 0;
  *(undefined8 *)
   ((longlong)&(this->FogISR).SkyAtmosphereAmbientContributionColorScale.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->FogISR).InscatteringLightDirection.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->FogISR).DirectionalInscatteringColor.field0_0x0 + 4) = 0;
  *(undefined8 *)&(this->LFV).LocalFogVolumeCommon.HalfResTextureSizeAndInvSize.field0_0x0 = 0;
  (this->LFV).LocalFogVolumeCommon.HalfResTextureSizeAndInvSize.field0_0x0._s_0.Z = 0.0;
  (this->Fog).FogInscatteringColorCubemap = (FRHITexture *)0x0;
  (this->Fog).FogInscatteringColorSampler = (FRHISamplerState *)0x0;
  (this->Fog).IntegratedLightScattering = (FRDGTexture *)0x0;
  (this->Fog).IntegratedLightScatteringSampler = (FRHISamplerState *)0x0;
  (this->FogISR).FogInscatteringColorCubemap = (FRHITexture *)0x0;
  (this->FogISR).FogInscatteringColorSampler = (FRHISamplerState *)0x0;
  (this->FogISR).IntegratedLightScattering = (FRDGTexture *)0x0;
  (this->FogISR).IntegratedLightScatteringSampler = (FRHISamplerState *)0x0;
  (this->LFV).LocalFogVolumeCommon.LocalFogVolumeInstances = (FRDGBufferSRV *)0x0;
  (this->LFV).LocalFogVolumeTileDataTexture = (FRDGTextureSRV *)0x0;
  (this->LightFunctionAtlas).LightFunctionAtlasTexture = (FRDGTexture *)0x0;
  (this->LightFunctionAtlas).LightInfoDataBuffer = (FRDGBufferSRV *)0x0;
  (this->LightFunctionAtlas).LightFunctionAtlasSampler = (FRHISamplerState *)0x0;
  *(undefined8 *)((longlong)&(this->Fog).ExponentialFogParameters.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->Fog).ExponentialFogParameters2.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->Fog).ExponentialFogColorParameter.field0_0x0 + 0xc) = 0x3f800000
  ;
  *(undefined8 *)((longlong)&(this->Fog).ExponentialFogParameters3.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)
   ((longlong)&(this->Fog).SkyAtmosphereAmbientContributionColorScale.field0_0x0 + 0xc) = 0x3f800000
  ;
  *(undefined8 *)((longlong)&(this->Fog).InscatteringLightDirection.field0_0x0 + 0xc) = 0x3f800000;
  (this->Fog).DirectionalInscatteringColor.field0_0x0._s_0.W = 1.0;
  *(undefined8 *)((longlong)&(this->FogISR).ExponentialFogParameters.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->FogISR).ExponentialFogParameters2.field0_0x0 + 0xc) = 0x3f800000
  ;
  *(undefined8 *)((longlong)&(this->FogISR).ExponentialFogColorParameter.field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->FogISR).ExponentialFogParameters3.field0_0x0 + 0xc) = 0x3f800000
  ;
  *(undefined8 *)
   ((longlong)&(this->FogISR).SkyAtmosphereAmbientContributionColorScale.field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->FogISR).InscatteringLightDirection.field0_0x0 + 0xc) =
       0x3f800000;
  (this->FogISR).DirectionalInscatteringColor.field0_0x0._s_0.W = 1.0;
  (this->LFV).LocalFogVolumeCommon.HalfResTextureSizeAndInvSize.field0_0x0._s_0.W = 1.0;
  return this;
}

// GetStructMetadata @ 1447741b0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl FSharedBasePassUniformParameters::GetStructMetadata(void)

{
  bool bVar1;
  code *pcVar2;
  undefined1 local_res8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FSharedBasePassUniformParameters::GetStructMetadata'::__l2::<lambda_1>::operator()(local_res8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pcVar2 = zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar2 = (code *)(*pcVar2)(local_res8[0],&local_18);
      } while (pcVar2 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&::StaticStructMetadata,UniformBuffer,Shader,L"FSharedBasePassUniformParameters",
                 L"FSharedBasePassUniformParameters",L"BasePass",(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\BasePassRendering.h"
                 ,0x4e,0x6b0,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FSharedBasePassUniformParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticStructMetadata;
    }
  }
  return &::StaticStructMetadata;
}

// zzAppendMemberGetPrev @ 1447d5790

void * __cdecl
FSharedBasePassUniformParameters::zzAppendMemberGetPrev
          (zzFirstMemberId param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  return (void *)0x0;
}

// zzAppendMemberGetPrev @ 1447d57a0

void * __cdecl
FSharedBasePassUniformParameters::zzAppendMemberGetPrev
          (zzNextMemberIdFog param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  FShaderParametersMetadata *pFStack_10;
  
  pFStack_10 = FFogUniformParameters::GetStructMetadata();
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"Fog";
  pwStack_30 = L"FFogUniformParameters";
  local_28 = 0x52;
  uStack_24 = 0x470;
  uStack_20 = 0x14;
  uStack_1c = 1;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(FShaderParametersMetadata **)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = pFStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 1447d58d0

void * __cdecl
FSharedBasePassUniformParameters::zzAppendMemberGetPrev
          (zzNextMemberIdFogISR param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  FShaderParametersMetadata *pFStack_10;
  
  pFStack_10 = FFogUniformParameters::GetStructMetadata();
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"FogISR";
  pwStack_30 = L"FFogUniformParameters";
  local_28 = 0x53;
  uStack_24 = 0x540;
  uStack_20 = 0x14;
  uStack_1c = 1;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(FShaderParametersMetadata **)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = pFStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 1447d5a00

void * __cdecl
FSharedBasePassUniformParameters::zzAppendMemberGetPrev
          (zzNextMemberIdForward param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined8 local_28;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  FShaderParametersMetadata *pFStack_10;
  
  pFStack_10 = FForwardLightUniformParameters::GetStructMetadata();
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"Forward";
  pwStack_30 = L"FForwardLightUniformParameters";
  local_28 = 0x4f;
  uStack_20 = 0x14;
  uStack_1c = 1;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x10) = local_28;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(FShaderParametersMetadata **)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = pFStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 1447d5b20

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void * __cdecl
FSharedBasePassUniformParameters::zzAppendMemberGetPrev
          (zzNextMemberIdLFV param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 local_res10;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_58;
  wchar_t *local_48;
  wchar_t *pwStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined8 local_28;
  FShaderParametersMetadata *pFStack_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLocalFogVolumeUniformParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLocalFogVolumeUniformParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLocalFogVolumeUniformParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar6 = FLocalFogVolumeUniformParameters::zzAppendMemberGetPrev;
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      do {
        pcVar6 = (code *)(*pcVar6)(local_res10,&local_58);
      } while (pcVar6 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLocalFogVolumeUniformParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FLocalFogVolumeUniformParameters",L"FLocalFogVolumeUniformParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LocalFogVolumeRendering.h"
                 ,0x23,0x70,&local_58,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_58.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      atexit(`FLocalFogVolumeUniformParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLocalFogVolumeUniformParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_48 = L"LFV";
  pwStack_40 = L"FLocalFogVolumeUniformParameters";
  pFStack_20 = &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLocalFogVolumeUniformParameters::FTypeInfo::GetStructMetadata(void)'
                ::__l2::StaticStructMetadata;
  local_38 = 0x54;
  uStack_34 = 0x610;
  uStack_30 = 0x14;
  uStack_2c = 1;
  local_28 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar6 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar6)();
      return pvVar4;
    }
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar5 = (longlong)iVar3;
  param_2->ArrayNum = iVar3 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar5 * 0x30) = local_48;
  *(wchar_t **)(pFVar1 + lVar5 * 0x30 + 8) = pwStack_40;
  *(ulonglong *)(pFVar1 + lVar5 * 0x30 + 0x10) = CONCAT44(uStack_34,local_38);
  *(ulonglong *)(pFVar1 + lVar5 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_2c,CONCAT22(uStack_2e,uStack_30));
  *(undefined8 *)(pFVar1 + lVar5 * 0x30 + 0x20) = local_28;
  *(FShaderParametersMetadata **)(pFVar1 + lVar5 * 0x30 + 0x20 + 8) = pFStack_20;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 1447d5d80

void * __cdecl
FSharedBasePassUniformParameters::zzAppendMemberGetPrev
          (zzNextMemberIdLightFunctionAtlas param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  FShaderParametersMetadata *pFStack_10;
  
  pFStack_10 = LightFunctionAtlas::FLightFunctionAtlasGlobalParameters::GetStructMetadata();
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"LightFunctionAtlas";
  pwStack_30 = L"LightFunctionAtlas::FLightFunctionAtlasGlobalParameters";
  local_28 = 0x55;
  uStack_24 = 0x680;
  uStack_20 = 0x14;
  uStack_1c = 1;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(FShaderParametersMetadata **)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = pFStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 1447d5eb0

void * __cdecl
FSharedBasePassUniformParameters::zzAppendMemberGetPrev
          (zzNextMemberIdPlanarReflection param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  FShaderParametersMetadata *pFStack_10;
  
  pFStack_10 = FPlanarReflectionUniformParameters::GetStructMetadata();
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"PlanarReflection";
  pwStack_30 = L"FPlanarReflectionUniformParameters";
  local_28 = 0x51;
  uStack_24 = 800;
  uStack_20 = 0x14;
  uStack_1c = 1;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(FShaderParametersMetadata **)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = pFStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 1447d5fe0

void * __cdecl
FSharedBasePassUniformParameters::zzAppendMemberGetPrev
          (zzNextMemberIdReflection param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  FShaderParametersMetadata *pFStack_10;
  
  pFStack_10 = FReflectionUniformParameters::GetStructMetadata();
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"Reflection";
  pwStack_30 = L"FReflectionUniformParameters";
  local_28 = 0x50;
  uStack_24 = 0x2d0;
  uStack_20 = 0x14;
  uStack_1c = 1;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(FShaderParametersMetadata **)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = pFStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 1447d6110

void * __cdecl
FSharedBasePassUniformParameters::zzAppendMemberGetPrev
          (zzNextMemberIdUseBasePassSkylight param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"UseBasePassSkylight";
  pwStack_30 = L"";
  local_28 = 0x56;
  uStack_24 = 0x6a0;
  uStack_20 = 3;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

// operator() @ 1504c2be0

bool __thiscall
`FSharedBasePassUniformParameters::GetStructMetadata'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7728591287472881534>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7728591287472881534>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

