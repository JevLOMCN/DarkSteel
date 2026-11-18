// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 181

// FeatureName'' @ 14116a4e0

void __cdecl `dynamic_initializer_for_'IMotionController::FeatureName__(void)

{
  ::FName::FName(&IMotionController::FeatureName,L"MotionController");
  return;
}

// GGameThreadMallocChurnTracker'' @ 14116a500

void __cdecl
`dynamic_initializer_for_'FScopedSampleMallocChurn::GGameThreadMallocChurnTracker__(void)

{
  FStackTracker::FStackTracker
            (&FScopedSampleMallocChurn::GGameThreadMallocChurnTracker,
             (_func___cdecl_void_FCallStack_ptr_void_ptr *)0x0,
             (_func___cdecl_void_FCallStack_ptr_ulong64_FOutputDevice_ptr *)0x0,
             (_func___cdecl_void_void_ptr *)0x0,false);
  atexit(`dynamic_atexit_destructor_for_'FScopedSampleMallocChurn::GGameThreadMallocChurnTracker__);
  return;
}

// `dynamic_initializer_for_'Approved'' @ 14116a540

void __cdecl ComparisonFileTypes::_dynamic_initializer_for__Approved__(void)

{
  ::FString::FString(&Approved,L"approved");
  atexit(_dynamic_atexit_destructor_for__Approved__);
  return;
}

// `dynamic_initializer_for_'CPrio_AsyncEndOfFrameGameTasks'' @ 14116a570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CPrio_AsyncEndOfFrameGameTasks__(void)

{
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (&CPrio_AsyncEndOfFrameGameTasks,L"TaskGraph.TaskPriorities.AsyncEndOfFrameGameTasks",
             L"Task and thread priority for the experiemntal async end of frame tasks.",
             HighThreadPriority,MainQueue,HighTaskPriority);
  atexit(_dynamic_atexit_destructor_for__CPrio_AsyncEndOfFrameGameTasks__);
  return;
}

// `dynamic_initializer_for_'CVarDoAsyncEndOfFrameTasksRandomize'' @ 14116a5c0

void __cdecl _dynamic_initializer_for__CVarDoAsyncEndOfFrameTasksRandomize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDoAsyncEndOfFrameTasksRandomize,L"tick.DoAsyncEndOfFrameTasks.Randomize",
             local_res8,
             L"Used to add random sleeps to tick.DoAsyncEndOfFrameTasks to shake loose bugs on either thread. Also does random render thread flushes from the game thread."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDoAsyncEndOfFrameTasksRandomize__);
  return;
}

// `dynamic_initializer_for_'CVarDoAsyncEndOfFrameTasksValidateReplicatedProperties'' @ 14116a610

void __cdecl
_dynamic_initializer_for__CVarDoAsyncEndOfFrameTasksValidateReplicatedProperties__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDoAsyncEndOfFrameTasksValidateReplicatedProperties,
             L"tick.DoAsyncEndOfFrameTasks.ValidateReplicatedProperties",local_res8,
             L"If true, validates that replicated properties haven\'t changed during the Slate tick. Results will not be valid if demo.ClientRecordAsyncEndOfFrame is also enabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDoAsyncEndOfFrameTasksValidateReplicatedProperties__);
  return;
}

// `dynamic_initializer_for_'CVarLogCategory'' @ 14116a660

void __cdecl _dynamic_initializer_for__CVarLogCategory__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogCategory,L"log.Category",local_res8,
             L"Defines if the categoy is included in each line in the log file and in what form.\n  0 = Do not log category\n  2 = Log the category (default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogCategory__);
  return;
}

// `dynamic_initializer_for_'CVarLogGameThreadMallocChurn'' @ 14116a6b0

void __cdecl _dynamic_initializer_for__CVarLogGameThreadMallocChurn__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogGameThreadMallocChurn,L"LogGameThreadMallocChurn.Enable",local_res8,
             L"If > 0, then collect sample game thread malloc, realloc and free, periodically print a report of the worst offenders."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogGameThreadMallocChurn__);
  return;
}

// `dynamic_initializer_for_'CVarLogGameThreadMallocChurn_PrintFrequency'' @ 14116a700

void __cdecl _dynamic_initializer_for__CVarLogGameThreadMallocChurn_PrintFrequency__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 300;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogGameThreadMallocChurn_PrintFrequency,L"LogGameThreadMallocChurn.PrintFrequency"
             ,local_res8,L"Number of frames between churn reports.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogGameThreadMallocChurn_PrintFrequency__);
  return;
}

// `dynamic_initializer_for_'CVarLogGameThreadMallocChurn_RemoveAliases'' @ 14116a750

void __cdecl _dynamic_initializer_for__CVarLogGameThreadMallocChurn_RemoveAliases__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogGameThreadMallocChurn_RemoveAliases,L"LogGameThreadMallocChurn.RemoveAliases",
             local_res8,
             L"If > 0 then remove aliases from the counting process. This essentialy merges addresses that have the same human readable string. It is slower."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogGameThreadMallocChurn_RemoveAliases__);
  return;
}

// `dynamic_initializer_for_'CVarLogGameThreadMallocChurn_SampleFrequency'' @ 14116a7a0

void __cdecl _dynamic_initializer_for__CVarLogGameThreadMallocChurn_SampleFrequency__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 100;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogGameThreadMallocChurn_SampleFrequency,
             L"LogGameThreadMallocChurn.SampleFrequency",local_res8,
             L"Number of allocs to skip between samples. This is used to prevent churn sampling from slowing the game down too much."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogGameThreadMallocChurn_SampleFrequency__);
  return;
}

// `dynamic_initializer_for_'CVarLogGameThreadMallocChurn_StackIgnore'' @ 14116a7f0

void __cdecl _dynamic_initializer_for__CVarLogGameThreadMallocChurn_StackIgnore__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogGameThreadMallocChurn_StackIgnore,L"LogGameThreadMallocChurn.StackIgnore",
             local_res8,L"Number of items to discard from the top of a stack frame.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogGameThreadMallocChurn_StackIgnore__);
  return;
}

// `dynamic_initializer_for_'CVarLogGameThreadMallocChurn_StackLen'' @ 14116a840

void __cdecl _dynamic_initializer_for__CVarLogGameThreadMallocChurn_StackLen__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 3;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogGameThreadMallocChurn_StackLen,L"LogGameThreadMallocChurn.StackLen",local_res8,
             L"Maximum number of stack frame items to keep. This improves aggregation because calls that originate from multiple places but end up in the same place will be accounted together."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogGameThreadMallocChurn_StackLen__);
  return;
}

// `dynamic_initializer_for_'CVarLogGameThreadMallocChurn_Threshhold'' @ 14116a890

void __cdecl _dynamic_initializer_for__CVarLogGameThreadMallocChurn_Threshhold__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 10;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogGameThreadMallocChurn_Threshhold,L"LogGameThreadMallocChurn.Threshhold",
             local_res8,L"Minimum average number of allocs per frame to include in the report.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogGameThreadMallocChurn_Threshhold__);
  return;
}

// `dynamic_initializer_for_'CVarLogSink'' @ 14116a8e0

void __cdecl _dynamic_initializer_for__CVarLogSink__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = CVarLogSinkFunction;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  CVarLogSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  CVarLogSink.Command = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58;
  CVarLogSink.Handle.Handle.ID = (FDelegateHandle)0;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  puVar5 = (ulong64 *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x60))
                     (IConsoleManager::Singleton,local_res8);
  CVarLogSink.Handle.Handle.ID = (FDelegateHandle)*puVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  atexit(_dynamic_atexit_destructor_for__CVarLogSink__);
  return;
}

// `dynamic_initializer_for_'CVarLogTimestamp'' @ 14116aa70

void __cdecl _dynamic_initializer_for__CVarLogTimestamp__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogTimestamp,L"log.Timestamp",local_res8,
             L"Defines if time is included in each line in the log file and in what form. Layout: [time][frame mod 1000]\n  0 = Do not display log timestamps\n  1 = Log time stamps in UTC and frame time (default) e.g. [2015.11.25-21.28.50:803][376]\n  2 = Log timestamps in seconds elapsed since GStartTime e.g. [0130.29][420]  3 = Log timestamps in local time and frame time e.g. [2017.08.04-17.59.50:803][420]  4 = Log timestamps with the engine\'s timecode and frame time e.g. [17:59:50:18][420]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogTimestamp__);
  return;
}

// `dynamic_initializer_for_'CVarSecondsBeforeEmbeddedAppSleeps'' @ 14116aac0

void __cdecl _dynamic_initializer_for__CVarSecondsBeforeEmbeddedAppSleeps__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSecondsBeforeEmbeddedAppSleeps,L"tick.SecondsBeforeEmbeddedAppSleeps",local_res8,
             L"When built as embedded, how many ticks to perform before sleeping",0);
  atexit(_dynamic_atexit_destructor_for__CVarSecondsBeforeEmbeddedAppSleeps__);
  return;
}

// `dynamic_initializer_for_'CoreDelegatesColor'' @ 14116ab10

void __cdecl _dynamic_initializer_for__CoreDelegatesColor__(void)

{
  CoreDelegatesColor = FColor::Cyan;
  return;
}

// `dynamic_initializer_for_'Difference'' @ 14116ab30

void __cdecl ComparisonFileTypes::_dynamic_initializer_for__Difference__(void)

{
  ::FString::FString(&Difference,L"difference");
  atexit(_dynamic_atexit_destructor_for__Difference__);
  return;
}

// `dynamic_initializer_for_'FileInPakFileHistoryHelper'' @ 14116ab60

void __cdecl _dynamic_initializer_for__FileInPakFileHistoryHelper__(void)

{
  atexit(_dynamic_atexit_destructor_for__FileInPakFileHistoryHelper__);
  return;
}

// `dynamic_initializer_for_'FrameColor'' @ 14116ab80

void __cdecl _dynamic_initializer_for__FrameColor__(void)

{
  FrameColor = FColor::Red;
  return;
}

// `dynamic_initializer_for_'GEngineLoop'' @ 14116aba0

void __cdecl _dynamic_initializer_for__GEngineLoop__(void)

{
  atexit(_dynamic_atexit_destructor_for__GEngineLoop__);
  return;
}

// `dynamic_initializer_for_'GRHIFrameBreadcrumb'' @ 14116abc0

void __cdecl _dynamic_initializer_for__GRHIFrameBreadcrumb__(void)

{
  atexit(_dynamic_atexit_destructor_for__GRHIFrameBreadcrumb__);
  return;
}

// `dynamic_initializer_for_'GSavedCommandLine'' @ 14116abe0

void __cdecl _dynamic_initializer_for__GSavedCommandLine__(void)

{
  atexit(_dynamic_atexit_destructor_for__GSavedCommandLine__);
  return;
}

// `dynamic_initializer_for_'GScopedLogConsole'' @ 14116ac00

void __cdecl _dynamic_initializer_for__GScopedLogConsole__(void)

{
  atexit(_dynamic_atexit_destructor_for__GScopedLogConsole__);
  return;
}

// `dynamic_initializer_for_'GScopedStdOut'' @ 14116ac20

void __cdecl _dynamic_initializer_for__GScopedStdOut__(void)

{
  atexit(_dynamic_atexit_destructor_for__GScopedStdOut__);
  return;
}

// `dynamic_initializer_for_'GScopedTestExit'' @ 14116ac40

void __cdecl _dynamic_initializer_for__GScopedTestExit__(void)

{
  atexit(_dynamic_atexit_destructor_for__GScopedTestExit__);
  return;
}

// `dynamic_initializer_for_'LogLaunchWindows'' @ 14116ac60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLaunchWindows__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLaunchWindows,L"LogLaunchWindows",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLaunchWindows__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantLaunch'' @ 14116aca0

void __cdecl _dynamic_initializer_for__ModuleRegistrantLaunch__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Launch";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Launch",6);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'OriginalProjectModuleName'' @ 14116acf0

void __cdecl _dynamic_initializer_for__OriginalProjectModuleName__(void)

{
  atexit(_dynamic_atexit_destructor_for__OriginalProjectModuleName__);
  return;
}

// `dynamic_initializer_for_'ReplacementProjectModuleName'' @ 14116ad10

void __cdecl _dynamic_initializer_for__ReplacementProjectModuleName__(void)

{
  atexit(_dynamic_atexit_destructor_for__ReplacementProjectModuleName__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FEngineLoop_PreInitPostStartupScreen_AfterStats'' @ 14116ad30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FEngineLoop_PreInitPostStartupScreen_AfterStats__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FEngineLoop_PreInitPostStartupScreen_AfterStats ==
      (FThreadSafeStaticStat<FStat_STAT_FEngineLoop_PreInitPostStartupScreen_AfterStats>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FEngineLoop_PreInitPostStartupScreen_AfterStats");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FEngineLoop_PreInitPostStartupScreen_AfterStats,*pFVar1,
               L"FEngineLoop::PreInitPostStartupScreen.AfterStats","STATGROUP_LoadTime",
               "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FEngineLoop_PreInitPreStartupScreen_AfterStats'' @ 14116adc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FEngineLoop_PreInitPreStartupScreen_AfterStats__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FEngineLoop_PreInitPreStartupScreen_AfterStats ==
      (FThreadSafeStaticStat<FStat_STAT_FEngineLoop_PreInitPreStartupScreen_AfterStats>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FEngineLoop_PreInitPreStartupScreen_AfterStats");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FEngineLoop_PreInitPreStartupScreen_AfterStats,*pFVar1,
               L"FEngineLoop::PreInitPreStartupScreen.AfterStats","STATGROUP_LoadTime",
               "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'SystemColor'' @ 14116ae50

void __cdecl _dynamic_initializer_for__SystemColor__(void)

{
  SystemColor = FColor::Orange;
  return;
}

// `dynamic_initializer_for_'Unapproved'' @ 14116ae70

void __cdecl ComparisonFileTypes::_dynamic_initializer_for__Unapproved__(void)

{
  ::FString::FString(&Unapproved,L"unapproved");
  atexit(_dynamic_atexit_destructor_for__Unapproved__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_GPUUsage'' @ 14116aea0

void __cdecl _dynamic_initializer_for___GCsvCategory_GPUUsage__(void)

{
  FString::operator=(&_GCsvCategory_GPUUsage.Name,L"GPUUsage");
  _GCsvCategory_GPUUsage.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_GPUUsage.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_GPUUsage__);
  return;
}

// `scalar_deleting_destructor' @ 148d981c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall FEngineLoop::_scalar_deleting_destructor_(FEngineLoop *this,uint param_1)

{
  ~FEngineLoop(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// atomic<FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*><FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*,0> @ 148d985f0

atomic<FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*> * __thiscall
std::atomic<FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*>::
atomic<FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*><FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*,0>
          (atomic<FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*> *this)

{
  *this = (atomic<FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*>)0x0;
  return this;
}

// AddLambda<`FEngineLoop::PreInitPostStartupScreen'::__l34::<lambda_2>_> @ 148d98ab0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
AddLambda<_FEngineLoop::PreInitPostStartupScreen_::__l34::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *this,
          <lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FEngineLoop::PreInitPostStartupScreen'::`34'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// CastChecked<UCommandlet,UObject> @ 148d992a0

UCommandlet * __cdecl CastChecked<UCommandlet,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UCommandlet>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UCommandlet_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UCommandlet *)param_1;
  }
  pFVar3 = GetTypeName<UCommandlet>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructAndHoldImpl<`FEngineLoop::Tick'::__l127::<lambda_4>,FEvent_*_&> @ 148d99360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TGraphTask<FExecuteConcurrentWithSlateTickTask> * __thiscall
TGraphTask<FExecuteConcurrentWithSlateTickTask>::FConstructor::
ConstructAndHoldImpl<_FEngineLoop::Tick_::__l127::<lambda_4>,FEvent_*_&>
          (FConstructor *this,<lambda_4> *param_1,FEvent **param_2)

{
  FEvent *pFVar1;
  code *pcVar2;
  int iVar3;
  Type TVar4;
  Type TVar5;
  bool bVar6;
  TGraphTask<FExecuteConcurrentWithSlateTickTask> *pTVar7;
  undefined ***pppuVar8;
  Type TVar9;
  EExtendedTaskPriority local_res18 [8];
  ETaskPriority local_res20 [8];
  undefined **local_38;
  UDemoNetDriver *local_30;
  undefined8 uStack_28;
  undefined ***local_20;
  
  pTVar7 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
  if (pTVar7 == (TGraphTask<FExecuteConcurrentWithSlateTickTask> *)0x0) {
    pTVar7 = (TGraphTask<FExecuteConcurrentWithSlateTickTask> *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pTVar7,this->Prerequisites);
    pTVar7->_padding_ = (longlong)&___7__TGraphTask_VFExecuteConcurrentWithSlateTickTask____6B_;
  }
  local_30 = param_1->CurrentDemoNetDriver;
  uStack_28 = *(undefined8 *)&param_1->DeltaSeconds;
  pFVar1 = *param_2;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FEngineLoop::Tick'::`127'::<lambda_4>,0,0>::_vftable_;
  local_20 = (undefined ***)0x0;
  *(code **)(pTVar7->TaskStorage).Pad =
       UE::Core::Private::Function::TFunctionRefCaller<`FEngineLoop::Tick'::__l127::<lambda_4>,void>
       ::Call;
  (pTVar7->TaskStorage).Pad[0x28] = '\0';
  (pTVar7->TaskStorage).Pad[0x29] = '\0';
  (pTVar7->TaskStorage).Pad[0x2a] = '\0';
  (pTVar7->TaskStorage).Pad[0x2b] = '\0';
  (pTVar7->TaskStorage).Pad[0x2c] = '\0';
  (pTVar7->TaskStorage).Pad[0x2d] = '\0';
  (pTVar7->TaskStorage).Pad[0x2e] = '\0';
  (pTVar7->TaskStorage).Pad[0x2f] = '\0';
  UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l127::<lambda_4>,0,0>::
  CloneToEmptyStorage(&local_38,(FFunctionStorage *)((pTVar7->TaskStorage).Pad + 0x10));
  *(FEvent **)((pTVar7->TaskStorage).Pad + 0x30) = pFVar1;
  if ((pFVar1 == (FEvent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompleteEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                         ,0x16f,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TGraphTask<FExecuteConcurrentWithSlateTickTask> *)(*pcVar2)();
    return pTVar7;
  }
  pppuVar8 = &local_38;
  if (local_20 != (undefined ***)0x0) {
    pppuVar8 = local_20;
  }
  (*(code *)(*pppuVar8)[2])();
  TVar9 = CPrio_AsyncEndOfFrameGameTasks.TaskPriorityIfForcedToNormalThreadPriority;
  TVar5 = CPrio_AsyncEndOfFrameGameTasks.TaskPriority;
  TVar4 = CPrio_AsyncEndOfFrameGameTasks.ThreadPriority;
  iVar3 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_AsyncEndOfFrameGameTasks.ThreadPriority == HighThreadPriority) ||
      (iVar3 = ENamedThreads::bHasBackgroundThreads,
      CPrio_AsyncEndOfFrameGameTasks.ThreadPriority == BackgroundThreadPriority)) && (iVar3 == 0)) {
    if (((CPrio_AsyncEndOfFrameGameTasks.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TGraphTask<FExecuteConcurrentWithSlateTickTask> *)(*pcVar2)();
      return pTVar7;
    }
  }
  else {
    if ((((CPrio_AsyncEndOfFrameGameTasks.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_AsyncEndOfFrameGameTasks.ThreadPriority & ThreadPriorityMask) == ThreadPriorityMask
         ) || ((CPrio_AsyncEndOfFrameGameTasks.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xb1,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TGraphTask<FExecuteConcurrentWithSlateTickTask> *)(*pcVar2)();
      return pTVar7;
    }
    TVar9 = TVar4 | TVar5;
  }
  UE::Tasks::Private::TranslatePriority(TVar9 | AnyNormalThreadNormalTask,local_res20,local_res18);
  UE::Tasks::Private::FTaskBase::Init
            ((FTaskBase *)pTVar7,L"GraphTask",local_res20[0],local_res18[0],None);
  return pTVar7;
}

// DestructItems<FDemoSavedRepObjectState,int> @ 148d99580

void __cdecl
DestructItems<FDemoSavedRepObjectState,int>(FDemoSavedRepObjectState *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FDemoSavedRepObjectState::~FDemoSavedRepObjectState(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`FEngineLoop::Tick'::__l51::TSTR_BeginFrame5695>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148d99850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FEngineLoop::Tick_::__l51::TSTR_BeginFrame5695>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FEngineLoop::Tick'::__l51::TSTR_BeginFrame5695>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148d999a1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148d99b95;
  }
LAB_148d999a1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148d99a7f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148d99a7f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148d99b95:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FEngineLoop::Tick'::__l222::TSTR_EndFrame6138>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148d99bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FEngineLoop::Tick_::__l222::TSTR_EndFrame6138>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FEngineLoop::Tick'::__l222::TSTR_EndFrame6138>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148d99d21;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148d99f15;
  }
LAB_148d99d21:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148d99dff:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148d99dff;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148d99f15:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FEngineLoop::Tick'::__l206::TSTR_FScene_EndFrame6030>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148d99f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FEngineLoop::Tick_::__l206::TSTR_FScene_EndFrame6030>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FEngineLoop::Tick'::__l206::TSTR_FScene_EndFrame6030>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148d9a0a1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148d9a295;
  }
LAB_148d9a0a1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148d9a17f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148d9a17f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148d9a295:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FEngineLoop::Tick'::__l55::TSTR_FScene_StartFrame5702>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148d9a2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FEngineLoop::Tick_::__l55::TSTR_FScene_StartFrame5702>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FEngineLoop::Tick'::__l55::TSTR_FScene_StartFrame5702>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148d9a421;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148d9a615;
  }
LAB_148d9a421:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148d9a4ff:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148d9a4ff;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148d9a615:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FEngineLoop::Tick'::__l61::TSTR_FrameCounter6108>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148d9a650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FEngineLoop::Tick_::__l61::TSTR_FrameCounter6108>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FEngineLoop::Tick'::__l61::TSTR_FrameCounter6108>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148d9a7a1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148d9a995;
  }
LAB_148d9a7a1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148d9a87f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148d9a87f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148d9a995:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FEngineLoop::PostInitRHI'::__l7::TSTR_InitializeSystemTextures7039>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148d9a9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FEngineLoop::PostInitRHI_::__l7::TSTR_InitializeSystemTextures7039>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FEngineLoop::PostInitRHI'::__l7::TSTR_InitializeSystemTextures7039>::
            Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148d9ab21;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148d9ad15;
  }
LAB_148d9ab21:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148d9abff:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148d9abff;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148d9ad15:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FEngineLoop::Tick'::__l61::TSTR_ResetDeferredUpdates5746>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148d9ad50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FEngineLoop::Tick_::__l61::TSTR_ResetDeferredUpdates5746>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FEngineLoop::Tick'::__l61::TSTR_ResetDeferredUpdates5746>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148d9aea1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148d9b095;
  }
LAB_148d9aea1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148d9af7f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148d9af7f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148d9b095:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetTypeName<UCommandlet> @ 148d9b1c0

