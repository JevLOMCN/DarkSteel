// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 35

// FDefaultSpectatorScreenController @ 14cf7d0e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FDefaultSpectatorScreenController * __thiscall
FDefaultSpectatorScreenController::FDefaultSpectatorScreenController
          (FDefaultSpectatorScreenController *this,FHeadMountedDisplayBase *param_1)

{
  this->SpectatorScreenMode_GameThread = SingleEyeCroppedToFill;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDefaultSpectatorScreenController__6B_;
  (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).EyeRectMax.field0_0x0._s_0.X = 1.0;
  (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).EyeRectMax.field0_0x0._s_0.Y = 1.0;
  (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).TextureRectMin.field0_0x0._s_0.X =
       0.125;
  (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).TextureRectMin.field0_0x0._s_0.Y =
       0.125;
  (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).TextureRectMax.field0_0x0._s_0.X =
       0.25;
  (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).TextureRectMax.field0_0x0._s_0.Y =
       0.25;
  this->_padding_ = 0;
  (this->SpectatorScreenTexture).WeakPtr = (FWeakObjectPtr)0x0;
  this->SpectatorScreenMode_RenderThread = SingleEyeCroppedToFill;
  (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).EyeRectMin.field0_0x0._s_0.X = 0.0;
  (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).EyeRectMin.field0_0x0._s_0.Y = 0.0;
  (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).bDrawEyeFirst = true;
  (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).bUseAlpha = false;
  (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).bClearBlack = false;
  this->FeatureLevel_RenderThread = GMaxRHIFeatureLevel;
  this->ShaderPlatform_RenderThread = GMaxRHIShaderPlatform;
  *(undefined8 *)&this->SpectatorScreenDelegate_RenderThread = 0;
  *(undefined8 *)&(this->SpectatorScreenDelegate_RenderThread).field_0x8 = 0;
  *(undefined4 *)&(this->SpectatorScreenDelegate_RenderThread).field_0x10 = 0;
  this->DelegateSpectatorScreenMode_RenderThread = Disabled;
  (this->DebugCanvasLayerIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugCanvasLayerIDs).ArrayNum = 0;
  (this->DebugCanvasLayerIDs).ArrayMax = 0;
  this->HMDDevice = param_1;
  (this->StereoLayersTexture).Reference = (FRHITexture *)0x0;
  return this;
}

// ~FDefaultSpectatorScreenController @ 14cf7ebe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::~FDefaultSpectatorScreenController
          (FDefaultSpectatorScreenController *this)

{
  int *piVar1;
  int iVar2;
  FRHITexture *this_00;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FDefaultSpectatorScreenController__6B_;
  this_00 = (this->StereoLayersTexture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar3 = (this->DebugCanvasLayerIDs).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->SpectatorScreenDelegate_RenderThread);
  pvVar4 = *(void **)&(this->SpectatorScreenDelegate_RenderThread).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SpectatorScreenDelegate_RenderThread);
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  this->_padding_ = (longlong)&___7ISpectatorScreenController__6B_;
  return;
}

// AddSpectatorModePass @ 14cf81ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::AddSpectatorModePass
          (FDefaultSpectatorScreenController *this,ESpectatorScreenMode param_1,FRDGBuilder *param_2
          ,FRDGTexture *param_3,FRDGTexture *param_4,FRDGTexture *param_5,TVector2<float> param_6)

{
  bool bVar1;
  IStereoRenderTargetManager *pIVar2;
  TIntRect<int> *pTVar3;
  TIntPoint<int>_u_0 *pTVar4;
  TIntPoint<int>_u_0_s_0 *pTVar5;
  FRDGEventName *pFVar6;
  undefined8 uVar7;
  TIntPoint<int>_u_0 TVar8;
  TIntRect<int>_u_0 local_b8;
  TIntRect<int>_u_0 local_a8;
  TIntRect<int>_u_0 local_98;
  FXRCopyTextureOptions local_88;
  FRDGEventName local_68;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  if (param_1 == Disabled) {
    return;
  }
  if (param_1 == TexturePlusEye) {
    AddSpectatorModePassTexturePlusEye(this,param_2,param_3,param_4,param_5);
    return;
  }
  local_a8._8_4_ = *(int *)&(param_3->Desc).field_0x24;
  local_a8._12_4_ = *(int *)&(param_3->Desc).field_0x28;
  local_88.FeatureLevel.FeatureLevel = this->FeatureLevel_RenderThread;
  local_88.ShaderPlatform.Platform = this->ShaderPlatform_RenderThread;
  local_88.LoadAction = ELoad;
  local_88.BlendMod = Opaque;
  local_88.bOutputMipChain = false;
  local_88.bNeedsDisplayMapping = false;
  local_88.bSrcIsLinear = false;
  local_88.bSrcSupportsHDR = false;
  local_88.bDstSupportsHDR = false;
  local_88._16_8_ = ___xmm_00000002000000020000000000000000;
  local_88._24_8_ = _UNK_152a70378;
  local_88.bClearBlack = false;
  local_a8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  pIVar2 = (IStereoRenderTargetManager *)
           (**(code **)(*(longlong *)&this->HMDDevice->field_0x100 + 0x80))();
  FXRCopyTextureOptions::SetDisplayMappingOptions(&local_88,pIVar2);
  bVar1 = true;
  if (param_1 == SingleEyeLetterboxed) {
    pTVar4 = (TIntPoint<int>_u_0 *)
             (**(code **)(this->_padding_ + 0x90))(this,&local_68,&param_4->Desc);
    TVar8 = *pTVar4;
    uVar7 = pTVar4[1];
    local_b8._s_0.Min.field0_0x0 = (TIntPoint<int>)TVar8;
    local_b8._s_0.Max.field0_0x0 = (TIntPoint<int>)uVar7;
    pTVar5 = (TIntPoint<int>_u_0_s_0 *)
             Helpers::GetLetterboxedDestRect
                       ((TIntRect<int> *)&local_68,(TIntRect<int> *)&local_b8._s_0,
                        (TIntRect<int> *)&local_a8._s_0);
    local_a8._s_0.Min.field0_0x0 = (TIntPoint<int>)*pTVar5;
    local_a8._s_0.Max.field0_0x0 = (TIntPoint<int>)pTVar5[1];
    local_88.bClearBlack = true;
    goto LAB_14cf82177;
  }
  if (param_1 == Undistorted) {
    local_b8._8_4_ = *(undefined4 *)&(param_4->Desc).field_0x24;
LAB_14cf8210a:
    local_b8._12_4_ = *(int *)&(param_4->Desc).field_0x28;
    param_5 = param_4;
  }
  else {
    if (param_1 == SingleEye) {
      local_b8._8_4_ = *(int *)&(param_4->Desc).field_0x24 / 2;
      goto LAB_14cf8210a;
    }
    if (param_1 == SingleEyeCroppedToFill) {
LAB_14cf82052:
      local_b8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      local_b8._12_4_ = (int)param_6.field0_0x0._s_0.Y;
      local_b8._8_4_ = (int)param_6.field0_0x0._s_0.X;
      pTVar3 = (TIntRect<int> *)(**(code **)(this->_padding_ + 0x90))(this,local_50,&param_4->Desc);
      pTVar4 = (TIntPoint<int>_u_0 *)
               (**(code **)(*(longlong *)this->HMDDevice + 0x230))(this->HMDDevice,local_40,0);
      local_98._s_0.Min.field0_0x0 = (TIntPoint<int>)*pTVar4;
      local_98._s_0.Max.field0_0x0 = (TIntPoint<int>)pTVar4[1];
      pTVar5 = (TIntPoint<int>_u_0_s_0 *)
               Helpers::GetEyeCroppedToFitRect
                         ((TIntRect<int> *)&local_68,(TVector2<double> *)&local_98._s_0,pTVar3,
                          (TIntRect<int> *)&local_b8._s_0);
      TVar8._s_0 = *pTVar5;
      uVar7 = *(TIntPoint<int>_u_0 *)(pTVar5 + 1);
      goto LAB_14cf82177;
    }
    if (param_1 != Texture) {
      if (GEngine != (UEngine *)0x0) {
        ::FString::PrintfImpl
                  ((FString *)&local_b8._s_0,
                   L"ESpectatorScreenMode %d is not available in the default spectator controller.")
        ;
        UEngine::AddOnScreenDebugMessage
                  (GEngine,(ulong64)this,__real_40000000,FColor::Red,(FString *)&local_b8._s_0,true,
                   &UE::Math::TVector2<double>::UnitVector);
        if ((TIntPoint<int>_u_0)local_b8._s_0.Min.field0_0x0 != (TIntPoint<int>_u_0)0x0) {
          FMemory::Free((void *)local_b8._s_0.Min.field0_0x0);
        }
      }
      goto LAB_14cf82052;
    }
    if (param_5 == (FRDGTexture *)0x0) {
      param_5 = (FRDGTexture *)(**(code **)(this->_padding_ + 0xe0))(this,param_2,6);
    }
    bVar1 = false;
    local_b8._s_0.Max.field0_0x0 = (TIntPoint<int>)*(undefined8 *)&(param_5->Desc).field_0x24;
  }
  TVar8 = (TIntPoint<int>_u_0)0x0;
  uVar7 = local_b8._s_0.Max.field0_0x0;
  param_4 = param_5;
LAB_14cf82177:
  local_b8._s_0.Min.field0_0x0 = local_a8._s_0.Min.field0_0x0;
  local_b8._s_0.Max.field0_0x0 = local_a8._s_0.Max.field0_0x0;
  local_98._s_0.Min.field0_0x0 = (TIntPoint<int>)TVar8;
  local_98._s_0.Max.field0_0x0 = (TIntPoint<int>)uVar7;
  pFVar6 = FRDGEventName::FRDGEventName(&local_68,1,L"DefaultSpectatorScreen_CopyTexture");
  AddXRCopyTexturePass
            (param_2,pFVar6,param_4,(TIntRect<int> *)&local_98._s_0,param_3,
             (TIntRect<int> *)&local_b8._s_0,&local_88);
  if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    local_98._s_0.Min.field0_0x0 = local_a8._s_0.Min.field0_0x0;
    local_98._s_0.Max.field0_0x0 = local_a8._s_0.Max.field0_0x0;
    local_a8._0_8_ = TVar8;
    local_a8._8_8_ = uVar7;
    CopyEmulatedLayers(this,param_2,param_3,(TIntRect<int> *)&local_a8._s_0,
                       (TIntRect<int> *)&local_98._s_0);
  }
  return;
}

