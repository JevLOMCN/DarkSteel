// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 6

// BeginRenderViewFamily @ 14de24c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDLSSUpscalerViewExtension::BeginRenderViewFamily
          (FDLSSUpscalerViewExtension *this,FSceneViewFamily *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  EShadingPath EVar5;
  FDLSSUpscaler *this_00;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  if ((((param_1->ViewMode == VMI_Lit) && (param_1->Scene != (FSceneInterface *)0x0)) &&
      (EVar5 = FSceneInterface::GetShadingPath(param_1->Scene->FeatureLevel), EVar5 == Deferred)) &&
     (param_1->bRealtimeUpdate != false)) {
    iVar2 = (param_1->Views).ArrayNum;
    bVar4 = false;
    pFVar6 = (param_1->Views).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->Views).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FSceneView_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar6 == pFVar1) break;
      lVar3 = *(longlong *)pFVar6;
      if (*(longlong *)(lVar3 + 0x10) == 0) {
        return;
      }
      if (*(char *)(lVar3 + 0x11e8) != '\0') {
        return;
      }
      if (*(int *)(lVar3 + 0x1b94) == 1) {
        bVar4 = true;
      }
      pFVar6 = pFVar6 + 8;
    }
    if ((bVar4) && ((param_1->EngineShowFlags).AntiAliasing != 0)) {
      if (param_1->TemporalUpscalerInterface == (ITemporalUpscaler *)0x0) {
        this_00 = GetGlobalDLSSUpscaler();
        FDLSSUpscaler::SetupViewFamily(this_00,param_1);
      }
      else if (1 < (byte)LogDLSS._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
      }
    }
  }
  return;
}

// IsActiveThisFrame_Internal @ 14de27b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FDLSSUpscalerViewExtension::IsActiveThisFrame_Internal
          (FDLSSUpscalerViewExtension *this,FSceneViewExtensionContext *param_1)

{
  int iVar1;
  code *pcVar2;
  UGameViewportClient *pUVar3;
  FViewportClient *pFVar4;
  FName FVar5;
  FDLSSTemporalUpscalerModularFeature *pFVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  FDLSSUpscaler *this_00;
  FName *pFVar10;
  FModuleManager *this_01;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FName local_res18;
  char local_res20;
  char local_res21;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar10 = ::FName::FName(&local_res18,L"DLSS");
    FVar5 = *pFVar10;
    this_01 = FModuleManager::Get();
    DLSSModule = (IDLSSModuleInterface *)FModuleManager::LoadModuleChecked(this_01,FVar5);
    _Init_thread_footer(&::_TSS0);
  }
  cVar7 = (**(code **)((longlong)*DLSSModule + 0x40))();
  pFVar6 = FDLSSTemporalUpscalerModularFeature::ModularFeatureSingleton.Object;
  if (cVar7 == '\0') {
    if (FDLSSTemporalUpscalerModularFeature::ModularFeatureSingleton.Object !=
        (FDLSSTemporalUpscalerModularFeature *)0x0) {
      pFVar12 = ((FDLSSTemporalUpscalerModularFeature::ModularFeatureSingleton.Object)->
                IsActiveThisFrameFunctions).AllocatorInstance.Data;
      bVar8 = false;
      iVar1 = ((FDLSSTemporalUpscalerModularFeature::ModularFeatureSingleton.Object)->
              IsActiveThisFrameFunctions).ArrayNum;
      pFVar13 = pFVar12 + (longlong)iVar1 * 0x40;
      cVar7 = (char)local_res18.ComparisonIndex.Value;
      while( true ) {
        if ((pFVar6->IsActiveThisFrameFunctions).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FSceneViewExtensionIsActiveFunctor_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_res18);
        }
        if (pFVar12 == pFVar13) break;
        if (*(void **)(pFVar12 + 0x10) == (void *)0x0) {
          local_res21 = '\0';
          pFVar12 = pFVar12 + 0x40;
        }
        else {
          local_res18 = (FName)this;
          UE::Core::Private::Function::CheckCallable(*(void **)(pFVar12 + 0x10));
          pcVar2 = *(code **)(pFVar12 + 0x10);
          pFVar11 = pFVar12 + 0x20;
          if (*(FScriptContainerElement **)(pFVar12 + 0x38) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar12 + 0x38);
          }
          uVar9 = (**(code **)(*(longlong *)pFVar11 + 8))();
          (*pcVar2)(&local_res20,uVar9,&local_res18,param_1);
          if ((local_res21 != '\0') && ((!bVar8 || (cVar7 == '\0')))) {
            bVar8 = true;
            cVar7 = local_res20;
          }
          pFVar12 = pFVar12 + 0x40;
        }
      }
      if (bVar8) {
        return (bool)cVar7;
      }
    }
    this_00 = GetGlobalDLSSUpscaler();
    bVar8 = FDLSSUpscaler::IsDLSSActive(this_00);
    if (((bVar8) && (param_1->Viewport != (FViewport *)0x0)) && (GEngine != (UEngine *)0x0)) {
      pUVar3 = (GEngine->GameViewport).field0_0x0.DebugPtr;
      pFVar4 = param_1->Viewport->ViewportClient;
      if (pUVar3 == (UGameViewportClient *)0x0) {
        return pFVar4 == (FViewportClient *)0x0;
      }
      return (FViewportClient *)&pUVar3->_padding_ == pFVar4;
    }
  }
  return false;
}

// PreRenderViewFamily_RenderThread @ 14de289a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDLSSUpscalerViewExtension::PreRenderViewFamily_RenderThread
          (FDLSSUpscalerViewExtension *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  return;
}

// PreRenderView_RenderThread @ 14de28c60

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
FDLSSUpscalerViewExtension::PreRenderView_RenderThread
          (FDLSSUpscalerViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  return;
}

// SetupView @ 14de294e0

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
FDLSSUpscalerViewExtension::SetupView
          (FDLSSUpscalerViewExtension *this,FSceneViewFamily *param_1,FSceneView *param_2)

{
  return;
}

// SetupViewFamily @ 14de29b30

void __thiscall
FDLSSUpscalerViewExtension::SetupViewFamily
          (FDLSSUpscalerViewExtension *this,FSceneViewFamily *param_1)

{
  return;
}

