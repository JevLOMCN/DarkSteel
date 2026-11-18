// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// Broadcast<IBaseDelegateInstance<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>,FMoviePipelineOutputData> @ 14dc9fbd0

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>,FMoviePipelineOutputData>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          FMoviePipelineOutputData *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  FMoviePipelineShotOutputData *pFVar4;
  FMovieGraphRenderOutputData *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FDestructionSentinel local_88;
  UMoviePipelineBase *local_70;
  UMoviePipelineExecutorJob *local_68;
  undefined1 local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_88);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  uVar11 = (this->InvocationList).ArrayNum - 1;
  bVar7 = false;
  if ((int)uVar11 < 0) {
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
  }
  else {
    lVar12 = (longlong)(int)uVar11 << 4;
    do {
      uVar10 = 0;
      if ((int)uVar11 < (this->InvocationList).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar2 + lVar12 + 8) == 0) ||
         (plVar3 = *(longlong **)(pFVar2 + lVar12), plVar3 == (longlong *)0x0)) {
LAB_14dc9fdd0:
        bVar7 = true;
      }
      else {
        local_70 = (param_1->Pipeline).field0_0x0.DebugPtr;
        pcVar6 = *(code **)(*plVar3 + 0x68);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_70 != (UMoviePipelineBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_70);
        }
        local_68 = (param_1->Job).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_68 != (UMoviePipelineExecutorJob *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_68);
        }
        iVar1 = (param_1->ShotData).ArrayNum;
        local_60 = param_1->bSuccess;
        pFVar4 = (FMoviePipelineShotOutputData *)(param_1->ShotData).AllocatorInstance.Data;
        local_58.Data = (FScriptContainerElement *)0x0;
        local_50 = iVar1;
        if (iVar1 == 0) {
          local_4c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,iVar1,0,&local_58,iVar1,&local_4c);
          ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
                    (local_58.Data,pFVar4,iVar1);
        }
        iVar1 = (param_1->GraphData).ArrayNum;
        pFVar5 = (FMovieGraphRenderOutputData *)(param_1->GraphData).AllocatorInstance.Data;
        local_48.Data = (FScriptContainerElement *)0x0;
        local_40 = iVar1;
        if (iVar1 == 0) {
          local_3c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,iVar1,0,&local_48,iVar1,&local_3c);
          ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
                    (local_48.Data,pFVar5,iVar1);
        }
        cVar9 = (*pcVar6)(plVar3);
        if (cVar9 == '\0') goto LAB_14dc9fdd0;
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
    if (bVar7) {
      CompactInvocationList(this,false);
    }
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)(param_1->GraphData).AllocatorInstance.Data,
             (param_1->GraphData).ArrayNum);
  pFVar2 = (param_1->GraphData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)(param_1->ShotData).AllocatorInstance.Data,
             (param_1->ShotData).ArrayNum);
  pFVar2 = (param_1->ShotData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