// AddSpectatorModePassTexturePlusEye @ 14cf82250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::AddSpectatorModePassTexturePlusEye
          (FDefaultSpectatorScreenController *this,FRDGBuilder *param_1,FRDGTexture *param_2,
          FRDGTexture *param_3,FRDGTexture *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TIntPoint<int>_u_0 *pTVar3;
  IStereoRenderTargetManager *pIVar4;
  FRDGEventName *pFVar5;
  double dVar6;
  double dVar7;
  TIntRect<int>_u_0 local_c8;
  TIntRect<int>_u_0 local_b8;
  TIntRect<int>_u_0 local_a8;
  TIntRect<int>_u_0 local_90;
  TIntRect<int>_u_0 local_80;
  FXRCopyTextureOptions local_68;
  TIntRect<int> local_48;
  
  if (param_4 == (FRDGTexture *)0x0) {
    param_4 = (FRDGTexture *)(**(code **)(this->_padding_ + 0xe0))();
  }
  dVar7 = (double)*(int *)&(param_2->Desc).field_0x24;
  dVar6 = (double)*(int *)&(param_2->Desc).field_0x28;
  local_b8._12_4_ =
       (int)(dVar6 * (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).EyeRectMax.
                     field0_0x0._s_0.Y);
  local_b8._8_4_ =
       (int)(dVar7 * (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).EyeRectMax.
                     field0_0x0._s_0.X);
  local_b8._4_4_ =
       (int)(dVar6 * (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).EyeRectMin.
                     field0_0x0._s_0.Y);
  local_b8._0_4_ =
       (int)(dVar7 * (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).EyeRectMin.
                     field0_0x0._s_0.X);
  (**(code **)(this->_padding_ + 0x90))(this,&local_48,&param_3->Desc);
  pTVar3 = (TIntPoint<int>_u_0 *)
           (**(code **)(*(longlong *)this->HMDDevice + 0x230))(this->HMDDevice,&local_80,0);
  local_c8._s_0.Min.field0_0x0 = (TIntPoint<int>)*pTVar3;
  local_c8._s_0.Max.field0_0x0 = (TIntPoint<int>)pTVar3[1];
  Helpers::GetEyeCroppedToFitRect
            ((TIntRect<int> *)&local_a8._s_0,(TVector2<double> *)&local_c8._s_0,&local_48,
             (TIntRect<int> *)&local_b8._s_0);
  dVar7 = (double)*(int *)&(param_2->Desc).field_0x24;
  local_80._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  dVar6 = (double)*(int *)&(param_2->Desc).field_0x28;
  local_90._4_4_ =
       (int)(dVar6 * (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).TextureRectMin.
                     field0_0x0._s_0.Y);
  local_90._0_4_ =
       (int)(dVar7 * (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).TextureRectMin.
                     field0_0x0._s_0.X);
  local_90._12_4_ =
       (int)(dVar6 * (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).TextureRectMax.
                     field0_0x0._s_0.Y);
  local_90._8_4_ =
       (int)(dVar7 * (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).TextureRectMax.
                     field0_0x0._s_0.X);
  local_80._s_0.Max.field0_0x0 = (TIntPoint<int>)*(undefined8 *)&(param_4->Desc).field_0x24;
  local_68.FeatureLevel.FeatureLevel = this->FeatureLevel_RenderThread;
  local_68.ShaderPlatform.Platform = this->ShaderPlatform_RenderThread;
  local_68.bClearBlack = (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).bClearBlack;
  local_68.LoadAction = ELoad;
  local_68.BlendMod = Opaque;
  local_68.bOutputMipChain = false;
  local_68.bNeedsDisplayMapping = false;
  local_68.bSrcIsLinear = false;
  local_68.bSrcSupportsHDR = false;
  local_68.bDstSupportsHDR = false;
  local_68.SrcColorGamut = ___xmm_00000002000000020000000000000000;
  local_68.DstColorGamut = _UNK_152a70374;
  local_68.SrcDisplayFormat = _UNK_152a70378;
  local_68.DstDisplayFormat = _UNK_152a7037c;
  pIVar4 = (IStereoRenderTargetManager *)
           (**(code **)(*(longlong *)&this->HMDDevice->field_0x100 + 0x80))();
  FXRCopyTextureOptions::SetDisplayMappingOptions(&local_68,pIVar4);
  uVar2 = local_b8._s_0.Max.field0_0x0;
  uVar1 = local_b8._s_0.Min.field0_0x0;
  if ((this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).bDrawEyeFirst == false) {
    local_c8._s_0.Min.field0_0x0 = local_90._s_0.Min.field0_0x0;
    local_c8._s_0.Max.field0_0x0 = local_90._s_0.Max.field0_0x0;
    local_90._s_0.Min.field0_0x0 = local_80._s_0.Min.field0_0x0;
    local_90._s_0.Max.field0_0x0 = local_80._s_0.Max.field0_0x0;
    pFVar5 = FRDGEventName::FRDGEventName
                       ((FRDGEventName *)&local_80._s_0,1,
                        L"DefaultSpectatorScreen_TexturePlusEye_OtherTexture1st");
    AddXRCopyTexturePass
              (param_1,pFVar5,param_4,(TIntRect<int> *)&local_90._s_0,param_2,
               (TIntRect<int> *)&local_c8._s_0,&local_68);
    if ((TIntPoint<int>_u_0)local_80._s_0.Max.field0_0x0 != (TIntPoint<int>_u_0)0x0) {
      FMemory::Free((void *)local_80._s_0.Max.field0_0x0);
    }
    uVar2 = local_b8._s_0.Max.field0_0x0;
    uVar1 = local_b8._s_0.Min.field0_0x0;
    local_68.bClearBlack = false;
    local_80._s_0.Min.field0_0x0 = local_a8._s_0.Min.field0_0x0;
    local_c8._s_0.Min.field0_0x0 = local_b8._s_0.Min.field0_0x0;
    local_c8._s_0.Max.field0_0x0 = local_b8._s_0.Max.field0_0x0;
    local_80._s_0.Max.field0_0x0 = local_a8._s_0.Max.field0_0x0;
    pFVar5 = FRDGEventName::FRDGEventName
                       ((FRDGEventName *)&local_a8._s_0,1,
                        L"DefaultSpectatorScreen_TexturePlusEye_EyeTexture2nd");
    AddXRCopyTexturePass
              (param_1,pFVar5,param_3,(TIntRect<int> *)&local_80._s_0,param_2,
               (TIntRect<int> *)&local_c8._s_0,&local_68);
    if ((TIntPoint<int>_u_0)local_a8._s_0.Max.field0_0x0 != (TIntPoint<int>_u_0)0x0) {
      FMemory::Free((void *)local_a8._s_0.Max.field0_0x0);
    }
    local_c8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar1;
    local_c8._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar2;
    CopyEmulatedLayers(this,param_1,param_2,(TIntRect<int> *)&local_a8._s_0,
                       (TIntRect<int> *)&local_c8._s_0);
  }
  else {
    local_c8._s_0.Min.field0_0x0 = local_b8._s_0.Min.field0_0x0;
    local_c8._s_0.Max.field0_0x0 = local_b8._s_0.Max.field0_0x0;
    local_b8._s_0.Min.field0_0x0 = local_a8._s_0.Min.field0_0x0;
    local_b8._s_0.Max.field0_0x0 = local_a8._s_0.Max.field0_0x0;
    pFVar5 = FRDGEventName::FRDGEventName
                       ((FRDGEventName *)&local_a8._s_0,1,
                        L"DefaultSpectatorScreen_TexturePlusEye_EyeTexture1st");
    AddXRCopyTexturePass
              (param_1,pFVar5,param_3,(TIntRect<int> *)&local_b8._s_0,param_2,
               (TIntRect<int> *)&local_c8._s_0,&local_68);
    if ((TIntPoint<int>_u_0)local_a8._s_0.Max.field0_0x0 != (TIntPoint<int>_u_0)0x0) {
      FMemory::Free((void *)local_a8._s_0.Max.field0_0x0);
    }
    local_c8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar1;
    local_c8._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar2;
    CopyEmulatedLayers(this,param_1,param_2,(TIntRect<int> *)&local_a8._s_0,
                       (TIntRect<int> *)&local_c8._s_0);
    local_c8._s_0.Min.field0_0x0 = local_90._s_0.Min.field0_0x0;
    local_c8._s_0.Max.field0_0x0 = local_90._s_0.Max.field0_0x0;
    local_a8._s_0.Min.field0_0x0 = local_80._s_0.Min.field0_0x0;
    local_68._6_2_ =
         CONCAT11(-((this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).bUseAlpha != false)
                  ,local_68.LoadAction) & 0x2ff;
    local_a8._s_0.Max.field0_0x0 = local_80._s_0.Max.field0_0x0;
    pFVar5 = FRDGEventName::FRDGEventName
                       ((FRDGEventName *)&local_80._s_0,1,
                        L"DefaultSpectatorScreen_TexturePlusEye_OtherTexture2nd");
    AddXRCopyTexturePass
              (param_1,pFVar5,param_4,(TIntRect<int> *)&local_a8._s_0,param_2,
               (TIntRect<int> *)&local_c8._s_0,&local_68);
    if ((TIntPoint<int>_u_0)local_80._s_0.Max.field0_0x0 != (TIntPoint<int>_u_0)0x0) {
      FMemory::Free((void *)local_80._s_0.Max.field0_0x0);
    }
  }
  return;
}

// BeginRenderViewFamily @ 14cf831f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::BeginRenderViewFamily
          (FDefaultSpectatorScreenController *this,FSceneViewFamily *param_1)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  Type TVar4;
  UTexture *this_00;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar5;
  code **ppcVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  FDefaultSpectatorScreenController *local_b8;
  FTextureResource *pFStack_b0;
  Type local_a8;
  EShaderPlatform EStack_a4;
  undefined2 uStack_a2;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
                       ,0x5a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (UTexture *)FWeakObjectPtr::Get(&(this->SpectatorScreenTexture).WeakPtr);
  if (this_00 == (UTexture *)0x0) {
    pFStack_b0 = (FTextureResource *)0x0;
  }
  else {
    pFStack_b0 = UTexture::GetResource(this_00);
  }
  TVar3 = FSceneViewFamily::GetFeatureLevel(param_1);
  TVar4 = FSceneViewFamily::GetFeatureLevel(param_1);
  if (TVar4 == Num) {
    EStack_a4 = SP_NumPlatforms;
  }
  else {
    EStack_a4 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar4];
  }
  local_98[0] = (code *)0x0;
  local_b8 = this;
  local_a8 = TVar3;
  local_70 = FMemory::Malloc(0x20,8);
  *local_70 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FDefaultSpectatorScreenController::BeginRenderViewFamily'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_70[1] = (code *)local_b8;
  local_70[2] = (code *)pFStack_b0;
  local_70[3] = (code *)CONCAT26(uStack_a2,CONCAT24(EStack_a4,local_a8));
  if (local_70 + 1 != (code **)0x0) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDefaultSpectatorScreenController::BeginRenderViewFamily'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FDefaultSpectatorScreenController::BeginRenderViewFamily_::__l2::TSTR_SetSpectatorScreenTexture97>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_70 = (code **)0x0;
    local_68._16_8_ = local_88[0];
    local_68._24_8_ = local_88[1];
    local_68._32_8_ = local_88[2];
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FDefaultSpectatorScreenController::BeginRenderViewFamily'::__l2::TSTR_SetSpectatorScreenTexture97>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar5);
    uVar7 = (ulonglong)local_38;
    if (2 < uVar7) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        ppcVar6 = (code **)(local_68 + 0x10);
        if (local_40 != (code **)0x0) {
          ppcVar6 = local_40;
        }
        (**(code **)(*ppcVar6 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    ppcVar6 = local_98 + 2;
    if (local_70 != (code **)0x0) {
      ppcVar6 = local_70;
    }
    (**(code **)(*ppcVar6 + 0x10))();
  }
  return;
}

// BeginRenderViewFamily @ 14cf83420

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::BeginRenderViewFamily(FDefaultSpectatorScreenController *this)

{
  return;
}

