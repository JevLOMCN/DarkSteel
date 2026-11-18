// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 62

// DrawStatsHUD @ 1486b08f0

int __thiscall FViewport::DrawStatsHUD(FViewport *this,FCanvas *param_1,int param_2,int param_3)

{
  return param_3;
}

// GetDesiredAspectRatio @ 1486bd880

float __thiscall FViewport::GetDesiredAspectRatio(FViewport *this)

{
  int local_res8;
  int local_resc;
  
  (**(code **)(this->_padding_ + 0x28))(this,&local_res8);
  return (float)local_res8 / (float)local_resc;
}

// GetSizeXY @ 1486c7800

TIntPoint<int> __thiscall FViewport::GetSizeXY(FViewport *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(uint *)in_RDX = this->SizeX;
  *(uint *)((longlong)in_RDX + 4) = this->SizeY;
  return (TIntPoint<int>)in_RDX;
}

// GetTabletPressure @ 1486c8c40

float __thiscall FViewport::GetTabletPressure(FViewport *this)

{
  return 0.0;
}

// GetWindowMode @ 1486c9bd0

Type __thiscall FViewport::GetWindowMode(FViewport *this)

{
  return this->WindowMode;
}

// IsExclusiveFullscreen @ 1486d1060

bool __thiscall FViewport::IsExclusiveFullscreen(FViewport *this)

{
  return this->WindowMode == Fullscreen;
}

// IsFullscreen @ 1486d12a0

bool __thiscall FViewport::IsFullscreen(FViewport *this)

{
  if ((this->WindowMode != Fullscreen) && (this->WindowMode != WindowedFullscreen)) {
    return false;
  }
  return true;
}

// IsKeyboardAvailable @ 1486d1300

bool __thiscall FViewport::IsKeyboardAvailable(FViewport *this,int param_1)

{
  return true;
}

// IsMouseAvailable @ 1486d1400

bool __thiscall FViewport::IsMouseAvailable(FViewport *this,int param_1)

{
  return true;
}

// IsPenActive @ 1486d1500

bool __thiscall FViewport::IsPenActive(FViewport *this)

{
  return false;
}

// UpdateMouseCursor @ 1486f5f50

bool __thiscall FViewport::UpdateMouseCursor(FViewport *this,bool param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 1488f0e00

void __cdecl
`FViewport::HighResScreenshot'::__l30::<lambda_1>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FString local_18;
  
  pFVar2 = FPaths::GetPath(&local_18,param_1);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  FWindowsPlatformProcess::ExploreFolder(pwVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FViewport @ 14890a190

/* WARNING: Enum "Type": Some values do not have unique names */

FViewport * __thiscall FViewport::FViewport(FViewport *this,FViewportClient *param_1)

{
  FString *pFVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  Type TVar4;
  char cVar5;
  FString local_28;
  
  this->_padding_ = (longlong)&___7FRenderTarget__6B_;
  this->_padding_ = 0;
  FRenderResource::FRenderResource((FRenderResource *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  pFVar1 = &this->AppVersionString;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  (this->AppVersionString).Data.ArrayNum = 0;
  (this->AppVersionString).Data.ArrayMax = 0;
  this->ViewportClient = param_1;
  (this->HitProxyMap)._padding_ = (longlong)&___7FHitProxyConsumer__6B_;
  (this->HitProxyMap)._padding_ = (longlong)&___7FGCObject__6B_;
  (this->HitProxyMap)._padding_ = (longlong)&___7FRenderTarget__6B_;
  (this->HitProxyMap)._padding_ = 0;
  *(undefined2 *)&(this->HitProxyMap)._padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&(this->HitProxyMap)._padding_);
  (this->HitProxyMap)._padding_ = (longlong)&FHitProxyMap::_vftable__for__FHitProxyConsumer__;
  (this->HitProxyMap)._padding_ = (longlong)&FHitProxyMap::_vftable__for__FRenderTarget__;
  (this->HitProxyMap)._padding_ = (longlong)&FHitProxyMap::_vftable__for__FGCObject__;
  (this->HitProxyMap).HitProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitProxyMap).HitProxies.ArrayNum = 0;
  (this->HitProxyMap).HitProxies.ArrayMax = 0;
  (this->HitProxyMap).HitProxyCPUTexture.Reference = (FRHITexture *)0x0;
  (this->CachedHitProxyData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedHitProxyData).ArrayNum = 0;
  (this->CachedHitProxyData).ArrayMax = 0;
  (this->ViewportRHI).Reference = (FRHIViewport *)0x0;
  this->InitialPositionX = 0;
  this->InitialPositionY = 0;
  this->SizeX = 0;
  TVar4 = GSystemResolution.WindowMode;
  this->SizeY = 0;
  this->bHitProxiesCached = 0;
  this->bIsHDR = 0;
  this->bIsSlateViewport = 0;
  this->bHasRequestedToggleFreeze = 0;
  this->WindowMode = TVar4;
  (this->ViewportType).ComparisonIndex = 0;
  (this->ViewportType).Number = 0;
  this->bTakeHighResScreenShot = false;
  this->HitProxySize = 5;
  if ((this->ViewportClient == (FViewportClient *)0x0) ||
     (cVar5 = (**(code **)((longlong)*this->ViewportClient + 0x120))(), cVar5 == '\0')) {
    this->bRequiresHitProxyStorage = 0;
  }
  else {
    this->bRequiresHitProxyStorage = 1;
    if (2 < (byte)LogClient._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClient);
    }
  }
  FApp::GetBuildVersion();
  ::FString::PrintfImpl(&local_28,L"Build: %s");
  if (pFVar1 != &local_28) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (this->AppVersionString).Data.ArrayNum = local_28.Data.ArrayNum;
    (this->AppVersionString).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->bIsPlayInEditorViewport = 0;
  return this;
}

// ~FViewport @ 14890e4e0

void __thiscall FViewport::~FViewport(FViewport *this)

{
  FRHIResource *this_00;
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this_00 = (FRHIResource *)(this->ViewportRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  pFVar1 = (this->CachedHitProxyData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FHitProxyMap::~FHitProxyMap(&this->HitProxyMap);
  pFVar1 = (this->AppVersionString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&this->_padding_);
  this->_padding_ = (longlong)&___7FRenderTarget__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  return;
}

// operator() @ 1489109a0

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
`FViewport::GetActorsAndModelsInHitProxy'::__l2::<lambda_1>::operator()
          (void *this,HHitProxy *param_1)

{
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *this_00;
  bool bVar1;
  HHitProxyType *pHVar2;
  AActor *local_res18;
  UObject *local_res20;
  
  pHVar2 = HActor::StaticGetType();
  bVar1 = HHitProxy::IsA(param_1,pHVar2);
  if (bVar1) {
    local_res20 = (UObject *)param_1[1]._padding_;
    if (local_res20 != (UObject *)0x0) {
      TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Emplace<AActor_*_const_&>
                (*(TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> **)this,
                 &local_res18,(bool *)&local_res20);
      return true;
    }
  }
  else {
    pHVar2 = HModel::StaticGetType();
    bVar1 = HHitProxy::IsA(param_1,pHVar2);
    if (bVar1) {
      local_res20 = (UObject *)param_1[1]._padding_;
      TSet<UModel_*,DefaultKeyFuncs<UModel_*,0>,FDefaultSetAllocator>::Emplace<UModel_*>
                (*(TSet<UModel_*,DefaultKeyFuncs<UModel_*,0>,FDefaultSetAllocator> **)
                  ((longlong)this + 8),(UModel **)&local_res18,(bool *)&local_res20);
      return true;
    }
    pHVar2 = HBSPBrushVert::StaticGetType();
    bVar1 = HHitProxy::IsA(param_1,pHVar2);
    if (bVar1) {
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(param_1 + 1));
      if (bVar1) {
        this_00 = *(TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> **)this;
        local_res20 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1 + 1));
        TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Emplace<AActor_*>
                  (this_00,&local_res18,(bool *)&local_res20);
      }
    }
  }
  return true;
}

// operator() @ 1489119d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FViewport::GetRawHitProxyData'::__l9::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITransitionInfo_u_8 FVar1;
  FRHITransitionInfo_u_8 *pFVar2;
  undefined1 auStackY_188 [32];
  TArrayView<FRHITransitionInfo_const_,int> local_158;
  FRHITransitionInfo local_148;
  FRHIRenderPassInfo local_118;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar2 = (FRHITransitionInfo_u_8 *)(**(code **)(*(longlong *)(*(longlong *)this + 0x50) + 0x10))()
  ;
  local_158.ArrayNum = 1;
  local_148._padding_._0_4_ = 0xffffffff;
  local_148.Type = Texture;
  FVar1 = (FRHITransitionInfo_u_8)pFVar2->Texture;
  local_148._padding_._4_2_ = 0xffff;
  local_158.DataPtr = &local_148;
  local_148.AccessBefore = None;
  local_148.AccessAfter = RTV;
  local_148.Flags = None;
  local_148.CommitInfo.bIsSet = false;
  local_148.field1_0x8 = FVar1;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_158,None);
  FRHIRenderPassInfo::FRHIRenderPassInfo
            (&local_118,FVar1.Texture,Clear_Store,(FRHITexture *)0x0,'\0',-1);
  FRHICommandList::BeginRenderPass((FRHICommandList *)param_1,&local_118,L"ClearHitProxyMap");
  FRHICommandList::EndRenderPass((FRHICommandList *)param_1);
  if (local_118.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_118.ShadingRateTexture.Reference);
  }
  return;
}

// operator() @ 1489131f0

void __thiscall
`FViewport::GetRawHitProxyData'::__l9::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITexture *pFVar1;
  undefined8 *puVar2;
  TIntVector3<int>_u_0 local_48;
  undefined8 local_3c;
  int local_34;
  undefined8 local_30;
  int local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  
  local_48._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_34 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_28 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_24 = 0;
  local_14 = 0;
  local_48._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_3c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_30 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_1c = 1;
  local_10 = 1;
  pFVar1 = *(FRHITexture **)(*(longlong *)this + 0x40);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)(*(longlong *)this + 8) + 0x10))();
  TransitionAndCopyTexture
            ((FRHICommandList *)param_1,(FRHITexture *)*puVar2,pFVar1,
             (FRHICopyTextureInfo *)&local_48._s_0);
  return;
}

// operator() @ 148913540

void __thiscall
`FViewport::GetRawHitProxyData'::__l13::<lambda_4>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  TIntRect<int>_u_0 local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  ushort uStack_36;
  undefined4 uStack_34;
  FReadSurfaceDataFlags local_28;
  
  local_58._s_0.Min.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x10);
  local_58._s_0.Max.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x18);
  local_38 = 0;
  uStack_34 = 0;
  local_28._16_8_ = (ulonglong)uStack_36 << 0x10;
  local_28.GPUIndex = 0;
  local_48 = 6;
  uStack_40 = CONCAT31(uStack_40._1_3_,1);
  uStack_3c = 0x467a0000;
  local_28.MaxDepthRange = 16000.0;
  local_28._8_4_ = uStack_40;
  local_28.CubeFace = CubeFace_MAX;
  local_28.CompressionMode = RCM_UNorm;
  FRHICommandListImmediate::ReadSurfaceData
            (param_1,*(FRHITexture **)(*(longlong *)this + 0x88),(TIntRect<int> *)&local_58._s_0,
             *(TArray<FColor,TSizedDefaultAllocator<32>_> **)((longlong)this + 8),&local_28);
  return;
}

// BeginRenderFrame @ 148919410

