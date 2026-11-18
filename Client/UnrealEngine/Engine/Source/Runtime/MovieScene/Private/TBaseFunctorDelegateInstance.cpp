// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 22

// CreateCopy @ 14619a7b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMovieSceneSubSequenceTreeEntry__AEAV__TStringBuilderWithBuffer__W_0BAA____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14619a830

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMovieSceneSubSequenceTreeEntry__AEAV__TStringBuilderWithBuffer__W_0BAA____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14619a870

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMovieSceneSubSequenceTreeEntry__AEAV__TStringBuilderWithBuffer__W_0BAA____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14619a910

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::__l14::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::`14'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14619a990

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::__l14::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::`14'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14619a9e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::__l14::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::`14'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1461a45d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::__l2::<lambda_1>_>
::Execute(void *this,FMovieSceneSubSequenceTreeEntry *param_1,
         TStringBuilderWithBuffer<wchar_t,256> *param_2)

{
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_2,L"ID=%d");
  return;
}

// Execute @ 1461a45f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::__l14::<lambda_1>_>
::Execute(void *this)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2 = (undefined8 *)(lVar1 + 8);
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar2 != &local_18) {
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x10),aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// ExecuteIfSafe @ 1461a4710

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FMovieSceneSubSequenceTreeEntry *param_1,
               TStringBuilderWithBuffer<wchar_t,256> *param_2)

{
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_2,L"ID=%d");
  return true;
}

// ExecuteIfSafe @ 1461a4740

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::__l14::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2 = (undefined8 *)(lVar1 + 8);
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar2 != &local_18) {
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x10),aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1461b0610

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1461b0620

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::__l14::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1461b1a30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1461b1a40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::__l14::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1461b48c0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1461b48d0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::__l14::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1461b55e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1461b55f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::__l14::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1461bbe40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1461bbe50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::__l14::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1461da730

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1461da740

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::__l14::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