// CopyEmulatedLayers @ 14cf85430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::CopyEmulatedLayers
          (FDefaultSpectatorScreenController *this,FRDGBuilder *param_1,FRDGTexture *param_2,
          TIntRect<int> *param_3,TIntRect<int> *param_4)

{
  FRDGTexture *pFVar1;
  IStereoRenderTargetManager *pIVar2;
  FRDGEventName *pFVar3;
  TIntRect<int>_u_0 local_78;
  TIntRect<int>_u_0 local_68;
  FRDGEventName local_58;
  FXRCopyTextureOptions local_40;
  
  if (this->StereoLayersTextureRDG == (FRDGTexture *)0x0) {
    this->StereoLayersTextureRDG = (FRDGTexture *)0x0;
  }
  else {
    local_40.FeatureLevel.FeatureLevel = this->FeatureLevel_RenderThread;
    local_40.ShaderPlatform.Platform = this->ShaderPlatform_RenderThread;
    local_40.LoadAction = ELoad;
    local_40.BlendMod = PremultipliedAlphaBlend;
    local_40.bOutputMipChain = false;
    local_40.bNeedsDisplayMapping = false;
    local_40.bSrcIsLinear = false;
    local_40.bSrcSupportsHDR = false;
    local_40.bDstSupportsHDR = false;
    local_40._16_8_ = ___xmm_00000002000000020000000000000000;
    local_40._24_8_ = _UNK_152a70378;
    local_40.bClearBlack = false;
    pIVar2 = (IStereoRenderTargetManager *)
             (**(code **)(*(longlong *)&this->HMDDevice->field_0x100 + 0x80))();
    FXRCopyTextureOptions::SetDisplayMappingOptions(&local_40,pIVar2);
    local_78._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_4->field0_0x0)._s_0.Min.field0_0x0;
    local_78._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_4->field0_0x0)._s_0.Max.field0_0x0;
    local_68._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Min.field0_0x0;
    local_68._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Max.field0_0x0;
    pFVar1 = this->StereoLayersTextureRDG;
    pFVar3 = FRDGEventName::FRDGEventName(&local_58,1,L"DefaultSpectatorScreen_CopyEmulatedLayers");
    AddXRCopyTexturePass
              (param_1,pFVar3,pFVar1,(TIntRect<int> *)&local_68._s_0,param_2,
               (TIntRect<int> *)&local_78._s_0,&local_40);
    if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
    }
    this->StereoLayersTextureRDG = (FRDGTexture *)0x0;
  }
  return;
}

// CopyEmulatedLayers @ 14cf85570

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::CopyEmulatedLayers
          (FDefaultSpectatorScreenController *this,FRHICommandListImmediate *param_1,
          TRefCountPtr<FRHITexture> param_2,TIntRect<int> *param_3,TIntRect<int> *param_4)

{
  FRHITexture *this_00;
  
  if ((this->StereoLayersTexture).Reference != (FRHITexture *)0x0) {
    (**(code **)(*(longlong *)this->HMDDevice + 0x248))();
  }
  this_00 = (this->StereoLayersTexture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->StereoLayersTexture).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if ((FRHIResource *)(param_2.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_2.Reference)->_padding_);
  }
  return;
}

// GetEyeCroppedToFitRect @ 14cf8f3d0

TIntRect<int> * __cdecl
FDefaultSpectatorScreenController::Helpers::GetEyeCroppedToFitRect
          (TIntRect<int> *__return_storage_ptr__,TVector2<double> *param_1,TIntRect<int> *param_2,
          TIntRect<int> *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TIntRect<int> *pTVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar2 = *(undefined8 *)&param_2->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = uVar2;
  if (((int)((ulonglong)uVar3 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20)) *
      ((int)uVar3 - (int)uVar2) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SrcRect.Area() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
                       ,500,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TIntRect<int> *)(*pcVar4)();
      return pTVar7;
    }
  }
  if ((*(int *)((longlong)&param_3->field0_0x0 + 8) - *(int *)&param_3->field0_0x0) *
      (*(int *)((longlong)&param_3->field0_0x0 + 0xc) - *(int *)((longlong)&param_3->field0_0x0 + 4)
      ) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetRect.Area() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
                       ,0x1f5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TIntRect<int> *)(*pcVar4)();
      return pTVar7;
    }
  }
  fVar13 = (float)(*(int *)((longlong)&param_2->field0_0x0 + 0xc) -
                  *(int *)((longlong)&param_2->field0_0x0 + 4));
  fVar12 = (float)(*(int *)((longlong)&param_2->field0_0x0 + 8) - *(int *)&param_2->field0_0x0);
  fVar11 = fVar12 / fVar13;
  fVar10 = (float)(*(int *)((longlong)&param_3->field0_0x0 + 8) - *(int *)&param_3->field0_0x0) /
           (float)(*(int *)((longlong)&param_3->field0_0x0 + 0xc) -
                  *(int *)((longlong)&param_3->field0_0x0 + 4));
  if (fVar10 <= fVar11) {
    iVar9 = (int)((fVar12 - (fVar10 / fVar11) * fVar12) * __real_3f000000);
    iVar6 = (int)(((float)(param_1->field0_0x0)._s_0.X - __real_3f000000) * fVar12);
    iVar8 = iVar9;
    if (iVar6 < iVar9) {
      iVar8 = iVar6;
    }
    iVar6 = -iVar9;
    if (-iVar9 < iVar8) {
      iVar6 = iVar8;
    }
    *(int *)&__return_storage_ptr__->field0_0x0 =
         *(int *)&__return_storage_ptr__->field0_0x0 + iVar6 + iVar9;
    piVar1 = (int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8);
    *piVar1 = *piVar1 + (iVar6 - iVar9);
  }
  else {
    iVar9 = (int)((fVar13 - (fVar11 / fVar10) * fVar13) * __real_3f000000);
    iVar6 = (int)(((float)(param_1->field0_0x0)._s_0.Y - __real_3f000000) * fVar13);
    iVar8 = iVar9;
    if (iVar6 < iVar9) {
      iVar8 = iVar6;
    }
    iVar6 = -iVar9;
    if (-iVar9 < iVar8) {
      iVar6 = iVar8;
    }
    piVar1 = (int *)((longlong)&__return_storage_ptr__->field0_0x0 + 4);
    *piVar1 = *piVar1 + iVar6 + iVar9;
    piVar1 = (int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc);
    *piVar1 = *piVar1 + (iVar6 - iVar9);
  }
  return __return_storage_ptr__;
}

// GetFallbackRDGTexture @ 14cf8f5a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FDefaultSpectatorScreenController::GetFallbackRDGTexture
          (FDefaultSpectatorScreenController *this,FRDGBuilder *param_1)

{
  FRHITexture *pFVar1;
  FRDGTexture *pFVar2;
  TRefCountPtr<IPooledRenderTarget> TVar3;
  FRHITexture *pFVar4;
  longlong *local_res18;
  
  pFVar1 = (GBlackTexture->TextureRHI).Reference;
  pFVar4 = (FRHITexture *)0x0;
  if ((pFVar1->TextureDesc).Dimension == Texture2D) {
    pFVar4 = pFVar1;
  }
  pFVar2 = FRDGBuilder::FindExternalTexture(param_1,pFVar4);
  if (pFVar2 == (FRDGTexture *)0x0) {
    TVar3 = CreateRenderTarget((FRHITexture *)&local_res18,(wchar_t *)pFVar4);
    pFVar2 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar3.Reference,None);
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x38))();
    }
  }
  return pFVar2;
}

// GetFallbackRHITexture @ 14cf8f620

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRHITexture * __thiscall
FDefaultSpectatorScreenController::GetFallbackRHITexture(FDefaultSpectatorScreenController *this)

