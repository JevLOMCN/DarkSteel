// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FRenderAssetInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks> @ 14877d7b0

void __thiscall
FRenderAssetInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>::
~FRenderAssetInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>
          (FRenderAssetInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks> *this)

{
  longlong *plVar1;
  TDoWorkTask<RenderAssetInstanceTask::FRefreshFull> *pTVar2;
  TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds> *pTVar3;
  FRenderAssetInstanceState *pFVar4;
  
  FDynamicRenderAssetInstanceManager::FTasks::SyncResults(&this->Tasks);
  pTVar2 = (this->Tasks).RefreshFullTask.Reference;
  if (pTVar2 != (TDoWorkTask<RenderAssetInstanceTask::FRefreshFull> *)0x0) {
    plVar1 = &pTVar2->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  pTVar3 = (this->Tasks).CreateViewTask.Reference;
  if (pTVar3 != (TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds> *)0x0) {
    plVar1 = &pTVar3->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  pFVar4 = (this->State).Reference;
  if (pFVar4 != (FRenderAssetInstanceState *)0x0) {
    plVar1 = &pFVar4->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  return;
}

// ~FRenderAssetInstanceStateTaskSync<FStaticRenderAssetInstanceManager::FTasks> @ 14877d830

void __thiscall
FRenderAssetInstanceStateTaskSync<FStaticRenderAssetInstanceManager::FTasks>::
~FRenderAssetInstanceStateTaskSync<FStaticRenderAssetInstanceManager::FTasks>
          (FRenderAssetInstanceStateTaskSync<FStaticRenderAssetInstanceManager::FTasks> *this)

{
  longlong *plVar1;
  TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> *pTVar2;
  TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *pTVar3;
  FRenderAssetInstanceState *pFVar4;
  
  FStaticRenderAssetInstanceManager::FTasks::SyncResults(&this->Tasks);
  pTVar2 = (this->Tasks).NormalizeLightmapTexelFactorTask.Reference;
  if (pTVar2 != (TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> *)0x0) {
    plVar1 = &pTVar2->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  pTVar3 = (this->Tasks).RefreshVisibilityTask.Reference;
  if (pTVar3 != (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *)0x0) {
    plVar1 = &pTVar3->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  pFVar4 = (this->State).Reference;
  if (pFVar4 != (FRenderAssetInstanceState *)0x0) {
    plVar1 = &pFVar4->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  return;
}

