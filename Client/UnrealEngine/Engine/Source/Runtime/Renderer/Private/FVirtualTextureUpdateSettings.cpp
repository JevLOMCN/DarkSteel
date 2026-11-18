// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// EnableThrottling @ 14480deb0

FVirtualTextureUpdateSettings * __thiscall
FVirtualTextureUpdateSettings::EnableThrottling(FVirtualTextureUpdateSettings *this,bool param_1)

{
  if (!param_1) {
    this->MaxRVTPageUploads = 99999;
    this->MaxSVTPageUploads = 99999;
    this->MaxPagesProduced = 99999;
    this->bForceSyncPageUpdate = true;
  }
  return this;
}

// FVirtualTextureUpdateSettings @ 1458ce810

FVirtualTextureUpdateSettings * __thiscall
FVirtualTextureUpdateSettings::FVirtualTextureUpdateSettings(FVirtualTextureUpdateSettings *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  int iVar4;
  FVirtualTextureUpdateSettings *pFVar5;
  
  this->bEnableAsyncTasks = true;
  pTVar2 = CVarVTEnableFeedback.Ref;
  this->bEnablePageRequests = true;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVirtualTextureUpdateSettings *)(*pcVar1)();
      return pFVar5;
    }
  }
  this->bEnableFeedback = pTVar2->ShadowedValue[1] != 0;
  pTVar2 = CVarVTEnableFeedbackProduce.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVirtualTextureUpdateSettings *)(*pcVar1)();
      return pFVar5;
    }
  }
  this->bEnableFeedbackProduce = pTVar2->ShadowedValue[1] != 0;
  pTVar2 = CVarVTEnablePlayback.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVirtualTextureUpdateSettings *)(*pcVar1)();
      return pFVar5;
    }
  }
  this->bEnablePlayback = pTVar2->ShadowedValue[1] != 0;
  pTVar2 = CVarVTParallelFeedbackTasks.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVirtualTextureUpdateSettings *)(*pcVar1)();
      return pFVar5;
    }
  }
  this->bParallelFeedbackTasks = pTVar2->ShadowedValue[1] != 0;
  pTVar2 = CVarVTForceContinuousUpdate.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVirtualTextureUpdateSettings *)(*pcVar1)();
      return pFVar5;
    }
  }
  iVar4 = pTVar2->ShadowedValue[1];
  this->bForceSyncPageUpdate = false;
  this->bForceContinuousUpdate = iVar4 != 0;
  pTVar2 = CVarVTNumFeedbackTasks.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVirtualTextureUpdateSettings *)(*pcVar1)();
      return pFVar5;
    }
  }
  this->NumFeedbackTasks = pTVar2->ShadowedValue[1];
  pTVar2 = CVarVTNumGatherTasks.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVirtualTextureUpdateSettings *)(*pcVar1)();
      return pFVar5;
    }
  }
  this->NumGatherTasks = pTVar2->ShadowedValue[1];
  pTVar2 = CVarVTPageUpdateFlushCount.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVirtualTextureUpdateSettings *)(*pcVar1)();
      return pFVar5;
    }
  }
  this->MaxGatherPagesBeforeFlush = pTVar2->ShadowedValue[1];
  iVar4 = VirtualTextureScalability::GetMaxUploadsPerFrame();
  this->MaxRVTPageUploads = iVar4;
  iVar4 = VirtualTextureScalability::GetMaxUploadsPerFrameForStreamingVT();
  this->MaxSVTPageUploads = iVar4;
  iVar4 = VirtualTextureScalability::GetMaxPagesProducedPerFrame();
  this->MaxPagesProduced = iVar4;
  iVar4 = VirtualTextureScalability::GetMaxContinuousUpdatesPerFrame();
  this->MaxContinuousUpdates = iVar4;
  return this;
}