FString * __cdecl GetTypeName<UCommandlet>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UCommandlet_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>::FElementCompareClass<`FFileInPakFileHistoryHelper::DumpHistory'::__l2::<lambda_1>_>_>_> @ 148d9b200

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>::FElementCompareClass<_FFileInPakFileHistoryHelper::DumpHistory_::__l2::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)_::_2_::<lambda_1>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar2;
  undefined8 uVar3;
  code *pcVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar22;
  int iVar23;
  
  if (param_2 < 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar17 = (param_2 + -2) / 2;
  iVar18 = iVar17 * 2 + 1;
  iVar23 = iVar18;
  iVar20 = iVar17;
  do {
    while (param_2 <= iVar18) {
LAB_148d9b357:
      if (iVar20 == 0) {
        iVar18 = param_2 + -1;
        lVar21 = (longlong)iVar18;
        if (0 < iVar18) {
          pTVar22 = param_1 + lVar21;
          do {
            uVar7 = *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 8);
            iVar23 = 0;
            uVar3 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            TVar5 = param_1->_s_1;
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar10 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar22->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar7;
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x20);
            pTVar22->_s_1 = TVar5;
            *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 8) = uVar8;
            *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x10) = uVar9;
            *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x18) = uVar10;
            *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x20) = uVar3;
            if (1 < iVar18) {
              do {
                iVar20 = iVar23 * 2;
                iVar17 = iVar20 + 1;
                if (iVar20 + 2 < iVar18) {
                  bVar16 = `FFileInPakFileHistoryHelper::DumpHistory'::__l2::<lambda_1>::operator()
                                     (((param_4.Predicate)->Predicate).Predicate,
                                      (FFileInPakFileHistory *)&param_1[iVar20 + 2].ElementData,
                                      (FFileInPakFileHistory *)&param_1[iVar17].ElementData);
                  if (bVar16) {
                    iVar17 = iVar20;
                  }
                  iVar17 = iVar17 + 1;
                }
                pTVar1 = param_1 + iVar17;
                pTVar2 = param_1 + iVar23;
                bVar16 = `FFileInPakFileHistoryHelper::DumpHistory'::__l2::<lambda_1>::operator()
                                   (((param_4.Predicate)->Predicate).Predicate,
                                    (FFileInPakFileHistory *)&pTVar2->ElementData,
                                    (FFileInPakFileHistory *)&pTVar1->ElementData);
                if (!bVar16) break;
                iVar23 = *(int *)((uchar *)pTVar1 + 8);
                iVar20 = *(int *)((uchar *)pTVar1 + 0xc);
                TVar5 = pTVar2->_s_1;
                iVar19 = *(int *)((uchar *)pTVar2 + 8);
                iVar11 = *(int *)((uchar *)pTVar2 + 0xc);
                pFVar6 = ((FString *)(pTVar2->ElementData).Pad)[1].Data.AllocatorInstance.Data;
                iVar12 = *(int *)((uchar *)pTVar2 + 0x18);
                iVar13 = *(int *)((uchar *)pTVar2 + 0x1c);
                uVar3 = *(undefined8 *)((FString *)(pTVar2->ElementData).Pad + 2);
                pTVar2->_s_1 = pTVar1->_s_1;
                *(int *)((uchar *)pTVar2 + 8) = iVar23;
                *(int *)((uchar *)pTVar2 + 0xc) = iVar20;
                iVar23 = *(int *)((uchar *)pTVar1 + 0x18);
                iVar20 = *(int *)((uchar *)pTVar1 + 0x1c);
                ((FString *)(pTVar2->ElementData).Pad)[1].Data.AllocatorInstance.Data =
                     ((FString *)(pTVar1->ElementData).Pad)[1].Data.AllocatorInstance.Data;
                *(int *)((uchar *)pTVar2 + 0x18) = iVar23;
                *(int *)((uchar *)pTVar2 + 0x1c) = iVar20;
                *(undefined8 *)((FString *)(pTVar2->ElementData).Pad + 2) =
                     *(undefined8 *)((FString *)(pTVar1->ElementData).Pad + 2);
                pTVar1->_s_1 = TVar5;
                *(int *)((uchar *)pTVar1 + 8) = iVar19;
                *(int *)((uchar *)pTVar1 + 0xc) = iVar11;
                ((FString *)(pTVar1->ElementData).Pad)[1].Data.AllocatorInstance.Data = pFVar6;
                *(int *)((uchar *)pTVar1 + 0x18) = iVar12;
                *(int *)((uchar *)pTVar1 + 0x1c) = iVar13;
                *(undefined8 *)((FString *)(pTVar1->ElementData).Pad + 2) = uVar3;
                iVar23 = iVar17;
              } while (iVar17 * 2 + 1 < iVar18);
            }
            iVar18 = iVar18 + -1;
            lVar21 = lVar21 + -1;
            pTVar22 = pTVar22 + -1;
          } while (0 < lVar21);
        }
        return;
      }
      iVar17 = iVar20 + -1;
      iVar18 = iVar23 + -2;
      iVar23 = iVar18;
      iVar20 = iVar17;
    }
    iVar18 = iVar17 * 2;
    iVar19 = iVar18 + 1;
    if (iVar18 + 2 < param_2) {
      bVar16 = `FFileInPakFileHistoryHelper::DumpHistory'::__l2::<lambda_1>::operator()
                         (((param_4.Predicate)->Predicate).Predicate,
                          (FFileInPakFileHistory *)&param_1[iVar18 + 2].ElementData,
                          (FFileInPakFileHistory *)&param_1[iVar19].ElementData);
      if (bVar16) {
        iVar19 = iVar18;
      }
      iVar19 = iVar19 + 1;
    }
    pTVar22 = param_1 + iVar19;
    pTVar1 = param_1 + iVar17;
    bVar16 = `FFileInPakFileHistoryHelper::DumpHistory'::__l2::<lambda_1>::operator()
                       (((param_4.Predicate)->Predicate).Predicate,
                        (FFileInPakFileHistory *)&pTVar1->ElementData,
                        (FFileInPakFileHistory *)&pTVar22->ElementData);
    if (!bVar16) goto LAB_148d9b357;
    iVar17 = *(int *)((uchar *)pTVar22 + 8);
    iVar11 = *(int *)((uchar *)pTVar22 + 0xc);
    iVar18 = iVar19 * 2 + 1;
    uVar3 = *(undefined8 *)((FString *)(pTVar1->ElementData).Pad + 2);
    TVar5 = pTVar1->_s_1;
    iVar12 = *(int *)((uchar *)pTVar1 + 8);
    iVar13 = *(int *)((uchar *)pTVar1 + 0xc);
    pFVar6 = ((FString *)(pTVar1->ElementData).Pad)[1].Data.AllocatorInstance.Data;
    iVar14 = *(int *)((uchar *)pTVar1 + 0x18);
    iVar15 = *(int *)((uchar *)pTVar1 + 0x1c);
    pTVar1->_s_1 = pTVar22->_s_1;
    *(int *)((uchar *)pTVar1 + 8) = iVar17;
    *(int *)((uchar *)pTVar1 + 0xc) = iVar11;
    iVar17 = *(int *)((uchar *)pTVar22 + 0x18);
    iVar11 = *(int *)((uchar *)pTVar22 + 0x1c);
    ((FString *)(pTVar1->ElementData).Pad)[1].Data.AllocatorInstance.Data =
         ((FString *)(pTVar22->ElementData).Pad)[1].Data.AllocatorInstance.Data;
    *(int *)((uchar *)pTVar1 + 0x18) = iVar17;
    *(int *)((uchar *)pTVar1 + 0x1c) = iVar11;
    *(undefined8 *)((FString *)(pTVar1->ElementData).Pad + 2) =
         *(undefined8 *)((FString *)(pTVar22->ElementData).Pad + 2);
    pTVar22->_s_1 = TVar5;
    *(int *)((uchar *)pTVar22 + 8) = iVar12;
    *(int *)((uchar *)pTVar22 + 0xc) = iVar13;
    ((FString *)(pTVar22->ElementData).Pad)[1].Data.AllocatorInstance.Data = pFVar6;
    *(int *)((uchar *)pTVar22 + 0x18) = iVar14;
    *(int *)((uchar *)pTVar22 + 0x1c) = iVar15;
    *(undefined8 *)((FString *)(pTVar22->ElementData).Pad + 2) = uVar3;
    iVar17 = iVar19;
  } while( true );
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>::FElementCompareClass<`FFileInPakFileHistoryHelper::DumpHistory'::__l2::<lambda_1>_>_>_> @ 148d9b4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>::FElementCompareClass<_FFileInPakFileHistoryHelper::DumpHistory_::__l2::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)_::_2_::<lambda_1>_>_>
          param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  longlong lVar14;
  int iVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> **ppTVar19;
  int iVar20;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar21;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar22;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar23;
  float fVar24;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar24 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar24;
    memset(local_330,0,0x2e8);
    ppTVar19 = &local_348;
    do {
      pTVar23 = ppTVar19[1];
      pTVar22 = *ppTVar19;
      local_358 = ppTVar19[2];
      iVar15 = (int)(((longlong)pTVar23 - (longlong)pTVar22) / 0x28) + 1;
      pTVar21 = pTVar22;
      iVar20 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148d9b5a0:
        if (8 < iVar15) {
          uVar4 = *(undefined8 *)((pTVar21->ElementData).Pad + 8);
          pTVar16 = pTVar23 + 1;
          lVar14 = (longlong)(iVar15 / 2);
          TVar5 = pTVar21[lVar14]._s_1;
          uVar6 = *(undefined8 *)((longlong)pTVar21[lVar14].ElementData.Pad + 8);
          puVar1 = (undefined8 *)((longlong)pTVar21 + lVar14 * 0x28 + 0x10);
          uVar7 = *puVar1;
          uVar8 = puVar1[1];
          uVar2 = *(undefined8 *)((longlong)pTVar21 + lVar14 * 0x28 + 0x20);
          pTVar21[lVar14]._s_1 = pTVar21->_s_1;
          *(undefined8 *)((longlong)pTVar21[lVar14].ElementData.Pad + 8) = uVar4;
          uVar4 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x18);
          puVar1 = (undefined8 *)((longlong)pTVar21 + lVar14 * 0x28 + 0x10);
          *puVar1 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x10);
          puVar1[1] = uVar4;
          *(undefined8 *)((longlong)pTVar21 + lVar14 * 0x28 + 0x20) =
               *(undefined8 *)((pTVar21->ElementData).Pad + 0x20);
          pTVar21->_s_1 = TVar5;
          *(undefined8 *)((pTVar21->ElementData).Pad + 8) = uVar6;
          *(undefined8 *)((pTVar21->ElementData).Pad + 0x10) = uVar7;
          *(undefined8 *)((pTVar21->ElementData).Pad + 0x18) = uVar8;
          *(undefined8 *)((pTVar21->ElementData).Pad + 0x20) = uVar2;
          pTVar22 = pTVar21;
LAB_148d9b600:
          pTVar18 = pTVar22;
          pTVar22 = pTVar18 + 1;
          if (pTVar22 <= pTVar23) goto code_r0x000148d9b609;
          goto LAB_148d9b620;
        }
        for (; pTVar16 = pTVar21, pTVar22 = pTVar21, pTVar21 < pTVar23; pTVar23 = pTVar23 + -1) {
          while (pTVar18 = pTVar16, pTVar22 = pTVar22 + 1, pTVar22 <= pTVar23) {
            bVar13 = `FFileInPakFileHistoryHelper::DumpHistory'::__l2::<lambda_1>::operator()
                               (((param_4.Predicate)->Predicate).Predicate,
                                (FFileInPakFileHistory *)&pTVar18->ElementData,
                                (FFileInPakFileHistory *)&pTVar22->ElementData);
            pTVar16 = pTVar22;
            if (!bVar13) {
              pTVar16 = pTVar18;
            }
          }
          TVar5 = pTVar18->_s_1;
          iVar9 = *(int *)((uchar *)pTVar18 + 8);
          iVar10 = *(int *)((uchar *)pTVar18 + 0xc);
          uVar2 = *(undefined8 *)((FString *)(pTVar18->ElementData).Pad + 2);
          pFVar3 = ((FString *)(pTVar18->ElementData).Pad)[1].Data.AllocatorInstance.Data;
          iVar11 = *(int *)((uchar *)pTVar18 + 0x18);
          iVar12 = *(int *)((uchar *)pTVar18 + 0x1c);
          iVar20 = *(int *)((uchar *)pTVar23 + 8);
          iVar15 = *(int *)((uchar *)pTVar23 + 0xc);
          pTVar18->_s_1 = pTVar23->_s_1;
          *(int *)((uchar *)pTVar18 + 8) = iVar20;
          *(int *)((uchar *)pTVar18 + 0xc) = iVar15;
          iVar20 = *(int *)((uchar *)pTVar23 + 0x18);
          iVar15 = *(int *)((uchar *)pTVar23 + 0x1c);
          ((FString *)(pTVar18->ElementData).Pad)[1].Data.AllocatorInstance.Data =
               ((FString *)(pTVar23->ElementData).Pad)[1].Data.AllocatorInstance.Data;
          *(int *)((uchar *)pTVar18 + 0x18) = iVar20;
          *(int *)((uchar *)pTVar18 + 0x1c) = iVar15;
          *(undefined8 *)((FString *)(pTVar18->ElementData).Pad + 2) =
               *(undefined8 *)((FString *)(pTVar23->ElementData).Pad + 2);
          pTVar23->_s_1 = TVar5;
          *(int *)((uchar *)pTVar23 + 8) = iVar9;
          *(int *)((uchar *)pTVar23 + 0xc) = iVar10;
          ((FString *)(pTVar23->ElementData).Pad)[1].Data.AllocatorInstance.Data = pFVar3;
          *(int *)((uchar *)pTVar23 + 0x18) = iVar11;
          *(int *)((uchar *)pTVar23 + 0x1c) = iVar12;
          *(undefined8 *)((FString *)(pTVar23->ElementData).Pad + 2) = uVar2;
        }
        goto LAB_148d9b780;
      }
LAB_148d9b767:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>::FElementCompareClass<_FFileInPakFileHistoryHelper::DumpHistory_::__l2::<lambda_1>_>_>_>
                (pTVar22,iVar15,param_3,param_4);
LAB_148d9b780:
      ppTVar19 = ppTVar19 + -3;
    } while (&local_348 <= ppTVar19);
  }
  return;
code_r0x000148d9b609:
  bVar13 = `FFileInPakFileHistoryHelper::DumpHistory'::__l2::<lambda_1>::operator()
                     (((param_4.Predicate)->Predicate).Predicate,
                      (FFileInPakFileHistory *)&pTVar21->ElementData,
                      (FFileInPakFileHistory *)&pTVar22->ElementData);
  if (!bVar13) goto LAB_148d9b600;
LAB_148d9b620:
  do {
    pTVar17 = pTVar16;
    pTVar16 = pTVar17 + -1;
    if (pTVar16 <= pTVar21) break;
    bVar13 = `FFileInPakFileHistoryHelper::DumpHistory'::__l2::<lambda_1>::operator()
                       (((param_4.Predicate)->Predicate).Predicate,
                        (FFileInPakFileHistory *)&pTVar16->ElementData,
                        (FFileInPakFileHistory *)&pTVar21->ElementData);
  } while (!bVar13);
  uVar2 = *(undefined8 *)((longlong)pTVar17 + -0x20);
  if (pTVar22 <= pTVar16) {
    TVar5 = pTVar22->_s_1;
    uVar4 = *(undefined8 *)((longlong)pTVar18 + 0x30);
    uVar6 = *(undefined8 *)((longlong)pTVar18 + 0x38);
    uVar7 = *(undefined8 *)((longlong)pTVar18 + 0x40);
    pFVar3 = *(FScriptContainerElement **)((longlong)pTVar18 + 0x48);
    pTVar22->_s_1 = pTVar16->_s_1;
    *(undefined8 *)((longlong)pTVar18 + 0x30) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar17 + -0x10);
    *(undefined8 *)((longlong)pTVar18 + 0x38) = *(undefined8 *)((longlong)pTVar17 + -0x18);
    *(undefined8 *)((longlong)pTVar18 + 0x40) = uVar2;
    *(FScriptContainerElement **)((longlong)pTVar18 + 0x48) =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)((longlong)pTVar17 + -8))->
         AllocatorInstance).Data;
    pTVar16->_s_1 = TVar5;
    *(undefined8 *)((longlong)pTVar17 + -0x20) = uVar4;
    *(undefined8 *)((longlong)pTVar17 + -0x18) = uVar6;
    *(undefined8 *)((longlong)pTVar17 + -0x10) = uVar7;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)((longlong)pTVar17 + -8))->AllocatorInstance).
    Data = pFVar3;
    goto LAB_148d9b600;
  }
  TVar5 = pTVar21->_s_1;
  uVar4 = *(undefined8 *)((pTVar21->ElementData).Pad + 8);
  uVar6 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x10);
  uVar7 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x18);
  pFVar3 = *(FScriptContainerElement **)((pTVar21->ElementData).Pad + 0x20);
  pTVar21->_s_1 = pTVar16->_s_1;
  *(undefined8 *)((pTVar21->ElementData).Pad + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar17 + -0x10);
  iVar20 = iVar20 + -1;
  *(undefined8 *)((pTVar21->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar17 + -0x18);
  *(undefined8 *)((pTVar21->ElementData).Pad + 0x18) = uVar2;
  *(FScriptContainerElement **)((pTVar21->ElementData).Pad + 0x20) =
       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)((longlong)pTVar17 + -8))->AllocatorInstance
       ).Data;
  pTVar16->_s_1 = TVar5;
  *(undefined8 *)((longlong)pTVar17 + -0x20) = uVar4;
  *(undefined8 *)((longlong)pTVar17 + -0x18) = uVar6;
  *(undefined8 *)((longlong)pTVar17 + -0x10) = uVar7;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)((longlong)pTVar17 + -8))->AllocatorInstance).
  Data = pFVar3;
  if (((longlong)pTVar16 + (-0x28 - (longlong)pTVar21)) / 0x28 <
      ((longlong)pTVar23 - (longlong)pTVar22) / 0x28) {
    if (pTVar22 < pTVar23) {
      *ppTVar19 = pTVar22;
      ppTVar19[1] = pTVar23;
      *(int *)(ppTVar19 + 2) = iVar20;
      ppTVar19 = ppTVar19 + 3;
    }
    if (pTVar16 <= pTVar21 + 1) goto LAB_148d9b780;
    pTVar23 = pTVar17 + -2;
    pTVar22 = pTVar21;
  }
  else {
    if (pTVar21 + 1 < pTVar16) {
      *ppTVar19 = pTVar21;
      ppTVar19[1] = pTVar17 + -2;
      *(int *)(ppTVar19 + 2) = iVar20;
      ppTVar19 = ppTVar19 + 3;
    }
    if (pTVar23 <= pTVar22) goto LAB_148d9b780;
  }
  iVar15 = (int)(((longlong)pTVar23 - (longlong)pTVar22) / 0x28) + 1;
  pTVar21 = pTVar22;
  if (iVar20 == 0) goto LAB_148d9b767;
  goto LAB_148d9b5a0;
}

// NewObject<UCommandlet> @ 148d9b860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCommandlet * __cdecl
NewObject<UCommandlet>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UCommandlet *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UCommandlet_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UCommandlet *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UEngine> @ 148d9b960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEngine * __cdecl
NewObject<UEngine>(UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,
                  UObject *param_5,bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UEngine *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UEngine_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UEngine *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// WriteToString<512,wchar_t_const_(&)[17],FName> @ 148d9baf0

TStringBuilderWithBuffer<wchar_t,512> * __cdecl
WriteToString<512,wchar_t_const_(&)[17],FName>
          (TStringBuilderWithBuffer<wchar_t,512> *__return_storage_ptr__,wchar_t (*param_1) [17],
          FName *param_2)

{
  wchar_t *pwVar1;
  size_t sVar2;
  void *pvVar3;
  ulong64 uVar4;
  int iVar5;
  
  pwVar1 = __return_storage_ptr__->StringBuffer;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  iVar5 = 0;
  __return_storage_ptr__->_padding_ = (longlong)pwVar1;
  __return_storage_ptr__->_padding_ = (longlong)pwVar1;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (param_1 != (wchar_t (*) [17])0x0) {
    sVar2 = wcslen(*param_1);
    iVar5 = (int)sVar2;
  }
  uVar4 = (ulong64)iVar5;
  if (__return_storage_ptr__ + 1 < (TStringBuilderWithBuffer<wchar_t,512> *)(pwVar1 + uVar4)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,uVar4)
    ;
  }
  if (iVar5 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy
                       ((void *)__return_storage_ptr__->_padding_,param_1,uVar4 * 2);
    __return_storage_ptr__->_padding_ = (longlong)((longlong)pvVar3 + uVar4 * 2);
  }
  FName::AppendString(param_2,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*>_> @ 148d9bbb0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*>_>
          (_Atomic_padded<FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*>_> @ 148d9bbc0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*>_>
          (_Atomic_padded<FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>_> @ 148d9bbd0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>_>
          (_Atomic_padded<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>_> @ 148d9bbe0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>_>
          (_Atomic_padded<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*> @ 148d9bbf0

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*>
          (FQueuedWorkInternalData **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> @ 148d9bc00

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>
          (Node **param_1)

{
  return (long64)*param_1;
}

// FThreadSafeStaticStat<`FExecuteConcurrentWithSlateTickTask::GetStatId'::__l2::FStat_FExecuteConcurrentWithSlateTickTask> @ 148d9be50

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FExecuteConcurrentWithSlateTickTask::GetStatId(void)_::_2_::FStat_FExecuteConcurrentWithSlateTickTask>
* __thiscall
FThreadSafeStaticStat<`FExecuteConcurrentWithSlateTickTask::GetStatId'::__l2::FStat_FExecuteConcurrentWithSlateTickTask>
::
FThreadSafeStaticStat<_FExecuteConcurrentWithSlateTickTask::GetStatId_::__l2::FStat_FExecuteConcurrentWithSlateTickTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FExecuteConcurrentWithSlateTickTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FExecuteConcurrentWithSlateTickTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// ~TFunction_OwnedObject<`FEngineLoop::Tick'::__l51::<lambda_1>,1,0> @ 148d9c6e0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l51::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FEngineLoop::Tick_::__l51::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEngineLoop::Tick'::`51'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FScopedSampleMallocChurn::FScopedSampleMallocChurn'::__l1::<lambda_24_>,0,0> @ 148d9c700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScopedSampleMallocChurn::FScopedSampleMallocChurn'::__l1::<lambda_24_>,0,0>
::
~TFunction_OwnedObject<_FScopedSampleMallocChurn::FScopedSampleMallocChurn_::__l1::<lambda_24_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_24_>__0___0FScopedSampleMallocChurn__QEAA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FEngineLoop::Tick'::__l55::<lambda_2>,1,0> @ 148d9c720

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l55::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FEngineLoop::Tick_::__l55::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEngineLoop::Tick'::`55'::<lambda_2>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FEngineLoop::Tick'::__l127::<lambda_4>,0,0> @ 148d9c740

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l127::<lambda_4>,0,0>::
~TFunction_OwnedObject<_FEngineLoop::Tick_::__l127::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEngineLoop::Tick'::`127'::<lambda_4>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FEngineLoop::Tick'::__l206::<lambda_5>,1,0> @ 148d9c760

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l206::<lambda_5>,1,0>::
~TFunction_OwnedObject<_FEngineLoop::Tick_::__l206::<lambda_5>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEngineLoop::Tick'::`206'::<lambda_5>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FEngineLoop::Tick'::__l61::<lambda_6>,1,0> @ 148d9c780

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l61::<lambda_6>,1,0>::
~TFunction_OwnedObject<_FEngineLoop::Tick_::__l61::<lambda_6>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEngineLoop::Tick'::`61'::<lambda_6>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FEngineLoop::Tick'::__l222::<lambda_7>,1,0> @ 148d9c7a0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l222::<lambda_7>,1,0>::
~TFunction_OwnedObject<_FEngineLoop::Tick_::__l222::<lambda_7>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEngineLoop::Tick'::`222'::<lambda_7>,1,0>::_vftable_;
  return;
}

// ~TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_> @ 148d9c7c0

void __thiscall
ScopeExitSupport::
TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
::
~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_FQueuedLowLevelThreadPool::AddQueuedWork_::__l2::<lambda_1>_>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
          (void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(longlong **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x18) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = &
                ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__AddQueuedWork_FQueuedLowLevelThreadPool__EEAAXPEAVIQueuedWork__W4EQueuedWorkPriority___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__AddQueuedWork_FQueuedLowLevelThreadPool__EEAAXPEAVIQueuedWork__W4EQueuedWorkPriority___Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar5 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x18,8)
    ;
    *puVar2 = puVar5;
    uVar4 = *puVar3;
    puVar5[1] = 0;
    *puVar5 = uVar4;
    puVar5[1] = puVar3[1];
    puVar3[1] = 0;
    puVar5[2] = puVar3[2];
  }
  else {
    puVar2[5] = &
                ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__AddQueuedWork_FQueuedLowLevelThreadPool__EEAAXPEAVIQueuedWork__W4EQueuedWorkPriority___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__AddQueuedWork_FQueuedLowLevelThreadPool__EEAAXPEAVIQueuedWork__W4EQueuedWorkPriority___Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    uVar4 = *puVar3;
    puVar2[1] = 0;
    *puVar2 = uVar4;
    puVar2[1] = puVar3[1];
    puVar3[1] = 0;
    puVar2[2] = puVar3[2];
  }
  puVar3[2] = 0;
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// operator== @ 148d9d020

bool __cdecl operator==(FFileInPakFileHistory *param_1,FFileInPakFileHistory *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (param_1->PakFileName).Data.ArrayNum;
  iVar1 = (param_2->PakFileName).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_148d9d05a;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->PakFileName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_2->PakFileName).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_148d9d05a:
  iVar2 = (param_1->FileName).Data.ArrayNum;
  iVar1 = (param_2->FileName).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return true;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->FileName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_2->FileName).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (bVar3) {
    return true;
  }
  return false;
}