{
  FRHITexture *pFVar1;
  FRHITexture *pFVar2;
  
  pFVar1 = (GBlackTexture->TextureRHI).Reference;
  pFVar2 = (FRHITexture *)0x0;
  if ((pFVar1->TextureDesc).Dimension == Texture2D) {
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// GetFullFlatEyeRect_RenderThread @ 14cf8f690

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntRect<int> * __thiscall
FDefaultSpectatorScreenController::GetFullFlatEyeRect_RenderThread
          (FDefaultSpectatorScreenController *this,TIntRect<int> *__return_storage_ptr__,
          FRHITextureDesc *param_1)

{
  (**(code **)(*(longlong *)this->HMDDevice + 0x240))();
  return __return_storage_ptr__;
}

// GetFullFlatEyeRect_RenderThread @ 14cf8f6c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntRect<int> * __thiscall
FDefaultSpectatorScreenController::GetFullFlatEyeRect_RenderThread
          (FDefaultSpectatorScreenController *this,TIntRect<int> *__return_storage_ptr__,
          TRefCountPtr<FRHITexture> param_1)

{
  FRHIResource *this_00;
  
  this_00 = (FRHIResource *)(param_1.Reference)->_padding_;
  if (this_00 == (FRHIResource *)0x0) {
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 1;
    (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 1;
  }
  else {
    FRHIResource::AddRef(this_00);
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 1;
    (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 1;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)(param_1.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_1.Reference)->_padding_);
  }
  return __return_storage_ptr__;
}

// GetLetterboxedDestRect @ 14cf8fb10

TIntRect<int> * __cdecl
FDefaultSpectatorScreenController::Helpers::GetLetterboxedDestRect
          (TIntRect<int> *__return_storage_ptr__,TIntRect<int> *param_1,TIntRect<int> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TIntRect<int> *pTVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 =
       (param_2->field0_0x0)._s_0.Min.field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Max.field0_0x0 =
       (param_2->field0_0x0)._s_0.Max.field0_0x0;
  if ((*(int *)((longlong)&param_1->field0_0x0 + 0xc) - *(int *)((longlong)&param_1->field0_0x0 + 4)
      ) * (*(int *)((longlong)&param_1->field0_0x0 + 8) - *(int *)&param_1->field0_0x0) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SrcRect.Area() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
                       ,0x21d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TIntRect<int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  if ((*(int *)((longlong)&param_2->field0_0x0 + 8) - *(int *)&param_2->field0_0x0) *
      (*(int *)((longlong)&param_2->field0_0x0 + 0xc) - *(int *)((longlong)&param_2->field0_0x0 + 4)
      ) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetRect.Area() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
                       ,0x21e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TIntRect<int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  fVar7 = (float)(*(int *)((longlong)&param_1->field0_0x0 + 8) - *(int *)&param_1->field0_0x0) /
          (float)(*(int *)((longlong)&param_1->field0_0x0 + 0xc) -
                 *(int *)((longlong)&param_1->field0_0x0 + 4));
  fVar8 = (float)(*(int *)((longlong)&param_2->field0_0x0 + 8) - *(int *)&param_2->field0_0x0);
  fVar9 = (float)(*(int *)((longlong)&param_2->field0_0x0 + 0xc) -
                 *(int *)((longlong)&param_2->field0_0x0 + 4));
  fVar6 = fVar8 / fVar9;
  if (fVar7 < fVar6) {
    iVar4 = (int)((fVar8 - (fVar7 / fVar6) * fVar8) * __real_3f000000);
    *(int *)&__return_storage_ptr__->field0_0x0 =
         *(int *)&__return_storage_ptr__->field0_0x0 + iVar4;
    piVar1 = (int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8);
    *piVar1 = *piVar1 - iVar4;
    return __return_storage_ptr__;
  }
  iVar4 = (int)((fVar9 - (fVar6 / fVar7) * fVar9) * __real_3f000000);
  piVar1 = (int *)((longlong)&__return_storage_ptr__->field0_0x0 + 4);
  *piVar1 = *piVar1 + iVar4;
  piVar1 = (int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc);
  *piVar1 = *piVar1 - iVar4;
  return __return_storage_ptr__;
}

// GetSpectatorScreenMode @ 14cf90cc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

ESpectatorScreenMode __thiscall
FDefaultSpectatorScreenController::GetSpectatorScreenMode(FDefaultSpectatorScreenController *this)

{
  code *pcVar1;
  bool bVar2;
  ESpectatorScreenMode EVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
                       ,0x1f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return this->SpectatorScreenMode_GameThread;
}

// GetSpectatorScreenRenderDelegate_RenderThread @ 14cf90d10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TDelegate<void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
* __thiscall
FDefaultSpectatorScreenController::GetSpectatorScreenRenderDelegate_RenderThread
          (FDefaultSpectatorScreenController *this)

{
  return &this->SpectatorScreenDelegate_RenderThread;
}

// GetSpectatorScreenTexture @ 14cf90d20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

UTexture * __thiscall
FDefaultSpectatorScreenController::GetSpectatorScreenTexture
          (FDefaultSpectatorScreenController *this)

{
  bool bVar1;
  UTexture *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->SpectatorScreenTexture).WeakPtr);
  if (bVar1) {
    pUVar2 = (UTexture *)FWeakObjectPtr::Get(&(this->SpectatorScreenTexture).WeakPtr);
    return pUVar2;
  }
  return (UTexture *)0x0;
}

// RenderSpectatorModeDistorted @ 14cf989e0

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

void __thiscall
FDefaultSpectatorScreenController::RenderSpectatorModeDistorted
          (FDefaultSpectatorScreenController *this,FRHICommandListImmediate *param_1,
          TRefCountPtr<FRHITexture> param_2,TRefCountPtr<FRHITexture> param_3,
          TRefCountPtr<FRHITexture> param_4,TVector2<double> *param_5)

{
  undefined4 uVar1;
  FRHIResource *this_00;
  FRHIResource *this_01;
  FRHIResource *this_02;
  code *pcVar2;
  double dVar3;
  double dVar4;
  TIntPoint<int>_u_0 TVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  double *pdVar9;
  TVector2<double> *in_stack_ffffffffffffff38;
  TIntPoint<int>_u_0 local_b8;
  TIntPoint<int>_u_0 local_b0;
  TIntRect<int>_u_0 local_a8;
  TIntRect<int>_u_0 local_98;
  TIntRect<int> local_88;
  TVector2<double>_u_0 local_78;
  undefined1 local_68 [40];
  
  if (GEngine != (UEngine *)0x0) {
    ::FString::FString((FString *)&local_a8._s_0,
                       L"Distorted mode is not available in the default spectator controller.");
    in_stack_ffffffffffffff38 = &UE::Math::TVector2<double>::UnitVector;
    UEngine::AddOnScreenDebugMessage
              (GEngine,(ulong64)this,__real_40000000,FColor::Red,(FString *)&local_a8._s_0,true,
               &UE::Math::TVector2<double>::UnitVector);
    if ((TIntPoint<int>_u_0)local_a8._s_0.Min.field0_0x0 != (TIntPoint<int>_u_0)0x0) {
      FMemory::Free((void *)local_a8._s_0.Min.field0_0x0);
    }
  }
  this_00 = (FRHIResource *)(param_4.Reference)->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_00);
  }
  this_01 = (FRHIResource *)(param_3.Reference)->_padding_;
  if (this_01 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_01);
  }
  this_02 = (FRHIResource *)(param_2.Reference)->_padding_;
  if (this_02 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_02);
  }
  dVar3 = (param_5->field0_0x0)._s_0.X;
  dVar4 = (param_5->field0_0x0)._s_0.Y;
  pcVar2 = *(code **)(this->_padding_ + 0x90);
  uVar7 = (**(code **)(this_01->_padding_ + 0x20))(this_01);
  (*pcVar2)(this,&local_88,uVar7);
  lVar8 = (**(code **)(this_02->_padding_ + 0x20))(this_02);
  local_b8 = (TIntPoint<int>_u_0)0x0;
  uVar1 = *(undefined4 *)(lVar8 + 0x28);
  lVar8 = (**(code **)(this_02->_padding_ + 0x20))(this_02);
  local_a8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_b0._s_0.Y = uVar1;
  local_b0._s_0.X = *(undefined4 *)(lVar8 + 0x24);
  local_a8._12_4_ = (int)dVar4;
  local_a8._8_4_ = (int)dVar3;
  pdVar9 = (double *)(**(code **)(*(longlong *)this->HMDDevice + 0x230))(this->HMDDevice,local_68,0)
  ;
  local_78._s_0.X = *pdVar9;
  local_78._s_0.Y = pdVar9[1];
  Helpers::GetEyeCroppedToFitRect
            ((TIntRect<int> *)&local_98._s_0,(TVector2<double> *)&local_78._s_0,&local_88,
             (TIntRect<int> *)&local_a8._s_0);
  uVar6 = local_98._s_0.Max.field0_0x0;
  uVar7 = local_98._s_0.Min.field0_0x0;
  TVar5 = local_b0;
  local_a8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_b8 = (TIntPoint<int>_u_0)local_98._s_0.Min.field0_0x0;
  local_a8._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_b0;
  local_b0 = (TIntPoint<int>_u_0)local_98._s_0.Max.field0_0x0;
  (**(code **)(*(longlong *)this->HMDDevice + 0x248))
            (this->HMDDevice,param_1,this_01,&local_b8,this_02,&local_a8,
             (ulonglong)in_stack_ffffffffffffff38 & 0xffffffffffffff00,1);
  local_98._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_98._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)TVar5;
  local_a8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar7;
  local_a8._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar6;
  param_5 = (TVector2<double> *)this_02;
  FRHIResource::AddRef(this_02);
  CopyEmulatedLayers(this,param_1,(FRHITexture *)&param_5,(TIntRect<int> *)&local_a8._s_0,
                     (TIntRect<int> *)&local_98._s_0);
  FRHIResource::Release(this_02);
  FRHIResource::Release(this_01);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)(param_2.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_2.Reference)->_padding_);
  }
  if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
  }
  if ((FRHIResource *)(param_4.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_4.Reference)->_padding_);
  }
  return;
}

// RenderSpectatorModeMirrorAndTexture @ 14cf98c40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::RenderSpectatorModeMirrorAndTexture
          (FDefaultSpectatorScreenController *this,FRHICommandListImmediate *param_1,
          TRefCountPtr<FRHITexture> param_2,TRefCountPtr<FRHITexture> param_3,
          TRefCountPtr<FRHITexture> param_4,TVector2<double> *param_5)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  FHeadMountedDisplayBase *pFVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  TIntPoint<int>_u_0 *pTVar8;
  FRHITexture *pFVar9;
  FRHITexture *pFVar10;
  FRHITexture *local_res18;
  FRHITexture *local_res20;
  TIntRect<int>_u_0 local_98;
  TIntPoint<int>_u_0 local_88;
  TIntPoint<int>_u_0 local_80;
  TIntPoint<int>_u_0 local_78;
  TIntPoint<int>_u_0 local_70;
  TIntRect<int>_u_0 local_68;
  TIntRect<int>_u_0 local_58;
  TIntRect<int> local_48;
  
  pFVar10 = (FRHITexture *)(param_4.Reference)->_padding_;
  if (((FRHITexture *)(param_4.Reference)->_padding_ == (FRHITexture *)0x0) &&
     (pFVar9 = (GBlackTexture->TextureRHI).Reference, pFVar10 = (FRHITexture *)0x0,
     (pFVar9->TextureDesc).Dimension == Texture2D)) {
    pFVar10 = pFVar9;
  }
  local_res18 = param_2.Reference;
  local_res20 = param_3.Reference;
  lVar6 = (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x20))();
  iVar1 = *(int *)(lVar6 + 0x28);
  lVar6 = (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x20))();
  local_98._4_4_ =
       (int)((double)iVar1 *
            (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).EyeRectMin.field0_0x0._s_0.
            Y);
  local_98._0_4_ =
       (int)((double)*(int *)(lVar6 + 0x24) *
            (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).EyeRectMin.field0_0x0._s_0.
            X);
  local_98._12_4_ =
       (int)((double)iVar1 *
            (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).EyeRectMax.field0_0x0._s_0.
            Y);
  local_98._8_4_ =
       (int)((double)*(int *)(lVar6 + 0x24) *
            (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).EyeRectMax.field0_0x0._s_0.
            X);
  pcVar3 = *(code **)(this->_padding_ + 0x90);
  uVar7 = (**(code **)(*(longlong *)(param_3.Reference)->_padding_ + 0x20))();
  (*pcVar3)(this,&local_48,uVar7);
  pTVar8 = (TIntPoint<int>_u_0 *)
           (**(code **)(*(longlong *)this->HMDDevice + 0x230))(this->HMDDevice,&local_78,0);
  local_58._s_0.Min.field0_0x0 = (TIntPoint<int>)*pTVar8;
  local_58._s_0.Max.field0_0x0 = (TIntPoint<int>)pTVar8[1];
  Helpers::GetEyeCroppedToFitRect
            ((TIntRect<int> *)&local_68._s_0,(TVector2<double> *)&local_58._s_0,&local_48,
             (TIntRect<int> *)&local_98._s_0);
  lVar6 = (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x20))();
  iVar1 = *(int *)(lVar6 + 0x28);
  lVar6 = (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x20))();
  local_88._s_0.Y =
       (int)((double)iVar1 *
            (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).TextureRectMin.field0_0x0.
            _s_0.Y);
  local_88._s_0.X =
       (int)((double)*(int *)(lVar6 + 0x24) *
            (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).TextureRectMin.field0_0x0.
            _s_0.X);
  local_80._s_0.Y =
       (int)((double)iVar1 *
            (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).TextureRectMax.field0_0x0.
            _s_0.Y);
  local_80._s_0.X =
       (int)((double)*(int *)(lVar6 + 0x24) *
            (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).TextureRectMax.field0_0x0.
            _s_0.X);
  lVar6 = (**(code **)(pFVar10->_padding_ + 0x20))(pFVar10);
  local_78 = (TIntPoint<int>_u_0)0x0;
  uVar2 = *(undefined4 *)(lVar6 + 0x28);
  lVar6 = (**(code **)(pFVar10->_padding_ + 0x20))(pFVar10);
  uVar5 = local_98._s_0.Max.field0_0x0;
  uVar7 = local_98._s_0.Min.field0_0x0;
  pFVar4 = this->HMDDevice;
  local_70._s_0.Y = uVar2;
  local_70._s_0.X = *(undefined4 *)(lVar6 + 0x24);
  if ((this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).bDrawEyeFirst == false) {
    local_58._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_88;
    local_58._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_80;
    local_88 = local_78;
    local_80 = local_70;
    (**(code **)(*(longlong *)pFVar4 + 0x248))
              (pFVar4,param_1,pFVar10,&local_88,(param_2.Reference)->_padding_,&local_58,
               (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).bClearBlack,1);
    uVar5 = local_98._s_0.Max.field0_0x0;
    uVar7 = local_98._s_0.Min.field0_0x0;
    pFVar10 = local_res20;
    local_58._s_0.Min.field0_0x0 = local_98._s_0.Min.field0_0x0;
    local_58._s_0.Max.field0_0x0 = local_98._s_0.Max.field0_0x0;
    local_78 = (TIntPoint<int>_u_0)local_68._s_0.Min.field0_0x0;
    local_70 = (TIntPoint<int>_u_0)local_68._s_0.Max.field0_0x0;
    (**(code **)(*(longlong *)this->HMDDevice + 0x248))
              (this->HMDDevice,param_1,local_res20->_padding_,&local_78,local_res18->_padding_,
               &local_58,0,1);
    pFVar9 = local_res18;
    local_58._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar7;
    local_58._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar5;
    local_res20 = (FRHITexture *)local_res18->_padding_;
    if (local_res20 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_res20);
    }
    CopyEmulatedLayers(this,param_1,(FRHITexture *)&local_res20,(TIntRect<int> *)&local_68._s_0,
                       (TIntRect<int> *)&local_58._s_0);
  }
  else {
    local_58._s_0.Min.field0_0x0 = local_98._s_0.Min.field0_0x0;
    local_58._s_0.Max.field0_0x0 = local_98._s_0.Max.field0_0x0;
    local_98._s_0.Min.field0_0x0 = local_68._s_0.Min.field0_0x0;
    local_98._s_0.Max.field0_0x0 = local_68._s_0.Max.field0_0x0;
    (**(code **)(*(longlong *)pFVar4 + 0x248))
              (pFVar4,param_1,local_res20->_padding_,&local_98,(param_2.Reference)->_padding_,
               &local_58);
    pFVar9 = local_res18;
    local_58._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar7;
    local_58._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar5;
    local_res18 = (FRHITexture *)local_res18->_padding_;
    if (local_res18 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_res18);
    }
    CopyEmulatedLayers(this,param_1,(FRHITexture *)&local_res18,(TIntRect<int> *)&local_68._s_0,
                       (TIntRect<int> *)&local_58._s_0);
    local_58._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_88;
    local_58._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_80;
    local_68._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_78;
    local_68._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_70;
    (**(code **)(*(longlong *)this->HMDDevice + 0x248))
              (this->HMDDevice,param_1,pFVar10,&local_68,pFVar9->_padding_,&local_58,0,
               (this->SpectatorScreenModeTexturePlusEyeLayout_RenderThread).bUseAlpha == false);
    pFVar10 = local_res20;
  }
  if ((FRHIResource *)pFVar9->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar9->_padding_);
  }
  if ((FRHIResource *)pFVar10->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar10->_padding_);
  }
  if ((FRHIResource *)(param_4.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_4.Reference)->_padding_);
  }
  return;
}

