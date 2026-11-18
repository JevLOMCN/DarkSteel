// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 28

// GetGPUSizeBytes @ 1454f70a0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FVolumetricRenderTargetViewStateData::GetGPUSizeBytes
          (FVolumetricRenderTargetViewStateData *this,bool param_1)

{
  IPooledRenderTarget *pIVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  TRefCountPtr<IPooledRenderTarget> *pTVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar4 = 0;
  pTVar5 = this->VolumetricReconstructRTDepth;
  lVar6 = 0;
  lVar7 = 2;
  do {
    if (pTVar5[-4].Reference == (IPooledRenderTarget *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)((pTVar5[-4].Reference)->_padding_ + 0x18))();
    }
    if (((param_1) && (uVar2 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)((pTVar5[-4].Reference)->_padding_ + 0x10))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    if (pTVar5->Reference == (IPooledRenderTarget *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(pTVar5->Reference->_padding_ + 0x18))();
    }
    if (((param_1) && (uVar3 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)(pTVar5->Reference->_padding_ + 0x10))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    pTVar5 = pTVar5 + 1;
    lVar6 = lVar6 + (ulonglong)uVar2 + (ulonglong)uVar3;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  pIVar1 = (this->VolumetricTracingRT).Reference;
  if (pIVar1 == (IPooledRenderTarget *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(pIVar1->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar2 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->VolumetricTracingRT).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar1 = (this->VolumetricTracingRTDepth).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    uVar4 = (**(code **)(pIVar1->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar4 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->VolumetricTracingRTDepth).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  return (ulonglong)uVar4 + lVar6 + (ulonglong)uVar2;
}

// FVolumetricRenderTargetViewStateData @ 145859770

FVolumetricRenderTargetViewStateData * __thiscall
FVolumetricRenderTargetViewStateData::FVolumetricRenderTargetViewStateData
          (FVolumetricRenderTargetViewStateData *this)

{
  this->CurrentRT = 1;
  this->VolumetricReconstructRTDownsampleFactor = 0;
  this->VolumetricTracingRTDownsampleFactor = 0;
  this->FrameId = 0;
  this->NoiseFrameIndex = 0;
  this->NoiseFrameIndexModPattern = 0;
  this->bFirstTimeUsed = true;
  this->bHistoryValid = false;
  this->bHoldoutValid = false;
  this->bValid = false;
  this->PreViewExposure = 1.0;
  this->StartTracingDistance = 0.0;
  (this->CurrentPixelOffset).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->FullResolution).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->VolumetricReconstructRTResolution).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->VolumetricTracingRTResolution).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->VolumetricTracingViewRect).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->VolumetricReconstructRT[0].Reference = (IPooledRenderTarget *)0x0;
  this->VolumetricReconstructRT[1].Reference = (IPooledRenderTarget *)0x0;
  this->VolumetricReconstructSecondaryRT[0].Reference = (IPooledRenderTarget *)0x0;
  this->VolumetricReconstructSecondaryRT[1].Reference = (IPooledRenderTarget *)0x0;
  this->VolumetricReconstructRTDepth[0].Reference = (IPooledRenderTarget *)0x0;
  this->VolumetricReconstructRTDepth[1].Reference = (IPooledRenderTarget *)0x0;
  (this->VolumetricTracingRT).Reference = (IPooledRenderTarget *)0x0;
  (this->VolumetricSecondaryTracingRT).Reference = (IPooledRenderTarget *)0x0;
  (this->VolumetricTracingRTDepth).Reference = (IPooledRenderTarget *)0x0;
  (this->VolumetricTracingRTHoldout).Reference = (IPooledRenderTarget *)0x0;
  this->Mode = 0;
  this->UpsamplingMode = 0;
  this->VolumetricReconstructViewRect[0].field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->VolumetricReconstructViewRect[1].field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  return this;
}

// ~FVolumetricRenderTargetViewStateData @ 145859b90

void __thiscall
FVolumetricRenderTargetViewStateData::~FVolumetricRenderTargetViewStateData
          (FVolumetricRenderTargetViewStateData *this)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  IPooledRenderTarget *pIVar2;
  longlong lVar3;
  TRefCountPtr<IPooledRenderTarget> *pTVar4;
  longlong lVar5;
  
  pIVar2 = (this->VolumetricTracingRTHoldout).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->VolumetricTracingRTDepth).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->VolumetricSecondaryTracingRT).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->VolumetricTracingRT).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  lVar3 = 2;
  pTVar4 = (TRefCountPtr<IPooledRenderTarget> *)this->VolumetricReconstructViewRect;
  lVar5 = 2;
  do {
    pTVar1 = pTVar4 + -1;
    pTVar4 = pTVar4 + -1;
    lVar5 = lVar5 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar5 != 0);
  pTVar4 = this->VolumetricReconstructRTDepth;
  lVar5 = 2;
  do {
    pTVar1 = pTVar4 + -1;
    pTVar4 = pTVar4 + -1;
    lVar5 = lVar5 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar5 != 0);
  pTVar4 = this->VolumetricReconstructSecondaryRT;
  do {
    pTVar1 = pTVar4 + -1;
    pTVar4 = pTVar4 + -1;
    lVar3 = lVar3 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar3 != 0);
  return;
}

// GetDstVolumetricReconstructRT @ 1458713a0

TRefCountPtr<IPooledRenderTarget> __thiscall
FVolumetricRenderTargetViewStateData::GetDstVolumetricReconstructRT
          (FVolumetricRenderTargetViewStateData *this)

{
  uint uVar1;
  IPooledRenderTarget *pIVar2;
  IPooledRenderTarget *in_RDX;
  
  uVar1 = this->CurrentRT;
  in_RDX->_padding_ = 0;
  pIVar2 = this->VolumetricReconstructRT[uVar1].Reference;
  in_RDX->_padding_ = (longlong)pIVar2;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x30))();
  }
  return (TRefCountPtr<IPooledRenderTarget>)in_RDX;
}

