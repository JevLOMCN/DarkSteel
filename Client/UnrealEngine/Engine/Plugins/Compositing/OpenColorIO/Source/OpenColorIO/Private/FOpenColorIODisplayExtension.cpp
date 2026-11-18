// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 9

// FOpenColorIODisplayExtension @ 14d768d30

/* WARNING: Type propagation algorithm not settling */

FOpenColorIODisplayExtension * __thiscall
FOpenColorIODisplayExtension::FOpenColorIODisplayExtension
          (FOpenColorIODisplayExtension *this,FAutoRegister *param_1,FViewportClient *param_2)

{
  FOpenColorIOColorConversionSettings *pFVar1;
  
  FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__FSceneViewExtensionBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  (this->CachedResourcesRenderThread).ShaderResource = (FOpenColorIOTransformResource *)0x0;
  (this->CachedResourcesRenderThread).TextureResources.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedResourcesRenderThread).TextureResources.ArrayNum = 0;
  (this->CachedResourcesRenderThread).TextureResources.ArrayMax = 0;
  (this->CachedResourcesRenderThread).TransformName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedResourcesRenderThread).TransformName.Data.ArrayNum = 0;
  (this->CachedResourcesRenderThread).TransformName.Data.ArrayMax = 0;
  (this->DisplayConfiguration).bIsEnabled = false;
  (this->DisplayConfiguration).ColorConfiguration.ConfigurationSource.field0_0x0.DebugPtr =
       (UOpenColorIOConfiguration *)0x0;
  (this->DisplayConfiguration).ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &(this->DisplayConfiguration).ColorConfiguration;
  (pFVar1->SourceColorSpace).ColorSpaceName.Data.ArrayNum = 0;
  (pFVar1->SourceColorSpace).ColorSpaceName.Data.ArrayMax = 0;
  (this->DisplayConfiguration).ColorConfiguration.SourceColorSpace.FamilyName.Data.AllocatorInstance
  .Data = (FScriptContainerElement *)0x0;
  pFVar1 = &(this->DisplayConfiguration).ColorConfiguration;
  (pFVar1->SourceColorSpace).FamilyName.Data.ArrayNum = 0;
  (pFVar1->SourceColorSpace).FamilyName.Data.ArrayMax = 0;
  (this->DisplayConfiguration).ColorConfiguration.SourceColorSpace.Description.Data.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &(this->DisplayConfiguration).ColorConfiguration;
  (pFVar1->SourceColorSpace).Description.Data.ArrayNum = 0;
  (pFVar1->SourceColorSpace).Description.Data.ArrayMax = 0;
  (this->DisplayConfiguration).ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &(this->DisplayConfiguration).ColorConfiguration;
  (pFVar1->DestinationColorSpace).ColorSpaceName.Data.ArrayNum = 0;
  (pFVar1->DestinationColorSpace).ColorSpaceName.Data.ArrayMax = 0;
  (this->DisplayConfiguration).ColorConfiguration.DestinationColorSpace.FamilyName.Data.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &(this->DisplayConfiguration).ColorConfiguration;
  (pFVar1->DestinationColorSpace).FamilyName.Data.ArrayNum = 0;
  (pFVar1->DestinationColorSpace).FamilyName.Data.ArrayMax = 0;
  (this->DisplayConfiguration).ColorConfiguration.DestinationColorSpace.Description.Data.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &(this->DisplayConfiguration).ColorConfiguration;
  (pFVar1->DestinationColorSpace).Description.Data.ArrayNum = 0;
  (pFVar1->DestinationColorSpace).Description.Data.ArrayMax = 0;
  (this->DisplayConfiguration).ColorConfiguration.DestinationDisplayView.Display.Data.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &(this->DisplayConfiguration).ColorConfiguration;
  (pFVar1->DestinationDisplayView).Display.Data.ArrayNum = 0;
  (pFVar1->DestinationDisplayView).Display.Data.ArrayMax = 0;
  (this->DisplayConfiguration).ColorConfiguration.DestinationDisplayView.View.Data.AllocatorInstance
  .Data = (FScriptContainerElement *)0x0;
  pFVar1 = &(this->DisplayConfiguration).ColorConfiguration;
  (pFVar1->DestinationDisplayView).View.Data.ArrayNum = 0;
  (pFVar1->DestinationDisplayView).View.Data.ArrayMax = 0;
  (this->DisplayConfiguration).ColorConfiguration.DestinationDisplayView.Description.Data.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &(this->DisplayConfiguration).ColorConfiguration;
  (pFVar1->DestinationDisplayView).Description.Data.ArrayNum = 0;
  (pFVar1->DestinationDisplayView).Description.Data.ArrayMax = 0;
  (this->DisplayConfiguration).ColorConfiguration.DisplayViewDirection = Forward;
  this->LinkedViewportClient = param_2;
  return this;
}