// operator() @ 148d9d1c0

bool __thiscall
``FEngineLoop::PreInitPreStartupScreen'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  if (iVar5 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x113,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(short *)(param_1->Data).AllocatorInstance.Data != 0x2d;
}

// operator() @ 148d9d2d0

void __thiscall `LaunchCheckForCmdLineFile'::__l2::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *local_res10;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pwVar2 = FCommandLine::Get();
  ::FString::FString(&local_68,pwVar2);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  ::FString::FString(&local_38,L"-CmdLineFile=");
  bVar1 = ::FString::Split(&local_68,&local_38,&local_48,&local_78);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_res10 = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      local_res10 = local_78.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Token((wchar_t **)&local_res10,&local_38,false,L'\0');
    if (bVar1) {
      pFVar3 = ::FString::FString(&local_28,(wchar_t *)local_res10);
      if (&local_78 != pFVar3) {
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        local_78.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = (pFVar3->Data).ArrayNum;
        local_78.Data.ArrayMax = (pFVar3->Data).ArrayMax;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    ::FString::ConcatFC(&local_28,&local_48,L" ");
    ::FString::ConcatFF(&local_58,&local_28,&local_78);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    local_68.Data.ArrayNum = local_58.Data.ArrayNum;
    local_68.Data.ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::TrimStartAndEndInline(&local_68);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar4.Data = local_68.Data.AllocatorInstance.Data;
    }
    FCommandLine::Set((wchar_t *)FVar4.Data);
    **(undefined1 **)this = 1;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 148d9d930

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`LaunchCheckForCmdLineFile'::__l2::<lambda_2>::operator()(void *this,FString *param_1)

{
  bool bVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *local_res10;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FFileHelper::LoadFileToString(&local_a8,pwVar3,None,0);
  if (bVar1) {
    if (4 < (byte)LogInit._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    pFVar2 = ::FString::TrimStartAndEnd(&local_a8,&local_48);
    if (&local_a8 != pFVar2) {
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_a8.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = (pFVar2->Data).ArrayNum;
      local_a8.Data.ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    iVar4 = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    if (iVar4 == 0) {
      __l2::<lambda_1>::operator()(*(void **)this);
      bVar1 = true;
      goto LAB_148d9dc2f;
    }
    pwVar3 = FCommandLine::Get();
    ::FString::FString(&local_88,pwVar3);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    ::FString::FString(&local_78,L"-CmdLineFile=");
    bVar1 = ::FString::Split(&local_88,&local_78,&local_58,&local_98);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_res10 = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        local_res10 = local_98.Data.AllocatorInstance.Data;
      }
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      bVar1 = FParse::Token((wchar_t **)&local_res10,&local_78,false,L'\0');
      if (bVar1) {
        pFVar2 = ::FString::FString(&local_48,(wchar_t *)local_res10);
        if (&local_98 != pFVar2) {
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          local_98.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
          (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.Data.ArrayNum = (pFVar2->Data).ArrayNum;
          local_98.Data.ArrayMax = (pFVar2->Data).ArrayMax;
          (pFVar2->Data).ArrayNum = 0;
          (pFVar2->Data).ArrayMax = 0;
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      ::FString::ConcatFC(&local_48,&local_58,L" ");
      ::FString::ConcatFF(&local_28,&local_48,&local_a8);
      ::FString::ConcatFC(&local_38,&local_28,L" ");
      ::FString::ConcatFF(&local_68,&local_38,&local_98);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_88.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      local_88.Data.ArrayNum = local_68.Data.ArrayNum;
      local_88.Data.ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      ::FString::TrimStartAndEndInline(&local_88);
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar5.Data = local_88.Data.AllocatorInstance.Data;
      }
      FCommandLine::Set((wchar_t *)FVar5.Data);
      **(undefined1 **)((longlong)this + 8) = 1;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      bVar1 = true;
      goto LAB_148d9dc2f;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  bVar1 = false;
LAB_148d9dc2f:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// operator() @ 148d9de20

bool __thiscall
`LaunchCheckForCmdLineFile'::__l34::<lambda_3>::operator()(void *this,wchar_t *param_1,bool param_2)

{
  void *this_00;
  FString *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FString *pFVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  if (param_2) {
    this_00 = *(void **)this;
    pFVar1 = *(FString **)((longlong)this + 8);
    pFVar6 = ::FString::FString(&local_18,param_1);
    ::FString::ConcatFC(&local_28,pFVar6,L"/");
    ::FString::ConcatFF(&local_38,&local_28,pFVar1);
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = `LaunchCheckForCmdLineFile'::__l2::<lambda_2>::operator()(this_00,&local_38);
    if (bVar5) {
      bVar5 = true;
      goto LAB_148d9de92;
    }
  }
  bVar5 = false;
LAB_148d9de92:
  if (bVar2) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (bVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    **(undefined1 **)((longlong)this + 0x10) = 1;
    return false;
  }
  return true;
}

// `scalar_deleting_destructor' @ 148d9e110

void * __thiscall
IBaseDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e140

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FEngineLoop::PreInitPostStartupScreen'::__l34::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e170

void * __thiscall
TBaseRawMethodDelegateInstance<0,FFileInPakFileHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FFileInPakFileHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e1a0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e1d0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e200

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy,bool,bool,bool,bool>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e230

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FPackageLocalizationManager_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(FPackageLocalizationManager_&),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFPackageLocalizationManager___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e2a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l51::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEngineLoop::Tick'::`51'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScopedSampleMallocChurn::FScopedSampleMallocChurn'::__l1::<lambda_24_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_24_>__0___0FScopedSampleMallocChurn__QEAA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e320

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l55::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEngineLoop::Tick'::`55'::<lambda_2>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e360

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l127::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEngineLoop::Tick'::`127'::<lambda_4>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e3a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l206::<lambda_5>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEngineLoop::Tick'::`206'::<lambda_5>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e3e0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l61::<lambda_6>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEngineLoop::Tick'::`61'::<lambda_6>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e420

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l222::<lambda_7>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEngineLoop::Tick'::`222'::<lambda_7>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e460

void * __thiscall
TGraphTask<FExecuteConcurrentWithSlateTickTask>::_scalar_deleting_destructor_
          (TGraphTask<FExecuteConcurrentWithSlateTickTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e4c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAppMediaTimeSource,SharedPointerInternals::DefaultDeleter<FAppMediaTimeSource>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAppMediaTimeSource,SharedPointerInternals::DefaultDeleter<FAppMediaTimeSource>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e500

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FEnginePackageLocalizationCache,SharedPointerInternals::DefaultDeleter<FEnginePackageLocalizationCache>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FEnginePackageLocalizationCache,SharedPointerInternals::DefaultDeleter<FEnginePackageLocalizationCache>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e540

void * __thiscall
FAppMediaTimeSource::_scalar_deleting_destructor_(FAppMediaTimeSource *this,uint param_1)

{
  *this = (FAppMediaTimeSource)&___7IMediaTimeSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e580

void * __thiscall
FOutputDeviceTestExit::_scalar_deleting_destructor_(FOutputDeviceTestExit *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FOutputDeviceTestExit__6B_;
  DestructItems<FString,int>
            ((FString *)(this->ExitPhrases).AllocatorInstance.Data,(this->ExitPhrases).ArrayNum);
  pFVar1 = (this->ExitPhrases).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e5f0

void * __thiscall
FQueuedLowLevelThreadPool::_scalar_deleting_destructor_
          (FQueuedLowLevelThreadPool *this,uint param_1)

{
  ~FQueuedLowLevelThreadPool(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x6d00,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e650

void * __thiscall
FQueuedLowLevelThreadPool::FQueuedWorkInternalData::_scalar_deleting_destructor_
          (FQueuedWorkInternalData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((*(ulonglong *)&(this->Task).field_0x38 & 0x20) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                       ,0x204,L"State: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  (**(code **)(*(longlong *)&(this->Task).field_0x28 + 0x18))(&(this->Task).field_0x28,&this->Task);
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e730

void * __thiscall
IMediaTimeSource::_scalar_deleting_destructor_(IMediaTimeSource *this,uint param_1)

{
  *this = (IMediaTimeSource)&___7IMediaTimeSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d9e770

void * __thiscall
IQueuedWorkInternalData::_scalar_deleting_destructor_(IQueuedWorkInternalData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  *(undefined ***)this = &___7FThreadSafeRefCountedObject__6B_;
  if (*(int *)&this->field_0x8 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// AppHasEnteredForeground @ 148d9eba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl AppLifetimeEventCapture::AppHasEnteredForeground(void)

{
  uint uVar1;
  undefined1 auStack_1038 [32];
  uchar local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x148d9ebaa;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1038;
  if (3 < (byte)LogCore._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  FCsvProfiler::RecordEventfInternal(0,L"App_HasEnteredForeground");
  if (-1 < BookmarkChannel->Enabled) {
    if (__BookmarkPoint1558 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint1558,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x616,L"App_HasEnteredForeground");
      __BookmarkPoint1558 = true;
    }
    uVar1 = CallstackTrace_GetCurrentId();
    local_1018[0] = '\0';
    FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint1558,uVar1,1,local_1018);
  }
  return;
}

// AppHasReactivated @ 148d9ec70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl AppLifetimeEventCapture::AppHasReactivated(void)

{
  uint uVar1;
  undefined1 auStack_1038 [32];
  uchar local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x148d9ec7a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1038;
  if (3 < (byte)LogCore._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  FCsvProfiler::RecordEventfInternal(0,L"App_HasReactivated");
  if (-1 < BookmarkChannel->Enabled) {
    if (__BookmarkPoint1546 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint1546,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x60a,L"App_HasReactivated");
      __BookmarkPoint1546 = true;
    }
    uVar1 = CallstackTrace_GetCurrentId();
    local_1018[0] = '\0';
    FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint1546,uVar1,1,local_1018);
  }
  return;
}

// AppWillDeactivate @ 148d9fb10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl AppLifetimeEventCapture::AppWillDeactivate(void)

{
  uint uVar1;
  undefined1 auStack_1038 [32];
  uchar local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x148d9fb1a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1038;
  if (3 < (byte)LogCore._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  FCsvProfiler::RecordEventfInternal(0,L"App_WillDeactivate");
  if (-1 < BookmarkChannel->Enabled) {
    if (__BookmarkPoint1540 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint1540,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x604,L"App_WillDeactivate");
      __BookmarkPoint1540 = true;
    }
    uVar1 = CallstackTrace_GetCurrentId();
    local_1018[0] = '\0';
    FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint1540,uVar1,1,local_1018);
  }
  return;
}

// AppWillEnterBackground @ 148d9fbe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl AppLifetimeEventCapture::AppWillEnterBackground(void)

{
  uint uVar1;
  undefined1 auStack_1038 [32];
  uchar local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x148d9fbea;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1038;
  if (3 < (byte)LogCore._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  FCsvProfiler::RecordEventfInternal(0,L"App_WillEnterBackground");
  if (-1 < BookmarkChannel->Enabled) {
    if (__BookmarkPoint1552 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint1552,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x610,L"App_WillEnterBackground");
      __BookmarkPoint1552 = true;
    }
    uVar1 = CallstackTrace_GetCurrentId();
    local_1018[0] = '\0';
    FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint1552,uVar1,1,local_1018);
  }
  return;
}

// BeginFrameRenderThread @ 148d9fcb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl BeginFrameRenderThread(FRHICommandListImmediate *param_1,ulong64 param_2)

{
  code *pcVar1;
  ulong64 uVar2;
  bool bVar3;
  FCsvProfiler *pFVar4;
  undefined8 *puVar5;
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  wchar_t *pwVar8;
  int *piVar9;
  ulong64 local_res10;
  undefined1 local_res18 [8];
  int local_res20 [2];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_const_*,std::tuple<unsigned___int64_&>_>
  local_b8;
  code *local_a8;
  undefined1 *local_a0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_const_*,std::tuple<unsigned___int64_&,int_&&>_>
  local_98;
  uint uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  local_res10 = param_2;
  if (*piVar9 < `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar8 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar8,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    FMiscTrace::OutputBeginFrame(TraceFrameType_Rendering);
    GFrameNumberRenderThread = GFrameNumberRenderThread + 1;
    pFVar4 = FCsvProfiler::Get();
    bVar3 = FCsvProfiler::IsCapturing_Renderthread(pFVar4);
    if (bVar3) {
      pFVar4 = FCsvProfiler::Get();
      local_res20[0] = FCsvProfiler::GetCaptureFrameNumberRT(pFVar4);
      if (*piVar9 < _TSS0) {
        _Init_thread_header(&_TSS0);
        if (_TSS0 == -1) {
          local_70 = 0;
          uStack_6c = 0;
          Desc._12_8_ = ZEXT48(uStack_74);
          Desc._padding_._4_4_ = 0;
          Desc._padding_ = (longlong)u_Frame;
          Desc._padding_ = (longlong)u_Frame__d__CsvFr;
          Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
          Desc._padding_._0_4_ = 0x1559;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
          Desc.FieldNames._Elems[0] = L"Frame Number";
          Desc.FieldNames._Elems[1] = L"Csv Frame Number";
          Desc.TraceGpuSpecId = 0;
          Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(``BeginFrameRenderThread'::__l8::<lambda_1>::
                 operator()<std::tuple<wchar_t_const_(&)[13],unsigned___int64_&>,std::tuple<wchar_t_const_(&)[17],int_&&>_>'
                 ::__l2::_dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&_TSS0);
        }
      }
      local_98._Myfirst._Val = &Desc;
      local_98._padding_ = (longlong)local_res20;
      local_98._padding_ = (longlong)&local_res10;
      if (GRHIFrameBreadcrumb.bIsSet != false) {
        if (GRHIFrameBreadcrumb.TypedValue.Node.Node != (FRHIBreadcrumbNode *)0x0) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("!Node",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                             ,0x10a,L"Manual breadcrumb was destructed before it was ended.");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (GRHIFrameBreadcrumb.TypedValue.Node.AllocatorRef.SharedReferenceCount.
                   ReferenceController);
      }
      FRHIBreadcrumbEventManual::
      FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>,unsigned___int64_&,int_&&>
                (&GRHIFrameBreadcrumb.TypedValue,(FRHIComputeCommandList *)param_1,&local_98);
    }
    else {
      if (*piVar9 < _TSS0) {
        _Init_thread_header(&_TSS0);
        if (_TSS0 == -1) {
          local_50 = 0;
          uStack_4c = 0;
          Desc._12_8_ = ZEXT48(uStack_54);
          Desc._padding_._4_4_ = 0;
          Desc._padding_ = (longlong)u_Frame;
          Desc._padding_ = (longlong)u_Frame__d;
          Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
          Desc._padding_._0_4_ = 0x1561;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
          Desc.TraceGpuSpecId = 0;
          Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          Desc.FieldNames._Elems[0] = (wchar_t * [1])u_Frame_Number;
          atexit(``BeginFrameRenderThread'::__l10::<lambda_2>::
                 operator()<std::tuple<wchar_t_const_(&)[13],unsigned___int64_&>_>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&_TSS0);
        }
      }
      local_b8._padding_ = (longlong)&local_res10;
      local_b8._Myfirst._Val = &Desc;
      if (GRHIFrameBreadcrumb.bIsSet != false) {
        if (GRHIFrameBreadcrumb.TypedValue.Node.Node != (FRHIBreadcrumbNode *)0x0) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("!Node",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                             ,0x10a,L"Manual breadcrumb was destructed before it was ended.");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (GRHIFrameBreadcrumb.TypedValue.Node.AllocatorRef.SharedReferenceCount.
                   ReferenceController);
      }
      FRHIBreadcrumbEventManual::
      FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>,unsigned___int64_&>
                (&GRHIFrameBreadcrumb.TypedValue,(FRHIComputeCommandList *)param_1,&local_b8);
    }
    GRHIFrameBreadcrumb.bIsSet = true;
    FGenericPlatformMisc::BeginNamedEvent(&CoreDelegatesColor,"FCoreDelegates::OnBeginFrameRT");
    if (CpuChannel->Enabled < 0) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&FCoreDelegates::OnBeginFrameRT);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5482,"FCoreDelegates::OnBeginFrameRT",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x156a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5482);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&FCoreDelegates::OnBeginFrameRT);
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    uVar2 = local_res10;
    if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
       (param_1->field_0x64 == '\0')) {
      puVar5 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar5;
      *(undefined8 **)&param_1->field_0x30 = puVar5 + 1;
      puVar5[1] = 0;
      *puVar5 = &TRHILambdaCommand<FRHICommandListImmediate,`BeginFrameRenderThread'::`2'::<lambda_3>_>
                 ::_vftable_;
      puVar5[3] = L"TRHILambdaCommand";
      puVar5[2] = uVar2;
    }
    else {
      UEngine::SetRenderSubmitLatencyMarkerStart(local_res10);
    }
    FCsvProfiler::BeginExclusiveStat("RenderThreadOther",(char *)0x0);
    FVisualizeTexture::BeginFrameRenderThread((FVisualizeTexture *)&GVisualizeTexture);
    puVar6 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
    local_a0 = local_res18;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar7 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a8,puVar6);
    *(int *)(pFVar7 + 3) = *(int *)(pFVar7 + 3) + -1;
    return;
  }
  GFrameNumberRenderThread = GFrameNumberRenderThread + 1;
  return;
}

// CVarLogSinkFunction @ 148da01c0

void __cdecl CVarLogSinkFunction(void)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  
  pTVar3 = CVarLogTimestamp.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pTVar4 = CVarLogCategory.Ref;
  iVar1 = pTVar3->ShadowedValue[0];
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      GPrintLogTimes = UTC;
      goto LAB_148da0264;
    }
    if (iVar1 == 2) {
      GPrintLogTimes = SinceGStartTime;
      goto LAB_148da0264;
    }
    if (iVar1 == 3) {
      GPrintLogTimes = Local;
      goto LAB_148da0264;
    }
    if (iVar1 == 4) {
      GPrintLogTimes = Timecode;
      goto LAB_148da0264;
    }
  }
  GPrintLogTimes = None;
LAB_148da0264:
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  GPrintLogCategory = pTVar4->ShadowedValue[0] != 0;
  return;
}

// CheckForPrintTimesOverride @ 148da04b0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl CheckForPrintTimesOverride(void)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = FConfigCacheIni::GetString(GConfig,L"LogFiles",L"LogTimes",&local_18,&GEngineIni);
  if (bVar1) {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar4.Data = local_18.Data.AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,L"None");
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,L"UTC");
      if (iVar2 == 0) {
LAB_148da05cb:
        iVar2 = 1;
      }
      else {
        FVar4.Data = (FScriptContainerElement *)L"";
        if (local_18.Data.ArrayNum != 0) {
          FVar4.Data = local_18.Data.AllocatorInstance.Data;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,L"SinceStart");
        if (iVar2 == 0) {
          iVar2 = 2;
        }
        else {
          FVar4.Data = (FScriptContainerElement *)L"";
          if (local_18.Data.ArrayNum != 0) {
            FVar4.Data = local_18.Data.AllocatorInstance.Data;
          }
          iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,L"Local");
          if (iVar2 == 0) {
            iVar2 = 3;
          }
          else {
            FVar4.Data = (FScriptContainerElement *)L"";
            if (local_18.Data.ArrayNum != 0) {
              FVar4.Data = local_18.Data.AllocatorInstance.Data;
            }
            iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,L"Timecode");
            if (iVar2 != 0) {
              FVar4.Data = (FScriptContainerElement *)L"";
              if (local_18.Data.ArrayNum != 0) {
                FVar4.Data = local_18.Data.AllocatorInstance.Data;
              }
              bVar1 = FToBoolHelper::FromCStringWide((wchar_t *)FVar4.Data);
              if (!bVar1) goto LAB_148da05ef;
              goto LAB_148da05cb;
            }
            iVar2 = 4;
          }
        }
      }
    }
    IConsoleVariable::Set<int>
              ((IConsoleVariable *)CVarLogTimestamp._padding_,iVar2,ECVF_SetBySystemSettingsIni,
               (FName)0x0);
  }
LAB_148da05ef:
  pwVar3 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar3,L"LOGTIMES");
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    pwVar3 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar3,L"UTCLOGTIMES");
    if (bVar1) {
      iVar2 = 1;
    }
    else {
      pwVar3 = FCommandLine::Get();
      bVar1 = FParse::Param(pwVar3,L"NOLOGTIMES");
      if (bVar1) {
        iVar2 = 0;
      }
      else {
        pwVar3 = FCommandLine::Get();
        bVar1 = FParse::Param(pwVar3,L"LOGTIMESINCESTART");
        if (bVar1) {
          iVar2 = 2;
        }
        else {
          pwVar3 = FCommandLine::Get();
          bVar1 = FParse::Param(pwVar3,L"LOCALLOGTIMES");
          if (bVar1) {
            iVar2 = 3;
          }
          else {
            pwVar3 = FCommandLine::Get();
            bVar1 = FParse::Param(pwVar3,L"LOGTIMECODE");
            if (!bVar1) goto LAB_148da06c1;
            iVar2 = 4;
          }
        }
      }
    }
  }
  IConsoleVariable::Set<int>
            ((IConsoleVariable *)CVarLogTimestamp._padding_,iVar2,ECVF_SetByCommandline,(FName)0x0);
LAB_148da06c1:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ConditionallyEnsureOnCommandletErrors @ 148da0930

void __cdecl ConditionallyEnsureOnCommandletErrors(int param_1)