// GetDstVolumetricReconstructRT @ 1458713e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FVolumetricRenderTargetViewStateData::GetDstVolumetricReconstructRT
          (FVolumetricRenderTargetViewStateData *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  if (this->VolumetricReconstructRT[this->CurrentRT].Reference != (IPooledRenderTarget *)0x0) {
    pFVar1 = FRDGBuilder::RegisterExternalTexture
                       (param_1,this->VolumetricReconstructRT + this->CurrentRT,None);
    return pFVar1;
  }
  return (FRDGTexture *)0x0;
}

// GetDstVolumetricReconstructRTDepth @ 145871410

TRefCountPtr<IPooledRenderTarget> __thiscall
FVolumetricRenderTargetViewStateData::GetDstVolumetricReconstructRTDepth
          (FVolumetricRenderTargetViewStateData *this)

{
  uint uVar1;
  IPooledRenderTarget *pIVar2;
  IPooledRenderTarget *in_RDX;
  
  uVar1 = this->CurrentRT;
  in_RDX->_padding_ = 0;
  pIVar2 = this->VolumetricReconstructRTDepth[uVar1].Reference;
  in_RDX->_padding_ = (longlong)pIVar2;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x30))();
  }
  return (TRefCountPtr<IPooledRenderTarget>)in_RDX;
}

// GetDstVolumetricReconstructSecondaryRT @ 145871450

TRefCountPtr<IPooledRenderTarget> __thiscall
FVolumetricRenderTargetViewStateData::GetDstVolumetricReconstructSecondaryRT
          (FVolumetricRenderTargetViewStateData *this)

{
  uint uVar1;
  IPooledRenderTarget *pIVar2;
  IPooledRenderTarget *in_RDX;
  
  uVar1 = this->CurrentRT;
  in_RDX->_padding_ = 0;
  pIVar2 = this->VolumetricReconstructSecondaryRT[uVar1].Reference;
  in_RDX->_padding_ = (longlong)pIVar2;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x30))();
  }
  return (TRefCountPtr<IPooledRenderTarget>)in_RDX;
}

// GetDstVolumetricReconstructSecondaryRT @ 145871490

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FVolumetricRenderTargetViewStateData::GetDstVolumetricReconstructSecondaryRT
          (FVolumetricRenderTargetViewStateData *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  if (this->VolumetricReconstructSecondaryRT[this->CurrentRT].Reference !=
      (IPooledRenderTarget *)0x0) {
    pFVar1 = FRDGBuilder::RegisterExternalTexture
                       (param_1,this->VolumetricReconstructSecondaryRT + this->CurrentRT,None);
    return pFVar1;
  }
  return (FRDGTexture *)0x0;
}

// GetDstVolumetricReconstructUVMax @ 1458714c0

TVector2<float> __thiscall
FVolumetricRenderTargetViewStateData::GetDstVolumetricReconstructUVMax
          (FVolumetricRenderTargetViewStateData *this)

{
  int iVar1;
  int iVar2;
  TVector2<float>_u_0 in_RDX;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)(*(TIntPoint<int>_u_0 *)
                   &this->VolumetricReconstructViewRect[this->CurrentRT].field0_0x0._s_0).X;
  fVar5 = (float)(*(TIntPoint<int>_u_0 *)
                   &this->VolumetricReconstructViewRect[this->CurrentRT].field0_0x0._s_0).Y;
  iVar1 = this->VolumetricReconstructViewRect[this->CurrentRT].field0_0x0._s_0.Y;
  iVar2 = (this->VolumetricReconstructRTResolution).field0_0x0._s_0.Y;
  fVar3 = fVar5 - __real_3f028f5c;
  *(float *)in_RDX =
       (fVar4 / (float)(this->VolumetricReconstructRTResolution).field0_0x0._s_0.X) *
       ((fVar4 - __real_3f028f5c) / fVar4);
  *(float *)((longlong)in_RDX + 4) = ((float)iVar1 / (float)iVar2) * (fVar3 / fVar5);
  return (TVector2<float>)in_RDX;
}

// GetDstVolumetricReconstructUVScale @ 145871540

TVector2<float> __thiscall
FVolumetricRenderTargetViewStateData::GetDstVolumetricReconstructUVScale
          (FVolumetricRenderTargetViewStateData *this)

{
  int iVar1;
  int iVar2;
  TVector2<float>_u_0 in_RDX;
  
  iVar1 = this->VolumetricReconstructViewRect[this->CurrentRT].field0_0x0._s_0.Y;
  iVar2 = (this->VolumetricReconstructRTResolution).field0_0x0._s_0.Y;
  *(float *)in_RDX =
       (float)this->VolumetricReconstructViewRect[this->CurrentRT].field0_0x0._s_0.X /
       (float)(this->VolumetricReconstructRTResolution).field0_0x0._s_0.X;
  *(float *)((longlong)in_RDX + 4) = (float)iVar1 / (float)iVar2;
  return (TVector2<float>)in_RDX;
}

// GetDstVolumetricReconstructViewRect @ 145871590

TIntPoint<int> * __thiscall
FVolumetricRenderTargetViewStateData::GetDstVolumetricReconstructViewRect
          (FVolumetricRenderTargetViewStateData *this)

{
  return this->VolumetricReconstructViewRect + this->CurrentRT;
}

// GetOrCreateDstVolumetricReconstructRT @ 145871920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FVolumetricRenderTargetViewStateData::GetOrCreateDstVolumetricReconstructRT
          (FVolumetricRenderTargetViewStateData *this,FRDGBuilder *param_1)

