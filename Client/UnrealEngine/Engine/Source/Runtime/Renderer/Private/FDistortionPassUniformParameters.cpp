// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// FDistortionPassUniformParameters @ 14485c670

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDistortionPassUniformParameters * __thiscall
FDistortionPassUniformParameters::FDistortionPassUniformParameters
          (FDistortionPassUniformParameters *this)

{
  (this->DistortionParams).field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&(this->DistortionParams).field0_0x0 = 0;
  (this->DistortionParams).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->AVSM).TranslatedWorldOrigin.Elements[0].field0_0x0 = 0;
  (this->AVSM).TranslatedWorldOrigin.Elements[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldOrigin.Elements[0].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldOrigin.Elements[1].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldOrigin.Elements[1].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldOrigin.Elements[2].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldOrigin.Elements[2].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldOrigin.Elements[3].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldOrigin.Elements[3].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldOrigin.Elements[4].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldOrigin.Elements[4].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldOrigin.Elements[5].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldOrigin.Elements[5].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldPlane.Elements[0].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldPlane.Elements[0].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldPlane.Elements[1].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldPlane.Elements[1].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldPlane.Elements[2].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldPlane.Elements[2].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldPlane.Elements[3].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldPlane.Elements[3].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldPlane.Elements[4].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldPlane.Elements[4].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldPlane.Elements[5].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->AVSM).TranslatedWorldPlane.Elements[5].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).SplitDepths.Elements[0].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->AVSM).SplitDepths.Elements[0].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).SplitDepths.Elements[1].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->AVSM).SplitDepths.Elements[1].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).SplitDepths.Elements[2].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->AVSM).SplitDepths.Elements[2].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).SplitDepths.Elements[3].field0_0x0 + 4) = 0;
  (this->SceneTextures).SceneColorTexture = (FRDGTexture *)0x0;
  (this->SceneTextures).SceneDepthTexture = (FRDGTexture *)0x0;
  (this->SceneTextures).ScenePartialDepthTexture = (FRDGTexture *)0x0;
  (this->SceneTextures).GBufferATexture = (FRDGTexture *)0x0;
  (this->SceneTextures).GBufferBTexture = (FRDGTexture *)0x0;
  (this->SceneTextures).GBufferCTexture = (FRDGTexture *)0x0;
  (this->SceneTextures).GBufferDTexture = (FRDGTexture *)0x0;
  (this->SceneTextures).GBufferETexture = (FRDGTexture *)0x0;
  (this->SceneTextures).GBufferFTexture = (FRDGTexture *)0x0;
  (this->SceneTextures).GBufferVelocityTexture = (FRDGTexture *)0x0;
  (this->SceneTextures).GBufferSGGXTexture = (FRDGTexture *)0x0;
  (this->SceneTextures).ScreenSpaceAOTexture = (FRDGTexture *)0x0;
  (this->SceneTextures).CustomDepthTexture = (FRDGTexture *)0x0;
  (this->SceneTextures).CustomStencilTexture = (FRDGTextureSRV *)0x0;
  (this->SceneTextures).PointClampSampler = (FRHISamplerState *)0x0;
  (this->Substrate).MaterialTextureArray = (FRDGTexture *)0x0;
  (this->Substrate).TopLayerTexture = (FRDGTexture *)0x0;
  *(undefined8 *)((longlong)&(this->AVSM).SplitDepths.Elements[3].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).SplitDepths.Elements[4].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->AVSM).SplitDepths.Elements[4].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->AVSM).SplitDepths.Elements[5].field0_0x0 + 4) = 0;
  (this->AVSM).LinkedListBuffer = (FRDGBufferSRV *)0x0;
  (this->AVSM).IndirectionBuffer = (FRDGBufferSRV *)0x0;
  (this->AVSM).SampleBuffer = (FRDGBufferSRV *)0x0;
  (this->AVSM).RadianceTexture = (FRDGTextureSRV *)0x0;
  (this->AVSM).TextureSampler = (FRHISamplerState *)0x0;
  (this->AVSM).SplitDepths.Elements[5].field0_0x0._s_0.W = 1.0;
  return this;
}