void __thiscall FViewport::BeginRenderFrame(FViewport *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  FRHIResource *local_18 [2];
  
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
                         ,0x700,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->ViewportRHI).Reference != (FRHIViewport *)0x0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x298))(GDynamicRHI,local_18);
    plVar1 = &this->_padding_;
    if ((FRHIResource **)plVar1 != local_18) {
      this_00 = (FRHIResource *)*plVar1;
      *plVar1 = (longlong)local_18[0];
      local_18[0] = (FRHIResource *)0x0;
      if (this_00 == (FRHIResource *)0x0) {
        return;
      }
      FRHIResource::Release(this_00);
    }
    if (local_18[0] != (FRHIResource *)0x0) {
      FRHIResource::Release(local_18[0]);
    }
  }
  return;
}

// CalculateViewExtents @ 14891c250

TIntRect<int> * __thiscall
FViewport::CalculateViewExtents
          (FViewport *this,TIntRect<int> *__return_storage_ptr__,float param_1,
          TIntRect<int> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_res8 [8];
  
  piVar3 = (int *)(**(code **)(this->_padding_ + 0x28))(this,local_res8);
  fVar7 = (float)(**(code **)(this->_padding_ + 0x1a8))(this);
  uVar1 = *(undefined8 *)&param_2->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  iVar6 = *piVar3;
  iVar5 = piVar3[1];
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
  iVar4 = (int)((ulonglong)uVar1 >> 0x20);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = uVar1;
  fVar9 = (float)((int)uVar2 - (int)uVar1);
  fVar10 = ((float)iVar6 * param_1) / ((float)iVar5 * fVar7);
  fVar8 = (float)((int)((ulonglong)uVar2 >> 0x20) - iVar4);
  fVar7 = fVar10 - fVar9 / fVar8;
  if (__real_3c23d70a < (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (fVar7 <= 0.0) {
      iVar6 = (int)ROUND((fVar8 + fVar8) * fVar10 + __real_3f000000) >> 1;
      if (iVar6 < 1) {
        iVar6 = 1;
      }
      iVar5 = ((int)ROUND((fVar9 - (float)iVar6) + __real_3f000000) >> 1) + (int)uVar1;
      *(int *)&__return_storage_ptr__->field0_0x0 = iVar5;
      *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = iVar5 + iVar6;
    }
    else {
      iVar6 = (int)ROUND((fVar9 + fVar9) / fVar10 + __real_3f000000) >> 1;
      if (iVar6 < 1) {
        iVar6 = 1;
      }
      iVar4 = ((int)ROUND((fVar8 - (float)iVar6) + __real_3f000000) >> 1) + iVar4;
      *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = iVar4;
      *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = iVar4 + iVar6;
    }
  }
  return __return_storage_ptr__;
}

// CalculateViewExtents @ 14891c3c0

TIntRect<int> * __cdecl
FViewport::CalculateViewExtents
          (TIntRect<int> *__return_storage_ptr__,float param_1,float param_2,TIntRect<int> *param_3,
          TIntPoint<int> *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  uVar2 = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  iVar3 = (int)((ulonglong)uVar2 >> 0x20);
  fVar7 = (float)((int)uVar1 - (int)uVar2);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = uVar2;
  fVar6 = (float)((int)((ulonglong)uVar1 >> 0x20) - iVar3);
  fVar8 = ((float)(param_4->field0_0x0)._s_0.X * param_1) /
          ((float)(param_4->field0_0x0)._s_0.Y * param_2);
  fVar5 = fVar8 - fVar7 / fVar6;
  if (__real_3c23d70a < (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (0.0 < fVar5) {
      iVar4 = (int)ROUND((fVar7 + fVar7) / fVar8 + __real_3f000000) >> 1;
      if (iVar4 < 1) {
        iVar4 = 1;
      }
      iVar3 = ((int)ROUND((fVar6 - (float)iVar4) + __real_3f000000) >> 1) + iVar3;
      *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = iVar3;
      *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = iVar3 + iVar4;
      return __return_storage_ptr__;
    }
    iVar3 = (int)ROUND((fVar6 + fVar6) * fVar8 + __real_3f000000) >> 1;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    iVar4 = (int)uVar2 + ((int)ROUND((fVar7 - (float)iVar3) + __real_3f000000) >> 1);
    *(int *)&__return_storage_ptr__->field0_0x0 = iVar4;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = iVar4 + iVar3;
  }
  return __return_storage_ptr__;
}

// CaptureMouse @ 14891cbb0

void __thiscall FViewport::CaptureMouse(FViewport *this,bool param_1)

{
  return;
}

// DeferInvalidateHitProxy @ 148924c90

void __thiscall FViewport::DeferInvalidateHitProxy(FViewport *this)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  this->bHitProxiesCached = 0;
  DestructItems<TRefCountPtr<HHitProxy>,int>
            ((TRefCountPtr<HHitProxy> *)(this->HitProxyMap).HitProxies.AllocatorInstance.Data,
             (this->HitProxyMap).HitProxies.ArrayNum);
  piVar1 = &(this->HitProxyMap).HitProxies.ArrayMax;
  (this->HitProxyMap).HitProxies.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->HitProxyMap).HitProxies.AllocatorInstance,0,piVar1);
  }
  lVar3 = (**(code **)(this->_padding_ + 0x160))(this);
  if ((lVar3 != 0) && (puVar2 = *(undefined8 **)(lVar3 + 0x68), puVar2 != (undefined8 *)0x0)) {
    *(undefined8 *)(lVar3 + 0x68) = 0;
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}

// Draw @ 14892d150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FViewport::Draw(FViewport *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  Type TVar8;
  UWorld *this_00;
  FHighResScreenshotConfig *pFVar9;
  ULocalPlayer *pUVar10;
  uint *puVar11;
  FTlsAutoCleanup *pFVar12;
  UWorld *pUVar13;
  UObject *pUVar14;
  TConsoleVariableData<int> *pTVar15;
  IConsoleManager *pIVar16;
  longlong *plVar17;
  TConsoleVariableData<int> *pTVar18;
  uint uVar19;
  TOptional<UE::FTimeout_const_> *pTVar20;
  longlong lVar21;
  uint uVar22;
  byte bVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStackY_278 [32];
  undefined1 local_236 [6];
  LARGE_INTEGER local_230;
  undefined8 local_228;
  uint local_220;
  uint uStack_21c;
  FString local_218;
  FString local_208;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_1f8;
  code *local_1e8;
  undefined1 *local_1e0;
  FDestructionSentinel local_1d8;
  TIntRect<int>_u_0 local_1c0;
  TIntRect<int>_u_0 local_1b0;
  TOptional<UE::FTimeout_const_> local_1a0;
  TOptional<UE::FTimeout_const_> local_188;
  FCanvas local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"FViewport_Draw");
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1849,"FViewport_Draw",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
               ,0x739);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1849);
  }
  this_00 = (UWorld *)(**(code **)((longlong)*this->ViewportClient + 0x30))();
  if (bReentrant != false) goto LAB_14892d718;
  pTVar18 = (TConsoleVariableData<int> *)0x0;
  lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar21 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar16 = IConsoleManager::Get();
    plVar17 = (longlong *)(**(code **)((longlong)*pIVar16 + 0xc0))(pIVar16);
    pTVar15 = pTVar18;
    if (plVar17 != (longlong *)0x0) {
      pTVar15 = (TConsoleVariableData<int> *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    CVarDumpFrames = pTVar15;
    _Init_thread_footer(&::_TSS0);
  }
  if ((GIsHighResScreenshot == false) && (this->bTakeHighResScreenShot == false)) {
    GIsHighResScreenshot = false;
  }
  else {
    GIsHighResScreenshot = true;
  }
  if (((FScreenshotRequest::bIsScreenshotRequested == false) && (GIsHighResScreenshot == false)) &&
     (GIsDumpingMovie == 0)) {
    bVar6 = false;
LAB_14892d277:
    bVar2 = false;
  }
  else {
    bVar6 = true;
    if ((CVarDumpFrames == (TConsoleVariableData<int> *)0x0) ||
       (iVar7 = TConsoleVariableData<int>::GetValueOnGameThread(CVarDumpFrames), iVar7 == 0))
    goto LAB_14892d277;
    bVar2 = true;
  }
  if (((this_00 == (UWorld *)0x0) || (bVar4 = UWorld::IsGameWorld(this_00), !bVar4)) ||
     (bIsGameRenderingEnabled != false)) {
    if (GIsHighResScreenshot == false) {
      if ((bVar6) && (bVar2)) {
        local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.Data.ArrayNum = 0;
        local_208.Data.ArrayMax = 0;
        local_1b0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
        local_1b0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
        FScreenshotRequest::RequestScreenshot
                  (&local_208,false,true,false,(TIntRect<int> *)&local_1b0._s_0);
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pFVar9 = GetHighResScreenshotConfig();
      iVar7 = (pFVar9->FilenameOverride).Data.ArrayNum;
      bVar6 = (bool)(**(code **)(this->_padding_ + 0x48))(this);
      local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.Data.ArrayNum = 0;
      local_218.Data.ArrayMax = 0;
      local_1c0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      local_1c0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      FScreenshotRequest::RequestScreenshot
                (&local_218,false,iVar7 < 2,bVar6,(TIntRect<int> *)&local_1c0._s_0);
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      HighResScreenshot(this);
    }
    if ((this->SizeX == 0) || (this->SizeY == 0)) {
      if (this_00 != (UWorld *)0x0) {
        bVar6 = UWorld::IsGameWorld(this_00);
        if ((bVar6) && (GUseUnifiedTimeBudgetForStreaming == 0)) {
          local_188.bIsSet = false;
          pTVar20 = &local_188;
          goto LAB_14892d778;
        }
        goto LAB_14892d780;
      }
    }
    else {
      if ((*(int *)(lVar21 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        pIVar16 = IConsoleManager::Get();
        plVar17 = (longlong *)(**(code **)((longlong)*pIVar16 + 0xc0))(pIVar16,L"r.VSync");
        if (plVar17 != (longlong *)0x0) {
          pTVar18 = (TConsoleVariableData<int> *)(**(code **)(*plVar17 + 0x68))(plVar17);
        }
        ::CVar = pTVar18;
        _Init_thread_footer(&::_TSS1);
      }
      iVar7 = TConsoleVariableData<int>::GetValueOnGameThread(::CVar);
      bVar6 = iVar7 != 0;
      if (((GEngine != (UEngine *)0x0) && (this_00 != (UWorld *)0x0)) &&
         (pUVar10 = UEngine::GetFirstGamePlayer(GEngine,this_00), pUVar10 != (ULocalPlayer *)0x0)) {
        if ((pUVar10->_padding_ == 0) || ((*(byte *)(pUVar10->_padding_ + 0x4f8) & 2) == 0)) {
          bVar23 = 0;
        }
        else {
          bVar23 = 1;
        }
        bVar6 = (bool)(bVar23 | bVar6);
      }
      (**(code **)(this->_padding_ + 0x178))(this,param_1);
      if (GFrameCounter != LastFrameUpdated) {
        QueryPerformanceCounter(&local_230);
        puVar11 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
        local_1e0 = local_236;
        local_1e8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar12 = FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1e8,puVar11);
        if (bStarted == false) {
          bStarted = true;
        }
        else {
          uVar22 = local_230.s.LowPart - Lastimestamp;
          GGameThreadTime = uVar22 - *(int *)(pFVar12 + 2);
          if (uVar22 <= *(uint *)(pFVar12 + 2)) {
            GGameThreadTime = uVar22;
          }
          GGameThreadWaitTime = *(uint *)(pFVar12 + 2);
          uVar19 = *(int *)(pFVar12 + 2) - *(int *)&pFVar12[2].field_0x4;
          GGameThreadTimeCriticalPath = uVar22 - uVar19;
          if (uVar22 <= uVar19) {
            GGameThreadTimeCriticalPath = uVar22;
          }
        }
        LastFrameUpdated = GFrameCounter;
        pFVar12[2] = (FTlsAutoCleanup)0x0;
        *(undefined4 *)(pFVar12 + 3) = 0;
        Lastimestamp = local_230.s.LowPart;
      }
      pUVar13 = (UWorld *)(**(code **)((longlong)*this->ViewportClient + 0x30))();
      cVar5 = (**(code **)((longlong)*this->ViewportClient + 0x1d0))();
      fVar25 = __real_3f800000;
      if (cVar5 != '\0') {
        fVar25 = (float)(**(code **)((longlong)*this->ViewportClient + 0x1d8))();
      }
      TVar8 = GMaxRHIFeatureLevel;
      if (pUVar13 != (UWorld *)0x0) {
        TVar8 = (uint)(pUVar13->FeatureLevel).Value;
      }
      FCanvas::FCanvas(&local_168,(FRenderTarget *)this,(FHitProxyConsumer *)0x0,pUVar13,TVar8,
                       CDM_DeferDrawing,fVar25);
      local_220 = this->SizeX;
      uStack_21c = this->SizeY;
      local_168.ViewRect.field0_0x0._8_4_ = this->SizeX;
      local_168.ViewRect.field0_0x0._12_4_ = this->SizeY;
      local_228 = 0;
      local_168.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      (**(code **)((longlong)*this->ViewportClient + 0x20))(this->ViewportClient,this,&local_168);
      FCanvas::Flush_GameThread(&local_168,false);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &UGameViewportClient::ViewportRenderedDelegate,(FWriteAccessScope *)&local_1d8);
      bVar2 = false;
      UGameViewportClient::ViewportRenderedDelegate._28_4_ =
           UGameViewportClient::ViewportRenderedDelegate._28_4_ + 1;
      uVar22 = UGameViewportClient::ViewportRenderedDelegate._16_4_ - 1;
      if (-1 < (int)uVar22) {
        lVar21 = (longlong)(int)uVar22 << 4;
        bVar2 = false;
        do {
          uVar19 = 0;
          if ((int)uVar22 < (int)UGameViewportClient::ViewportRenderedDelegate._16_4_) {
            uVar19 = ~uVar22 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (((*(int *)(lVar21 + 8 + UGameViewportClient::ViewportRenderedDelegate._8_8_) == 0) ||
              (plVar17 = *(longlong **)
                          (lVar21 + UGameViewportClient::ViewportRenderedDelegate._8_8_),
              plVar17 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar17 + 0x68))(plVar17,this), cVar5 == '\0')) {
            bVar2 = true;
          }
          lVar21 = lVar21 + -0x10;
          uVar22 = uVar22 - 1;
        } while (-1 < (int)uVar22);
      }
      UGameViewportClient::ViewportRenderedDelegate._28_4_ =
           UGameViewportClient::ViewportRenderedDelegate._28_4_ + -1;
      if (bVar2) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &UGameViewportClient::ViewportRenderedDelegate,false);
      }
      if (local_1d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
      }
      (**(code **)((longlong)*this->ViewportClient + 0x28))(this->ViewportClient,this);
      (**(code **)(this->_padding_ + 0x168))(this,bVar6);
      (**(code **)(this->_padding_ + 0x180))(this,bVar6,param_1);
      GInputLatencyTimer.GameThreadTrigger = false;
      FCanvas::~FCanvas(&local_168);
      if (this_00 != (UWorld *)0x0) goto LAB_14892d780;
    }
  }
  else {
    if (GUseUnifiedTimeBudgetForStreaming == 0) {
      local_1a0.bIsSet = false;
      pTVar20 = &local_1a0;
LAB_14892d778:
      UWorld::UpdateLevelStreaming(this_00,pTVar20);
    }
LAB_14892d780:
    UWorld::GetPlayerControllerIterator(this_00,&local_1f8);
    for (; (iVar7 = local_1f8.Index, pTVar3 = local_1f8.Container, -1 < local_1f8.Index &&
           (local_1f8.Index < (local_1f8.Container)->ArrayNum));
        local_1f8.Index = local_1f8.Index + 1) {
      if ((local_1f8.Index < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 8));
      if ((pUVar14 != (UObject *)0x0) && (*(longlong *)&pUVar14[0x16].field_0x20 != 0)) {
        puVar11 = (uint *)(*(longlong *)&pUVar14[0x16].field_0x20 + 0x2810);
        *puVar11 = *puVar11 & 0xfffff7ff;
      }
    }
  }
  if ((0 < PresentAndStopMovieDelay) &&
     (PresentAndStopMovieDelay = PresentAndStopMovieDelay + -1, PresentAndStopMovieDelay == 0)) {
    bIsGameRenderingEnabled = true;
  }
