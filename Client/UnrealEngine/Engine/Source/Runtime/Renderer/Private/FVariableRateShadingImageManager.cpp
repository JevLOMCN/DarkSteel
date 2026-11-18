// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 28

// InitRHI @ 145736f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVariableRateShadingImageManager::InitRHI
          (FVariableRateShadingImageManager *this,FRHICommandListBase *param_1)

{
  if (GRHIGlobals.VariableRateShading.SupportsPipeline) {
    if (GRHIGlobals.VariableRateShading.SupportsAttachment) {
      if (4 < (byte)LogVRS._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVRS);
        return;
      }
    }
    else if (4 < (byte)LogVRS._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVRS);
      return;
    }
  }
  else if (GRHIGlobals.VariableRateShading.SupportsAttachment) {
    if (4 < (byte)LogVRS._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVRS);
      return;
    }
  }
  else if (4 < (byte)LogVRS._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVRS);
    return;
  }
  return;
}

// ReleaseRHI @ 145737020

void __thiscall FVariableRateShadingImageManager::ReleaseRHI(FVariableRateShadingImageManager *this)

{
  FRenderTargetPool::FreeUnusedResources((FRenderTargetPool *)&GRenderTargetPool);
  return;
}

// FVariableRateShadingImageManager @ 14574fc50

FVariableRateShadingImageManager * __thiscall
FVariableRateShadingImageManager::FVariableRateShadingImageManager
          (FVariableRateShadingImageManager *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  FVariableRateShadingImageManager *pFVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38 [2];
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  puVar9 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7FVariableRateShadingImageManager__6B_;
  (this->MobileHMDFixedFoveationOverrideImage).Reference = (IPooledRenderTarget *)0x0;
  (this->ImageGenerators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImageGenerators).ArrayNum = 0;
  (this->ImageGenerators).ArrayMax = 0;
  (this->ActiveGenerators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveGenerators).ArrayNum = 0;
  (this->ActiveGenerators).ArrayMax = 0;
  (this->InternalGenerators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalGenerators).ArrayNum = 0;
  (this->InternalGenerators).ArrayMax = 0;
  (this->GeneratorsMutex).Mutex.Mutex.Ptr = (void *)0x0;
  this->bHardwareVRSEnabledForFrame = false;
  this->bSoftwareVRSEnabledForFrame = false;
  this->VRSForceRateForFrame = -1;
  this->bNeedStaticMeshUpdate = false;
  puVar7 = ::operator_new(0x28);
  local_48 = puVar9;
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[2] = 0x3f800000;
    *puVar7 = &___7FFoveatedImageGenerator__6B_;
    puVar7[1] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    local_48 = puVar7;
  }
  pFVar1 = (this->InternalGenerators).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar1 + (longlong)(this->InternalGenerators).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FVariableRateShadingImageManager *)(*pcVar3)();
    return pFVar8;
  }
  iVar5 = (this->InternalGenerators).ArrayNum;
  if (iVar5 == (this->InternalGenerators).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->InternalGenerators).AllocatorInstance,
                       &(this->InternalGenerators).ArrayMax);
  }
  (this->InternalGenerators).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->InternalGenerators).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_48;
  local_48 = (undefined8 *)0x0;
  puVar7 = ::operator_new(8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7FContrastAdaptiveImageGenerator__6B_;
    puVar9 = puVar7;
  }
  pFVar1 = (this->InternalGenerators).AllocatorInstance.Data;
  local_40 = puVar9;
  if (((pFVar1 <= (FScriptContainerElement *)&local_40) &&
      ((FScriptContainerElement *)&local_40 <
       pFVar1 + (longlong)(this->InternalGenerators).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FVariableRateShadingImageManager *)(*pcVar3)();
    return pFVar8;
  }
  iVar5 = (this->InternalGenerators).ArrayNum;
  if (iVar5 == (this->InternalGenerators).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->InternalGenerators).AllocatorInstance,
                       &(this->InternalGenerators).ArrayMax);
  }
  (this->InternalGenerators).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->InternalGenerators).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_40;
  local_40 = (undefined8 *)0x0;
  AcquireSRWLockExclusive((PSRWLOCK)&this->GeneratorsMutex);
  pFVar10 = (this->InternalGenerators).AllocatorInstance.Data;
  iVar5 = (this->InternalGenerators).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->InternalGenerators).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IVariableRateShadingImageGenerator,TDefaultDelete<IVariableRateShadingImageGenerator>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    local_38[0] = *(undefined8 *)pFVar10;
    pFVar2 = (this->ImageGenerators).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 <
         pFVar2 + (longlong)(this->ImageGenerators).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FVariableRateShadingImageManager *)(*pcVar3)();
      return pFVar8;
    }
    iVar6 = (this->ImageGenerators).ArrayNum;
    if (iVar6 == (this->ImageGenerators).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ImageGenerators).AllocatorInstance,
                         &(this->ImageGenerators).ArrayMax);
    }
    pFVar10 = pFVar10 + 8;
    (this->ImageGenerators).ArrayNum = iVar6 + 1;
    *(undefined8 *)((this->ImageGenerators).AllocatorInstance.Data + (longlong)iVar6 * 8) =
         local_38[0];
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->GeneratorsMutex);
  return this;
}

// ~FVariableRateShadingImageManager @ 145750650

void __thiscall
FVariableRateShadingImageManager::~FVariableRateShadingImageManager
          (FVariableRateShadingImageManager *this)

