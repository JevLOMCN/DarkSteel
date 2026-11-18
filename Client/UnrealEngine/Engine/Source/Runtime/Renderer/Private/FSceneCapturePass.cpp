// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FSceneCapturePass @ 145477a30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSceneCapturePass * __thiscall
FSceneCapturePass::FSceneCapturePass
          (FSceneCapturePass *this,FString *param_1,ERenderMode param_2,ERenderOutput param_3,
          UTextureRenderTarget2D *param_4,USceneCaptureComponent2D *param_5,TIntPoint<int> param_6)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  USceneCaptureComponent2D *this_00;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  FTextureRenderTargetResource *pFVar7;
  USceneCaptureComponent2D *pUVar8;
  int iVar9;
  USceneCaptureComponent2D *pUVar10;
  
  this_00 = param_5;
  FCustomRenderPassBase::FCustomRenderPassBase
            ((FCustomRenderPassBase *)this,param_1,param_2,param_3,&param_6);
  this->_padding_ = (longlong)&___7FSceneCapturePass__6B_;
  pFVar7 = UTextureRenderTarget::GameThread_GetRenderTargetResource((UTextureRenderTarget *)param_4)
  ;
  pUVar10 = (USceneCaptureComponent2D *)0x0;
  pUVar8 = (USceneCaptureComponent2D *)&pFVar7->_padding_;
  if (pFVar7 == (FTextureRenderTargetResource *)0x0) {
    pUVar8 = pUVar10;
  }
  this->SceneCaptureRenderTarget = (FRenderTarget *)pUVar8;
  this->bAutoGenerateMips = param_4->bAutoGenerateMips;
  pUVar8 = ::operator_new(0x40);
  if (pUVar8 != (USceneCaptureComponent2D *)0x0) {
    *(undefined4 *)&pUVar8->field_0x2c = 0;
    *(undefined ***)pUVar8 = &___7FSceneCaptureCustomRenderPassUserData__6B_;
    *(undefined4 *)&((TRefCountPtr<FRHITexture> *)&pUVar8->field_0x8)->Reference = 0;
    *(undefined4 *)&pUVar8->field_0xc = 1;
    *(longlong *)&pUVar8->field_0x10 = 1;
    *(longlong *)&pUVar8->field_0x18 = 0;
    *(longlong *)&pUVar8->field_0x20 = 0;
    *(undefined4 *)&pUVar8->field_0x28 = 0;
    *(longlong *)&pUVar8->field_0x30 = 0;
    *(undefined8 *)&((FRHIGPUMask *)&pUVar8->field_0x38)->GPUMask = 0;
    pUVar10 = pUVar8;
  }
  if ((this_00->bMainViewFamily == 0) &&
     (this_00->bMainViewResolution == 0 && this_00->bMainViewCamera == 0)) {
    if (this_00->bRenderInMainRenderer != false) {
      bVar2 = this_00->field_0x251;
      if (((bVar2 == 4) || ((bVar2 < 8 && ((0xebU >> (bVar2 & 0x1f) & 1) != 0)))) &&
         ((this_00->UserSceneTextureBaseColor != (FName)0x0 ||
          ((this_00->UserSceneTextureNormal != (FName)0x0 ||
           (this_00->UserSceneTextureSceneColor != (FName)0x0)))))) goto LAB_145477b2f;
    }
    uVar4 = 0;
  }
  else {
LAB_145477b2f:
    uVar4 = 1;
  }
  *(undefined1 *)&((TRefCountPtr<FRHITexture> *)&pUVar10->field_0x8)->Reference = uVar4;
  if ((this_00->bMainViewResolution == 0 && this_00->bMainViewCamera == 0) &&
     (((this_00->bRenderInMainRenderer == false ||
       ((bVar2 = this_00->field_0x251, bVar2 != 4 &&
        ((7 < bVar2 || ((0xebU >> (bVar2 & 0x1f) & 1) == 0)))))) ||
      ((this_00->UserSceneTextureBaseColor == (FName)0x0 &&
       ((this_00->UserSceneTextureNormal == (FName)0x0 &&
        (this_00->UserSceneTextureSceneColor == (FName)0x0)))))))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  pUVar10->field_0x9 = uVar4;
  pUVar10->field_0xa = this_00->bMainViewCamera;
  bVar5 = USceneCaptureComponent2D::ShouldIgnoreScreenPercentage(this_00);
  pUVar10->field_0xb = bVar5;
  iVar6 = (this_00->MainViewResolutionDivisor).field0_0x0._s_0.X;
  iVar3 = (this_00->MainViewResolutionDivisor).field0_0x0._s_0.Y;
  iVar9 = 1;
  if (1 < iVar6) {
    iVar9 = iVar6;
  }
  iVar6 = 1;
  if (1 < iVar3) {
    iVar6 = iVar3;
  }
  param_5 = (USceneCaptureComponent2D *)CONCAT44(iVar6,iVar9);
  *(USceneCaptureComponent2D **)&pUVar10->field_0xc = param_5;
  *(FName *)&pUVar10->field_0x14 = this_00->UserSceneTextureBaseColor;
  *(FName *)&pUVar10->field_0x1c = this_00->UserSceneTextureNormal;
  *(FName *)&pUVar10->field_0x24 = this_00->UserSceneTextureSceneColor;
  param_5 = *(USceneCaptureComponent2D **)(*(longlong *)&this_00->field_0x20 + 0x18);
  ::FName::ToString((FName *)&param_5,(FString *)&pUVar10->field_0x30);
  *(byte *)((longlong)&this->_padding_ + 2) =
       (byte)((uint)*(undefined4 *)&this_00->field_0x2e0 >> 0x1d) & 1;
  *(bool *)((longlong)&this->_padding_ + 3) = this_00->UserSceneTextureSceneColor != (FName)0x0;
  param_5 = pUVar10;
  FCustomRenderPassBase::SetUserData
            ((FCustomRenderPassBase *)this,
             (TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_> *)
             &param_5);
  if (param_5 != (USceneCaptureComponent2D *)0x0) {
    (*(code *)**(undefined8 **)param_5)(param_5,1);
  }
  return this;
}