LAB_14892d718:
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// EndRenderFrame @ 1489394d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FViewport::EndRenderFrame
          (FViewport *this,FRHICommandListImmediate *param_1,bool param_2,bool param_3)

{
  code *pcVar1;
  ulong64 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
                       ,0x70b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar2 = GFrameCounterRenderThread;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    if (param_1->field_0x64 == '\0') {
      puVar4 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar4;
      *(undefined8 **)&param_1->field_0x30 = puVar4 + 1;
      puVar4[1] = 0;
      *puVar4 = &TRHILambdaCommand<FRHICommandListImmediate,`FViewport::EndRenderFrame'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar4[3] = L"TRHILambdaCommand";
      puVar4[2] = uVar2;
    }
    else {
      UEngine::SetPresentLatencyMarkerStart(GFrameCounterRenderThread);
    }
  }
  else {
    UEngine::SetPresentLatencyMarkerStart(GFrameCounterRenderThread);
  }
  FRHICommandListImmediate::EndDrawingViewport
            (param_1,(this->ViewportRHI).Reference,param_2,param_3);
  uVar2 = GFrameCounterRenderThread;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar4 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar4;
    *(undefined8 **)&param_1->field_0x30 = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &TRHILambdaCommand<FRHICommandListImmediate,`FViewport::EndRenderFrame'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar4[3] = L"TRHILambdaCommand";
    puVar4[2] = uVar2;
    return;
  }
  UEngine::SetPresentLatencyMarkerEnd(GFrameCounterRenderThread);
  return;
}

// EnqueueBeginRenderFrame @ 148939740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FViewport::EnqueueBeginRenderFrame(FViewport *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FViewport *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FViewport *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FViewport::EnqueueBeginRenderFrame'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FViewport::EnqueueBeginRenderFrame'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FViewport::EnqueueBeginRenderFrame_::__l2::TSTR_BeginDrawingCommand1829>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FViewport::EnqueueBeginRenderFrame'::__l2::TSTR_BeginDrawingCommand1829>
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

