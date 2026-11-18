// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 1

// GetDesiredThread @ 1462f64d0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl UE::Dataflow::Private::FDataflowSimulationTask::GetDesiredThread(void)

{
  code *pcVar1;
  int iVar2;
  Type TVar3;
  bool bVar4;
  Type TVar5;
  Type TVar6;
  
  iVar2 = ENamedThreads::bHasHighPriorityThreads;
  if (((CVarDataflowSimulationTaskPriority.ThreadPriority == HighThreadPriority) ||
      (iVar2 = ENamedThreads::bHasBackgroundThreads,
      CVarDataflowSimulationTaskPriority.ThreadPriority == BackgroundThreadPriority)) &&
     (iVar2 == 0)) {
    if (((CVarDataflowSimulationTaskPriority.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar4)) {
code_r0x0001462f6581:
      pcVar1 = (code *)swi(3);
      TVar5 = (*pcVar1)();
      return TVar5;
    }
  }
  else if ((((CVarDataflowSimulationTaskPriority.ThreadPriority & ~ThreadPriorityMask) != MainQueue
             || (CVarDataflowSimulationTaskPriority.ThreadPriority & ThreadPriorityMask) ==
                ThreadPriorityMask) ||
           ((CVarDataflowSimulationTaskPriority.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                              ,0xb1,L""), bVar4)) goto code_r0x0001462f6581;
  TVar6 = CVarDataflowSimulationTaskPriority.TaskPriorityIfForcedToNormalThreadPriority;
  TVar3 = CVarDataflowSimulationTaskPriority.TaskPriority;
  TVar5 = CVarDataflowSimulationTaskPriority.ThreadPriority;
  iVar2 = ENamedThreads::bHasHighPriorityThreads;
  if (((CVarDataflowSimulationTaskPriority.ThreadPriority == HighThreadPriority) ||
      (iVar2 = ENamedThreads::bHasBackgroundThreads,
      CVarDataflowSimulationTaskPriority.ThreadPriority == BackgroundThreadPriority)) &&
     (iVar2 == 0)) {
    if (((CVarDataflowSimulationTaskPriority.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
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
    if ((((CVarDataflowSimulationTaskPriority.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CVarDataflowSimulationTaskPriority.ThreadPriority & ThreadPriorityMask) ==
          ThreadPriorityMask) ||
        ((CVarDataflowSimulationTaskPriority.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
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