{
  uint uVar1;
  FRHICommandListBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRDGTexture *pFVar5;
  FRHITextureDesc *pFVar6;
  undefined1 auStackY_158 [32];
  FClearValueBinding local_f8;
  FPooledRenderTargetDesc local_d8;
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (((this->VolumetricReconstructRTResolution).field0_0x0._s_0.X ==
       UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
     ((this->VolumetricReconstructRTResolution).field0_0x0._s_0.Y ==
      UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("VolumetricReconstructRTResolution != FIntPoint::ZeroValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x1c3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRDGTexture *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (this->VolumetricReconstructRT[this->CurrentRT].Reference == (IPooledRenderTarget *)0x0) {
    local_f8.ColorBinding = EColorBound;
    local_f8.Value.DSValue = ___xmm_3f800000000000000000000000000000;
    local_f8.Value._8_8_ = _UNK_150689648;
    FPooledRenderTargetDesc::Create2DDesc
              (&local_d8,(TIntPoint<int>)(this->VolumetricReconstructRTResolution).field0_0x0._s_0,
               PF_FloatRGBA,&local_f8,None,ShaderResource|RenderTargetable,false,'\x01',true,false,
               false);
    uVar1 = this->CurrentRT;
    pFVar2 = (FRHICommandListBase *)param_1->_padding_;
    pFVar6 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_78,&local_d8);
    FRenderTargetPool::FindFreeElement
              ((FRenderTargetPool *)&GRenderTargetPool,pFVar2,pFVar6,
               this->VolumetricReconstructRT + uVar1,L"VolumetricRenderTarget.Reconstruct");
    if ((void *)local_78._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_78._64_8_);
    }
    if (local_d8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_d8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  pFVar5 = FRDGBuilder::RegisterExternalTexture
                     (param_1,this->VolumetricReconstructRT + this->CurrentRT,None);
  return pFVar5;
}

// GetOrCreateDstVolumetricReconstructRTDepth @ 145871ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FVolumetricRenderTargetViewStateData::GetOrCreateDstVolumetricReconstructRTDepth
          (FVolumetricRenderTargetViewStateData *this,FRDGBuilder *param_1)

{
  uint uVar1;
  FRHICommandListBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRDGTexture *pFVar5;
  FRHITextureDesc *pFVar6;
  undefined1 auStackY_158 [32];
  FClearValueBinding local_f8;
  FPooledRenderTargetDesc local_d8;
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (((this->VolumetricReconstructRTResolution).field0_0x0._s_0.X ==
       UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
     ((this->VolumetricReconstructRTResolution).field0_0x0._s_0.Y ==
      UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("VolumetricReconstructRTResolution != FIntPoint::ZeroValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x1e2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRDGTexture *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (this->VolumetricReconstructRTDepth[this->CurrentRT].Reference == (IPooledRenderTarget *)0x0) {
    local_f8.ColorBinding = EColorBound;
    local_f8.Value.DSValue = ___xmm_47761800477618004776180047761800;
    local_f8.Value._8_8_ = _UNK_1510400b8;
    FPooledRenderTargetDesc::Create2DDesc
              (&local_d8,(TIntPoint<int>)(this->VolumetricReconstructRTResolution).field0_0x0._s_0,
               PF_FloatRGBA,&local_f8,None,ShaderResource|RenderTargetable,false,'\x01',true,false,
               false);
    uVar1 = this->CurrentRT;
    pFVar2 = (FRHICommandListBase *)param_1->_padding_;
    pFVar6 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_78,&local_d8);
    FRenderTargetPool::FindFreeElement
              ((FRenderTargetPool *)&GRenderTargetPool,pFVar2,pFVar6,
               this->VolumetricReconstructRTDepth + uVar1,L"VolumetricRenderTarget.ReconstructDepth"
              );
    if ((void *)local_78._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_78._64_8_);
    }
    if (local_d8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_d8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  pFVar5 = FRDGBuilder::RegisterExternalTexture
                     (param_1,this->VolumetricReconstructRTDepth + this->CurrentRT,None);
  return pFVar5;
}

// GetOrCreateDstVolumetricReconstructSecondaryRT @ 145871c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FVolumetricRenderTargetViewStateData::GetOrCreateDstVolumetricReconstructSecondaryRT
          (FVolumetricRenderTargetViewStateData *this,FRDGBuilder *param_1)

{
  uint uVar1;
  FRHICommandListBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRDGTexture *pFVar5;
  FRHITextureDesc *pFVar6;
  undefined1 auStackY_158 [32];
  FClearValueBinding local_f8;
  FPooledRenderTargetDesc local_d8;
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (((this->VolumetricReconstructRTResolution).field0_0x0._s_0.X ==
       UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
     ((this->VolumetricReconstructRTResolution).field0_0x0._s_0.Y ==
      UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("VolumetricReconstructRTResolution != FIntPoint::ZeroValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x1d2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRDGTexture *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (this->VolumetricReconstructSecondaryRT[this->CurrentRT].Reference ==
      (IPooledRenderTarget *)0x0) {
    local_f8.ColorBinding = EColorBound;
    local_f8.Value.DSValue = ___xmm_3f800000000000000000000000000000;
    local_f8.Value._8_8_ = _UNK_150689648;
    FPooledRenderTargetDesc::Create2DDesc
              (&local_d8,(TIntPoint<int>)(this->VolumetricReconstructRTResolution).field0_0x0._s_0,
               PF_FloatRGBA,&local_f8,None,ShaderResource|RenderTargetable,false,'\x01',true,false,
               false);
    uVar1 = this->CurrentRT;
    pFVar2 = (FRHICommandListBase *)param_1->_padding_;
    pFVar6 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_78,&local_d8);
    FRenderTargetPool::FindFreeElement
              ((FRenderTargetPool *)&GRenderTargetPool,pFVar2,pFVar6,
               this->VolumetricReconstructSecondaryRT + uVar1,L"VolumetricRenderTarget.Reconstruct")
    ;
    if ((void *)local_78._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_78._64_8_);
    }
    if (local_d8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_d8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  pFVar5 = FRDGBuilder::RegisterExternalTexture
                     (param_1,this->VolumetricReconstructSecondaryRT + this->CurrentRT,None);
  return pFVar5;
}

// GetOrCreateSrcVolumetricReconstructRT @ 145871e70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FVolumetricRenderTargetViewStateData::GetOrCreateSrcVolumetricReconstructRT
          (FVolumetricRenderTargetViewStateData *this,FRDGBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGTexture *pFVar3;
  
  if (((this->VolumetricReconstructRTResolution).field0_0x0._s_0.X ==
       UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
     ((this->VolumetricReconstructRTResolution).field0_0x0._s_0.Y ==
      UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VolumetricReconstructRTResolution != FIntPoint::ZeroValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x216,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGTexture *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->VolumetricReconstructRT[1 - this->CurrentRT].Reference == (IPooledRenderTarget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VolumetricReconstructRT[1u - CurrentRT].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x218,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGTexture *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = FRDGBuilder::RegisterExternalTexture
                     (param_1,this->VolumetricReconstructRT + (1 - this->CurrentRT),None);
  return pFVar3;
}

// GetOrCreateSrcVolumetricReconstructRTDepth @ 145871f30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FVolumetricRenderTargetViewStateData::GetOrCreateSrcVolumetricReconstructRTDepth
          (FVolumetricRenderTargetViewStateData *this,FRDGBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGTexture *pFVar3;
  
  if (((this->VolumetricReconstructRTResolution).field0_0x0._s_0.X ==
       UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
     ((this->VolumetricReconstructRTResolution).field0_0x0._s_0.Y ==
      UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VolumetricReconstructRTResolution != FIntPoint::ZeroValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x226,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGTexture *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->VolumetricReconstructRT[1 - this->CurrentRT].Reference == (IPooledRenderTarget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VolumetricReconstructRT[1u - CurrentRT].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x228,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGTexture *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = FRDGBuilder::RegisterExternalTexture
                     (param_1,this->VolumetricReconstructRTDepth + (1 - this->CurrentRT),None);
  return pFVar3;
}

// GetOrCreateSrcVolumetricReconstructSecondaryRT @ 145871ff0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FVolumetricRenderTargetViewStateData::GetOrCreateSrcVolumetricReconstructSecondaryRT
          (FVolumetricRenderTargetViewStateData *this,FRDGBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGTexture *pFVar3;
  
  if (((this->VolumetricReconstructRTResolution).field0_0x0._s_0.X ==
       UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
     ((this->VolumetricReconstructRTResolution).field0_0x0._s_0.Y ==
      UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VolumetricReconstructRTResolution != FIntPoint::ZeroValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x21e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGTexture *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->VolumetricReconstructSecondaryRT[1 - this->CurrentRT].Reference ==
      (IPooledRenderTarget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VolumetricReconstructSecondaryRT[1u - CurrentRT].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x220,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGTexture *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = FRDGBuilder::RegisterExternalTexture
                     (param_1,this->VolumetricReconstructSecondaryRT + (1 - this->CurrentRT),None);
  return pFVar3;
}

// GetOrCreateVolumetricSecondaryTracingRT @ 1458720b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FVolumetricRenderTargetViewStateData::GetOrCreateVolumetricSecondaryTracingRT
          (FVolumetricRenderTargetViewStateData *this,FRDGBuilder *param_1)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  FRHICommandListBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRDGTexture *pFVar5;
  FRHITextureDesc *pFVar6;
  undefined1 auStackY_148 [32];
  FClearValueBinding local_e8;
  FPooledRenderTargetDesc local_c8;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (((this->FullResolution).field0_0x0._s_0.X ==
       UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
     ((this->FullResolution).field0_0x0._s_0.Y ==
      UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FullResolution != FIntPoint::ZeroValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x177,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRDGTexture *)(*pcVar3)();
      return pFVar5;
    }
  }
  pTVar1 = &this->VolumetricSecondaryTracingRT;
  if (pTVar1->Reference == (IPooledRenderTarget *)0x0) {
    local_e8.ColorBinding = EColorBound;
    local_e8.Value.DSValue = ___xmm_3f800000000000000000000000000000;
    local_e8.Value._8_8_ = _UNK_150689648;
    FPooledRenderTargetDesc::Create2DDesc
              (&local_c8,(TIntPoint<int>)(this->VolumetricTracingRTResolution).field0_0x0._s_0,
               PF_FloatRGBA,&local_e8,None,UAV|ShaderResource|RenderTargetable,false,'\x01',true,
               false,false);
    pFVar2 = (FRHICommandListBase *)param_1->_padding_;
    pFVar6 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_68,&local_c8);
    FRenderTargetPool::FindFreeElement
              ((FRenderTargetPool *)&GRenderTargetPool,pFVar2,pFVar6,pTVar1,
               L"VolumetricRenderTarget.SecondaryTracing");
    if ((void *)local_68._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._64_8_);
    }
    if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  pFVar5 = FRDGBuilder::RegisterExternalTexture(param_1,pTVar1,None);
  return pFVar5;
}

// GetOrCreateVolumetricTracingRT @ 145872220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FVolumetricRenderTargetViewStateData::GetOrCreateVolumetricTracingRT
          (FVolumetricRenderTargetViewStateData *this,FRDGBuilder *param_1)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  FRHICommandListBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRDGTexture *pFVar5;
  FRHITextureDesc *pFVar6;
  undefined1 auStackY_148 [32];
  FClearValueBinding local_e8;
  FPooledRenderTargetDesc local_c8;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (((this->FullResolution).field0_0x0._s_0.X ==
       UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
     ((this->FullResolution).field0_0x0._s_0.Y ==
      UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FullResolution != FIntPoint::ZeroValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x168,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRDGTexture *)(*pcVar3)();
      return pFVar5;
    }
  }
  pTVar1 = &this->VolumetricTracingRT;
  if (pTVar1->Reference == (IPooledRenderTarget *)0x0) {
    local_e8.ColorBinding = EColorBound;
    local_e8.Value.DSValue = ___xmm_3f800000000000000000000000000000;
    local_e8.Value._8_8_ = _UNK_150689648;
    FPooledRenderTargetDesc::Create2DDesc
              (&local_c8,(TIntPoint<int>)(this->VolumetricTracingRTResolution).field0_0x0._s_0,
               PF_FloatRGBA,&local_e8,None,UAV|ShaderResource|RenderTargetable,false,'\x01',true,
               false,false);
    pFVar2 = (FRHICommandListBase *)param_1->_padding_;
    pFVar6 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_68,&local_c8);
    FRenderTargetPool::FindFreeElement
              ((FRenderTargetPool *)&GRenderTargetPool,pFVar2,pFVar6,pTVar1,
               L"VolumetricRenderTarget.Tracing");
    if ((void *)local_68._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._64_8_);
    }
    if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  pFVar5 = FRDGBuilder::RegisterExternalTexture(param_1,pTVar1,None);
  return pFVar5;
}

// GetOrCreateVolumetricTracingRTDepth @ 145872390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FVolumetricRenderTargetViewStateData::GetOrCreateVolumetricTracingRTDepth
          (FVolumetricRenderTargetViewStateData *this,FRDGBuilder *param_1)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  FRHICommandListBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRDGTexture *pFVar5;
  FRHITextureDesc *pFVar6;
  EPixelFormat EVar7;
  undefined1 auStackY_148 [32];
  FClearValueBinding local_e8;
  FPooledRenderTargetDesc local_c8;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (((this->FullResolution).field0_0x0._s_0.X ==
       UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
     ((this->FullResolution).field0_0x0._s_0.Y ==
      UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FullResolution != FIntPoint::ZeroValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x186,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRDGTexture *)(*pcVar3)();
      return pFVar5;
    }
  }
  pTVar1 = &this->VolumetricTracingRTDepth;
  if (pTVar1->Reference == (IPooledRenderTarget *)0x0) {
    EVar7 = PF_G16R16F;
    if (this->Mode == 0) {
      EVar7 = PF_FloatRGBA;
    }
    local_e8.ColorBinding = EColorBound;
    local_e8.Value.DSValue = ___xmm_47761800477618004776180047761800;
    local_e8.Value._8_8_ = _UNK_1510400b8;
    FPooledRenderTargetDesc::Create2DDesc
              (&local_c8,(TIntPoint<int>)(this->VolumetricTracingRTResolution).field0_0x0._s_0,EVar7
               ,&local_e8,None,UAV|ShaderResource|RenderTargetable,false,'\x01',true,false,false);
    pFVar2 = (FRHICommandListBase *)param_1->_padding_;
    pFVar6 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_68,&local_c8);
    FRenderTargetPool::FindFreeElement
              ((FRenderTargetPool *)&GRenderTargetPool,pFVar2,pFVar6,pTVar1,
               L"VolumetricRenderTarget.TracingDepth");
    if ((void *)local_68._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._64_8_);
    }
    if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  pFVar5 = FRDGBuilder::RegisterExternalTexture(param_1,pTVar1,None);
  return pFVar5;
}

// GetOrCreateVolumetricTracingRTHoldout @ 145872510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FVolumetricRenderTargetViewStateData::GetOrCreateVolumetricTracingRTHoldout
          (FVolumetricRenderTargetViewStateData *this,FRDGBuilder *param_1)

{
  FRHICommandListBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRDGTexture *pFVar4;
  FRHITextureDesc *pFVar5;
  undefined1 auStackY_158 [32];
  FClearValueBinding local_f8;
  FPooledRenderTargetDesc local_d8;
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (((this->FullResolution).field0_0x0._s_0.X ==
       UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
     ((this->FullResolution).field0_0x0._s_0.Y ==
      UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FullResolution != FIntPoint::ZeroValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x197,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRDGTexture *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((this->VolumetricTracingRTHoldout).Reference == (IPooledRenderTarget *)0x0) {
    local_f8.ColorBinding = EColorBound;
    local_f8.Value.Color[0] = 0.0;
    local_f8.Value.Color[1] = (float)0;
    local_f8.Value._8_8_ = 0;
    FPooledRenderTargetDesc::Create2DDesc
              (&local_d8,(TIntPoint<int>)(this->VolumetricTracingRTResolution).field0_0x0._s_0,
               PF_R16F,&local_f8,None,UAV|ShaderResource,false,'\x01',true,false,false);
    pFVar1 = (FRHICommandListBase *)param_1->_padding_;
    pFVar5 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_78,&local_d8);
    FRenderTargetPool::FindFreeElement
              ((FRenderTargetPool *)&GRenderTargetPool,pFVar1,pFVar5,
               &this->VolumetricTracingRTHoldout,L"VolumetricRenderTarget.TracingHoldOut");
    if ((void *)local_78._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_78._64_8_);
    }
    if (local_d8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_d8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  this->bHoldoutValid = true;
  pFVar4 = FRDGBuilder::RegisterExternalTexture(param_1,&this->VolumetricTracingRTHoldout,None);
  return pFVar4;
}

// GetSrcVolumetricReconstructViewRect @ 145873350

TIntPoint<int> * __thiscall
FVolumetricRenderTargetViewStateData::GetSrcVolumetricReconstructViewRect
          (FVolumetricRenderTargetViewStateData *this)

{
  return this->VolumetricReconstructViewRect + (1 - this->CurrentRT);
}

// GetTracingCoordToFullResPixelCoordScaleBias @ 145879ce0

TIntVector4<unsigned_int> * __thiscall
FVolumetricRenderTargetViewStateData::GetTracingCoordToFullResPixelCoordScaleBias
          (FVolumetricRenderTargetViewStateData *this,
          TIntVector4<unsigned_int> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  
  pTVar3 = CVarVolumetricRenderTargetScale.Ref;
  fVar7 = __real_3f800000;
  if (this->Mode == 2) {
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar6 = 0;
    }
    else {
      lVar6 = 4;
    }
    fVar7 = *(float *)((longlong)pTVar3->ShadowedValue + lVar6);
    if (__real_3f800000 <= fVar7) {
      fVar7 = __real_3f800000;
    }
    if (fVar7 <= __real_3dcccccd) {
      fVar7 = __real_3dcccccd;
    }
  }
  uVar1 = this->VolumetricReconstructRTDownsampleFactor;
  uVar5 = ((int)ROUND(__real_40000000 / fVar7 + __real_3f000000) >> 1) *
          this->VolumetricTracingRTDownsampleFactor * uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = uVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = uVar5;
  iVar2 = (this->CurrentPixelOffset).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = uVar1 * (this->CurrentPixelOffset).field0_0x0._s_0.X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.W = uVar1 * iVar2;
  return __return_storage_ptr__;
}

// GetTracingCoordToZbufferCoordScaleBias @ 145879d90

TIntVector4<unsigned_int> * __thiscall
FVolumetricRenderTargetViewStateData::GetTracingCoordToZbufferCoordScaleBias
          (FVolumetricRenderTargetViewStateData *this,
          TIntVector4<unsigned_int> *__return_storage_ptr__)

{
  uint uVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  
  pTVar2 = CVarVolumetricRenderTargetScale.Ref;
  fVar7 = __real_3f800000;
  if (this->Mode == 2) {
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
      lVar5 = 0;
    }
    else {
      lVar5 = 4;
    }
    fVar7 = *(float *)((longlong)pTVar2->ShadowedValue + lVar5);
    if (__real_3f800000 <= fVar7) {
      fVar7 = __real_3f800000;
    }
    if (fVar7 <= __real_3dcccccd) {
      fVar7 = __real_3dcccccd;
    }
  }
  iVar6 = (int)ROUND(__real_40000000 / fVar7 + __real_3f000000) >> 1;
  if ((this->Mode != 2) && (this->Mode != 3)) {
    uVar1 = this->VolumetricReconstructRTDownsampleFactor;
    uVar4 = uVar1 * this->VolumetricTracingRTDownsampleFactor * iVar6 >> 1;
    (__return_storage_ptr__->field0_0x0)._s_0.X = uVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = uVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (uVar1 * (this->CurrentPixelOffset).field0_0x0._s_0.X) / uVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.W =
         (uVar1 * (this->CurrentPixelOffset).field0_0x0._s_0.Y) / uVar1;
    return __return_storage_ptr__;
  }
  uVar1 = this->VolumetricReconstructRTDownsampleFactor;
  uVar4 = uVar1 * this->VolumetricTracingRTDownsampleFactor * iVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = uVar4;
  iVar6 = (this->CurrentPixelOffset).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = uVar1 * (this->CurrentPixelOffset).field0_0x0._s_0.X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.W = uVar1 * iVar6;
  return __return_storage_ptr__;
}

// GetVolumetricTracingUVMax @ 14587b240

TVector2<float> __thiscall
FVolumetricRenderTargetViewStateData::GetVolumetricTracingUVMax
          (FVolumetricRenderTargetViewStateData *this)

{
  int iVar1;
  TIntPoint<int>_u_0_s_0 TVar2;
  TVector2<float>_u_0 in_RDX;
  float fVar3;
  float fVar4;
  float fVar5;
  
  TVar2 = (this->VolumetricTracingViewRect).field0_0x0._s_0;
  fVar4 = (float)TVar2.X;
  fVar5 = (float)TVar2.Y;
  iVar1 = (this->VolumetricTracingRTResolution).field0_0x0._s_0.Y;
  fVar3 = fVar5 - __real_3f028f5c;
  *(float *)in_RDX =
       (fVar4 / (float)(this->VolumetricTracingRTResolution).field0_0x0._s_0.X) *
       ((fVar4 - __real_3f028f5c) / fVar4);
  *(float *)((longlong)in_RDX + 4) = (fVar5 / (float)iVar1) * (fVar3 / fVar5);
  return (TVector2<float>)in_RDX;
}

// GetVolumetricTracingUVScale @ 14587b2b0

TVector2<float> __thiscall
FVolumetricRenderTargetViewStateData::GetVolumetricTracingUVScale
          (FVolumetricRenderTargetViewStateData *this)

{
  int iVar1;
  int iVar2;
  TVector2<float>_u_0 in_RDX;
  
  iVar1 = (this->VolumetricTracingViewRect).field0_0x0._s_0.Y;
  iVar2 = (this->VolumetricTracingRTResolution).field0_0x0._s_0.Y;
  *(float *)in_RDX =
       (float)(this->VolumetricTracingViewRect).field0_0x0._s_0.X /
       (float)(this->VolumetricTracingRTResolution).field0_0x0._s_0.X;
  *(float *)((longlong)in_RDX + 4) = (float)iVar1 / (float)iVar2;
  return (TVector2<float>)in_RDX;
}

// Initialise @ 14587dca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVolumetricRenderTargetViewStateData::Initialise
          (FVolumetricRenderTargetViewStateData *this,TIntPoint<int> *param_1,
          TIntPoint<int> *param_2,int param_3,int param_4,bool param_5)

{
  uint uVar1;
  IPooledRenderTarget *pIVar2;
  ulonglong uVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  TIntPoint<int>_u_0 TVar11;
  int iVar12;
  TIntPoint<int>_u_0_s_0 TVar13;
  uint uVar14;
  TIntPoint<int>_u_0 local_res8;
  int local_48;
  int iStack_44;
  
  pTVar5 = CVarVolumetricRenderTargetViewRect.Ref;
  TVar13 = (param_1->field0_0x0)._s_0;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    lVar10 = 4;
    if (!bVar6) goto LAB_14587dcea;
  }
  lVar10 = 0;
LAB_14587dcea:
  if (*(int *)((longlong)pTVar5->ShadowedValue + lVar10) == 0) {
    TVar13 = (param_2->field0_0x0)._s_0;
  }
  iVar9 = 3;
  if (param_3 < 3) {
    iVar9 = param_3;
  }
  uVar14 = 2;
  iVar12 = 0;
  if (0 < iVar9) {
    iVar12 = iVar9;
  }
  this->Mode = iVar12;
  if ((iVar12 == 2) || (iVar12 == 3)) {
    iVar9 = 2;
  }
  else {
    iVar7 = 4;
    if (param_4 < 4) {
      iVar7 = param_4;
    }
    iVar9 = 0;
    if (0 < iVar7) {
      iVar9 = iVar7;
    }
  }
  this->UpsamplingMode = iVar9;
  this->bHoldoutValid = false;
  iVar9 = TVar13.X;
  if ((iVar9 < 1) || (iVar7 = TVar13.Y, iVar7 < 1)) {
    this->bValid = false;
    if (2 < (byte)LogRenderer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
  }
  else {
    this->bValid = true;
    if ((this->bFirstTimeUsed != false) || (param_5)) {
      this->bFirstTimeUsed = false;
      this->bHistoryValid = false;
      this->PreViewExposure = 1.0;
      this->StartTracingDistance = 0.0;
      this->FrameId = 0;
      this->NoiseFrameIndex = 0;
      this->NoiseFrameIndexModPattern = 0;
      (this->CurrentPixelOffset).field0_0x0._s_0 =
           (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    }
    uVar1 = this->CurrentRT;
    this->CurrentRT = 1 - uVar1;
    if (((((this->FullResolution).field0_0x0._s_0.X != iVar9) ||
         ((this->FullResolution).field0_0x0._s_0.Y != iVar7)) ||
        (uVar8 = GetMainDownsampleFactor(iVar12),
        uVar8 != this->VolumetricReconstructRTDownsampleFactor)) ||
       (uVar8 = GetTraceDownsampleFactor(this->Mode),
       uVar8 != this->VolumetricTracingRTDownsampleFactor)) {
      iVar12 = this->Mode;
      if (iVar12 != 0) {
        if (((iVar12 == 1) || (iVar12 == 2)) || (iVar12 == 3)) {
          uVar14 = 1;
        }
        else {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                             ,0x83,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      this->VolumetricReconstructRTDownsampleFactor = uVar14;
      uVar8 = GetTraceDownsampleFactor(this->Mode);
      uVar14 = this->VolumetricReconstructRTDownsampleFactor;
      this->VolumetricTracingRTDownsampleFactor = uVar8;
      (this->FullResolution).field0_0x0._s_0 = TVar13;
      uVar3 = (longlong)(int)((uVar14 - 1) + iVar9) / (longlong)(int)uVar14;
      lVar10 = (longlong)(int)((uVar14 - 1) + iVar7) / (longlong)(int)uVar14;
      (this->VolumetricReconstructRTResolution).field0_0x0 =
           (TIntPoint<int>_u_0)(lVar10 << 0x20 | uVar3 & 0xffffffff);
      iVar9 = (uVar8 - 1) + (int)lVar10;
      local_res8._s_0.Y = iVar9 / (int)uVar8;
      local_res8._s_0.X = (int)((uVar8 - 1) + (int)uVar3) / (int)uVar8;
      (this->VolumetricTracingRTResolution).field0_0x0 = local_res8;
      pIVar2 = (this->VolumetricTracingRT).Reference;
      if (pIVar2 != (IPooledRenderTarget *)0x0) {
        (this->VolumetricTracingRT).Reference = (IPooledRenderTarget *)0x0;
        (**(code **)(pIVar2->_padding_ + 0x38))
                  (pIVar2,(longlong)iVar9 % (longlong)(int)uVar8 & 0xffffffff);
      }
      pIVar2 = (this->VolumetricSecondaryTracingRT).Reference;
      if (pIVar2 != (IPooledRenderTarget *)0x0) {
        (this->VolumetricSecondaryTracingRT).Reference = (IPooledRenderTarget *)0x0;
        (**(code **)(pIVar2->_padding_ + 0x38))();
      }
      pIVar2 = (this->VolumetricTracingRTDepth).Reference;
      if (pIVar2 != (IPooledRenderTarget *)0x0) {
        (this->VolumetricTracingRTDepth).Reference = (IPooledRenderTarget *)0x0;
        (**(code **)(pIVar2->_padding_ + 0x38))();
      }
    }
    uVar14 = this->VolumetricReconstructRTDownsampleFactor;
    local_res8._s_0.Y = (int)((uVar14 - 1) + (param_2->field0_0x0)._s_0.Y) / (int)uVar14;
    local_res8._s_0.X = (int)((uVar14 - 1) + (param_2->field0_0x0)._s_0.X) / (int)uVar14;
    this->VolumetricReconstructViewRect[this->CurrentRT].field0_0x0 = local_res8;
    uVar14 = this->VolumetricTracingRTDownsampleFactor;
    uVar8 = this->CurrentRT;
    iVar9 = (*(TIntPoint<int>_u_0 *)&this->VolumetricReconstructViewRect[uVar8].field0_0x0._s_0).Y +
            -1 + uVar14;
    local_res8._s_0.Y = iVar9 / (int)uVar14;
    local_res8._s_0.X =
         (int)((*(TIntPoint<int>_u_0 *)&this->VolumetricReconstructViewRect[uVar8].field0_0x0._s_0).
               X + -1 + uVar14) / (int)uVar14;
    (this->VolumetricTracingViewRect).field0_0x0 = local_res8;
    pIVar2 = this->VolumetricReconstructRT[uVar8].Reference;
    if (pIVar2 == (IPooledRenderTarget *)0x0) {
      iStack_44 = (int)((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
      local_48 = (int)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    }
    else {
      lVar10 = (**(code **)(pIVar2->_padding_ + 0x10))
                         (pIVar2,(longlong)iVar9 % (longlong)(int)uVar14 & 0xffffffff);
      local_48 = *(int *)(lVar10 + 0x2c);
      iStack_44 = (int)((ulonglong)*(undefined8 *)(lVar10 + 0x2c) >> 0x20);
    }
    uVar14 = this->VolumetricReconstructRTDownsampleFactor;
    TVar13 = (this->FullResolution).field0_0x0._s_0;
    pIVar2 = this->VolumetricReconstructRT[this->CurrentRT].Reference;
    if ((pIVar2 != (IPooledRenderTarget *)0x0) &&
       ((local_48 != (int)((uVar14 - 1) + TVar13.X) / (int)uVar14 ||
        (iStack_44 != (int)((uVar14 - 1) + TVar13.Y) / (int)uVar14)))) {
      this->VolumetricReconstructRT[this->CurrentRT].Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar2->_padding_ + 0x38))();
      pIVar2 = this->VolumetricReconstructSecondaryRT[this->CurrentRT].Reference;
      if (pIVar2 != (IPooledRenderTarget *)0x0) {
        this->VolumetricReconstructSecondaryRT[this->CurrentRT].Reference =
             (IPooledRenderTarget *)0x0;
        (**(code **)(pIVar2->_padding_ + 0x38))();
      }
      pIVar2 = this->VolumetricReconstructRTDepth[this->CurrentRT].Reference;
      if (pIVar2 != (IPooledRenderTarget *)0x0) {
        this->VolumetricReconstructRTDepth[this->CurrentRT].Reference = (IPooledRenderTarget *)0x0;
        (**(code **)(pIVar2->_padding_ + 0x38))();
      }
    }
    if ((param_5) || (this->VolumetricReconstructRT[uVar1].Reference == (IPooledRenderTarget *)0x0))
    {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    uVar14 = this->VolumetricTracingRTDownsampleFactor;
    this->NoiseFrameIndex = this->NoiseFrameIndex + (uint)(this->FrameId == 0);
    this->bHistoryValid = bVar6;
    this->NoiseFrameIndexModPattern = this->NoiseFrameIndex % (uVar14 * uVar14);
    uVar3 = (ulonglong)(this->FrameId + 1) % (ulonglong)(uVar14 * uVar14);
    iVar9 = (int)uVar3;
    this->FrameId = iVar9;
    if (uVar14 == 2) {
      TVar11 = (TIntPoint<int>_u_0)
               (CONCAT44((uint)OrderDithering2x2[iVar9] >> 1,OrderDithering2x2[iVar9]) &
               0xffffffff00000001);
    }
    else if (uVar14 == 4) {
      TVar11 = (TIntPoint<int>_u_0)
               (CONCAT44((uint)OrderDithering4x4[iVar9] >> 2,OrderDithering4x4[iVar9]) &
               0xffffffff00000003);
    }
    else {
      TVar11._s_0.Y = (int)(uVar3 / uVar14);
      TVar11._s_0.X = (int)(uVar3 % (ulonglong)uVar14);
    }
    (this->CurrentPixelOffset).field0_0x0 = TVar11;
    if ((this->Mode == 1) || (this->Mode == 3)) {
      (this->CurrentPixelOffset).field0_0x0._s_0 =
           (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
      return;
    }
  }
  return;
}

// Reset @ 1458879e0

void __thiscall
FVolumetricRenderTargetViewStateData::Reset(FVolumetricRenderTargetViewStateData *this)

{
  IPooledRenderTarget *pIVar1;
  TRefCountPtr<IPooledRenderTarget> *pTVar2;
  longlong lVar3;
  
  this->bFirstTimeUsed = false;
  this->bHistoryValid = false;
  this->bHoldoutValid = false;
  this->bValid = false;
  this->FrameId = 0;
  this->NoiseFrameIndex = 0;
  this->NoiseFrameIndexModPattern = 0;
  this->PreViewExposure = 1.0;
  this->StartTracingDistance = 0.0;
  (this->CurrentPixelOffset).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->CurrentRT = 0;
  this->Mode = 0;
  this->UpsamplingMode = 0;
  pIVar1 = (this->VolumetricTracingRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->VolumetricTracingRT).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->VolumetricSecondaryTracingRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->VolumetricSecondaryTracingRT).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->VolumetricTracingRTDepth).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->VolumetricTracingRTDepth).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pTVar2 = this->VolumetricReconstructSecondaryRT;
  lVar3 = 2;
  do {
    pIVar1 = pTVar2[-2].Reference;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      pTVar2[-2].Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
    pIVar1 = pTVar2->Reference;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      pTVar2->Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
    pIVar1 = pTVar2[2].Reference;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      pTVar2[2].Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
    pTVar2 = pTVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