// RenderSpectatorModeSingleEye @ 14cf99010

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::RenderSpectatorModeSingleEye
          (FDefaultSpectatorScreenController *this,FRHICommandListImmediate *param_1,
          TRefCountPtr<FRHITexture> param_2,TRefCountPtr<FRHITexture> param_3,
          TRefCountPtr<FRHITexture> param_4,TVector2<double> *param_5)

{
  undefined4 uVar1;
  TIntPoint<int>_u_0 TVar2;
  undefined8 uVar3;
  longlong lVar4;
  FRHIResource *local_res8;
  undefined8 local_58;
  TIntPoint<int>_u_0 local_50;
  TIntRect<int>_u_0 local_48;
  TIntRect<int>_u_0 local_38;
  
  lVar4 = (**(code **)(*(longlong *)(param_3.Reference)->_padding_ + 0x20))();
  local_48._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  uVar1 = *(undefined4 *)(lVar4 + 0x28);
  lVar4 = (**(code **)(*(longlong *)(param_3.Reference)->_padding_ + 0x20))();
  local_48._12_4_ = uVar1;
  local_48._8_4_ = *(uint *)(lVar4 + 0x24) >> 1;
  lVar4 = (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x20))();
  local_58 = 0;
  uVar1 = *(undefined4 *)(lVar4 + 0x28);
  lVar4 = (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x20))();
  uVar3 = local_48._s_0.Max.field0_0x0;
  local_50._s_0.Y = uVar1;
  local_50._s_0.X = *(undefined4 *)(lVar4 + 0x24);
  TVar2 = local_50;
  local_38._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_38._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_50;
  local_58 = 0;
  local_50 = (TIntPoint<int>_u_0)local_48._s_0.Max.field0_0x0;
  (**(code **)(*(longlong *)this->HMDDevice + 0x248))
            (this->HMDDevice,param_1,(param_3.Reference)->_padding_,&local_58,
             (param_2.Reference)->_padding_,&local_38,0,1);
  local_res8 = (FRHIResource *)(param_2.Reference)->_padding_;
  local_38._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_38._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)TVar2;
  local_48._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_48._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar3;
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_res8);
  }
  CopyEmulatedLayers(this,param_1,(FRHITexture *)&local_res8,(TIntRect<int> *)&local_48._s_0,
                     (TIntRect<int> *)&local_38._s_0);
  if ((FRHIResource *)(param_2.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_2.Reference)->_padding_);
  }
  if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
  }
  if ((FRHIResource *)(param_4.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_4.Reference)->_padding_);
  }
  return;
}

// RenderSpectatorModeSingleEyeCroppedToFill @ 14cf99180

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::RenderSpectatorModeSingleEyeCroppedToFill
          (FDefaultSpectatorScreenController *this,FRHICommandListImmediate *param_1,
          TRefCountPtr<FRHITexture> param_2,TRefCountPtr<FRHITexture> param_3,
          TRefCountPtr<FRHITexture> param_4,TVector2<double> *param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  TIntPoint<int>_u_0 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  double *pdVar7;
  TIntPoint<int>_u_0 local_88;
  TIntPoint<int>_u_0 local_80;
  TIntRect<int>_u_0 local_78;
  TIntRect<int>_u_0 local_68;
  TIntRect<int> local_58;
  TVector2<double>_u_0 local_48;
  undefined1 local_38 [16];
  
  pcVar2 = *(code **)(this->_padding_ + 0x90);
  uVar5 = (**(code **)(*(longlong *)(param_3.Reference)->_padding_ + 0x20))();
  (*pcVar2)(this,&local_58,uVar5);
  lVar6 = (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x20))();
  local_88 = (TIntPoint<int>_u_0)0x0;
  uVar1 = *(undefined4 *)(lVar6 + 0x28);
  lVar6 = (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x20))();
  local_78._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_80._s_0.Y = uVar1;
  local_80._s_0.X = *(undefined4 *)(lVar6 + 0x24);
  local_78._12_4_ = (int)(param_5->field0_0x0)._s_0.Y;
  local_78._8_4_ = (int)(param_5->field0_0x0)._s_0.X;
  pdVar7 = (double *)(**(code **)(*(longlong *)this->HMDDevice + 0x230))(this->HMDDevice,local_38,0)
  ;
  local_48._s_0.X = *pdVar7;
  local_48._s_0.Y = pdVar7[1];
  Helpers::GetEyeCroppedToFitRect
            ((TIntRect<int> *)&local_68._s_0,(TVector2<double> *)&local_48._s_0,&local_58,
             (TIntRect<int> *)&local_78._s_0);
  uVar4 = local_68._s_0.Max.field0_0x0;
  uVar5 = local_68._s_0.Min.field0_0x0;
  TVar3 = local_80;
  local_78._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_78._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_80;
  local_88 = (TIntPoint<int>_u_0)local_68._s_0.Min.field0_0x0;
  local_80 = (TIntPoint<int>_u_0)local_68._s_0.Max.field0_0x0;
  (**(code **)(*(longlong *)this->HMDDevice + 0x248))
            (this->HMDDevice,param_1,(param_3.Reference)->_padding_,&local_88,
             (param_2.Reference)->_padding_,&local_78,0,1);
  param_5 = (TVector2<double> *)(param_2.Reference)->_padding_;
  local_68._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_68._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)TVar3;
  local_78._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar5;
  local_78._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar4;
  if ((FRHIResource *)param_5 != (FRHIResource *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_5);
  }
  CopyEmulatedLayers(this,param_1,(FRHITexture *)&param_5,(TIntRect<int> *)&local_78._s_0,
                     (TIntRect<int> *)&local_68._s_0);
  if ((FRHIResource *)(param_2.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_2.Reference)->_padding_);
  }
  if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
  }
  if ((FRHIResource *)(param_4.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_4.Reference)->_padding_);
  }
  return;
}

// RenderSpectatorModeSingleEyeLetterboxed @ 14cf99330

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::RenderSpectatorModeSingleEyeLetterboxed
          (FDefaultSpectatorScreenController *this,FRHICommandListImmediate *param_1,
          TRefCountPtr<FRHITexture> param_2,TRefCountPtr<FRHITexture> param_3,
          TRefCountPtr<FRHITexture> param_4,TVector2<double> *param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  FRHIResource *local_res8;
  TIntRect<int>_u_0 local_58;
  TIntRect<int>_u_0 local_48;
  TIntRect<int>_u_0 local_38;
  
  pcVar2 = *(code **)(this->_padding_ + 0x90);
  uVar3 = (**(code **)(*(longlong *)(param_3.Reference)->_padding_ + 0x20))();
  (*pcVar2)(this,&local_58,uVar3);
  lVar4 = (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x20))();
  uVar1 = *(undefined4 *)(lVar4 + 0x28);
  local_48._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  lVar4 = (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x20))();
  local_48._12_4_ = uVar1;
  local_48._8_4_ = *(undefined4 *)(lVar4 + 0x24);
  Helpers::GetLetterboxedDestRect
            ((TIntRect<int> *)&local_38._s_0,(TIntRect<int> *)&local_58._s_0,
             (TIntRect<int> *)&local_48._s_0);
  local_48._s_0.Min.field0_0x0 = local_38._s_0.Min.field0_0x0;
  local_48._s_0.Max.field0_0x0 = local_38._s_0.Max.field0_0x0;
  local_38._s_0.Min.field0_0x0 = local_58._s_0.Min.field0_0x0;
  local_38._s_0.Max.field0_0x0 = local_58._s_0.Max.field0_0x0;
  (**(code **)(*(longlong *)this->HMDDevice + 0x248))
            (this->HMDDevice,param_1,(param_3.Reference)->_padding_,&local_38,
             (param_2.Reference)->_padding_,&local_48,1,1);
  local_res8 = (FRHIResource *)(param_2.Reference)->_padding_;
  local_48._s_0.Min.field0_0x0 = local_58._s_0.Min.field0_0x0;
  local_48._s_0.Max.field0_0x0 = local_58._s_0.Max.field0_0x0;
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_res8);
  }
  CopyEmulatedLayers(this,param_1,(FRHITexture *)&local_res8,(TIntRect<int> *)&local_48._s_0,
                     (TIntRect<int> *)&local_38._s_0);
  if ((FRHIResource *)(param_2.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_2.Reference)->_padding_);
  }
  if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
  }
  if ((FRHIResource *)(param_4.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_4.Reference)->_padding_);
  }
  return;
}

