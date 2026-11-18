// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FHighResScreenshotConfig @ 147cc40b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FHighResScreenshotConfig * __thiscall
FHighResScreenshotConfig::FHighResScreenshotConfig(FHighResScreenshotConfig *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  (this->UnscaledCaptureRegion).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->UnscaledCaptureRegion).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CaptureRegion).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CaptureRegion).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->ResolutionMultiplier = 1.0;
  this->ResolutionMultiplierScale = 0.0;
  this->bMaskEnabled = false;
  this->bDateTimeBasedNaming = false;
  this->bDumpBufferVisualizationTargets = false;
  (this->TargetViewport).Object = (FSceneViewport *)0x0;
  (this->TargetViewport).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->FilenameOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilenameOverride).Data.ArrayNum = 0;
  (this->FilenameOverride).Data.ArrayMax = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (this->UnscaledCaptureRegion).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->UnscaledCaptureRegion).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CaptureRegion).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CaptureRegion).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->bMaskEnabled = false;
  this->bDateTimeBasedNaming = false;
  this->bDumpBufferVisualizationTargets = false;
  this->ResolutionMultiplier = 1.0;
  this->ResolutionMultiplierScale = 0.0;
  pTVar3 = (this->TargetViewport).WeakReferenceCount.ReferenceController;
  (this->TargetViewport).Object = (FSceneViewport *)0x0;
  (this->TargetViewport).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->bCaptureHDR = false;
  this->bForce128BitRendering = false;
  return this;
}

// ChangeViewport @ 147ce40e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FHighResScreenshotConfig::ChangeViewport
          (FHighResScreenshotConfig *this,TWeakPtr<FSceneViewport,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  FSceneViewport *pFVar6;
  bool bVar7;
  
  pTVar3 = (this->TargetViewport).WeakReferenceCount.ReferenceController;
  pFVar6 = (FSceneViewport *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar3->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_147ce4142;
      }
      LOCK();
      aVar5 = pTVar3->SharedReferenceCount;
      bVar7 = aVar2 == aVar5;
      if (bVar7) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar7);
    pFVar6 = (this->TargetViewport).Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (pFVar6 != (FSceneViewport *)0x0) {
    FViewport::Invalidate((FViewport *)&pFVar6->_padding_);
  }
LAB_147ce4142:
  (this->UnscaledCaptureRegion).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->UnscaledCaptureRegion).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CaptureRegion).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CaptureRegion).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->bMaskEnabled = false;
  this->bDateTimeBasedNaming = false;
  this->bDumpBufferVisualizationTargets = false;
  this->ResolutionMultiplier = 1.0;
  this->ResolutionMultiplierScale = 0.0;
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  pFVar6 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->TargetViewport).WeakReferenceCount.ReferenceController;
  (this->TargetViewport).Object = pFVar6;
  (this->TargetViewport).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return;
}

// Init @ 147d15ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FHighResScreenshotConfig::Init(FHighResScreenshotConfig *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  IImageWriteQueue *pIVar4;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,"ImageWriteQueue");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  pIVar4 = (IImageWriteQueue *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
  this->ImageWriteQueue = pIVar4;
  return;
}

// MergeMaskIntoAlpha @ 147d1acb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FHighResScreenshotConfig::MergeMaskIntoAlpha
          (FHighResScreenshotConfig *this,TArray<FColor,TSizedDefaultAllocator<32>_> *param_1,
          TIntRect<int> *param_2)

{
  bool bVar1;
  
  bVar1 = MergeMaskIntoAlphaInternal<FColor,unsigned_char>
                    (param_1,param_2,this->bMaskEnabled,'\x01');
  return bVar1;
}

// MergeMaskIntoAlpha @ 147d1acd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FHighResScreenshotConfig::MergeMaskIntoAlpha
          (FHighResScreenshotConfig *this,TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,
          TIntRect<int> *param_2)

{
  bool bVar1;
  
  bVar1 = MergeMaskIntoAlphaInternal<FLinearColor,float>
                    (param_1,param_2,this->bMaskEnabled,__real_3b808081);
  return bVar1;
}

// ParseConsoleCommand @ 147d1cf80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FHighResScreenshotConfig::ParseConsoleCommand
          (FHighResScreenshotConfig *this,FString *param_1,FOutputDevice *param_2)