{
  int local_res8 [2];
  bool local_res10 [8];
  int *local_res18 [2];
  
  local_res10[0] = false;
  local_res8[0] = param_1;
  FConfigCacheIni::GetBool
            (GConfig,L"Core.System",L"EnsureCommandletOnError",local_res10,&GEngineIni);
  if ((local_res10[0] != false) && (local_res8[0] != 0)) {
    local_res18[0] = local_res8;
    `ConditionallyEnsureOnCommandletErrors'::__l5::<lambda_1>::operator()(local_res18);
  }
  return;
}

// DeleteRecordedFileReadsFromPaks @ 148da0fd0

void __cdecl DeleteRecordedFileReadsFromPaks(void)

{
  ForElementType<FSetElementId> FVar1;
  TUniquePtr<FFileInPakFileHistoryHelper,TDefaultDelete<FFileInPakFileHistoryHelper>_> this;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  
  this.Ptr = FileInPakFileHistoryHelper.Ptr;
  FileInPakFileHistoryHelper.Ptr = (FFileInPakFileHistoryHelper *)0x0;
  if (this.Ptr != (FFileInPakFileHistoryHelper *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              FCoreDelegates::GetOnFileOpenedForReadFromPakFile();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this.Ptr);
    DeleteCriticalSection((LPCRITICAL_SECTION)&(this.Ptr)->HistoryLock);
    ((this.Ptr)->History).HashSize = 0;
    FVar1 = ((this.Ptr)->History).Hash.SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this.Ptr);
    operator_delete(this.Ptr,0x78);
    return;
  }
  return;
}

// DumpEarlyReads @ 148da1490

void __cdecl DumpEarlyReads(bool param_1,bool param_2,bool param_3)

{
  ForElementType<FSetElementId> FVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this;
  FOutputDeviceRedirector *this_00;
  TUniquePtr<FFileInPakFileHistoryHelper,TDefaultDelete<FFileInPakFileHistoryHelper>_> this_01;
  
  if (param_1) {
    UE::ConfigUtilities::DumpRecordedConfigReadsFromIni();
    UE::ConfigUtilities::DeleteRecordedConfigReadsFromIni();
  }
  if (param_2) {
    this_01.Ptr = FileInPakFileHistoryHelper.Ptr;
    if (FileInPakFileHistoryHelper.Ptr != (FFileInPakFileHistoryHelper *)0x0) {
      FFileInPakFileHistoryHelper::DumpHistory(FileInPakFileHistoryHelper.Ptr);
      this_01 = FileInPakFileHistoryHelper;
    }
    FileInPakFileHistoryHelper.Ptr = (FFileInPakFileHistoryHelper *)0x0;
    if (this_01.Ptr != (FFileInPakFileHistoryHelper *)0x0) {
      this = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             FCoreDelegates::GetOnFileOpenedForReadFromPakFile();
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this,this_01.Ptr);
      DeleteCriticalSection((LPCRITICAL_SECTION)&(this_01.Ptr)->HistoryLock);
      ((this_01.Ptr)->History).HashSize = 0;
      FVar1 = ((this_01.Ptr)->History).Hash.SecondaryData;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_01.Ptr);
      operator_delete(this_01.Ptr,0x78);
    }
  }
  if (param_3) {
    this_00 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
    FOutputDeviceRedirector::Flush(this_00);
  }
  return;
}

// DumpRecordedFileReadsFromPaks @ 148da1ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DumpRecordedFileReadsFromPaks(void)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  undefined1 *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar3;
  code *pcVar4;
  TUniquePtr<FFileInPakFileHistoryHelper,TDefaultDelete<FFileInPakFileHistoryHelper>_> this;
  longlong *plVar5;
  FFileInPakFileHistoryHelper *pFVar6;
  bool bVar7;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar8;
  IFileManager *pIVar9;
  size_t sVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  wchar_t *_Str;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 auStack_1f8 [32];
  FIdentityFunctor FStack_1d8;
  undefined1 auStack_1d7 [7];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> TStack_1d0;
  longlong *plStack_1c0;
  FString FStack_1b8;
  int iStack_1a8;
  FIdentityFunctor *pFStack_1a0;
  longlong *plStack_198;
  FString FStack_190;
  FFileInPakFileHistoryHelper *pFStack_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *puStack_170;
  undefined4 uStack_168;
  int iStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  FFileInPakFileHistoryHelper *pFStack_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  FString FStack_120;
  FString aFStack_110 [2];
  undefined4 uStack_e4;
  FScriptContainerElement aFStack_d8 [128];
  ForAnyElementType FStack_58;
  FScriptContainerElement *pFStack_50;
  int iStack_48;
  ulonglong uStack_38;
  
  this.Ptr = FileInPakFileHistoryHelper.Ptr;
  if (FileInPakFileHistoryHelper.Ptr == (FFileInPakFileHistoryHelper *)0x0) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lpCriticalSection = &(FileInPakFileHistoryHelper.Ptr)->HistoryLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFStack_1a0 = &FStack_1d8;
  if (0 < *(int *)&((this.Ptr)->History).Elements.field_0x8 -
          *(int *)&((this.Ptr)->History).Elements.field_0x34) {
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this.Ptr);
    iVar13 = *(int *)&((this.Ptr)->History).Elements.field_0x8 -
             *(int *)&((this.Ptr)->History).Elements.field_0x34;
    pTVar3 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> **)
              &((this.Ptr)->History).Elements;
    if ((iVar13 < 0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>::FElementCompareClass<_FFileInPakFileHistoryHelper::DumpHistory_::__l2::<lambda_1>_>_>_>
              (pTVar3,iVar13,FStack_1d8,
               (FElementCompareClass<_public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)_::_2_::<lambda_1>_>
                *)&pFStack_1a0);
  }
  TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>
  ::Rehash(&(this.Ptr)->History);
  pTVar8 = &FPaths::ProjectLogDir(aFStack_110)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&TStack_1d0,pTVar8,0x1d - (uint)(pTVar8->ArrayNum != 0));
  FString::PathAppend((FString *)&TStack_1d0,L"FilesLoadedFromPakFiles.csv",0x1b);
  if (aFStack_110[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(aFStack_110[0].Data.AllocatorInstance.Data);
  }
  pIVar9 = IFileManager::Get();
  FVar12.Data = (FScriptContainerElement *)L"";
  if (TStack_1d0.ArrayNum != 0) {
    FVar12.Data = TStack_1d0.AllocatorInstance.Data;
  }
  plStack_1c0 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar12.Data);
  plStack_198 = plStack_1c0;
  if (((3 < (byte)LogInit._0_1_) &&
      (UE::Logging::Private::BasicLog<4>
                 (&`public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)___ptr64'::
                   __l3::LOG_Static,(FLogCategoryBase *)&LogInit), 3 < (byte)LogInit._0_1_)) &&
     (UE::Logging::Private::BasicLog<4>
                (&`public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)___ptr64'::
                  __l21::LOG_Static,(FLogCategoryBase *)&LogInit), 3 < (byte)LogInit._0_1_)) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)___ptr64'::__l39
                ::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  FString::PrintfImpl(&FStack_120,L"PakFile, File");
  `FFileInPakFileHistoryHelper::DumpHistory'::__l2::<lambda_2>::operator()(&plStack_1c0,&FStack_120)
  ;
  if (FStack_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_120.Data.AllocatorInstance.Data);
  }
  iVar13 = *(int *)&((this.Ptr)->History).Elements.field_0x28;
  puVar2 = &((this.Ptr)->History).Elements.field_0x10;
  iStack_178 = 0;
  iStack_160 = 0;
  uStack_174 = 1;
  iStack_164 = 0;
  if (iVar13 != 0) {
    puVar18 = *(uint **)&((this.Ptr)->History).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar2;
    }
    uVar15 = *puVar18;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_178;
      iStack_160 = iStack_160 + 0x20;
      iStack_178 = iStack_178 + 1;
      iStack_164 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_148da180e;
      uVar15 = puVar18[lVar11 + 1];
    }
    uStack_174 = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_174 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_1a8 = (int)lVar11;
    iStack_164 = iStack_160 + -1 + iStack_1a8;
    if (iVar13 < iStack_164) {
      iStack_164 = iVar13;
    }
  }
LAB_148da180e:
  uVar15 = *(uint *)&((this.Ptr)->History).Elements.field_0x28;
  uStack_15c = uStack_e4;
  uVar19 = uVar15 & 0xffffffe0;
  iStack_158 = *(int *)&((this.Ptr)->History).Elements.field_0x8 -
               *(int *)&((this.Ptr)->History).Elements.field_0x34;
  uStack_168 = 0xffffffff;
  pFStack_180 = this.Ptr;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  pFStack_150 = this.Ptr;
  iVar14 = (int)uVar15 >> 5;
  TStack_148._28_4_ = uStack_e4;
  TStack_148.BaseBitIndex = iStack_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  puStack_170 = puVar2;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar15 < 0) || (iVar13 < (int)uVar15)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar5 = plStack_1c0;
  uVar16 = *(uint *)&((this.Ptr)->History).Elements.field_0x28;
  if (uVar15 != uVar16) {
    puVar17 = *(undefined1 **)&((this.Ptr)->History).Elements.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_148da1910;
      uVar15 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (int)lVar11 + -1 + uVar19;
    if ((int)uVar16 < (int)uVar15) {
      uVar15 = uVar16;
    }
  }