// RenderSpectatorModeTexture @ 14cf994a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::RenderSpectatorModeTexture
          (FDefaultSpectatorScreenController *this,FRHICommandListImmediate *param_1,
          TRefCountPtr<FRHITexture> param_2,TRefCountPtr<FRHITexture> param_3,
          TRefCountPtr<FRHITexture> param_4,TVector2<double> *param_5)

{
  undefined4 uVar1;
  FRHITexture *pFVar2;
  longlong lVar3;
  FRHITexture *pFVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  pFVar4 = (FRHITexture *)(param_4.Reference)->_padding_;
  if (((FRHITexture *)(param_4.Reference)->_padding_ == (FRHITexture *)0x0) &&
     (pFVar2 = (GBlackTexture->TextureRHI).Reference, pFVar4 = (FRHITexture *)0x0,
     (pFVar2->TextureDesc).Dimension == Texture2D)) {
    pFVar4 = pFVar2;
  }
  lVar3 = (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4);
  local_48 = 0;
  uVar1 = *(undefined4 *)(lVar3 + 0x28);
  lVar3 = (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4);
  local_40 = *(undefined4 *)(lVar3 + 0x24);
  uStack_3c = uVar1;
  lVar3 = (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x20))();
  local_58 = 0;
  uVar1 = *(undefined4 *)(lVar3 + 0x28);
  lVar3 = (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x20))();
  local_50 = CONCAT44(uVar1,*(undefined4 *)(lVar3 + 0x24));
  local_38 = 0;
  local_30 = local_50;
  local_58 = 0;
  local_50 = CONCAT44(uStack_3c,local_40);
  (**(code **)(*(longlong *)this->HMDDevice + 0x248))
            (this->HMDDevice,param_1,pFVar4,&local_58,(param_2.Reference)->_padding_,&local_38,0,1);
  if ((FRHIResource *)(param_2.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_2.Reference)->_padding_);
  }
  if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
  }
  if ((FRHIResource *)(param_4.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_4.Reference)->_padding_);
  }
  return;
}

// RenderSpectatorModeUndistorted @ 14cf995f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::RenderSpectatorModeUndistorted
          (FDefaultSpectatorScreenController *this,FRHICommandListImmediate *param_1,
          TRefCountPtr<FRHITexture> param_2,TRefCountPtr<FRHITexture> param_3,
          TRefCountPtr<FRHITexture> param_4,TVector2<double> *param_5)

{
  undefined4 uVar1;
  TIntPoint<int>_u_0 TVar2;
  undefined8 uVar3;
  longlong lVar4;
  FRHIResource *local_res8;
  undefined8 local_58;
  TIntPoint<int>_u_0 local_50;
  TIntRect<int>_u_0 local_48;
  TIntRect<int>_u_0 local_38;
  
  lVar4 = (**(code **)(*(longlong *)(param_3.Reference)->_padding_ + 0x20))();
  local_48._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  uVar1 = *(undefined4 *)(lVar4 + 0x28);
  lVar4 = (**(code **)(*(longlong *)(param_3.Reference)->_padding_ + 0x20))();
  local_48._12_4_ = uVar1;
  local_48._8_4_ = *(undefined4 *)(lVar4 + 0x24);
  lVar4 = (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x20))();
  local_58 = 0;
  uVar1 = *(undefined4 *)(lVar4 + 0x28);
  lVar4 = (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x20))();
  uVar3 = local_48._s_0.Max.field0_0x0;
  local_50._s_0.Y = uVar1;
  local_50._s_0.X = *(undefined4 *)(lVar4 + 0x24);
  TVar2 = local_50;
  local_38._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_38._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_50;
  local_58 = 0;
  local_50 = (TIntPoint<int>_u_0)local_48._s_0.Max.field0_0x0;
  (**(code **)(*(longlong *)this->HMDDevice + 0x248))
            (this->HMDDevice,param_1,(param_3.Reference)->_padding_,&local_58,
             (param_2.Reference)->_padding_,&local_38,0,1);
  local_res8 = (FRHIResource *)(param_2.Reference)->_padding_;
  local_38._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_38._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)TVar2;
  local_48._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_48._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar3;
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_res8);
  }
  CopyEmulatedLayers(this,param_1,(FRHITexture *)&local_res8,(TIntRect<int> *)&local_48._s_0,
                     (TIntRect<int> *)&local_38._s_0);
  if ((FRHIResource *)(param_2.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_2.Reference)->_padding_);
  }
  if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
  }
  if ((FRHIResource *)(param_4.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_4.Reference)->_padding_);
  }
  return;
}

