// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 11

// operator() @ 14cfd1850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`FAppleARKitXRCamera::PostRenderBasePassDeferred_RenderThread'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  
  lVar1 = *(longlong *)this;
  fVar5 = (float)(**(code **)(*(longlong *)(*(longlong *)(lVar1 + 0x238) + 0x70) + 0x98))();
  lVar2 = *(longlong *)(*(longlong *)this + 0x238);
  if (*(longlong *)(lVar2 + 0x310) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FAppleARKitVideoOverlay::RenderVideoOverlay_RenderThread
            ((FAppleARKitVideoOverlay *)(lVar1 + 0x240),(FRHICommandList *)param_1,
             *(FSceneView **)((longlong)this + 8),*(FAppleARKitFrame **)(lVar2 + 0x310),fVar5);
  return;
}

// BeginRenderViewFamily @ 14cfd2ea0

void __thiscall
FAppleARKitXRCamera::BeginRenderViewFamily(FAppleARKitXRCamera *this,FSceneViewFamily *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultXRCamera.cpp"
                       ,0xe4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014cf837d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x198))((longlong *)this->_padding_,param_1);
  return;
}

// GetPassthroughCameraUVs_RenderThread @ 14cfd6fe0

bool __thiscall
FAppleARKitXRCamera::GetPassthroughCameraUVs_RenderThread
          (FAppleARKitXRCamera *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  EDeviceScreenOrientation EVar1;
  bool bVar2;
  TVector2<double> *pTVar3;
  
  EVar1 = this->ARKitSystem->DeviceOrientation;
  if ((EVar1 == LandscapeLeft) || (EVar1 == LandscapeRight)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  pTVar3 = (this->VideoOverlay).UVOffsets;
  if (!bVar2) {
    pTVar3 = (this->VideoOverlay).UVOffsets + 1;
  }
  UARUtilitiesFunctionLibrary::GetPassthroughCameraUVs(param_1,pTVar3);
  return true;
}

// IsActiveThisFrame_Internal @ 14cfd9ae0

bool __thiscall
FAppleARKitXRCamera::IsActiveThisFrame_Internal
          (FAppleARKitXRCamera *this,FSceneViewExtensionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  UARSessionConfig *this_00;
  longlong *plVar5;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  void *local_28 [4];
  
  FDefaultXRCamera::IsActiveThisFrame_Internal((FDefaultXRCamera *)this,param_1);
  lVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x38))((longlong *)this->_padding_,local_28);
  if (*(char *)(lVar4 + 0x10) == '\x01') {
    plVar5 = (longlong *)(this->_padding_ + 0x70);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x138))(plVar5,local_38);
    if (*plVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    this_00 = FARSupportInterface::GetSessionConfig((FARSupportInterface *)*plVar5);
    UARSessionConfig::ShouldRenderCameraOverlay(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  return false;
}

// OverrideFOV @ 14cfdc240

void __thiscall FAppleARKitXRCamera::OverrideFOV(FAppleARKitXRCamera *this,float *param_1)

{
  EDeviceScreenOrientation EVar1;
  FAppleARKitFrame *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  UARSessionConfig *this_00;
  float fVar6;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8393247101550591873>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitSystem.cpp"
                       ,0x7f,"IsInGameThread()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar5 = &this->ARKitSystem->_padding_;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x138))(plVar5,local_18);
  if (*plVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = FARSupportInterface::GetSessionConfig((FARSupportInterface *)*plVar5);
  bVar4 = UARSessionConfig::ShouldRenderCameraOverlay(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (bVar4) {
    pFVar2 = (this->ARKitSystem->GameThreadFrame).Object;
    if (pFVar2 != (FAppleARKitFrame *)0x0) {
      EVar1 = this->ARKitSystem->DeviceOrientation;
      if ((EVar1 == Portrait) || (EVar1 == PortraitUpsideDown)) {
        fVar6 = FAppleARKitCamera::GetVerticalFieldOfViewForScreen(&pFVar2->Camera,Fill);
      }
      else {
        fVar6 = FAppleARKitCamera::GetHorizontalFieldOfViewForScreen(&pFVar2->Camera,Fill);
      }
      *param_1 = fVar6;
    }
  }
  return;
}

// PostRenderBasePassDeferred_RenderThread @ 14cfdc420

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
FAppleARKitXRCamera::PostRenderBasePassDeferred_RenderThread
          (FAppleARKitXRCamera *this,FRDGBuilder *param_1,FSceneView *param_2,
          FRenderTargetBindingSlots *param_3,
          TRDGUniformBuffer<FSceneTextureUniformParameters> *param_4)

{
  FRDGTexture *pFVar1;
  uchar uVar2;
  short sVar3;
  undefined4 uVar4;
  ERenderTargetLoadAction EVar5;
  FPostBasePassViewExtensionParameters *pFVar6;
  FRenderTargetBindingSlots *pFVar7;
  FShaderParametersMetadata *pFVar8;
  FRDGEventName *pFVar9;
  longlong lVar10;
  EUniformBufferBindingFlags EVar11;
  <lambda_1> local_48;
  FRDGEventName local_38;
  
  if (*(longlong *)(this->_padding_ + 0x310) != 0) {
    pFVar6 = FRDGAllocator::Alloc<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters>
                       ((FRDGAllocator *)&param_1->_padding_);
    lVar10 = 2;
    pFVar7 = &pFVar6->RenderTargets;
    do {
      pFVar1 = (param_3->Output).Elements[0].ResolveTexture;
      (pFVar7->Output).Elements[0].Texture = (param_3->Output).Elements[0].Texture;
      (pFVar7->Output).Elements[0].ResolveTexture = pFVar1;
      uVar2 = (param_3->Output).Elements[0].MipIndex;
      sVar3 = (param_3->Output).Elements[0].ArraySlice;
      uVar4 = *(undefined4 *)&(param_3->Output).Elements[0].field_0x14;
      pFVar1 = (param_3->Output).Elements[1].Texture;
      (pFVar7->Output).Elements[0].LoadAction = (param_3->Output).Elements[0].LoadAction;
      (pFVar7->Output).Elements[0].MipIndex = uVar2;
      (pFVar7->Output).Elements[0].ArraySlice = sVar3;
      *(undefined4 *)&(pFVar7->Output).Elements[0].field_0x14 = uVar4;
      (pFVar7->Output).Elements[1].Texture = pFVar1;
      EVar5 = (param_3->Output).Elements[1].LoadAction;
      uVar2 = (param_3->Output).Elements[1].MipIndex;
      sVar3 = (param_3->Output).Elements[1].ArraySlice;
      uVar4 = *(undefined4 *)&(param_3->Output).Elements[1].field_0x14;
      (pFVar7->Output).Elements[1].ResolveTexture = (param_3->Output).Elements[1].ResolveTexture;
      (pFVar7->Output).Elements[1].LoadAction = EVar5;
      (pFVar7->Output).Elements[1].MipIndex = uVar2;
      (pFVar7->Output).Elements[1].ArraySlice = sVar3;
      *(undefined4 *)&(pFVar7->Output).Elements[1].field_0x14 = uVar4;
      pFVar1 = (param_3->Output).Elements[2].ResolveTexture;
      (pFVar7->Output).Elements[2].Texture = (param_3->Output).Elements[2].Texture;
      (pFVar7->Output).Elements[2].ResolveTexture = pFVar1;
      uVar2 = (param_3->Output).Elements[2].MipIndex;
      sVar3 = (param_3->Output).Elements[2].ArraySlice;
      uVar4 = *(undefined4 *)&(param_3->Output).Elements[2].field_0x14;
      pFVar1 = (param_3->Output).Elements[3].Texture;
      (pFVar7->Output).Elements[2].LoadAction = (param_3->Output).Elements[2].LoadAction;
      (pFVar7->Output).Elements[2].MipIndex = uVar2;
      (pFVar7->Output).Elements[2].ArraySlice = sVar3;
      *(undefined4 *)&(pFVar7->Output).Elements[2].field_0x14 = uVar4;
      (pFVar7->Output).Elements[3].Texture = pFVar1;
      EVar5 = (param_3->Output).Elements[3].LoadAction;
      uVar2 = (param_3->Output).Elements[3].MipIndex;
      sVar3 = (param_3->Output).Elements[3].ArraySlice;
      uVar4 = *(undefined4 *)&(param_3->Output).Elements[3].field_0x14;
      (pFVar7->Output).Elements[3].ResolveTexture = (param_3->Output).Elements[3].ResolveTexture;
      (pFVar7->Output).Elements[3].LoadAction = EVar5;
      (pFVar7->Output).Elements[3].MipIndex = uVar2;
      (pFVar7->Output).Elements[3].ArraySlice = sVar3;
      *(undefined4 *)&(pFVar7->Output).Elements[3].field_0x14 = uVar4;
      pFVar1 = (param_3->Output).Elements[4].ResolveTexture;
      (pFVar7->Output).Elements[4].Texture = (param_3->Output).Elements[4].Texture;
      (pFVar7->Output).Elements[4].ResolveTexture = pFVar1;
      uVar2 = (param_3->Output).Elements[4].MipIndex;
      sVar3 = (param_3->Output).Elements[4].ArraySlice;
      uVar4 = *(undefined4 *)&(param_3->Output).Elements[4].field_0x14;
      pFVar1 = (param_3->Output).Elements[5].Texture;
      (pFVar7->Output).Elements[4].LoadAction = (param_3->Output).Elements[4].LoadAction;
      (pFVar7->Output).Elements[4].MipIndex = uVar2;
      (pFVar7->Output).Elements[4].ArraySlice = sVar3;
      *(undefined4 *)&(pFVar7->Output).Elements[4].field_0x14 = uVar4;
      (pFVar7->Output).Elements[5].Texture = pFVar1;
      lVar10 = lVar10 + -1;
      pFVar7 = (FRenderTargetBindingSlots *)&(pFVar7->Output).Elements[5].ResolveTexture;
      param_3 = (FRenderTargetBindingSlots *)&(param_3->Output).Elements[5].ResolveTexture;
    } while (lVar10 != 0);
    pFVar8 = FSceneTextureUniformParameters::GetStructMetadata();
    EVar11 = Static;
    if (pFVar8->BindingFlags != StaticAndShader) {
      EVar11 = pFVar8->BindingFlags;
    }
    local_48.InView = (FSceneView *)CONCAT71(local_48.InView._1_7_,EVar11);
    *(TRDGUniformBuffer<FSceneTextureUniformParameters> **)&pFVar6->SceneTextures = param_4;
    *(FSceneView **)&(pFVar6->SceneTextures).field_0x8 = local_48.InView;
    local_48.__this = (FAppleARKitXRCamera *)&this[-1].ThreadPriority;
    local_48.InView = param_2;
    pFVar9 = FRDGEventName::FRDGEventName(&local_38,1,L"RenderVideoOverlay_RenderThread");
    FRDGBuilder::
    AddPass<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters,_FAppleARKitXRCamera::PostRenderBasePassDeferred_RenderThread_::__l5::<lambda_1>_>
              (param_1,pFVar9,pFVar6,Raster,&local_48);
    if (local_38.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PostRenderBasePassMobile_RenderThread @ 14cfdc570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAppleARKitXRCamera::PostRenderBasePassMobile_RenderThread
          (FAppleARKitXRCamera *this,FRHICommandList *param_1,FSceneView *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  lVar1 = this->_padding_;
  if (*(longlong *)(lVar1 + 0x310) != 0) {
    fVar4 = (float)(**(code **)(*(longlong *)(lVar1 + 0x70) + 0x98))(lVar1 + 0x70);
    lVar1 = this->_padding_;
    if (*(longlong *)(lVar1 + 0x310) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FAppleARKitVideoOverlay::RenderVideoOverlay_RenderThread
              ((FAppleARKitVideoOverlay *)&this->ARKitSystem,param_1,param_2,
               *(FAppleARKitFrame **)(lVar1 + 0x310),fVar4);
  }
  return;
}

// PreRenderViewFamily_RenderThread @ 14cfdc750

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FAppleARKitXRCamera::PreRenderViewFamily_RenderThread
          (FAppleARKitXRCamera *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this->_padding_ + 0x2d8);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    lVar1 = this->_padding_;
    lVar2 = *(longlong *)(lVar1 + 0x328);
    uVar3 = *(undefined8 *)(lVar1 + 800);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pTVar4 = *(TReferenceControllerBase<1> **)(lVar1 + 0x318);
    *(undefined8 *)(lVar1 + 0x310) = uVar3;
    *(longlong *)(lVar1 + 0x318) = lVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    LeaveCriticalSection(lpCriticalSection);
    FDefaultXRCamera::PreRenderViewFamily_RenderThread((FDefaultXRCamera *)this,param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PreRenderView_RenderThread @ 14cfdc800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAppleARKitXRCamera::PreRenderView_RenderThread
          (FAppleARKitXRCamera *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  if (*(int *)((longlong)&(this->VideoOverlay).UVOffsets[1].field0_0x0 + 0xc) !=
      *(int *)((longlong)&(this->VideoOverlay).UVOffsets[1].field0_0x0 + 8)) {
    LOCK();
    *(undefined4 *)((longlong)&(this->VideoOverlay).UVOffsets[1].field0_0x0 + 0xc) =
         *(undefined4 *)((longlong)&(this->VideoOverlay).UVOffsets[1].field0_0x0 + 8);
    UNLOCK();
  }
  FDefaultXRCamera::PreRenderView_RenderThread((FDefaultXRCamera *)this,param_1,param_2);
  return;
}

// SetupView @ 14cfde9d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAppleARKitXRCamera::SetupView
          (FAppleARKitXRCamera *this,FSceneViewFamily *param_1,FSceneView *param_2)

{
  char cVar1;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  double dStack_10;
  
  cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x58))
                    ((longlong *)this->_padding_,(int)this->_padding_,&dStack_28,&dStack_48);
  if (cVar1 != '\0') {
    (param_2->BaseHmdOrientation).X = dStack_28;
    (param_2->BaseHmdOrientation).Y = dStack_20;
    (param_2->BaseHmdOrientation).Z = dStack_18;
    (param_2->BaseHmdOrientation).W = dStack_10;
    (param_2->BaseHmdLocation).field0_0x0._s_0.X = dStack_48;
    (param_2->BaseHmdLocation).field0_0x0._s_0.Y = dStack_40;
    (param_2->BaseHmdLocation).field0_0x0._s_0.Z = dStack_38;
  }
  return;
}

// SetupViewProjectionMatrix @ 14cfde9e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAppleARKitXRCamera::SetupViewProjectionMatrix
          (FAppleARKitXRCamera *this,FSceneViewProjectionData *param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  double dVar4;
  TVector2<double>_u_0 local_18;
  
  lVar2 = *(longlong *)(this->_padding_ + 0x300);
  if (lVar2 != 0) {
    cVar1 = *(char *)(this->_padding_ + 0x189);
    UGameViewportClient::GetViewportSize
              ((GEngine->GameViewport).field0_0x0.DebugPtr,(TVector2<double> *)&local_18._s_0);
    if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      fVar3 = FAppleARKitCamera::GetVerticalFieldOfViewForScreen
                        ((FAppleARKitCamera *)(lVar2 + 0x20),Fill);
    }
    else {
      fVar3 = FAppleARKitCamera::GetHorizontalFieldOfViewForScreen
                        ((FAppleARKitCamera *)(lVar2 + 0x20),Fill);
    }
    dVar4 = tan((double)(fVar3 * __real_3c0efa35));
    dVar4 = __real_3ff0000000000000 / dVar4;
    (param_1->ProjectionMatrix).M[0][0] = dVar4;
    (param_1->ProjectionMatrix).M[0][1] = 0.0;
    (param_1->ProjectionMatrix).M[0][2] = 0.0;
    (param_1->ProjectionMatrix).M[0][3] = 0.0;
    (param_1->ProjectionMatrix).M[1][0] = 0.0;
    (param_1->ProjectionMatrix).M[1][1] = (dVar4 * local_18._s_0.X) / local_18._s_0.Y;
    (param_1->ProjectionMatrix).M[1][2] = 0.0;
    (param_1->ProjectionMatrix).M[1][3] = 0.0;
    (param_1->ProjectionMatrix).M[2][0] = 0.0;
    (param_1->ProjectionMatrix).M[2][1] = 0.0;
    (param_1->ProjectionMatrix).M[2][2] = 0.0;
    (param_1->ProjectionMatrix).M[2][3] = 1.0;
    (param_1->ProjectionMatrix).M[3][0] = 0.0;
    (param_1->ProjectionMatrix).M[3][1] = 0.0;
    (param_1->ProjectionMatrix).M[3][2] = 10.0;
    (param_1->ProjectionMatrix).M[3][3] = 0.0;
  }
  return;
}