LAB_148da1910:
  do {
    pFVar6 = pFStack_150;
    if (*(int *)&(pFStack_150->History).Elements.field_0x8 -
        *(int *)&(pFStack_150->History).Elements.field_0x34 != (int)uStack_128) {
      `TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_1d7);
    }
    if (((TStack_148.CurrentBitIndex == uVar15) &&
        (TStack_148.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&((this.Ptr)->History).Elements.field_0x10)) &&
       (pFVar6 == this.Ptr)) {
      if ((3 < (byte)LogInit._0_1_) &&
         (UE::Logging::Private::BasicLog<4>
                    (&`public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)___ptr64'
                      ::__l61::LOG_Static,(FLogCategoryBase *)&LogInit), 3 < (byte)LogInit._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)___ptr64'::
                    __l79::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      if (plStack_198 != (longlong *)0x0) {
        (**(code **)*plStack_198)(plStack_198,1);
      }
      if (TStack_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_1d0.AllocatorInstance.Data);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    FString::PrintfImpl(&FStack_1b8,L"%s, %s");
    if (3 < (byte)LogInit._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:___cdecl_`public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)___ptr64'::`2'::<lambda_2>::operator()(FString&&___ptr64)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    FString::ConcatFC(&FStack_190,&FStack_1b8,L"\r\n");
    if (FStack_190.Data.ArrayNum == 0) {
      _Str = L"";
LAB_148da1a04:
      FStack_58.Data = (FScriptContainerElement *)0x0;
      sVar10 = wcslen(_Str);
      iStack_48 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar10);
      uVar19 = iStack_48 + 1;
      uVar16 = uVar19;
      if (uVar19 < 0x81) {
        if (FStack_58.Data != (FScriptContainerElement *)0x0) {
          uVar16 = 0;
          goto LAB_148da1a43;
        }
      }
      else {
LAB_148da1a43:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,uVar16,1);
      }
      pFStack_50 = aFStack_d8;
      if (FStack_58.Data != (FScriptContainerElement *)0x0) {
        pFStack_50 = FStack_58.Data;
      }
      UE::Core::Private::Convert((uchar *)pFStack_50,uVar19,_Str,(int)sVar10 + 1);
    }
    else {
      FStack_58.Data = (FScriptContainerElement *)0x0;
      _Str = (wchar_t *)FStack_190.Data.AllocatorInstance.Data;
      if (FStack_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_148da1a04;
      pFStack_50 = (FScriptContainerElement *)0x0;
      iStack_48 = 0;
    }
    if (FStack_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_190.Data.AllocatorInstance.Data);
    }
    (**(code **)(*plVar5 + 0x188))(plVar5,pFStack_50,(longlong)iStack_48);
    if (FStack_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data);
    }
    if (FStack_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1b8.Data.AllocatorInstance.Data);
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// EndFrameRenderThread @ 148da1bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl EndFrameRenderThread(FRHICommandListImmediate *param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar4 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar4,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    FCsvProfiler::EndExclusiveStat("RenderThreadOther");
    if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
       (param_1->field_0x64 == '\0')) {
      puVar3 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar3;
      *(undefined8 **)&param_1->field_0x30 = puVar3 + 1;
      puVar3[1] = 0;
      *puVar3 = &TRHILambdaCommand<FRHICommandListImmediate,`EndFrameRenderThread'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar3[3] = L"TRHILambdaCommand";
      puVar3[2] = param_2;
    }
    else {
      UEngine::SetRenderSubmitLatencyMarkerEnd(param_2);
    }
    FGenericPlatformMisc::BeginNamedEvent(&CoreDelegatesColor,"FCoreDelegates::OnEndFrameRT");
    if (CpuChannel->Enabled < 0) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&FCoreDelegates::OnEndFrameRT);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5520,"FCoreDelegates::OnEndFrameRT",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x1590);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5520);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&FCoreDelegates::OnEndFrameRT);
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    FVisualizeTexture::EndFrameRenderThread((FVisualizeTexture *)&GVisualizeTexture);
    if (GRHIFrameBreadcrumb.bIsSet == false) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FRHIBreadcrumbEventManual::End
              (&GRHIFrameBreadcrumb.TypedValue,(FRHIComputeCommandList *)param_1);
    if (GRHIFrameBreadcrumb.bIsSet != false) {
      if (GRHIFrameBreadcrumb.TypedValue.Node.Node != (FRHIBreadcrumbNode *)0x0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x10a,L"Manual breadcrumb was destructed before it was ended.");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (GRHIFrameBreadcrumb.TypedValue.Node.AllocatorRef.SharedReferenceCount.
                 ReferenceController);
      GRHIFrameBreadcrumb.bIsSet = false;
    }
    FRHICommandListImmediate::EndFrame(param_1);
    FMiscTrace::OutputEndFrame(TraceFrameType_Rendering);
    return;
  }
  FRHICommandListImmediate::EndFrame(param_1);
  return;
}

// EngineExit @ 148da1e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl EngineExit(void)

{
  RequestEngineExit(L"EngineExit() was called");
  FEngineLoop::Exit(&GEngineLoop);
  return;
}

// EngineInit @ 148da1e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __cdecl EngineInit(void)

{
  int iVar1;
  
  iVar1 = FEngineLoop::Init(&GEngineLoop);
  return iVar1;
}

// EnginePreInit @ 148da1e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __cdecl EnginePreInit(wchar_t *param_1)

{
  int iVar1;
  
  FBootProfiling::InitCounters();
  iVar1 = FEngineLoop::PreInitPreStartupScreen(&GEngineLoop,param_1);
  if (iVar1 == 0) {
    iVar1 = FEngineLoop::PreInitPostStartupScreen(&GEngineLoop,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  FPreInitContext::Cleanup(&GEngineLoop.PreInitContext);
  return iVar1;
}

// EngineTick @ 148da1ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl EngineTick(void)

{
  FEngineLoop::Tick(&GEngineLoop);
  return;
}

// ExtractGameStringArgument @ 148da2c50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
ExtractGameStringArgument
          (FString *__return_storage_ptr__,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,EGameStringType *param_3)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  longlong local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  iVar9 = param_1->ArrayNum;
  uVar16 = 0;
  if (0 < iVar9) {
    local_a8 = 0;
    uVar13 = uVar16;
    do {
      uVar15 = ~uVar16 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar16 < iVar9) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FString *)(*pcVar3)();
        return pFVar10;
      }
      pFVar14 = (param_1->AllocatorInstance).Data;
      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.Data.ArrayNum = *(int *)(pFVar14 + local_a8 + 8);
      lVar12 = (longlong)local_90.Data.ArrayNum;
      pvVar2 = *(void **)(pFVar14 + local_a8);
      if (local_90.Data.ArrayNum == 0) {
        local_90.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_90.Data.ArrayNum,0,(ForAnyElementType *)&local_90,
                   local_90.Data.ArrayNum,&local_90.Data.ArrayMax);
        memcpy(local_90.Data.AllocatorInstance.Data,pvVar2,lVar12 * 2);
      }
      FPaths::NormalizeFilename(&local_90);
      if ((GInternalProjectName[0] == L'\0') ||
         (iVar9 = FGenericPlatformStricmp::Stricmp(GInternalProjectName,L"None"), iVar9 == 0)) {
LAB_148da2de5:
        bVar5 = false;
      }
      else {
        uVar8 = 0;
        if ((int)uVar16 < param_1->ArrayNum) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FString *)(*pcVar3)();
          return pFVar10;
        }
        pFVar14 = (param_1->AllocatorInstance).Data;
        if (*(int *)(pFVar14 + local_a8 + 8) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)(pFVar14 + local_a8);
        }
        iVar9 = FGenericPlatformStricmp::Stricmp(pwVar11,GInternalProjectName);
        if (iVar9 != 0) goto LAB_148da2de5;
        bVar5 = true;
      }
      bVar6 = FPaths::IsProjectFilePathSet();
      if (bVar6) {
        uVar13 = uVar13 | 1;
        pFVar10 = FPaths::GetProjectFilePath(&local_80);
        iVar9 = (pFVar10->Data).ArrayNum;
        if (local_90.Data.ArrayNum == iVar9) {
          if (1 < local_90.Data.ArrayNum) {
            iVar9 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_90.Data.AllocatorInstance.Data,
                               (wchar_t *)(pFVar10->Data).AllocatorInstance.Data);
            bVar6 = iVar9 == 0;
            goto LAB_148da2e22;
          }
        }
        else {
          bVar6 = local_90.Data.ArrayNum + iVar9 == 1;
LAB_148da2e22:
          if (!bVar6) goto LAB_148da2e2e;
        }
        bVar6 = true;
      }
      else {
LAB_148da2e2e:
        bVar6 = false;
      }
      if (((uVar13 & 1) != 0) &&
         (uVar13 = uVar13 & 0xfffffffe,
         local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      bVar7 = FPaths::IsProjectFilePathSet();
      if (bVar7) {
        uVar13 = uVar13 | 6;
        pFVar10 = FPaths::GetProjectFilePath(local_60);
        pFVar10 = FPaths::GetCleanFilename(&local_70,pFVar10);
        uVar8 = 0;
        if ((int)uVar16 < param_1->ArrayNum) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FString *)(*pcVar3)();
          return pFVar10;
        }
        pFVar14 = (param_1->AllocatorInstance).Data + local_a8;
        iVar9 = (pFVar10->Data).ArrayNum;
        iVar1 = *(int *)(pFVar14 + 8);
        if (iVar1 == iVar9) {
          if (1 < iVar1) {
            iVar9 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)pFVar14,
                               (wchar_t *)(pFVar10->Data).AllocatorInstance.Data);
            bVar7 = iVar9 == 0;
            goto LAB_148da2ee1;
          }
        }
        else {
          bVar7 = iVar1 + iVar9 == 1;
LAB_148da2ee1:
          if (!bVar7) goto LAB_148da2eec;
        }
        bVar7 = true;
      }
      else {
LAB_148da2eec:
        bVar7 = false;
      }
      if (((uVar13 & 4) != 0) &&
         (uVar13 = uVar13 & 0xfffffffb,
         local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (((uVar13 & 2) != 0) &&
         (uVar13 = uVar13 & 0xfffffffd,
         local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        *param_3 = GameName;
LAB_148da2fb2:
        uVar13 = 0;
        if ((int)uVar16 < param_1->ArrayNum) {
          uVar13 = uVar15;
        }
        if ((uVar13 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FString *)(*pcVar3)();
          return pFVar10;
        }
        pFVar14 = (param_1->AllocatorInstance).Data;
        local_a0.Data = (FScriptContainerElement *)0x0;
        iVar9 = *(int *)(pFVar14 + (longlong)(int)uVar16 * 0x10 + 8);
        pvVar2 = *(void **)(pFVar14 + (longlong)(int)uVar16 * 0x10);
        local_98 = CONCAT44(local_98._4_4_,iVar9);
        if (iVar9 == 0) {
          local_98 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar9,0,&local_a0,iVar9,(int *)((longlong)&local_98 + 4));
          memcpy(local_a0.Data,pvVar2,(longlong)iVar9 * 2);
        }
        TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAt(param_1,uVar16,Default);
        TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAt(param_2,uVar16,Default);
        FVar4.Data = local_a0.Data;
        local_a0.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar4.Data;
        (__return_storage_ptr__->Data).ArrayNum = (int)local_98;
        (__return_storage_ptr__->Data).ArrayMax = local_98._4_4_;
        local_98 = 0;
        if (local_90.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      if (bVar6) {
        *param_3 = ProjectPath;
        goto LAB_148da2fb2;
      }
      if (bVar7) {
        *param_3 = ProjectShortName;
        goto LAB_148da2fb2;
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      uVar16 = uVar16 + 1;
      local_a8 = local_a8 + 0x10;
      iVar9 = param_1->ArrayNum;
    } while ((int)uVar16 < iVar9);
  }
  *param_3 = Unknown;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GameLoopIsStarved @ 148da3120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl GameLoopIsStarved(void)

{
  longlong lVar1;
  FRenderCommandList *this;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FTaskGraphInterface *pFVar5;
  FCommandList *this_00;
  FRenderCommandTag *pFVar6;
  FPendingCleanupObjects *this_01;
  undefined ***pppuVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  code *apcStack_a8 [2];
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined ***pppuStack_80;
  undefined1 auStack_78 [16];
  undefined **ppuStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined ***pppuStack_50;
  byte bStack_48;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  TStack_38;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (GRHIGlobals.IsRHIInitialized) {
    bVar10 = -1 < CpuChannel->Enabled;
    if (bVar10) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1279,"FlushRenderingCommands",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                 ,0x4ff);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1279);
    }
    uVar9 = (ulonglong)_tls_index;
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8);
    this = *(FRenderCommandList **)(lVar1 + 0xed0);
    *(undefined8 *)(lVar1 + 0xed0) = 0;
    if (this != (FRenderCommandList *)0x0) {
      FRenderCommandList::Flush(this);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreRenderDelegates::OnFlushRenderingCommandsStart);
    LOCK();
    GSuspendRenderingTickables = (TAtomic<int>)((int)GSuspendRenderingTickables + 1);
    UNLOCK();
    if (GIsThreadedRendering == false) {
      pFVar5 = FTaskGraphInterface::Get();
      cVar3 = (**(code **)((longlong)*pFVar5 + 0x38))(pFVar5,1);
      if (cVar3 == '\0') {
        pFVar5 = FTaskGraphInterface::Get();
        cVar3 = (**(code **)((longlong)*pFVar5 + 0x38))(pFVar5,0x101);
        if (cVar3 == '\0') {
          pFVar5 = FTaskGraphInterface::Get();
          (**(code **)((longlong)*pFVar5 + 0x48))(pFVar5,1);
          pFVar5 = FTaskGraphInterface::Get();
          (**(code **)((longlong)*pFVar5 + 0x48))(pFVar5,0x101);
        }
      }
    }
    FRenderCommandPipeRegistry::StopRecording(&GRenderCommandPipeRegistry,&TStack_38);
    TMulticastDelegate<void___cdecl(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&UE::RenderCommandPipe::StopRecordingDelegate,&TStack_38);
    if (TStack_38.AllocatorInstance.SecondaryData.Data != (uint *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free
                (TStack_38.AllocatorInstance.SecondaryData.Data);
    }
    ppuStack_98 = &
                  ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    pcStack_90 = `FlushRenderingCommands'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    apcStack_a8[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
         ::Call;
    pppuStack_80 = (undefined ***)0x0;
    if (*(FRenderCommandList **)(lVar1 + 0xed0) == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FlushRenderingCommands_::__l2::TSTR_FlushPendingDeleteRHIResourcesCmd1296>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_a8);
    }
    else {
      this_00 = FRenderCommandList::GetRenderThread(*(FRenderCommandList **)(lVar1 + 0xed0));
      auStack_78._0_8_ = apcStack_a8[0];
      pppuStack_50 = pppuStack_80;
      ppuStack_68 = ppuStack_98;
      pcStack_60 = pcStack_90;
      uStack_58 = uStack_88;
      apcStack_a8[0] = (code *)0x0;
      bStack_48 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`FlushRenderingCommands'::__l2::TSTR_FlushPendingDeleteRHIResourcesCmd1296>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)auStack_78,pFVar6);
      uVar8 = (ulonglong)bStack_48;
      if ((2 < uVar8) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)auStack_78._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(auStack_78 + 0x10);
          if (pppuStack_50 != (undefined ***)0x0) {
            pppuVar7 = pppuStack_50;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(auStack_78);
      }
    }
    if (apcStack_a8[0] != (code *)0x0) {
      pppuVar7 = &ppuStack_98;
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar7 = pppuStack_80;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    this_01 = GetPendingCleanupObjects();
    FFrameEndSync::Sync(Threads);
    if (this_01 != (FPendingCleanupObjects *)0x0) {
      FPendingCleanupObjects::~FPendingCleanupObjects(this_01);
      operator_delete(this_01,0x10);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreRenderDelegates::OnFlushRenderingCommandsEnd);
    LOCK();
    GSuspendRenderingTickables = (TAtomic<int>)((int)GSuspendRenderingTickables + -1);
    UNLOCK();
    if (this != (FRenderCommandList *)0x0) {
      *(FRenderCommandList **)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0xed0) = this;
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// GetTypeHash @ 148da41a0

uint __cdecl GetTypeHash(FFileInPakFileHistory *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  wchar_t *pwVar7;
  uint uVar8;
  
  iVar1 = (param_1->PakFileName).Data.ArrayNum;
  pwVar7 = L"";
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->PakFileName).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar1 = (param_1->FileName).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(param_1->FileName).Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar7);
  uVar6 = uVar2 - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar6) - uVar3 ^ uVar6 << 8;
  uVar8 = (uVar3 - uVar2) - uVar6 ^ uVar2 >> 0xd;
  uVar3 = (uVar6 - uVar8) - uVar2 ^ uVar8 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar8 ^ uVar3 << 0x10;
  uVar6 = (uVar8 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 << 10;
  return (uVar6 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// GuardedMain @ 148da42d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __cdecl GuardedMain(wchar_t *param_1)

{
  code *pcVar1;
  float fVar2;
  FFeedbackContext *pFVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FTrackedActivity *pFVar8;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this;
  FDateTime this_00;
  FEngineVersion *this_01;
  FText *pFVar9;
  ForAnyElementType _Source;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined1 auStackY_1128 [32];
  LARGE_INTEGER local_10f8;
  FString local_10f0;
  FTaskTagScope local_10e0 [2];
  FString local_10c8;
  FText local_10b8;
  FText local_10a8;
  FText local_1098;
  FSlowTask local_1088;
  uchar local_1028 [4096];
  ulonglong local_28;
  undefined8 uStack_10;
  
  uStack_10 = 0x148da42e8;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1128;
  pFVar8 = FTrackedActivity::GetEngineActivity();
  FTrackedActivity::Update(pFVar8,L"Starting",Yellow,0xffffffff);
  FTaskTagScope::FTaskTagScope(local_10e0,EGameThread);
  GGameThreadId = GetCurrentThreadId();
  GIsGameThreadIdInitialized = true;
  bVar4 = FParse::Param(param_1,L"waitforattach");
  if ((bVar4) || (bVar4 = FParse::Param(param_1,L"WaitForDebugger"), bVar4)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    bVar5 = FParse::Param(param_1,L"WaitForAttachNoBreak");
    if ((!bVar5) && (bVar5 = FParse::Param(param_1,L"WaitForDebuggerNoBreak"), !bVar5))
    goto LAB_148da43e8;
  }
  bVar5 = FWindowsPlatformMisc::IsDebuggerPresent();
  fVar2 = __real_3dcccccd;
  if (!bVar5) {
    uStack_10 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
    do {
      FWindowsPlatformProcess::Sleep(fVar2);
      bVar5 = FWindowsPlatformMisc::IsDebuggerPresent();
    } while (!bVar5);
  }
  if ((bVar4) && (bVar4 = FWindowsPlatformMisc::IsDebuggerPresent(), bVar4)) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
LAB_148da43e8:
  BootTimingPoint("DefaultMain");
  this = FCoreDelegates::GetPreMainInitDelegate();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this);
  this_00 = FDateTime::Now();
  FDateTime::ToString((FDateTime *)this_00.Ticks,&local_10c8);
  this_01 = FEngineVersion::Current();
  FEngineVersionBase::GetChangelist((FEngineVersionBase *)this_01);
  FString::PrintfImpl(&local_10f0,L"unreal-v%i-%s.dmp");
  _Source.Data = (FScriptContainerElement *)L"";
  if (local_10f0.Data.ArrayNum != 0) {
    _Source.Data = local_10f0.Data.AllocatorInstance.Data;
  }
  wcscpy(MiniDumpFilenameW,(wchar_t *)_Source.Data);
  if (local_10f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_10f0.Data.AllocatorInstance.Data);
  }
  if (local_10c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_10c8.Data.AllocatorInstance.Data);
  }
  pFVar8 = FTrackedActivity::GetEngineActivity();
  FTrackedActivity::Update(pFVar8,L"Initializing",0xffffffff);
  FBootProfiling::InitCounters();
  iVar6 = FEngineLoop::PreInitPreStartupScreen(&GEngineLoop,param_1);
  if (iVar6 == 0) {
    iVar6 = FEngineLoop::PreInitPostStartupScreen(&GEngineLoop,param_1);
    pFVar3 = GWarn;
    if (iVar6 == 0) {
      iVar6 = 0;
      if (GIsRequestingExit == false) {
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_10b8,L"EngineInit",L"EngineInit_Loading",L"Loading...");
        FSlowTask::FSlowTask(&local_1088,__real_42c80000,pFVar9,true,pFVar3);
        FSlowTask::Initialize(&local_1088);
        if (local_10b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_10b8.TextData.Reference + 0x10))();
        }
        pFVar9 = FText::FText(&local_10a8);
        FSlowTask::EnterProgressFrame(&local_1088,__real_42a00000,pFVar9);
        if (local_10a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_10a8.TextData.Reference + 0x10))();
        }
        pFVar9 = FText::FText(&local_1098);
        FSlowTask::EnterProgressFrame(&local_1088,__real_41a00000,pFVar9);
        if (local_1098.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1098.TextData.Reference + 0x10))();
        }
        iVar6 = FEngineLoop::Init(&GEngineLoop);
        FSlowTask::Destroy(&local_1088);
        if (local_1088.FrameMessage.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1088.FrameMessage.TextData.Reference + 0x10))();
        }
        if (local_1088.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1088.DefaultMessage.TextData.Reference + 0x10))();
        }
        QueryPerformanceCounter(&local_10f8);
        if (4 < (byte)LogLoad._0_1_) {
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogLoad);
        }
        BootTimingPoint("Tick loop starting");
        DumpBootTiming();
        pFVar8 = FTrackedActivity::GetEngineActivity();
        FTrackedActivity::Update(pFVar8,L"Ticking loop",Green,0xffffffff);
        if (GUELibraryOverrideSettings.bIsEmbedded == false) {
          while (GIsRequestingExit == false) {
            FEngineLoop::Tick(&GEngineLoop);
          }
        }
        if (-1 < BookmarkChannel->Enabled) {
          if (__BookmarkPoint196 == false) {
            FMiscTrace::OutputBookmarkSpec
                      (&__BookmarkPoint196,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\Launch.cpp"
                       ,0xc4,L"Tick loop end");
            __BookmarkPoint196 = true;
          }
          uVar7 = CallstackTrace_GetCurrentId();
          local_1028[0] = '\0';
          FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint196,uVar7,1,local_1028);
        }
      }
    }
    else {
      FPreInitContext::Cleanup(&GEngineLoop.PreInitContext);
    }
  }
  else {
    FPreInitContext::Cleanup(&GEngineLoop.PreInitContext);
  }
  if (GUELibraryOverrideSettings.bIsEmbedded == false) {
    RequestEngineExit(L"EngineExit() was called");
    FEngineLoop::Exit(&GEngineLoop);
  }
  FTaskTagScope::~FTaskTagScope(local_10e0);
  return iVar6;
}

// GuardedMainWrapper @ 148da4760

int __cdecl GuardedMainWrapper(wchar_t *param_1)

{
  int iVar1;
  
  if (GEnableInnerException) {
    iVar1 = GuardedMain(param_1);
    return iVar1;
  }
  iVar1 = GuardedMain(param_1);
  return iVar1;
}

// HandleConfigReload @ 148da47a0

void __cdecl HandleConfigReload(bool param_1)

{
  if (param_1) {
    UE::ConfigUtilities::ReapplyRecordedCVarSettingsFromIni();
    UE::ConfigUtilities::DeleteRecordedCVarSettingsFromIni();
    return;
  }
  return;
}

// InitializeStdOutDevice @ 148da4ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InitializeStdOutDevice(void)

{
  code *pcVar1;
  TUniquePtr<FOutputDeviceStdOutput,TDefaultDelete<FOutputDeviceStdOutput>_> this;
  bool bVar2;
  FOutputDeviceStdOutput *this_00;
  FOutputDeviceStdOutput *pFVar3;
  FOutputDeviceRedirector *this_01;
  
  if (GScopedStdOut.Ptr != (FOutputDeviceStdOutput *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!GScopedStdOut",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                       ,0x239,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = operator_new(0x18);
  pFVar3 = (FOutputDeviceStdOutput *)0x0;
  if (this_00 != (FOutputDeviceStdOutput *)0x0) {
    pFVar3 = FOutputDeviceStdOutput::FOutputDeviceStdOutput(this_00);
  }
  this.Ptr = GScopedStdOut.Ptr;
  bVar2 = GScopedStdOut.Ptr != (FOutputDeviceStdOutput *)0x0;
  GScopedStdOut.Ptr = pFVar3;
  if (bVar2) {
    FOutputDevice::~FOutputDevice((FOutputDevice *)this.Ptr);
    operator_delete(this.Ptr,0x18);
  }
  this_01 = GetGlobalLogSingleton();
  FOutputDeviceRedirector::AddOutputDevice(this_01,(FOutputDevice *)GScopedStdOut.Ptr);
  return;
}

// InvalidParameterHandler @ 148da4b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
InvalidParameterHandler
          (wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,ulong64 param_5)

{
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogLaunchWindows);
  return;
}

// IsServerDelegateForOSS @ 148da4c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl IsServerDelegateForOSS(FName param_1)

{
  int iVar1;
  longlong lVar2;
  UEngine *this;
  ENetMode EVar3;
  UClass *pUVar4;
  UWorldProxy this_00;
  
  this = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar4 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar2 = this->_padding_;
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      this_00.World = UGameEngine::GetGameWorld((UGameEngine *)this);
      goto LAB_148da4c6f;
    }
  }
  this_00.World = GWorld.World;
  if (GIsPlayInEditorWorld == false) {
    return false;
  }
LAB_148da4c6f:
  if ((this_00.World != (UWorld *)0x0) &&
     (EVar3 = UWorld::InternalGetNetMode(this_00.World), EVar3 - NM_DedicatedServer < 2)) {
    return true;
  }
  return false;
}

// LaunchCheckForCmdLineFile @ 148da4cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
LaunchCheckForCmdLineFile(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  IFileManager *pIVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined4 local_res10 [2];
  bool *local_res18;
  FScriptContainerElement *local_res20;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FScriptContainerElement *local_1b8;
  FScriptContainerElement *local_1b0;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  bool **local_158;
  bool *local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  code *local_c8;
  bool ****local_c0;
  FString local_b8;
  FString local_a8;
  bool ***local_98;
  FString *local_90;
  undefined4 *local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  bVar11 = false;
  local_res10[0] = 0;
  local_158 = &local_res18;
  *param_2 = false;
  local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.Data.ArrayNum = 0;
  local_258.Data.ArrayMax = 0;
  local_res18 = param_2;
  local_150 = param_2;
  pwVar5 = FCommandLine::Get();
  bVar2 = FParse::Value(pwVar5,L"-CmdLineFile=",&local_258,true,(wchar_t **)0x0);
  if (bVar2) {
    do {
      bVar2 = FString::EndsWith(&local_258,L".txt",4,IgnoreCase);
      if (bVar2) {
        pFVar9 = (param_1->AllocatorInstance).Data;
        pFVar10 = pFVar9 + (longlong)param_1->ArrayNum * 0x10;
        iVar4 = local_258.Data.ArrayNum;
        for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 0x10) {
          iVar3 = *(int *)(pFVar9 + 8);
          if (iVar3 == iVar4) {
            if (1 < iVar3) {
              iVar4 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)pFVar9,
                                 (wchar_t *)local_258.Data.AllocatorInstance.Data);
              bVar2 = iVar4 == 0;
              iVar4 = local_258.Data.ArrayNum;
              goto LAB_148da4fc6;
            }
LAB_148da501d:
            pwVar5 = FCommandLine::Get();
            FString::FString(&local_208,pwVar5);
            local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_198.Data.ArrayNum = 0;
            local_198.Data.ArrayMax = 0;
            local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_238.Data.ArrayNum = 0;
            local_238.Data.ArrayMax = 0;
            FString::FString(&local_f8,L"-CmdLineFile=");
            bVar2 = FString::Split(&local_208,&local_f8,&local_198,&local_238);
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            if (bVar2) {
              local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1b8 = (FScriptContainerElement *)L"";
              if (local_238.Data.ArrayNum != 0) {
                local_1b8 = local_238.Data.AllocatorInstance.Data;
              }
              local_168.Data.ArrayNum = 0;
              local_168.Data.ArrayMax = 0;
              bVar2 = FParse::Token((wchar_t **)&local_1b8,&local_168,false,L'\0');
              if (bVar2) {
                pFVar6 = FString::FString(&local_70,(wchar_t *)local_1b8);
                if (&local_238 != pFVar6) {
                  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_238.Data.AllocatorInstance.Data);
                  }
                  local_238.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
                  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_238.Data.ArrayNum = (pFVar6->Data).ArrayNum;
                  local_238.Data.ArrayMax = (pFVar6->Data).ArrayMax;
                  (pFVar6->Data).ArrayNum = 0;
                  (pFVar6->Data).ArrayMax = 0;
                }
                if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_70.Data.AllocatorInstance.Data);
                }
              }
              FString::ConcatFC(&local_e8,&local_198,L" ");
              FString::ConcatFF(&local_1d8,&local_e8,&local_238);
              if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_208.Data.AllocatorInstance.Data);
              }
              local_208.Data.AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
              local_208.Data.ArrayNum = local_1d8.Data.ArrayNum;
              local_208.Data.ArrayMax = local_1d8.Data.ArrayMax;
              local_1d8.Data.ArrayNum = 0;
              local_1d8.Data.ArrayMax = 0;
              local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
              FString::TrimStartAndEndInline(&local_208);
              FVar8.Data = (FScriptContainerElement *)L"";
              if (local_208.Data.ArrayNum != 0) {
                FVar8.Data = local_208.Data.AllocatorInstance.Data;
              }
              FCommandLine::Set((wchar_t *)FVar8.Data);
              *local_res18 = true;
              if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_168.Data.AllocatorInstance.Data);
              }
            }
            if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238.Data.AllocatorInstance.Data);
            }
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.Data.AllocatorInstance.Data);
            }
            goto LAB_148da55c1;
          }
          bVar2 = iVar3 + iVar4 == 1;
LAB_148da4fc6:
          if (bVar2) goto LAB_148da501d;
        }
        bVar2 = `LaunchCheckForCmdLineFile'::__l2::<lambda_2>::operator()(&local_158,&local_258);
        local_res10[0] = CONCAT31(local_res10[0]._1_3_,bVar2);
        if (bVar2) {
LAB_148da51e8:
          bVar2 = false;
        }
        else {
          bVar11 = true;
          pFVar6 = FPaths::ProjectDir(&local_60);
          iVar4 = (pFVar6->Data).ArrayNum;
          iVar3 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar3 = 0;
          }
          if (iVar3 < 1) goto LAB_148da51e8;
          bVar2 = true;
        }
        if ((bVar11) &&
           (bVar11 = false, local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          FPaths::ProjectDir(&local_128);
          FString::ConcatFF(&local_d8,&local_128,&local_258);
          bVar2 = `LaunchCheckForCmdLineFile'::__l2::<lambda_2>::operator()(&local_158,&local_d8);
          local_res10[0] = CONCAT31(local_res10[0]._1_3_,bVar2);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if ((char)local_res10[0] == '\0') {
            FString::ConcatFC(&local_138,&local_128,L"Plugins/");
            pIVar7 = IFileManager::Get();
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_138.Data.ArrayNum != 0) {
              FVar8.Data = local_138.Data.AllocatorInstance.Data;
            }
            local_c8 = UE::Core::Private::Function::
                       TFunctionRefCaller<`LaunchCheckForCmdLineFile'::__l34::<lambda_3>,bool,wchar_t_const_*,bool>
                       ::Call;
            local_98 = &local_158;
            local_90 = &local_258;
            local_88 = local_res10;
            local_c0 = &local_98;
            (**(code **)((longlong)*pIVar7 + 0x90))(pIVar7,FVar8.Data,&local_c8);
            DestructItems<FString,int>((FString *)0x0,0);
            if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.Data.AllocatorInstance.Data);
            }
          }
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
        }
        if ((char)local_res10[0] == '\0') {
          if (2 < (byte)LogInit._0_1_) {
            UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogInit);
          }
          pwVar5 = FCommandLine::Get();
          FString::FString(&local_1f8,pwVar5);
          local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_188.Data.ArrayNum = 0;
          local_188.Data.ArrayMax = 0;
          local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_228.Data.ArrayNum = 0;
          local_228.Data.ArrayMax = 0;
          FString::FString(&local_b8,L"-CmdLineFile=");
          bVar2 = FString::Split(&local_1f8,&local_b8,&local_188,&local_228);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (bVar2) {
            local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b0 = (FScriptContainerElement *)L"";
            if (local_228.Data.ArrayNum != 0) {
              local_1b0 = local_228.Data.AllocatorInstance.Data;
            }
            local_148.Data.ArrayNum = 0;
            local_148.Data.ArrayMax = 0;
            bVar2 = FParse::Token((wchar_t **)&local_1b0,&local_148,false,L'\0');
            if (bVar2) {
              pFVar6 = FString::FString(&local_50,(wchar_t *)local_1b0);
              if (&local_228 != pFVar6) {
                if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_228.Data.AllocatorInstance.Data);
                }
                local_228.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
                (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_228.Data.ArrayNum = (pFVar6->Data).ArrayNum;
                local_228.Data.ArrayMax = (pFVar6->Data).ArrayMax;
                (pFVar6->Data).ArrayNum = 0;
                (pFVar6->Data).ArrayMax = 0;
              }
              if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_50.Data.AllocatorInstance.Data);
              }
            }
            FString::ConcatFC(&local_a8,&local_188,L" ");
            FString::ConcatFF(&local_1c8,&local_a8,&local_228);
            if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
            }
            local_1f8.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
            local_1f8.Data.ArrayNum = local_1c8.Data.ArrayNum;
            local_1f8.Data.ArrayMax = local_1c8.Data.ArrayMax;
            local_1c8.Data.ArrayNum = 0;
            local_1c8.Data.ArrayMax = 0;
            local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            FString::TrimStartAndEndInline(&local_1f8);
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_1f8.Data.ArrayNum != 0) {
              FVar8.Data = local_1f8.Data.AllocatorInstance.Data;
            }
            FCommandLine::Set((wchar_t *)FVar8.Data);
            *local_res18 = true;
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
          }
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
        }
        else {
          pFVar9 = (param_1->AllocatorInstance).Data;
          if (((pFVar9 <= (FScriptContainerElement *)&local_258) &&
              ((FScriptContainerElement *)&local_258 < pFVar9 + (longlong)param_1->ArrayMax * 0x10))
             && (bVar2 = FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = param_1->ArrayNum;
          if (iVar4 == param_1->ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar4 + 1;
          pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
          *(undefined8 *)pFVar9 = 0;
          *(FScriptContainerElement **)pFVar9 = local_258.Data.AllocatorInstance.Data;
          local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar9 + 8) = local_258.Data.ArrayNum;
          *(int *)(pFVar9 + 0xc) = local_258.Data.ArrayMax;
          local_258.Data.ArrayNum = 0;
          local_258.Data.ArrayMax = 0;
        }
      }
      else {
        if (2 < (byte)LogInit._0_1_) {
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogInit);
        }
        pwVar5 = FCommandLine::Get();
        FString::FString(&local_218,pwVar5);
        local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.Data.ArrayNum = 0;
        local_1a8.Data.ArrayMax = 0;
        local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_248.Data.ArrayNum = 0;
        local_248.Data.ArrayMax = 0;
        FString::FString(&local_118,L"-CmdLineFile=");
        bVar2 = FString::Split(&local_218,&local_118,&local_1a8,&local_248);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_res20 = (FScriptContainerElement *)L"";
          if (local_248.Data.ArrayNum != 0) {
            local_res20 = local_248.Data.AllocatorInstance.Data;
          }
          local_178.Data.ArrayNum = 0;
          local_178.Data.ArrayMax = 0;
          bVar2 = FParse::Token((wchar_t **)&local_res20,&local_178,false,L'\0');
          if (bVar2) {
            pFVar6 = FString::FString(&local_80,(wchar_t *)local_res20);
            if (&local_248 != pFVar6) {
              if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_248.Data.AllocatorInstance.Data);
              }
              local_248.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
              (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_248.Data.ArrayNum = (pFVar6->Data).ArrayNum;
              local_248.Data.ArrayMax = (pFVar6->Data).ArrayMax;
              (pFVar6->Data).ArrayNum = 0;
              (pFVar6->Data).ArrayMax = 0;
            }
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
          }
          FString::ConcatFC(&local_108,&local_1a8,L" ");
          FString::ConcatFF(&local_1e8,&local_108,&local_248);
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
          local_218.Data.AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
          local_218.Data.ArrayNum = local_1e8.Data.ArrayNum;
          local_218.Data.ArrayMax = local_1e8.Data.ArrayMax;
          local_1e8.Data.ArrayNum = 0;
          local_1e8.Data.ArrayMax = 0;
          local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          FString::TrimStartAndEndInline(&local_218);
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_218.Data.ArrayNum != 0) {
            FVar8.Data = local_218.Data.AllocatorInstance.Data;
          }
          FCommandLine::Set((wchar_t *)FVar8.Data);
          *local_res18 = true;
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
        }
        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.Data.AllocatorInstance.Data);
        }
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
      }
LAB_148da55c1:
      pwVar5 = FCommandLine::Get();
      bVar2 = FParse::Value(pwVar5,L"-CmdLineFile=",&local_258,true,(wchar_t **)0x0);
    } while (bVar2);
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  return;
}

// LaunchCheckForCommandLineAliases @ 148da5640

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
LaunchCheckForCommandLineAliases
          (FConfigFile *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,bool *param_3)

