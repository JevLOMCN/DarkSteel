// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 22

// CreateCopy @ 14da4ee50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFSkinnedSceneProxy_Nanite___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::`11'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14da4eed0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFSkinnedSceneProxy_Nanite___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::`11'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14da4ef20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFSkinnedSceneProxy_Nanite___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::`11'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14da4efc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFSkinnedSceneProxy_Nanite___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14da4f040

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFSkinnedSceneProxy_Nanite___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14da4f090

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFSkinnedSceneProxy_Nanite___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14da4f520

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>_>
::Execute(void *this,FSkinnedSceneProxy *param_1)

{
  `UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14da4f530

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>_>
::Execute(void *this,FSkinnedSceneProxy *param_1)

{
  `UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// ExecuteIfSafe @ 14da4fad0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>_>
::ExecuteIfSafe(void *this,FSkinnedSceneProxy *param_1)

{
  `UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14da4faf0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>_>
::ExecuteIfSafe(void *this,FSkinnedSceneProxy *param_1)

{
  `UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14da501c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14da501d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14da50210

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14da50220

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14da50b20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14da50b30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14da50b70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14da50b80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14da50c20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14da50c30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14da53b60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14da53b70

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