// EnqueueEndRenderFrame @ 1489398a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FViewport::EnqueueEndRenderFrame(FViewport *this,bool param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  FViewport *pFStack_70;
  uint local_68;
  undefined4 uStack_64;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FViewport *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (PresentAndStopMovieDelay < 1) {
    uVar3 = (uint)param_2;
  }
  else {
    uVar3 = 0;
  }
  local_60 = (undefined ***)0x0;
  local_68 = uVar3 * 4 | (uint)GInputLatencyTimer.GameThreadTrigger * 2 | (uint)param_1;
  uStack_64 = auStack_b8._44_4_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FViewport::EnqueueEndRenderFrame'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FViewport::EnqueueEndRenderFrame'::`2'::<lambda_1>,1,0>::
              _vftable_;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FViewport::EnqueueEndRenderFrame_::__l2::TSTR_EndDrawingCommand1840>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._4_4_ = uStack_64;
    local_38._0_4_ = local_68;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FViewport::EnqueueEndRenderFrame'::__l2::TSTR_EndDrawingCommand1840>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar6 = (ulonglong)local_28;
    if (2 < uVar6) {
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
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar5 = local_30;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar5 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar5 = local_60;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// EnumerateHitProxiesInRect @ 148939a30

void __thiscall
FViewport::EnumerateHitProxiesInRect
          (FViewport *this,TIntRect<int> *param_1,TFunctionRef<bool___cdecl(HHitProxy_*)> *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar8;
  HHitProxy *pHVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FHitProxyId local_res10 [4];
  HHitProxy *local_res20;
  TIntRect<int>_u_0 local_48;
  
  local_48._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_1->field0_0x0)._s_0.Min.field0_0x0;
  local_48._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_1->field0_0x0)._s_0.Max.field0_0x0;
  pTVar8 = GetRawHitProxyData(this,(TIntRect<int> *)&local_48._s_0);
  iVar11 = *(int *)((longlong)&param_1->field0_0x0 + 0xc);
  if ((*(int *)((longlong)&param_1->field0_0x0 + 8) - *(int *)&param_1->field0_0x0 < 0x1f5) ||
     (iVar12 = 4, iVar11 - *(int *)((longlong)&param_1->field0_0x0 + 4) < 0x1f5)) {
    iVar12 = 1;
  }
  iVar13 = *(int *)((longlong)&param_1->field0_0x0 + 4);
  if (iVar13 < iVar11) {
    do {
      uVar10 = iVar13 * this->SizeX;
      uVar7 = 0;
      if ((int)uVar10 < pTVar8->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (pTVar8->AllocatorInstance).Data;
      iVar11 = *(int *)&param_1->field0_0x0;
      if (iVar11 < *(int *)((longlong)&param_1->field0_0x0 + 8)) {
        do {
          FHitProxyId::FHitProxyId
                    (local_res10,
                     (FColor)((FColor_u_0 *)
                             (pFVar3 + (longlong)iVar11 * 4 + (longlong)(int)uVar10 * 4))->_s_0);
          pHVar9 = GetHitProxyById(local_res10[0]);
          if ((pHVar9 != (HHitProxy *)0x0) &&
             (local_res20 = pHVar9,
             cVar6 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res20),
             cVar6 == '\0')) {
            return;
          }
          iVar1 = *(int *)((longlong)&param_1->field0_0x0 + 8);
          iVar2 = iVar1 + -1;
          if (iVar11 < iVar2) {
            iVar11 = iVar11 + iVar12;
            if (iVar2 < iVar11) {
              iVar11 = iVar2;
            }
          }
          else {
            iVar11 = iVar11 + 1;
          }
        } while (iVar11 < iVar1);
      }
      iVar2 = *(int *)((longlong)&param_1->field0_0x0 + 0xc);
      iVar11 = iVar2 + -1;
      if (iVar13 < iVar11) {
        iVar13 = iVar13 + iVar12;
        if (iVar11 < iVar13) {
          iVar13 = iVar11;
        }
      }
      else {
        iVar13 = iVar13 + 1;
      }
    } while (iVar13 < iVar2);
  }
  return;
}

// GetActorsAndModelsInHitProxy @ 148954b40

void __thiscall
FViewport::GetActorsAndModelsInHitProxy
          (FViewport *this,TIntRect<int> *param_1,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_2,
          TSet<UModel_*,DefaultKeyFuncs<UModel_*,0>,FDefaultSetAllocator> *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *local_48;
  TSet<UModel_*,DefaultKeyFuncs<UModel_*,0>,FDefaultSetAllocator> *local_40;
  code *local_38;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> **local_30;
  TIntRect<int>_u_0 local_28;
  
  bVar3 = 1 < param_2->HashSize;
  if (!bVar3) {
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::UnhashElements(param_2);
  }
  puVar1 = &(param_2->Elements).field_0xc;
  *(undefined4 *)&(param_2->Elements).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)param_2,0,(int *)puVar1);
  }
  *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  iVar2 = *(int *)&(param_2->Elements).field_0x2c;
  *(undefined4 *)&(param_2->Elements).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(param_2->Elements).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10,0);
  }
  if (bVar3) {
    param_2->HashSize = 1;
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Rehash(param_2);
  }
  bVar3 = 1 < param_3->HashSize;
  if (!bVar3) {
    TSet<UModel_*,DefaultKeyFuncs<UModel_*,0>,FDefaultSetAllocator>::UnhashElements(param_3);
  }
  puVar1 = &(param_3->Elements).field_0xc;
  *(undefined4 *)&(param_3->Elements).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)param_3,0,(int *)puVar1);
  }
  *(undefined4 *)&(param_3->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(param_3->Elements).field_0x34 = 0;
  iVar2 = *(int *)&(param_3->Elements).field_0x2c;
  *(undefined4 *)&(param_3->Elements).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(param_3->Elements).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(param_3->Elements).field_0x10,0);
  }
  if (bVar3) {
    param_3->HashSize = 1;
    TSet<UModel_*,DefaultKeyFuncs<UModel_*,0>,FDefaultSetAllocator>::Rehash(param_3);
  }
  local_30 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FViewport::GetActorsAndModelsInHitProxy'::__l2::<lambda_1>,bool,HHitProxy_*>
             ::Call;
  local_28._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_1->field0_0x0)._s_0.Min.field0_0x0;
  local_28._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_1->field0_0x0)._s_0.Max.field0_0x0;
  local_48 = param_2;
  local_40 = param_3;
  EnumerateHitProxiesInRect
            (this,(TIntRect<int> *)&local_28._s_0,
             (TFunctionRef<bool___cdecl(HHitProxy_*)> *)&local_38);
  return;
}

// GetDebugCanvas @ 148957b60

FCanvas * __thiscall FViewport::GetDebugCanvas(FViewport *this)

{
  return (FCanvas *)0x0;
}

// GetElementHandleAtPoint @ 1489586b0

FTypedElementHandle * __thiscall
FViewport::GetElementHandleAtPoint
          (FViewport *this,FTypedElementHandle *__return_storage_ptr__,int param_1,int param_2)

{
  HHitProxy *pHVar1;
  
  pHVar1 = GetHitProxy(this,param_1,param_2);
  if (pHVar1 != (HHitProxy *)0x0) {
    (**(code **)(pHVar1->_padding_ + 0x28))(pHVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  __return_storage_ptr__->DataPtr = (FTypedElementInternalData *)0x0;
  __return_storage_ptr__->ReferenceId = -1;
  return __return_storage_ptr__;
}

// GetElementHandlesInRect @ 148958700

void __thiscall
FViewport::GetElementHandlesInRect
          (FViewport *this,TIntRect<int> *param_1,
          TSharedRef<TTypedElementList<FTypedElementHandle>,1> *param_2)

{
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> *local_res10;
  code *local_28;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> **local_20;
  TIntRect<int>_u_0 local_18;
  
  TTypedElementList<FTypedElementHandle>::Reset(param_2->Object);
  local_20 = &local_res10;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FViewport::GetElementHandlesInRect'::__l2::<lambda_1>,bool,HHitProxy_*>
             ::Call;
  local_18._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_1->field0_0x0)._s_0.Min.field0_0x0;
  local_18._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_1->field0_0x0)._s_0.Max.field0_0x0;
  local_res10 = param_2;
  EnumerateHitProxiesInRect
            (this,(TIntRect<int> *)&local_18._s_0,
             (TFunctionRef<bool___cdecl(HHitProxy_*)> *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// GetGPUMask @ 148958d10

FRHIGPUMask __thiscall FViewport::GetGPUMask(FViewport *this,FRHICommandListImmediate *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x290))(GDynamicRHI,(this->ViewportRHI).Reference);
  *(int *)param_1 = 1 << (bVar1 & 0x1f);
  return (FRHIGPUMask)(uint)param_1;
}

// GetHitProxy @ 1489595f0

HHitProxy * __thiscall FViewport::GetHitProxy(FViewport *this,int param_1,int param_2)

{
  HHitProxy *pHVar1;
  code *pcVar2;
  EHitProxyPriority *pEVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  HHitProxy *pHVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  int local_res8;
  int local_resc;
  TArray<HHitProxy_*,TSizedDefaultAllocator<32>_> local_58;
  TIntRect<int>_u_0 local_48;
  
  uVar12 = this->HitProxySize;
  (**(code **)(this->_padding_ + 0x28))(this,&local_res8);
  uVar11 = local_res8 - 1;
  uVar6 = uVar11;
  if ((int)(param_1 - uVar12) < (int)uVar11) {
    uVar6 = param_1 - uVar12;
  }
  uVar15 = 0;
  local_48._0_4_ = 0;
  if (0 < (int)uVar6) {
    local_48._0_4_ = uVar6;
  }
  uVar9 = local_resc - 1;
  uVar6 = uVar9;
  if ((int)(param_2 - uVar12) < (int)uVar9) {
    uVar6 = param_2 - uVar12;
  }
  local_48._4_4_ = 0;
  if (0 < (int)uVar6) {
    local_48._4_4_ = uVar6;
  }
  if ((int)(uVar12 + param_1) < (int)uVar11) {
    uVar11 = uVar12 + param_1;
  }
  uVar6 = 0;
  if (0 < (int)uVar11) {
    uVar6 = uVar11;
  }
  if ((int)(uVar12 + param_2) < (int)uVar9) {
    uVar9 = uVar12 + param_2;
  }
  uVar12 = 0;
  if (0 < (int)uVar9) {
    uVar12 = uVar9;
  }
  uVar9 = (uVar6 - local_48._0_4_) + 1;
  uVar11 = (uVar12 - local_48._4_4_) + 1;
  if (((int)uVar9 < 1) || ((int)uVar11 < 1)) {
    return (HHitProxy *)0x0;
  }
  local_48._8_4_ = uVar6 + 1;
  local_48._12_4_ = uVar12 + 1;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  GetHitProxyMap(this,(TIntRect<int> *)&local_48._s_0,&local_58);
  if ((local_58.ArrayNum != uVar11 * uVar9) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProxyMap.Num() == TestSizeX * TestSizeY",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
                         ,0x871,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pHVar7 = (HHitProxy *)(*pcVar2)();
    return pHVar7;
  }
  uVar12 = ((int)uVar11 / 2) * uVar9 + (int)uVar9 / 2;
  if ((local_58.ArrayNum <= (int)uVar12) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProxyIndex<ProxyMap.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
                         ,0x875,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pHVar7 = (HHitProxy *)(*pcVar2)();
    return pHVar7;
  }
  uVar6 = 0;
  if ((int)uVar12 < local_58.ArrayNum) {
    uVar6 = ~uVar12 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pHVar7 = (HHitProxy *)(*pcVar2)();
    return pHVar7;
  }
  pHVar7 = *(HHitProxy **)(local_58.AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
  cVar5 = (**(code **)((longlong)*this->ViewportClient + 0x138))();
  lVar16 = 0;
  uVar8 = (ulonglong)uVar11;
  do {
    if (0 < (int)uVar9) {
      uVar14 = (ulonglong)uVar9;
      lVar13 = lVar16;
      uVar12 = uVar15;
      do {
        uVar6 = 0;
        if ((int)uVar12 < local_58.ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pHVar7 = (HHitProxy *)(*pcVar2)();
          return pHVar7;
        }
        pHVar1 = *(HHitProxy **)(local_58.AllocatorInstance.Data + lVar13 * 8);
        if (pHVar1 != (HHitProxy *)0x0) {
          if (pHVar7 != (HHitProxy *)0x0) {
            lVar10 = 0x14;
            pEVar3 = &pHVar7->OrthoPriority;
            if (cVar5 == '\0') {
              lVar10 = 0x10;
              pEVar3 = &pHVar7->Priority;
            }
            if (*(int *)((longlong)&pHVar1->_padding_ + lVar10) <= (int)*pEVar3) goto LAB_148959863;
          }
          pHVar7 = pHVar1;
        }
LAB_148959863:
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    uVar15 = uVar15 + uVar9;
    lVar16 = lVar16 + (int)uVar9;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) {
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return pHVar7;
    }
  } while( true );
}

// GetHitProxyMap @ 1489598e0

void __thiscall
FViewport::GetHitProxyMap
          (FViewport *this,TIntRect<int> *param_1,
          TArray<HHitProxy_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FHitProxyId local_res10 [2];
  HHitProxy *local_48;
  TIntRect<int>_u_0 local_40;
  
  local_40._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_1->field0_0x0)._s_0.Min.field0_0x0;
  local_40._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_1->field0_0x0)._s_0.Max.field0_0x0;
  pTVar7 = GetRawHitProxyData(this,(TIntRect<int> *)&local_40._s_0);
  if (pTVar7->ArrayNum != 0) {
    uVar11 = (*(int *)((longlong)&param_1->field0_0x0 + 8) - *(int *)&param_1->field0_0x0) *
             (*(int *)((longlong)&param_1->field0_0x0 + 0xc) -
             *(int *)((longlong)&param_1->field0_0x0 + 4));
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (*piVar1 != uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,&param_2->AllocatorInstance,0,piVar1);
    }
    iVar8 = *(int *)((longlong)&param_1->field0_0x0 + 4);
    if (iVar8 < *(int *)((longlong)&param_1->field0_0x0 + 0xc)) {
      do {
        iVar9 = iVar8 * this->SizeX;
        if (iVar9 < 0) {
          return;
        }
        if (pTVar7->ArrayNum <= iVar9) {
          return;
        }
        if ((iVar9 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (pTVar7->AllocatorInstance).Data;
        iVar10 = *(int *)&param_1->field0_0x0;
        if (iVar10 < *(int *)((longlong)&param_1->field0_0x0 + 8)) {
          do {
            FHitProxyId::FHitProxyId
                      (local_res10,
                       (FColor)((FColor_u_0 *)(pFVar2 + (longlong)iVar10 * 4 + (longlong)iVar9 * 4))
                               ->_s_0);
            local_48 = GetHitProxyById(local_res10[0]);
            pFVar3 = (param_2->AllocatorInstance).Data;
            if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
                ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)*piVar1 * 8)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar6 = param_2->ArrayNum;
            if (iVar6 == *piVar1) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_2->AllocatorInstance,piVar1);
            }
            iVar10 = iVar10 + 1;
            param_2->ArrayNum = iVar6 + 1;
            *(HHitProxy **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_48;
          } while (iVar10 < *(int *)((longlong)&param_1->field0_0x0 + 8));
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)((longlong)&param_1->field0_0x0 + 0xc));
    }
  }
  return;
}

// GetRawHitProxyData @ 14895b780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TArray<FColor,TSizedDefaultAllocator<32>_> * __thiscall
FViewport::GetRawHitProxyData(FViewport *this,TIntRect<int> *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  FRenderCommandList *pFVar9;
  FCommandList *pFVar10;
  FRenderCommandTag *pFVar11;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar12;
  UWorld *pUVar13;
  undefined ***pppuVar14;
  code **ppcVar15;
  FRenderTarget *pFVar16;
  uint uVar17;
  uint uVar18;
  Type TVar19;
  ulonglong uVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStackY_3b8 [32];
  FScopedCapture local_368;
  code *local_328 [2];
  code *local_318 [3];
  code **local_300;
  code *local_2f8 [2];
  undefined **local_2e8;
  FViewport *pFStack_2e0;
  undefined8 local_2d8;
  undefined ***local_2d0;
  code *local_2c8 [2];
  undefined **local_2b8;
  FHitProxyMap *pFStack_2b0;
  undefined8 local_2a8;
  undefined ***local_2a0;
  code *local_298 [2];
  undefined **local_288;
  FViewport *pFStack_280;
  undefined8 local_278;
  undefined ***local_270;
  undefined1 local_268 [16];
  undefined **local_258;
  FViewport *pFStack_250;
  undefined8 local_248;
  undefined ***local_240;
  byte local_238;
  undefined1 local_228 [16];
  undefined **local_218;
  FHitProxyMap *pFStack_210;
  undefined8 local_208;
  undefined ***local_200;
  byte local_1f8;
  undefined1 local_1e8 [16];
  undefined **local_1d8;
  FViewport *pFStack_1d0;
  undefined8 local_1c8;
  undefined ***local_1c0;
  byte local_1b8;
  undefined1 local_1a8 [40];
  code **local_180;
  byte local_178;
  FCanvas local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  bVar4 = UEngine::IsStereoscopic3D(GEngine,this);
  if (bVar4) {
    pTVar12 = &this->CachedHitProxyData;
    uVar17 = this->SizeY * this->SizeX;
    piVar1 = &(this->CachedHitProxyData).ArrayNum;
    iVar8 = *piVar1;
    if (iVar8 < (int)uVar17) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar17 - iVar8,&pTVar12->AllocatorInstance,piVar1,
                         &(this->CachedHitProxyData).ArrayMax);
      memset((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 4,0,
             (longlong)(int)(uVar17 - iVar8) << 2);
    }
    else {
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      if ((int)uVar17 < iVar8) {
        uVar18 = iVar8 - uVar17;
        if (((int)(uVar18 | uVar17) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar12;
        }
        if (uVar18 != 0) {
          _Dst = (pTVar12->AllocatorInstance).Data + (longlong)(int)uVar17 * 4;
          iVar8 = ((this->CachedHitProxyData).ArrayNum - uVar18) - uVar17;
          if (iVar8 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar18 * 4,(longlong)iVar8 << 2);
          }
          iVar8 = (this->CachedHitProxyData).ArrayNum - uVar18;
          (this->CachedHitProxyData).ArrayNum = iVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar12->AllocatorInstance,iVar8,&(this->CachedHitProxyData).ArrayMax);
        }
      }
    }
  }
  else {
    if ((this->bHitProxiesCached == 0) ||
       (this->SizeY * this->SizeX != (this->CachedHitProxyData).ArrayNum)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (this->bHitProxiesCached == 0) {
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"HitProxyMapGen");
      bVar21 = -1 < CpuChannel->Enabled;
      if (bVar21) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2031,"HitProxyMapGen",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
                   ,0x7ef);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2031);
      }
      RenderCaptureInterface::FScopedCapture::FScopedCapture
                (&local_368,GHitProxyCaptureNextUpdate != 0,L"Update Hit Proxies",(wchar_t *)0x0);
      GHitProxyCaptureNextUpdate = 0;
      (**(code **)(this->_padding_ + 0x178))(this,0);
      local_2d0 = (undefined ***)0x0;
      local_2e8 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FViewport::GetRawHitProxyData'::`9'::<lambda_1>,1,0>::
                   _vftable_;
      local_2f8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FViewport::GetRawHitProxyData'::__l9::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
      pFStack_2e0 = this;
      pFVar9 = FRenderCommandList::GetInstanceTLS();
      if (pFVar9 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FViewport::GetRawHitProxyData_::__l9::TSTR_BeginDrawingCommandHitProxy2039>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_2f8);
      }
      else {
        pFVar10 = FRenderCommandList::GetRenderThread(pFVar9);
        local_268._0_8_ = local_2f8[0];
        local_240 = local_2d0;
        local_258 = local_2e8;
        pFStack_250 = pFStack_2e0;
        local_248 = local_2d8;
        local_2f8[0] = (code *)0x0;
        local_238 = 2;
        pFVar11 = (FRenderCommandTag *)
                  TRenderCommandTag<`FViewport::GetRawHitProxyData'::__l9::TSTR_BeginDrawingCommandHitProxy2039>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar10,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_268,pFVar11);
        uVar20 = (ulonglong)local_238;
        if ((2 < uVar20) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar12;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar20] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_268._0_8_ != (code *)0x0) {
            pppuVar14 = (undefined ***)(local_268 + 0x10);
            if (local_240 != (undefined ***)0x0) {
              pppuVar14 = local_240;
            }
            (*(code *)(*pppuVar14)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar20])(local_268);
        }
      }
      if (local_2f8[0] != (code *)0x0) {
        pppuVar14 = &local_2e8;
        if (local_2d0 != (undefined ***)0x0) {
          pppuVar14 = local_2d0;
        }
        (*(code *)(*pppuVar14)[2])();
      }
      cVar6 = (**(code **)((longlong)*this->ViewportClient + 0x1d0))();
      fVar22 = __real_3f800000;
      if (cVar6 != '\0') {
        fVar22 = (float)(**(code **)((longlong)*this->ViewportClient + 0x1d8))();
      }
      bVar2 = *(byte *)((longlong)&this->_padding_ + 4);
      TVar19 = (uint)bVar2;
      if (bVar2 == 5) {
        TVar19 = GMaxRHIFeatureLevel;
      }
      pUVar13 = (UWorld *)(**(code **)((longlong)*this->ViewportClient + 0x30))();
      pFStack_2b0 = &this->HitProxyMap;
      pFVar16 = (FRenderTarget *)&(this->HitProxyMap)._padding_;
      if (pFStack_2b0 == (FHitProxyMap *)0x0) {
        pFVar16 = (FRenderTarget *)0x0;
      }
      FCanvas::FCanvas(&local_168,pFVar16,(FHitProxyConsumer *)pFStack_2b0,pUVar13,TVar19,
                       CDM_DeferDrawing,fVar22);
      (**(code **)((longlong)*this->ViewportClient + 0x20))(this->ViewportClient,this,&local_168);
      FCanvas::Flush_GameThread(&local_168,false);
      local_2a0 = (undefined ***)0x0;
      local_2b8 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FViewport::GetRawHitProxyData'::`9'::<lambda_2>,1,0>::
                   _vftable_;
      local_2c8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FViewport::GetRawHitProxyData'::__l9::<lambda_2>,void,FRHICommandListImmediate_&>
                     ::Call;
      pFVar9 = FRenderCommandList::GetInstanceTLS();
      if (pFVar9 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FViewport::GetRawHitProxyData_::__l9::TSTR_UpdateHitProxyRTCommand2060>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_2c8);
      }
      else {
        pFVar10 = FRenderCommandList::GetRenderThread(pFVar9);
        local_228._0_8_ = local_2c8[0];
        local_200 = local_2a0;
        local_218 = local_2b8;
        pFStack_210 = pFStack_2b0;
        local_208 = local_2a8;
        local_2c8[0] = (code *)0x0;
        local_1f8 = 2;
        pFVar11 = (FRenderCommandTag *)
                  TRenderCommandTag<`FViewport::GetRawHitProxyData'::__l9::TSTR_UpdateHitProxyRTCommand2060>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar10,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_228,pFVar11);
        uVar20 = (ulonglong)local_1f8;
        if ((2 < uVar20) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar12;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar20] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_228._0_8_ != (code *)0x0) {
            pppuVar14 = (undefined ***)(local_228 + 0x10);
            if (local_200 != (undefined ***)0x0) {
              pppuVar14 = local_200;
            }
            (*(code *)(*pppuVar14)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar20])(local_228);
        }
      }
      if (local_2c8[0] != (code *)0x0) {
        pppuVar14 = &local_2b8;
        if (local_2a0 != (undefined ***)0x0) {
          pppuVar14 = local_2a0;
        }
        (*(code *)(*pppuVar14)[2])();
      }
      local_270 = (undefined ***)0x0;
      local_288 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FViewport::GetRawHitProxyData'::`9'::<lambda_3>,1,0>::
                   _vftable_;
      local_298[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FViewport::GetRawHitProxyData'::__l9::<lambda_3>,void,FRHICommandListImmediate_&>
                     ::Call;
      pFStack_280 = this;
      pFVar9 = FRenderCommandList::GetInstanceTLS();
      if (pFVar9 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FViewport::GetRawHitProxyData_::__l9::TSTR_EndDrawingCommand2066>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_298);
      }
      else {
        pFVar10 = FRenderCommandList::GetRenderThread(pFVar9);
        local_1e8._0_8_ = local_298[0];
        local_1c0 = local_270;
        local_1d8 = local_288;
        pFStack_1d0 = pFStack_280;
        local_1c8 = local_278;
        local_298[0] = (code *)0x0;
        local_1b8 = 2;
        pFVar11 = (FRenderCommandTag *)
                  TRenderCommandTag<`FViewport::GetRawHitProxyData'::__l9::TSTR_EndDrawingCommand2066>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar10,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_1e8,pFVar11);
        uVar20 = (ulonglong)local_1b8;
        if ((2 < uVar20) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar12;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar20] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_1e8._0_8_ != (code *)0x0) {
            pppuVar14 = (undefined ***)(local_1e8 + 0x10);
            if (local_1c0 != (undefined ***)0x0) {
              pppuVar14 = local_1c0;
            }
            (*(code *)(*pppuVar14)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar20])(local_1e8);
        }
      }
      if (local_298[0] != (code *)0x0) {
        pppuVar14 = &local_288;
        if (local_270 != (undefined ***)0x0) {
          pppuVar14 = local_270;
        }
        (*(code *)(*pppuVar14)[2])();
      }
      this->bHitProxiesCached = 1;
      FCanvas::~FCanvas(&local_168);
      RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_368);
      if (bVar21) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"HitProxyReadback");
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2079,"HitProxyReadback",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
                   ,0x81f);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2079);
      }
      pcVar3 = *(code **)&this->SizeX;
      local_328[0] = (code *)0x0;
      local_300 = FMemory::Malloc(0x28,8);
      local_300[1] = (code *)this;
      *local_300 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FViewport::GetRawHitProxyData'::`13'::<lambda_4>,1,1>
                            ::_vftable_;
      local_300[2] = (code *)&this->CachedHitProxyData;
      local_300[3] = (code *)0x0;
      local_300[4] = pcVar3;
      if (local_300 != (code **)&DAT_fffffffffffffff8) {
        local_328[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FViewport::GetRawHitProxyData'::__l13::<lambda_4>,void,FRHICommandListImmediate_&>
                       ::Call;
      }
      pFVar9 = FRenderCommandList::GetInstanceTLS();
      if (pFVar9 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FViewport::GetRawHitProxyData_::__l13::TSTR_ReadSurfaceCommand2094>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_328);
      }
      else {
        pFVar10 = FRenderCommandList::GetRenderThread(pFVar9);
        local_1a8._0_8_ = local_328[0];
        local_180 = local_300;
        local_300 = (code **)0x0;
        local_1a8._16_8_ = local_318[0];
        local_1a8._24_8_ = local_318[1];
        local_1a8._32_8_ = local_318[2];
        local_328[0] = (code *)0x0;
        local_178 = 2;
        pFVar11 = (FRenderCommandTag *)
                  TRenderCommandTag<`FViewport::GetRawHitProxyData'::__l13::TSTR_ReadSurfaceCommand2094>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar10,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_1a8,pFVar11);
        uVar20 = (ulonglong)local_178;
        if ((2 < uVar20) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar21)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar12;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar20] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_1a8._0_8_ != (code *)0x0) {
            ppcVar15 = (code **)(local_1a8 + 0x10);
            if (local_180 != (code **)0x0) {
              ppcVar15 = local_180;
            }
            (**(code **)(*ppcVar15 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar20])(local_1a8);
        }
      }
      if (local_328[0] != (code *)0x0) {
        ppcVar15 = local_328 + 2;
        if (local_300 != (code **)0x0) {
          ppcVar15 = local_300;
        }
        (**(code **)(*ppcVar15 + 0x10))();
      }
      FlushRenderingCommands();
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  return &this->CachedHitProxyData;
}

// GetRenderTargetTextureSizeXY @ 14895c340

TIntPoint<int> __thiscall FViewport::GetRenderTargetTextureSizeXY(FViewport *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  (**(code **)(this->_padding_ + 0x28))();
  return (TIntPoint<int>)in_RDX;
}

// HasFocus @ 1489608d0

bool __thiscall FViewport::HasFocus(FViewport *this)

{
  return true;
}

// HasMouseCapture @ 1489608e0

bool __thiscall FViewport::HasMouseCapture(FViewport *this)

{
  return false;
}

// HasToggleFreezeCommand @ 148960cb0

bool __thiscall FViewport::HasToggleFreezeCommand(FViewport *this)

{
  undefined4 uVar1;
  
  this->bHasRequestedToggleFreeze = 0;
  return this->bHasRequestedToggleFreeze;
}

// HighResScreenshot @ 148960d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall FViewport::HighResScreenshot(FViewport *this)

{
  ForAnyElementType *pFVar1;
  byte bVar2;
  FViewportClient *pFVar3;
  code *pcVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  ForElementType<TAlignedBytes<16,16>_> FVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  EDisplayOutputFormat EVar14;
  EDisplayColorGamut EVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  FDummyViewport *this_00;
  UWorld *pUVar20;
  FCanvas *pFVar21;
  FHighResScreenshotConfig *pFVar22;
  IConsoleManager *pIVar23;
  longlong *plVar24;
  TConsoleVariableData<int> *pTVar25;
  undefined8 *puVar26;
  ulong64 uVar27;
  FText *pFVar28;
  FSlateNotificationManager *this_01;
  Type TVar29;
  ulonglong uVar30;
  int iVar31;
  undefined1 auStackY_478 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_438;
  FDelegateAllocation local_430;
  uint local_420;
  uint local_41c;
  int local_418;
  int local_414;
  undefined8 local_410;
  FString local_408;
  FString local_3f8;
  FText local_3e8;
  undefined1 local_3d8;
  undefined1 local_3d0 [8];
  ForAnyElementType FStack_3c8;
  ulonglong local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  UWorld *local_390;
  FText local_388;
  FDestructionSentinel local_378;
  FDestructionSentinel local_360;
  FDestructionSentinel local_348;
  FDestructionSentinel local_330;
  FDestructionSentinel local_318;
  FDelegateAllocation *local_300;
  FText local_2f8;
  TSharedPtr<SNotificationItem,1> local_2e8;
  undefined1 local_2d8 [272];
  ForAnyElementType local_1c8;
  int local_1c0;
  FText local_1b8;
  bool local_1a8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1a0 [2];
  undefined1 local_168 [200];
  ForAnyElementType local_a0;
  undefined8 local_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 uStack_70;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_478;
  lVar19 = (**(code **)((longlong)*this->ViewportClient + 0x38))();
  FVar9 = FScreenshotRequest::Filename.Data.AllocatorInstance;
  if (lVar19 == 0) {
    return;
  }
  lVar19 = (longlong)FScreenshotRequest::Filename.Data.ArrayNum;
  local_408.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_408.Data.ArrayNum = FScreenshotRequest::Filename.Data.ArrayNum;
  if (FScreenshotRequest::Filename.Data.ArrayNum == 0) {
    local_408.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FScreenshotRequest::Filename.Data.ArrayNum,0,(ForAnyElementType *)&local_408,
               FScreenshotRequest::Filename.Data.ArrayNum,&local_408.Data.ArrayMax);
    memcpy(local_408.Data.AllocatorInstance.Data,FVar9.Data,lVar19 * 2);
  }
  this_00 = ::operator_new(0xe8);
  fVar5 = __real_3f800000;
  if (this_00 == (FDummyViewport *)0x0) {
    this_00 = (FDummyViewport *)0x0;
  }
  else {
    pFVar3 = this->ViewportClient;
    FViewport((FViewport *)this_00,pFVar3);
    this_00->DebugCanvas = (FCanvas *)0x0;
    this_00->_padding_ = (longlong)&FDummyViewport::_vftable__for__FRenderTarget__;
    this_00->_padding_ = (longlong)&FDummyViewport::_vftable__for__FRenderResource__;
    this_00->DisplayColorGamut = sRGB_D65;
    this_00->DisplayOutputFormat = SDR_sRGB;
    this_00->bSceneHDREnabled = false;
    *(FName *)((longlong)&this_00->_padding_ + 4) = NAME_DummyViewport;
    pUVar20 = (UWorld *)0x0;
    if (pFVar3 != (FViewportClient *)0x0) {
      pUVar20 = (UWorld *)(**(code **)((longlong)*pFVar3 + 0x30))(pFVar3);
    }
    pFVar21 = ::operator_new(0x120);
    if (pFVar21 == (FCanvas *)0x0) {
      this_00->DebugCanvas = (FCanvas *)0x0;
      _DAT_00000078 = 0;
    }
    else {
      TVar29 = GMaxRHIFeatureLevel;
      if (pUVar20 != (UWorld *)0x0) {
        TVar29 = (uint)(pUVar20->FeatureLevel).Value;
      }
      pFVar21 = FCanvas::FCanvas(pFVar21,(FRenderTarget *)this_00,(FHitProxyConsumer *)0x0,pUVar20,
                                 TVar29,CDM_DeferDrawing,fVar5);
      this_00->DebugCanvas = pFVar21;
      pFVar21->AllowedModes = 0;
    }
  }
  bVar11 = (bool)(**(code **)(this->_padding_ + 0x48))(this);
  EVar14 = (**(code **)(this->_padding_ + 0x40))(this);
  EVar15 = (**(code **)(this->_padding_ + 0x38))(this);
  this_00->DisplayColorGamut = EVar15;
  this_00->DisplayOutputFormat = EVar14;
  this_00->bSceneHDREnabled = bVar11;
  uVar16 = GScreenshotResolutionX;
  if (GScreenshotResolutionX == 0) {
    uVar16 = this->SizeX;
  }
  *(uint *)&this_00->_padding_ = uVar16;
  uVar16 = GScreenshotResolutionY;
  if (GScreenshotResolutionY == 0) {
    uVar16 = this->SizeY;
  }
  *(uint *)((longlong)&this_00->_padding_ + 4) = uVar16;
  pUVar20 = (UWorld *)&this_00->_padding_;
  if (this_00 == (FDummyViewport *)0x0) {
    pUVar20 = (UWorld *)0x0;
  }
  local_390 = pUVar20;
  BeginInitResource((FRenderResource *)pUVar20,(FRenderCommandPipe *)0x0);
  lVar19 = (**(code **)((longlong)*this->ViewportClient + 0x38))();
  local_420 = *(uint *)(lVar19 + 0x10);
  lVar19 = (**(code **)((longlong)*this->ViewportClient + 0x38))();
  local_41c = *(uint *)(lVar19 + 4);
  lVar19 = (**(code **)((longlong)*this->ViewportClient + 0x38))();
  pFVar22 = GetHighResScreenshotConfig();
  bVar11 = pFVar22->bMaskEnabled;
  *(uint *)(lVar19 + 0x10) = *(uint *)(lVar19 + 0x10) & 0xffbfffff;
  *(uint *)(lVar19 + 0x10) = *(uint *)(lVar19 + 0x10) | -(uint)(bVar11 != false) & 0x400000;
  lVar19 = (**(code **)((longlong)*this->ViewportClient + 0x38))();
  uVar30 = (ulonglong)_tls_index;
  *(uint *)(lVar19 + 4) = *(uint *)(lVar19 + 4) & 0xfffffdff;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar30 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
        (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L""), bVar11)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SceneColorFormatVar =
         (IConsoleVariable *)
         (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                   (IConsoleManager::Singleton,L"r.SceneColorFormat",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
        (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L""), bVar11)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    PostColorFormatVar =
         (IConsoleVariable *)
         (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                   (IConsoleManager::Singleton,L"r.PostProcessingColorFormat",1);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
        (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L""), bVar11)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ForceLODVar = (IConsoleVariable *)
                  (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                            (IConsoleManager::Singleton,L"r.ForceLOD",1);
    _Init_thread_footer(&::_TSS2);
  }
  if (((SceneColorFormatVar == (IConsoleVariable *)0x0) ||
      (PostColorFormatVar == (IConsoleVariable *)0x0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SceneColorFormatVar && PostColorFormatVar",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
                          ,0x689,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_418 = (**(code **)(*(longlong *)SceneColorFormatVar + 200))();
  local_414 = (**(code **)(*(longlong *)PostColorFormatVar + 200))(PostColorFormatVar);
  if (ForceLODVar == (IConsoleVariable *)0x0) {
    iVar17 = -1;
  }
  else {
    iVar17 = (**(code **)(*(longlong *)ForceLODVar + 200))(ForceLODVar);
  }
  pFVar22 = GetHighResScreenshotConfig();
  pTVar25 = (TConsoleVariableData<int> *)0x0;
  if (pFVar22->bForce128BitRendering != false) {
    local_410 = 0;
    IConsoleVariable::Set<int>(SceneColorFormatVar,5,ECVF_SetByCode,(FName)0x0);
    local_3b8 = 0;
    IConsoleVariable::Set<int>(PostColorFormatVar,1,ECVF_SetByCode,(FName)0x0);
  }
  if (ForceLODVar != (IConsoleVariable *)0x0) {
    local_3b0 = 0;
    IConsoleVariable::Set<int>(ForceLODVar,0,ECVF_SetByCode,(FName)0x0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    pIVar23 = IConsoleManager::Get();
    plVar24 = (longlong *)
              (**(code **)((longlong)*pIVar23 + 0xc0))(pIVar23,L"r.HighResScreenshotDelay",1);
    if (plVar24 != (longlong *)0x0) {
      pTVar25 = (TConsoleVariableData<int> *)(**(code **)(*plVar24 + 0x68))(plVar24);
    }
    HighResScreenshotDelay = pTVar25;
    _Init_thread_footer(&::_TSS3);
  }
  if (HighResScreenshotDelay == (TConsoleVariableData<int> *)0x0) {
    iVar31 = 4;
  }
  else {
    iVar18 = TConsoleVariableData<int>::GetValueOnGameThread(HighResScreenshotDelay);
    iVar31 = 1;
    if (1 < iVar18) {
      iVar31 = iVar18;
    }
  }
  HighResScreenshotEndFrame((FDummyViewport *)0x0);
  uVar8 = _UNK_150631d98;
  uVar6 = ___xmm_00000000ffffffff0000008000000000;
  GIsHighResScreenshot = false;
  while (iVar31 != 0) {
    HighResScreenshotBeginFrame(this_00);
    if (iVar31 == 1) {
      GIsHighResScreenshot = true;
    }
    lVar19 = (**(code **)((longlong)*this->ViewportClient + 0x30))();
    bVar2 = *(byte *)(lVar19 + 0x188);
    lVar19 = (**(code **)((longlong)*this->ViewportClient + 0x30))();
    uVar7 = ___xmm_00000000ffffffff0000008000000000;
    local_168._8_8_ = (FCanvasWordWrapper *)0x0;
    local_168._16_8_ = (TReferenceControllerBase<1> *)0x0;
    local_168._24_8_ = (FScriptContainerElement *)0x0;
    local_168._48_4_ = 0;
    local_168._52_4_ = 0;
    local_168._56_8_ = (TIntPoint<int>_u_0)0x0;
    local_168._64_8_ = (TIntPoint<int>_u_0)0x0;
    local_168._72_8_ = (TIntPoint<int>_u_0)0x0;
    local_168._96_8_ = (FHitProxyConsumer *)0x0;
    local_168._104_8_ = (HHitProxy *)0x0;
    local_168._32_4_ = 0;
    local_168._36_4_ = 0;
    local_168._40_8_ = (FScriptContainerElement *)0x0;
    local_168._80_8_ = (TIntPoint<int>_u_0)0x0;
    if (lVar19 == 0) {
      local_168._112_8_ = (FSceneInterface *)0x0;
    }
    else {
      local_168._112_8_ = *(undefined8 *)(lVar19 + 600);
    }
    local_168._120_4_ = 0xffffffff;
    local_168[0x7c] = false;
    local_168._128_8_ = 0.0;
    local_168._136_8_ = 0.0;
    local_168._144_4_ = 0.0;
    local_168._148_4_ = 0.0;
    local_168._156_4_ = ZEXT14(bVar2);
    local_168[0xa1] = false;
    local_168[0xa2] = false;
    local_168._172_4_ = CDM_DeferDrawing;
    local_168._176_4_ = 1.0;
    local_168._184_8_ = (FCanvasSortElement *)0x0;
    local_168._192_4_ = 0;
    local_168._196_4_ = 0;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = 0;
    local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    ___xmm_00000000ffffffff0000008000000000 = (int)uVar6;
    _UNK_150631d94 = SUB84(uVar6,4);
    local_90.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_90.MaxBits = _UNK_150631d94;
    uStack_70 = uVar8;
    local_60 = (void *)0x0;
    local_58 = 0;
    ___xmm_00000000ffffffff0000008000000000 = uVar7;
    local_168._88_8_ = this_00;
    FCanvas::Construct((FCanvas *)local_168);
    if (lVar19 != 0) {
      local_168._136_8_ = *(double *)(lVar19 + 0x8f8);
      local_168._144_8_ = *(undefined8 *)(lVar19 + 0x918);
      local_168._128_8_ = *(double *)(lVar19 + 0x908);
    }
    (**(code **)((longlong)*this->ViewportClient + 0x20))();
    FCanvas::Flush_GameThread((FCanvas *)local_168,false);
    lVar19 = (**(code **)(this_00->_padding_ + 0x160))(this_00);
    *(undefined4 *)(lVar19 + 0x78) = 2;
    pFVar21 = (FCanvas *)(**(code **)(this_00->_padding_ + 0x160))(this_00);
    FCanvas::Flush_GameThread(pFVar21,true);
    HighResScreenshotEndFrame(this_00);
    FlushRenderingCommands();
    iVar31 = iVar31 + -1;
    FCanvas::ClearBatchesToRender((FCanvas *)local_168);
    local_58 = 0;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    uVar30 = local_98 >> 0x20;
    local_98 = local_98 & 0xffffffff00000000;
    if ((int)uVar30 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_a0,0,(int *)((longlong)&local_98 + 4));
    }
    iVar18 = local_90.MaxBits;
    uStack_70 = 0xffffffff;
    local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
    if (0x80 < (uint)iVar18) {
      local_90.NumBits = 0;
      local_90.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90,0);
    }
    if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
    }
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
    DestructItems<FCanvas::FCanvasSortElement,int>
              ((FCanvasSortElement *)local_168._184_8_,local_168._192_4_);
    if ((FCanvasSortElement *)local_168._184_8_ != (FCanvasSortElement *)0x0) {
      FMemory::Free((void *)local_168._184_8_);
    }
    if ((HHitProxy *)local_168._104_8_ != (HHitProxy *)0x0) {
      plVar24 = (longlong *)(local_168._104_8_ + 8);
      *(int *)plVar24 = (int)*plVar24 + -1;
      if ((int)*plVar24 == 0) {
        (**(code **)*(longlong *)local_168._104_8_)(local_168._104_8_,1);
      }
    }
    if ((FScriptContainerElement *)local_168._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_168._40_8_);
    }
    if ((FScriptContainerElement *)local_168._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_168._24_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_168._16_8_);
    pUVar20 = local_390;
  }
  lVar19 = (**(code **)((longlong)*this->ViewportClient + 0x38))();
  *(uint *)(lVar19 + 0x10) =
       *(uint *)(lVar19 + 0x10) ^ (*(uint *)(lVar19 + 0x10) ^ local_420) & 0x400000;
  lVar19 = (**(code **)((longlong)*this->ViewportClient + 0x38))();
  *(uint *)(lVar19 + 4) = *(uint *)(lVar19 + 4) ^ (local_41c ^ *(uint *)(lVar19 + 4)) & 0x200;
  cVar12 = (**(code **)((longlong)*this->ViewportClient + 0x28))(this->ViewportClient,this_00);
  local_3a8 = 0;
  IConsoleVariable::Set<int>(SceneColorFormatVar,local_418,ECVF_SetByCode,(FName)0x0);
  local_3a0 = 0;
  IConsoleVariable::Set<int>(PostColorFormatVar,local_414,ECVF_SetByCode,(FName)0x0);
  if (ForceLODVar != (IConsoleVariable *)0x0) {
    local_398 = 0;
    IConsoleVariable::Set<int>(ForceLODVar,iVar17,ECVF_SetByCode,(FName)0x0);
  }
  BeginReleaseResource((FRenderResource *)pUVar20,(FRenderCommandPipe *)0x0);
  FlushRenderingCommands();
  (**(code **)this_00->_padding_)(this_00,1);
  GIsHighResScreenshot = false;
  this->bTakeHighResScreenShot = false;
  cVar13 = (**(code **)(this->_padding_ + 0x130))();
  if (((cVar13 != '\0') || (GIsAutomationTesting != false)) || (cVar12 == '\0')) goto LAB_148961b44;
  FText::AsLocalizable_Advanced_LocText
            (&local_388,L"UnrealClient",L"HighResScreenshotSavedAs",
             L"High resolution screenshot saved as");
  FNotificationInfo::FNotificationInfo((FNotificationInfo *)local_2d8,&local_388);
  local_2d8[0x9c] = true;
  local_2d8._144_4_ = 5.0;
  local_2d8[0x95] = false;
  local_2d8[0x96] = false;
  FPaths::ConvertRelativePathToFull(&local_3f8,&local_408);
  local_438.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_430.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_430.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_438,(FWriteAccessScope *)&local_318);
  local_300 = &local_430;
  puVar26 = UE::Core::Private::DelegateAllocate(0x28,&local_430);
  FVar9.Data = local_3f8.Data.AllocatorInstance.Data;
  if (puVar26 != (undefined8 *)0x0) {
    pFVar1 = (ForAnyElementType *)(puVar26 + 1);
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar26 + 2) = local_3f8.Data.ArrayNum;
    if (local_3f8.Data.ArrayNum == 0) {
      *(int *)((longlong)puVar26 + 0x14) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_3f8.Data.ArrayNum,0,pFVar1,local_3f8.Data.ArrayNum,
                 (int *)((longlong)puVar26 + 0x14));
      memcpy(pFVar1->Data,FVar9.Data,(longlong)local_3f8.Data.ArrayNum * 2);
    }
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar26[3] = uVar27;
    *puVar26 = &
               ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar26[4] = `FViewport::HighResScreenshot'::__l30::<lambda_1>::<lambda_invoker_cdecl>;
  }
  if (local_318.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_438,(FWriteAccessScope *)&local_378);
  iVar17 = local_430.DelegateSize;
  FVar10 = local_430.DelegateAllocator;
  local_430.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_430.DelegateSize = 0;
  if (local_378.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_2d8 + 0x108),
             (FWriteAccessScope *)&local_360);
  if (local_1c0 == 0) {
LAB_148961933:
    if ((ForElementType<TAlignedBytes<16,16>_>)local_1c8.Data !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free(local_1c8.Data);
    }
  }
  else if ((ForElementType<TAlignedBytes<16,16>_>)local_1c8.Data !=
           (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    (*(code *)**(undefined8 **)local_1c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1c8,0,0,0x10);
    local_1c0 = 0;
    goto LAB_148961933;
  }
  local_1c8.Data = (FScriptContainerElement *)FVar10;
  local_1c0 = iVar17;
  if (local_360.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_360.Accessor,&local_360);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_438,(FWriteAccessScope *)&local_348);
  if ((local_430.DelegateSize != 0) &&
     (local_430.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_430.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_430,0,0,0x10);
    local_430.DelegateSize = 0;
  }
  if (local_348.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
  }
  if (local_430.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_430.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_438.AccessDetector);
  pFVar28 = FText::FromString(&local_2f8,&local_3f8);
  FText::FText(&local_3e8,pFVar28);
  local_3d8 = 1;
  local_3c0 = 0;
  local_3d0 = (undefined1  [8])0x0;
  FStack_3c8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&local_1b8,&local_3e8);
  local_1a8 = (bool)local_3d8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            (local_1a0,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d0,
             (FWriteAccessScope *)&local_330);
  if (((int)local_3c0 != 0) && (FStack_3c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3c8,0,0,0x10);
    local_3c0 = local_3c0 & 0xffffffff00000000;
  }
  if (local_330.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_330.Accessor,&local_330);
  }
  if (FStack_3c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3d0);
  if (local_3e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
  }
  if (local_2f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
  }
  this_01 = FSlateNotificationManager::Get();
  FSlateNotificationManager::AddNotification(this_01,&local_2e8,(FNotificationInfo *)local_2d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e8.SharedReferenceCount.ReferenceController);
  if (4 < (byte)LogClient._0_1_) {
    FText::ToString(&local_388);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogClient);
  }
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  FNotificationInfo::~FNotificationInfo((FNotificationInfo *)local_2d8);
  if (local_388.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_388.TextData.Reference + 0x10))();
  }