{
  FScriptContainerElement *pFVar1;
  IPooledRenderTarget *pIVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7FVariableRateShadingImageManager__6B_;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->GeneratorsMutex);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->GeneratorsMutex);
  }
  DestructItems<TUniquePtr<IVariableRateShadingImageGenerator,TDefaultDelete<IVariableRateShadingImageGenerator>_>,int>
            ((TUniquePtr<IVariableRateShadingImageGenerator,TDefaultDelete<IVariableRateShadingImageGenerator>_>
              *)(this->InternalGenerators).AllocatorInstance.Data,
             (this->InternalGenerators).ArrayNum);
  pFVar1 = (this->InternalGenerators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveGenerators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ImageGenerators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->MobileHMDFixedFoveationOverrideImage).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// CombineShadingRateImages @ 14575c040

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FRDGTexture * __thiscall
FVariableRateShadingImageManager::CombineShadingRateImages
          (FVariableRateShadingImageManager *this,FRDGBuilder *param_1,FSceneViewFamily *param_2,
          TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FRDGTexture *pFVar7;
  undefined8 *puVar8;
  FRDGTextureUAV *pFVar9;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar10;
  FName this_01;
  FRDGEventName *pFVar11;
  FShaderParametersMetadata *pFVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 local_res20 [8];
  undefined8 *local_c8 [2];
  TIntVector3<int>_u_0 local_b8;
  FRDGTextureUAVDesc local_a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_88;
  FString local_78;
  TShaderRefBase<FCombineShadingRateTexturesCS,FShaderMapPointerTable> local_68;
  FRDGEventName local_58;
  
  puVar13 = (undefined8 *)0x0;
  if (param_3->ArrayNum < 1) {
    pFVar2 = (param_3->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    return (FRDGTexture *)0x0;
  }
  if (param_3->ArrayNum == 1) {
    pFVar2 = (param_3->AllocatorInstance).Data;
    pFVar7 = *(FRDGTexture **)pFVar2;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  else {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"CombineShadingRateImages");
    bVar14 = -1 < CpuChannel->Enabled;
    if (bVar14) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId773,"CombineShadingRateImages",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\VariableRateShadingImageManager.cpp"
                 ,0x305);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId773);
    }
    if ((param_3->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRDGTexture *)(*pcVar3)();
      return pFVar7;
    }
    pFVar7 = FRDGBuilder::CreateTexture
                       (param_1,(FRDGTextureDesc *)
                                (*(longlong *)(param_3->AllocatorInstance).Data + 0x80),
                        L"CombinedShadingRateTexture",None);
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
    if (puVar8 == (undefined8 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FRDGTexture *)(*pcVar3)();
        return pFVar7;
      }
    }
    else {
      puVar8[2] = 0;
      *puVar8 = &___7__TObject_VFParameters_FCombineShadingRateTexturesCS___FRDGAllocator__6B_;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar13 = puVar8;
    }
    local_c8[0] = puVar13;
    if ((((undefined8 **)param_1->_padding_ <= local_c8) &&
        (local_c8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
        ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRDGTexture *)(*pcVar3)();
      return pFVar7;
    }
    iVar5 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar5 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar5 * 8) = local_c8[0];
    if ((param_3->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRDGTexture *)(*pcVar3)();
      return pFVar7;
    }
    puVar13[3] = *(undefined8 *)(param_3->AllocatorInstance).Data;
    if ((param_3->ArrayNum < 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRDGTexture *)(*pcVar3)();
      return pFVar7;
    }
    local_a8._padding_._1_1_ = 0;
    local_a8._padding_._2_4_ = 0;
    local_a8._padding_._6_1_ = 0;
    puVar13[4] = *(undefined8 *)((param_3->AllocatorInstance).Data + 8);
    local_a8._padding_._0_1_ = (pFVar7->Desc).field_0x34;
    local_a8._padding_._0_1_ = 0;
    local_a8.Texture = pFVar7;
    pFVar9 = FRDGBuilder::CreateUAV(param_1,&local_a8,None);
    ((FParameters *)(puVar13 + 2))->RWOutputTexture = pFVar9;
    this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    pFVar10 = (FShaderType *)FCombineShadingRateTexturesCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_88,pFVar10,0);
    if (local_88.ShaderContent == (FShader *)0x0) {
      this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
      ::FName::ToString((FName *)this_01,&local_78);
      FCombineShadingRateTexturesCS::GetStaticType();
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FRDGTexture *)(*pcVar3)();
        return pFVar7;
      }
    }
    FCombineShadingRateTexturesCS::GetStaticType();
    iVar5 = FSceneTexturesConfig::GlobalInstance.Extent.field0_0x0._s_0.X + 7;
    local_68.ShaderContent = (FCombineShadingRateTexturesCS *)local_88.ShaderContent;
    local_68.ShaderMap = local_88.ShaderMap;
    iVar6 = FSceneTexturesConfig::GlobalInstance.Extent.field0_0x0._s_0.Y + 7;
    pFVar11 = FRDGEventName::FRDGEventName(&local_58,1,L"CombineShadingRateImages");
    pFVar12 = FCombineShadingRateTexturesCS::FParameters::FTypeInfo::GetStructMetadata();
    local_b8._s_0.Z = 1;
    local_b8._s_0.X = (int)((iVar5 >> 0x1f & 7U) + iVar5) >> 3;
    local_b8._s_0.Y = (int)((iVar6 >> 0x1f & 7U) + iVar6) >> 3;
    FComputeShaderUtils::AddPass<FCombineShadingRateTexturesCS>
              (param_1,pFVar11,NeverCull|AsyncCompute,&local_68,pFVar12,(FParameters *)(puVar13 + 2)
               ,(TIntVector3<int> *)&local_b8._s_0);
    if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    pFVar2 = (param_3->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  return pFVar7;
}

// DrawDebugPreview @ 1457633d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVariableRateShadingImageManager::DrawDebugPreview
          (FVariableRateShadingImageManager *this,FRDGBuilder *param_1,FSceneViewFamily *param_2,
          FRDGTexture *param_3)

