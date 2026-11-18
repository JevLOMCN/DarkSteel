// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// ~FDoWorkTask @ 14877eba0

void __thiscall RenderAssetInstanceTask::FDoWorkTask::~FDoWorkTask(FDoWorkTask *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds>_>,int>
            ((TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds>_>
              *)(this->CreateViewWithUninitializedBoundsTasks).AllocatorInstance.Data,
             (this->CreateViewWithUninitializedBoundsTasks).ArrayNum);
  pFVar1 = (this->CreateViewWithUninitializedBoundsTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor>_>,int>
            ((TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor>_>
              *)(this->NormalizeLightmapTexelFactorTasks).AllocatorInstance.Data,
             (this->NormalizeLightmapTexelFactorTasks).ArrayNum);
  pFVar1 = (this->NormalizeLightmapTexelFactorTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility>_>,int>
            ((TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility>_>
              *)(this->RefreshVisibilityTasks).AllocatorInstance.Data,
             (this->RefreshVisibilityTasks).ArrayNum);
  pFVar1 = (this->RefreshVisibilityTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshFull>_>,int>
            ((TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshFull>_>
              *)(this->RefreshFullTasks).AllocatorInstance.Data,(this->RefreshFullTasks).ArrayNum);
  pFVar1 = (this->RefreshFullTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Add @ 1487861f0

void __thiscall
RenderAssetInstanceTask::FDoWorkTask::Add
          (FDoWorkTask *this,
          TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> *param_1)

{
  TArray<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> *local_18 [2];
  
  pTVar1 = &this->NormalizeLightmapTexelFactorTasks;
  if (param_1 != (TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> *)0x0) {
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_18[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(this->NormalizeLightmapTexelFactorTasks).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NormalizeLightmapTexelFactorTasks).ArrayNum;
  piVar2 = &(this->NormalizeLightmapTexelFactorTasks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->NormalizeLightmapTexelFactorTasks).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 8) = 0;
  *(TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> **)
   (pFVar3 + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// Add @ 1487862c0

void __thiscall
RenderAssetInstanceTask::FDoWorkTask::Add
          (FDoWorkTask *this,TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *param_1)

{
  TArray<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *local_18 [2];
  
  pTVar1 = &this->RefreshVisibilityTasks;
  if (param_1 != (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *)0x0) {
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_18[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(this->RefreshVisibilityTasks).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->RefreshVisibilityTasks).ArrayNum;
  piVar2 = &(this->RefreshVisibilityTasks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->RefreshVisibilityTasks).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 8) = 0;
  *(TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> **)(pFVar3 + (longlong)iVar6 * 8) =
       local_18[0];
  return;
}

// ProcessTasks<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds>_> @ 1488014f0

void __thiscall
RenderAssetInstanceTask::FDoWorkTask::
ProcessTasks<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds>_>
          (FDoWorkTask *this,
          TArray<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((param_1->AllocatorInstance).Data + lVar7);
      if (*(int *)(lVar1 + 8) == 1) {
        uVar4 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(param_1,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
        uVar6 = uVar6 - 1;
        lVar7 = lVar7 + -8;
      }
      else {
        LOCK();
        bVar3 = *(int *)(lVar1 + 0x40) == 1;
        if (bVar3) {
          *(int *)(lVar1 + 0x40) = 2;
        }
        UNLOCK();
        if (bVar3) {
          FCreateViewWithUninitializedBounds::operator()
                    ((FCreateViewWithUninitializedBounds *)(lVar1 + 0x10),true);
          *(undefined4 *)(lVar1 + 0x40) = 3;
        }
      }
      iVar5 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// ProcessTasks<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor>_> @ 148801640

void __thiscall
RenderAssetInstanceTask::FDoWorkTask::
ProcessTasks<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor>_>
          (FDoWorkTask *this,
          TArray<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((param_1->AllocatorInstance).Data + lVar7);
      if (*(int *)(lVar1 + 8) == 1) {
        uVar4 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(param_1,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
        uVar6 = uVar6 - 1;
        lVar7 = lVar7 + -8;
      }
      else {
        LOCK();
        bVar3 = *(int *)(lVar1 + 0x18) == 1;
        if (bVar3) {
          *(int *)(lVar1 + 0x18) = 2;
        }
        UNLOCK();
        if (bVar3) {
          FNormalizeLightmapTexelFactor::operator()
                    ((FNormalizeLightmapTexelFactor *)(lVar1 + 0x10),true);
          *(undefined4 *)(lVar1 + 0x18) = 3;
        }
      }
      iVar5 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// ProcessTasks<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshFull>_> @ 148801790

void __thiscall
RenderAssetInstanceTask::FDoWorkTask::
ProcessTasks<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshFull>_>
          (FDoWorkTask *this,
          TArray<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshFull>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((param_1->AllocatorInstance).Data + lVar7);
      if (*(int *)(lVar1 + 8) == 1) {
        uVar4 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshFull>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(param_1,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
        uVar6 = uVar6 - 1;
        lVar7 = lVar7 + -8;
      }
      else {
        LOCK();
        bVar3 = *(int *)(lVar1 + 0x50) == 1;
        if (bVar3) {
          *(int *)(lVar1 + 0x50) = 2;
        }
        UNLOCK();
        if (bVar3) {
          FRefreshFull::operator()((FRefreshFull *)(lVar1 + 0x10),true);
          *(undefined4 *)(lVar1 + 0x50) = 3;
        }
      }
      iVar5 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// ProcessTasks<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility>_> @ 1488018e0

void __thiscall
RenderAssetInstanceTask::FDoWorkTask::
ProcessTasks<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility>_>
          (FDoWorkTask *this,
          TArray<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((param_1->AllocatorInstance).Data + lVar7);
      if (*(int *)(lVar1 + 8) == 1) {
        uVar4 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(param_1,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
        uVar6 = uVar6 - 1;
        lVar7 = lVar7 + -8;
      }
      else {
        LOCK();
        bVar3 = *(int *)(lVar1 + 0x38) == 1;
        if (bVar3) {
          *(int *)(lVar1 + 0x38) = 2;
        }
        UNLOCK();
        if (bVar3) {
          FRefreshVisibility::operator()((FRefreshVisibility *)(lVar1 + 0x10),true);
          *(undefined4 *)(lVar1 + 0x38) = 3;
        }
      }
      iVar5 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// DoWork @ 148834190

void __thiscall RenderAssetInstanceTask::FDoWorkTask::DoWork(FDoWorkTask *this)

{
  TArray<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  FLLMScope local_res10 [5];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res10,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Textures,true);
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"RenderAssetInstanceTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceTask.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  if (CpuChannel->Enabled < 0) {
    FSimpleStreamableAssetManager::Process();
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId184,"FSimpleStreamableAssetManager",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceTask.cpp"
               ,0xb8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId184);
    FSimpleStreamableAssetManager::Process();
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId190,"RefreshFull",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceTask.cpp"
               ,0xbe);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId190);
  }
  iVar5 = (this->RefreshFullTasks).ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->RefreshFullTasks).AllocatorInstance.Data + lVar7);
      if (*(int *)(lVar1 + 8) == 1) {
        uVar4 = 0;
        if ((int)uVar6 < (this->RefreshFullTasks).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshFull>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(&this->RefreshFullTasks,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)this,(this->RefreshFullTasks).ArrayNum,
                   &(this->RefreshFullTasks).ArrayMax);
        uVar6 = uVar6 - 1;
        lVar7 = lVar7 + -8;
      }
      else {
        LOCK();
        bVar3 = *(int *)(lVar1 + 0x50) == 1;
        if (bVar3) {
          *(int *)(lVar1 + 0x50) = 2;
        }
        UNLOCK();
        if (bVar3) {
          FRefreshFull::operator()((FRefreshFull *)(lVar1 + 0x10),true);
          *(undefined4 *)(lVar1 + 0x50) = 3;
        }
      }
      iVar5 = (this->RefreshFullTasks).ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar5);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId194,"CreateViewWithUninitializedBounds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceTask.cpp"
               ,0xc2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId194);
  }
  iVar5 = (this->CreateViewWithUninitializedBoundsTasks).ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)
               ((this->CreateViewWithUninitializedBoundsTasks).AllocatorInstance.Data + lVar7);
      if (*(int *)(lVar1 + 8) == 1) {
        uVar4 = 0;
        if ((int)uVar6 < (this->CreateViewWithUninitializedBoundsTasks).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(&this->CreateViewWithUninitializedBoundsTasks,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->CreateViewWithUninitializedBoundsTasks).AllocatorInstance,
                   (this->CreateViewWithUninitializedBoundsTasks).ArrayNum,
                   &(this->CreateViewWithUninitializedBoundsTasks).ArrayMax);
        uVar6 = uVar6 - 1;
        lVar7 = lVar7 + -8;
      }
      else {
        LOCK();
        bVar3 = *(int *)(lVar1 + 0x40) == 1;
        if (bVar3) {
          *(int *)(lVar1 + 0x40) = 2;
        }
        UNLOCK();
        if (bVar3) {
          FCreateViewWithUninitializedBounds::operator()
                    ((FCreateViewWithUninitializedBounds *)(lVar1 + 0x10),true);
          *(undefined4 *)(lVar1 + 0x40) = 3;
        }
      }
      iVar5 = (this->CreateViewWithUninitializedBoundsTasks).ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar5);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId198,"RefreshVisibility",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceTask.cpp"
               ,0xc6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId198);
  }
  iVar5 = (this->RefreshVisibilityTasks).ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->RefreshVisibilityTasks).AllocatorInstance.Data + lVar7);
      if (*(int *)(lVar1 + 8) == 1) {
        uVar4 = 0;
        if ((int)uVar6 < (this->RefreshVisibilityTasks).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(&this->RefreshVisibilityTasks,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->RefreshVisibilityTasks).AllocatorInstance,
                   (this->RefreshVisibilityTasks).ArrayNum,&(this->RefreshVisibilityTasks).ArrayMax)
        ;
        uVar6 = uVar6 - 1;
        lVar7 = lVar7 + -8;
      }
      else {
        LOCK();
        bVar3 = *(int *)(lVar1 + 0x38) == 1;
        if (bVar3) {
          *(int *)(lVar1 + 0x38) = 2;
        }
        UNLOCK();
        if (bVar3) {
          FRefreshVisibility::operator()((FRefreshVisibility *)(lVar1 + 0x10),true);
          *(undefined4 *)(lVar1 + 0x38) = 3;
        }
      }
      iVar5 = (this->RefreshVisibilityTasks).ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar5);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId202,"NormalizeLightmapTexelFactor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceTask.cpp"
               ,0xca);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId202);
  }
  iVar5 = (this->NormalizeLightmapTexelFactorTasks).ArrayNum;
  this_00 = &this->NormalizeLightmapTexelFactorTasks;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this_00->AllocatorInstance).Data + lVar7);
      if (*(int *)(lVar1 + 8) == 1) {
        uVar4 = 0;
        if ((int)uVar6 < (this->NormalizeLightmapTexelFactorTasks).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(this_00,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&this_00->AllocatorInstance,
                   (this->NormalizeLightmapTexelFactorTasks).ArrayNum,
                   &(this->NormalizeLightmapTexelFactorTasks).ArrayMax);
        uVar6 = uVar6 - 1;
        lVar7 = lVar7 + -8;
      }
      else {
        LOCK();
        bVar3 = *(int *)(lVar1 + 0x18) == 1;
        if (bVar3) {
          *(int *)(lVar1 + 0x18) = 2;
        }
        UNLOCK();
        if (bVar3) {
          FNormalizeLightmapTexelFactor::operator()
                    ((FNormalizeLightmapTexelFactor *)(lVar1 + 0x10),true);
          *(undefined4 *)(lVar1 + 0x18) = 3;
        }
      }
      iVar5 = (this->NormalizeLightmapTexelFactorTasks).ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar5);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