// operator() @ 14d76a8c0

void __thiscall
`FOpenColorIODisplayExtension::SetupView'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined8 uVar3;
  FScriptContainerElement *_Src;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  pTVar7 = *(TReferenceControllerBase<1> **)this;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      pTVar5 = pTVar6;
      aVar2 = aVar4;
    } while (!bVar8);
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
    }
    pTVar6 = pTVar5;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      uVar3 = *(undefined8 *)((longlong)this + 0x10);
      pTVar5 = pTVar7 + 4;
      pTVar7[3].SharedReferenceCount = (atomic<int>)(int)uVar3;
      pTVar7[3].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
      if (pTVar5 != (TReferenceControllerBase<1> *)((longlong)this + 0x18)) {
        _Src = (FScriptContainerElement *)
               ((TReferenceControllerBase<1> *)((longlong)this + 0x18))->_padding_;
        aVar2 = *(atomic<int> *)((longlong)this + 0x20);
        pTVar7[4].SharedReferenceCount = aVar2;
        if ((aVar2 == (atomic<int>)0x0) && (pTVar7[4].WeakReferenceCount == (atomic<int>)0x0)) {
          pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,(int)aVar2,(int)pTVar7[4].WeakReferenceCount,(ForAnyElementType *)pTVar5,
                     (int)aVar2,(int *)&pTVar7[4].WeakReferenceCount);
          if (aVar2 != (atomic<int>)0x0) {
            memcpy((FScriptContainerElement *)pTVar5->_padding_,_Src,(longlong)(int)aVar2 << 3);
          }
        }
      }
      ::FString::operator=((FString *)(pTVar7 + 5),(FString *)((longlong)this + 0x28));
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// AddReferencedObjects @ 14d76c5a0

void __thiscall
FOpenColorIODisplayExtension::AddReferencedObjects
          (FOpenColorIODisplayExtension *this,FReferenceCollector *param_1)

{
  if ((this->CachedResourcesRenderThread).TextureResources.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d76c5ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x88))
              (param_1,&(this->CachedResourcesRenderThread).TextureResources,0,0);
    return;
  }
  return;
}

// GetPriority @ 14d771630

int __thiscall FOpenColorIODisplayExtension::GetPriority(FOpenColorIODisplayExtension *this)

{
  return 100;
}

// GetReferencerName @ 14d7719d0

FString * __thiscall
FOpenColorIODisplayExtension::GetReferencerName
          (FOpenColorIODisplayExtension *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FOpenColorIODisplayExtension");
  return __return_storage_ptr__;
}

// IsActiveThisFrame_Internal @ 14d773430

bool __thiscall
FOpenColorIODisplayExtension::IsActiveThisFrame_Internal
          (FOpenColorIODisplayExtension *this,FSceneViewExtensionContext *param_1)

{
  if ((param_1->Viewport != (FViewport *)0x0) &&
     (this->LinkedViewportClient == param_1->Viewport->ViewportClient)) {
    return (this->DisplayConfiguration).bIsEnabled;
  }
  return false;
}

// PostProcessPassAfterTonemap_RenderThread @ 14d774300

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FScreenPassTexture * __thiscall
FOpenColorIODisplayExtension::PostProcessPassAfterTonemap_RenderThread
          (FOpenColorIODisplayExtension *this,FScreenPassTexture *__return_storage_ptr__,
          FRDGBuilder *param_1,FSceneView *param_2,FPostProcessMaterialInputs *param_3)

{
  FEngineShowFlags *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScreenPassTexture *pFVar4;
  FScreenPassRenderTarget *pFVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  FScreenPassTexture local_f8;
  FScreenPassRenderTarget local_e0;
  Type local_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  FScreenPassTextureSlice local_a8;
  FScreenPassViewInfo local_88;
  FScreenPassTexture local_78;
  FScreenPassTexture local_60;
  FScreenPassRenderTarget local_48;
  
  local_78.Texture = (FRDGTexture *)0x0;
  lVar6 = 0x98;
  if ((param_3->bUserSceneTexturesSet).Elements[0] == false) {
    lVar6 = 0x20;
  }
  local_78.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_78.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_a8.TextureSRV = *(FRDGTextureSRV **)((longlong)(param_3->Textures).Elements + lVar6 + -0x20)
  ;
  local_a8.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)((longlong)((param_3->Textures).Elements + -1) + lVar6);
  local_a8.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)((longlong)(param_3->Textures).Elements + lVar6 + -0x10);
  FScreenPassTexture::CopyFromSlice(&local_f8,param_1,&local_a8,&local_78);
  if ((local_f8.Texture == (FRDGTexture *)0x0) ||
     ((local_f8.ViewRect.field0_0x0._8_4_ == local_f8.ViewRect.field0_0x0._0_4_ &&
      (local_f8.ViewRect.field0_0x0._12_4_ == local_f8.ViewRect.field0_0x0._4_4_)))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneColor.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIODisplayExtension.cpp"
                       ,0x50,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FScreenPassTexture *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_e0._padding_ = (param_3->OverrideOutput)._padding_;
  local_e0._padding_ = (param_3->OverrideOutput)._padding_;
  local_e0._padding_ = (param_3->OverrideOutput)._padding_;
  local_e0.LoadAction = (param_3->OverrideOutput).LoadAction;
  if (((FRDGTexture *)local_e0._padding_ == (FRDGTexture *)0x0) ||
     (((int)local_e0._padding_ == (int)local_e0._padding_ &&
      (SUB84(local_e0._padding_,4) == (int)((ulonglong)local_e0._padding_ >> 0x20))))) {
    local_60.Texture = local_f8.Texture;
    pFVar5 = FScreenPassRenderTarget::CreateFromInput
                       (&local_48,param_1,&local_60,
                        -(param_2->bHMDHiddenAreaMaskActive != false) & EClear,L"OCIORenderTarget");
    local_e0._padding_ = pFVar5->_padding_;
    local_e0._padding_ = pFVar5->_padding_;
    local_e0._padding_ = pFVar5->_padding_;
    local_e0.LoadAction = pFVar5->LoadAction;
  }
  fVar7 = (float)(**(code **)(param_2->Family->RenderTarget->_padding_ + 0x30))();
  fVar8 = UTextureRenderTarget::GetDefaultDisplayGamma();
  if (pFVar1->PostProcessing == 1 && pFVar1->Tonemapper == 1) {
    fVar8 = fVar8 / fVar7;
  }
  iStack_b4 = param_2->StereoViewIndex;
  local_b8 = param_2->FeatureLevel;
  uStack_b0 = param_2->InstanceFactor;
  uStack_ac = CONCAT31(uStack_ac._1_3_,param_2->bHMDHiddenAreaMaskActive);
  local_88.StereoViewIndex = iStack_b4;
  local_88.FeatureLevel = local_b8;
  local_88._12_4_ = uStack_ac;
  local_88.InstanceCount = uStack_b0;
  FOpenColorIORendering::AddPass_RenderThread
            (param_1,&local_88,local_b8,&local_f8,&local_e0,&this->CachedResourcesRenderThread,fVar8
             ,None);
  __return_storage_ptr__->Texture = (FRDGTexture *)local_e0._padding_;
  *(longlong *)&(__return_storage_ptr__->ViewRect).field0_0x0 = local_e0._padding_;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ViewRect).field0_0x0 + 8) =
       (undefined4)local_e0._padding_;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ViewRect).field0_0x0 + 0xc) =
       local_e0._padding_._4_4_;
  return __return_storage_ptr__;
}

// SetupView @ 14d777470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FOpenColorIODisplayExtension::SetupView
          (FOpenColorIODisplayExtension *this,FSceneViewFamily *param_1,FSceneView *param_2)

{
  FOpenColorIOColorConversionSettings *this_00;
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  UOpenColorIOConfiguration *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  UOpenColorIOColorTransform *this_01;
  FOpenColorIOShaderMap *this_02;
  atomic<int> aVar6;
  FOpenColorIOTransformResource *pFVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  Type TVar10;
  atomic<int> aVar11;
  code *pcVar12;
  FRenderCommandList *this_03;
  FCommandList *this_04;
  FRenderCommandTag *pFVar13;
  code **ppcVar14;
  FScriptContainerElement *pFVar15;
  code *pcVar16;
  ulonglong uVar17;
  undefined1 auStack_138 [32];
  FOpenColorIOTransformResource *local_118;
  TArray<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_110;
  FString local_100;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  FOpenColorIOColorConversionSettings *local_e0;
  FScriptContainerElement *local_d8;
  TShaderRefBase<FOpenColorIOPixelShader,FShaderMapPointerTable> local_d0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  TVar10 = FSceneViewFamily::GetFeatureLevel(param_1);
  this_00 = &(this->DisplayConfiguration).ColorConfiguration;
  TStack_110.ArrayNum = 0;
  TStack_110.ArrayMax = 0;
  local_118 = (FOpenColorIOTransformResource *)0x0;
  TStack_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FOpenColorIOColorConversionSettings::ToString(this_00,&local_100);
  pUVar3 = (this_00->ConfigurationSource).field0_0x0.DebugPtr;
  if (pUVar3 != (UOpenColorIOConfiguration *)0x0) {
    pFVar15 = (pUVar3->ColorTransforms).AllocatorInstance.Data;
    pFVar2 = pFVar15 + (longlong)(pUVar3->ColorTransforms).ArrayNum * 8;
    local_e0 = this_00;
    for (; pFVar15 != pFVar2; pFVar15 = pFVar15 + 8) {
      bVar9 = `UOpenColorIOConfiguration::FindTransform'::__l2::<lambda_1>::operator()
                        (&local_e0,*(UOpenColorIOColorTransform **)pFVar15);
      if (bVar9) {
        this_01 = *(UOpenColorIOColorTransform **)pFVar15;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (this_01 == (UOpenColorIOColorTransform *)0x0) break;
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        if (this_01 != (UOpenColorIOColorTransform *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          if ((((uint)this_01->_padding_ >> 0x1e & 1) == 0) &&
             (bVar9 = UOpenColorIOColorTransform::GetRenderResources
                                (this_01,TVar10,&local_118,&TStack_110), bVar9)) {
            if ((local_118 == (FOpenColorIOTransformResource *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result.ShaderResource",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIORendering.cpp"
                                   ,200,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            this_02 = (local_118->GameThreadShaderMap).Reference;
            if (this_02 == (FOpenColorIOShaderMap *)0x0) {
              local_d0.ShaderContent = (FOpenColorIOPixelShader *)0x0;
              local_d0.ShaderMap = (FShaderMapBase *)0x0;
              local_118 = (FOpenColorIOTransformResource *)0x0;
            }
            else {
              FOpenColorIOShaderMap::GetShader<FOpenColorIOPixelShader>(this_02,&local_d0);
              if (local_d0.ShaderContent == (FOpenColorIOPixelShader *)0x0) {
                local_118 = (FOpenColorIOTransformResource *)0x0;
              }
            }
          }
        }
        break;
      }
    }
  }
  FVar8.Data = TStack_110.AllocatorInstance.Data;
  pFVar7 = local_118;
  local_f0 = TStack_110.ArrayNum;
  local_ec = TStack_110.ArrayMax;
  local_d8 = local_100.Data.AllocatorInstance.Data;
  local_e8 = local_100.Data.ArrayNum;
  local_e4 = local_100.Data.ArrayMax;
  local_100.Data.ArrayNum = 0;
  local_100.Data.ArrayMax = 0;
  TStack_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_110.ArrayNum = 0;
  TStack_110.ArrayMax = 0;
  local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_118 != (FOpenColorIOTransformResource *)0x0) {
    (param_1->EngineShowFlags).ToneCurve = 0;
    param_1->SceneCaptureSource = SCS_FinalColorHDR;
    puVar1 = &(param_2->FinalPostProcessSettings).field_0x3;
    *puVar1 = *puVar1 | 0x10;
    *(undefined4 *)&(param_2->FinalPostProcessSettings).field_0x2d4 = 0;
  }
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  pcVar5 = (code *)this->_padding_;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    aVar6 = pTVar4->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14d7776d8;
      }
      LOCK();
      aVar11 = pTVar4->SharedReferenceCount;
      bVar9 = aVar6 == aVar11;
      if (bVar9) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar11 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar11;
    } while (!bVar9);
  }
  pcVar16 = pcVar5;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pcVar16 = (code *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pcVar12 = pcVar16 + 8;
  if (pcVar16 == (code *)0x0) {
    pcVar12 = (code *)0x0;
  }
  if (pcVar12 != (code *)&this->_padding_) {
LAB_14d7776d8:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.Pin().Get() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x6c3,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0x40,8);
  local_90[1] = pcVar5;
  local_90[2] = (code *)pTVar4;
  *local_90 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FOpenColorIODisplayExtension::SetupView'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_90[3] = (code *)pFVar7;
  local_90[4] = (code *)FVar8.Data;
  *(int *)(local_90 + 5) = local_f0;
  *(int *)((longlong)local_90 + 0x2c) = local_ec;
  local_90[6] = (code *)local_d8;
  *(int *)(local_90 + 7) = local_e8;
  *(int *)((longlong)local_90 + 0x3c) = local_e4;
  if (local_90 != (code **)&DAT_fffffffffffffff8) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FOpenColorIODisplayExtension::SetupView'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_03 = FRenderCommandList::GetInstanceTLS();
  if (this_03 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FOpenColorIODisplayExtension::SetupView_::__l2::TSTR_ProcessColorSpaceTransform56>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_04 = FRenderCommandList::GetRenderThread(this_03);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_90 = (code **)0x0;
    local_88._16_8_ = local_a8[0];
    local_88._24_8_ = local_a8[1];
    local_88._32_8_ = local_a8[2];
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar13 = (FRenderCommandTag *)
              TRenderCommandTag<`FOpenColorIODisplayExtension::SetupView'::__l2::TSTR_ProcessColorSpaceTransform56>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_04,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar13);
    uVar17 = (ulonglong)local_58;
    if ((2 < uVar17) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        ppcVar14 = (code **)(local_88 + 0x10);
        if (local_60 != (code **)0x0) {
          ppcVar14 = local_60;
        }
        (**(code **)(*ppcVar14 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar14 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar14 = local_90;
    }
    (**(code **)(*ppcVar14 + 0x10))();
  }
  return;
}

// SubscribeToPostProcessingPass @ 14d778530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOpenColorIODisplayExtension::SubscribeToPostProcessingPass
          (FOpenColorIODisplayExtension *this,EPostProcessingPass param_1,FSceneView *param_2,
          TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_3,bool param_4)

{
  TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_1 == Tonemap) {
    local_78 = PostProcessPassAfterTonemap_RenderThread;
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_50;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFOpenColorIODisplayExtension____A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar5[3] = this;
      puVar5[4] = local_78;
      puVar5[5] = CONCAT44(uStack_6c,uStack_70);
      if ((this == (FOpenColorIODisplayExtension *)0x0) || (puVar5[4] == 0)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    pTVar1 = (param_3->AllocatorInstance).Data;
    if ((pTVar1 <= (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
                    *)local_58) &&
       ((TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
         *)local_58 < pTVar1 + param_3->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = param_3->ArrayNum;
    if (iVar4 == param_3->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>_>_>
                        (0x818,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar4 + 1;
    pTVar1 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pTVar1 + iVar4) = 0;
    *(undefined8 *)&pTVar1[iVar4].field_0x8 = 0;
    *(undefined4 *)&pTVar1[iVar4].field_0x10 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
    if (*(void **)&pTVar1[iVar4].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar1[iVar4].field_0x8);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar1[iVar4].field_0x8 = local_50.DelegateAllocator;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)&pTVar1[iVar4].field_0x10 = local_50.DelegateSize;
    local_50.DelegateSize = 0;
    if (local_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
                 (FDestructionSentinel *)&local_78);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

