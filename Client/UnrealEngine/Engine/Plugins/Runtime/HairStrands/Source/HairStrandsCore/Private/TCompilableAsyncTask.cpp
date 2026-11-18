// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// Reschedule @ 14e025fb0

void __thiscall
AsyncCompilationHelpers::TCompilableAsyncTask<FGroomBindingAsyncBuildTask>::Reschedule
          (TCompilableAsyncTask<FGroomBindingAsyncBuildTask> *this,FQueuedThreadPool *param_1,
          EQueuedWorkPriority param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)((longlong)*this + 0x20))();
  if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x48), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,lVar3);
    if (cVar2 != '\0') {
      *(FQueuedThreadPool **)(lVar3 + 0x48) = param_1;
      *(EQueuedWorkPriority *)(lVar3 + 0x50) = param_2;
      (**(code **)((longlong)*param_1 + 0x18))(param_1,lVar3,param_2);
    }
  }
  return;
}

// WaitCompletionWithTimeout @ 14e02fe80

bool __thiscall
AsyncCompilationHelpers::TCompilableAsyncTask<FGroomBindingAsyncBuildTask>::
WaitCompletionWithTimeout(TCompilableAsyncTask<FGroomBindingAsyncBuildTask> *this,float param_1)

{
  bool bVar1;
  FAsyncTaskBase *this_00;
  
  this_00 = (FAsyncTaskBase *)(**(code **)((longlong)*this + 0x20))();
  if (this_00 != (FAsyncTaskBase *)0x0) {
    bVar1 = FAsyncTaskBase::WaitCompletionWithTimeout(this_00,param_1);
    return bVar1;
  }
  return true;
}