{
  longlong lVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FConfigSection *pFVar6;
  FString *pFVar7;
  FString *pFVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  undefined4 local_res20 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_168;
  ForAnyElementType local_158;
  undefined8 local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  wchar_t *local_118;
  FConfigSection *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  int local_e8;
  FString local_e0;
  FConfigSection *local_d0;
  int iStack_c8;
  uint uStack_c4;
  longlong *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70 [2];
  undefined4 local_44;
  
  uVar17 = 0;
  iVar15 = 0;
  local_res20[0] = 0;
  *param_3 = false;
  FString::FString(&local_a0,L"CommandLineAliases");
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  pFVar6 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
           ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                   *)param_1,&local_a0);
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (pFVar6 != (FConfigSection *)0x0) {
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 0;
    local_168.ArrayMax = 0;
    local_118 = FCommandLine::Get();
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Data.ArrayNum = 0;
    local_148.Data.ArrayMax = 0;
    bVar3 = FParse::Token(&local_118,&local_148,false,L'\0');
    if (bVar3) {
      do {
        if (((local_168.AllocatorInstance.Data <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x10)) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = local_168.ArrayNum;
        if (local_168.ArrayNum == local_168.ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_168.AllocatorInstance,&local_168.ArrayMax);
        }
        FVar12.Data = local_148.Data.AllocatorInstance.Data;
        pFVar10 = local_168.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
        local_168.ArrayNum = iVar4 + 1;
        *(FScriptContainerElement **)pFVar10 = (FScriptContainerElement *)0x0;
        lVar14 = (longlong)local_148.Data.ArrayNum;
        *(int *)(pFVar10 + 8) = local_148.Data.ArrayNum;
        if (local_148.Data.ArrayNum == 0) {
          *(int *)(pFVar10 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_148.Data.ArrayNum,0,(ForAnyElementType *)pFVar10,
                     local_148.Data.ArrayNum,(int *)(pFVar10 + 0xc));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar10,FVar12.Data,lVar14 * 2);
        }
        bVar3 = FParse::Token(&local_118,&local_148,false,L'\0');
      } while (bVar3);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    uVar13 = (uint)pFVar6->_padding_;
    TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pFVar6->_padding_;
    uStack_c4 = 1;
    local_b0 = 0;
    uStack_b4 = uVar17;
    if (uVar13 != 0) {
      plVar16 = (longlong *)pFVar6->_padding_;
      if ((longlong *)pFVar6->_padding_ == (longlong *)0x0) {
        plVar16 = (longlong *)TStack_108.Array;
      }
      uVar5 = (uint)*plVar16;
      local_b0 = 0;
      iVar15 = 0;
      while (uVar5 == 0) {
        lVar14 = (longlong)iVar15;
        local_b0 = local_b0 + 0x20;
        iVar15 = iVar15 + 1;
        uStack_b4 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_148da58cd;
        uVar5 = *(uint *)((longlong)plVar16 + lVar14 * 4 + 4);
      }
      uStack_c4 = -uVar5 & uVar5;
      uVar9 = (ulonglong)uStack_c4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_e8 = (int)lVar14;
      uStack_b4 = local_b0 + -1 + local_e8;
      if ((int)uVar13 < (int)uStack_b4) {
        uStack_b4 = uVar13;
      }
    }
LAB_148da58cd:
    uStack_b8 = 0xffffffff;
    uStack_ac = local_44;
    TStack_108._padding_ = CONCAT44(uStack_c4,iVar15);
    TStack_108.UnvisitedBitMask = 0xffffffff;
    TStack_108._28_4_ = local_44;
    TStack_108.BaseBitIndex = local_b0;
    local_110 = pFVar6;
    local_d0 = pFVar6;
    iStack_c8 = iVar15;
    local_c0 = (longlong *)TStack_108.Array;
    TStack_108.CurrentBitIndex = uStack_b4;
    if ((int)uStack_b4 < (int)uVar13) {
LAB_148da5920:
      uVar13 = 0;
      pFVar7 = FName::ToString((FName *)(local_110->_padding_ +
                                        (longlong)TStack_108.CurrentBitIndex * 0x28),&local_80);
      pFVar8 = FString::FString(&local_90,L"-");
      FString::ConcatFF(&local_e0,pFVar8,pFVar7);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
LAB_148da5980:
      if (((int)uVar13 < 0) || (local_168.ArrayNum <= (int)uVar13)) goto LAB_148da5dae;
      uVar18 = ~uVar13 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar13 < local_168.ArrayNum) {
        uVar5 = uVar18;
      }
      if ((uVar5 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar12.Data = local_168.AllocatorInstance.Data;
      pFVar10 = (param_2->AllocatorInstance).Data;
      pFVar11 = pFVar10 + (longlong)param_2->ArrayNum * 0x10;
      lVar14 = (longlong)(int)uVar13 * 0x10;
      for (; pFVar10 != pFVar11; pFVar10 = pFVar10 + 0x10) {
        iVar15 = *(int *)(pFVar10 + 8);
        iVar4 = *(int *)(FVar12.Data + lVar14 + 8);
        if (iVar15 == iVar4) {
          if (1 < iVar15) {
            iVar15 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)pFVar10,*(wchar_t **)(FVar12.Data + lVar14));
            bVar3 = iVar15 == 0;
            goto LAB_148da5a36;
          }
LAB_148da5aa5:
          TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAt(&local_168,uVar13,Default);
          uVar13 = uVar13 - 1;
          *param_3 = true;
          goto LAB_148da5980;
        }
        bVar3 = iVar15 + iVar4 == 1;
LAB_148da5a36:
        if (bVar3) goto LAB_148da5aa5;
      }
      uVar5 = 0;
      if ((int)uVar13 < local_168.ArrayNum) {
        uVar5 = uVar18;
      }
      if ((uVar5 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar15 = *(int *)(local_168.AllocatorInstance.Data + lVar14 + 8);
      if (iVar15 == local_e0.Data.ArrayNum) {
        if (1 < iVar15) {
          iVar15 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)(local_168.AllocatorInstance.Data + lVar14),
                              (wchar_t *)local_e0.Data.AllocatorInstance.Data);
          bVar3 = iVar15 == 0;
          goto LAB_148da5adc;
        }
      }
      else {
        bVar3 = iVar15 + local_e0.Data.ArrayNum == 1;
LAB_148da5adc:
        if (!bVar3) {
          uVar13 = uVar13 + 1;
          goto LAB_148da5980;
        }
      }
      uVar5 = 0;
      if ((int)uVar13 < local_168.ArrayNum) {
        uVar5 = uVar18;
      }
      if ((uVar5 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = local_168.AllocatorInstance.Data + lVar14;
      pFVar10 = (param_2->AllocatorInstance).Data;
      if (((pFVar10 <= pFVar11) && (pFVar11 < pFVar10 + (longlong)param_2->ArrayMax * 0x10)) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar15 = param_2->ArrayNum;
      if (iVar15 == param_2->ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar15 + 1;
      pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar15 * 0x10;
      *(undefined8 *)pFVar10 = 0;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar11;
      *(undefined8 *)pFVar11 = 0;
      *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)(pFVar11 + 8);
      *(undefined4 *)(pFVar10 + 0xc) = *(undefined4 *)(pFVar11 + 0xc);
      *(undefined8 *)(pFVar11 + 8) = 0;
      lVar1 = local_110->_padding_ + (longlong)TStack_108.CurrentBitIndex * 0x28;
      if (*(char *)(local_110->_padding_ + 0x1d + (longlong)TStack_108.CurrentBitIndex * 0x28) ==
          '\0') {
        iVar15 = *(int *)(lVar1 + 0x10);
        uVar17 = uVar17 | 2;
        _Src = *(void **)(lVar1 + 8);
        local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.Data.ArrayNum = iVar15;
        if (iVar15 == 0) {
          local_138.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar15,0,(ForAnyElementType *)&local_138,iVar15,&local_138.Data.ArrayMax);
          memcpy(local_138.Data.AllocatorInstance.Data,_Src,(longlong)iVar15 * 2);
        }
        pFVar7 = &local_138;
      }
      else {
        uVar17 = uVar17 | 1;
        pFVar7 = FConfigValue::ExpandValue(local_70,(FString *)(lVar1 + 8));
      }
      local_158.Data = (FScriptContainerElement *)0x0;
      iVar15 = (pFVar7->Data).ArrayNum;
      pFVar10 = (pFVar7->Data).AllocatorInstance.Data;
      local_150 = CONCAT44(local_150._4_4_,iVar15);
      if (iVar15 == 0) {
        local_150 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar15,0,&local_158,iVar15,(int *)((longlong)&local_150 + 4));
        memcpy(local_158.Data,pFVar10,(longlong)iVar15 * 2);
      }
      if (((uVar17 & 2) != 0) &&
         (uVar17 = uVar17 & 0xfffffffd,
         local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (((uVar17 & 1) != 0) &&
         (uVar17 = uVar17 & 0xfffffffe,
         local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
      }
      uVar5 = 0;
      if ((int)uVar13 < local_168.ArrayNum) {
        uVar5 = uVar18;
      }
      if ((uVar5 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = local_168.AllocatorInstance.Data + lVar14;
      if (pFVar10 != (FScriptContainerElement *)&local_158) {
                    /* WARNING: Load size is inaccurate */
        if (*pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(*pFVar10);
        }
        *(FScriptContainerElement **)pFVar10 = local_158.Data;
        local_158.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)(pFVar10 + 8) = (undefined4)local_150;
        *(undefined4 *)(pFVar10 + 0xc) = local_150._4_4_;
        local_150 = 0;
      }
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      uVar13 = uVar13 + 1;
      *param_3 = true;
      goto LAB_148da5980;
    }
LAB_148da5ddf:
    if (*param_3 != false) {
      iVar15 = local_168.ArrayNum;
      uVar9 = (ulonglong)local_168.ArrayNum;
      bVar3 = true;
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar10 = local_168.AllocatorInstance.Data + uVar9 * 0x10;
      local_128.Data.ArrayNum = 0;
      local_128.Data.ArrayMax = 0;
      FVar12.Data = local_168.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar9 != iVar15) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (FVar12.Data == pFVar10) break;
        if (bVar3) {
          bVar3 = false;
        }
        else {
          FString::AppendChars(&local_128,L" ",1);
        }
        iVar4 = *(int *)(FVar12.Data + 8) + -1;
        if (*(int *)(FVar12.Data + 8) == 0) {
          iVar4 = 0;
        }
        FString::AppendChars(&local_128,*(wchar_t **)FVar12.Data,iVar4);
        uVar9 = local_168._8_8_ & 0xffffffff;
        FVar12.Data = FVar12.Data + 0x10;
      }
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar12.Data = local_128.Data.AllocatorInstance.Data;
      }
      FCommandLine::Set((wchar_t *)FVar12.Data);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FString,int>((FString *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
    if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
  }
  return;
LAB_148da5dae:
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  if ((int)*(longlong *)&(TStack_108.Array)->NumBits <= TStack_108.CurrentBitIndex)
  goto LAB_148da5ddf;
  goto LAB_148da5920;
}

// LaunchCheckForFileOverride @ 148da5ee0

bool __cdecl LaunchCheckForFileOverride(wchar_t *param_1,bool *param_2)

{
  char cVar1;
  bool bVar2;
  Type TVar3;
  FPlatformFileManager *pFVar4;
  IPlatformFile *pIVar5;
  IPlatformFile *pIVar6;
  FText *pFVar7;
  IPlatformFile *pIVar8;
  IPlatformFile *pIVar9;
  FString local_58;
  FString local_48;
  FString local_38;
  FText local_28;
  
  *param_2 = false;
  pFVar4 = FPlatformFileManager::Get();
  pIVar5 = FPlatformFileManager::GetPlatformFile(pFVar4);
  pFVar4 = FPlatformFileManager::Get();
  pIVar6 = FPlatformFileManager::GetPlatformFile(pFVar4,L"StorageServerClient");
  pIVar9 = (IPlatformFile *)0x0;
  if ((pIVar6 != (IPlatformFile *)0x0) &&
     (cVar1 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,pIVar5,param_1), cVar1 != '\0')) {
    cVar1 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,pIVar5,param_1);
    pIVar8 = pIVar9;
    if (cVar1 != '\0') {
      pIVar8 = pIVar6;
    }
    if (pIVar8 != (IPlatformFile *)0x0) {
      pFVar4 = FPlatformFileManager::Get();
      FPlatformFileManager::SetPlatformFile(pFVar4,pIVar8);
      bVar2 = UE::IsUsingZenPakFileStreaming();
      pIVar5 = pIVar8;
      if (bVar2) {
        pFVar4 = FPlatformFileManager::Get();
        FPlatformFileManager::SetPlatformPhysical(pFVar4,pIVar8);
      }
      goto LAB_148da6159;
    }
  }
  while( true ) {
    pIVar8 = pIVar5;
    pFVar4 = FPlatformFileManager::Get();
    pIVar6 = FPlatformFileManager::GetPlatformFile(pFVar4,L"StreamingFile");
    if ((pIVar6 == (IPlatformFile *)0x0) ||
       (cVar1 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,pIVar8,param_1), cVar1 == '\0')) {
      pFVar4 = FPlatformFileManager::Get();
      pIVar6 = FPlatformFileManager::GetPlatformFile(pFVar4,L"NetworkFile");
      pIVar5 = pIVar9;
      if ((pIVar6 == (IPlatformFile *)0x0) ||
         (cVar1 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,pIVar8,param_1), cVar1 == '\0'))
      goto LAB_148da6159;
    }
    cVar1 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,pIVar8,param_1);
    if (cVar1 == '\0') {
      pIVar6 = pIVar9;
    }
    if (pIVar6 != (IPlatformFile *)0x0) {
      pFVar4 = FPlatformFileManager::Get();
      FPlatformFileManager::SetPlatformFile(pFVar4,pIVar6);
      pIVar8 = pIVar6;
    }
    pIVar5 = pIVar6;
    if (cVar1 != '\0') goto LAB_148da6159;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FParse::Value(param_1,L"-FileHostIP=",&local_58,true,(wchar_t **)0x0);
    FString::Replace(&local_58,&local_38,L"+",L"\n    ",IgnoreCase);
    FString::PrintfImpl(&local_48,
                        L"Failed to connect to any of the following file servers:\n\n    %s\n\nWould you like to try again? No will fallback to local disk files, Cancel will quit."
                       );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = FText::FromString(&local_28,&local_48);
    TVar3 = FMessageDialog::Open(YesNoCancel,pFVar7);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (TVar3 == No) break;
    if (TVar3 == Cancel) {
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      return false;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pIVar5 = pIVar8;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_148da6159:
  bVar2 = UE::IsUsingZenPakFileStreaming();
  if ((bVar2) || (pIVar5 == (IPlatformFile *)0x0)) {
    pFVar4 = FPlatformFileManager::Get();
    pIVar6 = FPlatformFileManager::GetPlatformFile(pFVar4,L"PakFile");
    if ((pIVar6 != (IPlatformFile *)0x0) &&
       (cVar1 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,pIVar8,param_1), cVar1 != '\0')) {
      cVar1 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,pIVar8,param_1);
      if (cVar1 == '\0') {
        pIVar6 = pIVar9;
      }
      if (pIVar6 != (IPlatformFile *)0x0) {
        pFVar4 = FPlatformFileManager::Get();
        FPlatformFileManager::SetPlatformFile(pFVar4,pIVar6);
        pIVar8 = pIVar6;
      }
    }
    if (pIVar5 == (IPlatformFile *)0x0) {
      pFVar4 = FPlatformFileManager::Get();
      pIVar5 = FPlatformFileManager::GetPlatformFile(pFVar4,L"CachedReadFile");
      if (((pIVar5 != (IPlatformFile *)0x0) &&
          (cVar1 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,pIVar8,param_1), cVar1 != '\0'))
         && (cVar1 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,pIVar8,param_1), cVar1 != '\0'))
      {
        pFVar4 = FPlatformFileManager::Get();
        FPlatformFileManager::SetPlatformFile(pFVar4,pIVar5);
        pIVar8 = pIVar5;
      }
      pFVar4 = FPlatformFileManager::Get();
      pIVar5 = FPlatformFileManager::GetPlatformFile(pFVar4,L"SandboxFile");
      if (((pIVar5 != (IPlatformFile *)0x0) &&
          (cVar1 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,pIVar8,param_1), cVar1 != '\0'))
         && (cVar1 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,pIVar8,param_1), cVar1 != '\0'))
      {
        pFVar4 = FPlatformFileManager::Get();
        FPlatformFileManager::SetPlatformFile(pFVar4,pIVar5);
        pIVar8 = pIVar5;
      }
    }
  }
  pFVar4 = FPlatformFileManager::Get();
  pIVar5 = FPlatformFileManager::GetPlatformFile(pFVar4,L"ProfileFile");
  if (((pIVar5 != (IPlatformFile *)0x0) &&
      (cVar1 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,pIVar8,param_1), cVar1 != '\0')) &&
     (cVar1 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,pIVar8,param_1), cVar1 != '\0')) {
    pFVar4 = FPlatformFileManager::Get();
    FPlatformFileManager::SetPlatformFile(pFVar4,pIVar5);
    pIVar8 = pIVar5;
  }
  pFVar4 = FPlatformFileManager::Get();
  pIVar5 = FPlatformFileManager::GetPlatformFile(pFVar4,L"SimpleProfileFile");
  if (((pIVar5 != (IPlatformFile *)0x0) &&
      (cVar1 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,pIVar8,param_1), cVar1 != '\0')) &&
     (cVar1 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,pIVar8,param_1), cVar1 != '\0')) {
    pFVar4 = FPlatformFileManager::Get();
    FPlatformFileManager::SetPlatformFile(pFVar4,pIVar5);
    pIVar8 = pIVar5;
  }
  pFVar4 = FPlatformFileManager::Get();
  pIVar5 = FPlatformFileManager::GetPlatformFile(pFVar4,L"FileReadStats");
  if (((pIVar5 != (IPlatformFile *)0x0) &&
      (cVar1 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,pIVar8,param_1), cVar1 != '\0')) &&
     (cVar1 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,pIVar8,param_1), cVar1 != '\0')) {
    pFVar4 = FPlatformFileManager::Get();
    FPlatformFileManager::SetPlatformFile(pFVar4,pIVar5);
    pIVar8 = pIVar5;
  }
  pFVar4 = FPlatformFileManager::Get();
  pIVar5 = FPlatformFileManager::GetPlatformFile(pFVar4,L"FileOpenLog");
  if (((pIVar5 != (IPlatformFile *)0x0) &&
      (cVar1 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,pIVar8,param_1), cVar1 != '\0')) &&
     (cVar1 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,pIVar8,param_1), cVar1 != '\0')) {
    pFVar4 = FPlatformFileManager::Get();
    FPlatformFileManager::SetPlatformFile(pFVar4,pIVar5);
    pIVar8 = pIVar5;
  }
  pFVar4 = FPlatformFileManager::Get();
  pIVar5 = FPlatformFileManager::GetPlatformFile(pFVar4,L"LogFile");
  if (((pIVar5 != (IPlatformFile *)0x0) &&
      (cVar1 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,pIVar8,param_1), cVar1 != '\0')) &&
     (cVar1 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,pIVar8,param_1), cVar1 != '\0')) {
    pFVar4 = FPlatformFileManager::Get();
    FPlatformFileManager::SetPlatformFile(pFVar4,pIVar5);
    pIVar8 = pIVar5;
  }
  pFVar4 = FPlatformFileManager::Get();
  pIVar5 = FPlatformFileManager::GetPlatformFile(pFVar4);
  *param_2 = pIVar8 != pIVar5;
  return true;
}

// LaunchFixGameNameCase @ 148da64a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LaunchFixGameNameCase(void)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  FString local_e8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  FText local_78;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  if (((GInternalProjectName[0] == L'\0') ||
      (iVar4 = FGenericPlatformStricmp::Stricmp(GInternalProjectName,L"None"), iVar4 == 0)) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("FApp::HasProjectName()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                         ,0x2fc,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = FPaths::IsProjectFilePathSet();
  if (bVar3) {
    pFVar6 = FPaths::GetProjectFilePath(&local_68);
    FPaths::GetBaseFilename(&local_e8,pFVar6,true);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    iVar4 = local_e8.Data.ArrayNum;
    FVar12.Data = local_e8.Data.AllocatorInstance.Data;
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar11.Data = local_e8.Data.AllocatorInstance.Data;
    }
    iVar5 = wcscmp((wchar_t *)FVar11.Data,GInternalProjectName);
    if ((iVar5 != 0) && ((GInternalProjectName[0] == L'\0' || (GIsGameAgnosticExe != false)))) {
      FVar11.Data = (FScriptContainerElement *)L"";
      if (iVar4 != 0) {
        FVar11.Data = FVar12.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,GInternalProjectName);
      if (iVar4 == 0) {
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_e8.Data.ArrayNum != 0) {
          FVar12.Data = local_e8.Data.AllocatorInstance.Data;
        }
        wcsncpy(GInternalProjectName,(wchar_t *)FVar12.Data,0x3f);
        GInternalProjectName[0x3f] = L'\0';
        FVar12.Data = local_e8.Data.AllocatorInstance.Data;
      }
      else {
        pFVar7 = FText::FromString(&local_48,GInternalProjectName);
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_e8.Data.ArrayNum != 0) {
          FVar12.Data = local_e8.Data.AllocatorInstance.Data;
        }
        pFVar8 = FText::FromString(&local_38,(wchar_t *)FVar12.Data);
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_58,L"Core",L"MismatchedGameNames",
                            L"The name of the .uproject file (\'{0}\') must match the name of the project passed in the command line (\'{1}\')."
                           );
        pFVar10 = FTextFormat::FTextFormat(&local_28,pFVar9,Default);
        local_a8.Type = Text;
        FText::FText((FText *)&local_a8.TextValue,pFVar8);
        if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_88 = 4;
        FText::FText(&local_78,pFVar7);
        if ((local_78.TextData.Reference == (ITextData *)0x0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_d8.ArrayNum = 2;
        local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_d8.AllocatorInstance.Data,&local_a8,2);
        local_b8.TextFormatData.Object = (pFVar10->TextFormatData).Object;
        local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar10->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_c8,&local_b8,&local_d8);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
        if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_d8.AllocatorInstance.Data);
        }
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
        if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar10->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar1 = (pFVar8->TextData).Reference;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        pIVar1 = (pFVar7->TextData).Reference;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
        if (GIsBuildMachine == false) {
          if (2 < (byte)LogInit._0_1_) {
            FText::ToString(&local_c8);
            UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogInit);
          }
          FMessageDialog::Open(Ok,&local_c8);
        }
        wcsncpy(GInternalProjectName,L"",0x3f);
        GInternalProjectName[0x3f] = L'\0';
        if (GIsBuildMachine == false) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        FText::ToString(&local_c8);
        UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogInit);
        FVar12.Data = local_e8.Data.AllocatorInstance.Data;
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
          FVar12.Data = local_e8.Data.AllocatorInstance.Data;
        }
      }
    }
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
  }
  return;
}

// LaunchFixProjectPathCase @ 148da68a0

void __cdecl LaunchFixProjectPathCase(void)

{
  bool bVar1;
  FString local_28;
  FString local_18;
  
  bVar1 = FPaths::IsProjectFilePathSet();
  if (bVar1) {
    FPaths::GetProjectFilePath(&local_18);
    FPaths::FindCorrectCase(&local_28,&local_18);
    FPaths::SetProjectFilePath(&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LaunchHasIncompleteGameName @ 148da6900

bool __cdecl LaunchHasIncompleteGameName(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  size_t sVar5;
  FPlatformFileManager *pFVar6;
  IPlatformFile *pIVar7;
  int iVar8;
  ForAnyElementType FVar9;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  if (GInternalProjectName[0] != L'\0') {
    iVar3 = FGenericPlatformStricmp::Stricmp(GInternalProjectName,L"None");
    if (iVar3 != 0) {
      bVar1 = FPaths::IsProjectFilePathSet();
      if (!bVar1) {
        pTVar4 = &FPaths::RootDir(&local_18)->Data;
        sVar5 = wcslen(GInternalProjectName);
        iVar3 = (int)sVar5;
        if ((pTVar4->ArrayNum != 0) || (iVar8 = 2, iVar3 == -1)) {
          iVar8 = 1;
        }
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_28,pTVar4,iVar8 + iVar3);
        FString::PathAppend((FString *)&local_28,GInternalProjectName,iVar3);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        pFVar6 = FPlatformFileManager::Get();
        pIVar7 = FPlatformFileManager::GetPlatformFile(pFVar6);
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_28.ArrayNum != 0) {
          FVar9.Data = local_28.AllocatorInstance.Data;
        }
        cVar2 = (**(code **)((longlong)*pIVar7 + 0x118))(pIVar7,FVar9.Data);
        if (cVar2 == '\0') {
          FString::ConcatFC(&local_18,(FString *)&local_28,L"Game");
          pFVar6 = FPlatformFileManager::Get();
          pIVar7 = FPlatformFileManager::GetPlatformFile(pFVar6);
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_18.Data.ArrayNum != 0) {
            FVar9.Data = local_18.Data.AllocatorInstance.Data;
          }
          cVar2 = (**(code **)((longlong)*pIVar7 + 0x118))(pIVar7,FVar9.Data);
          if (cVar2 != '\0') {
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
            if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.AllocatorInstance.Data);
            }
            return true;
          }
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
        if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.AllocatorInstance.Data);
        }
      }
    }
  }
  return false;
}

// LaunchSetGameName @ 148da6a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl LaunchSetGameName(wchar_t *param_1,FString *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  size_t sVar7;
  ForAnyElementType FVar8;
  int iVar9;
  undefined1 auStack_f8 [32];
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  FScriptContainerElement *local_48;
  int local_40;
  FScriptContainerElement *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (!GIsGameAgnosticExe) {
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    bVar1 = ParseGameProjectFromCommandLine(param_1,&local_d8,&local_c8);
    if (bVar1) {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_c8.Data.ArrayNum != 0) {
        FVar8.Data = local_c8.Data.AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,GInternalProjectName);
      if (iVar4 != 0) {
        UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_c8.Data.ArrayNum != 0) {
        FVar8.Data = local_c8.Data.AllocatorInstance.Data;
      }
      wcsncpy(GInternalProjectName,(wchar_t *)FVar8.Data,0x3f);
      GInternalProjectName[0x3f] = L'\0';
      iVar4 = local_d8.Data.ArrayNum + -1;
      if (local_d8.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      FString::AssignRange(param_2,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar4);
      FPaths::SetProjectFilePath(&local_d8);
    }
    if ((GInternalProjectName[0] == L'\0') ||
       (iVar4 = FGenericPlatformStricmp::Stricmp(GInternalProjectName,L"None"), iVar4 == 0)) {
      UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    FVar8.Data = local_d8.Data.AllocatorInstance.Data;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      FVar8.Data = local_d8.Data.AllocatorInstance.Data;
    }
    goto LAB_148da6e80;
  }
  wcsncpy(GInternalProjectName,L"",0x3f);
  GInternalProjectName[0x3f] = L'\0';
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  bVar1 = ParseGameProjectFromCommandLine(param_1,&local_c8,&local_d8);
  iVar4 = 0;
  if (bVar1) {
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar8.Data = local_d8.Data.AllocatorInstance.Data;
    }
    wcsncpy(GInternalProjectName,(wchar_t *)FVar8.Data,0x3f);
    GInternalProjectName[0x3f] = L'\0';