{
  int *piVar1;
  FParameters *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  FRHIComputeCommandList *this_00;
  undefined8 uVar5;
  FGlobalShaderMap *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  code *pcVar12;
  TConsoleVariableData<int> *pTVar13;
  ForAnyElementType _Src;
  FShader *pFVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  atomic<unsigned_int> aVar19;
  int iVar20;
  FRDGTexture *pFVar21;
  FRHIBreadcrumbAllocator *pFVar22;
  FRHIBreadcrumbNode *pFVar23;
  FShaderType *pFVar24;
  FName FVar25;
  FScriptContainerElement *pFVar26;
  FRDGEventName *pFVar27;
  FShaderParametersMetadata *pFVar28;
  ulonglong uVar29;
  int iVar30;
  FScriptContainerElement *pFVar31;
  longlong lVar32;
  int iVar33;
  int iVar34;
  bool bVar35;
  bool local_2e8;
  undefined1 local_2e7;
  undefined1 local_2e6 [2];
  uint local_2e4;
  undefined4 local_2e0;
  ForAnyElementType local_2d8;
  undefined8 local_2d0;
  ForAnyElementType local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined1 local_2b4;
  undefined2 local_2b3;
  undefined1 local_2b1;
  ForAnyElementType local_2b0;
  uint local_2a8;
  FShader *local_2a0;
  ulonglong local_298;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> local_290;
  int local_280;
  int iStack_27c;
  FShader *local_278;
  FShaderMapBase *local_270;
  FScriptContainerElement *local_268;
  FScriptContainerElement *local_260;
  FRenderTargetBinding local_258;
  longlong local_240;
  FShaderMapBase *local_238;
  FRHIBlendState *local_230;
  ulonglong local_228;
  FRHIDepthStencilState *local_220;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_218;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_208;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1f8;
  char *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  wchar_t *pwStack_1d0;
  FShader *local_1c8;
  FShaderMapBase *pFStack_1c0;
  FShader *local_1b8;
  FShaderMapBase *pFStack_1b0;
  FRHIBlendState *local_1a8;
  FRHIDepthStencilState *pFStack_1a0;
  undefined8 local_198;
  undefined1 uStack_190;
  uint7 uStack_18f;
  FRHIBreadcrumbScope local_188;
  char local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_164;
  undefined2 local_163;
  undefined1 local_161;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  ulonglong local_140;
  ulonglong local_138;
  FShader *local_130;
  FShaderMapBase *pFStack_128;
  FShader *local_120;
  FShaderMapBase *pFStack_118;
  FRHIBlendState *local_110;
  FRHIDepthStencilState *pFStack_108;
  undefined8 local_100;
  longlong lStack_f8;
  FShader *local_f0;
  FShaderMapBase *local_e8;
  FParameters *local_e0;
  undefined1 local_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  FString local_c0;
  FString local_b0;
  initializer_list<FRDGResource_*> local_98;
  FRDGEventName local_88;
  FTonemapperOutputDeviceParameters local_68;
  
  pTVar13 = CVarVRSPreview.Ref;
  local_2e4 = 0;
  if ((this->bHardwareVRSEnabledForFrame == false) && (this->bSoftwareVRSEnabledForFrame == false))
  {
    return;
  }
  if (param_3 == (FRDGTexture *)0x0) {
    return;
  }
  bVar15 = IsInParallelRenderingThread();
  if ((!bVar15) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar15)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar20 = pTVar13->ShadowedValue[1];
  bVar15 = false;
  local_2e8 = false;
  if (iVar20 == 1) {
    local_2e0 = 1;
  }
  else {
    if (iVar20 != 2) {
      bVar15 = true;
      if (iVar20 == 3) {
        bVar35 = this->bSoftwareVRSEnabledForFrame == false;
        local_2e0 = 1;
        local_2e8 = true;
      }
      else {
        if (iVar20 != 4) {
          return;
        }
        bVar35 = this->bSoftwareVRSEnabledForFrame == false;
        bVar15 = true;
        local_2e0 = 2;
        local_2e8 = true;
      }
      goto LAB_1457634cd;
    }
    local_2e0 = 2;
  }
  bVar35 = this->bHardwareVRSEnabledForFrame == false;
LAB_1457634cd:
  if (!bVar35) {
    local_2a8 = (param_2->Views).ArrayNum;
    uVar29 = (ulonglong)(int)local_2a8;
    pFVar26 = (param_2->Views).AllocatorInstance.Data;
    pFVar31 = pFVar26 + uVar29 * 8;
    local_268 = pFVar31;
    while( true ) {
      local_260 = pFVar26;
      if ((param_2->Views).ArrayNum != (int)uVar29) {
        local_2e7 = 0;
        `TCheckedPointerIterator<FSceneView_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_2e7);
      }
      if (pFVar26 == pFVar31) break;
      lVar3 = *(longlong *)pFVar26;
      local_240 = lVar3;
      if ((*(char *)(lVar3 + 0x11d9) == '\0') &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("View->bIsViewInfo",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\VariableRateShadingImageManager.cpp"
                              ,0x286,L""), bVar35)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      GetTonemapperOutputDeviceParameters(&local_68,*(FSceneViewFamily **)(lVar3 + 8));
      if (((*(char *)(lVar3 + 0x11e8) == '\0') &&
          (*(char *)(*(longlong *)(lVar3 + 8) + 0xc1) != '\0')) && (local_68.OutputDevice < 5)) {
        if (this->VRSForceRateForFrame < 0) {
          pFVar26 = (this->ActiveGenerators).AllocatorInstance.Data;
          iVar20 = (this->ActiveGenerators).ArrayNum;
          local_2d8.Data = (FScriptContainerElement *)0x0;
          local_2d0 = 0;
          pFVar31 = pFVar26 + (longlong)iVar20 * 8;
          while( true ) {
            if ((this->ActiveGenerators).ArrayNum != iVar20) {
              local_2e6[0] = 0;
              `TCheckedPointerIterator<IVariableRateShadingImageGenerator_*,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_2e6);
            }
            _Src.Data = local_2d8.Data;
            if (pFVar26 == pFVar31) break;
            plVar4 = *(longlong **)pFVar26;
            local_2c8.Data = (FScriptContainerElement *)0x0;
            if (plVar4 != (longlong *)0x0) {
              cVar16 = (**(code **)(*plVar4 + 0x20))(plVar4,lVar3);
              if (cVar16 != '\0') {
                local_2c8.Data =
                     (FScriptContainerElement *)
                     (**(code **)(*plVar4 + 0x30))(plVar4,param_1,lVar3,local_2e0,local_2e8);
              }
              if (local_2c8.Data != (FScriptContainerElement *)0x0) {
                if (((local_2d8.Data <= (FScriptContainerElement *)&local_2c8) &&
                    ((FScriptContainerElement *)&local_2c8 <
                     local_2d8.Data + (longlong)local_2d0._4_4_ * 8)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                iVar17 = (int)local_2d0;
                if ((int)local_2d0 == local_2d0._4_4_) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_2d8,(int *)((longlong)&local_2d0 + 4));
                }
                local_2d0 = CONCAT44(local_2d0._4_4_,iVar17 + 1);
                *(FScriptContainerElement **)(local_2d8.Data + (longlong)iVar17 * 8) =
                     local_2c8.Data;
              }
            }
            pFVar26 = pFVar26 + 8;
          }
          lVar32 = (longlong)(int)local_2d0;
          local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_290.ArrayNum = (int)local_2d0;
          if ((int)local_2d0 == 0) {
            local_290.ArrayMax = (int)local_2d0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,(int)local_2d0,0,&local_290.AllocatorInstance,(int)local_2d0,
                       &local_290.ArrayMax);
            memcpy(local_290.AllocatorInstance.Data,_Src.Data,lVar32 << 3);
          }
          pFVar21 = CombineShadingRateImages(this,param_1,param_2,&local_290);
          if (pFVar21 == (FRDGTexture *)0x0) {
            pFVar21 = GetForceRateImage(this,param_1,param_2,0,local_2e8);
          }
          if (local_2d8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d8.Data);
          }
        }
        else {
          pFVar21 = GetForceRateImage(this,param_1,param_2,this->VRSForceRateForFrame,bVar15);
        }
        this_00 = (FRHIComputeCommandList *)param_1->_padding_;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          uStack_1e0 = 0x2b1;
          local_1e8 = 
          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\VariableRateShadingImageManager.cpp"
          ;
          local_1d8 = 0;
          pwStack_1d0 = L"VRSDebugPreview";
          ::Desc._padding_._0_4_ = 0x51008290;
          ::Desc._padding_._4_4_ = 1;
          ::Desc._padding_._0_4_ = 0x2b1;
          ::Desc._padding_._4_4_ = uStack_1dc;
          ::Desc._padding_._0_4_ = 0;
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_._0_4_ = 0x5100e270;
          ::Desc._padding_._4_4_ = 1;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(``FVariableRateShadingImageManager::DrawDebugPreview'::__l47::<lambda_1>::
                 operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        pFVar31 = (FScriptContainerElement *)0x0;
        pFVar22 = FRHIComputeCommandList::GetBreadcrumbAllocator(this_00);
        pFVar23 = FMemStackBase::Alloc(&pFVar22->Inner,0x50,8);
        pFVar23->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
        pFVar23->Parent = FRHIBreadcrumbNode::Sentinel;
        pFVar23->ListLink = (FRHIBreadcrumbNode *)0x0;
        (pFVar23->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
        (pFVar23->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
        pFVar23->Data = (FRHIBreadcrumbData *)&::Desc;
        pFVar23->Allocator = pFVar22;
        pFVar23->TraceCpuSpecId = 0;
        pFVar23->TraceCpuMetadataId = 0;
        LOCK();
        UNLOCK();
        uVar18 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
        FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
        pFVar23->BeginPipes = (atomic<unsigned_char>)0x0;
        pFVar23->EndPipes = (atomic<unsigned_char>)0x0;
        pFVar23->ID = uVar18;
        pFVar23->_padding_ =
             (longlong)
             &
             ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
        ;
        pFVar23[1]._padding_ = (longlong)&::Desc;
        if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
           (bVar15 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar15)) {
          EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
          if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
            aVar19 = (atomic<unsigned_int>)
                     FCpuProfilerTrace::OutputEventType
                               ((wchar_t *)
                                CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                                (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_
                                                ),(uint)::Desc._padding_);
            LOCK();
            ::Desc.TraceCpuSpecId = aVar19;
            UNLOCK();
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
        }
        pFVar23->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
        FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_188,this_00,pFVar23);
        uVar29 = *(ulonglong *)(lVar3 + 0x1c30);
        uVar5 = *(undefined8 *)(lVar3 + 0x1c38);
        pFVar6 = *(FGlobalShaderMap **)(lVar3 + 0x26c0);
        local_178 = '\x01';
        pFVar24 = (FShaderType *)FScreenPassVS::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar6,&local_218,pFVar24,0);
        if (local_218.ShaderContent == (FShader *)0x0) {
          FVar25 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_d0);
          ::FName::ToString((FName *)FVar25,&local_c0);
          FScreenPassVS::GetStaticType();
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                              ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          if (bVar15) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        FScreenPassVS::GetStaticType();
        pFVar6 = *(FGlobalShaderMap **)(lVar3 + 0x26c0);
        local_278 = local_218.ShaderContent;
        local_238 = local_218.ShaderMap;
        pFVar24 = (FShaderType *)FDebugVariableRateShadingPS::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar6,&local_208,pFVar24,0);
        if (local_208.ShaderContent == (FShader *)0x0) {
          FVar25 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_c8);
          ::FName::ToString((FName *)FVar25,&local_b0);
          FDebugVariableRateShadingPS::GetStaticType();
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                              ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
          if (bVar15) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        FDebugVariableRateShadingPS::GetStaticType();
        local_2a0 = local_208.ShaderContent;
        local_270 = local_208.ShaderMap;
        pFVar26 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x120,0x10);
        if (pFVar26 == (FScriptContainerElement *)0x0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          if (bVar15) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        else {
          *(undefined8 *)(pFVar26 + 0x10) = 0;
          *(undefined ***)pFVar26 =
               &___7__TObject_VFParameters_FDebugVariableRateShadingPS___FRDGAllocator__6B_;
          FRenderTargetBindingSlots::FRenderTargetBindingSlots
                    ((FRenderTargetBindingSlots *)(pFVar26 + 0x20));
          pFVar31 = pFVar26;
        }
        local_2b0.Data = pFVar31;
        if ((((ForAnyElementType *)param_1->_padding_ <= &local_2b0) &&
            (&local_2b0 <
             (ForAnyElementType *)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
           && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar20 = (int)param_1->_padding_;
        piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
        if (iVar20 == *piVar1) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
        }
        pFVar2 = (FParameters *)(pFVar31 + 0x10);
        *(int *)&param_1->_padding_ = iVar20 + 1;
        local_258.ResolveTexture = (FRDGTexture *)0x0;
        local_258.LoadAction = ELoad;
        local_258.MipIndex = '\0';
        local_258.ArraySlice = -1;
        *(FScriptContainerElement **)(param_1->_padding_ + (longlong)iVar20 * 8) = local_2b0.Data;
        pFVar2->VariableRateShadingTextureIn = pFVar21;
        local_258.Texture = param_3;
        bVar15 = FRenderTargetBinding::Validate(&local_258);
        if ((!bVar15) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Validate()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                ,0x216,L""), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(FRDGTexture **)(pFVar31 + 0x20) = local_258.Texture;
        *(FRDGTexture **)(pFVar31 + 0x28) = local_258.ResolveTexture;
        *(ulonglong *)(pFVar31 + 0x30) = CONCAT44(local_258._20_4_,local_258._16_4_);
        local_230 = TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                    ::StaticResource.StateRHI.Reference;
        local_220 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                    ::StaticResource.StateRHI.Reference;
        iVar20 = GRHIGlobals.VariableRateShading.ImageTileMinWidth;
        iVar17 = GRHIGlobals.VariableRateShading.ImageTileMinHeight;
        if (local_2e8 != false) {
          iVar20 = 2;
          iVar17 = 2;
        }
        uVar10 = (longlong)(iVar20 + -1 + (int)uVar5) / (longlong)iVar20;
        lVar32 = (longlong)(iVar17 + -1 + (int)((ulonglong)uVar5 >> 0x20)) / (longlong)iVar17;
        uVar11 = (longlong)((ulonglong)(uint)((int)uVar29 >> 0x1f) << 0x20 | uVar29 & 0xffffffff) /
                 (longlong)iVar20;
        iStack_27c = (int)(uVar29 >> 0x20);
        iVar20 = (int)lVar32;
        local_228 = (longlong)iStack_27c / (longlong)iVar17 << 0x20 | uVar11 & 0xffffffff;
        local_298 = lVar32 << 0x20 | uVar10 & 0xffffffff;
        iVar17 = (int)((longlong)iStack_27c / (longlong)iVar17);
        _local_280 = CONCAT44(iVar17,(int)uVar29);
        if (pFVar21 == (FRDGTexture *)0x0) {
LAB_145763ca3:
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InTexture.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                              ,0xab,L"");
          if (bVar15) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        else {
          iVar34 = (pFVar21->VisualizeTextureExtent).field0_0x0._s_0.X;
          iVar33 = (int)uVar10;
          iVar30 = iVar33;
          if (iVar33 < iVar34) {
            iVar30 = iVar34;
          }
          iVar34 = (pFVar21->VisualizeTextureExtent).field0_0x0._s_0.Y;
          (pFVar21->VisualizeTextureExtent).field0_0x0._s_0.X = iVar30;
          iVar30 = iVar20;
          if (iVar20 < iVar34) {
            iVar30 = iVar34;
          }
          (pFVar21->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar30;
          if ((iVar33 == (int)uVar11) && (iVar20 == iVar17)) goto LAB_145763ca3;
        }
        lVar32 = local_240;
        uVar5 = *(undefined8 *)(lVar3 + 0x380);
        uVar7 = *(undefined8 *)&(pFVar21->Desc).field_0x24;
        iVar20 = (param_3->VisualizeTextureExtent).field0_0x0._s_0.X;
        uVar8 = *(undefined8 *)(local_240 + 0x388);
        iVar34 = (int)uVar8;
        iVar17 = iVar34;
        if (iVar34 < iVar20) {
          iVar17 = iVar20;
        }
        iVar20 = (param_3->VisualizeTextureExtent).field0_0x0._s_0.Y;
        (param_3->VisualizeTextureExtent).field0_0x0._s_0.X = iVar17;
        iVar30 = (int)((ulonglong)uVar8 >> 0x20);
        iVar17 = iVar30;
        if (iVar30 < iVar20) {
          iVar17 = iVar20;
        }
        (param_3->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar17;
        if (((iVar34 == (int)uVar5) && (iVar30 == (int)((ulonglong)uVar5 >> 0x20))) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InTexture.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                                ,0xab,L""), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_2c0 = *(undefined4 *)(lVar32 + 0x1bf8);
        uVar9 = *(undefined8 *)&(param_3->Desc).field_0x24;
        local_2e4 = local_2e4 | 2;
        local_2bc = *(undefined4 *)(lVar32 + 0xdd4);
        local_2b8 = *(undefined4 *)(lVar32 + 0x1bfc);
        local_2b4 = *(undefined1 *)(lVar32 + 0xde6);
        pFVar27 = FRDGEventName::FRDGEventName(&local_88,1,L"Display VRS Debug Preview");
        if ((local_278 == (FShader *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("VertexShader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                                ,0x206,L""), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((local_2a0 == (FShader *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("PixelShader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                                ,0x207,L""), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar28 = FDebugVariableRateShadingPS::FParameters::FTypeInfo::GetStructMetadata();
        local_1f8.ShaderContent = local_2a0;
        local_1f8.ShaderMap = local_270;
        ValidateShaderParameters(&local_1f8,pFVar28,pFVar2);
        pFVar14 = local_2a0;
        local_98._First = (FRDGResource **)0x0;
        local_98._Last = (FRDGResource **)0x0;
        ClearUnusedGraphResourcesImpl(&local_2a0->Bindings,pFVar28,pFVar2,&local_98);
        local_1c8 = local_278;
        pFStack_1c0 = local_238;
        local_1a8 = local_230;
        pFStack_1a0 = local_220;
        local_198 = GFilterVertexDeclaration._32_8_;
        local_170 = local_2c0;
        local_16c = local_2bc;
        local_168 = local_2b8;
        local_164 = local_2b4;
        local_163 = local_2b3;
        local_161 = local_2b1;
        pFStack_1b0 = local_270;
        local_140 = local_228;
        local_130 = local_278;
        pFStack_128 = local_238;
        local_1b8 = pFVar14;
        local_120 = pFVar14;
        pFStack_118 = local_270;
        uStack_190 = 0;
        lStack_f8 = (ulonglong)uStack_18f << 8;
        local_138 = local_298;
        local_110 = local_230;
        pFStack_108 = local_220;
        local_f0 = pFVar14;
        local_100 = GFilterVertexDeclaration._32_8_;
        local_e8 = local_270;
        local_d8 = 2;
        local_160 = uVar9;
        local_158 = uVar5;
        local_150 = uVar8;
        local_148 = uVar7;
        local_e0 = pFVar2;
        pFVar28 = FDebugVariableRateShadingPS::FParameters::FTypeInfo::GetStructMetadata();
        FRDGBuilder::
        AddPassInternal<FDebugVariableRateShadingPS::FParameters,_AddDrawScreenPass<FDebugVariableRateShadingPS>_::__l2::<lambda_1>_>
                  (param_1,pFVar27,pFVar28,pFVar2,Raster,(<lambda_1> *)&local_170);
        uVar18 = local_2e4;
        local_2e4 = local_2e4 & 0xfffffffd;
        if (local_88.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.FormattedEventName.Data.AllocatorInstance.Data);
        }
        if (((uVar18 & 1) != 0) &&
           (local_2e4 = uVar18 & 0xfffffffc, this != (FVariableRateShadingImageManager *)0x0)) {
          FMemory::Free(this);
        }
        pFVar31 = local_268;
        if (local_178 != '\0') {
          FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_188);
          pFVar31 = local_268;
        }
      }
      pFVar26 = local_260 + 8;
      uVar29 = (ulonglong)local_2a8;
      bVar15 = local_2e8;
    }
  }
  return;
}

// GetForceRateImage @ 145770ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGTexture * __thiscall
FVariableRateShadingImageManager::GetForceRateImage
          (FVariableRateShadingImageManager *this,FRDGBuilder *param_1,FSceneViewFamily *param_2,
          int param_3,bool param_4)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  FRDGTextureDesc *pFVar4;
  FRDGTexture *pFVar5;
  FRDGTextureUAV *pFVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStackY_118 [32];
  FRDGTextureUAVDesc local_d8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_c0 = 0;
      uStack_bc = 1;
      uStack_b8 = 4;
      uStack_b4 = 5;
      local_b0 = 6;
      uStack_ac = 9;
      local_a8 = 10;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,7,0,&ValidShadingRates.AllocatorInstance,7,&ValidShadingRates.ArrayMax);
      FVar2 = ValidShadingRates.AllocatorInstance;
      *(ulonglong *)ValidShadingRates.AllocatorInstance.Data = CONCAT44(uStack_bc,local_c0);
      *(ulonglong *)(FVar2.Data + 8) = CONCAT44(uStack_b4,uStack_b8);
      *(ulonglong *)(FVar2.Data + 0x10) = CONCAT44(uStack_ac,local_b0);
      *(undefined4 *)(FVar2.Data + 0x18) = local_a8;
      atexit(`FVariableRateShadingImageManager::GetForceRateImage'::__l2::
             _dynamic_atexit_destructor_for__ValidShadingRates__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((&this->bHardwareVRSEnabledForFrame)[param_4] == false) {
    pFVar5 = (FRDGTexture *)0x0;
  }
  else {
    pFVar4 = GetSRIDesc((FRDGTextureDesc *)local_98,param_2,param_4);
    pFVar5 = FRDGBuilder::CreateTexture(param_1,pFVar4,L"ForceShadingRateTexture",None);
    if ((void *)local_98._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._64_8_);
    }
    local_d8._padding_._0_1_ = (pFVar5->Desc).field_0x34;
    local_d8._padding_._1_1_ = 0;
    local_d8._padding_._2_4_ = 0;
    local_d8._padding_._6_1_ = 0;
    local_d8._padding_._0_1_ = 0;
    local_d8.Texture = pFVar5;
    pFVar6 = FRDGBuilder::CreateUAV(param_1,&local_d8,None);
    uVar7 = 3;
    if (GRHIGlobals.VariableRateShading.SupportsLargerSizes != false) {
      uVar7 = 6;
    }
    if (param_3 < (int)uVar7) {
      uVar7 = param_3;
    }
    uVar8 = 0;
    if (0 < (int)uVar7) {
      uVar8 = uVar7;
    }
    uVar7 = 0;
    if ((int)uVar8 < ValidShadingRates.ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FRDGTexture *)(*pcVar1)();
        return pFVar5;
      }
    }
    AddClearUAVPass(param_1,pFVar6,
                    *(uint *)(ValidShadingRates.AllocatorInstance.Data + (longlong)(int)uVar8 * 4),
                    Compute);
  }
  return pFVar5;
}

// GetImageTypeFromPassType @ 1457713e0

EVRSImageType __thiscall
FVariableRateShadingImageManager::GetImageTypeFromPassType
          (FVariableRateShadingImageManager *this,EVRSPassType param_1)

{
  TConsoleVariableData<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  EVRSImageType EVar4;
  
  pTVar1 = StaticData.CVarByPassType[(int)param_1]->Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  EVar4 = Disabled;
  if ((uint)pTVar1->ShadowedValue[1] < 3) {
    EVar4 = pTVar1->ShadowedValue[1];
  }
  return EVar4;
}

// GetNeedStaticMeshUpdate @ 145771730

bool __thiscall
FVariableRateShadingImageManager::GetNeedStaticMeshUpdate(FVariableRateShadingImageManager *this)

{
  return this->bNeedStaticMeshUpdate;
}

// GetNumberOfSupportedRates @ 145771740

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __cdecl FVariableRateShadingImageManager::GetNumberOfSupportedRates(void)

{
  int iVar1;
  
  iVar1 = 4;
  if (GRHIGlobals.VariableRateShading.SupportsLargerSizes) {
    iVar1 = 7;
  }
  return iVar1;
}

// GetSRIDesc @ 145771d80

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FRDGTextureDesc * __cdecl
FVariableRateShadingImageManager::GetSRIDesc
          (FRDGTextureDesc *__return_storage_ptr__,FSceneViewFamily *param_1,bool param_2)

{
  code *pcVar1;
  EPixelFormat EVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  bool bVar6;
  FRDGTextureDesc *pFVar7;
  byte bVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  TIntRect<int>_u_0 local_28;
  
  if (((param_1->Views).ArrayNum == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ViewFamily.Views.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\VariableRateShadingImageManager.cpp"
                         ,0x1a9,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FRDGTextureDesc *)(*pcVar1)();
    return pFVar7;
  }
  if (((param_1->Views).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FRDGTextureDesc *)(*pcVar1)();
    return pFVar7;
  }
  if ((*(char *)(*(longlong *)(param_1->Views).AllocatorInstance.Data + 0x11d9) == '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewFamily.Views[0]->bIsViewInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\VariableRateShadingImageManager.cpp"
                         ,0x1aa,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FRDGTextureDesc *)(*pcVar1)();
    return pFVar7;
  }
  if (((param_1->Views).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FRDGTextureDesc *)(*pcVar1)();
    return pFVar7;
  }
  FViewInfo::GetFamilyViewRect
            (*(FViewInfo **)(param_1->Views).AllocatorInstance.Data,(TIntRect<int> *)&local_28._s_0)
  ;
  uVar5 = FClearValueBinding::None.Value.Color[3];
  uVar4 = FClearValueBinding::None.Value._4_8_;
  uVar3 = FClearValueBinding::None._0_8_;
  iVar11 = GRHIGlobals.VariableRateShading.ImageTileMinHeight;
  iVar10 = GRHIGlobals.VariableRateShading.ImageTileMinWidth;
  if (param_2) {
    iVar11 = 2;
    iVar10 = 2;
  }
  uVar9 = 0x30008;
  if (GRHIGlobals.VariableRateShading.SupportsAttachment != false) {
    uVar9 = 0x30408;
  }
  EVar2 = GRHIGlobals.VariableRateShading.ImageFormat;
  if (param_2) {
    EVar2 = PF_R8_UINT;
  }
  *(undefined8 *)__return_storage_ptr__ = uVar9;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar4;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = uVar5;
  bVar8 = (byte)GNumExplicitGPUsForRendering;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = 0;
  *(int *)&__return_storage_ptr__->field_0x1c = (1 << (bVar8 & 0x1f)) + -1;
  *(ulonglong *)&__return_storage_ptr__->field_0x24 =
       CONCAT44(((iVar11 - local_28._4_4_) + local_28._12_4_ + -1) / iVar11,
                ((iVar10 - local_28._0_4_) + local_28._8_4_ + -1) / iVar10);
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x10001;
  *(undefined2 *)&__return_storage_ptr__->field_0x30 = 0x101;
  __return_storage_ptr__->field_0x32 = 0;
  __return_storage_ptr__->field_0x33 = EVar2;
  *(undefined2 *)&__return_storage_ptr__->field_0x34 = 0xff00;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = 1;
  return __return_storage_ptr__;
}

// GetSRITileSize @ 145771fa0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TIntPoint<int> __cdecl FVariableRateShadingImageManager::GetSRITileSize(bool param_1)

{
  int iVar1;
  undefined7 in_register_00000009;
  TIntPoint<int>_u_0 TVar2;
  char in_DL;
  
  iVar1 = GRHIGlobals.VariableRateShading.ImageTileMinHeight;
  TVar2._1_7_ = in_register_00000009;
  TVar2._s_0.X._0_1_ = param_1;
  if (in_DL != '\0') {
    *(int *)TVar2 = 2;
    *(int *)((longlong)TVar2 + 4) = 2;
    return (TIntPoint<int>)TVar2;
  }
  *(int *)TVar2 = GRHIGlobals.VariableRateShading.ImageTileMinWidth;
  *(int *)((longlong)TVar2 + 4) = iVar1;
  return (TIntPoint<int>)TVar2;
}

// GetVariableRateShadingImage @ 145779fb0

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

FRDGTexture * __thiscall
FVariableRateShadingImageManager::GetVariableRateShadingImage
          (FVariableRateShadingImageManager *this,FRDGBuilder *param_1,FViewInfo *param_2,
          EVRSPassType param_3,bool param_4)

{
  TConsoleVariableData<int> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FRDGTexture *pFVar9;
  FRDGScope *this_00;
  ulonglong uVar10;
  undefined1 uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_e8 [8];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  longlong local_d0;
  int local_c8;
  uint local_c4;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> local_c0;
  FScriptContainerElement *local_b0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_a8;
  char local_98;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28>_const_*,std::tuple<>_> local_90;
  uint uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  FTonemapperOutputDeviceParameters local_58;
  
  if ((this->bHardwareVRSEnabledForFrame != false) || (this->bSoftwareVRSEnabledForFrame != false))
  {
    pTVar1 = StaticData.CVarByPassType[(int)param_3]->Ref;
    bVar5 = IsInParallelRenderingThread();
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FRDGTexture *)(*pcVar3)();
        return pFVar9;
      }
    }
    pFVar9 = (FRDGTexture *)0x0;
    local_c8 = 0;
    if ((uint)pTVar1->ShadowedValue[1] < 3) {
      local_c8 = pTVar1->ShadowedValue[1];
    }
    if ((((local_c8 != 0) &&
         (GetTonemapperOutputDeviceParameters(&local_58,(FSceneViewFamily *)param_2->_padding_),
         (char)param_2->_padding_ == '\0')) &&
        (((FSceneViewFamily *)param_2->_padding_)->bRealtimeUpdate != false)) &&
       (local_58.OutputDevice < 5)) {
      if (-1 < this->VRSForceRateForFrame) {
        pFVar9 = GetForceRateImage(this,param_1,(FSceneViewFamily *)param_2->_padding_,
                                   this->VRSForceRateForFrame,param_4);
        return pFVar9;
      }
      if ((this->ActiveGenerators).ArrayNum != 0) {
        cVar6 = *(char *)((longlong)&param_1->_padding_ + 6);
        local_98 = '\0';
        if ((cVar6 != '\0') && ((cVar6 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            local_70 = 0;
            uStack_6c = 0;
            ::Desc._12_8_ = ZEXT48(uStack_74);
            ::Desc._padding_._4_4_ = 0;
            ::Desc._padding_ = (longlong)u_GetVariableRate;
            ::Desc._padding_ = (longlong)u_GetVariableRate;
            ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            ::Desc._padding_._0_4_ = 0x1e0;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(```FVariableRateShadingImageManager::GetVariableRateShadingImage'::__l19::Desc::
                   operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
                   _dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          local_90._Myfirst._Val = &::Desc;
          local_a8.State = (FRDGScopeState *)param_1;
          this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                              ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
          param_1->_padding_ = (longlong)this_00;
          local_a8.Scope = this_00;
          TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
          Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28>_const_*,std::tuple<>_>_>
                    (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_90);
          if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
            FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
            FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
          }
          local_98 = '\x01';
        }
        FGenericPlatformMisc::BeginNamedEvent(&FColor::Yellow,"GetVariableRateShadingImage");
        bVar5 = -1 < CpuChannel->Enabled;
        if (bVar5) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId481,"GetVariableRateShadingImage",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\VariableRateShadingImageManager.cpp"
                     ,0x1e1);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId481);
        }
        local_c4 = (this->ActiveGenerators).ArrayNum;
        uVar10 = (ulonglong)(int)local_c4;
        pFVar13 = (this->ActiveGenerators).AllocatorInstance.Data;
        local_e0.Data = (FScriptContainerElement *)0x0;
        local_d8 = 0;
        local_b0 = pFVar13 + uVar10 * 8;
        while( true ) {
          pFVar4 = local_b0;
          if ((this->ActiveGenerators).ArrayNum != (int)uVar10) {
            local_e8[0] = 0;
            `TCheckedPointerIterator<IVariableRateShadingImageGenerator_*,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_e8);
          }
          _Src.Data = local_e0.Data;
          if (pFVar13 == pFVar4) break;
          plVar2 = *(longlong **)pFVar13;
          if ((this->bSoftwareVRSEnabledForFrame == false) || (!param_4)) {
            uVar11 = 0;
          }
          else {
            uVar11 = 1;
          }
          local_d0 = 0;
          if (plVar2 != (longlong *)0x0) {
            cVar6 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
            if (cVar6 != '\0') {
              local_d0 = (**(code **)(*plVar2 + 8))(plVar2,param_1,param_2,local_c8,uVar11);
            }
            if (local_d0 != 0) {
              if ((local_e0.Data <= (FScriptContainerElement *)&local_d0) &&
                 ((FScriptContainerElement *)&local_d0 <
                  local_e0.Data + (longlong)local_d8._4_4_ * 8)) {
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  pFVar9 = (FRDGTexture *)(*pcVar3)();
                  return pFVar9;
                }
              }
              iVar8 = (int)local_d8;
              if ((int)local_d8 == local_d8._4_4_) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&local_e0,(int *)((longlong)&local_d8 + 4));
              }
              local_d8 = CONCAT44(local_d8._4_4_,iVar8 + 1);
              *(longlong *)(local_e0.Data + (longlong)iVar8 * 8) = local_d0;
            }
          }
          uVar10 = (ulonglong)local_c4;
          pFVar13 = pFVar13 + 8;
        }
        lVar12 = (longlong)(int)local_d8;
        if ((int)local_d8 != 0) {
          local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c0.ArrayNum = (int)local_d8;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(int)local_d8,0,&local_c0.AllocatorInstance,(int)local_d8,
                     &local_c0.ArrayMax);
          memcpy(local_c0.AllocatorInstance.Data,_Src.Data,lVar12 << 3);
          pFVar9 = CombineShadingRateImages
                             (this,param_1,(FSceneViewFamily *)param_2->_padding_,&local_c0);
        }
        if (local_e0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data);
        }
        if (bVar5) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        FGenericPlatformMisc::EndNamedEvent();
        if (local_98 != '\0') {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_a8);
        }
        return pFVar9;
      }
    }
  }
  return (FRDGTexture *)0x0;
}

// IsAttachmentVRSEnabled @ 1457808e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FVariableRateShadingImageManager::IsAttachmentVRSEnabled(FVariableRateShadingImageManager *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarEnableVRS.Ref;
  if (GRHIGlobals.VariableRateShading.SupportsAttachment) {
    bVar3 = IsInParallelRenderingThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    if (pTVar2->ShadowedValue[1] != 0) {
      return true;
    }
  }
  return false;
}

// IsHardwareVRSEnabledForFrame @ 145780a80

bool __thiscall
FVariableRateShadingImageManager::IsHardwareVRSEnabledForFrame
          (FVariableRateShadingImageManager *this)

{
  return this->bHardwareVRSEnabledForFrame;
}

// IsHardwareVRSSupported @ 145780a90

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FVariableRateShadingImageManager::IsHardwareVRSSupported(void)

{
  if ((!GRHIGlobals.VariableRateShading.SupportsPipeline) &&
     (!GRHIGlobals.VariableRateShading.SupportsAttachment)) {
    return false;
  }
  return true;
}

// IsPipelineVRSEnabled @ 145780ba0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FVariableRateShadingImageManager::IsPipelineVRSEnabled(FVariableRateShadingImageManager *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarEnableVRS.Ref;
  if (GRHIGlobals.VariableRateShading.SupportsPipeline) {
    bVar3 = IsInParallelRenderingThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    if (pTVar2->ShadowedValue[1] != 0) {
      return true;
    }
  }
  return false;
}

// IsSoftwareVRSEnabledForFrame @ 145780cc0

bool __thiscall
FVariableRateShadingImageManager::IsSoftwareVRSEnabledForFrame
          (FVariableRateShadingImageManager *this)

{
  return this->bSoftwareVRSEnabledForFrame;
}

// IsSoftwareVRSSupported @ 145780cd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FVariableRateShadingImageManager::IsSoftwareVRSSupported(void)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar3].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return 3 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[uVar3].MaxFeatureLevel;
}

// IsTypeEnabledForView @ 145780ef0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FVariableRateShadingImageManager::IsTypeEnabledForView
          (FVariableRateShadingImageManager *this,FSceneView *param_1,EVRSSourceType param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  EVRSSourceType EVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->ActiveGenerators).AllocatorInstance.Data;
  iVar2 = (this->ActiveGenerators).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ActiveGenerators).ArrayNum != iVar2) {
      `TCheckedPointerIterator<IVariableRateShadingImageGenerator_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    plVar3 = *(longlong **)pFVar6;
    if (((plVar3 != (longlong *)0x0) &&
        (EVar5 = (**(code **)(*plVar3 + 0x28))(plVar3), (param_2 & EVar5) != None)) &&
       (cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1), cVar4 != '\0')) {
      return true;
    }
    pFVar6 = pFVar6 + 8;
  }
  return false;
}

