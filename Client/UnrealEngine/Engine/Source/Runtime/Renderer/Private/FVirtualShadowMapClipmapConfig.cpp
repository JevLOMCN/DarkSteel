// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetGlobal @ 1457f4810

FVirtualShadowMapClipmapConfig * __cdecl
FVirtualShadowMapClipmapConfig::GetGlobal(FVirtualShadowMapClipmapConfig *__return_storage_ptr__)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<float> *pTVar3;
  TConsoleVariableData<float> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<bool> *pTVar6;
  TConsoleVariableData<bool> *pTVar7;
  bool bVar8;
  int iVar9;
  FVirtualShadowMapClipmapConfig *pFVar10;
  
  pTVar2 = CVarMarkCoarsePagesDirectional.Ref;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVirtualShadowMapClipmapConfig *)(*pcVar1)();
      return pFVar10;
    }
  }
  pTVar5 = CVarVirtualShadowMapClipmapFirstLevel.Ref;
  iVar9 = pTVar2->ShadowedValue[1];
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVirtualShadowMapClipmapConfig *)(*pcVar1)();
      return pFVar10;
    }
  }
  pTVar2 = CVarVirtualShadowMapClipmapLastLevel.Ref;
  __return_storage_ptr__->FirstLevel = pTVar5->ShadowedValue[1];
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVirtualShadowMapClipmapConfig *)(*pcVar1)();
      return pFVar10;
    }
  }
  __return_storage_ptr__->LastLevel = pTVar2->ShadowedValue[1];
  pTVar2 = CVarVirtualShadowMapClipmapFirstCoarseLevel.Ref;
  if (iVar9 == 0) {
    iVar9 = -1;
    __return_storage_ptr__->FirstCoarseLevel = -1;
  }
  else {
    bVar8 = IsInParallelRenderingThread();
    if (!bVar8) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar8) {
        pcVar1 = (code *)swi(3);
        pFVar10 = (FVirtualShadowMapClipmapConfig *)(*pcVar1)();
        return pFVar10;
      }
    }
    pTVar5 = CVarVirtualShadowMapClipmapLastCoarseLevel.Ref;
    __return_storage_ptr__->FirstCoarseLevel = pTVar2->ShadowedValue[1];
    bVar8 = IsInParallelRenderingThread();
    if (!bVar8) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar8) {
        pcVar1 = (code *)swi(3);
        pFVar10 = (FVirtualShadowMapClipmapConfig *)(*pcVar1)();
        return pFVar10;
      }
    }
    iVar9 = pTVar5->ShadowedValue[1];
  }
  pTVar3 = CVarVirtualShadowMapResolutionLodBiasDirectional.Ref;
  __return_storage_ptr__->LastCoarseLevel = iVar9;
  __return_storage_ptr__->ShadowTypeId = 0;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVirtualShadowMapClipmapConfig *)(*pcVar1)();
      return pFVar10;
    }
  }
  pTVar4 = CVarVirtualShadowMapResolutionLodBiasDirectionalMoving.Ref;
  __return_storage_ptr__->ResolutionLodBias = pTVar3->ShadowedValue[1];
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVirtualShadowMapClipmapConfig *)(*pcVar1)();
      return pFVar10;
    }
  }
  pTVar2 = CVarForceInvalidateDirectionalVSM.Ref;
  __return_storage_ptr__->ResolutionLodBiasMoving = pTVar4->ShadowedValue[1];
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVirtualShadowMapClipmapConfig *)(*pcVar1)();
      return pFVar10;
    }
  }
  pTVar6 = CVarVSMClipmapCullDynamicTightly.Ref;
  iVar9 = pTVar2->ShadowedValue[1];
  __return_storage_ptr__->bIsFirstPersonShadow = false;
  __return_storage_ptr__->bForceInvalidate = iVar9 != 0;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVirtualShadowMapClipmapConfig *)(*pcVar1)();
      return pFVar10;
    }
  }
  pTVar7 = CVarVSMUseReceiverMaskDirectional.Ref;
  __return_storage_ptr__->bCullDynamicTightly = pTVar6->ShadowedValue[1];
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVirtualShadowMapClipmapConfig *)(*pcVar1)();
      return pFVar10;
    }
  }
  __return_storage_ptr__->bUseReceiverMask = pTVar7->ShadowedValue[1] != false;
  return __return_storage_ptr__;
}

