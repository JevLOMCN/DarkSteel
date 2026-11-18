// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds> @ 14877d8b0

void __thiscall
RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds>::
~TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds>
          (TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds> *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDoWorkTask_VFCreateViewWithUninitializedBounds_RenderAssetInstanceTask___RenderAssetInstanceTask__6B_
  ;
  FCreateViewWithUninitializedBounds::~FCreateViewWithUninitializedBounds(&this->Work);
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> @ 14877d910

void __thiscall
RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor>::
~TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor>
          (TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> *this)

{
  longlong *plVar1;
  FRenderAssetInstanceState *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDoWorkTask_VFNormalizeLightmapTexelFactor_RenderAssetInstanceTask___RenderAssetInstanceTask__6B_
  ;
  pFVar2 = (this->Work).State.Reference;
  if (pFVar2 != (FRenderAssetInstanceState *)0x0) {
    plVar1 = &pFVar2->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ~TDoWorkTask<RenderAssetInstanceTask::FRefreshFull> @ 14877d980

void __thiscall
RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshFull>::
~TDoWorkTask<RenderAssetInstanceTask::FRefreshFull>
          (TDoWorkTask<RenderAssetInstanceTask::FRefreshFull> *this)

{
  longlong *plVar1;
  FRenderAssetInstanceState *pFVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  
  this->_padding_ =
       (longlong)
       &___7__TDoWorkTask_VFRefreshFull_RenderAssetInstanceTask___RenderAssetInstanceTask__6B_;
  pFVar2 = (this->Work).State.Reference;
  if (pFVar2 != (FRenderAssetInstanceState *)0x0) {
    plVar1 = &pFVar2->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->Work).SkippedIndices.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Work);
  pvVar4 = *(void **)&(this->Work).OnWorkDoneDelegate.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Work);
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// ~TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> @ 14877da30

void __thiscall
RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility>::
~TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility>
          (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *this)

{
  longlong *plVar1;
  FRenderAssetInstanceState *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  this->_padding_ =
       (longlong)
       &___7__TDoWorkTask_VFRefreshVisibility_RenderAssetInstanceTask___RenderAssetInstanceTask__6B_
  ;
  pFVar2 = (this->Work).State.Reference;
  if (pFVar2 != (FRenderAssetInstanceState *)0x0) {
    plVar1 = &pFVar2->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Work);
  pvVar3 = *(void **)&(this->Work).OnWorkDoneDelegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Work);
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

