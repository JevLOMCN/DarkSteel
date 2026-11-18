// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXD3D11RHI
// Functions: 12

// `dynamic_initializer_for_'LogDLSSNGXD3D11RHI'' @ 1413fe050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDLSSNGXD3D11RHI__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogDLSSNGXD3D11RHI,L"LogDLSSNGXD3D11RHI",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDLSSNGXD3D11RHI__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNGXD3D11RHI'' @ 1413fe090

void __cdecl _dynamic_initializer_for__ModuleRegistrantNGXD3D11RHI__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NGXD3D11RHI";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NGXD3D11RHI",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNGXD3D11RHIModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14de12620

void * __thiscall INGXRHIModule::_scalar_deleting_destructor_(INGXRHIModule *this,uint param_1)

{
  *this = (INGXRHIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de12710

void * __thiscall
FNGXD3D11RHIModule::_scalar_deleting_destructor_(FNGXD3D11RHIModule *this,uint param_1)

{
  *this = (FNGXD3D11RHIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// MakeShared<FD3D11NGXFeatureHandle,1,NVSDK_NGX_Handle_*_&,NVSDK_NGX_Parameter_*_&,FDLSSFeatureDesc,unsigned_int_&> @ 14de12750

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

TSharedRef<FD3D11NGXFeatureHandle,1> * __cdecl
MakeShared<FD3D11NGXFeatureHandle,1,NVSDK_NGX_Handle_*_&,NVSDK_NGX_Parameter_*_&,FDLSSFeatureDesc,unsigned_int_&>
          (TSharedRef<FD3D11NGXFeatureHandle,1> *__return_storage_ptr__,NVSDK_NGX_Handle **param_1,
          NVSDK_NGX_Parameter **param_2,FDLSSFeatureDesc *param_3,uint *param_4)

{
  atomic<int> aVar1;
  NVSDK_NGX_Parameter *pNVar2;
  NVSDK_NGX_Handle *pNVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<FD3D11NGXFeatureHandle,1> *pTVar8;
  
  pTVar7 = operator_new(0x70);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FD3D11NGXFeatureHandle *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFD3D11NGXFeatureHandle___00_SharedPointerInternals__6B_
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
          pTVar8 = (TSharedRef<FD3D11NGXFeatureHandle,1> *)(*pcVar5)();
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
        pTVar8 = (TSharedRef<FD3D11NGXFeatureHandle,1> *)(*pcVar5)();
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
        pTVar8 = (TSharedRef<FD3D11NGXFeatureHandle,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
    pTVar7[1]._padding_ = (longlong)&___7FD3D11NGXFeatureHandle__6B_;
    __return_storage_ptr__->Object = (FD3D11NGXFeatureHandle *)(pTVar7 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    if ((FD3D11NGXFeatureHandle *)(pTVar7 + 1) == (FD3D11NGXFeatureHandle *)0x0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedRef<FD3D11NGXFeatureHandle,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 14de13070

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FD3D11NGXFeatureHandle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FD3D11NGXFeatureHandle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de130b0

void * __thiscall
FD3D11NGXFeatureHandle::_scalar_deleting_destructor_(FD3D11NGXFeatureHandle *this,uint param_1)

{
  ~FD3D11NGXFeatureHandle(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de130f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FNGXD3D11RHI::_scalar_deleting_destructor_(FNGXD3D11RHI *this,uint param_1)

{
  bool bVar1;
  NVSDK_NGX_Result NVar2;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  this->_padding_ = (longlong)&___7FNGXD3D11RHI__6B_;
  if (4 < (byte)LogDLSSNGXD3D11RHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXD3D11RHI::~FNGXD3D11RHI",0x1b,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D11RHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if (NGXRHI::bNGXInitialized != false) {
    NGXRHI::ReleaseAllocatedFeatures((NGXRHI *)this);
    if ((NVSDK_NGX_Parameter *)this->_padding_ != (NVSDK_NGX_Parameter *)0x0) {
      NVar2 = NVSDK_NGX_D3D11_DestroyParameters((NVSDK_NGX_Parameter *)this->_padding_);
      if (4 < (byte)LogDLSSNGXD3D11RHI._0_1_) {
        GetNGXResultAsString(NVar2);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D11RHI);
      }
    }
    bVar1 = NGXRHI::IsSafeToShutdownNGX((NGXRHI *)this);
    if (bVar1) {
      NVar2 = NVSDK_NGX_D3D11_Shutdown1(this->Direct3DDevice);
      if (4 < (byte)LogDLSSNGXD3D11RHI._0_1_) {
        GetNGXResultAsString(NVar2);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D11RHI);
      }
    }
    NGXRHI::bNGXInitialized = false;
  }
  if (4 < (byte)LogDLSSNGXD3D11RHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXD3D11RHI::~FNGXD3D11RHI",0x1b,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D11RHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  NGXRHI::~NGXRHI((NGXRHI *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// NGX_D3D11_EVALUATE_DLSSD_EXT @ 14de14af0

NVSDK_NGX_Result __cdecl
NGX_D3D11_EVALUATE_DLSSD_EXT
          (ID3D11DeviceContext *param_1,NVSDK_NGX_Handle *param_2,NVSDK_NGX_Parameter *param_3,
          NVSDK_NGX_D3D11_DLSSD_Eval_Params *param_4)

{
  NVSDK_NGX_Result NVar1;
  float fVar2;
  float fVar3;
  
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"Color",param_4->pInColor);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"Output",param_4->pInOutput);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"Depth",param_4->pInDepth);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"MotionVectors",param_4->pInMotionVectors);
  NVSDK_NGX_Parameter_SetF(param_3,"Jitter.Offset.X",param_4->InJitterOffsetX);
  NVSDK_NGX_Parameter_SetF(param_3,"Jitter.Offset.Y",param_4->InJitterOffsetY);
  NVSDK_NGX_Parameter_SetI(param_3,"Reset",param_4->InReset);
  fVar3 = __real_3f800000;
  fVar2 = param_4->InMVScaleX;
  if (param_4->InMVScaleX == 0.0) {
    fVar2 = __real_3f800000;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"MV.Scale.X",fVar2);
  fVar2 = param_4->InMVScaleY;
  if (param_4->InMVScaleY == 0.0) {
    fVar2 = fVar3;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"MV.Scale.Y",fVar2);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"TransparencyMask",param_4->pInTransparencyMask);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"ExposureTexture",param_4->pInExposureTexture);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSS.Input.Bias.Current.Color.Mask",param_4->pInBiasCurrentColorMask);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Albedo",(param_4->GBufferSurface).pInAttrib[0]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Roughness",(param_4->GBufferSurface).pInAttrib[1]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Metallic",(param_4->GBufferSurface).pInAttrib[2]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Specular",(param_4->GBufferSurface).pInAttrib[3]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Subsurface",(param_4->GBufferSurface).pInAttrib[4]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Normals",(param_4->GBufferSurface).pInAttrib[5]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.ShadingModelId",(param_4->GBufferSurface).pInAttrib[6]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.MaterialId",(param_4->GBufferSurface).pInAttrib[7]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Attrib.8",(param_4->GBufferSurface).pInAttrib[8]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Attrib.9",(param_4->GBufferSurface).pInAttrib[9]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.SpecularMvec",param_4->pInMotionVectorsReflections);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Attrib.11",(param_4->GBufferSurface).pInAttrib[0xb]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Attrib.12",(param_4->GBufferSurface).pInAttrib[0xc]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Attrib.13",(param_4->GBufferSurface).pInAttrib[0xd]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Attrib.14",(param_4->GBufferSurface).pInAttrib[0xe]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Attrib.15",(param_4->GBufferSurface).pInAttrib[0xf]);
  NVSDK_NGX_Parameter_SetUI(param_3,"TonemapperType",param_4->InToneMapperType);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"MotionVectors3D",param_4->pInMotionVectors3D);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"IsParticleMask",param_4->pInIsParticleMask);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"AnimatedTextureMask",param_4->pInAnimatedTextureMask);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"DepthHighRes",param_4->pInDepthHighRes);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"Position.ViewSpace",param_4->pInPositionViewSpace);
  NVSDK_NGX_Parameter_SetF(param_3,"FrameTimeDeltaInMsec",param_4->InFrameTimeDeltaInMsec);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"RayTracingHitDistance",param_4->pInRayTracingHitDistance);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Color.Subrect.Base.X",(param_4->InColorSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Color.Subrect.Base.Y",(param_4->InColorSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Depth.Subrect.Base.X",(param_4->InDepthSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Depth.Subrect.Base.Y",(param_4->InDepthSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Input.MV.Subrect.Base.X",(param_4->InMVSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Input.MV.Subrect.Base.Y",(param_4->InMVSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Translucency.Subrect.Base.X",(param_4->InTranslucencySubrectBase).X
            );
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Translucency.Subrect.Base.Y",(param_4->InTranslucencySubrectBase).Y
            );
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Bias.Current.Color.Subrect.Base.X",
             (param_4->InBiasCurrentColorSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Bias.Current.Color.Subrect.Base.Y",
             (param_4->InBiasCurrentColorSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Output.Subrect.Base.X",(param_4->InOutputSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Output.Subrect.Base.Y",(param_4->InOutputSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Render.Subrect.Dimensions.Width",
             (param_4->InRenderSubrectDimensions).Width);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Render.Subrect.Dimensions.Height",
             (param_4->InRenderSubrectDimensions).Height);
  fVar2 = param_4->InPreExposure;
  if (param_4->InPreExposure == 0.0) {
    fVar2 = fVar3;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"DLSS.Pre.Exposure",fVar2);
  if (param_4->InExposureScale != 0.0) {
    fVar3 = param_4->InExposureScale;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"DLSS.Exposure.Scale",fVar3);
  NVSDK_NGX_Parameter_SetI(param_3,"DLSS.Indicator.Invert.X.Axis",param_4->InIndicatorInvertXAxis);
  NVSDK_NGX_Parameter_SetI(param_3,"DLSS.Indicator.Invert.Y.Axis",param_4->InIndicatorInvertYAxis);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"DLSS.Input.DiffuseAlbedo",param_4->pInDiffuseAlbedo)
  ;
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSS.Input.SpecularAlbedo",param_4->pInSpecularAlbedo);
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
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Emissive",(param_4->GBufferSurface).pInAttrib[0xc]);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"DLSSD.Alpha",param_4->pInAlpha);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"DLSSD.OutputAlpha",param_4->pInOutputAlpha);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"DLSSD.ReflectedAlbedo",param_4->pInReflectedAlbedo);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.ColorBeforeParticles",param_4->pInColorBeforeParticles);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.ColorAfterParticles",param_4->pInColorAfterParticles);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.ColorBeforeTransparency",param_4->pInColorBeforeTransparency);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.ColorAfterTransparency",param_4->pInColorAfterTransparency);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"DLSSD.ColorBeforeFog",param_4->pInColorBeforeFog);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"DLSSD.ColorAfterFog",param_4->pInColorAfterFog);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide",
             param_4->pInScreenSpaceSubsurfaceScatteringGuide);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering",
             param_4->pInColorBeforeScreenSpaceSubsurfaceScattering);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering",
             param_4->pInColorAfterScreenSpaceSubsurfaceScattering);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.ScreenSpaceRefractionGuide",param_4->pInScreenSpaceRefractionGuide);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.ColorBeforeScreenSpaceRefraction",
             param_4->pInColorBeforeScreenSpaceRefraction);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.ColorAfterScreenSpaceRefraction",
             param_4->pInColorAfterScreenSpaceRefraction);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.DepthOfFieldGuide",param_4->pInDepthOfFieldGuide);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.ColorBeforeDepthOfField",param_4->pInColorBeforeDepthOfField);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.ColorAfterDepthOfField",param_4->pInColorAfterDepthOfField);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.DiffuseHitDistance",param_4->pInDiffuseHitDistance);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.SpecularHitDistance",param_4->pInSpecularHitDistance);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.DiffuseRayDirection",param_4->pInDiffuseRayDirection);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.SpecularRayDirection",param_4->pInSpecularRayDirection);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.DiffuseRayDirectionHitDistance",
             param_4->pInDiffuseRayDirectionHitDistance);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSSD.SpecularRayDirectionHitDistance",
             param_4->pInSpecularRayDirectionHitDistance);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSSD.Alpha.Subrect.Base.X",(param_4->InAlphaSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSSD.Alpha.Subrect.Base.Y",(param_4->InAlphaSubrectBase).Y);
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
            (param_3,"DLSSD.ColorAfterParticles.Subrect.Base.X",
             (param_4->InColorAfterParticlesSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterParticles.Subrect.Base.Y",
             (param_4->InColorAfterParticlesSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorBeforeParticles.Subrect.Base.X",
             (param_4->InColorBeforeParticlesSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorBeforeParticles.Subrect.Base.Y",
             (param_4->InColorBeforeParticlesSubrectBase).Y);
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
            (param_3,"DLSSD.ColorBeforeFog.Subrect.Base.X",(param_4->InColorBeforeFogSubrectBase).X)
  ;
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorBeforeFog.Subrect.Base.Y",(param_4->InColorBeforeFogSubrectBase).Y)
  ;
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterFog.Subrect.Base.X",(param_4->InColorAfterFogSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterFog.Subrect.Base.Y",(param_4->InColorAfterFogSubrectBase).Y);
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
             (param_4->InColorAfterDepthOfFieldSubtectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterDepthOfField.Subrect.Base.Y",
             (param_4->InColorAfterDepthOfFieldSubtectBase).Y);
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
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"GBuffer.Normals",param_4->pInNormals);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"GBuffer.Roughness",param_4->pInRoughness);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSS.TransparencyLayer",param_4->pInTransparencyLayer);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSS.TransparencyLayerOpacity",param_4->pInTransparencyLayerOpacity);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSS.TransparencyLayerMvecs",param_4->pInTransparencyLayerMvecs);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"DLSS.DisocclusionMask",param_4->pInDisocclusionMask)
  ;
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
  NVar1 = NVSDK_NGX_D3D11_EvaluateFeature_C
                    (param_1,param_2,param_3,(_func___cdecl_void_float_bool_ptr *)0x0);
  return NVar1;
}

