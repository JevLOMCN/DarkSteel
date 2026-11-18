// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// SyncRefreshFullTask @ 1487c7fd0

void __thiscall FDynamicRenderAssetInstanceManager::FTasks::SyncRefreshFullTask(FTasks *this)

{
  int iVar1;
  TDoWorkTask<RenderAssetInstanceTask::FRefreshFull> *pTVar2;
  bool bVar3;
  
  pTVar2 = (this->RefreshFullTask).Reference;
  LOCK();
  bVar3 = pTVar2->TaskState == 1;
  if (bVar3) {
    pTVar2->TaskState = 2;
  }
  UNLOCK();
  if (bVar3) {
    RenderAssetInstanceTask::FRefreshFull::operator()(&pTVar2->Work,false);
    pTVar2->TaskState = 3;
  }
  pTVar2 = (this->RefreshFullTask).Reference;
  if (pTVar2->TaskState != 0) {
    iVar1 = pTVar2->TaskState;
    while (iVar1 != 3) {
      FWindowsPlatformProcess::Sleep(0.0);
      iVar1 = pTVar2->TaskState;
    }
    RenderAssetInstanceTask::FRefreshFull::Sync(&pTVar2->Work);
  }
  pTVar2->TaskState = 0;
  return;
}

// SyncResults @ 1487c8050

void __thiscall FDynamicRenderAssetInstanceManager::FTasks::SyncResults(FTasks *this)

{
  int iVar1;
  TDoWorkTask<RenderAssetInstanceTask::FRefreshFull> *pTVar2;
  TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds> *pTVar3;
  bool bVar4;
  
  pTVar2 = (this->RefreshFullTask).Reference;
  LOCK();
  bVar4 = pTVar2->TaskState == 1;
  if (bVar4) {
    pTVar2->TaskState = 2;
  }
  UNLOCK();
  if (bVar4) {
    RenderAssetInstanceTask::FRefreshFull::operator()(&pTVar2->Work,false);
    pTVar2->TaskState = 3;
  }
  pTVar3 = (this->CreateViewTask).Reference;
  LOCK();
  bVar4 = pTVar3->TaskState == 1;
  if (bVar4) {
    pTVar3->TaskState = 2;
  }
  UNLOCK();
  if (bVar4) {
    RenderAssetInstanceTask::FCreateViewWithUninitializedBounds::operator()(&pTVar3->Work,false);
    pTVar3->TaskState = 3;
  }
  pTVar2 = (this->RefreshFullTask).Reference;
  if (pTVar2->TaskState != 0) {
    iVar1 = pTVar2->TaskState;
    while (iVar1 != 3) {
      FWindowsPlatformProcess::Sleep(0.0);
      iVar1 = pTVar2->TaskState;
    }
    RenderAssetInstanceTask::FRefreshFull::Sync(&pTVar2->Work);
  }
  pTVar2->TaskState = 0;
  pTVar3 = (this->CreateViewTask).Reference;
  if (pTVar3->TaskState != 0) {
    iVar1 = pTVar3->TaskState;
    while (iVar1 != 3) {
      FWindowsPlatformProcess::Sleep(0.0);
      iVar1 = pTVar3->TaskState;
    }
    RenderAssetInstanceTask::FCreateViewWithUninitializedBounds::Sync(&pTVar3->Work);
  }
  pTVar3->TaskState = 0;
  return;
}

// SyncResults @ 1487c8130

void __thiscall FStaticRenderAssetInstanceManager::FTasks::SyncResults(FTasks *this)

{
  longlong *plVar1;
  int iVar2;
  TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *pTVar3;
  TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> *pTVar4;
  FRenderAssetInstanceState *pFVar5;
  bool bVar6;
  
  pTVar3 = (this->RefreshVisibilityTask).Reference;
  LOCK();
  bVar6 = pTVar3->TaskState == 1;
  if (bVar6) {
    pTVar3->TaskState = 2;
  }
  UNLOCK();
  if (bVar6) {
    RenderAssetInstanceTask::FRefreshVisibility::operator()(&pTVar3->Work,false);
    pTVar3->TaskState = 3;
  }
  pTVar4 = (this->NormalizeLightmapTexelFactorTask).Reference;
  LOCK();
  bVar6 = pTVar4->TaskState == 1;
  if (bVar6) {
    pTVar4->TaskState = 2;
  }
  UNLOCK();
  if (bVar6) {
    RenderAssetInstanceTask::FNormalizeLightmapTexelFactor::operator()(&pTVar4->Work,false);
    pTVar4->TaskState = 3;
  }
  pTVar3 = (this->RefreshVisibilityTask).Reference;
  if (pTVar3->TaskState != 0) {
    iVar2 = pTVar3->TaskState;
    while (iVar2 != 3) {
      FWindowsPlatformProcess::Sleep(0.0);
      iVar2 = pTVar3->TaskState;
    }
    RenderAssetInstanceTask::FRefreshVisibility::Sync(&pTVar3->Work);
  }
  pTVar3->TaskState = 0;
  pTVar4 = (this->NormalizeLightmapTexelFactorTask).Reference;
  if (pTVar4->TaskState != 0) {
    iVar2 = pTVar4->TaskState;
    while (iVar2 != 3) {
      FWindowsPlatformProcess::Sleep(0.0);
      iVar2 = pTVar4->TaskState;
    }
    pFVar5 = (pTVar4->Work).State.Reference;
    if (pFVar5 != (FRenderAssetInstanceState *)0x0) {
      (pTVar4->Work).State.Reference = (FRenderAssetInstanceState *)0x0;
      plVar1 = &pFVar5->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
  }
  pTVar4->TaskState = 0;
  return;
}

