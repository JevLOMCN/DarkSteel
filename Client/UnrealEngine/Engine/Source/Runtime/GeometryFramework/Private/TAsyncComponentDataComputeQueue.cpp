// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 1

// ~TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData> @ 1496fa3c0

void __thiscall
TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::
~TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>
          (TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FTaskBase *this_00;
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  
  lpCriticalSection = &this->PendingJobsLock;
  this->bIsShuttingDown = true;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar7 = 0;
  if (0 < (this->PendingJobs).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->PendingJobs).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = (FTaskBase *)**(undefined8 **)((this->PendingJobs).AllocatorInstance.Data + lVar8);
      if (this_00 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::Wait(this_00);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->PendingJobs).ArrayNum);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)&this->OnComputeCompleted != 0) {
    plVar1 = *(longlong **)&(this->OnComputeCompleted).field_0x28;
    plVar6 = (longlong *)&(this->OnComputeCompleted).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  DestructItems<TUniquePtr<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob,TDefaultDelete<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob>_>,int>
            ((TUniquePtr<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob,TDefaultDelete<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob>_>
              *)(this->PendingJobs).AllocatorInstance.Data,(this->PendingJobs).ArrayNum);
  pFVar2 = (this->PendingJobs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