// NGX_D3D11_EVALUATE_DLSS_EXT @ 14de15870

NVSDK_NGX_Result __cdecl
NGX_D3D11_EVALUATE_DLSS_EXT
          (ID3D11DeviceContext *param_1,NVSDK_NGX_Handle *param_2,NVSDK_NGX_Parameter *param_3,
          NVSDK_NGX_D3D11_DLSS_Eval_Params *param_4)

{
  NVSDK_NGX_Result NVar1;
  float fVar2;
  float fVar3;
  
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"Color",(param_4->Feature).pInColor);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"Output",(param_4->Feature).pInOutput);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"Depth",param_4->pInDepth);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"MotionVectors",param_4->pInMotionVectors);
  NVSDK_NGX_Parameter_SetF(param_3,"Jitter.Offset.X",param_4->InJitterOffsetX);
  NVSDK_NGX_Parameter_SetF(param_3,"Jitter.Offset.Y",param_4->InJitterOffsetY);
  NVSDK_NGX_Parameter_SetF(param_3,"Sharpness",(param_4->Feature).InSharpness);
  NVSDK_NGX_Parameter_SetI(param_3,"Reset",param_4->InReset);
  fVar3 = __real_3f800000;
  fVar2 = param_4->InMVScaleX;
  if (param_4->InMVScaleX == 0.0) {
    fVar2 = __real_3f800000;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"MV.Scale.X",fVar2);
  fVar2 = param_4->InMVScaleY;
  if (param_4->InMVScaleY == 0.0) {
    fVar2 = fVar3;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"MV.Scale.Y",fVar2);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"TransparencyMask",param_4->pInTransparencyMask);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"ExposureTexture",param_4->pInExposureTexture);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"DLSS.Input.Bias.Current.Color.Mask",param_4->pInBiasCurrentColorMask);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Albedo",(param_4->GBufferSurface).pInAttrib[0]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Roughness",(param_4->GBufferSurface).pInAttrib[1]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Metallic",(param_4->GBufferSurface).pInAttrib[2]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Specular",(param_4->GBufferSurface).pInAttrib[3]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Subsurface",(param_4->GBufferSurface).pInAttrib[4]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Normals",(param_4->GBufferSurface).pInAttrib[5]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.ShadingModelId",(param_4->GBufferSurface).pInAttrib[6]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.MaterialId",(param_4->GBufferSurface).pInAttrib[7]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Attrib.8",(param_4->GBufferSurface).pInAttrib[8]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Attrib.9",(param_4->GBufferSurface).pInAttrib[9]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Attrib.10",(param_4->GBufferSurface).pInAttrib[10]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Attrib.11",(param_4->GBufferSurface).pInAttrib[0xb]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Attrib.12",(param_4->GBufferSurface).pInAttrib[0xc]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Attrib.13",(param_4->GBufferSurface).pInAttrib[0xd]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Attrib.14",(param_4->GBufferSurface).pInAttrib[0xe]);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"GBuffer.Attrib.15",(param_4->GBufferSurface).pInAttrib[0xf]);
  NVSDK_NGX_Parameter_SetUI(param_3,"TonemapperType",param_4->InToneMapperType);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"MotionVectors3D",param_4->pInMotionVectors3D);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"IsParticleMask",param_4->pInIsParticleMask);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"AnimatedTextureMask",param_4->pInAnimatedTextureMask);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"DepthHighRes",param_4->pInDepthHighRes);
  NVSDK_NGX_Parameter_SetD3d11Resource(param_3,"Position.ViewSpace",param_4->pInPositionViewSpace);
  NVSDK_NGX_Parameter_SetF(param_3,"FrameTimeDeltaInMsec",param_4->InFrameTimeDeltaInMsec);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"RayTracingHitDistance",param_4->pInRayTracingHitDistance);
  NVSDK_NGX_Parameter_SetD3d11Resource
            (param_3,"MotionVectorsReflection",param_4->pInMotionVectorsReflections);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Color.Subrect.Base.X",(param_4->InColorSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Color.Subrect.Base.Y",(param_4->InColorSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Depth.Subrect.Base.X",(param_4->InDepthSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Depth.Subrect.Base.Y",(param_4->InDepthSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Input.MV.Subrect.Base.X",(param_4->InMVSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Input.MV.Subrect.Base.Y",(param_4->InMVSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Translucency.Subrect.Base.X",(param_4->InTranslucencySubrectBase).X
            );
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Translucency.Subrect.Base.Y",(param_4->InTranslucencySubrectBase).Y
            );
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Bias.Current.Color.Subrect.Base.X",
             (param_4->InBiasCurrentColorSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Bias.Current.Color.Subrect.Base.Y",
             (param_4->InBiasCurrentColorSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Output.Subrect.Base.X",(param_4->InOutputSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Output.Subrect.Base.Y",(param_4->InOutputSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Render.Subrect.Dimensions.Width",
             (param_4->InRenderSubrectDimensions).Width);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Render.Subrect.Dimensions.Height",
             (param_4->InRenderSubrectDimensions).Height);
  fVar2 = param_4->InPreExposure;
  if (param_4->InPreExposure == 0.0) {
    fVar2 = fVar3;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"DLSS.Pre.Exposure",fVar2);
  if (param_4->InExposureScale != 0.0) {
    fVar3 = param_4->InExposureScale;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"DLSS.Exposure.Scale",fVar3);
  NVSDK_NGX_Parameter_SetI(param_3,"DLSS.Indicator.Invert.X.Axis",param_4->InIndicatorInvertXAxis);
  NVSDK_NGX_Parameter_SetI(param_3,"DLSS.Indicator.Invert.Y.Axis",param_4->InIndicatorInvertYAxis);
  NVar1 = NVSDK_NGX_D3D11_EvaluateFeature_C
                    (param_1,param_2,param_3,(_func___cdecl_void_float_bool_ptr *)0x0);
  return NVar1;
}

// IMPLEMENT_MODULE_NGXD3D11RHI @ 14de15d90

void __cdecl IMPLEMENT_MODULE_NGXD3D11RHI(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogDLSSNGXD3D11RHI'' @ 15045eef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDLSSNGXD3D11RHI__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDLSSNGXD3D11RHI);
  return;
}