{
  float *pfVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  pfVar1 = &this->ResolutionMultiplier;
  GScreenshotResolutionX = 0;
  GScreenshotResolutionY = 0;
  *pfVar1 = 1.0;
  this->ResolutionMultiplierScale = 0.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = GetHighResScreenShotInput
                    (pwVar3,param_2,&GScreenshotResolutionX,&GScreenshotResolutionY,pfVar1,
                     &this->CaptureRegion,&this->bMaskEnabled,&this->bDumpBufferVisualizationTargets
                     ,&this->bCaptureHDR,&this->FilenameOverride,&this->bDateTimeBasedNaming);
  if (bVar2) {
    GScreenshotResolutionX = (uint)(longlong)((float)GScreenshotResolutionX * *pfVar1);
    GScreenshotResolutionY = (uint)(longlong)((float)GScreenshotResolutionY * *pfVar1);
    if ((GScreenshotResolutionX <= (uint)GRHIGlobals.MaxTextureDimensions.Value) &&
       (GScreenshotResolutionY <= (uint)GRHIGlobals.MaxTextureDimensions.Value)) {
      GIsHighResScreenshot = true;
      RunHighResScreenshotAdditionalCommands();
      return true;
    }
    FOutputDevice::LogfImpl
              (param_2,L"Error: Screenshot size exceeds the maximum allowed texture size (%d x %d)")
    ;
  }
  return false;
}

// PopulateImageTaskParams @ 147d1d970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FHighResScreenshotConfig::PopulateImageTaskParams
          (FHighResScreenshotConfig *this,FImageWriteTask *param_1)

{
  bool bVar1;
  longlong lVar2;
  IConsoleManager *pIVar3;
  longlong *plVar4;
  TConsoleVariableData<int> *pTVar5;
  longlong lVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar3 = IConsoleManager::Get();
      plVar4 = (longlong *)
               (**(code **)((longlong)*pIVar3 + 0xc0))
                         (pIVar3,L"r.BufferVisualizationDumpFramesAsHDR",1);
      pTVar5 = (TConsoleVariableData<int> *)0x0;
      if (plVar4 != (longlong *)0x0) {
        pTVar5 = (TConsoleVariableData<int> *)(**(code **)(*plVar4 + 0x68))(plVar4);
      }
      CVarDumpFramesAsHDR = pTVar5;
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar5 = CVarDumpFramesAsHDR;
  lVar6 = 4;
  if ((this->bCaptureHDR == false) || (this->bDumpBufferVisualizationTargets == false)) {
    bVar1 = IsInParallelGameThread();
    if (bVar1) {
LAB_147d1d9dc:
      lVar2 = 0;
    }
    else {
      bVar1 = IsInGameThread();
      if (bVar1) goto LAB_147d1d9dc;
      lVar2 = 4;
    }
    if (*(int *)((longlong)pTVar5->ShadowedValue + lVar2) == 0) {
      param_1->Format = PNG;
      param_1->CompressionQuality = 0;
      return;
    }
  }
  param_1->Format = EXR;
  param_1->CompressionQuality = 0;
  pTVar5 = CVarSaveEXRCompressionQuality.Ref;
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    if (!bVar1) goto LAB_147d1da25;
  }
  lVar6 = 0;
LAB_147d1da25:
  if (*(int *)((longlong)pTVar5->ShadowedValue + lVar6) == 0) {
    param_1->CompressionQuality = 1;
  }
  return;
}

// SetFilename @ 147d29970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FHighResScreenshotConfig::SetFilename(FHighResScreenshotConfig *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&this->FilenameOverride,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// SetForce128BitRendering @ 147d299c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FHighResScreenshotConfig::SetForce128BitRendering(FHighResScreenshotConfig *this,bool param_1)

{
  this->bForce128BitRendering = param_1;
  return;
}

// SetHDRCapture @ 147d299e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FHighResScreenshotConfig::SetHDRCapture(FHighResScreenshotConfig *this,bool param_1)

{
  this->bCaptureHDR = param_1;
  return;
}

// SetMaskEnabled @ 147d2a2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FHighResScreenshotConfig::SetMaskEnabled(FHighResScreenshotConfig *this,bool param_1)

{
  this->bMaskEnabled = param_1;
  return;
}

// SetResolution @ 147d2b560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FHighResScreenshotConfig::SetResolution
          (FHighResScreenshotConfig *this,uint param_1,uint param_2,float param_3)

{
  if (((float)param_1 * param_3 <= (float)(uint)GRHIGlobals.MaxTextureDimensions.Value) &&
     ((float)param_2 * param_3 <= (float)(uint)GRHIGlobals.MaxTextureDimensions.Value)) {
    (this->UnscaledCaptureRegion).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (this->UnscaledCaptureRegion).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (this->CaptureRegion).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (this->CaptureRegion).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    this->bMaskEnabled = false;
    GScreenshotResolutionX = (uint)(longlong)((float)param_1 * param_3);
    GIsHighResScreenshot = true;
    GScreenshotResolutionY = (uint)(longlong)((float)param_2 * param_3);
    RunHighResScreenshotAdditionalCommands();
    return true;
  }
  return false;
}

