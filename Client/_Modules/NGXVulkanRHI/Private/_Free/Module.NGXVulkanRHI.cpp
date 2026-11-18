// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXVulkanRHI
// Functions: 11

// `dynamic_initializer_for_'LogDLSSNGXVulkanRHI'' @ 1413fe170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDLSSNGXVulkanRHI__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogDLSSNGXVulkanRHI,L"LogDLSSNGXVulkanRHI",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDLSSNGXVulkanRHI__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNGXVulkanRHI'' @ 1413fe1b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantNGXVulkanRHI__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NGXVulkanRHI";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NGXVulkanRHI",0xc);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNGXVulkanRHIModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14de19b80

void * __thiscall
FNGXVulkanRHIModule::_scalar_deleting_destructor_(FNGXVulkanRHIModule *this,uint param_1)

{
  *this = (FNGXVulkanRHIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// MakeShared<FVulkanNGXDLSSFeature,1,NVSDK_NGX_Handle_*_&,NVSDK_NGX_Parameter_*_&,FDLSSFeatureDesc,unsigned_int_&> @ 14de19bc0

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

TSharedRef<FVulkanNGXDLSSFeature,1> * __cdecl
MakeShared<FVulkanNGXDLSSFeature,1,NVSDK_NGX_Handle_*_&,NVSDK_NGX_Parameter_*_&,FDLSSFeatureDesc,unsigned_int_&>
          (TSharedRef<FVulkanNGXDLSSFeature,1> *__return_storage_ptr__,NVSDK_NGX_Handle **param_1,
          NVSDK_NGX_Parameter **param_2,FDLSSFeatureDesc *param_3,uint *param_4)

{
  atomic<int> aVar1;
  NVSDK_NGX_Parameter *pNVar2;
  NVSDK_NGX_Handle *pNVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<FVulkanNGXDLSSFeature,1> *pTVar8;
  
  pTVar7 = operator_new(0x70);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FVulkanNGXDLSSFeature *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFVulkanNGXDLSSFeature___00_SharedPointerInternals__6B_
    ;
    pNVar2 = *param_2;
    pNVar3 = *param_1;
    aVar1 = (atomic<int>)*param_4;
    pTVar7[1]._padding_ = (longlong)&___7NGXDLSSFeature__6B_;
    *(TIntPoint<int>_u_0 *)&pTVar7[1].SharedReferenceCount =
         (param_3->SrcRect).field0_0x0._s_0.Min.field0_0x0;
    pTVar7[2]._padding_ = (longlong)(param_3->SrcRect).field0_0x0._s_0.Max.field0_0x0;
    *(TIntPoint<int>_u_0 *)&pTVar7[2].SharedReferenceCount =
         (param_3->DestRect).field0_0x0._s_0.Min.field0_0x0;
    pTVar7[3]._padding_ = (longlong)(param_3->DestRect).field0_0x0._s_0.Max.field0_0x0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)param_3->DLSSPreset;
    pTVar7[3].WeakReferenceCount = (atomic<int>)param_3->DLSSRRPreset;
    *(int *)&pTVar7[4]._padding_ = param_3->PerfQuality;
    *(bool *)((longlong)&pTVar7[4]._padding_ + 4) = param_3->bHighResolutionMotionVectors;
    *(bool *)((longlong)&pTVar7[4]._padding_ + 5) = param_3->bUseAutoExposure;
    *(bool *)((longlong)&pTVar7[4]._padding_ + 6) = param_3->bEnableAlphaUpscaling;
    *(bool *)((longlong)&pTVar7[4]._padding_ + 7) = param_3->bReleaseMemoryOnDelete;
    pTVar7[4].SharedReferenceCount = (atomic<int>)param_3->GPUNode;
    pTVar7[4].WeakReferenceCount = (atomic<int>)param_3->GPUVisibility;
    *(ENGXDLSSDenoiserMode *)&pTVar7[5]._padding_ = param_3->DenoiserMode;
    *(NVSDK_NGX_Handle **)&pTVar7[5].SharedReferenceCount = pNVar3;
    pTVar7[6]._padding_ = (longlong)pNVar2;
    pTVar7[6].SharedReferenceCount = aVar1;
    *(undefined1 *)&pTVar7[6].WeakReferenceCount = 0;
    if (GIsRunningRHIInSeparateThread_InternalUseOnly != false) {
      bVar6 = IsInRHIThread();
      if (!bVar6) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("!IsRunningRHIInSeparateThread() || IsInRHIThread()",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Public\\NGXRHI.h"
                           ,0x12f,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TSharedRef<FVulkanNGXDLSSFeature,1> *)(*pcVar5)();
          return pTVar8;
        }
      }
    }
    lVar4._0_4_ = pTVar7[5].SharedReferenceCount;
    lVar4._4_4_ = pTVar7[5].WeakReferenceCount;
    if (lVar4 == 0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Feature",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Public\\NGXRHI.h"
                         ,0x130,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedRef<FVulkanNGXDLSSFeature,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
    if (pTVar7[6]._padding_ == 0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Parameter",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Public\\NGXRHI.h"
                         ,0x131,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedRef<FVulkanNGXDLSSFeature,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
    pTVar7[1]._padding_ = (longlong)&___7FVulkanNGXDLSSFeature__6B_;
    __return_storage_ptr__->Object = (FVulkanNGXDLSSFeature *)(pTVar7 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    if ((FVulkanNGXDLSSFeature *)(pTVar7 + 1) == (FVulkanNGXDLSSFeature *)0x0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedRef<FVulkanNGXDLSSFeature,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 14de1a4c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FVulkanNGXDLSSFeature,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FVulkanNGXDLSSFeature,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de1a500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FNGXVulkanRHI::_scalar_deleting_destructor_(FNGXVulkanRHI *this,uint param_1)

{
  bool bVar1;
  NVSDK_NGX_Result NVar2;
  VkDevice_T *pVVar3;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  this->_padding_ = (longlong)&___7FNGXVulkanRHI__6B_;
  if (4 < (byte)LogDLSSNGXVulkanRHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXVulkanRHI::~FNGXVulkanRHI",0x1d,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if (NGXRHI::bNGXInitialized != false) {
    NGXRHI::ReleaseAllocatedFeatures((NGXRHI *)this);
    if ((NVSDK_NGX_Parameter *)this->_padding_ != (NVSDK_NGX_Parameter *)0x0) {
      NVar2 = NVSDK_NGX_VULKAN_DestroyParameters((NVSDK_NGX_Parameter *)this->_padding_);
      if (4 < (byte)LogDLSSNGXVulkanRHI._0_1_) {
        GetNGXResultAsString(NVar2);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHI);
      }
    }
    bVar1 = NGXRHI::IsSafeToShutdownNGX((NGXRHI *)this);
    if (bVar1) {
      pVVar3 = (VkDevice_T *)(**(code **)(*(longlong *)this->VulkanRHI + 0x4d8))();
      NVar2 = NVSDK_NGX_VULKAN_Shutdown1(pVVar3);
      if (4 < (byte)LogDLSSNGXVulkanRHI._0_1_) {
        GetNGXResultAsString(NVar2);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHI);
      }
    }
    NGXRHI::bNGXInitialized = false;
  }
  if (4 < (byte)LogDLSSNGXVulkanRHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXVulkanRHI::~FNGXVulkanRHI",0x1d,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  NGXRHI::~NGXRHI((NGXRHI *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de1a6f0

void * __thiscall
FVulkanNGXDLSSFeature::_scalar_deleting_destructor_(FVulkanNGXDLSSFeature *this,uint param_1)

{
  ~FVulkanNGXDLSSFeature(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// NGX_VULKAN_EVALUATE_DLSSD_EXT @ 14de1c0c0

/* WARNING: Enum "VkFormat": Some values do not have unique names */

NVSDK_NGX_Result __cdecl
NGX_VULKAN_EVALUATE_DLSSD_EXT
          (VkCommandBuffer_T *param_1,NVSDK_NGX_Handle *param_2,NVSDK_NGX_Parameter *param_3,
          NVSDK_NGX_VK_DLSSD_Eval_Params *param_4)

{
  NVSDK_NGX_Resource_VK *pNVar1;
  NVSDK_NGX_Result NVar2;
  NVSDK_NGX_VK_GBuffer *pNVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  pNVar1 = param_4->pInColor;
  if ((((((pNVar1 == (NVSDK_NGX_Resource_VK *)0x0) ||
         (pNVar1->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
        ((param_4->pInAlpha == (NVSDK_NGX_Resource_VK *)0x0 ||
         (param_4->pInAlpha->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
       ((param_4->pInMotionVectors == (NVSDK_NGX_Resource_VK *)0x0 ||
        (param_4->pInMotionVectors->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
      ((param_4->pInOutput == (NVSDK_NGX_Resource_VK *)0x0 ||
       (param_4->pInOutput->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
     ((((((param_4->pInOutputAlpha == (NVSDK_NGX_Resource_VK *)0x0 ||
          (param_4->pInOutputAlpha->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
         ((param_4->pInDepth == (NVSDK_NGX_Resource_VK *)0x0 ||
          (param_4->pInDepth->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
        ((param_4->pInDiffuseAlbedo == (NVSDK_NGX_Resource_VK *)0x0 ||
         (param_4->pInDiffuseAlbedo->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
       ((param_4->pInSpecularAlbedo == (NVSDK_NGX_Resource_VK *)0x0 ||
        (param_4->pInSpecularAlbedo->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
      ((((param_4->pInTransparencyMask == (NVSDK_NGX_Resource_VK *)0x0 ||
         (param_4->pInTransparencyMask->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
        ((param_4->pInExposureTexture == (NVSDK_NGX_Resource_VK *)0x0 ||
         (param_4->pInExposureTexture->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
       ((param_4->pInBiasCurrentColorMask == (NVSDK_NGX_Resource_VK *)0x0 ||
        (param_4->pInBiasCurrentColorMask->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))))))) {
    uVar4 = 0;
    pNVar3 = &param_4->GBufferSurface;
    do {
      if ((pNVar3->pInAttrib[0] != (NVSDK_NGX_Resource_VK *)0x0) &&
         (pNVar3->pInAttrib[0]->Type != NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) {
        return NVSDK_NGX_Result_FAIL_InvalidParameter;
      }
      uVar4 = uVar4 + 1;
      pNVar3 = (NVSDK_NGX_VK_GBuffer *)(pNVar3->pInAttrib + 1);
    } while (uVar4 < 0x10);
    if ((((((((param_4->pInMotionVectors3D == (NVSDK_NGX_Resource_VK *)0x0) ||
             (param_4->pInMotionVectors3D->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
            ((param_4->pInIsParticleMask == (NVSDK_NGX_Resource_VK *)0x0 ||
             (param_4->pInIsParticleMask->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
           ((param_4->pInAnimatedTextureMask == (NVSDK_NGX_Resource_VK *)0x0 ||
            (param_4->pInAnimatedTextureMask->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
          ((param_4->pInDepthHighRes == (NVSDK_NGX_Resource_VK *)0x0 ||
           (param_4->pInDepthHighRes->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
         ((((param_4->pInPositionViewSpace == (NVSDK_NGX_Resource_VK *)0x0 ||
            (param_4->pInPositionViewSpace->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
           ((param_4->pInRayTracingHitDistance == (NVSDK_NGX_Resource_VK *)0x0 ||
            (param_4->pInRayTracingHitDistance->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW))))
          && (((param_4->pInMotionVectorsReflections == (NVSDK_NGX_Resource_VK *)0x0 ||
               (param_4->pInMotionVectorsReflections->Type ==
                NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
              ((param_4->pInReflectedAlbedo == (NVSDK_NGX_Resource_VK *)0x0 ||
               (param_4->pInReflectedAlbedo->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW))))))))
        && (((((((param_4->pInColorBeforeParticles == (NVSDK_NGX_Resource_VK *)0x0 ||
                 (param_4->pInColorBeforeParticles->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)
                 ) && ((param_4->pInColorAfterParticles == (NVSDK_NGX_Resource_VK *)0x0 ||
                       (param_4->pInColorAfterParticles->Type ==
                        NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
               (((param_4->pInColorBeforeTransparency == (NVSDK_NGX_Resource_VK *)0x0 ||
                 (param_4->pInColorBeforeTransparency->Type ==
                  NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
                ((param_4->pInColorAfterTransparency == (NVSDK_NGX_Resource_VK *)0x0 ||
                 (param_4->pInColorAfterTransparency->Type ==
                  NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))))) &&
              ((((param_4->pInColorBeforeFog == (NVSDK_NGX_Resource_VK *)0x0 ||
                 (param_4->pInColorBeforeFog->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
                ((param_4->pInColorAfterFog == (NVSDK_NGX_Resource_VK *)0x0 ||
                 (param_4->pInColorAfterFog->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
               ((param_4->pInScreenSpaceSubsurfaceScatteringGuide == (NVSDK_NGX_Resource_VK *)0x0 ||
                (param_4->pInScreenSpaceSubsurfaceScatteringGuide->Type ==
                 NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))))) &&
             ((param_4->pInColorBeforeScreenSpaceSubsurfaceScattering ==
               (NVSDK_NGX_Resource_VK *)0x0 ||
              (param_4->pInColorBeforeScreenSpaceSubsurfaceScattering->Type ==
               NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
            (((param_4->pInColorAfterScreenSpaceSubsurfaceScattering == (NVSDK_NGX_Resource_VK *)0x0
              || (param_4->pInColorAfterScreenSpaceSubsurfaceScattering->Type ==
                  NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
             ((param_4->pInScreenSpaceRefractionGuide == (NVSDK_NGX_Resource_VK *)0x0 ||
              (param_4->pInScreenSpaceRefractionGuide->Type ==
               NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))))))) &&
       (((((param_4->pInColorBeforeScreenSpaceRefraction == (NVSDK_NGX_Resource_VK *)0x0 ||
           (param_4->pInColorBeforeScreenSpaceRefraction->Type ==
            NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
          (((param_4->pInColorAfterScreenSpaceRefraction == (NVSDK_NGX_Resource_VK *)0x0 ||
            (param_4->pInColorAfterScreenSpaceRefraction->Type ==
             NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
           ((((param_4->pInDepthOfFieldGuide == (NVSDK_NGX_Resource_VK *)0x0 ||
              (param_4->pInDepthOfFieldGuide->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
             ((param_4->pInColorBeforeDepthOfField == (NVSDK_NGX_Resource_VK *)0x0 ||
              (param_4->pInColorBeforeDepthOfField->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)
              ))) && ((param_4->pInColorAfterDepthOfField == (NVSDK_NGX_Resource_VK *)0x0 ||
                      (param_4->pInColorAfterDepthOfField->Type ==
                       NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))))))) &&
         (((param_4->pInDiffuseHitDistance == (NVSDK_NGX_Resource_VK *)0x0 ||
           (param_4->pInDiffuseHitDistance->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
          ((((((param_4->pInSpecularHitDistance == (NVSDK_NGX_Resource_VK *)0x0 ||
               (param_4->pInSpecularHitDistance->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW))
              && ((param_4->pInDiffuseRayDirection == (NVSDK_NGX_Resource_VK *)0x0 ||
                  (param_4->pInDiffuseRayDirection->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)
                  ))) &&
             ((param_4->pInSpecularRayDirection == (NVSDK_NGX_Resource_VK *)0x0 ||
              (param_4->pInSpecularRayDirection->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW))))
            && ((param_4->pInDiffuseRayDirectionHitDistance == (NVSDK_NGX_Resource_VK *)0x0 ||
                (param_4->pInDiffuseRayDirectionHitDistance->Type ==
                 NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
           ((((param_4->pInSpecularRayDirectionHitDistance == (NVSDK_NGX_Resource_VK *)0x0 ||
              (param_4->pInSpecularRayDirectionHitDistance->Type ==
               NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
             ((param_4->pInTransparencyLayer == (NVSDK_NGX_Resource_VK *)0x0 ||
              (param_4->pInTransparencyLayer->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
            ((param_4->pInTransparencyLayerOpacity == (NVSDK_NGX_Resource_VK *)0x0 ||
             (param_4->pInTransparencyLayerOpacity->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)
             ))))))))) &&
        (((param_4->pInTransparencyLayerMvecs == (NVSDK_NGX_Resource_VK *)0x0 ||
          (param_4->pInTransparencyLayerMvecs->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
         ((param_4->pInDisocclusionMask == (NVSDK_NGX_Resource_VK *)0x0 ||
          (param_4->pInDisocclusionMask->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))))))) {
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"Color",pNVar1);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"Output",param_4->pInOutput);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"Depth",param_4->pInDepth);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"MotionVectors",param_4->pInMotionVectors);
      NVSDK_NGX_Parameter_SetF(param_3,"Jitter.Offset.X",param_4->InJitterOffsetX);
      NVSDK_NGX_Parameter_SetF(param_3,"Jitter.Offset.Y",param_4->InJitterOffsetY);
      NVSDK_NGX_Parameter_SetI(param_3,"Reset",param_4->InReset);
      fVar6 = __real_3f800000;
      fVar5 = param_4->InMVScaleX;
      if (param_4->InMVScaleX == 0.0) {
        fVar5 = __real_3f800000;
      }
      NVSDK_NGX_Parameter_SetF(param_3,"MV.Scale.X",fVar5);
      fVar5 = param_4->InMVScaleY;
      if (param_4->InMVScaleY == 0.0) {
        fVar5 = fVar6;
      }
      NVSDK_NGX_Parameter_SetF(param_3,"MV.Scale.Y",fVar5);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"TransparencyMask",param_4->pInTransparencyMask);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"ExposureTexture",param_4->pInExposureTexture);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSS.Input.Bias.Current.Color.Mask",param_4->pInBiasCurrentColorMask);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Albedo",(param_4->GBufferSurface).pInAttrib[0]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Roughness",(param_4->GBufferSurface).pInAttrib[1]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Metallic",(param_4->GBufferSurface).pInAttrib[2]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Specular",(param_4->GBufferSurface).pInAttrib[3]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Subsurface",(param_4->GBufferSurface).pInAttrib[4]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Normals",(param_4->GBufferSurface).pInAttrib[5]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.ShadingModelId",(param_4->GBufferSurface).pInAttrib[6]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.MaterialId",(param_4->GBufferSurface).pInAttrib[7]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Attrib.8",(param_4->GBufferSurface).pInAttrib[8]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Attrib.9",(param_4->GBufferSurface).pInAttrib[9]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.SpecularMvec",param_4->pInMotionVectorsReflections);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Attrib.11",(param_4->GBufferSurface).pInAttrib[0xb]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Attrib.12",(param_4->GBufferSurface).pInAttrib[0xc]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Attrib.13",(param_4->GBufferSurface).pInAttrib[0xd]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Attrib.14",(param_4->GBufferSurface).pInAttrib[0xe]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Attrib.15",(param_4->GBufferSurface).pInAttrib[0xf]);
      NVSDK_NGX_Parameter_SetUI(param_3,"TonemapperType",param_4->InToneMapperType);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"MotionVectors3D",param_4->pInMotionVectors3D);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"IsParticleMask",param_4->pInIsParticleMask);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"AnimatedTextureMask",param_4->pInAnimatedTextureMask);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"DepthHighRes",param_4->pInDepthHighRes);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"Position.ViewSpace",param_4->pInPositionViewSpace)
      ;
      NVSDK_NGX_Parameter_SetF(param_3,"FrameTimeDeltaInMsec",param_4->InFrameTimeDeltaInMsec);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"RayTracingHitDistance",param_4->pInRayTracingHitDistance);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Color.Subrect.Base.X",(param_4->InColorSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Color.Subrect.Base.Y",(param_4->InColorSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Depth.Subrect.Base.X",(param_4->InDepthSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Depth.Subrect.Base.Y",(param_4->InDepthSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Input.MV.Subrect.Base.X",(param_4->InMVSubrectBase).X)
      ;
      NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Input.MV.Subrect.Base.Y",(param_4->InMVSubrectBase).Y)
      ;
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Translucency.Subrect.Base.X",
                 (param_4->InTranslucencySubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Translucency.Subrect.Base.Y",
                 (param_4->InTranslucencySubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Bias.Current.Color.Subrect.Base.X",
                 (param_4->InBiasCurrentColorSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Bias.Current.Color.Subrect.Base.Y",
                 (param_4->InBiasCurrentColorSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Output.Subrect.Base.X",(param_4->InOutputSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Output.Subrect.Base.Y",(param_4->InOutputSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Render.Subrect.Dimensions.Width",
                 (param_4->InRenderSubrectDimensions).Width);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Render.Subrect.Dimensions.Height",
                 (param_4->InRenderSubrectDimensions).Height);
      fVar5 = param_4->InPreExposure;
      if (param_4->InPreExposure == 0.0) {
        fVar5 = fVar6;
      }
      NVSDK_NGX_Parameter_SetF(param_3,"DLSS.Pre.Exposure",fVar5);
      if (param_4->InExposureScale != 0.0) {
        fVar6 = param_4->InExposureScale;
      }
      NVSDK_NGX_Parameter_SetF(param_3,"DLSS.Exposure.Scale",fVar6);
      NVSDK_NGX_Parameter_SetI
                (param_3,"DLSS.Indicator.Invert.X.Axis",param_4->InIndicatorInvertXAxis);
      NVSDK_NGX_Parameter_SetI
                (param_3,"DLSS.Indicator.Invert.Y.Axis",param_4->InIndicatorInvertYAxis);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Emissive",(param_4->GBufferSurface).pInAttrib[0xc]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSS.Input.DiffuseAlbedo",param_4->pInDiffuseAlbedo);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSS.Input.SpecularAlbedo",param_4->pInSpecularAlbedo);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"GBuffer.Normals",param_4->pInNormals);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"GBuffer.Roughness",param_4->pInRoughness);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.DiffuseAlbedo.Subrect.Base.X",
                 (param_4->InDiffuseAlbedoSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.DiffuseAlbedo.Subrect.Base.Y",
                 (param_4->InDiffuseAlbedoSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.SpecularAlbedo.Subrect.Base.X",
                 (param_4->InSpecularAlbedoSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.SpecularAlbedo.Subrect.Base.Y",
                 (param_4->InSpecularAlbedoSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Normals.Subrect.Base.X",(param_4->InNormalsSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Normals.Subrect.Base.Y",(param_4->InNormalsSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Roughness.Subrect.Base.X",(param_4->InRoughnessSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Roughness.Subrect.Base.Y",(param_4->InRoughnessSubrectBase).Y);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"DLSSD.Alpha",param_4->pInAlpha);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"DLSSD.OutputAlpha",param_4->pInOutputAlpha);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.ReflectedAlbedo",param_4->pInReflectedAlbedo);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.ColorBeforeParticles",param_4->pInColorBeforeParticles);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.ColorAfterParticles",param_4->pInColorAfterParticles);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.ColorBeforeTransparency",param_4->pInColorBeforeTransparency);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.ColorAfterTransparency",param_4->pInColorAfterTransparency);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"DLSSD.ColorBeforeFog",param_4->pInColorBeforeFog);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"DLSSD.ColorAfterFog",param_4->pInColorAfterFog);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide",
                 param_4->pInScreenSpaceSubsurfaceScatteringGuide);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering",
                 param_4->pInColorBeforeScreenSpaceSubsurfaceScattering);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering",
                 param_4->pInColorAfterScreenSpaceSubsurfaceScattering);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.ScreenSpaceRefractionGuide",param_4->pInScreenSpaceRefractionGuide);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.ColorBeforeScreenSpaceRefraction",
                 param_4->pInColorBeforeScreenSpaceRefraction);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.ColorAfterScreenSpaceRefraction",
                 param_4->pInColorAfterScreenSpaceRefraction);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.DepthOfFieldGuide",param_4->pInDepthOfFieldGuide);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.ColorBeforeDepthOfField",param_4->pInColorBeforeDepthOfField);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.ColorAfterDepthOfField",param_4->pInColorAfterDepthOfField);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.DiffuseHitDistance",param_4->pInDiffuseHitDistance);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.SpecularHitDistance",param_4->pInSpecularHitDistance);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.DiffuseRayDirection",param_4->pInDiffuseRayDirection);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.SpecularRayDirection",param_4->pInSpecularRayDirection);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.DiffuseRayDirectionHitDistance",
                 param_4->pInDiffuseRayDirectionHitDistance);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSSD.SpecularRayDirectionHitDistance",
                 param_4->pInSpecularRayDirectionHitDistance);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.Alpha.Subrect.Base.X",(param_4->InAlphaSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.Alpha.Subrect.Base.Y",(param_4->InAlphaSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.OutputAlpha.Subrect.Base.X",(param_4->InOutputAlphaSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.OutputAlpha.Subrect.Base.Y",(param_4->InOutputAlphaSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ReflectedAlbedo.Subrect.Base.X",
                 (param_4->InReflectedAlbedoSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ReflectedAlbedo.Subrect.Base.Y",
                 (param_4->InReflectedAlbedoSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorBeforeParticles.Subrect.Base.X",
                 (param_4->InColorBeforeParticlesSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorBeforeParticles.Subrect.Base.Y",
                 (param_4->InColorBeforeParticlesSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorAfterParticles.Subrect.Base.X",
                 (param_4->InColorAfterParticlesSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorAfterParticles.Subrect.Base.Y",
                 (param_4->InColorAfterParticlesSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorBeforeTransparency.Subrect.Base.X",
                 (param_4->InColorBeforeTransparencySubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorBeforeTransparency.Subrect.Base.Y",
                 (param_4->InColorBeforeTransparencySubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorAfterTransparency.Subrect.Base.X",
                 (param_4->InColorAfterTransparencySubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorAfterTransparency.Subrect.Base.Y",
                 (param_4->InColorAfterTransparencySubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorBeforeFog.Subrect.Base.X",
                 (param_4->InColorBeforeFogSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorBeforeFog.Subrect.Base.Y",
                 (param_4->InColorBeforeFogSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorAfterFog.Subrect.Base.X",
                 (param_4->InColorAfterFogSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorAfterFog.Subrect.Base.Y",
                 (param_4->InColorAfterFogSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide.Subrect.Base.X",
                 (param_4->InScreenSpaceSubsurfaceScatteringGuideSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide.Subrect.Base.Y",
                 (param_4->InScreenSpaceSubsurfaceScatteringGuideSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering.Subrect.Base.X",
                 (param_4->InColorBeforeScreenSpaceSubsurfaceScatteringSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering.Subrect.Base.Y",
                 (param_4->InColorBeforeScreenSpaceSubsurfaceScatteringSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering.Subrect.Base.X",
                 (param_4->InColorAfterScreenSpaceSubsurfaceScatteringSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering.Subrect.Base.Y",
                 (param_4->InColorAfterScreenSpaceSubsurfaceScatteringSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ScreenSpaceRefractionGuide.Subrect.Base.X",
                 (param_4->InScreenSpaceRefractionGuideSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ScreenSpaceRefractionGuide.Subrect.Base.Y",
                 (param_4->InScreenSpaceRefractionGuideSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorBeforeScreenSpaceRefraction.Subrect.Base.X",
                 (param_4->InColorBeforeScreenSpaceRefractionSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorBeforeScreenSpaceRefraction.Subrect.Base.Y",
                 (param_4->InColorBeforeScreenSpaceRefractionSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorAfterScreenSpaceRefraction.Subrect.Base.X",
                 (param_4->InColorAfterScreenSpaceRefractionSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorAfterScreenSpaceRefraction.Subrect.Base.Y",
                 (param_4->InColorAfterScreenSpaceRefractionSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.DepthOfFieldGuide.Subrect.Base.X",
                 (param_4->InDepthOfFieldGuideSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.DepthOfFieldGuide.Subrect.Base.Y",
                 (param_4->InDepthOfFieldGuideSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorBeforeDepthOfField.Subrect.Base.X",
                 (param_4->InColorBeforeDepthOfFieldSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorBeforeDepthOfField.Subrect.Base.Y",
                 (param_4->InColorBeforeDepthOfFieldSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorAfterDepthOfField.Subrect.Base.X",
                 (param_4->InColorAfterDepthOfFieldSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.ColorAfterDepthOfField.Subrect.Base.Y",
                 (param_4->InColorAfterDepthOfFieldSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.DiffuseHitDistance.Subrect.Base.X",
                 (param_4->InDiffuseHitDistanceSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.DiffuseHitDistance.Subrect.Base.Y",
                 (param_4->InDiffuseHitDistanceSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.SpecularHitDistance.Subrect.Base.X",
                 (param_4->InSpecularHitDistanceSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.SpecularHitDistance.Subrect.Base.Y",
                 (param_4->InSpecularHitDistanceSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.DiffuseRayDirection.Subrect.Base.X",
                 (param_4->InDiffuseRayDirectionSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.DiffuseRayDirection.Subrect.Base.Y",
                 (param_4->InDiffuseRayDirectionSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.SpecularRayDirection.Subrect.Base.X",
                 (param_4->InSpecularRayDirectionSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.SpecularRayDirection.Subrect.Base.Y",
                 (param_4->InSpecularRayDirectionSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.DiffuseRayDirectionHitDistance.Subrect.Base.X",
                 (param_4->InDiffuseRayDirectionHitDistanceSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.DiffuseRayDirectionHitDistance.Subrect.Base.Y",
                 (param_4->InDiffuseRayDirectionHitDistanceSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.SpecularRayDirectionHitDistance.Subrect.Base.X",
                 (param_4->InSpecularRayDirectionHitDistanceSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSSD.SpecularRayDirectionHitDistance.Subrect.Base.Y",
                 (param_4->InSpecularRayDirectionHitDistanceSubrectBase).Y);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"WorldToViewMatrix",param_4->pInWorldToViewMatrix);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"ViewToClipMatrix",param_4->pInViewToClipMatrix);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSS.TransparencyLayer",param_4->pInTransparencyLayer);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSS.TransparencyLayerOpacity",param_4->pInTransparencyLayerOpacity);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSS.TransparencyLayerMvecs",param_4->pInTransparencyLayerMvecs);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSS.DisocclusionMask",param_4->pInDisocclusionMask);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.TransparencyLayer.Subrect.Base.X",
                 (param_4->InTransparencyLayerSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.TransparencyLayer.Subrect.Base.Y",
                 (param_4->InTransparencyLayerSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.TransparencyLayerOpacity.Subrect.Base.X",
                 (param_4->InTransparencyLayerOpacitySubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.TransparencyLayerOpacity.Subrect.Base.Y",
                 (param_4->InTransparencyLayerOpacitySubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.TransparencyLayerMvecs.Subrect.Base.X",
                 (param_4->InTransparencyLayerMvecsSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.TransparencyLayerMvecs.Subrect.Base.Y",
                 (param_4->InTransparencyLayerMvecsSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.DisocclusionMask.Subrect.Base.X",
                 (param_4->InDisocclusionMaskSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.DisocclusionMask.Subrect.Base.Y",
                 (param_4->InDisocclusionMaskSubrectBase).Y);
      NVar2 = NVSDK_NGX_VULKAN_EvaluateFeature_C
                        (param_1,param_2,param_3,(_func___cdecl_void_float_bool_ptr *)0x0);
      return NVar2;
    }
  }
  return NVSDK_NGX_Result_FAIL_InvalidParameter;
}

// NGX_VULKAN_EVALUATE_DLSS_EXT @ 14de1d210

/* WARNING: Enum "VkFormat": Some values do not have unique names */

NVSDK_NGX_Result __cdecl
NGX_VULKAN_EVALUATE_DLSS_EXT
          (VkCommandBuffer_T *param_1,NVSDK_NGX_Handle *param_2,NVSDK_NGX_Parameter *param_3,
          NVSDK_NGX_VK_DLSS_Eval_Params *param_4)

{
  NVSDK_NGX_Resource_VK *pNVar1;
  NVSDK_NGX_Resource_VK *pNVar2;
  NVSDK_NGX_Result NVar3;
  NVSDK_NGX_VK_GBuffer *pNVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  
  pNVar1 = (param_4->Feature).pInColor;
  if ((((((pNVar1 == (NVSDK_NGX_Resource_VK *)0x0) ||
         (pNVar1->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
        ((param_4->pInMotionVectors == (NVSDK_NGX_Resource_VK *)0x0 ||
         (param_4->pInMotionVectors->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
       ((pNVar2 = (param_4->Feature).pInOutput, pNVar2 == (NVSDK_NGX_Resource_VK *)0x0 ||
        (pNVar2->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
      (((param_4->pInDepth == (NVSDK_NGX_Resource_VK *)0x0 ||
        (param_4->pInDepth->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
       (((param_4->pInTransparencyMask == (NVSDK_NGX_Resource_VK *)0x0 ||
         (param_4->pInTransparencyMask->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
        ((param_4->pInExposureTexture == (NVSDK_NGX_Resource_VK *)0x0 ||
         (param_4->pInExposureTexture->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))))))) &&
     ((param_4->pInBiasCurrentColorMask == (NVSDK_NGX_Resource_VK *)0x0 ||
      (param_4->pInBiasCurrentColorMask->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) {
    uVar5 = 0;
    pNVar4 = &param_4->GBufferSurface;
    do {
      if ((pNVar4->pInAttrib[0] != (NVSDK_NGX_Resource_VK *)0x0) &&
         (pNVar4->pInAttrib[0]->Type != NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) {
        return NVSDK_NGX_Result_FAIL_InvalidParameter;
      }
      uVar5 = uVar5 + 1;
      pNVar4 = (NVSDK_NGX_VK_GBuffer *)(pNVar4->pInAttrib + 1);
    } while (uVar5 < 0x10);
    if (((((param_4->pInMotionVectors3D == (NVSDK_NGX_Resource_VK *)0x0) ||
          (param_4->pInMotionVectors3D->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
         ((param_4->pInIsParticleMask == (NVSDK_NGX_Resource_VK *)0x0 ||
          (param_4->pInIsParticleMask->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
        (((param_4->pInAnimatedTextureMask == (NVSDK_NGX_Resource_VK *)0x0 ||
          (param_4->pInAnimatedTextureMask->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
         ((param_4->pInDepthHighRes == (NVSDK_NGX_Resource_VK *)0x0 ||
          (param_4->pInDepthHighRes->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))))) &&
       ((((param_4->pInPositionViewSpace == (NVSDK_NGX_Resource_VK *)0x0 ||
          (param_4->pInPositionViewSpace->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)) &&
         ((param_4->pInRayTracingHitDistance == (NVSDK_NGX_Resource_VK *)0x0 ||
          (param_4->pInRayTracingHitDistance->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))) &&
        ((param_4->pInMotionVectorsReflections == (NVSDK_NGX_Resource_VK *)0x0 ||
         (param_4->pInMotionVectorsReflections->Type == NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW)))))
       ) {
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"Color",pNVar1);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"Output",(param_4->Feature).pInOutput);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"Depth",param_4->pInDepth);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"MotionVectors",param_4->pInMotionVectors);
      NVSDK_NGX_Parameter_SetF(param_3,"Jitter.Offset.X",param_4->InJitterOffsetX);
      NVSDK_NGX_Parameter_SetF(param_3,"Jitter.Offset.Y",param_4->InJitterOffsetY);
      NVSDK_NGX_Parameter_SetF(param_3,"Sharpness",(param_4->Feature).InSharpness);
      NVSDK_NGX_Parameter_SetI(param_3,"Reset",param_4->InReset);
      fVar7 = __real_3f800000;
      fVar6 = param_4->InMVScaleX;
      if (param_4->InMVScaleX == 0.0) {
        fVar6 = __real_3f800000;
      }
      NVSDK_NGX_Parameter_SetF(param_3,"MV.Scale.X",fVar6);
      fVar6 = param_4->InMVScaleY;
      if (param_4->InMVScaleY == 0.0) {
        fVar6 = fVar7;
      }
      NVSDK_NGX_Parameter_SetF(param_3,"MV.Scale.Y",fVar6);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"TransparencyMask",param_4->pInTransparencyMask);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"ExposureTexture",param_4->pInExposureTexture);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"DLSS.Input.Bias.Current.Color.Mask",param_4->pInBiasCurrentColorMask);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Albedo",(param_4->GBufferSurface).pInAttrib[0]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Roughness",(param_4->GBufferSurface).pInAttrib[1]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Metallic",(param_4->GBufferSurface).pInAttrib[2]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Specular",(param_4->GBufferSurface).pInAttrib[3]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Subsurface",(param_4->GBufferSurface).pInAttrib[4]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Normals",(param_4->GBufferSurface).pInAttrib[5]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.ShadingModelId",(param_4->GBufferSurface).pInAttrib[6]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.MaterialId",(param_4->GBufferSurface).pInAttrib[7]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Attrib.8",(param_4->GBufferSurface).pInAttrib[8]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Attrib.9",(param_4->GBufferSurface).pInAttrib[9]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Attrib.10",(param_4->GBufferSurface).pInAttrib[10]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Attrib.11",(param_4->GBufferSurface).pInAttrib[0xb]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Attrib.12",(param_4->GBufferSurface).pInAttrib[0xc]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Attrib.13",(param_4->GBufferSurface).pInAttrib[0xd]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Attrib.14",(param_4->GBufferSurface).pInAttrib[0xe]);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"GBuffer.Attrib.15",(param_4->GBufferSurface).pInAttrib[0xf]);
      NVSDK_NGX_Parameter_SetUI(param_3,"TonemapperType",param_4->InToneMapperType);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"MotionVectors3D",param_4->pInMotionVectors3D);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"IsParticleMask",param_4->pInIsParticleMask);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"AnimatedTextureMask",param_4->pInAnimatedTextureMask);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"DepthHighRes",param_4->pInDepthHighRes);
      NVSDK_NGX_Parameter_SetVoidPointer(param_3,"Position.ViewSpace",param_4->pInPositionViewSpace)
      ;
      NVSDK_NGX_Parameter_SetF(param_3,"FrameTimeDeltaInMsec",param_4->InFrameTimeDeltaInMsec);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"RayTracingHitDistance",param_4->pInRayTracingHitDistance);
      NVSDK_NGX_Parameter_SetVoidPointer
                (param_3,"MotionVectorsReflection",param_4->pInMotionVectorsReflections);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Color.Subrect.Base.X",(param_4->InColorSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Color.Subrect.Base.Y",(param_4->InColorSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Depth.Subrect.Base.X",(param_4->InDepthSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Depth.Subrect.Base.Y",(param_4->InDepthSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Input.MV.Subrect.Base.X",(param_4->InMVSubrectBase).X)
      ;
      NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Input.MV.Subrect.Base.Y",(param_4->InMVSubrectBase).Y)
      ;
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Translucency.Subrect.Base.X",
                 (param_4->InTranslucencySubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Translucency.Subrect.Base.Y",
                 (param_4->InTranslucencySubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Bias.Current.Color.Subrect.Base.X",
                 (param_4->InBiasCurrentColorSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Input.Bias.Current.Color.Subrect.Base.Y",
                 (param_4->InBiasCurrentColorSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Output.Subrect.Base.X",(param_4->InOutputSubrectBase).X);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Output.Subrect.Base.Y",(param_4->InOutputSubrectBase).Y);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Render.Subrect.Dimensions.Width",
                 (param_4->InRenderSubrectDimensions).Width);
      NVSDK_NGX_Parameter_SetUI
                (param_3,"DLSS.Render.Subrect.Dimensions.Height",
                 (param_4->InRenderSubrectDimensions).Height);
      fVar6 = param_4->InPreExposure;
      if (param_4->InPreExposure == 0.0) {
        fVar6 = fVar7;
      }
      NVSDK_NGX_Parameter_SetF(param_3,"DLSS.Pre.Exposure",fVar6);
      if (param_4->InExposureScale != 0.0) {
        fVar7 = param_4->InExposureScale;
      }
      NVSDK_NGX_Parameter_SetF(param_3,"DLSS.Exposure.Scale",fVar7);
      NVSDK_NGX_Parameter_SetI
                (param_3,"DLSS.Indicator.Invert.X.Axis",param_4->InIndicatorInvertXAxis);
      NVSDK_NGX_Parameter_SetI
                (param_3,"DLSS.Indicator.Invert.Y.Axis",param_4->InIndicatorInvertYAxis);
      NVar3 = NVSDK_NGX_VULKAN_EvaluateFeature_C
                        (param_1,param_2,param_3,(_func___cdecl_void_float_bool_ptr *)0x0);
      return NVar3;
    }
  }
  return NVSDK_NGX_Result_FAIL_InvalidParameter;
}

// IMPLEMENT_MODULE_NGXVulkanRHI @ 14de1d870

void __cdecl IMPLEMENT_MODULE_NGXVulkanRHI(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogDLSSNGXVulkanRHI'' @ 15045ef50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDLSSNGXVulkanRHI__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDLSSNGXVulkanRHI);
  return;
}