LAB_148da6ce5:
    iVar3 = local_c8.Data.ArrayNum + -1;
    if (local_c8.Data.ArrayNum == 0) {
      iVar3 = iVar4;
    }
    FString::AssignRange(param_2,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar3);
    FPaths::SetProjectFilePath(&local_c8);
  }
  else {
    pwVar5 = FWindowsPlatformProcess::ExecutableName(true);
    FString::operator=(&local_d8,pwVar5);
    for (FVar8.Data = local_d8.Data.AllocatorInstance.Data;
        FVar8.Data != local_d8.Data.AllocatorInstance.Data + (longlong)local_d8.Data.ArrayNum * 2;
        FVar8.Data = FVar8.Data + 2) {
      if (*(wchar_t *)FVar8.Data == L'-') {
        iVar3 = (int)((longlong)FVar8.Data - (longlong)local_d8.Data.AllocatorInstance.Data >> 1);
        if (iVar3 != -1) {
          iVar9 = local_d8.Data.ArrayNum + -1;
          if (local_d8.Data.ArrayNum == 0) {
            iVar9 = iVar4;
          }
          iVar2 = iVar9;
          if (iVar3 < iVar9) {
            iVar2 = iVar3;
          }
          iVar3 = iVar4;
          if (0 < iVar2) {
            iVar3 = iVar2;
          }
          FString::RemoveAt(&local_d8,iVar3,iVar9 - iVar3,No);
        }
        break;
      }
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar8.Data = local_d8.Data.AllocatorInstance.Data;
    }
    wcsncpy(GInternalProjectName,(wchar_t *)FVar8.Data,0x3f);
    GInternalProjectName[0x3f] = L'\0';
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar8.Data = local_d8.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"UnrealGame");
    if (iVar3 != 0) {
      pFVar6 = FProjectDescriptor::GetExtension(&local_88);
      FString::ConcatFC(&local_98,&local_d8,L".");
      FString::ConcatFF(&local_a8,&local_98,pFVar6);
      local_78.DataPtr = L"..";
      local_38 = (FScriptContainerElement *)L"";
      if (local_a8.Data.ArrayNum != 0) {
        local_38 = local_a8.Data.AllocatorInstance.Data;
      }
      local_68 = L"..";
      local_48 = (FScriptContainerElement *)L"";
      if (local_d8.Data.ArrayNum != 0) {
        local_48 = local_d8.Data.AllocatorInstance.Data;
      }
      local_58 = L"..";
      local_78.Size = 2;
      local_60 = 2;
      local_50 = 2;
      local_40 = iVar4;
      if (local_48 != (FScriptContainerElement *)0x0) {
        sVar7 = wcslen((wchar_t *)local_48);
        local_40 = (int)sVar7;
      }
      local_30 = iVar4;
      if (local_38 != (FScriptContainerElement *)0x0) {
        sVar7 = wcslen((wchar_t *)local_38);
        local_30 = (int)sVar7;
      }
      FPaths::CombineInternal(&local_b8,&local_78,5);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      local_c8.Data.ArrayNum = local_b8.Data.ArrayNum;
      local_c8.Data.ArrayMax = local_b8.Data.ArrayMax;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      goto LAB_148da6ce5;
    }
  }
  if (bPrinted == false) {
    bPrinted = true;
    if ((GInternalProjectName[0] == L'\0') ||
       (iVar4 = FGenericPlatformStricmp::Stricmp(GInternalProjectName,L"None"), iVar4 == 0)) {
      UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    else if (3 < (byte)LogInit._0_1_) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogInit);
    }
  }
  FVar8.Data = local_c8.Data.AllocatorInstance.Data;
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    FVar8.Data = local_c8.Data.AllocatorInstance.Data;
  }
LAB_148da6e80:
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return true;
}

// LaunchStaticShutdownAfterError @ 148da6ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LaunchStaticShutdownAfterError(void)

{
  FScriptContainerElement *pFVar1;
  FPhysCommandHandler *pFVar2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  
  if (GPostInitHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnPostEngineInit,GPostInitHandle);
    GPostInitHandle.ID = 0;
  }
  if (GPhysCommandHandler != (FPhysCommandHandler *)0x0) {
    FPhysCommandHandler::Flush(GPhysCommandHandler);
    this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
    if (GPreGarbageCollectDelegateHandle.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                (this,GPreGarbageCollectDelegateHandle);
    }
    pFVar2 = GPhysCommandHandler;
    if (GPhysCommandHandler != (FPhysCommandHandler *)0x0) {
      if (((GPhysCommandHandler->PendingCommands).ArrayNum != 0) && (2 < (byte)LogPhysics._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogPhysics);
      }
      pFVar1 = (pFVar2->PendingCommands).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      operator_delete(pFVar2,0x10);
    }
    GPhysCommandHandler = (FPhysCommandHandler *)0x0;
  }
  TermGamePhysCore();
  return;
}

// LaunchUpdateMostRecentProjectFile @ 148da6ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LaunchUpdateMostRecentProjectFile(void)