// RenderSpectatorScreen_RenderThread @ 14cf99760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cf99b04) */
/* WARNING: Removing unreachable block (ram,0x00014cf99b11) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::RenderSpectatorScreen_RenderThread
          (FDefaultSpectatorScreenController *this,FRDGBuilder *param_1,FRDGTexture *param_2,
          FRDGTexture *param_3,FRDGTexture *param_4,TVector2<float> param_5)

{
  undefined4 uVar1;
  FRHITexture *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  FRDGTexture *pFVar7;
  TRefCountPtr<IPooledRenderTarget> TVar8;
  longlong *plVar9;
  IStereoRenderTargetManager *pIVar10;
  longlong lVar11;
  FRDGEventName *pFVar12;
  TRefCountPtr<FRHITexture> *pTVar13;
  FRHITexture *this_00;
  bool bVar14;
  undefined1 auStackY_168 [32];
  undefined1 local_127 [7];
  FDefaultSpectatorScreenController *local_120;
  TIntRect<int>_u_0 local_118;
  FXRCopyTextureOptions local_108;
  undefined1 local_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  TIntPoint<int>_u_0 local_b0;
  TIntRect<int>_u_0 local_a8;
  TIntRect<int>_u_0 local_98;
  FRDGEventName local_88;
  TRefCountPtr<FRHITexture> local_70 [2];
  TRefCountPtr<FRHITexture> *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_e8._0_4_ = 0;
  local_120 = this;
  local_e8._8_8_ = param_2;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"RenderSocialScreen_RenderThread()");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId200,"RenderSocialScreen_RenderThread()",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
               ,200);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId200);
  }
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
                         ,0xca,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->StereoLayersTextureRDG = param_4;
  if (this->SpectatorScreenTexture_RenderThread != (FTextureResource *)0x0) {
    pFVar2 = (FRHITexture *)this->SpectatorScreenTexture_RenderThread->_padding_;
    pFVar7 = FRDGBuilder::FindExternalTexture(param_1,pFVar2);
    this = local_120;
    if (pFVar7 == (FRDGTexture *)0x0) {
      TVar8 = CreateRenderTarget((FRHITexture *)local_e8,(wchar_t *)pFVar2);
      FRDGBuilder::RegisterExternalTexture
                (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar8.Reference,None);
      this = local_120;
      if ((longlong *)CONCAT44(local_e8._4_4_,local_e8._0_4_) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(local_e8._4_4_,local_e8._0_4_) + 0x38))();
        this = local_120;
      }
    }
  }
  uVar4 = local_e8._8_8_;
  (**(code **)(this->_padding_ + 0xd0))
            (this,this->SpectatorScreenMode_RenderThread,param_1,local_e8._8_8_);
  plVar9 = (longlong *)(**(code **)(*(longlong *)&this->HMDDevice->field_0x100 + 0x88))();
  if ((plVar9 != (longlong *)0x0) && (param_4 == (FRDGTexture *)0x0)) {
    local_c8 = *(undefined4 *)&((FRDGTextureDesc *)(uVar4 + 0x80))->field_0x24;
    local_108.ShaderPlatform.Platform = this->ShaderPlatform_RenderThread;
    local_c4 = *(undefined4 *)&((FRDGTextureDesc *)(uVar4 + 0x80))->field_0x28;
    local_108.FeatureLevel.FeatureLevel = this->FeatureLevel_RenderThread;
    local_108.LoadAction = ELoad;
    local_108.BlendMod = PremultipliedAlphaBlend;
    local_108.bClearBlack = false;
    local_108.bOutputMipChain = false;
    local_108.bNeedsDisplayMapping = false;
    local_108.bSrcIsLinear = false;
    local_108.bSrcSupportsHDR = false;
    local_108.bDstSupportsHDR = false;
    local_108.SrcColorGamut = ___xmm_00000002000000020000000000000000;
    local_108.DstColorGamut = _UNK_152a70374;
    local_108.SrcDisplayFormat = _UNK_152a70378;
    local_108.DstDisplayFormat = _UNK_152a7037c;
    local_e8._24_8_ = 0;
    pIVar10 = (IStereoRenderTargetManager *)
              (**(code **)(*(longlong *)&this->HMDDevice->field_0x100 + 0x80))();
    FXRCopyTextureOptions::SetDisplayMappingOptions(&local_108,pIVar10);
    (**(code **)(*plVar9 + 0x78))(plVar9,local_70);
    iVar5 = local_58;
    pTVar13 = local_70;
    if (local_60 != (TRefCountPtr<FRHITexture> *)0x0) {
      pTVar13 = local_60;
    }
    local_e8._16_8_ = pTVar13 + local_58;
    while( true ) {
      uVar4 = local_e8._16_8_;
      if (local_58 != iVar5) {
        local_127[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<FRHITexture>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_127);
      }
      if (pTVar13 == (TRefCountPtr<FRHITexture> *)uVar4) break;
      pFVar2 = pTVar13->Reference;
      if (pFVar2 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar2);
      }
      this_00 = (FRHITexture *)0x0;
      if ((pFVar2->TextureDesc).Dimension == Texture2D) {
        this_00 = pFVar2;
      }
      if (this_00 == (FRHITexture *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("LayerTexture2D.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
                           ,0xe2,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        FRHIResource::AddRef((FRHIResource *)this_00);
      }
      lVar11 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
      uVar1 = *(undefined4 *)(lVar11 + 0x28);
      local_118._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      lVar11 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
      local_118._8_4_ = *(undefined4 *)(lVar11 + 0x24);
      local_118._12_4_ = uVar1;
      Helpers::GetLetterboxedDestRect
                ((TIntRect<int> *)(local_c0 + 8),(TIntRect<int> *)&local_118._s_0,
                 (TIntRect<int> *)(local_e8 + 0x18));
      pFVar7 = FRDGBuilder::FindExternalTexture(param_1,this_00);
      if (pFVar7 == (FRDGTexture *)0x0) {
        TVar8 = CreateRenderTarget((FRHITexture *)local_c0,(wchar_t *)this_00);
        pFVar7 = FRDGBuilder::RegisterExternalTexture
                           (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar8.Reference,None);
        if ((longlong *)local_c0._0_8_ != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_c0._0_8_ + 0x38))();
        }
      }
      local_a8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_c0._8_8_;
      local_a8._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_b0;
      local_98._s_0.Min.field0_0x0 = local_118._s_0.Min.field0_0x0;
      local_98._12_4_ = local_118._12_4_;
      local_98._8_4_ = local_118._8_4_;
      pFVar12 = FRDGEventName::FRDGEventName(&local_88,1,L"DefaultSpectatorScreen_DebugLayers");
      AddXRCopyTexturePass
                (param_1,pFVar12,pFVar7,(TIntRect<int> *)&local_98._s_0,
                 (FRDGTexture *)local_e8._8_8_,(TIntRect<int> *)&local_a8._s_0,&local_108);
      if (local_88.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_88.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (this_00 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
      FRHIResource::Release((FRHIResource *)pFVar2);
      pTVar13 = pTVar13 + 1;
    }
    pTVar13 = local_70;
    if (local_60 != (TRefCountPtr<FRHITexture> *)0x0) {
      pTVar13 = local_60;
    }
    DestructItems<TRefCountPtr<FRHITexture>,int>(pTVar13,local_58);
    this = local_120;
    if (local_60 != (TRefCountPtr<FRHITexture> *)0x0) {
      FMemory::Free(local_60);
      this = local_120;
    }
  }
  this->StereoLayersTextureRDG = (FRDGTexture *)0x0;
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// RenderSpectatorScreen_RenderThread @ 14cf99bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::RenderSpectatorScreen_RenderThread
          (FDefaultSpectatorScreenController *this,FRHICommandListImmediate *param_1,
          FRHITexture *param_2,TRefCountPtr<FRHITexture> param_3,TRefCountPtr<FRHITexture> param_4,
          TVector2<double> *param_5)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FRHITexture *pFVar4;
  FRHIResource *this_00;
  FRHIResource *this_01;
  code *pcVar5;
  FDefaultSpectatorScreenController *pFVar6;
  char cVar7;
  uint uVar8;
  atomic<unsigned_int> aVar9;
  FRHIBreadcrumbAllocator *pFVar10;
  FRHIBreadcrumbNode *pFVar11;
  longlong *plVar12;
  longlong lVar13;
  TRefCountPtr<FRHITexture> *pTVar14;
  char cVar15;
  FRHITexture *pFVar16;
  bool bVar17;
  undefined1 auStack_1c8 [32];
  FRHITexture *local_1a8;
  TIntPoint<int>_u_0 *local_1a0;
  undefined1 local_198;
  undefined1 local_190;
  char local_188;
  undefined1 local_187 [7];
  FRHITexture *local_180;
  FRHICommandListImmediate *local_178;
  TIntRect<int>_u_0 local_170;
  FRHITexture *local_160;
  TIntRect<int>_u_0 local_158;
  FRHIResource *local_148;
  FRHIResource *local_140;
  FRHITexture *local_138;
  FDefaultSpectatorScreenController *local_130;
  FRHITexture *local_128;
  TIntRect<int>_u_0 local_120;
  TIntPoint<int>_u_0 local_110;
  TIntPoint<int>_u_0 local_108;
  TIntPoint<int>_u_0 local_100;
  longlong local_f8;
  char *local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  wchar_t *pwStack_d8;
  TIntPoint<int>_u_0 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FRHIBreadcrumbScope local_b8;
  undefined1 local_a8;
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  TRefCountPtr<FRHITexture> local_70 [2];
  TRefCountPtr<FRHITexture> *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_180 = param_4.Reference;
  local_178 = param_1;
  local_160 = param_3.Reference;
  local_130 = this;
  local_128 = param_2;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"RenderSocialScreen_RenderThread()");
  bVar17 = CpuChannel->Enabled < 0;
  if (bVar17) {
    local_188 = '\0';
  }
  else {
    local_188 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId165,"RenderSocialScreen_RenderThread()",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
               ,0xa5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId165);
  }
  cVar15 = !bVar17;
  bVar17 = IsInRenderingThread();
  if ((!bVar17) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
                          ,0xa7,L""), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (FRHITexture *)(param_4.Reference)->_padding_;
  pFVar16 = (this->StereoLayersTexture).Reference;
  if (pFVar16 != pFVar4) {
    (this->StereoLayersTexture).Reference = pFVar4;
    if (pFVar4 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar4);
    }
    if (pFVar16 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar16);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->SpectatorScreenDelegate_RenderThread,&local_a0);
  if (((*(int *)&(this->SpectatorScreenDelegate_RenderThread).field_0x10 == 0) ||
      (plVar12 = *(longlong **)&(this->SpectatorScreenDelegate_RenderThread).field_0x8,
      plVar12 == (longlong *)0x0)) || (cVar7 = (**(code **)(*plVar12 + 0x38))(), cVar7 == '\0')) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a0);
  if (bVar17) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_e8 = 0xae;
      local_f0 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
      ;
      pwStack_d8 = L"SpectatorScreen";
      local_e0 = 0;
      ::Desc._padding_._0_4_ = 0x52a6a1b0;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0xae;
      ::Desc._padding_._4_4_ = uStack_e4;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x52a6a450;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FDefaultSpectatorScreenController::RenderSpectatorScreen_RenderThread'::__l17::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar10 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar11 = FMemStackBase::Alloc(&pFVar10->Inner,0x50,8);
    pFVar11->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar11->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar11->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar11->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar11->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar11->TraceCpuSpecId = 0;
    pFVar11->TraceCpuMetadataId = 0;
    pFVar11->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar11->Allocator = pFVar10;
    LOCK();
    UNLOCK();
    uVar8 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar11->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar11->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar11->ID = uVar8;
    pFVar11->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar11[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar17 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar17)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar9 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar9;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar11->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_b8,(FRHIComputeCommandList *)local_178,pFVar11);
    local_a8 = 1;
    this_00 = (FRHIResource *)this->SpectatorScreenTexture_RenderThread->_padding_;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    this_01 = (FRHIResource *)local_160->_padding_;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
    }
    if (param_2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_2);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->SpectatorScreenDelegate_RenderThread,&local_88);
    if (*(int *)&(this->SpectatorScreenDelegate_RenderThread).field_0x10 == 0) {
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = *(longlong **)&(this->SpectatorScreenDelegate_RenderThread).field_0x8;
    }
    local_c8._s_0.X = *(undefined4 *)&param_5->field0_0x0;
    local_c8._s_0.Y = *(int *)((longlong)&param_5->field0_0x0 + 4);
    uStack_c0 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 8);
    uStack_bc = *(undefined4 *)((longlong)&param_5->field0_0x0 + 0xc);
    local_1a8 = (FRHITexture *)&local_148;
    local_1a0 = &local_c8;
    local_148 = this_00;
    local_140 = this_01;
    local_138 = param_2;
    (**(code **)(*plVar12 + 0x60))(local_c8._s_0.X,local_178,&local_138,&local_140);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_b8);
  }
  plVar12 = (longlong *)(**(code **)(*(longlong *)&this->HMDDevice->field_0x100 + 0x88))();
  if ((plVar12 != (longlong *)0x0) && (local_180->_padding_ == 0)) {
    lVar13 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
    local_158._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    uVar2 = *(undefined4 *)(lVar13 + 0x28);
    lVar13 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
    local_158._8_4_ = *(undefined4 *)(lVar13 + 0x24);
    local_158._12_4_ = uVar2;
    (**(code **)(*plVar12 + 0x78))(plVar12,local_70);
    uVar2 = local_58;
    pFVar6 = local_130;
    pTVar14 = local_70;
    if (local_60 != (TRefCountPtr<FRHITexture> *)0x0) {
      pTVar14 = local_60;
    }
    pTVar1 = pTVar14 + (int)local_58;
    while( true ) {
      if (local_58 != uVar2) {
        local_187[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<FRHITexture>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_187);
      }
      if (pTVar14 == pTVar1) break;
      pFVar4 = pTVar14->Reference;
      if (pFVar4 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar4);
      }
      pFVar16 = (FRHITexture *)0x0;
      if ((pFVar4->TextureDesc).Dimension == Texture2D) {
        pFVar16 = pFVar4;
      }
      if (pFVar16 == (FRHITexture *)0x0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("LayerTexture2D.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
                            ,0xbc,L"");
        if (bVar17) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        FRHIResource::AddRef((FRHIResource *)pFVar16);
      }
      lVar13 = (**(code **)(pFVar16->_padding_ + 0x20))(pFVar16);
      uVar3 = *(undefined4 *)(lVar13 + 0x28);
      local_170._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      lVar13 = (**(code **)(pFVar16->_padding_ + 0x20))(pFVar16);
      local_170._8_4_ = *(undefined4 *)(lVar13 + 0x24);
      local_170._12_4_ = uVar3;
      Helpers::GetLetterboxedDestRect
                ((TIntRect<int> *)&local_120._s_0,(TIntRect<int> *)&local_170._s_0,
                 (TIntRect<int> *)&local_158._s_0);
      local_190 = 0;
      local_198 = 0;
      local_110 = (TIntPoint<int>_u_0)local_120._s_0.Min.field0_0x0;
      local_108 = (TIntPoint<int>_u_0)local_120._s_0.Max.field0_0x0;
      local_100 = (TIntPoint<int>_u_0)local_170._s_0.Min.field0_0x0;
      local_f8 = CONCAT44(local_170._12_4_,local_170._8_4_);
      local_1a0 = &local_110;
      local_1a8 = local_128;
      (**(code **)(*(longlong *)pFVar6->HMDDevice + 0x248))
                (pFVar6->HMDDevice,local_178,pFVar16,&local_100);
      if (pFVar16 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar16);
      }
      FRHIResource::Release((FRHIResource *)pFVar4);
      pTVar14 = pTVar14 + 1;
    }
    pTVar14 = local_70;
    if (local_60 != (TRefCountPtr<FRHITexture> *)0x0) {
      pTVar14 = local_60;
    }
    DestructItems<TRefCountPtr<FRHITexture>,int>(pTVar14,local_58);
    cVar15 = local_188;
    if (local_60 != (TRefCountPtr<FRHITexture> *)0x0) {
      FMemory::Free(local_60);
    }
  }
  pFVar4 = local_180;
  if (cVar15 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if ((FRHIResource *)local_160->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_160->_padding_);
  }
  if ((FRHIResource *)pFVar4->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4->_padding_);
  }
  return;
}

// RenderSpectatorScreen_RenderThread @ 14cf9a190

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::RenderSpectatorScreen_RenderThread
          (FDefaultSpectatorScreenController *this,FRHICommandListImmediate *param_1,
          FRHITexture *param_2,TRefCountPtr<FRHITexture> param_3,TVector2<double> *param_4)

{
  undefined8 local_res20;
  FRHIResource *local_28 [2];
  TVector2<double>_u_0 local_18;
  
  local_res20 = 0;
  local_28[0] = (FRHIResource *)(param_3.Reference)->_padding_;
  if (local_28[0] != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_28[0]);
  }
  local_18._s_0.X = (param_4->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_4->field0_0x0)._s_0.Y;
  RenderSpectatorScreen_RenderThread
            (this,param_1,param_2,(FRHITexture *)local_28,(FRHITexture *)&local_res20,
             (TVector2<double> *)&local_18._s_0);
  if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
  }
  return;
}

// SetSpectatorScreenMode @ 14cf9afc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::SetSpectatorScreenMode
          (FDefaultSpectatorScreenController *this,ESpectatorScreenMode param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  FDefaultSpectatorScreenController *pFStack_70;
  ESpectatorScreenMode local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FDefaultSpectatorScreenController *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
                       ,0x26,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (4 < (byte)LogHMD._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
  }
  this->SpectatorScreenMode_GameThread = param_1;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FDefaultSpectatorScreenController::SetSpectatorScreenMode'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  uStack_67 = auStack_b8._41_4_;
  uStack_63 = auStack_b8._45_2_;
  uStack_61 = auStack_b8[0x2f];
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDefaultSpectatorScreenController::SetSpectatorScreenMode'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  pFStack_70 = this;
  local_68 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FDefaultSpectatorScreenController::SetSpectatorScreenMode_::__l2::TSTR_SetSpectatorScreenMode44>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._1_4_ = uStack_67;
    local_38._0_1_ = local_68;
    local_38._5_2_ = uStack_63;
    local_38._7_1_ = uStack_61;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FDefaultSpectatorScreenController::SetSpectatorScreenMode'::__l2::TSTR_SetSpectatorScreenMode44>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// SetSpectatorScreenModeTexturePlusEyeLayout @ 14cf9b2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout
          (FDefaultSpectatorScreenController *this,FSpectatorScreenModeTexturePlusEyeLayout *param_1
          )

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_118 [32];
  FDefaultSpectatorScreenController *local_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  code *local_d0;
  code *pcStack_c8;
  code *local_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  dVar1 = *(double *)&(param_1->EyeRectMin).field0_0x0;
  uVar9 = SUB84(dVar1,0);
  uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  bVar5 = true;
  if (((param_1->EyeRectMax).field0_0x0._s_0.X <= dVar1) ||
     ((param_1->EyeRectMax).field0_0x0._s_0.Y <= (param_1->EyeRectMin).field0_0x0._s_0.Y)) {
    if (2 < (byte)LogHMD._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:_bool___cdecl_FSpectatorScreenModeTexturePlusEyeLayout::IsValid(void)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogHMD);
      uVar2 = *(undefined8 *)&(param_1->EyeRectMin).field0_0x0;
      uVar9 = (undefined4)uVar2;
      uVar10 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    bVar5 = false;
  }
  if (((param_1->TextureRectMax).field0_0x0._s_0.X <= (param_1->TextureRectMin).field0_0x0._s_0.X)
     || ((param_1->TextureRectMax).field0_0x0._s_0.Y <= (param_1->TextureRectMin).field0_0x0._s_0.Y)
     ) {
    if (2 < (byte)LogHMD._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:_bool___cdecl_FSpectatorScreenModeTexturePlusEyeLayout::IsValid(void)const___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogHMD);
      uVar2 = *(undefined8 *)&(param_1->EyeRectMin).field0_0x0;
      uVar9 = (undefined4)uVar2;
      uVar10 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    bVar5 = false;
  }
  dVar1 = __real_3ff0000000000000;
  if (((((__real_3ff0000000000000 <= (double)CONCAT44(uVar10,uVar9) &&
          (double)CONCAT44(uVar10,uVar9) != __real_3ff0000000000000) ||
        ((double)CONCAT44(uVar10,uVar9) < 0.0)) ||
       (dVar3 = (param_1->EyeRectMin).field0_0x0._s_0.Y, __real_3ff0000000000000 < dVar3)) ||
      ((dVar3 < 0.0 ||
       (dVar3 = (param_1->EyeRectMax).field0_0x0._s_0.X, __real_3ff0000000000000 < dVar3)))) ||
     ((dVar3 < 0.0 ||
      ((dVar3 = (param_1->EyeRectMax).field0_0x0._s_0.Y, __real_3ff0000000000000 < dVar3 ||
       (dVar3 < 0.0)))))) {
    if (2 < (byte)LogHMD._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:_bool___cdecl_FSpectatorScreenModeTexturePlusEyeLayout::IsValid(void)const___ptr64'
                  ::__l48::LOG_Static,(FLogCategoryBase *)&LogHMD);
    }
    bVar5 = false;
  }
  dVar3 = (param_1->TextureRectMin).field0_0x0._s_0.X;
  if ((((dVar1 < dVar3) || (dVar3 < 0.0)) ||
      (dVar3 = (param_1->TextureRectMin).field0_0x0._s_0.Y, dVar1 < dVar3)) ||
     (((dVar3 < 0.0 || (dVar3 = (param_1->TextureRectMax).field0_0x0._s_0.X, dVar1 < dVar3)) ||
      ((dVar3 < 0.0 ||
       ((dVar3 = (param_1->TextureRectMax).field0_0x0._s_0.Y, dVar1 < dVar3 || (dVar3 < 0.0))))))))
  {
    if ((byte)LogHMD._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_bool___cdecl_FSpectatorScreenModeTexturePlusEyeLayout::IsValid(void)const___ptr64'
                ::__l69::LOG_Static,(FLogCategoryBase *)&LogHMD);
  }
  else if (bVar5) {
    pcStack_f0 = (code *)(param_1->EyeRectMin).field0_0x0._s_0.X;
    pcStack_e8 = (code *)(param_1->EyeRectMin).field0_0x0._s_0.Y;
    pcStack_e0 = (code *)(param_1->EyeRectMax).field0_0x0._s_0.X;
    pcStack_d8 = (code *)(param_1->EyeRectMax).field0_0x0._s_0.Y;
    uVar2._0_1_ = param_1->bDrawEyeFirst;
    uVar2._1_1_ = param_1->bUseAlpha;
    uVar2._2_1_ = param_1->bClearBlack;
    uVar2._3_5_ = *(undefined5 *)&param_1->field_0x43;
    uVar9 = (undefined4)((uint5)uVar2._3_5_ >> 8);
    local_a8[0] = (code *)0x0;
    local_d0 = (code *)(param_1->TextureRectMin).field0_0x0._s_0.X;
    pcStack_c8 = (code *)(param_1->TextureRectMin).field0_0x0._s_0.Y;
    local_c0 = (code *)(param_1->TextureRectMax).field0_0x0._s_0.X;
    uStack_b8 = *(undefined8 *)((longlong)&(param_1->TextureRectMax).field0_0x0 + 8);
    local_f8 = this;
    local_80 = FMemory::Malloc(0x58,8);
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_80[1] = (code *)local_f8;
    local_80[2] = pcStack_f0;
    local_80[3] = pcStack_e8;
    local_80[4] = pcStack_e0;
    local_80[5] = pcStack_d8;
    local_80[6] = local_d0;
    local_80[7] = pcStack_c8;
    local_80[8] = local_c0;
    *(undefined4 *)(local_80 + 9) = (undefined4)uStack_b8;
    *(undefined4 *)((longlong)local_80 + 0x4c) = uStack_b8._4_4_;
    *(int *)(local_80 + 10) = (int)uVar2;
    *(undefined4 *)((longlong)local_80 + 0x54) = uVar9;
    if (local_80 + 1 != (code **)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    uStack_b0 = (int)uVar2;
    uStack_ac = uVar9;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout_::__l5::TSTR_SetSpectatorScreenModeTexturePlusEyeLayout69>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_78._16_8_ = local_98[0];
      local_78._24_8_ = local_98[1];
      local_78._32_8_ = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout'::__l5::TSTR_SetSpectatorScreenModeTexturePlusEyeLayout69>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar6);
      uVar8 = (ulonglong)local_48;
      if ((2 < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar7 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar7 = local_50;
          }
          (**(code **)(*ppcVar7 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_78);
      }
    }
    if (local_a8[0] == (code *)0x0) {
      return;
    }
    ppcVar7 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar7 = local_80;
    }
    (**(code **)(*ppcVar7 + 0x10))();
    return;
  }
  if (2 < (byte)LogHMD._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
  }
  return;
}

// SetSpectatorScreenModeTexturePlusEyeLayoutRenderCommand @ 14cf9b6f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayoutRenderCommand
          (FDefaultSpectatorScreenController *this,FSpectatorScreenModeTexturePlusEyeLayout *param_1
          )

{
  return;
}

// SetSpectatorScreenModeTexturePlusEyeLayout_RenderThread @ 14cf9b700

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout_RenderThread
          (FDefaultSpectatorScreenController *this,FSpectatorScreenModeTexturePlusEyeLayout *param_1
          )

{
  return;
}

// SetSpectatorScreenTexture @ 14cf9b710

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::SetSpectatorScreenTexture
          (FDefaultSpectatorScreenController *this,UTexture *param_1)

{
  UTexture *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->SpectatorScreenTexture).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// SetSpectatorScreenTextureRenderCommand @ 14cf9b7e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::SetSpectatorScreenTextureRenderCommand
          (FDefaultSpectatorScreenController *this,UTexture *param_1)

{
  return;
}

// SetSpectatorScreenTexture_RenderThread @ 14cf9b7f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::SetSpectatorScreenTexture_RenderThread
          (FDefaultSpectatorScreenController *this,TRefCountPtr<FRHITexture> *param_1)

{
  return;
}

// UpdateSpectatorScreenMode_RenderThread @ 14cf9df60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultSpectatorScreenController::UpdateSpectatorScreenMode_RenderThread
          (FDefaultSpectatorScreenController *this)

{
  TDelegate<void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
  *this_00;
  code *pcVar1;
  bool bVar2;
  pmf_dc7a4ce2 *ppVar3;
  code *local_78;
  undefined8 uStack_70;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  code *local_48;
  longlong lStack_40;
  code *local_38;
  longlong lStack_30;
  code *local_28;
  longlong lStack_20;
  code *local_18;
  longlong lStack_10;
  
  bVar2 = IsInRenderingThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
                         ,0x6e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->DelegateSpectatorScreenMode_RenderThread == this->SpectatorScreenMode_RenderThread) {
    return;
  }
  this_00 = &this->SpectatorScreenDelegate_RenderThread;
  if ((this_00 ==
       (TDelegate<void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
        *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderDelegate",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultSpectatorScreenController.cpp"
                         ,0x78,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  this->DelegateSpectatorScreenMode_RenderThread = this->SpectatorScreenMode_RenderThread;
  switch(this->SpectatorScreenMode_RenderThread) {
  case Disabled:
    goto LAB_14cf9e13c;
  case SingleEyeLetterboxed:
    uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
    ppVar3 = (pmf_dc7a4ce2 *)&local_78;
    local_78 = _vcall__152__flat______;
    break;
  case Undistorted:
    uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
    local_78 = _vcall__160__flat______;
    ppVar3 = (pmf_dc7a4ce2 *)&local_68;
    local_68 = _vcall__160__flat______;
    lStack_60 = uStack_70;
    break;
  case Distorted:
    uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
    local_78 = _vcall__168__flat______;
    ppVar3 = (pmf_dc7a4ce2 *)&local_58;
    local_58 = _vcall__168__flat______;
    lStack_50 = uStack_70;
    break;
  case SingleEye:
    uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
    local_78 = _vcall__176__flat______;
    ppVar3 = (pmf_dc7a4ce2 *)&local_48;
    local_48 = _vcall__176__flat______;
    lStack_40 = uStack_70;
    break;
  default:
    uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
    local_78 = _vcall__200__flat______;
    ppVar3 = (pmf_dc7a4ce2 *)&local_18;
    local_18 = _vcall__200__flat______;
    lStack_10 = uStack_70;
    break;
  case Texture:
    uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
    local_78 = _vcall__184__flat______;
    ppVar3 = (pmf_dc7a4ce2 *)&local_38;
    local_38 = _vcall__184__flat______;
    lStack_30 = uStack_70;
    break;
  case TexturePlusEye:
    uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
    local_78 = _vcall__192__flat______;
    ppVar3 = (pmf_dc7a4ce2 *)&local_28;
    local_28 = _vcall__192__flat______;
    lStack_20 = uStack_70;
  }
  TDelegateRegistration<void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
  ::BindRaw<FDefaultSpectatorScreenController>
            ((TDelegateRegistration<void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
              *)this_00,this,ppVar3);
LAB_14cf9e13c:
  return;
}

