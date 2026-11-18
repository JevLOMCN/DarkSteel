// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetDesiredThread @ 1481796b0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FDispatchBatchedAsyncTasks::GetDesiredThread(FDispatchBatchedAsyncTasks *this)

{
  code *pcVar1;
  int iVar2;
  Type TVar3;
  bool bVar4;
  Type TVar5;
  Type TVar6;
  
  TVar6 = CPrio_ParticleAsyncTask.TaskPriorityIfForcedToNormalThreadPriority;
  TVar3 = CPrio_ParticleAsyncTask.TaskPriority;
  TVar5 = CPrio_ParticleAsyncTask.ThreadPriority;
  iVar2 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_ParticleAsyncTask.ThreadPriority == HighThreadPriority) ||
      (iVar2 = ENamedThreads::bHasBackgroundThreads,
      CPrio_ParticleAsyncTask.ThreadPriority == BackgroundThreadPriority)) && (iVar2 == 0)) {
    if (((CPrio_ParticleAsyncTask.TaskPriorityIfForcedToNormalThreadPriority & ~HighTaskPriority) !=
         MainQueue) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      TVar5 = (*pcVar1)();
      return TVar5;
    }
  }
  else {
    if ((((CPrio_ParticleAsyncTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_ParticleAsyncTask.ThreadPriority & ThreadPriorityMask) == ThreadPriorityMask) ||
        ((CPrio_ParticleAsyncTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xb1,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      TVar5 = (*pcVar1)();
      return TVar5;
    }
    TVar6 = TVar5 | TVar3;
  }
  return TVar6 | AnyNormalThreadNormalTask;
}