// GetStructMetadata @ 1448827c0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl FDistortionPassUniformParameters::GetStructMetadata(void)

{
  bool bVar1;
  code *pcVar2;
  undefined1 local_res8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FDistortionPassUniformParameters::GetStructMetadata'::__l2::<lambda_1>::operator()(local_res8);
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
                (&::StaticStructMetadata,UniformBuffer,Static,L"FDistortionPassUniformParameters",
                 L"FDistortionPassUniformParameters",L"DistortionPass",L"SceneTextures",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistortionRendering.cpp"
                 ,0x52,0x3d0,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FDistortionPassUniformParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticStructMetadata;
    }
  }
  return &::StaticStructMetadata;
}

// zzAppendMemberGetPrev @ 1448b4810

void * __cdecl
FDistortionPassUniformParameters::zzAppendMemberGetPrev
          (zzFirstMemberId param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  return (void *)0x0;
}

// zzAppendMemberGetPrev @ 1448b4820

void * __cdecl
FDistortionPassUniformParameters::zzAppendMemberGetPrev
          (zzNextMemberIdAVSM param_1,
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
  
  pFStack_10 = FAdaptiveVolumetricShadowMapUniformBufferParameters::GetStructMetadata();
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"AVSM";
  pwStack_30 = L"FAdaptiveVolumetricShadowMapUniformBufferParameters";
  local_28 = 0x56;
  uStack_24 = 0xd0;
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

// zzAppendMemberGetPrev @ 1448b4950

void * __cdecl
FDistortionPassUniformParameters::zzAppendMemberGetPrev
          (zzNextMemberIdDistortionParams param_1,
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
  local_38 = L"DistortionParams";
  pwStack_30 = L"";
  local_28 = 0x55;
  uStack_24 = 0xc0;
  uStack_20 = 4;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 4;
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

// zzAppendMemberGetPrev @ 1448b4a70

void * __cdecl
FDistortionPassUniformParameters::zzAppendMemberGetPrev
          (zzNextMemberIdSceneTextures param_1,
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
  
  pFStack_10 = FSceneTextureUniformParameters::GetStructMetadata();
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"SceneTextures";
  pwStack_30 = L"FSceneTextureUniformParameters";
  local_28 = 0x53;
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

// zzAppendMemberGetPrev @ 1448b4b90

void * __cdecl
FDistortionPassUniformParameters::zzAppendMemberGetPrev
          (zzNextMemberIdSubstrate param_1,
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
  
  pFStack_10 = FSubstrateForwardPassUniformParameters::FTypeInfo::GetStructMetadata();
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"Substrate";
  pwStack_30 = L"FSubstrateForwardPassUniformParameters";
  local_28 = 0x54;
  uStack_24 = 0x80;
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

// zzAppendMemberGetPrev @ 1448b4cc0

void * __cdecl
FDistortionPassUniformParameters::zzAppendMemberGetPrev
          (zzNextMemberIdTransmittanceThreshold param_1,
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
  local_38 = L"TransmittanceThreshold";
  pwStack_30 = L"";
  local_28 = 0x58;
  uStack_24 = 0x3c4;
  uStack_20 = 4;
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

// zzAppendMemberGetPrev @ 1448b4de0

void * __cdecl
FDistortionPassUniformParameters::zzAppendMemberGetPrev
          (zzNextMemberIdUseAVSM param_1,
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
  local_38 = L"UseAVSM";
  pwStack_30 = L"";
  local_28 = 0x57;
  uStack_24 = 0x3c0;
  uStack_20 = 2;
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

// operator() @ 1504c3e40

bool __thiscall
`FDistortionPassUniformParameters::GetStructMetadata'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3866960640878837669>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3866960640878837669>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