// IsVRSCompatibleWithOutputType @ 145780f90

bool __cdecl
FVariableRateShadingImageManager::IsVRSCompatibleWithOutputType(EDisplayOutputFormat *param_1)

{
  if ((*param_1 != SDR_sRGB) && (3 < *param_1 - SDR_Rec709)) {
    return false;
  }
  return true;
}

// IsVRSCompatibleWithView @ 145780fb0

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

bool __cdecl FVariableRateShadingImageManager::IsVRSCompatibleWithView(FViewInfo *param_1)

{
  FTonemapperOutputDeviceParameters local_28;
  
  GetTonemapperOutputDeviceParameters(&local_28,(FSceneViewFamily *)param_1->_padding_);
  if ((((char)param_1->_padding_ == '\0') && (*(char *)(param_1->_padding_ + 0xc1) != '\0')) &&
     (local_28.OutputDevice < 5)) {
    return true;
  }
  return false;
}

// IsVRSEnabledForFrame @ 145781000

bool __thiscall
FVariableRateShadingImageManager::IsVRSEnabledForFrame(FVariableRateShadingImageManager *this)

{
  if ((this->bHardwareVRSEnabledForFrame == false) && (this->bSoftwareVRSEnabledForFrame == false))
  {
    return false;
  }
  return true;
}