LAB_148961b44:
  HighResScreenshotBeginFrame((FDummyViewport *)0x0);
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  return;
}

// InitRHI @ 148962ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FViewport::InitRHI(FViewport *this,FRHICommandListBase *param_1)

{
  if ((this->SizeX & 1) != 0) {
    FHitProxyMap::Init((FHitProxyMap *)&(this->AppVersionString).Data.ArrayNum,
                       *(uint *)&(this->ViewportRHI).Reference,
                       *(uint *)((longlong)&(this->ViewportRHI).Reference + 4));
    return;
  }
  return;
}

// Invalidate @ 1489660f0

void __thiscall FViewport::Invalidate(FViewport *this)

{
  (**(code **)(this->_padding_ + 0x1b8))();
                    /* WARNING: Could not recover jumptable at 0x00014896610d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x1b0))(this);
  return;
}

// InvalidateHitProxy @ 148966140

void __thiscall FViewport::InvalidateHitProxy(FViewport *this)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  this->bHitProxiesCached = 0;
  DestructItems<TRefCountPtr<HHitProxy>,int>
            ((TRefCountPtr<HHitProxy> *)(this->HitProxyMap).HitProxies.AllocatorInstance.Data,
             (this->HitProxyMap).HitProxies.ArrayNum);
  piVar1 = &(this->HitProxyMap).HitProxies.ArrayMax;
  (this->HitProxyMap).HitProxies.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->HitProxyMap).HitProxies.AllocatorInstance,0,piVar1);
  }
  lVar3 = (**(code **)(this->_padding_ + 0x160))(this);
  if ((lVar3 != 0) && (puVar2 = *(undefined8 **)(lVar3 + 0x68), puVar2 != (undefined8 *)0x0)) {
    *(undefined8 *)(lVar3 + 0x68) = 0;
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}

// IsCursorVisible @ 148966aa0

bool __thiscall FViewport::IsCursorVisible(FViewport *this)

{
  return true;
}

// IsForegroundWindow @ 148966ab0

bool __thiscall FViewport::IsForegroundWindow(FViewport *this)

{
  return true;
}

// IsSoftwareCursorVisible @ 148967be0

bool __thiscall FViewport::IsSoftwareCursorVisible(FViewport *this)

{
  return false;
}

// IsStereoRenderingAllowed @ 148967bf0

bool __thiscall FViewport::IsStereoRenderingAllowed(FViewport *this)

{
  return false;
}

// LockMouseToViewport @ 148969240

void __thiscall FViewport::LockMouseToViewport(FViewport *this,bool param_1)

{
  return;
}

// ProcessToggleFreezeCommand @ 1489744d0

void __thiscall FViewport::ProcessToggleFreezeCommand(FViewport *this)

{
  this->bHasRequestedToggleFreeze = 1;
  return;
}

// ReleaseRHI @ 148977880

void __thiscall FViewport::ReleaseRHI(FViewport *this)

{
  FRHIResource *pFVar1;
  
  pFVar1 = (FRHIResource *)(this->HitProxyMap).HitProxies.AllocatorInstance.Data;
  if (pFVar1 != (FRHIResource *)0x0) {
    (this->HitProxyMap).HitProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = (FRHIResource *)(this->HitProxyMap)._padding_;
  if (pFVar1 != (FRHIResource *)0x0) {
    (this->HitProxyMap)._padding_ = 0;
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = *(FRHIResource **)&this[-1].ViewportType.Number;
  if (pFVar1 != (FRHIResource *)0x0) {
    *(undefined8 *)&this[-1].ViewportType.Number = 0;
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = (FRHIResource *)(this->CachedHitProxyData).AllocatorInstance.Data;
  if (pFVar1 != (FRHIResource *)0x0) {
    (this->CachedHitProxyData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FRHIResource::Release(pFVar1);
  }
  return;
}

// SetGameRenderingEnabled @ 14897f050

void __cdecl FViewport::SetGameRenderingEnabled(bool param_1,int param_2)

{
  bIsGameRenderingEnabled = param_1;
  PresentAndStopMovieDelay = param_2;
  return;
}

// SetInitialSize @ 14897f0f0

void __thiscall FViewport::SetInitialSize(FViewport *this,TIntPoint<int> param_1)

{
  int *piVar1;
  undefined1 local_res8 [8];
  TIntPoint<int>_u_0 local_res10;
  
  local_res10 = param_1.field0_0x0;
  piVar1 = (int *)(**(code **)(this->_padding_ + 0x28))(this,local_res8);
  if ((*piVar1 == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
     (piVar1[1] == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    (**(code **)(this->_padding_ + 0x1e8))
              (this,0,(ulonglong)param_1.field0_0x0 & 0xffffffff,local_res10._4_4_,2,0);
  }
  return;
}

// SetPreCaptureMousePosFromSlateCursor @ 14897f8a0

void __thiscall FViewport::SetPreCaptureMousePosFromSlateCursor(FViewport *this)

{
  return;
}

// SetRequiresVsync @ 14897fb30

void __thiscall FViewport::SetRequiresVsync(FViewport *this,bool param_1)

{
  return;
}

// SetSoftwareCursorPosition @ 14897fc10

void __thiscall FViewport::SetSoftwareCursorPosition(FViewport *this,TVector2<double> *param_1)

{
  return;
}

// SetViewportClient @ 14897ffe0

void __thiscall FViewport::SetViewportClient(FViewport *this,FViewportClient *param_1)

{
  this->ViewportClient = param_1;
  return;
}

// ShowCursor @ 1489807d0

void __thiscall FViewport::ShowCursor(FViewport *this,bool param_1)

{
  return;
}

// ShowSoftwareCursor @ 1489807e0

void __thiscall FViewport::ShowSoftwareCursor(FViewport *this,bool param_1)

{
  return;
}

// TakeHighResScreenShot @ 148983890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FViewport::TakeHighResScreenShot(FViewport *this)

{
  FHighResScreenshotConfig *pFVar1;
  FSlateNotificationManager *this_00;
  FText local_198;
  TSharedPtr<SNotificationItem,1> local_188;
  FNotificationInfo local_178;
  
  if ((GScreenshotResolutionX == 0) && (GScreenshotResolutionY == 0)) {
    pFVar1 = GetHighResScreenshotConfig();
    GScreenshotResolutionX = (uint)(longlong)((float)this->SizeX * pFVar1->ResolutionMultiplier);
    pFVar1 = GetHighResScreenshotConfig();
    GScreenshotResolutionY = (uint)(longlong)((float)this->SizeY * pFVar1->ResolutionMultiplier);
  }
  if ((GScreenshotResolutionX <= (uint)GRHIGlobals.MaxTextureDimensions.Value) &&
     (GScreenshotResolutionY <= (uint)GRHIGlobals.MaxTextureDimensions.Value)) {
    this->bTakeHighResScreenShot = true;
    (**(code **)(this->_padding_ + 0x1b8))(this);
    (**(code **)(this->_padding_ + 0x1b0))(this);
    return true;
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_198,L"UnrealClient",L"HighResScreenshotTooBig",
             L"The high resolution screenshot multiplier is too large for your system. Please try again with a smaller value!"
            );
  FNotificationInfo::FNotificationInfo(&local_178,&local_198);
  local_178.bFireAndForget = true;
  local_178.ExpireDuration = 5.0;
  local_178.bUseSuccessFailIcons = false;
  local_178.bUseLargeFont = false;
  this_00 = FSlateNotificationManager::Get();
  FSlateNotificationManager::AddNotification(this_00,&local_188,&local_178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  if (2 < (byte)LogClient._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClient);
  }
  GIsHighResScreenshot = false;
  FNotificationInfo::~FNotificationInfo(&local_178);
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
  }
  return false;
}

// UpdateRenderTargetSurfaceRHIToCurrentBackBuffer @ 148989960

void __thiscall FViewport::UpdateRenderTargetSurfaceRHIToCurrentBackBuffer(FViewport *this)

{
  longlong *plVar1;
  FRHIResource *this_00;
  FRHIResource *local_18 [2];
  
  if ((this->ViewportRHI).Reference != (FRHIViewport *)0x0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x298))(GDynamicRHI,local_18);
    plVar1 = &this->_padding_;
    if ((FRHIResource **)plVar1 != local_18) {
      this_00 = (FRHIResource *)*plVar1;
      *plVar1 = (longlong)local_18[0];
      local_18[0] = (FRHIResource *)0x0;
      if (this_00 == (FRHIResource *)0x0) {
        return;
      }
      FRHIResource::Release(this_00);
    }
    if (local_18[0] != (FRHIResource *)0x0) {
      FRHIResource::Release(local_18[0]);
    }
  }
  return;
}

// UpdateViewportRHI @ 14898a730

void __thiscall
FViewport::UpdateViewportRHI
          (FViewport *this,bool param_1,uint param_2,uint param_3,Type param_4,EPixelFormat param_5)

{
  TRefCountPtr<FRHIViewport> *pTVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  FRHIViewport *pFVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  FRenderResource *pFVar14;
  FMemScope local_res8;
  FLLMScope local_res10 [2];
  undefined8 in_stack_ffffffffffffff78;
  undefined7 uVar15;
  undefined8 in_stack_ffffffffffffff80;
  undefined7 uVar16;
  TRefCountPtr<FRHIViewport> local_68;
  FMemScope local_60;
  FDestructionSentinel local_58;
  
  FlushRenderingCommands();
  this->SizeX = param_2;
  this->SizeY = param_3;
  this->WindowMode = param_4;
  pFVar14 = (FRenderResource *)&this->_padding_;
  if (this == (FViewport *)0x0) {
    pFVar14 = (FRenderResource *)0x0;
  }
  BeginReleaseResource(pFVar14,(FRenderCommandPipe *)0x0);
  pTVar1 = &this->ViewportRHI;
  pFVar2 = (FRHIResource *)pTVar1->Reference;
  if (param_1) {
    if (pFVar2 == (FRHIResource *)0x0) {
      return;
    }
    pTVar1->Reference = (FRHIViewport *)0x0;
    FRHIResource::Release(pFVar2);
    return;
  }
  pcVar3 = *(code **)(this->_padding_ + 0x130);
  if (pFVar2 == (FRHIResource *)0x0) {
    uVar7 = (*pcVar3)(this);
    uVar12 = this->SizeY;
    uVar10 = this->SizeX;
    uVar11 = (**(code **)(this->_padding_ + 0x80))(this);
    uVar15 = (undefined7)((ulonglong)in_stack_ffffffffffffff80 >> 8);
    FLLMScope::FLLMScope((FLLMScope *)&param_4,RenderTargets,false,None,Default,true);
    FMemScope::FMemScope(&local_60,RenderTargets,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x308))
              (GDynamicRHI,&local_68,uVar11,uVar10,uVar12,CONCAT71(uVar15,uVar7),0);
    FMemScope::~FMemScope(&local_60);
    FLLMScope::~FLLMScope((FLLMScope *)&param_4);
    if (pTVar1 != &local_68) {
      pFVar2 = (FRHIResource *)pTVar1->Reference;
      pTVar1->Reference = local_68.Reference;
      local_68.Reference = (FRHIViewport *)0x0;
      if (pFVar2 == (FRHIResource *)0x0) goto LAB_14898a92f;
      FRHIResource::Release(pFVar2);
    }
    if ((FRHIResource *)local_68.Reference != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_68.Reference);
    }
  }
  else {
    uVar7 = (*pcVar3)();
    uVar12 = this->SizeY;
    uVar10 = this->SizeX;
    pFVar4 = pTVar1->Reference;
    uVar16 = (undefined7)((ulonglong)in_stack_ffffffffffffff80 >> 8);
    uVar15 = (undefined7)((ulonglong)in_stack_ffffffffffffff78 >> 8);
    FLLMScope::FLLMScope(local_res10,RenderTargets,false,None,Default,true);
    FMemScope::FMemScope(&local_res8,RenderTargets,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x310))
              (GDynamicRHI,pFVar4,uVar10,uVar12,CONCAT71(uVar15,uVar7),CONCAT71(uVar16,param_5));
    FMemScope::~FMemScope(&local_res8);
    FLLMScope::~FLLMScope(local_res10);
  }
LAB_14898a92f:
  BeginInitResource(pFVar14,(FRenderCommandPipe *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&ViewportResizedEvent,
             (FWriteAccessScope *)&local_58);
  bVar6 = false;
  ViewportResizedEvent._28_4_ = ViewportResizedEvent._28_4_ + 1;
  uVar12 = ViewportResizedEvent._16_4_ - 1;
  if (-1 < (int)uVar12) {
    lVar13 = (longlong)(int)uVar12 << 4;
    bVar6 = false;
    do {
      uVar10 = 0;
      if ((int)uVar12 < (int)ViewportResizedEvent._16_4_) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(int *)(lVar13 + 8 + ViewportResizedEvent._8_8_) == 0) ||
          (plVar5 = *(longlong **)(lVar13 + ViewportResizedEvent._8_8_), plVar5 == (longlong *)0x0))
         || (cVar9 = (**(code **)(*plVar5 + 0x68))(plVar5,this,0), cVar9 == '\0')) {
        bVar6 = true;
      }
      lVar13 = lVar13 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  ViewportResizedEvent._28_4_ = ViewportResizedEvent._28_4_ + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&ViewportResizedEvent,false);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  return;
}