{
  bool bVar1;
  char cVar2;
  IProjectManager *pIVar3;
  FString *pFVar4;
  FPlatformFileManager *pFVar5;
  IPlatformFile *pIVar6;
  IFileManager *pIVar7;
  int iVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  FString local_38;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  pIVar3 = IProjectManager::Get();
  pFVar4 = (FString *)(**(code **)((longlong)*pIVar3 + 0x30))(pIVar3);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  bVar1 = FFileHelper::LoadFileToString(&local_38,pwVar9,None,0);
  if (bVar1) {
    iVar8 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    if (iVar8 != 0) {
      FString::ConcatFC(&local_28,pFVar4,L".InProgress");
      pFVar5 = FPlatformFileManager::Get();
      pIVar6 = FPlatformFileManager::GetPlatformFile(pFVar5);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar10.Data = local_28.Data.AllocatorInstance.Data;
      }
      cVar2 = (**(code **)((longlong)*pIVar6 + 0x78))(pIVar6,FVar10.Data);
      if (cVar2 == '\0') {
        pFVar5 = FPlatformFileManager::Get();
        pIVar6 = FPlatformFileManager::GetPlatformFile(pFVar5);
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar10.Data = local_38.Data.AllocatorInstance.Data;
        }
        cVar2 = (**(code **)((longlong)*pIVar6 + 0x78))(pIVar6,FVar10.Data);
        if (cVar2 != '\0') {
          pFVar4 = FPaths::GetBaseFilename((FString *)&local_18,&local_38,true);
          if ((pFVar4->Data).ArrayNum == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
          }
          wcsncpy(GInternalProjectName,pwVar9,0x3f);
          GInternalProjectName[0x3f] = L'\0';
          if (local_18.DataPtr != (wchar_t *)0x0) {
            FMemory::Free(local_18.DataPtr);
          }
          FPaths::SetProjectFilePath(&local_38);
          if (3 < (byte)LogInit._0_1_) {
            UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogInit);
          }
          pIVar7 = IFileManager::Get();
          FVar10.Data = (FScriptContainerElement *)L"";
          if (local_28.Data.ArrayNum != 0) {
            FVar10.Data = local_28.Data.AllocatorInstance.Data;
          }
          local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
          local_18.DataPtr = L"";
          FFileHelper::SaveStringToFile(&local_18,(wchar_t *)FVar10.Data,AutoDetect,pIVar7,0);
        }
      }
      else if (3 < (byte)LogInit._0_1_) {
        UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// LaunchWindowsShutdown @ 148da70c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LaunchWindowsShutdown(void)

{
  FOutputDeviceRedirector *pFVar1;
  
  if (!bCalledOnce) {
    bCalledOnce = true;
    if (4 < (byte)LogExit._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogExit);
    }
    FGenericPlatformApplicationMisc::TearDown();
    FWindowsPlatformMisc::PlatformTearDown();
    if (GConfig != (FConfigCacheIni *)0x0) {
      FConfigCacheIni::Exit(GConfig);
      if (GConfig != (FConfigCacheIni *)0x0) {
        (**(code **)GConfig->_padding_)(GConfig,1);
      }
      GConfig = (FConfigCacheIni *)0x0;
    }
    pFVar1 = GetGlobalLogSingleton();
    if (pFVar1 != (FOutputDeviceRedirector *)0x0) {
      pFVar1 = GetGlobalLogSingleton();
      FOutputDeviceRedirector::TearDown(pFVar1);
    }
    FTextLocalizationManager::TearDown();
    FInternationalization::TearDown();
    FTraceAuxiliary::Shutdown();
  }
  if (GShouldPauseBeforeExit != false) {
                    /* WARNING: Could not recover jumptable at 0x000148da7168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Sleep(0xffffffff);
    return;
  }
  return;
}

// LaunchWindowsStartup @ 148da7180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
LaunchWindowsStartup
          (HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4,wchar_t *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_1048 [32];
  uint local_1028;
  uint local_1024;
  int local_1020;
  uchar local_1018 [4096];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x148da7195;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1048;
  if (-1 < BookmarkChannel->Enabled) {
    if (!__BookmarkPoint187) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint187,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\Windows\\LaunchWindows.cpp"
                 ,0xbb,L"WinMain.Enter");
      __BookmarkPoint187 = true;
    }
    uVar4 = CallstackTrace_GetCurrentId();
    local_1018[0] = '\0';
    FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint187,uVar4,1,local_1018);
  }
  _set_invalid_parameter_handler(InvalidParameterHandler);
  hInstance = param_1;
  if (param_5 == (wchar_t *)0x0) {
    param_5 = GetCommandLineW();
    bVar1 = ProcessCommandLine();
    if (bVar1) {
      param_5 = L"";
      if (GSavedCommandLine.Data.ArrayNum != 0) {
        param_5 = (wchar_t *)GSavedCommandLine.Data.AllocatorInstance;
      }
    }
  }
  bVar1 = FParse::Param(param_5,L"unattended");
  if (bVar1) {
    SetErrorMode(0x8003);
  }
  bVar1 = FParse::Param(param_5,L"crashreports");
  if (bVar1) {
    GAlwaysReportCrash = true;
  }
  local_1028 = 0;
  local_1024 = 0;
  FParse::Value(param_5,L"-processaffinity=",&local_1028);
  FParse::Value(param_5,L"-processaffinityphysical=",&local_1024);
  if (local_1028 == 0) {
    if (local_1024 == 0) goto LAB_148da72de;
    bVar1 = true;
    uVar4 = local_1024;
  }
  else {
    bVar1 = false;
    uVar4 = local_1028;
  }
  FWindowsPlatformProcess::SetProcessAffinity(uVar4,bVar1);
LAB_148da72de:
  bVar1 = FParse::Param(param_5,L"noexceptionhandler");
  bVar2 = FParse::Param(param_5,L"IgnoreDebugger");
  bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
  if ((!bVar3) || (bVar2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  bVar3 = FParse::Param(param_5,L"noinnerexception");
  if (((bVar3) || (FApp::bIsBenchmarking != false)) || (bVar1)) {
    GEnableInnerException = false;
  }
  if (((GUELibraryOverrideSettings.bIsEmbedded != false) || (bVar1)) ||
     ((bVar2 && (GAlwaysReportCrash == false)))) {
    iVar5 = GuardedMain(param_5);
  }
  else {
    GIsGuarded = true;
    iVar5 = GuardedMainWrapper(param_5);
    GIsGuarded = false;
    local_1020 = iVar5;
  }
  if (-1 < BookmarkChannel->Enabled) {
    if (__BookmarkPoint298 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint298,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\Windows\\LaunchWindows.cpp"
                 ,0x12a,L"WinMain.Exit");
      __BookmarkPoint298 = true;
    }
    uVar4 = CallstackTrace_GetCurrentId();
    local_1018[0] = '\0';
    FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint298,uVar4,1,local_1018);
  }
  return iVar5;
}

// OnStartupContentMounted @ 148da8420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl
OnStartupContentMounted
          (FInstallBundleRequestResultInfo *param_1,bool param_2,bool param_3,bool param_4,
          bool param_5)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  if ((param_1->bIsStartup != false) && (param_1->Result == OK)) {
    DumpEarlyReads(param_2,param_3,param_5);
    if (param_4) {
      UE::ConfigUtilities::ReapplyRecordedCVarSettingsFromIni();
      UE::ConfigUtilities::DeleteRecordedCVarSettingsFromIni();
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &IInstallBundleManager::InstallBundleCompleteDelegate,&GEngineLoop);
  }
  pFVar1 = (param_1->OptionalErrorCode).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (param_1->OptionalErrorText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

// ParseGameProjectFromCommandLine @ 148da85f0

bool __cdecl ParseGameProjectFromCommandLine(wchar_t *param_1,FString *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  ForAnyElementType _Src;
  ForAnyElementType _Src_00;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FString *pFVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  wchar_t *local_40;
  
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_40 = param_1;
  bVar3 = FParse::Value(param_1,L"project=",&local_50,true,(wchar_t **)0x0);
  FParse::Token(&local_60,&local_40,false);
  FString::TrimStartInline(&local_60);
  FString::operator=(param_2,L"");
  FString::operator=(param_3,L"");
  bVar2 = true;
  bVar10 = false;
  iVar5 = local_60.Data.ArrayNum + -1;
  if (local_60.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  iVar8 = local_60.Data.ArrayNum;
  if (iVar5 == 0) {
LAB_148da86a6:
    if (bVar3) goto LAB_148da86af;
  }
  else {
    bVar4 = FString::StartsWith(&local_60,L"-",1,IgnoreCase);
    iVar8 = local_60.Data.ArrayNum;
    if (bVar4) goto LAB_148da86a6;
LAB_148da86af:
    _Src_00.Data = local_50.Data.AllocatorInstance.Data;
    _Src.Data = local_60.Data.AllocatorInstance.Data;
    lVar9 = (longlong)local_50.Data.ArrayNum;
    if (local_50.Data.ArrayNum < 2) {
      local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_80.Data.ArrayNum = iVar8;
      if (iVar8 == 0) {
        local_80.Data.ArrayMax = 0;
        pFVar6 = &local_80;
        local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar8,0,(ForAnyElementType *)&local_80,iVar8,&local_80.Data.ArrayMax);
        memcpy(local_80.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar8 * 2);
        pFVar6 = &local_80;
        local_70.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
      }
    }
    else {
      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.Data.ArrayNum = local_50.Data.ArrayNum;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_50.Data.ArrayNum,0,(ForAnyElementType *)&local_90,local_50.Data.ArrayNum,
                 &local_90.Data.ArrayMax);
      memcpy(local_90.Data.AllocatorInstance.Data,_Src_00.Data,lVar9 * 2);
      pFVar6 = &local_90;
      bVar2 = false;
      bVar10 = true;
      local_70.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
    }
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_70.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
    if (bVar10) {
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
    if ((bVar2) && (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    pFVar6 = FProjectDescriptor::GetExtension(&local_80);
    pFVar7 = FPaths::GetExtension(&local_90,&local_70,false);
    iVar5 = (pFVar6->Data).ArrayNum;
    iVar8 = (pFVar7->Data).ArrayNum;
    if (iVar8 == iVar5) {
      if (iVar8 < 2) {
        bVar10 = true;
      }
      else {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                           (wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
        bVar10 = iVar5 == 0;
      }
    }
    else {
      bVar10 = iVar5 + iVar8 == 1;
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      iVar5 = local_70.Data.ArrayNum + -1;
      if (local_70.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      FString::AssignRange(param_2,(wchar_t *)local_70.Data.AllocatorInstance.Data,iVar5);
      pFVar6 = FPaths::GetBaseFilename(&local_90,param_2,true);
      if (param_3 != pFVar6) {
        pFVar1 = (param_3->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_3->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_3->Data).ArrayNum = (pFVar6->Data).ArrayNum;
        (param_3->Data).ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      bVar10 = true;
      goto LAB_148da88a9;
    }
    FPaths::IsRelative(&local_70);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  bVar10 = false;
LAB_148da88a9:
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return bVar10;
}

// ProcessCommandLine @ 148db11b0

bool __cdecl ProcessCommandLine(void)

{
  LPWSTR *ppWVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  LPWSTR lpCmdLine;
  LPWSTR *hMem;
  ForAnyElementType FVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_res8 [2];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar8 = 0;
  local_res8[0] = 0;
  lpCmdLine = GetCommandLineW();
  hMem = CommandLineToArgvW(lpCmdLine,local_res8);
  if (hMem == (LPWSTR *)0x0) {
    return false;
  }
  FString::FString(&local_68,"");
  if (GSavedCommandLine.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GSavedCommandLine.Data.AllocatorInstance.Data);
  }
  iVar6 = 1;
  GSavedCommandLine.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
  GSavedCommandLine.Data.ArrayNum = local_68.Data.ArrayNum;
  GSavedCommandLine.Data.ArrayMax = local_68.Data.ArrayMax;
  ppWVar1 = hMem;
  if (1 < local_res8[0]) {
    do {
      FString::AppendChars(&GSavedCommandLine,L" ",1);
      FString::FString(&local_78,ppWVar1[1]);
      iVar3 = FString::Find(&local_78,L" ",1,IgnoreCase,FromStart,-1);
      iVar7 = 0;
      if (iVar3 != -1) {
        bVar2 = FString::StartsWith(&local_78,L"-",1,IgnoreCase);
        iVar3 = iVar8;
        if (bVar2) {
          for (FVar5.Data = local_78.Data.AllocatorInstance.Data;
              FVar5.Data !=
              local_78.Data.AllocatorInstance.Data + (longlong)local_78.Data.ArrayNum * 2;
              FVar5.Data = FVar5.Data + 2) {
            if (*(short *)FVar5.Data == 0x3d) {
              iVar4 = (int)((longlong)FVar5.Data - (longlong)local_78.Data.AllocatorInstance.Data >>
                           1);
              if (iVar4 != -1) {
                iVar3 = iVar4 + 1;
              }
              break;
            }
          }
        }
        FString::RightChop(&local_78,&local_28,iVar3);
        iVar4 = local_78.Data.ArrayNum + -1;
        if (local_78.Data.ArrayNum == 0) {
          iVar4 = iVar7;
        }
        if (iVar3 < iVar4) {
          iVar4 = iVar3;
        }
        iVar3 = iVar7;
        if (0 < iVar4) {
          iVar3 = iVar4;
        }
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar5.Data = local_78.Data.AllocatorInstance.Data;
        }
        FString::ConstructFromPtrSize(&local_38,(wchar_t *)FVar5.Data,iVar3);
        FString::ConcatFC(&local_48,&local_38,L"\"");
        FString::ConcatFF(&local_58,&local_48,&local_28);
        FString::ConcatFC(&local_68,&local_58,L"\"");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        local_78.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        local_78.Data.ArrayNum = local_68.Data.ArrayNum;
        local_78.Data.ArrayMax = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      iVar3 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar3 = iVar7;
      }
      FString::AppendChars(&GSavedCommandLine,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar3)
      ;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      iVar6 = iVar6 + 1;
      ppWVar1 = ppWVar1 + 1;
    } while (iVar6 < local_res8[0]);
  }
  LocalFree(hMem);
  return true;
}

// RecordFileReadsFromPaks @ 148db17e0

void __cdecl RecordFileReadsFromPaks(void)

{
  ForElementType<FSetElementId> FVar1;
  TUniquePtr<FFileInPakFileHistoryHelper,TDefaultDelete<FFileInPakFileHistoryHelper>_> this;
  FFileInPakFileHistoryHelper *this_00;
  FFileInPakFileHistoryHelper *pFVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_01;
  
  this_00 = operator_new(0x78);
  pFVar2 = (FFileInPakFileHistoryHelper *)0x0;
  if (this_00 != (FFileInPakFileHistoryHelper *)0x0) {
    pFVar2 = FFileInPakFileHistoryHelper::FFileInPakFileHistoryHelper(this_00);
  }
  this.Ptr = FileInPakFileHistoryHelper.Ptr;
  FileInPakFileHistoryHelper.Ptr = pFVar2;
  if (this.Ptr != (FFileInPakFileHistoryHelper *)0x0) {
    this_01 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              FCoreDelegates::GetOnFileOpenedForReadFromPakFile();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_01,this.Ptr);
    DeleteCriticalSection((LPCRITICAL_SECTION)&(this.Ptr)->HistoryLock);
    ((this.Ptr)->History).HashSize = 0;
    FVar1 = ((this.Ptr)->History).Hash.SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this.Ptr);
    operator_delete(this.Ptr,0x78);
    return;
  }
  return;
}

// SetupWindowsEnvironment @ 148db1eb0

void __cdecl SetupWindowsEnvironment(void)

{
                    /* WARNING: Could not recover jumptable at 0x000148db1eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _set_invalid_parameter_handler(InvalidParameterHandler);
  return;
}

// TokenizeCommandline @ 148db2110

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
TokenizeCommandline(TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
                   wchar_t *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  wchar_t _C;
  int iVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  wchar_t *local_res8;
  FString local_38;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  _C = *param_1;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  FVar6.Data = (FScriptContainerElement *)0x0;
  local_res8 = param_1;
  if (_C != L'\0') {
    do {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      iVar3 = iswspace(_C);
      while (iVar3 != 0) {
        local_res8 = local_res8 + 1;
        iVar3 = iswspace(*local_res8);
      }
      if ((param_2) && (*local_res8 == L'\"')) {
        FParse::Token(&local_res8,&local_38,false,L'\0');
        FString::PrintfImpl(&local_18,L"\"%s\"");
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        iVar3 = local_18.Data.ArrayNum;
        local_38.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = local_18.Data.ArrayNum;
        local_38.Data.ArrayMax = local_18.Data.ArrayMax;
        local_18.Data.ArrayNum = 0;
        local_18.Data.ArrayMax = 0;
      }
      else {
        FParse::Token(&local_res8,&local_38,false,L'\0');
        FString::TrimStartAndEndInline(&local_38);
        iVar3 = local_38.Data.ArrayNum;
      }
      if (1 < iVar3) {
        if (((local_28.Data <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 < local_28.Data + (longlong)local_20._4_4_ * 0x10)
            ) && (bVar2 = FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar4;
        }
        iVar3 = (int)local_20;
        if ((int)local_20 == local_20._4_4_) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_28,(int *)((longlong)&local_20 + 4));
        }
        local_20 = CONCAT44(local_20._4_4_,iVar3 + 1);
        pFVar5 = local_28.Data + (longlong)iVar3 * 0x10;
        *(undefined8 *)pFVar5 = 0;
        *(FScriptContainerElement **)pFVar5 = local_38.Data.AllocatorInstance.Data;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar5 + 8) = local_38.Data.ArrayNum;
        *(int *)(pFVar5 + 0xc) = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      _C = *local_res8;
    } while (_C != L'\0');
    FVar6.Data = local_28.Data;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = FVar6.Data;
  __return_storage_ptr__->ArrayNum = (int)local_20;
  __return_storage_ptr__->ArrayMax = local_20._4_4_;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return __return_storage_ptr__;
}

// UpdateCoreCsvStats_BeginFrame @ 148db25f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UpdateCoreCsvStats_BeginFrame(void)

{
  void *_Src;
  code *pcVar1;
  UEngine *pUVar2;
  int iVar3;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  DWORD DVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FCsvProfiler *pFVar12;
  size_t sVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  UObject *pUVar16;
  UClass *pUVar17;
  ulonglong uVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  ForAnyElementType FVar21;
  FScriptContainerElement *pFVar22;
  ulonglong _Size;
  undefined1 auStackY_10c8 [32];
  undefined1 local_1087 [7];
  ForAnyElementType local_1080;
  int local_1078;
  int local_1074;
  float local_1070;
  float local_106c [3];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1060;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_1050;
  undefined1 auStack_103e [6];
  undefined4 local_1038;
  undefined1 local_1034 [4092];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_10c8;
  pFVar12 = FCsvProfiler::Get();
  bVar5 = FCsvProfiler::IsCapturing(pFVar12);
  if (bVar5) {
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1431,"UpdateCoreCsvStats_BeginFrame",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x597);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1431);
    }
    DVar8 = FWindowsPlatformProcess::GetCurrentProcessId();
    local_1070 = 0.0;
    local_106c[0] = 0.0;
    bVar6 = FWindowsPlatformProcess::GetPerFrameProcessorUsage(DVar8,&local_1070,local_106c);
    if (bVar6) {
      if (__CsvProfilerStat1439 == false) {
        FCsvProfilerTrace::OutputInlineStat("CPUUsage_Process",0);
        __CsvProfilerStat1439 = true;
      }
      FCsvProfiler::RecordCustomStat("CPUUsage_Process",0,local_1070,Set);
      if (__CsvProfilerStat1440 == false) {
        FCsvProfilerTrace::OutputInlineStat("CPUUsage_Idle",0);
        __CsvProfilerStat1440 = true;
      }
      FCsvProfiler::RecordCustomStat("CPUUsage_Idle",0,local_106c[0],Set);
    }
    if ((GEngine != (UEngine *)0x0) && (GWorld.World != (UWorld *)0x0)) {
      local_1060.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1060.ArrayNum = 0;
      local_1060.ArrayMax = 0;
      pFVar12 = FCsvProfiler::Get();
      FCsvProfiler::GetFrameExecCommands(pFVar12,&local_1060);
      iVar3 = local_1060.ArrayNum;
      pFVar22 = local_1060.AllocatorInstance.Data + (longlong)local_1060.ArrayNum * 0x10;
      FVar21.Data = local_1060.AllocatorInstance.Data;
      while( true ) {
        if (local_1060.ArrayNum != iVar3) {
          local_1087[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1087);
        }
        if (FVar21.Data == pFVar22) break;
        local_1078 = *(int *)(FVar21.Data + 8);
        lVar19 = (longlong)local_1078;
        _Src = *(void **)FVar21.Data;
        local_1080.Data = (FScriptContainerElement *)0x0;
        if (local_1078 == 0) {
          local_1074 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1078,0,&local_1080,local_1078,&local_1074);
          memcpy(local_1080.Data,_Src,lVar19 * 2);
        }
        FCsvProfiler::RecordEventfInternal(0,L"CsvExecCommand : %s");
        if (-1 < BookmarkChannel->Enabled) {
          if (__BookmarkPoint1453 == false) {
            FMiscTrace::OutputBookmarkSpec
                      (&__BookmarkPoint1453,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                       ,0x5ad,L"CsvExecCommand : %s");
            __BookmarkPoint1453 = true;
          }
          FVar20.Data = (FScriptContainerElement *)L"";
          if (local_1078 != 0) {
            FVar20.Data = local_1080.Data;
          }
          uVar9 = CallstackTrace_GetCurrentId();
          if (FVar20.Data == (FScriptContainerElement *)0x0) {
            uVar18 = 4;
            local_1038 = 0xc201;
            puVar15 = local_1034;
          }
          else {
            sVar13 = wcslen((wchar_t *)FVar20.Data);
            iVar10 = (int)sVar13 * 2 + 2;
            if (0xffff < iVar10) {
              iVar10 = 0xffff;
            }
            uVar18 = (longlong)iVar10 + 2;
            if (0x1000 < uVar18) goto LAB_148db2990;
            local_1038 = CONCAT22(local_1038._2_2_,0xc201);
            sVar13 = wcslen((wchar_t *)FVar20.Data);
            uVar11 = (int)sVar13 * 2 + 2;
            uVar14 = (ulonglong)uVar11;
            if (0xffff < (int)uVar11) {
              uVar14 = 0xffff;
            }
            _Size = uVar14 & 0xffff;
            memcpy((void *)((longlong)&local_1038 + 2),FVar20.Data,_Size);
            if ((short)uVar14 == -1) {
              local_106c[1] = 4.224497e-39;
              local_106c[2] = 6.44597e-44;
              *(undefined8 *)(auStack_103e + (_Size - ((uint)_Size & 1))) = 0x2e002e002e;
            }
            puVar15 = local_1034 + (_Size - 2);
          }
          if (((longlong)puVar15 - (longlong)&local_1038 != uVar18) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("PayloadBufferPtr - Buffer == FormatArgsSize",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                                 ,0x44,L""), bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((ushort)uVar18 != 0) {
            FMiscTrace::OutputBookmarkInternal
                      (&__BookmarkPoint1453,uVar9,(ushort)uVar18,(uchar *)&local_1038);
          }
        }
LAB_148db2990:
        bVar6 = false;
        UWorld::GetPlayerControllerIterator(GWorld.World,&local_1050);
        for (; (iVar10 = local_1050.Index, pTVar4 = local_1050.Container, pUVar2 = GEngine,
               -1 < local_1050.Index && (local_1050.Index < (local_1050.Container)->ArrayNum));
            local_1050.Index = local_1050.Index + 1) {
          if ((local_1050.Index < 0) &&
             (bVar7 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 8));
          if ((pUVar16 != (UObject *)0x0) &&
             (puVar15 = &pUVar16[0x16].field_0x8, *(longlong *)puVar15 != 0)) {
            pUVar17 = Z_Construct_UClass_ULocalPlayer_NoRegister();
            bVar7 = FObjectPtr::IsA((FObjectPtr *)puVar15,pUVar17);
            if ((bVar7) && (lVar19 = *(longlong *)puVar15, lVar19 != 0)) {
              pcVar1 = *(code **)(*(longlong *)(lVar19 + 0x28) + 8);
              GetGlobalLogSingleton();
              FVar20.Data = (FScriptContainerElement *)L"";
              if (local_1078 != 0) {
                FVar20.Data = local_1080.Data;
              }
              (*pcVar1)(lVar19 + 0x28,GWorld.World,FVar20.Data);
              bVar6 = true;
            }
          }
        }
        if (!bVar6) {
          pcVar1 = *(code **)(GEngine->_padding_ + 8);
          GetGlobalLogSingleton();
          FVar20.Data = (FScriptContainerElement *)L"";
          if (local_1078 != 0) {
            FVar20.Data = local_1080.Data;
          }
          (*pcVar1)(&pUVar2->_padding_,GWorld.World,FVar20.Data);
        }
        if (local_1080.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1080.Data);
        }
        FVar21.Data = FVar21.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_1060.AllocatorInstance.Data,local_1060.ArrayNum);
      if (local_1060.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1060.AllocatorInstance.Data);
      }
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// UpdateCoreCsvStats_EndFrame @ 148db2b60

/* WARNING: Removing unreachable block (ram,0x000148db2d71) */
/* WARNING: Removing unreachable block (ram,0x000148db2da9) */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl UpdateCoreCsvStats_EndFrame(void)

{
  longlong lVar1;
  float fVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  double dVar5;
  float fVar6;
  uint uVar7;
  ulong64 uVar8;
  FRHIGPUUsageFractions *pFVar9;
  IConsoleManager *pIVar10;
  longlong *plVar11;
  TConsoleVariableData<int> *pTVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  FRHIGPUUsageFractions local_e8;
  FPlatformMemoryStats local_c8;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1486,"UpdateCoreCsvStats_EndFrame",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x5ce);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1486);
  }
  dVar5 = __real_408f400000000000;
  FCsvProfiler::RecordCustomStatMinimal
            ("RenderThreadTime",0,
             (float)(FGenericPlatformTime::SecondsPerCycle * __real_408f400000000000 *
                    (double)GRenderThreadTime),Set);
  FCsvProfiler::RecordCustomStatMinimal
            ("GameThreadTime",0,
             (float)(FGenericPlatformTime::SecondsPerCycle * dVar5 * (double)GGameThreadTime),Set);
  uVar7 = RHIGetGPUFrameCycles(0);
  FCsvProfiler::RecordCustomStatMinimal
            ("GPUTime",0,(float)(FGenericPlatformTime::SecondsPerCycle * dVar5 * (double)uVar7),Set)
  ;
  FCsvProfiler::RecordCustomStatMinimal
            ("RenderThreadTime_CriticalPath",0,
             (float)(FGenericPlatformTime::SecondsPerCycle * dVar5 *
                    (double)GRenderThreadTimeCriticalPath),Set);
  FCsvProfiler::RecordCustomStatMinimal
            ("GameThreadTime_CriticalPath",0,
             (float)(FGenericPlatformTime::SecondsPerCycle * dVar5 *
                    (double)GGameThreadTimeCriticalPath),Set);
  if (GIsRunningRHIInSeparateThread_InternalUseOnly != false) {
    FCsvProfiler::RecordCustomStatMinimal
              ("RHIThreadTime",0,
               (float)(FGenericPlatformTime::SecondsPerCycle * dVar5 * (double)GRHIThreadTime),Set);
  }
  if (GInputLatencyTime != 0) {
    FCsvProfiler::RecordCustomStatMinimal
              ("InputLatencyTime",0,
               (double)GInputLatencyTime * FGenericPlatformTime::SecondsPerCycle64 * dVar5,Set);
  }
  PlatformMemoryHelpers::GetFrameMemoryStats(&local_c8);
  fVar15 = (float)((ulonglong)local_c8._padding_ >> 10) * __real_3a800000;
  uVar8 = FGenericPlatformMemory::GetExtraDevelopmentMemorySize();
  FCsvProfiler::RecordCustomStatMinimal("MemoryFreeMB",0,fVar15 - (float)(uVar8 >> 0x14),Set);
  fVar15 = __real_41f00000;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    pIVar10 = IConsoleManager::Get();
    MaxFPSCVar = (IConsoleVariable *)(**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10,L"t.MaxFPS",1)
    ;
    _Init_thread_footer(&_TSS0);
  }
  if ((MaxFPSCVar != (IConsoleVariable *)0x0) &&
     (fVar14 = (float)(**(code **)(*(longlong *)MaxFPSCVar + 0xd0))(), 0.0 < fVar14)) {
    fVar15 = (float)(**(code **)(*(longlong *)MaxFPSCVar + 0xd0))();
  }
  if (__CsvProfilerStat1517 == false) {
    FCsvProfilerTrace::OutputInlineStat("MaxFrameTime",0);
    __CsvProfilerStat1517 = true;
  }
  FCsvProfiler::RecordCustomStat("MaxFrameTime",0,__real_447a0000 / fVar15,Set);
  if ((GRHIGlobals.SupportsGPUUsage != false) && (GNumExplicitGPUsForRendering == 1)) {
    if ((*(int *)(lVar1 + 0x9d4c) < _TSS1) && (_Init_thread_header(&_TSS1), _TSS1 == -1)) {
      pIVar10 = IConsoleManager::Get();
      plVar11 = (longlong *)
                (**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10,L"r.GPUStatisticsPerProcess",1);
      pTVar12 = (TConsoleVariableData<int> *)0x0;
      if (plVar11 != (longlong *)0x0) {
        pTVar12 = (TConsoleVariableData<int> *)(**(code **)(*plVar11 + 0x68))(plVar11);
      }
      CVarPerProcessGPUStats = pTVar12;
      _Init_thread_footer(&_TSS1);
    }
    pFVar9 = (*RHIGetGPUUsage)(&local_e8,0);
    fVar15 = pFVar9->ClockScaling;
    fVar14 = pFVar9->CurrentProcessMHz;
    fVar2 = pFVar9->ExternalProcessesMHz;
    uVar3 = pFVar9->CurrentProcessMemoryUsage;
    uVar4 = pFVar9->ExternalProcessMemoryUsage;
    if (__CsvProfilerStat1523 == false) {
      FCsvProfilerTrace::OutputInlineStat("Clock",_GCsvCategory_GPUUsage.Index);
      __CsvProfilerStat1523 = true;
    }
    fVar6 = __real_42c80000;
    FCsvProfiler::RecordCustomStat
              ("Clock",_GCsvCategory_GPUUsage.Index,fVar15 * __real_42c80000,Set);
    if (__CsvProfilerStat1524 == false) {
      FCsvProfilerTrace::OutputInlineStat("Usage",_GCsvCategory_GPUUsage.Index);
      __CsvProfilerStat1524 = true;
    }
    FCsvProfiler::RecordCustomStat("Usage",_GCsvCategory_GPUUsage.Index,fVar14 * fVar6,Set);
    if (__CsvProfilerStat1525 == false) {
      FCsvProfilerTrace::OutputInlineStat("Memory",_GCsvCategory_GPUUsage.Index);
      __CsvProfilerStat1525 = true;
    }
    FCsvProfiler::RecordCustomStat("Memory",_GCsvCategory_GPUUsage.Index,(float)uVar3 * fVar6,Set);
    if (__CsvProfilerStat1526 == false) {
      FCsvProfilerTrace::OutputInlineStat("ExternalUsage",_GCsvCategory_GPUUsage.Index);
      __CsvProfilerStat1526 = true;
    }
    FCsvProfiler::RecordCustomStat("ExternalUsage",_GCsvCategory_GPUUsage.Index,fVar2 * fVar6,Set);
    if (__CsvProfilerStat1527 == false) {
      FCsvProfilerTrace::OutputInlineStat("ExternalMemory",_GCsvCategory_GPUUsage.Index);
      __CsvProfilerStat1527 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("ExternalMemory",_GCsvCategory_GPUUsage.Index,(float)uVar4 * fVar6,Set);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateGInputTime @ 148db3160

void __cdecl UpdateGInputTime(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  GInputTime = local_res8[0].QuadPart;
  return;
}

// IMPLEMENT_MODULE_Launch @ 148db3190

void __cdecl IMPLEMENT_MODULE_Launch(void)

{
  return;
}

// WinMain @ 148db31a0

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl WinMain(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  FOutputDeviceRedirector *pFVar2;
  
  iVar1 = LaunchWindowsStartup(param_1,param_2,param_3,param_4,(wchar_t *)0x0);
  if (bCalledOnce == false) {
    bCalledOnce = true;
    if (4 < (byte)LogExit._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogExit);
    }
    FGenericPlatformApplicationMisc::TearDown();
    FWindowsPlatformMisc::PlatformTearDown();
    if (GConfig != (FConfigCacheIni *)0x0) {
      FConfigCacheIni::Exit(GConfig);
      if (GConfig != (FConfigCacheIni *)0x0) {
        (**(code **)GConfig->_padding_)(GConfig,1);
      }
      GConfig = (FConfigCacheIni *)0x0;
    }
    pFVar2 = GetGlobalLogSingleton();
    if (pFVar2 != (FOutputDeviceRedirector *)0x0) {
      pFVar2 = GetGlobalLogSingleton();
      FOutputDeviceRedirector::TearDown(pFVar2);
    }
    FTextLocalizationManager::TearDown();
    FInternationalization::TearDown();
    FTraceAuxiliary::Shutdown();
  }
  if (GShouldPauseBeforeExit != false) {
    Sleep(0xffffffff);
  }
  return iVar1;
}

// test_main @ 148db3270

int __cdecl test_main(int param_1,char **param_2)

{
  return 0;
}

// filt$0 @ 15025f980

undefined8 `GuardedMainWrapper'::__l1::filt_0(_EXCEPTION_POINTERS *param_1)

{
  ECrashHandlingType EVar1;
  
  EVar1 = FWindowsPlatformMisc::GetCrashHandlingType();
  if (EVar1 == Default) {
    ReportCrash(param_1);
  }
  return 0;
}

// filt$0 @ 15025f9b0

int `LaunchWindowsStartup'::__l1::filt_0(_EXCEPTION_POINTERS *param_1)

{
  ECrashHandlingType EVar1;
  int iVar2;
  
  EVar1 = FWindowsPlatformMisc::GetCrashHandlingType();
  if (EVar1 == Default) {
    if (GEnableInnerException == false) {
      iVar2 = ReportCrash(param_1);
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

// GGameThreadMallocChurnTracker'' @ 15040c6a0

void __cdecl
`dynamic_atexit_destructor_for_'FScopedSampleMallocChurn::GGameThreadMallocChurnTracker__(void)

{
  FScopedSampleMallocChurn::GGameThreadMallocChurnTracker.StringAliasMap._72_4_ = 0;
  if (FScopedSampleMallocChurn::GGameThreadMallocChurnTracker.StringAliasMap._64_8_ != 0) {
    FMemory::Free((void *)FScopedSampleMallocChurn::GGameThreadMallocChurnTracker.StringAliasMap.
                          _64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FScopedSampleMallocChurn::GGameThreadMallocChurnTracker.StringAliasMap);
  FScopedSampleMallocChurn::GGameThreadMallocChurnTracker.AliasMap._72_4_ = 0;
  if (FScopedSampleMallocChurn::GGameThreadMallocChurnTracker.AliasMap._64_8_ != 0) {
    FMemory::Free((void *)FScopedSampleMallocChurn::GGameThreadMallocChurnTracker.AliasMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FScopedSampleMallocChurn::GGameThreadMallocChurnTracker.AliasMap);
  FScopedSampleMallocChurn::GGameThreadMallocChurnTracker.CRCToCallStackIndexMap._72_4_ = 0;
  if (FScopedSampleMallocChurn::GGameThreadMallocChurnTracker.CRCToCallStackIndexMap._64_8_ != 0) {
    FMemory::Free((void *)FScopedSampleMallocChurn::GGameThreadMallocChurnTracker.
                          CRCToCallStackIndexMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FScopedSampleMallocChurn::GGameThreadMallocChurnTracker.CRCToCallStackIndexMap);
  if (FScopedSampleMallocChurn::GGameThreadMallocChurnTracker.CallStacks.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FScopedSampleMallocChurn::GGameThreadMallocChurnTracker.CallStacks.
                  AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Approved'' @ 15040c740

void __cdecl ComparisonFileTypes::_dynamic_atexit_destructor_for__Approved__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Approved.Data.AllocatorInstance.Data;
  if (Approved.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Approved.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CPrio_AsyncEndOfFrameGameTasks'' @ 15040c760

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CPrio_AsyncEndOfFrameGameTasks__(void)

{
  CPrio_AsyncEndOfFrameGameTasks.Variable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CPrio_AsyncEndOfFrameGameTasks.Variable);
  if (CPrio_AsyncEndOfFrameGameTasks.FullHelpText.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_AsyncEndOfFrameGameTasks.FullHelpText.Data.AllocatorInstance.Data);
  }
  if (CPrio_AsyncEndOfFrameGameTasks.RawSetting.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_AsyncEndOfFrameGameTasks.RawSetting.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarDoAsyncEndOfFrameTasksRandomize'' @ 15040c7b0

void __cdecl _dynamic_atexit_destructor_for__CVarDoAsyncEndOfFrameTasksRandomize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDoAsyncEndOfFrameTasksRandomize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDoAsyncEndOfFrameTasksValidateReplicatedProperties'' @ 15040c7d0

void __cdecl
_dynamic_atexit_destructor_for__CVarDoAsyncEndOfFrameTasksValidateReplicatedProperties__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDoAsyncEndOfFrameTasksValidateReplicatedProperties);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogCategory'' @ 15040c7f0

void __cdecl _dynamic_atexit_destructor_for__CVarLogCategory__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogCategory);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogGameThreadMallocChurn'' @ 15040c810

void __cdecl _dynamic_atexit_destructor_for__CVarLogGameThreadMallocChurn__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogGameThreadMallocChurn);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogGameThreadMallocChurn_PrintFrequency'' @ 15040c830

void __cdecl _dynamic_atexit_destructor_for__CVarLogGameThreadMallocChurn_PrintFrequency__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLogGameThreadMallocChurn_PrintFrequency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogGameThreadMallocChurn_RemoveAliases'' @ 15040c850

void __cdecl _dynamic_atexit_destructor_for__CVarLogGameThreadMallocChurn_RemoveAliases__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLogGameThreadMallocChurn_RemoveAliases);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogGameThreadMallocChurn_SampleFrequency'' @ 15040c870

void __cdecl _dynamic_atexit_destructor_for__CVarLogGameThreadMallocChurn_SampleFrequency__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLogGameThreadMallocChurn_SampleFrequency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogGameThreadMallocChurn_StackIgnore'' @ 15040c890

void __cdecl _dynamic_atexit_destructor_for__CVarLogGameThreadMallocChurn_StackIgnore__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLogGameThreadMallocChurn_StackIgnore);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogGameThreadMallocChurn_StackLen'' @ 15040c8b0

void __cdecl _dynamic_atexit_destructor_for__CVarLogGameThreadMallocChurn_StackLen__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLogGameThreadMallocChurn_StackLen);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogGameThreadMallocChurn_Threshhold'' @ 15040c8d0

void __cdecl _dynamic_atexit_destructor_for__CVarLogGameThreadMallocChurn_Threshhold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLogGameThreadMallocChurn_Threshhold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogSink'' @ 15040c8f0

void __cdecl _dynamic_atexit_destructor_for__CVarLogSink__(void)

{
  CVarLogSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogTimestamp'' @ 15040c910

void __cdecl _dynamic_atexit_destructor_for__CVarLogTimestamp__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogTimestamp);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSecondsBeforeEmbeddedAppSleeps'' @ 15040c930

void __cdecl _dynamic_atexit_destructor_for__CVarSecondsBeforeEmbeddedAppSleeps__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSecondsBeforeEmbeddedAppSleeps)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15040c950

void __cdecl
``BeginFrameRenderThread'::__l10::<lambda_2>::
operator()<std::tuple<wchar_t_const_(&)[13],unsigned___int64_&>_>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015040c957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15040c970

void __cdecl
``BeginFrameRenderThread'::__l8::<lambda_1>::
operator()<std::tuple<wchar_t_const_(&)[13],unsigned___int64_&>,std::tuple<wchar_t_const_(&)[17],int_&&>_>'
::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015040c977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Difference'' @ 15040c990

void __cdecl ComparisonFileTypes::_dynamic_atexit_destructor_for__Difference__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Difference.Data.AllocatorInstance.Data;
  if (Difference.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Difference.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'FileInPakFileHistoryHelper'' @ 15040c9b0

void __cdecl _dynamic_atexit_destructor_for__FileInPakFileHistoryHelper__(void)

{
  ForElementType<FSetElementId> FVar1;
  TUniquePtr<FFileInPakFileHistoryHelper,TDefaultDelete<FFileInPakFileHistoryHelper>_> this;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  
  this.Ptr = FileInPakFileHistoryHelper.Ptr;
  if (FileInPakFileHistoryHelper.Ptr != (FFileInPakFileHistoryHelper *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              FCoreDelegates::GetOnFileOpenedForReadFromPakFile();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this.Ptr);
    DeleteCriticalSection((LPCRITICAL_SECTION)&(this.Ptr)->HistoryLock);
    ((this.Ptr)->History).HashSize = 0;
    FVar1 = ((this.Ptr)->History).Hash.SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this.Ptr);
    operator_delete(this.Ptr,0x78);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GEngineLoop'' @ 15040ca20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__GEngineLoop__(void)

{
  GEngineLoop._padding_ = (longlong)&___7FEngineLoop__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (GEngineLoop.PreInitContext.SlateRenderer.SharedReferenceCount.ReferenceController);
  if (GEngineLoop.PreInitContext.CommandletCommandLine.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GEngineLoop.PreInitContext.CommandletCommandLine.Data.AllocatorInstance.Data);
  }
  if (GEngineLoop.PreInitContext.Token.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(GEngineLoop.PreInitContext.Token.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (GEngineLoop.SessionService.SharedReferenceCount.ReferenceController);
  if (GEngineLoop.FrameTimes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GEngineLoop.FrameTimes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GRHIFrameBreadcrumb'' @ 15040ca90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__GRHIFrameBreadcrumb__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (!GRHIFrameBreadcrumb.bIsSet) {
    return;
  }
  if (GRHIFrameBreadcrumb.TypedValue.Node.Node != (FRHIBreadcrumbNode *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!Node",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                       ,0x10a,L"Manual breadcrumb was destructed before it was ended.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (GRHIFrameBreadcrumb.TypedValue.Node.AllocatorRef.SharedReferenceCount.
             ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'GSavedCommandLine'' @ 15040caf0

void __cdecl _dynamic_atexit_destructor_for__GSavedCommandLine__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GSavedCommandLine.Data.AllocatorInstance.Data;
  if (GSavedCommandLine.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GSavedCommandLine.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GScopedLogConsole'' @ 15040cb10

void __cdecl _dynamic_atexit_destructor_for__GScopedLogConsole__(void)

{
  if (GScopedLogConsole.Ptr != (FOutputDeviceConsole *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015040cb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(GScopedLogConsole.Ptr)->_padding_)(GScopedLogConsole.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GScopedStdOut'' @ 15040cb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__GScopedStdOut__(void)

{
  TUniquePtr<FOutputDeviceStdOutput,TDefaultDelete<FOutputDeviceStdOutput>_> TVar1;
  
  TVar1.Ptr = GScopedStdOut.Ptr;
  if (GScopedStdOut.Ptr != (FOutputDeviceStdOutput *)0x0) {
    FOutputDevice::~FOutputDevice((FOutputDevice *)GScopedStdOut.Ptr);
    operator_delete(TVar1.Ptr,0x18);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GScopedTestExit'' @ 15040cb70

void __cdecl _dynamic_atexit_destructor_for__GScopedTestExit__(void)

{
  if (GScopedTestExit.Ptr != (FOutputDeviceTestExit *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015040cb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(GScopedTestExit.Ptr)->_padding_)(GScopedTestExit.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogLaunchWindows'' @ 15040cb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLaunchWindows__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLaunchWindows);
  return;
}

// `dynamic_atexit_destructor_for_'OriginalProjectModuleName'' @ 15040cbb0

void __cdecl _dynamic_atexit_destructor_for__OriginalProjectModuleName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OriginalProjectModuleName.Data.AllocatorInstance.Data;
  if (OriginalProjectModuleName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OriginalProjectModuleName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ReplacementProjectModuleName'' @ 15040cbd0

void __cdecl _dynamic_atexit_destructor_for__ReplacementProjectModuleName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ReplacementProjectModuleName.Data.AllocatorInstance.Data;
  if (ReplacementProjectModuleName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ReplacementProjectModuleName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Unapproved'' @ 15040cbf0

void __cdecl ComparisonFileTypes::_dynamic_atexit_destructor_for__Unapproved__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Unapproved.Data.AllocatorInstance.Data;
  if (Unapproved.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Unapproved.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_GPUUsage'' @ 15040cc10

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_GPUUsage__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_GPUUsage.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_GPUUsage.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_GPUUsage.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// operator() @ 15053a2e0

bool __thiscall `ConditionallyEnsureOnCommandletErrors'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6766178825421196605>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6766178825421196605>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