// PrepareImageBasedVRS @ 145781280

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVariableRateShadingImageManager::PrepareImageBasedVRS
          (FVariableRateShadingImageManager *this,FRDGBuilder *param_1,FSceneViewFamily *param_2,
          FMinimalSceneTextures *param_3)

{
  TArray<IVariableRateShadingImageGenerator_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  FStaticShaderPlatform FVar10;
  int iVar11;
  FRDGScope *this_00;
  IConsoleManager *pIVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_d8;
  undefined1 local_d7 [7];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  TRDGEventScopeGuard<FRDGScope_RHI> local_b8;
  char local_a8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_> local_a0;
  uint uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  FTonemapperOutputDeviceParameters local_68;
  
  FVar10.Platform = FSceneInterface::GetShaderPlatform(param_2->Scene);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar12 = IConsoleManager::Get();
    CVarLocalNaniteSoftwareVRS =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar12 + 0xc0))(pIVar12,L"r.Nanite.SoftwareVRS",1);
    _Init_thread_footer(&::_TSS0);
  }
  pTVar6 = CVarEnableVRS.Ref;
  if (GRHIGlobals.VariableRateShading.SupportsAttachment != false) {
    bVar7 = IsInParallelRenderingThread();
    if ((!bVar7) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pTVar6->ShadowedValue[1] != 0) &&
       (bVar7 = HardwareVariableRateShadingSupportedByPlatform(FVar10.Platform), bVar7)) {
      bVar7 = true;
      goto LAB_145781342;
    }
  }
  bVar7 = false;
