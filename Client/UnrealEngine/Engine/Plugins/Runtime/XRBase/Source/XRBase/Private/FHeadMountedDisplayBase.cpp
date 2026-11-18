// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 23

// FHeadMountedDisplayBase @ 14cf7d780

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FHeadMountedDisplayBase * __thiscall
FHeadMountedDisplayBase::FHeadMountedDisplayBase
          (FHeadMountedDisplayBase *this,IARSystemSupport *param_1)

{
  FXRTrackingSystemBase::FXRTrackingSystemBase((FXRTrackingSystemBase *)this,param_1);
  IHeadMountedDisplay::IHeadMountedDisplay((IHeadMountedDisplay *)&this->field_0xf8);
  *(undefined ***)this = &_vftable__for__FXRTrackingSystemBase__;
  *(undefined ***)&this->field_0xf8 = &_vftable__for__IHeadMountedDisplay__;
  *(undefined ***)&this->field_0x100 = &_vftable__for__IStereoRendering__;
  (this->DefaultStereoLayers).Object = (FDefaultStereoLayers *)0x0;
  (this->DefaultStereoLayers).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SpectatorScreenController).Ptr = (FDefaultSpectatorScreenController *)0x0;
  this->bHeadTrackingEnforced = false;
  return this;
}

// ~FHeadMountedDisplayBase @ 14cf7ecc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FHeadMountedDisplayBase::~FHeadMountedDisplayBase(FHeadMountedDisplayBase *this)

{
  FDefaultSpectatorScreenController *pFVar1;
  
  *(undefined ***)this = &_vftable__for__FXRTrackingSystemBase__;
  *(undefined ***)&this->field_0xf8 = &_vftable__for__IHeadMountedDisplay__;
  *(undefined ***)&this->field_0x100 = &_vftable__for__IStereoRendering__;
  pFVar1 = (this->SpectatorScreenController).Ptr;
  if (pFVar1 != (FDefaultSpectatorScreenController *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DefaultStereoLayers).SharedReferenceCount.ReferenceController);
  *(undefined ***)&this->field_0x100 = &___7IStereoRendering__6B_;
  *(undefined ***)&this->field_0xf8 = IModuleInterface::vftable;
  FXRTrackingSystemBase::~FXRTrackingSystemBase((FXRTrackingSystemBase *)this);
  return;
}

// CVarSinkHandler @ 14cf83ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FHeadMountedDisplayBase::CVarSinkHandler(void)

