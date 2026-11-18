// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 5

// FMassTestPhaseTickTask @ 1470f4d00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassTestPhaseTickTask * __thiscall
UE::Mass::Testing::FMassTestPhaseTickTask::FMassTestPhaseTickTask
          (FMassTestPhaseTickTask *this,TSharedRef<FMassProcessingPhaseManager,1> *param_1,
          EMassProcessingPhase param_2,float param_3)

{
  TSharedRef<FMassProcessingPhaseManager,1>::TSharedRef<FMassProcessingPhaseManager,1>
            (&this->PhaseManager,param_1);
  this->Phase = param_2;
  this->DeltaTime = param_3;
  return this;
}

// DoTask @ 14711cbe0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "memory_order": Some values do not have unique names */

void __thiscall
UE::Mass::Testing::FMassTestPhaseTickTask::DoTask
          (FMassTestPhaseTickTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  bool bVar1;
  uint uVar2;
  FMassProcessingPhaseManager *this_00;
  
  bVar1 = Trace::FChannel::operator_bool(CpuChannel);
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId180,"FMassTestPhaseTickTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassTestTypes.cpp"
               ,0xb4);
    uVar2 = std::_Atomic_storage<int,4>::load
                      ((_Atomic_storage<int,4> *)&__CpuProfilerEventSpecId180,memory_order_relaxed);
    FCpuProfilerTrace::OutputBeginEvent(uVar2);
  }
  this_00 = TSharedRef<FMassProcessingPhaseManager,1>::operator->(&this->PhaseManager);
  FMassProcessingPhaseManager::TriggerPhase(this_00,this->Phase,this->DeltaTime,param_2,GameThread);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetDesiredThread @ 147120180

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl UE::Mass::Testing::FMassTestPhaseTickTask::GetDesiredThread(void)

{
  return GameThread;
}

// GetStatId @ 147121d70

TStatId __cdecl UE::Mass::Testing::FMassTestPhaseTickTask::GetStatId(void)

{
  TStatIdData *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FThreadSafeStaticStat<`UE::Mass::Testing::FMassTestPhaseTickTask::GetStatId'::__l2::FStat_FMassTestPhaseTickTask>
      ::
      FThreadSafeStaticStat<_UE::Mass::Testing::FMassTestPhaseTickTask::GetStatId_::__l2::FStat_FMassTestPhaseTickTask>
                (&StatPtr_FMassTestPhaseTickTask);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FThreadSafeStaticStatInner<`UE::Mass::Testing::FMassTestPhaseTickTask::GetStatId'::__l2::FStat_FMassTestPhaseTickTask,1>
  ::GetStatId(&StatPtr_FMassTestPhaseTickTask);
  return (TStatId)in_RCX;
}

// GetSubsequentsMode @ 147121df0

Type __cdecl UE::Mass::Testing::FMassTestPhaseTickTask::GetSubsequentsMode(void)

{
  return TrackSubsequents;
}