LAB_145781342:
  this->bHardwareVRSEnabledForFrame = bVar7;
  pTVar6 = CVarEnableVRSSoftwareImage.Ref;
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((pTVar6->ShadowedValue[1] < 1) || (bVar7 = UseNanite(FVar10.Platform,true,true), !bVar7)) ||
      (iVar11 = (**(code **)(*(longlong *)CVarLocalNaniteSoftwareVRS + 200))(), iVar11 < 1)) ||
     (bVar7 = IsFeatureLevelSupported(FVar10,SM6), !bVar7)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  this->bSoftwareVRSEnabledForFrame = bVar7;
  if ((this->bHardwareVRSEnabledForFrame != false) || (bVar7 != false)) {
    AcquireSRWLockShared((PSRWLOCK)&this->GeneratorsMutex);
    pFVar13 = (this->ImageGenerators).AllocatorInstance.Data;
    local_d0.Data = (FScriptContainerElement *)0x0;
    local_c8 = 0;
    pFVar2 = pFVar13 + (longlong)(this->ImageGenerators).ArrayNum * 8;
    for (; pFVar13 != pFVar2; pFVar13 = pFVar13 + 8) {
      if ((*(longlong **)pFVar13 != (longlong *)0x0) &&
         (cVar8 = (**(code **)(**(longlong **)pFVar13 + 0x18))(), cVar8 != '\0')) {
        if ((local_d0.Data <= pFVar13) &&
           ((pFVar13 < local_d0.Data + (longlong)local_c8._4_4_ * 8 &&
            (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = (int)local_c8;
        if ((int)local_c8 == local_c8._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_d0,(int *)((longlong)&local_c8 + 4));
        }
        local_c8 = CONCAT44(local_c8._4_4_,iVar11 + 1);
        *(longlong *)(local_d0.Data + (longlong)iVar11 * 8) = *(longlong *)pFVar13;
      }
    }
    pTVar1 = &this->ActiveGenerators;
    if (pTVar1 != (TArray<IVariableRateShadingImageGenerator_*,TSizedDefaultAllocator<32>_> *)
                  &local_d0) {
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar1->AllocatorInstance).Data = local_d0.Data;
      (this->ActiveGenerators).ArrayNum = (int)local_c8;
      (this->ActiveGenerators).ArrayMax = local_c8._4_4_;
      local_c8 = 0;
      local_d0.Data = (FScriptContainerElement *)0x0;
    }
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->GeneratorsMutex);
    iVar11 = (**(code **)(*(longlong *)CVarVRSDebugForceRate._8_8_ + 200))();
    this->VRSForceRateForFrame = iVar11;
    if (((this->ActiveGenerators).ArrayNum != 0) || (-1 < iVar11)) {
      pFVar13 = (param_2->Views).AllocatorInstance.Data;
      iVar11 = (param_2->Views).ArrayNum;
      pFVar2 = pFVar13 + (longlong)iVar11 * 8;
      while( true ) {
        if ((param_2->Views).ArrayNum != iVar11) {
          local_d8 = 0;
          `TCheckedPointerIterator<FSceneView_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_d8);
        }
        if (pFVar13 == pFVar2) {
          return;
        }
        lVar3 = *(longlong *)pFVar13;
        if ((*(char *)(lVar3 + 0x11d9) == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("View->bIsViewInfo",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\VariableRateShadingImageManager.cpp"
                               ,0x228,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        GetTonemapperOutputDeviceParameters(&local_68,*(FSceneViewFamily **)(lVar3 + 8));
        if (((*(char *)(lVar3 + 0x11e8) == '\0') &&
            (*(char *)(*(longlong *)(lVar3 + 8) + 0xc1) != '\0')) && (local_68.OutputDevice < 5))
        break;
        pFVar13 = pFVar13 + 8;
      }
      if (param_2->RenderTarget == (FRenderTarget *)0x0) {
        `FVariableRateShadingImageManager::PrepareImageBasedVRS'::__l29::<lambda_2>::operator()
                  (local_c0);
      }
      else {
        cVar8 = *(char *)((longlong)&param_1->_padding_ + 6);
        local_a8 = '\0';
        if ((cVar8 != '\0') && ((cVar8 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            local_80 = 0;
            uStack_7c = 0;
            ::Desc._12_8_ = ZEXT48(uStack_84);
            ::Desc._padding_._4_4_ = 0;
            ::Desc._padding_ = (longlong)u_PrepareImageBas;
            ::Desc._padding_ = (longlong)u_PrepareImageBas;
            ::Desc._padding_._0_4_ = 0x23d;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(```FVariableRateShadingImageManager::PrepareImageBasedVRS'::__l34::<lambda_3>::
                   operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
                   _dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          local_a0._Myfirst._Val = &::Desc;
          local_b8.State = (FRDGScopeState *)param_1;
          this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                              ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
          param_1->_padding_ = (longlong)this_00;
          local_b8.Scope = this_00;
          TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
          Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_>_>
                    (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_a0);
          if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
            FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
            FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
          }
          local_a8 = '\x01';
        }
        FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"PrepareImageBasedVRS");
        bVar7 = -1 < CpuChannel->Enabled;
        if (bVar7) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId574,"PrepareImageBasedVRS",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\VariableRateShadingImageManager.cpp"
                     ,0x23e);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId574);
        }
        iVar11 = (**(code **)(*(longlong *)CVarVRSDebugForceRate._8_8_ + 200))();
        this->VRSForceRateForFrame = iVar11;
        pFVar13 = (this->ActiveGenerators).AllocatorInstance.Data;
        iVar11 = (this->ActiveGenerators).ArrayNum;
        pFVar2 = pFVar13 + (longlong)iVar11 * 8;
        while( true ) {
          if ((this->ActiveGenerators).ArrayNum != iVar11) {
            local_d7[0] = 0;
            `TCheckedPointerIterator<IVariableRateShadingImageGenerator_*,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_d7);
          }
          if (pFVar13 == pFVar2) break;
          plVar4 = *(longlong **)pFVar13;
          if (plVar4 != (longlong *)0x0) {
            pcVar5 = *(code **)(*plVar4 + 0x20);
            if (((param_2->Views).ArrayNum < 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            cVar8 = (*pcVar5)(plVar4,*(undefined8 *)(param_2->Views).AllocatorInstance.Data);
            if (cVar8 != '\0') {
              (**(code **)(*plVar4 + 0x10))
                        (plVar4,param_1,param_2,param_3,this->bHardwareVRSEnabledForFrame,
                         this->bSoftwareVRSEnabledForFrame);
            }
          }
          pFVar13 = pFVar13 + 8;
        }
        if (bVar7) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        FGenericPlatformMisc::EndNamedEvent();
        if (local_a8 != '\0') {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_b8);
        }
      }
    }
  }
  return;
}

// RegisterExternalImageGenerator @ 145783ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVariableRateShadingImageManager::RegisterExternalImageGenerator
          (FVariableRateShadingImageManager *this,IVariableRateShadingImageGenerator *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IVariableRateShadingImageGenerator *local_res10 [3];
  
  local_res10[0] = param_1;
  if (param_1 == (IVariableRateShadingImageGenerator *)0x0) {
    if (2 < (byte)LogVRS._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVRS);
      return;
    }
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)&this->GeneratorsMutex);
    pFVar2 = (this->ImageGenerators).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 <
        pFVar2 + (longlong)(this->ImageGenerators).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->ImageGenerators).ArrayNum;
    piVar1 = &(this->ImageGenerators).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ImageGenerators).AllocatorInstance,piVar1);
    }
    (this->ImageGenerators).ArrayNum = iVar5 + 1;
    *(IVariableRateShadingImageGenerator **)
     ((this->ImageGenerators).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res10[0];
    ReleaseSRWLockExclusive((PSRWLOCK)&this->GeneratorsMutex);
  }
  return;
}