{
  code *pcVar1;
  UEngine *pUVar2;
  bool bVar3;
  longlong *plVar4;
  IConsoleManager *pIVar5;
  float fVar6;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\HeadMountedDisplayBase.cpp"
                         ,0xaf,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((GEngine != (UEngine *)0x0) && ((GEngine->XRSystem).Object != (IXRTrackingSystem *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar5 = IConsoleManager::Get();
      SecondaryScreenPercentageHMDCVar =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar5 + 0xc0))
                     (pIVar5,L"xr.SecondaryScreenPercentage.HMDRenderTarget",1);
      _Init_thread_footer(&::_TSS0);
    }
    pUVar2 = GEngine;
    if (((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    plVar4 = (longlong *)(**(code **)((longlong)*(pUVar2->XRSystem).Object + 0x118))();
    if ((plVar4 != (longlong *)0x0) && (SecondaryScreenPercentageHMDCVar != (IConsoleVariable *)0x0)
       ) {
      fVar6 = (float)(**(code **)(*(longlong *)SecondaryScreenPercentageHMDCVar + 0xd0))();
      fVar6 = fVar6 * __real_3c23d70a;
      if ((fVar6 < __real_3dcccccd) || (__real_40000000 < fVar6)) {
        if (2 < (byte)LogHMD._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
        }
        if (__real_40000000 <= fVar6) {
          fVar6 = __real_40000000;
        }
        if (fVar6 <= __real_3dcccccd) {
          fVar6 = __real_3dcccccd;
        }
      }
      (**(code **)(*plVar4 + 200))(plVar4,fVar6);
    }
  }
  return;
}

// CalculateStereoViewOffset @ 14cf84130

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FHeadMountedDisplayBase::CalculateStereoViewOffset
          (FHeadMountedDisplayBase *this,int param_1,TRotator<double> *param_2,float param_3,
          TVector<double> *param_4)

{
  code *pcVar1;
  bool bVar2;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(*(longlong *)&this[-1].field_0x30 + 0x110))(&this[-1].field_0x30,&local_18,0);
  if (local_18 != (longlong *)0x0) {
    if ((local_18 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*local_18 + 0x40))(local_18,param_1,param_2,param_4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// CopyTexture_RenderThread @ 14cf85630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FHeadMountedDisplayBase::CopyTexture_RenderThread
          (FHeadMountedDisplayBase *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,
          TIntRect<int> *param_3,FRHITexture *param_4,TIntRect<int> *param_5,bool param_6,
          bool param_7)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  IStereoRenderTargetManager *pIVar4;
  IRHICommandContext *pIVar5;
  undefined8 *puVar6;
  undefined1 auStackY_288 [32];
  TArrayView<FRHITransitionInfo_const_,int> local_248;
  FXRCopyTextureOptions local_238;
  TIntRect<int>_u_0 local_218;
  FRHITransitionInfo local_208;
  FRHITransitionInfo local_1d8;
  undefined4 local_1a8;
  undefined2 local_1a4;
  FRHITexture *local_1a0;
  undefined1 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined1 local_18c;
  undefined1 local_180;
  TIntRect<int>_u_0 local_178;
  TArrayView<FRHITransitionInfo_const_,int> local_168;
  TIntPoint<int>_u_0 local_158;
  TIntPoint<int>_u_0 TStack_150;
  FRHIRenderPassInfo local_148;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\HeadMountedDisplayBase.cpp"
                       ,199,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_248.ArrayNum = 1;
  local_248.DataPtr = &local_208;
  local_208._padding_._0_4_ = 0xffffffff;
  local_168.ArrayNum = 1;
  local_168._12_4_ = local_248._12_4_;
  local_208._padding_._4_2_ = 0xffff;
  local_208.field1_0x8.Texture = param_4;
  local_208.Type = Texture;
  local_208.AccessBefore = None;
  local_208.AccessAfter = RTV;
  local_208.Flags = None;
  local_208.CommitInfo.bIsSet = false;
  local_168.DataPtr = local_248.DataPtr;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_168,None);
  local_248.ArrayNum = 1;
  local_248.DataPtr = &local_1d8;
  local_1d8._padding_._0_4_ = 0xffffffff;
  local_1d8._padding_._4_2_ = 0xffff;
  local_1d8.Type = Texture;
  local_1d8.AccessBefore = None;
  local_1d8.AccessAfter = SRVMask;
  local_1d8.Flags = None;
  local_1d8.CommitInfo.bIsSet = false;
  local_1d8.field1_0x8.Texture = param_2;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_248,None);
  local_238.FeatureLevel.FeatureLevel = GMaxRHIFeatureLevel;
  if (GMaxRHIFeatureLevel == Num) {
    local_238.ShaderPlatform.Platform = SP_NumPlatforms;
  }
  else {
    local_238.ShaderPlatform.Platform =
         GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel];
  }
  local_238.bClearBlack = param_6;
  local_238.bOutputMipChain = false;
  local_238.bNeedsDisplayMapping = false;
  local_238.bSrcIsLinear = false;
  local_238.bSrcSupportsHDR = false;
  local_238.BlendMod = !param_7 * '\x02';
  local_238.bDstSupportsHDR = false;
  local_238.SrcColorGamut = ___xmm_00000002000000020000000000000000;
  local_238.DstColorGamut = _UNK_152a70374;
  local_238.SrcDisplayFormat = _UNK_152a70378;
  local_238.DstDisplayFormat = _UNK_152a7037c;
  local_238.LoadAction = ELoad;
  pIVar4 = (IStereoRenderTargetManager *)(**(code **)(*(longlong *)&this->field_0x100 + 0x80))();
  FXRCopyTextureOptions::SetDisplayMappingOptions(&local_238,pIVar4);
  local_148.ColorRenderTargets.Elements[1].RenderTarget = (FRHITexture *)0x0;
  local_148.ColorRenderTargets.Elements[2].RenderTarget = (FRHITexture *)0x0;
  local_148.ColorRenderTargets.Elements[2].ResolveTarget = (FRHITexture *)0x0;
  local_148.ColorRenderTargets.Elements[4].RenderTarget = (FRHITexture *)0x0;
  local_148.ColorRenderTargets.Elements[4].ResolveTarget = (FRHITexture *)0x0;
  local_148.ColorRenderTargets.Elements[6].RenderTarget = (FRHITexture *)0x0;
  local_148.ColorRenderTargets.Elements[6].ResolveTarget = (FRHITexture *)0x0;
  local_148.DepthStencilRenderTarget.DepthStencilTarget = (FRHITexture *)0x0;
  local_148.DepthStencilRenderTarget.ResolveTarget = (FRHITexture *)0x0;
  local_148.ColorRenderTargets.Elements[1].ResolveTarget = (FRHITexture *)0x0;
  local_148.ColorRenderTargets.Elements[1].ArraySlice = -1;
  local_148.ColorRenderTargets.Elements[1].MipIndex = '\0';
  local_148.ColorRenderTargets.Elements[1].Action = DontLoad_DontStore;
  local_148.ColorRenderTargets.Elements[2].ArraySlice = -1;
  local_148.ColorRenderTargets.Elements[2].MipIndex = '\0';
  local_148.ColorRenderTargets.Elements[2].Action = DontLoad_DontStore;
  local_148.ColorRenderTargets.Elements[3].RenderTarget = (FRHITexture *)0x0;
  local_148.ColorRenderTargets.Elements[3].ResolveTarget = (FRHITexture *)0x0;
  local_148.ColorRenderTargets.Elements[3].ArraySlice = -1;
  local_148.ColorRenderTargets.Elements[3].MipIndex = '\0';
  local_148.ColorRenderTargets.Elements[3].Action = DontLoad_DontStore;
  local_148.ColorRenderTargets.Elements[4].ArraySlice = -1;
  local_148.ColorRenderTargets.Elements[4].MipIndex = '\0';
  local_148.ColorRenderTargets.Elements[4].Action = DontLoad_DontStore;
  local_148.ColorRenderTargets.Elements[5].RenderTarget = (FRHITexture *)0x0;
  local_148.ColorRenderTargets.Elements[5].ResolveTarget = (FRHITexture *)0x0;
  local_148.ColorRenderTargets.Elements[5].ArraySlice = -1;
  local_148.ColorRenderTargets.Elements[5].MipIndex = '\0';
  local_148.ColorRenderTargets.Elements[5].Action = DontLoad_DontStore;
  local_148.ColorRenderTargets.Elements[6].ArraySlice = -1;
  local_148.ColorRenderTargets.Elements[6].MipIndex = '\0';
  local_148.ColorRenderTargets.Elements[6].Action = DontLoad_DontStore;
  local_148.ColorRenderTargets.Elements[7].RenderTarget = (FRHITexture *)0x0;
  local_148.ColorRenderTargets.Elements[7].ResolveTarget = (FRHITexture *)0x0;
  local_148.ColorRenderTargets.Elements[7].ArraySlice = -1;
  local_148.ColorRenderTargets.Elements[7].MipIndex = '\0';
  local_148.ColorRenderTargets.Elements[7].Action = DontLoad_DontStore;
  local_148.DepthStencilRenderTarget.Action = DontLoad_DontStore;
  local_148.DepthStencilRenderTarget.ExclusiveDepthStencil.Value = DepthNop;
  local_148.ResolveRect.X1 = -1;
  local_148.ResolveRect.Y1 = -1;
  local_148.ResolveRect.X2 = -1;
  local_148.ResolveRect.Y2 = -1;
  local_148.ShadingRateTexture.Reference = (FRHITexture *)0x0;
  local_148.ShadingRateTextureCombiner = VRSRB_Passthrough;
  local_148.NopAccess = None;
  local_148.NumOcclusionQueries = 0;
  local_148.bOcclusionQueries = false;
  local_148.MultiViewCount = '\0';
  local_148.SubpassHint = None;
  if (param_4 == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ColorRT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x14b0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_148.ColorRenderTargets.Elements[0].RenderTarget = param_4;
  local_148.ColorRenderTargets.Elements[0].ResolveTarget = (FRHITexture *)0x0;
  local_148.ColorRenderTargets.Elements[0].ArraySlice = -1;
  local_148.ColorRenderTargets.Elements[0].MipIndex = '\0';
  local_148.ColorRenderTargets.Elements[0].Action = Load_Store;
  FRHICommandList::BeginRenderPass((FRHICommandList *)param_1,&local_148,L"OpenXRHMD_CopyTexture");
  local_178._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_5->field0_0x0)._s_0.Min.field0_0x0;
  local_178._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_5->field0_0x0)._s_0.Max.field0_0x0;
  local_218._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Min.field0_0x0;
  local_218._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Max.field0_0x0;
  XRCopyTexture_InRenderPass
            (param_1,param_2,(TIntRect<int> *)&local_218._s_0,param_4,
             (TIntRect<int> *)&local_178._s_0,&local_238,0,0);
  if ((param_1->field_0x29b & 2) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInsideRenderPass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x10c5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->field_0x29b & 4) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInsideComputePass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x10c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar3 = param_1->field_0x29b;
  if ((bVar3 & 8) != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x270))(GDynamicRHI,param_1);
    param_1->field_0x29b = param_1->field_0x29b & 0xf7;
    bVar3 = param_1->field_0x29b;
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((bVar3 & 0x20) == 0)) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x10,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar6;
    *(undefined8 **)&param_1->field_0x30 = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &___7FRHICommandEndRenderPass__6B_;
  }
  else {
    pIVar5 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar5->_padding_ + 0x250))(pIVar5);
  }
  param_1->field_0x29b = param_1->field_0x29b & 0xfd;
  local_218._s_0.Min.field0_0x0 = (TIntPoint<int>)&local_1a8;
  local_218._8_4_ = 1;
  TStack_150 = (TIntPoint<int>_u_0)local_218._s_0.Max.field0_0x0;
  *(undefined2 *)&param_1->field_0x298 = 0;
  local_1a8 = 0xffffffff;
  local_1a4 = 0xffff;
  local_1a0 = param_4;
  local_198 = 1;
  local_194 = 0x1000;
  local_190 = 2;
  local_18c = 0;
  local_180 = 0;
  local_158 = (TIntPoint<int>_u_0)local_218._s_0.Min.field0_0x0;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)param_1,
             (TArrayView<FRHITransitionInfo_const_,int> *)&local_158._s_0,None);
  if (local_148.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_148.ShadingRateTexture.Reference);
  }
  return;
}

