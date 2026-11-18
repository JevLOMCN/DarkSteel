// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 8

// FFrameCaptureViewExtension @ 146bd7300

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FFrameCaptureViewExtension * __thiscall
FFrameCaptureViewExtension::FFrameCaptureViewExtension
          (FFrameCaptureViewExtension *this,FAutoRegister *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,bool param_3,int param_4,int param_5,
          UMaterialInterface *param_6,bool param_7)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FFrameCaptureViewExtension *pFVar4;
  IConsoleVariable *pIVar5;
  
  FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this,param_1);
  this->bNeedsCapture = false;
  this->_padding_ = (longlong)&___7FFrameCaptureViewExtension__6B_;
  this->HDRCompressionQuality = param_4;
  this->CaptureGamut = param_5;
  this->PostProcessingMaterial = param_6;
  this->RenderPasses = param_2;
  this->bDisableScreenPercentage = param_7;
  (this->OutputFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFilename).Data.ArrayNum = 0;
  (this->OutputFilename).Data.ArrayMax = 0;
  this->bCaptureFramesInHDR = param_3;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FFrameCaptureViewExtension *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pIVar5 = (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.BufferVisualizationDumpFrames",1);
  this->CVarDumpFrames = pIVar5;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FFrameCaptureViewExtension *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pIVar5 = (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.BufferVisualizationDumpFramesAsHDR",1);
  this->CVarDumpFramesAsHDR = pIVar5;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FFrameCaptureViewExtension *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pIVar5 = (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.SaveEXR.CompressionQuality",1);
  this->CVarHDRCompressionQuality = pIVar5;
  iVar3 = (**(code **)(*(longlong *)this->CVarDumpFramesAsHDR + 200))();
  this->RestoreDumpHDR = iVar3;
  iVar3 = (**(code **)(*(longlong *)this->CVarHDRCompressionQuality + 200))();
  this->RestoreHDRCompressionQuality = iVar3;
  if (this->bNeedsCapture != false) {
    this->bNeedsCapture = false;
    IConsoleVariable::Set<int>
              (this->CVarDumpFramesAsHDR,this->RestoreDumpHDR,ECVF_SetByCode,(FName)0x0);
    IConsoleVariable::Set<int>
              (this->CVarHDRCompressionQuality,this->RestoreHDRCompressionQuality,ECVF_SetByCode,
               (FName)0x0);
    IConsoleVariable::Set<int>(this->CVarDumpFrames,0,ECVF_SetByCode,(FName)0x0);
  }
  return this;
}

// ~FFrameCaptureViewExtension @ 146bd91a0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FFrameCaptureViewExtension::~FFrameCaptureViewExtension(FFrameCaptureViewExtension *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FFrameCaptureViewExtension__6B_;
  if (this->bNeedsCapture != false) {
    this->bNeedsCapture = false;
    IConsoleVariable::Set<int>
              (this->CVarDumpFramesAsHDR,this->RestoreDumpHDR,ECVF_SetByCode,(FName)0x0);
    IConsoleVariable::Set<int>
              (this->CVarHDRCompressionQuality,this->RestoreHDRCompressionQuality,ECVF_SetByCode,
               (FName)0x0);
    IConsoleVariable::Set<int>(this->CVarDumpFrames,0,ECVF_SetByCode,(FName)0x0);
  }
  pFVar1 = (this->OutputFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  return;
}

// BeginRenderViewFamily @ 146bdbb80

void __thiscall
FFrameCaptureViewExtension::BeginRenderViewFamily
          (FFrameCaptureViewExtension *this,FSceneViewFamily *param_1)

{
  return;
}

// IsActiveThisFrame_Internal @ 146be2fd0

bool __thiscall
FFrameCaptureViewExtension::IsActiveThisFrame_Internal
          (FFrameCaptureViewExtension *this,FSceneViewExtensionContext *param_1)

{
  return this->bNeedsCapture;
}

// PreRenderViewFamily_RenderThread @ 146be51b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FFrameCaptureViewExtension::PreRenderViewFamily_RenderThread
          (FFrameCaptureViewExtension *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  return;
}

// PreRenderView_RenderThread @ 146be51c0

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
FFrameCaptureViewExtension::PreRenderView_RenderThread
          (FFrameCaptureViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  return;
}

// SetupView @ 146be8470

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
FFrameCaptureViewExtension::SetupView
          (FFrameCaptureViewExtension *this,FSceneViewFamily *param_1,FSceneView *param_2)

{
  int *piVar1;
  FString *pFVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  FBufferVisualizationData *this_00;
  longlong *plVar5;
  FIterator local_28;
  
  if (this->bNeedsCapture != false) {
    piVar1 = &(param_2->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayMax;
    (param_2->FinalPostProcessSettings).bBufferVisualizationDumpRequired = true;
    (param_2->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(param_2->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.
                        AllocatorInstance,0,piVar1);
    }
    pFVar2 = &this->OutputFilename;
    pFVar3 = &(param_2->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename;
    if (pFVar3 != pFVar2) {
      pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar3->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.ArrayNum =
           (this->OutputFilename).Data.ArrayNum;
      (param_2->FinalPostProcessSettings).BufferVisualizationDumpBaseFilename.Data.ArrayMax =
           (this->OutputFilename).Data.ArrayMax;
      (this->OutputFilename).Data.ArrayNum = 0;
      (this->OutputFilename).Data.ArrayMax = 0;
    }
    local_28.RenderPasses = this->RenderPasses;
    local_28.FinalPostProcessSettings = &param_2->FinalPostProcessSettings;
    this_00 = GetBufferVisualizationData();
    FBufferVisualizationData::
    IterateOverAvailableMaterials<_FFrameCaptureViewExtension::SetupView_::__l2::FIterator>
              (this_00,&local_28);
    if (this->PostProcessingMaterial != (UMaterialInterface *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this->PostProcessingMaterial);
      }
      plVar5 = &this->PostProcessingMaterial->_padding_;
      (**(code **)(*plVar5 + 0x10))(plVar5,param_2,__real_3f800000);
    }
    this->bNeedsCapture = false;
  }
  return;
}

// SetupViewFamily @ 146be8590

void __thiscall
FFrameCaptureViewExtension::SetupViewFamily
          (FFrameCaptureViewExtension *this,FSceneViewFamily *param_1)

{
  undefined1 *puVar1;
  
  if (this->bDisableScreenPercentage != false) {
    (param_1->EngineShowFlags).ScreenPercentage = 0;
  }
  return;
}