// GetTypeName @ 1454aaa00

FName * __thiscall FSceneCapturePass::GetTypeName(FSceneCapturePass *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_FSceneCapturePass::GetTypeNameStatic(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_FSceneCapturePass::GetTypeNameStatic(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_FSceneCapturePass::GetTypeNameStatic(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_FSceneCapturePass::GetTypeNameStatic(void)'
                      ::__l2::Name,L"FSceneCapturePass");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_FSceneCapturePass::GetTypeNameStatic(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FName_const&___ptr64___cdecl_FSceneCapturePass::GetTypeNameStatic(void)'
              ::__l2::Name;
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_FSceneCapturePass::GetTypeNameStatic(void)'
          ::__l2::Name;
}

// OnEndPass @ 1454ad420

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FSceneCapturePass::OnEndPass(FSceneCapturePass *this,FRDGBuilder *param_1)

{
  FRDGBuilder::UseExternalAccessMode
            (param_1,(FRDGViewableResource *)this->_padding_,SRVMask,Graphics);
  return;
}

// OnPreRender @ 1454ad460

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FSceneCapturePass::OnPreRender(FSceneCapturePass *this,FRDGBuilder *param_1)

{
  uint uVar1;
  uint uVar2;
  FRHICommandListBase *pFVar3;
  int iVar4;
  longlong lVar5;
  FRenderResource *this_00;
  uint uVar6;
  int iVar7;
  
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  uVar2 = (uint)this->_padding_;
  this_00 = (FRenderResource *)(this->SceneCaptureRenderTarget + -6);
  if (this->SceneCaptureRenderTarget == (FRenderTarget *)0x0) {
    this_00 = (FRenderResource *)0x0;
  }
  pFVar3 = (FRHICommandListBase *)param_1->_padding_;
  if (this->bAutoGenerateMips == false) {
    uVar6 = 1;
  }
  else {
    uVar6 = uVar1;
    if ((int)uVar1 < (int)uVar2) {
      uVar6 = uVar2;
    }
    iVar4 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    iVar7 = 0;
    if (uVar6 != 0) {
      iVar7 = iVar4;
    }
    uVar6 = iVar7 + 1;
  }
  if (((this_00[6].OwnerName.Number != uVar2) ||
      (this_00[6].ResourceName.ComparisonIndex.Value != uVar1)) ||
     (this_00[6].ResourceName.Number != uVar6)) {
    this_00[6].OwnerName.Number = uVar2;
    this_00[6].ResourceName.ComparisonIndex.Value = uVar1;
    this_00[6].ResourceName.Number = uVar6;
    FRenderResource::UpdateRHI(this_00,pFVar3);
  }
  lVar5 = (**(code **)(this->SceneCaptureRenderTarget->_padding_ + 8))
                    (this->SceneCaptureRenderTarget,param_1);
  this->_padding_ = lVar5;
  return;
}