// GetEyeCenterPoint_RenderThread @ 14cf8f270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TVector2<double> * __thiscall
FHeadMountedDisplayBase::GetEyeCenterPoint_RenderThread
          (FHeadMountedDisplayBase *this,TVector2<double> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  TVector2<double> *pTVar4;
  double dVar5;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_88;
  double dStack_80;
  double local_68;
  double dStack_60;
  double local_48;
  double dStack_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar2 = IsInRenderingThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\HeadMountedDisplayBase.cpp"
                         ,0x77,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector2<double> *)(*pcVar1)();
    return pTVar4;
  }
  cVar3 = (**(code **)(*(longlong *)&this->field_0x100 + 8))(&this->field_0x100);
  if ((cVar3 == '\0') && (cVar3 = (**(code **)(*(longlong *)this + 0x158))(this), cVar3 == '\0')) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.5;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.5;
    return __return_storage_ptr__;
  }
  (**(code **)(*(longlong *)&this->field_0x100 + 0x60))(&this->field_0x100,&local_a8,param_1);
  dVar5 = __real_3fe0000000000000 -
          (dStack_80 * 0.0 + dStack_a0 * 0.0 + ___xmm_3ff00000000000003ff0000000000000 * dStack_60 +
          _UNK_150689688 * dStack_40) * __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (local_88 * 0.0 + local_a8 * 0.0 + ___xmm_3ff00000000000003ff0000000000000 * local_68 +
        _UNK_150689688 * local_48 + __real_3ff0000000000000) * __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  return __return_storage_ptr__;
}

// GetFullFlatEyeRect_RenderThread @ 14cf8f740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntRect<int> * __thiscall
FHeadMountedDisplayBase::GetFullFlatEyeRect_RenderThread
          (FHeadMountedDisplayBase *this,TIntRect<int> *__return_storage_ptr__,
          FRHITextureDesc *param_1)

{
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 1;
  (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 1;
  return __return_storage_ptr__;
}

// GetFullFlatEyeRect_RenderThread @ 14cf8f760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntRect<int> * __thiscall
FHeadMountedDisplayBase::GetFullFlatEyeRect_RenderThread
          (FHeadMountedDisplayBase *this,TIntRect<int> *__return_storage_ptr__,
          TRefCountPtr<FRHITexture> param_1)

{
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 1;
  (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 1;
  if ((FRHIResource *)(param_1.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_1.Reference)->_padding_);
  }
  return __return_storage_ptr__;
}

// GetHMDDistortionEnabled @ 14cf8f890

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FHeadMountedDisplayBase::GetHMDDistortionEnabled(FHeadMountedDisplayBase *this,EShadingPath param_1)

{
  return true;
}

// GetHMDName @ 14cf8f8a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FName __thiscall FHeadMountedDisplayBase::GetHMDName(FHeadMountedDisplayBase *this)

{
  FName in_RDX;
  
  (*(code *)**(undefined8 **)&this[-1].field_0x38)();
  return in_RDX;
}

// GetOverlayLayerTarget_RenderThread @ 14cf90360

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FHeadMountedDisplayBase::GetOverlayLayerTarget_RenderThread
          (FHeadMountedDisplayBase *this,int param_1,TIntRect<int> *param_2)

{
  undefined4 in_register_00000014;
  
  *(undefined8 *)CONCAT44(in_register_00000014,param_1) = 0;
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)CONCAT44(in_register_00000014,param_1);
}

