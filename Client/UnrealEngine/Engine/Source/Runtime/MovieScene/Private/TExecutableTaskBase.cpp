// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// ExecuteTask @ 1461a48d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::MovieScene::FEntitySystemScheduler::ExecuteTasks'::__l54::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UE::MovieScene::FEntitySystemScheduler::ExecuteTasks'::__l54::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1461a48f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::MovieScene::FEntitySystemScheduler::PrerequisiteCompleted'::__l40::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  undefined1 local_res8;
  
  MovieScene::FScheduledTask::Run
            (*(FScheduledTask **)((longlong)this + 0xe0),
             *(FEntitySystemScheduler **)((longlong)this + 0xd8),
             (FTaskExecutionFlags)(local_res8 | 1));
  return;
}