// SetNeedStaticMeshUpdate @ 14578d1a0

void __thiscall
FVariableRateShadingImageManager::SetNeedStaticMeshUpdate
          (FVariableRateShadingImageManager *this,bool param_1)

{
  this->bNeedStaticMeshUpdate = param_1;
  return;
}

// UnregisterExternalImageGenerator @ 145794190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVariableRateShadingImageManager::UnregisterExternalImageGenerator
          (FVariableRateShadingImageManager *this,IVariableRateShadingImageGenerator *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  IVariableRateShadingImageGenerator *pIVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  IVariableRateShadingImageGenerator *local_res10;
  
  local_res10 = param_1;
  if (param_1 == (IVariableRateShadingImageGenerator *)0x0) {
    if (2 < (byte)LogVRS._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVRS);
      return;
    }
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)&this->GeneratorsMutex);
    pFVar2 = (this->ImageGenerators).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar2 + (longlong)(this->ImageGenerators).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->ImageGenerators).ArrayNum;
    if (iVar1 != 0) {
      iVar9 = 0;
      pFVar2 = (this->ImageGenerators).AllocatorInstance.Data;
      bVar4 = *(IVariableRateShadingImageGenerator **)pFVar2 != local_res10;
      lVar8 = 0;
      pIVar5 = local_res10;
      iVar6 = 0;
      do {
        iVar7 = iVar6;
        do {
          lVar8 = lVar8 + 1;
          iVar7 = iVar7 + 1;
          if (iVar1 <= lVar8) break;
        } while (bVar4 == (*(IVariableRateShadingImageGenerator **)(pFVar2 + lVar8 * 8) != pIVar5));
        if (bVar4 != false) {
          if (iVar9 != iVar6) {
            memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar6 * 8,
                    (longlong)(iVar7 - iVar6) << 3);
            pIVar5 = local_res10;
          }
          iVar9 = iVar9 + (iVar7 - iVar6);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar6 = iVar7;
      } while (lVar8 < iVar1);
      (this->ImageGenerators).ArrayNum = iVar9;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->GeneratorsMutex);
  }
  return;
}

// operator() @ 1504d2750

bool __thiscall
`FVariableRateShadingImageManager::PrepareImageBasedVRS'::__l29::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6967229933923861049>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6967229933923861049>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