// GetSceneLayerTarget_RenderThread @ 14cf90b90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FHeadMountedDisplayBase::GetSceneLayerTarget_RenderThread
          (FHeadMountedDisplayBase *this,int param_1,TIntRect<int> *param_2)

{
  undefined4 in_register_00000014;
  
  *(undefined8 *)CONCAT44(in_register_00000014,param_1) = 0;
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)CONCAT44(in_register_00000014,param_1);
}

// GetSpectatorScreenController @ 14cf90bb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

ISpectatorScreenController * __thiscall
FHeadMountedDisplayBase::GetSpectatorScreenController(FHeadMountedDisplayBase *this)

{
  return *(ISpectatorScreenController **)&this->field_0x20;
}

// GetSpectatorScreenController @ 14cf90bc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

ISpectatorScreenController * __thiscall
FHeadMountedDisplayBase::GetSpectatorScreenController(FHeadMountedDisplayBase *this)

{
  return *(ISpectatorScreenController **)&this->field_0x20;
}

// GetStereoLayers @ 14cf911a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

IStereoLayers * __thiscall FHeadMountedDisplayBase::GetStereoLayers(FHeadMountedDisplayBase *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FDefaultStereoLayers *this_00;
  IStereoLayers *pIVar4;
  FAutoRegister local_res8 [8];
  TRawPtrProxy<FDefaultStereoLayers> local_res10;
  FDefaultStereoLayers *local_38;
  FSharedReferencer<1> local_30;
  TSharedRef<FDefaultStereoLayers,1> local_28;
  TSharedRef<ISceneViewExtension,1> local_18;
  
  if (*(longlong *)&this->field_0x8 != 0) {
    return *(IStereoLayers **)&this->field_0x8;
  }
  this_00 = ::operator_new(0x140);
  if (this_00 == (FDefaultStereoLayers *)0x0) {
    local_res10.Object = (FDefaultStereoLayers *)0x0;
  }
  else {
    local_res10.Object =
         FDefaultStereoLayers::FDefaultStereoLayers
                   (this_00,local_res8,(FHeadMountedDisplayBase *)&this[-1].field_0x30);
    if ((((local_res10.Object != (FDefaultStereoLayers *)0x0) &&
         (*(longlong *)&(local_res10.Object)->field_0x80 != 0)) &&
        (*(longlong *)&(local_res10.Object)->field_0x88 != 0)) &&
       (0 < *(int *)(*(longlong *)&(local_res10.Object)->field_0x88 + 8))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar4 = (IStereoLayers *)(*pcVar2)();
        return pIVar4;
      }
    }
  }
  TSharedRef<FDefaultStereoLayers,1>::TSharedRef<FDefaultStereoLayers,1><FDefaultStereoLayers>
            (&local_28,&local_res10);
  if (local_28.Object == (FDefaultStereoLayers *)0x0) {
    local_18.Object = (ISceneViewExtension *)0x0;
  }
  else {
    local_18.Object = (ISceneViewExtension *)&(local_28.Object)->field_0x78;
  }
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSceneViewExtensions::RegisterExtension(&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  local_38 = local_28.Object;
  local_30.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar1 = &this->field_0x8;
  if ((FDefaultStereoLayers **)puVar1 != &local_38) {
    *(FDefaultStereoLayers **)puVar1 = local_28.Object;
    local_38 = (FDefaultStereoLayers *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x10,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return *(IStereoLayers **)puVar1;
}

// InitCanvasFromView @ 14cf928c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FHeadMountedDisplayBase::InitCanvasFromView
          (FHeadMountedDisplayBase *this,FSceneView *param_1,UCanvas *param_2)

{
  return;
}

// IsHeadTrackingAllowed @ 14cf92c70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FHeadMountedDisplayBase::IsHeadTrackingAllowed(FHeadMountedDisplayBase *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)&this->field_0x100 + 8))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(longlong *)this + 0x158))(this);
    if (cVar1 == '\0') {
      return false;
    }
  }
  return true;
}

// IsHeadTrackingEnforced @ 14cf92cb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FHeadMountedDisplayBase::IsHeadTrackingEnforced(FHeadMountedDisplayBase *this)

{
  return this->bHeadTrackingEnforced;
}

// IsSpectatorScreenActive @ 14cf932f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FHeadMountedDisplayBase::IsSpectatorScreenActive(FHeadMountedDisplayBase *this)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)this + 0xa8))();
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// OnLateUpdateApplied_RenderThread @ 14cf93800

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHeadMountedDisplayBase::OnLateUpdateApplied_RenderThread
          (FHeadMountedDisplayBase *this,FRDGBuilder *param_1,TTransform<double> *param_2)

{
  FDefaultStereoLayers *pFVar1;
  double dVar2;
  
  pFVar1 = (this->DefaultStereoLayers).Object;
  if (pFVar1 != (FDefaultStereoLayers *)0x0) {
    dVar2 = (param_2->Rotation).XY.m128d_f64[1];
    (pFVar1->HmdTransform).Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
    (pFVar1->HmdTransform).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_2->Rotation).ZW.m128d_f64[1];
    (pFVar1->HmdTransform).Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
    (pFVar1->HmdTransform).Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_2->Translation).XY.m128d_f64[1];
    (pFVar1->HmdTransform).Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
    (pFVar1->HmdTransform).Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_2->Translation).ZW.m128d_f64[1];
    (pFVar1->HmdTransform).Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
    (pFVar1->HmdTransform).Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_2->Scale3D).XY.m128d_f64[1];
    (pFVar1->HmdTransform).Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
    (pFVar1->HmdTransform).Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_2->Scale3D).ZW.m128d_f64[1];
    (pFVar1->HmdTransform).Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
    (pFVar1->HmdTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  }
  return;
}

