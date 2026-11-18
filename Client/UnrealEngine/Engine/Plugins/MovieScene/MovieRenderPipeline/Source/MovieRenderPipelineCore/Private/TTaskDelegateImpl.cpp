// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// Call @ 14dd7a600

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  uint uVar1;
  void *this_00;
  code *pcVar2;
  bool bVar3;
  FTask *pFVar4;
  
  if (param_2) {
    this_00 = *(void **)param_1;
    if (*(longlong *)((longlong)this_00 + 0x178) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FTask *)(*pcVar2)();
        return pFVar4;
      }
    }
    uVar1 = *(uint *)(*(longlong *)((longlong)this_00 + 0x178) + 0x30);
    `UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>
    ::operator()(this_00,uVar1);
    UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::CompleteWorkItem
              (*(FPimpl **)((longlong)this_00 + 0x160),uVar1);
  }
  return (FTask *)0x0;
}

// CallAndMove @ 14dd7a680

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  uint uVar1;
  void *this_00;
  code *pcVar2;
  bool bVar3;
  FTask *pFVar4;
  
  if (param_4) {
    this_00 = *(void **)param_2;
    if (*(longlong *)((longlong)this_00 + 0x178) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FTask *)(*pcVar2)();
        return pFVar4;
      }
    }
    uVar1 = *(uint *)(*(longlong *)((longlong)this_00 + 0x178) + 0x30);
    `UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>
    ::operator()(this_00,uVar1);
    UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::CompleteWorkItem
              (*(FPimpl **)((longlong)this_00 + 0x160),uVar1);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::`2'::<lambda_1>_>'::`2'::<lambda_1>_>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// DelegateSize @ 14dd7e7d0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 400;
}

// Destroy @ 14dd7e8c0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *this_00;
  
  this_00 = *(void **)param_1;
  `UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::
  Push<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::~<lambda_1>(this_00);
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(this_00);
  return;
}

// IsHeapAllocated @ 14dd8ff20

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsSet @ 14dd900a0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// Move @ 14dd905c0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::`2'::<lambda_1>_>'::`2'::<lambda_1>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

