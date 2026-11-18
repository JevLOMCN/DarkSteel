// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetDesiredThread @ 144f11d70

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl FRenderTask::GetDesiredThread(void)

{
  code *pcVar1;
  int iVar2;
  Type TVar3;
  bool bVar4;
  Type TVar5;
  Type TVar6;
  
  TVar6 = CPrio_SceneRenderingTask.TaskPriorityIfForcedToNormalThreadPriority;
  TVar3 = CPrio_SceneRenderingTask.TaskPriority;
  TVar5 = CPrio_SceneRenderingTask.ThreadPriority;
  iVar2 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_SceneRenderingTask.ThreadPriority == HighThreadPriority) ||
      (iVar2 = ENamedThreads::bHasBackgroundThreads,
      CPrio_SceneRenderingTask.ThreadPriority == BackgroundThreadPriority)) && (iVar2 == 0)) {
    if (((CPrio_SceneRenderingTask.TaskPriorityIfForcedToNormalThreadPriority & ~HighTaskPriority)
         != MainQueue) &&
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
    if ((((CPrio_SceneRenderingTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_SceneRenderingTask.ThreadPriority & ThreadPriorityMask) == ThreadPriorityMask) ||
        ((CPrio_SceneRenderingTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
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

