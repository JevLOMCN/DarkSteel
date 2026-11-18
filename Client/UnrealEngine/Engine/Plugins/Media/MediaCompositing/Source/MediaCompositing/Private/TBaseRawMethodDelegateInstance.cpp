// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 22

// CreateCopy @ 14ea69a90

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaData,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFMovieSceneMediaData____A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ea69b20

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaData,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFMovieSceneMediaData____A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14ea69b70

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaData,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFMovieSceneMediaData____A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ea69c20

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieSceneMediaPlayerStore____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e3b72090 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ea69cb0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieSceneMediaPlayerStore____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e3b72090 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ea69d00

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieSceneMediaPlayerStore____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_e3b72090 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14ea6a340

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaData,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::Execute(void *this,EMediaEvent param_1)

{
  FMovieSceneMediaData *pFVar1;
  FMovieSceneMediaData *local_res8;
  
  local_res8 = *(FMovieSceneMediaData **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FMovieSceneMediaData,FMovieSceneMediaData_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1);
  return;
}

// Execute @ 14ea6a390

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FMovieSceneMediaPlayerStore *pFVar1;
  FMovieSceneMediaPlayerStore *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMovieSceneMediaPlayerStore,FMovieSceneMediaPlayerStore_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 14ea6b400

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaData,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,EMediaEvent param_1)

{
  FMovieSceneMediaData *pFVar1;
  FMovieSceneMediaData *local_res8;
  
  local_res8 = *(FMovieSceneMediaData **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FMovieSceneMediaData,FMovieSceneMediaData_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14ea6b450

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FMovieSceneMediaPlayerStore *pFVar1;
  FMovieSceneMediaPlayerStore *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMovieSceneMediaPlayerStore,FMovieSceneMediaPlayerStore_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14ea6ba50

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaData,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14ea6ba60

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14ea6c680

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaData,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 14ea6c690

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14ea6ceb0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaData,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ea6cec0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14ea6d0d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaData,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 14ea6d0e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14ea6d300

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaData,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14ea6d310

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14ea70850

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaData,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ea70860

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

