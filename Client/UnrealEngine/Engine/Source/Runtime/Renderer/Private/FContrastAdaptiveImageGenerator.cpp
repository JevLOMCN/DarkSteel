// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// ~FContrastAdaptiveImageGenerator @ 145750390

void __thiscall
FContrastAdaptiveImageGenerator::~FContrastAdaptiveImageGenerator
          (FContrastAdaptiveImageGenerator *this)

{
  *this = (FContrastAdaptiveImageGenerator)&___7IVariableRateShadingImageGenerator__6B_;
  return;
}

// GetDebugImage @ 145770a70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FRDGTexture * __thiscall
FContrastAdaptiveImageGenerator::GetDebugImage
          (FContrastAdaptiveImageGenerator *this,FRDGBuilder *param_1,FViewInfo *param_2,
          EVRSImageType param_3,bool param_4)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  FRDGTexture *pFVar4;
  FCASImageData *pFVar5;
  
  pTVar2 = CVarCASPreview.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGTexture *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (pTVar2->ShadowedValue[1] != 0) {
    pFVar5 = FRDGBlackboard::Get<FCASImageData>(&param_1->Blackboard);
    if (pFVar5 != (FCASImageData *)0x0) {
      pFVar5 = FRDGBlackboard::Get<FCASImageData>(&param_1->Blackboard);
      if (pFVar5 == (FCASImageData *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CASImageData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\ContrastAdaptiveImageGenerator.cpp"
                           ,0x123,L"FCASImageData was unexpectedly not initialized.");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FRDGTexture *)(*pcVar1)();
          return pFVar4;
        }
      }
      if (param_4) {
        pFVar5 = (FCASImageData *)&pFVar5->SoftwareImages;
      }
      if (param_3 == Full) {
        return (pFVar5->HardwareImages).ScaledSRI;
      }
      if (param_3 == Conservative) {
        return (pFVar5->HardwareImages).ScaledConservativeSRI;
      }
    }
  }
  return (FRDGTexture *)0x0;
}

// GetImage @ 145771310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FRDGTexture * __thiscall
FContrastAdaptiveImageGenerator::GetImage
          (FContrastAdaptiveImageGenerator *this,FRDGBuilder *param_1,FViewInfo *param_2,
          EVRSImageType param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  FCASImageData *pFVar3;
  FRDGTexture *pFVar4;
  
  pFVar3 = FRDGBlackboard::Get<FCASImageData>(&param_1->Blackboard);
  if ((pFVar3 == (FCASImageData *)0x0) || (param_3 == Disabled)) {
    return (FRDGTexture *)0x0;
  }
  pFVar3 = FRDGBlackboard::Get<FCASImageData>(&param_1->Blackboard);
  if (pFVar3 == (FCASImageData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CASImageData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\ContrastAdaptiveImageGenerator.cpp"
                       ,0x123,L"FCASImageData was unexpectedly not initialized.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGTexture *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (param_4) {
    pFVar3 = (FCASImageData *)&pFVar3->SoftwareImages;
  }
  if (param_3 == Full) {
    return (pFVar3->HardwareImages).ScaledSRI;
  }
  return (pFVar3->HardwareImages).ScaledConservativeSRI;
}

// GetType @ 145779cf0

EVRSSourceType __thiscall
FContrastAdaptiveImageGenerator::GetType(FContrastAdaptiveImageGenerator *this)

{
  return ContrastAdaptiveShading;
}

// IsEnabled @ 145780950

bool __thiscall FContrastAdaptiveImageGenerator::IsEnabled(FContrastAdaptiveImageGenerator *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarCASContrastAdaptiveShading.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  return 0 < pTVar2->ShadowedValue[1];
}

// IsSupportedByView @ 145780d40

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

bool __thiscall
FContrastAdaptiveImageGenerator::IsSupportedByView
          (FContrastAdaptiveImageGenerator *this,FSceneView *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EShaderPlatform EVar4;
  
  EVar4 = FSceneView::GetShaderPlatform(param_1);
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar4].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[EVar4].MaxFeatureLevel != ES3_1;
}

// PrepareImages @ 145781900

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FContrastAdaptiveImageGenerator::PrepareImages
          (FContrastAdaptiveImageGenerator *this,FRDGBuilder *param_1,FSceneViewFamily *param_2,
          FMinimalSceneTextures *param_3,bool param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  FMinimalSceneTextures *pFVar6;
  bool bVar7;
  FRDGScope *this_00;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [16];
  FMinimalSceneTextures *local_res20;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_> local_98;
  TRDGEventScopeGuard<FRDGScope_RHI> local_88;
  char local_78;
  uint uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  FTonemapperOutputDeviceParameters local_48;
  
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_78 = '\0';
  local_res20 = param_3;
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        local_60 = 0;
        uStack_5c = 0;
        ::Desc._12_8_ = ZEXT48(uStack_64);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_ContrastAdaptiv;
        ::Desc._padding_ = (longlong)u_ContrastAdaptiv;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._0_4_ = 0x1fb;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FContrastAdaptiveImageGenerator::PrepareImages'::__l7::Desc::operator()<>'::__l3::
               <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_98._Myfirst._Val = &::Desc;
    local_88.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_88.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_98);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_78 = '\x01';
  }
  if ((param_2->Views).ArrayNum == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ViewFamily.Views.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\ContrastAdaptiveImageGenerator.cpp"
                       ,0x1fd,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((param_2->Views).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(char *)(*(longlong *)(param_2->Views).AllocatorInstance.Data + 0x11d9) == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewFamily.Views[0]->bIsViewInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\ContrastAdaptiveImageGenerator.cpp"
                       ,0x1fe,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((!param_4) && (!param_5)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bPrepareHardwareImages || bPrepareSoftwareImages",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\ContrastAdaptiveImageGenerator.cpp"
                       ,0x1ff,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar8 = (param_2->Views).AllocatorInstance.Data;
  iVar3 = (param_2->Views).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((param_2->Views).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FSceneView_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar8 == pFVar1) break;
    lVar4 = *(longlong *)pFVar8;
    if (*(char *)(lVar4 + 0x11d9) == '\0') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("View->bIsViewInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\ContrastAdaptiveImageGenerator.cpp"
                         ,0x203,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(char *)(lVar4 + 0x11cc) != '\0') goto LAB_145781bbd;
    GetTonemapperOutputDeviceParameters(&local_48,*(FSceneViewFamily **)(lVar4 + 8));
    if ((((*(char *)(lVar4 + 0x11e8) != '\0') ||
         (*(char *)(*(longlong *)(lVar4 + 8) + 0xc1) == '\0')) || (4 < local_48.OutputDevice)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x24c8) + 0xd58) == 0)) goto LAB_145781bbd;
    pFVar8 = pFVar8 + 8;
  }
  AddCreateShadingRateImagePass(param_1,param_2,param_4,param_5);
  pFVar6 = local_res20;
  if (param_4) {
    AddReprojectImageBasedVRSPass(param_1,local_res20,param_2,false);
  }
  if (param_5) {
    AddReprojectImageBasedVRSPass(param_1,pFVar6,param_2,true);
  }
LAB_145781bbd:
  if (local_78 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_88);
  }
  return;
}