// PopulateAnalyticsAttributes @ 14cf947e0

/* WARNING: Removing unreachable block (ram,0x00014cf95af5) */
/* WARNING: Removing unreachable block (ram,0x00014cf957bb) */
/* WARNING: Removing unreachable block (ram,0x00014cf95337) */
/* WARNING: Removing unreachable block (ram,0x00014cf94ee6) */
/* WARNING: Removing unreachable block (ram,0x00014cf94aa3) */
/* WARNING: Removing unreachable block (ram,0x00014cf94cdc) */
/* WARNING: Removing unreachable block (ram,0x00014cf95111) */
/* WARNING: Removing unreachable block (ram,0x00014cf95592) */
/* WARNING: Removing unreachable block (ram,0x00014cf9595d) */
/* WARNING: Removing unreachable block (ram,0x00014cf95c78) */
/* WARNING: Removing unreachable block (ram,0x00014cf95b03) */
/* WARNING: Removing unreachable block (ram,0x00014cf957cc) */
/* WARNING: Removing unreachable block (ram,0x00014cf95348) */
/* WARNING: Removing unreachable block (ram,0x00014cf94ef4) */
/* WARNING: Removing unreachable block (ram,0x00014cf94ab1) */
/* WARNING: Removing unreachable block (ram,0x00014cf94cea) */
/* WARNING: Removing unreachable block (ram,0x00014cf95122) */
/* WARNING: Removing unreachable block (ram,0x00014cf955a1) */
/* WARNING: Removing unreachable block (ram,0x00014cf9596b) */
/* WARNING: Removing unreachable block (ram,0x00014cf95c86) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FHeadMountedDisplayBase::PopulateAnalyticsAttributes
          (FHeadMountedDisplayBase *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  IXRTrackingSystem *pIVar3;
  FAnalyticsEventAttribute *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FName *this_00;
  FString *pFVar10;
  FString *pFVar11;
  longlong lVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  undefined8 uVar15;
  ForAnyElementType FVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  wchar_t *pwVar19;
  float fVar20;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_348;
  undefined8 local_340;
  ForAnyElementType local_338;
  undefined8 local_330;
  undefined8 local_328;
  FScriptContainerElement local_320;
  undefined4 local_31c;
  FScriptContainerElement *local_318;
  undefined8 local_310;
  FScriptContainerElement *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  FScriptContainerElement local_2f0;
  undefined4 local_2ec;
  FScriptContainerElement *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  FScriptContainerElement local_2c0;
  undefined4 local_2bc;
  FAnalyticsEventAttribute local_2b8;
  FAnalyticsEventAttribute local_288;
  FAnalyticsEventAttribute local_258;
  FScriptContainerElement *local_228;
  undefined8 local_220;
  FString local_218;
  undefined8 local_208;
  FScriptContainerElement local_200;
  undefined4 local_1fc;
  FScriptContainerElement *local_1f8;
  undefined8 local_1f0;
  FString local_1e8;
  undefined8 local_1d8;
  FScriptContainerElement local_1d0;
  undefined4 local_1cc;
  FScriptContainerElement *local_1c8;
  undefined8 local_1c0;
  FString local_1b8;
  undefined8 local_1a8;
  FScriptContainerElement local_1a0;
  undefined4 local_19c;
  FScriptContainerElement *local_198;
  undefined8 local_190;
  FString local_188;
  undefined8 local_178;
  FScriptContainerElement local_170;
  undefined4 local_16c;
  FString local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138;
  FString local_130;
  FString local_120;
  void *local_110 [2];
  FString local_100;
  undefined8 local_f0 [2];
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [3];
  
  uVar15 = 0;
  uVar17 = 0;
  puVar1 = &this->field_0xf8;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  local_158 = 0;
  local_140 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_138 = 0;
  cVar6 = (**(code **)(*(longlong *)puVar1 + 0x68))(puVar1,&local_168);
  if (cVar6 == '\0') {
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    local_140 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_138 = 0;
    local_158 = 0xffffffffffffffff;
    ::FString::operator=(&local_168,L"FailedToGetHMDMonitorInfo");
  }
  this_00 = (FName *)(*(code *)**(undefined8 **)this)(this,local_res8);
  pFVar10 = ::FName::ToString(this_00,&local_120);
  pFVar11 = ::FString::FString(&local_100,L"DeviceName");
  if (((pFVar11->Data).ArrayNum < 2) ||
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar11->Data).AllocatorInstance.Data,L"EventName"), iVar9 == 0
     )) {
LAB_14cf94929:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else {
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar14,L"DateOffset");
    if (iVar9 == 0) goto LAB_14cf94929;
  }
  local_318 = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_310._0_4_ = (pFVar11->Data).ArrayNum;
  local_310._4_4_ = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  local_308 = (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300._0_4_ = (pFVar10->Data).ArrayNum;
  local_300._4_4_ = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  local_2f8 = 0;
  local_2f0 = (FScriptContainerElement)0x0;
  local_2ec = 0;
  pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_318) &&
      ((FScriptContainerElement *)&local_318 < pFVar2 + (longlong)param_1->ArrayMax * 0x30)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar9 = param_1->ArrayNum;
  if (iVar9 == param_1->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar12 = (longlong)iVar9;
  param_1->ArrayNum = iVar9 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30) = local_318;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 8) = (undefined4)local_310;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0xc) = local_310._4_4_;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30 + 0x10) = local_308;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x18) = (undefined4)local_300;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x1c) = local_300._4_4_;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x20) = local_2f8;
  pFVar2[lVar12 * 0x30 + 0x28] = local_2f0;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x2c) = local_2ec;
  local_300 = 0;
  local_308 = (FScriptContainerElement *)0x0;
  local_310 = 0;
  local_318 = (FScriptContainerElement *)0x0;
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  pIVar3 = (GEngine->XRSystem).Object;
  uVar18 = uVar17;
  if (pIVar3 != (IXRTrackingSystem *)0x0) {
    puVar13 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_110);
    uVar17 = 0;
    uVar18 = 0;
    if (local_f0 != puVar13) {
      uVar15 = *puVar13;
      *puVar13 = 0;
      uVar18 = *(undefined4 *)(puVar13 + 1);
      uVar17 = *(undefined4 *)((longlong)puVar13 + 0xc);
      puVar13[1] = 0;
    }
    if (local_110[0] != (void *)0x0) {
      FMemory::Free(local_110[0]);
    }
  }
  pFVar10 = ::FString::FString(&local_e0,L"VersionString");
  if (((pFVar10->Data).ArrayNum < 2) ||
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,L"EventName"), iVar9 == 0
     )) {
LAB_14cf94b6f:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else {
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar14,L"DateOffset");
    if (iVar9 == 0) goto LAB_14cf94b6f;
  }
  local_2e8 = (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e0._0_4_ = (pFVar10->Data).ArrayNum;
  local_2e0._4_4_ = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  local_2bc = 0;
  local_2c8 = 0;
  local_2d0 = CONCAT44(uVar17,uVar18);
  local_2c0 = (FScriptContainerElement)0x0;
  pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
  local_2d8 = uVar15;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_2e8) &&
      ((FScriptContainerElement *)&local_2e8 < pFVar2 + (longlong)param_1->ArrayMax * 0x30)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar9 = param_1->ArrayNum;
  if (iVar9 == param_1->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar12 = (longlong)iVar9;
  param_1->ArrayNum = iVar9 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30) = local_2e8;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 8) = (undefined4)local_2e0;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0xc) = local_2e0._4_4_;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x10) = local_2d8;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x18) = (undefined4)local_2d0;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x1c) = local_2d0._4_4_;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x20) = local_2c8;
  pFVar2[lVar12 * 0x30 + 0x28] = local_2c0;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x2c) = local_2bc;
  local_2d0 = 0;
  local_2d8 = 0;
  local_2e0 = 0;
  local_2e8 = (FScriptContainerElement *)0x0;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar16.Data = local_168.Data.AllocatorInstance.Data;
  }
  pFVar10 = ::FString::FString(&local_d0,L"DisplayDeviceName");
  if (((pFVar10->Data).ArrayNum < 2) ||
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,L"EventName"), iVar9 == 0
     )) {
LAB_14cf94d56:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else {
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar14,L"DateOffset");
    if (iVar9 == 0) goto LAB_14cf94d56;
  }
  local_228 = (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_220._0_4_ = (pFVar10->Data).ArrayNum;
  local_220._4_4_ = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  ::FString::FString(&local_218,(wchar_t *)FVar16.Data);
  local_208 = 0;
  local_200 = (FScriptContainerElement)0x0;
  local_1fc = 0;
  pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_228) &&
      ((FScriptContainerElement *)&local_228 < pFVar2 + (longlong)param_1->ArrayMax * 0x30)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar9 = param_1->ArrayNum;
  if (iVar9 == param_1->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar12 = (longlong)iVar9;
  param_1->ArrayNum = iVar9 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30) = local_228;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 8) = (undefined4)local_220;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0xc) = local_220._4_4_;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30 + 0x10) =
       local_218.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0x18) = local_218.Data.ArrayNum;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0x1c) = local_218.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x20) = local_208;
  pFVar2[lVar12 * 0x30 + 0x28] = local_200;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x2c) = local_1fc;
  local_218.Data.ArrayNum = 0;
  local_218.Data.ArrayMax = 0;
  local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_220 = 0;
  local_228 = (FScriptContainerElement *)0x0;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar16.Data = local_168.Data.AllocatorInstance.Data;
  }
  pFVar10 = ::FString::FString(&local_c0,L"HMDMonitorName");
  if (((pFVar10->Data).ArrayNum < 2) ||
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,L"EventName"), iVar9 == 0
     )) {
LAB_14cf94f60:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else {
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar14,L"DateOffset");
    if (iVar9 == 0) goto LAB_14cf94f60;
  }
  local_1f8 = (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0._0_4_ = (pFVar10->Data).ArrayNum;
  local_1f0._4_4_ = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  ::FString::FString(&local_1e8,(wchar_t *)FVar16.Data);
  local_1d8 = 0;
  local_1d0 = (FScriptContainerElement)0x0;
  local_1cc = 0;
  pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_1f8) &&
      ((FScriptContainerElement *)&local_1f8 < pFVar2 + (longlong)param_1->ArrayMax * 0x30)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar9 = param_1->ArrayNum;
  if (iVar9 == param_1->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar12 = (longlong)iVar9;
  param_1->ArrayNum = iVar9 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30) = local_1f8;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 8) = (undefined4)local_1f0;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0xc) = local_1f0._4_4_;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30 + 0x10) =
       local_1e8.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0x18) = local_1e8.Data.ArrayNum;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0x1c) = local_1e8.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x20) = local_1d8;
  pFVar2[lVar12 * 0x30 + 0x28] = local_1d0;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x2c) = local_1cc;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0 = 0;
  local_1f8 = (FScriptContainerElement *)0x0;
  pFVar10 = ::FString::FString(&local_b0,L"DisplayId");
  if (((pFVar10->Data).ArrayNum < 2) ||
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,L"EventName"), iVar9 == 0
     )) {
LAB_14cf95178:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else {
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar14,L"DateOffset");
    if (iVar9 == 0) goto LAB_14cf95178;
  }
  local_1c8 = (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0._0_4_ = (pFVar10->Data).ArrayNum;
  local_1c0._4_4_ = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_1b8,L"%llu");
  local_1a8 = 0;
  local_1a0 = (FScriptContainerElement)0x0;
  local_19c = 4;
  pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_1c8) &&
      ((FScriptContainerElement *)&local_1c8 < pFVar2 + (longlong)param_1->ArrayMax * 0x30)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar9 = param_1->ArrayNum;
  if (iVar9 == param_1->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar12 = (longlong)iVar9;
  param_1->ArrayNum = iVar9 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30) = local_1c8;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 8) = (undefined4)local_1c0;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0xc) = local_1c0._4_4_;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30 + 0x10) =
       local_1b8.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0x18) = local_1b8.Data.ArrayNum;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0x1c) = local_1b8.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x20) = local_1a8;
  pFVar2[lVar12 * 0x30 + 0x28] = local_1a0;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x2c) = local_19c;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0 = 0;
  local_1c8 = (FScriptContainerElement *)0x0;
  ::FString::PrintfImpl(&local_130,L"(%d, %d)");
  pFVar10 = ::FString::FString(&local_a0,L"Resolution");
  if (((pFVar10->Data).ArrayNum < 2) ||
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,L"EventName"), iVar9 == 0
     )) {
LAB_14cf953bf:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else {
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar14,L"DateOffset");
    if (iVar9 == 0) goto LAB_14cf953bf;
  }
  FVar16.Data = local_130.Data.AllocatorInstance.Data;
  local_348 = (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_340._0_4_ = (pFVar10->Data).ArrayNum;
  local_340._4_4_ = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  local_338.Data = (FScriptContainerElement *)0x0;
  iVar9 = local_130.Data.ArrayNum;
  local_330 = CONCAT44(local_330._4_4_,iVar9);
  if (iVar9 == 0) {
    local_330 = local_130.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,0,&local_338,iVar9,(int *)((longlong)&local_330 + 4));
    memcpy(local_338.Data,FVar16.Data,(longlong)iVar9 * 2);
  }
  local_328 = 0;
  local_320 = (FScriptContainerElement)0x0;
  local_31c = 0;
  pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_348) &&
      ((FScriptContainerElement *)&local_348 < pFVar2 + (longlong)param_1->ArrayMax * 0x30)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar9 = param_1->ArrayNum;
  if (iVar9 == param_1->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar12 = (longlong)iVar9;
  param_1->ArrayNum = iVar9 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30) = local_348;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 8) = (undefined4)local_340;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0xc) = local_340._4_4_;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30 + 0x10) = local_338.Data;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x18) = (undefined4)local_330;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x1c) = local_330._4_4_;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x20) = local_328;
  pFVar2[lVar12 * 0x30 + 0x28] = local_320;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x2c) = local_31c;
  local_330 = 0;
  local_338.Data = (FScriptContainerElement *)0x0;
  local_340 = 0;
  local_348 = (FScriptContainerElement *)0x0;
  fVar20 = (float)(**(code **)(*(longlong *)puVar1 + 0x90))(puVar1);
  pFVar10 = ::FString::FString(&local_90,L"InterpupillaryDistance");
  if ((1 < (pFVar10->Data).ArrayNum) &&
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,L"EventName"), iVar9 != 0
     )) {
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar14,L"DateOffset");
    if (iVar9 != 0) goto LAB_14cf9562d;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
LAB_14cf9562d:
  local_198 = (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190._0_4_ = (pFVar10->Data).ArrayNum;
  local_190._4_4_ = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  AnalyticsConversionToString(&local_188,fVar20);
  local_178 = 0;
  local_170 = (FScriptContainerElement)0x0;
  local_16c = 4;
  pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_198) &&
      ((FScriptContainerElement *)&local_198 < pFVar2 + (longlong)param_1->ArrayMax * 0x30)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar9 = param_1->ArrayNum;
  if (iVar9 == param_1->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar12 = (longlong)iVar9;
  param_1->ArrayNum = iVar9 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30) = local_198;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 8) = (undefined4)local_190;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0xc) = local_190._4_4_;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30 + 0x10) =
       local_188.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0x18) = local_188.Data.ArrayNum;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0x1c) = local_188.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x20) = local_178;
  pFVar2[lVar12 * 0x30 + 0x28] = local_170;
  *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x2c) = local_16c;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190 = 0;
  local_198 = (FScriptContainerElement *)0x0;
  cVar6 = (**(code **)(*(longlong *)puVar1 + 0xf8))(puVar1);
  pFVar10 = ::FString::FString(&local_80,L"ChromaAbCorrectionEnabled");
  pFVar11 = FAnalyticsEventAttribute::CheckName(&local_2b8,pFVar10);
  pwVar19 = L"true";
  pwVar14 = L"true";
  local_2b8.AttrName.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.AttrName.Data.ArrayNum = (pFVar11->Data).ArrayNum;
  local_2b8.AttrName.Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  if (cVar6 == '\0') {
    pwVar14 = L"false";
  }
  ::FString::FString(&local_2b8.AttrValueString,pwVar14);
  local_2b8.AttrValueNumber = 0.0;
  local_2b8.AttrValueBool = false;
  local_2b8.AttrType = JsonFragment;
  pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar4 = (FAnalyticsEventAttribute *)(param_1->AllocatorInstance).Data;
  if (((pFVar4 <= &local_2b8) && (&local_2b8 < pFVar4 + param_1->ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar9 = param_1->ArrayNum;
  if (iVar9 == param_1->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar12 = (longlong)iVar9;
  param_1->ArrayNum = iVar9 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30) =
       local_2b8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar12 * 0x30 + 8) = local_2b8.AttrName.Data.ArrayNum;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0xc) = local_2b8.AttrName.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30 + 0x10) =
       local_2b8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0x18) = local_2b8.AttrValueString.Data.ArrayNum;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0x1c) = local_2b8.AttrValueString.Data.ArrayMax;
  *(double *)(pFVar2 + lVar12 * 0x30 + 0x20) = local_2b8.AttrValueNumber;
  pFVar2[lVar12 * 0x30 + 0x28] = (FScriptContainerElement)local_2b8.AttrValueBool;
  *(AttrTypeEnum *)(pFVar2 + lVar12 * 0x30 + 0x2c) = local_2b8.AttrType;
  local_2b8.AttrValueString.Data.ArrayNum = 0;
  local_2b8.AttrValueString.Data.ArrayMax = 0;
  local_2b8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.AttrName.Data.ArrayNum = 0;
  local_2b8.AttrName.Data.ArrayMax = 0;
  local_2b8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  cVar6 = (**(code **)(*(longlong *)puVar1 + 0xa0))(puVar1);
  pFVar10 = ::FString::FString(&local_70,L"MirrorToWindow");
  pFVar11 = FAnalyticsEventAttribute::CheckName(&local_288,pFVar10);
  local_288.AttrName.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.AttrName.Data.ArrayNum = (pFVar11->Data).ArrayNum;
  local_288.AttrName.Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  if (cVar6 == '\0') {
    pwVar19 = L"false";
  }
  ::FString::FString(&local_288.AttrValueString,pwVar19);
  local_288.AttrValueNumber = 0.0;
  local_288.AttrValueBool = false;
  local_288.AttrType = JsonFragment;
  pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar4 = (FAnalyticsEventAttribute *)(param_1->AllocatorInstance).Data;
  if (((pFVar4 <= &local_288) && (&local_288 < pFVar4 + param_1->ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar9 = param_1->ArrayNum;
  if (iVar9 == param_1->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar12 = (longlong)iVar9;
  param_1->ArrayNum = iVar9 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30) =
       local_288.AttrName.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar12 * 0x30 + 8) = local_288.AttrName.Data.ArrayNum;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0xc) = local_288.AttrName.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30 + 0x10) =
       local_288.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0x18) = local_288.AttrValueString.Data.ArrayNum;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0x1c) = local_288.AttrValueString.Data.ArrayMax;
  *(double *)(pFVar2 + lVar12 * 0x30 + 0x20) = local_288.AttrValueNumber;
  pFVar2[lVar12 * 0x30 + 0x28] = (FScriptContainerElement)local_288.AttrValueBool;
  *(AttrTypeEnum *)(pFVar2 + lVar12 * 0x30 + 0x2c) = local_288.AttrType;
  local_288.AttrValueString.Data.ArrayNum = 0;
  local_288.AttrValueString.Data.ArrayMax = 0;
  local_288.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.AttrName.Data.ArrayNum = 0;
  local_288.AttrName.Data.ArrayMax = 0;
  local_288.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar20 = UHeadMountedDisplayFunctionLibrary::GetXRSecondaryScreenPercentage();
  pFVar10 = ::FString::FString(local_60,L"XRSecondaryScreenPercentage");
  pFVar11 = FAnalyticsEventAttribute::CheckName(&local_258,pFVar10);
  local_258.AttrName.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.AttrName.Data.ArrayNum = (pFVar11->Data).ArrayNum;
  local_258.AttrName.Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  AnalyticsConversionToString(&local_258.AttrValueString,fVar20);
  local_258.AttrValueNumber = 0.0;
  local_258.AttrValueBool = false;
  local_258.AttrType = JsonFragment;
  pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar4 = (FAnalyticsEventAttribute *)(param_1->AllocatorInstance).Data;
  if (((pFVar4 <= &local_258) && (&local_258 < pFVar4 + param_1->ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar9 = param_1->ArrayNum;
  if (iVar9 == param_1->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar12 = (longlong)iVar9;
  param_1->ArrayNum = iVar9 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30) =
       local_258.AttrName.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar12 * 0x30 + 8) = local_258.AttrName.Data.ArrayNum;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0xc) = local_258.AttrName.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30 + 0x10) =
       local_258.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0x18) = local_258.AttrValueString.Data.ArrayNum;
  *(int *)(pFVar2 + lVar12 * 0x30 + 0x1c) = local_258.AttrValueString.Data.ArrayMax;
  *(double *)(pFVar2 + lVar12 * 0x30 + 0x20) = local_258.AttrValueNumber;
  pFVar2[lVar12 * 0x30 + 0x28] = (FScriptContainerElement)local_258.AttrValueBool;
  *(AttrTypeEnum *)(pFVar2 + lVar12 * 0x30 + 0x2c) = local_258.AttrType;
  local_258.AttrValueString.Data.ArrayNum = 0;
  local_258.AttrValueString.Data.ArrayMax = 0;
  local_258.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.AttrName.Data.ArrayNum = 0;
  local_258.AttrName.Data.ArrayMax = 0;
  local_258.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return true;
}

// RecordAnalytics @ 14cf97c70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FHeadMountedDisplayBase::RecordAnalytics(FHeadMountedDisplayBase *this)

{
  char cVar1;
  IAnalyticsProviderET *pIVar2;
  FAnalyticsEventAttribute *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_28 = (FAnalyticsEventAttribute *)0x0;
  local_20 = 0;
  if (FEngineAnalytics::Analytics.Object != (IAnalyticsProviderET *)0x0) {
    cVar1 = (**(code **)(*(longlong *)&this[-1].field_0x38 + 0x250))(&this[-1].field_0x38,&local_28)
    ;
    if (cVar1 != '\0') {
      ::FString::FString(&local_18,L"Editor.VR.DeviceInitialised");
      pIVar2 = FEngineAnalytics::GetProvider();
      (**(code **)(pIVar2->_padding_ + 0x80))(pIVar2,&local_18,&local_28);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  DestructItems<FAnalyticsEventAttribute,int>(local_28,(int)local_20);
  if (local_28 != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// SetHeadTrackingEnforced @ 14cf9a780

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FHeadMountedDisplayBase::SetHeadTrackingEnforced(FHeadMountedDisplayBase *this,bool param_1)

{
  this->bHeadTrackingEnforced = param_1;
  return;
}

