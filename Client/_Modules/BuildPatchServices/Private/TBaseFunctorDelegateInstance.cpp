// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 110

// CreateCopy @ 1431d3c80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VIBuildInstaller___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1431d3d00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VIBuildInstaller___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1431d3d50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VIBuildInstaller___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1431d3df0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::`149'::<lambda_2>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1431d3e70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::`149'::<lambda_2>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 1431d3ec0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::`149'::<lambda_2>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1431dab80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::__l2::<lambda_1>_>
::Execute(void *this,TSharedRef<IBuildInstaller,1> *param_1)

{
  `FBuildPatchServicesModule::StartupModule'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 1431dab90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>_>
::Execute(void *this,FString *param_1)

{
  `BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// ExecuteIfSafe @ 1431daf40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,TSharedRef<IBuildInstaller,1> *param_1)

{
  `FBuildPatchServicesModule::StartupModule'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 1431daf60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>_>
::ExecuteIfSafe(void *this,FString *param_1)

{
  `BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1431dd0f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1431dd100

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1431e1720

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1431e1730

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1431e3e80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1431e3e90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1431e5370

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1431e5380

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1431e7df0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1431e7e00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1431fcbb0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1431fcbc0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14331b5c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14331b640

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14331b690

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14331b730

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14331b7b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14331b800

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14331b8a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14331b920

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14331b970

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14331ba10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14331ba90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14331bae0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14331bb80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,````````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,````````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14331bc00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,````````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,````````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14331bc50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,````````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,````````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14331bcf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14331bd70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14331bdc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___N1PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14331be60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14331bee0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14331bf30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14331bfd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14331c050

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14331c0a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14331e9d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::Execute(void *this,FGuid *param_1,bool param_2,bool param_3,void *param_4)

{
  *(bool *)*(undefined8 *)((longlong)this + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014331e9de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))();
  return;
}

// Execute @ 14331e9f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::Execute(void *this,FGuid *param_1,bool param_2,bool param_3,void *param_4)

{
  *(bool *)*(undefined8 *)((longlong)this + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014331e9fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))();
  return;
}

// Execute @ 14331ea10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::Execute(void *this,FGuid *param_1,bool param_2,bool param_3,void *param_4)

{
  *(bool *)*(undefined8 *)((longlong)this + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014331ea1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))();
  return;
}

// Execute @ 14331ea30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::Execute(void *this,FGuid *param_1,bool param_2,bool param_3,void *param_4)

{
  *(bool *)*(undefined8 *)((longlong)this + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014331ea3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))();
  return;
}

// Execute @ 14331ea50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,````````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::Execute(void *this,FGuid *param_1,bool param_2,bool param_3,void *param_4)

{
  *(bool *)*(undefined8 *)((longlong)this + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014331ea5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))();
  return;
}

// Execute @ 14331ea70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::Execute(void *this,FGuid *param_1,bool param_2,bool param_3,void *param_4)

{
  *(bool *)*(undefined8 *)((longlong)this + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014331ea7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))();
  return;
}

// Execute @ 14331ea90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_2>_>
::Execute(void *this,int param_1,TSharedRef<BuildPatchServices::IDownload,1> *param_2)

{
  `FDownloadServiceSpec::Define'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14331eaa0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_1>_>
::Execute(void *this,int param_1,ulong64 param_2)

{
  `FDownloadServiceSpec::Define'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,(int)param_2);
  return;
}

// ExecuteIfSafe @ 14331eb00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FGuid *param_1,bool param_2,bool param_3,void *param_4)

{
  *(bool *)*(undefined8 *)((longlong)this + 0x18) = param_3;
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))();
  return true;
}

// ExecuteIfSafe @ 14331eb30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FGuid *param_1,bool param_2,bool param_3,void *param_4)

{
  *(bool *)*(undefined8 *)((longlong)this + 0x18) = param_3;
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))();
  return true;
}

// ExecuteIfSafe @ 14331eb60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FGuid *param_1,bool param_2,bool param_3,void *param_4)

{
  *(bool *)*(undefined8 *)((longlong)this + 0x18) = param_3;
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))();
  return true;
}

// ExecuteIfSafe @ 14331eb90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FGuid *param_1,bool param_2,bool param_3,void *param_4)

{
  *(bool *)*(undefined8 *)((longlong)this + 0x18) = param_3;
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))();
  return true;
}

// ExecuteIfSafe @ 14331ebc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,````````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FGuid *param_1,bool param_2,bool param_3,void *param_4)

{
  *(bool *)*(undefined8 *)((longlong)this + 0x18) = param_3;
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))();
  return true;
}

// ExecuteIfSafe @ 14331ebf0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FGuid *param_1,bool param_2,bool param_3,void *param_4)

{
  *(bool *)*(undefined8 *)((longlong)this + 0x18) = param_3;
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x10))();
  return true;
}

// ExecuteIfSafe @ 14331ec20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,int param_1,TSharedRef<BuildPatchServices::IDownload,1> *param_2)

{
  `FDownloadServiceSpec::Define'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14331ec40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,int param_1,ulong64 param_2)

{
  `FDownloadServiceSpec::Define'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,(int)param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 143320310

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 143320320

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 143320330

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 143320340

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 143320350

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,````````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 143320360

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 143320370

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 143320380

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 143320e90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 143320ea0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 143320eb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 143320ec0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 143320ed0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,````````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 143320ee0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 143320ef0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 143320f00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 143321280

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 143321290

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1433212a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1433212b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1433212c0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,````````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1433212d0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1433212e0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1433212f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 143321460

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 143321470

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 143321480

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 143321490

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1433214a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,````````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1433214b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1433214c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1433214d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1433220e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1433220f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 143322100

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 143322110

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 143322120

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,````````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 143322130

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 143322140

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 143322150

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 143328f50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143328f60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,``````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143328f70

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143328f80

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143328f90

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,````````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143328fa0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy,```````FInstallChunkSourceSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143328fb0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143328fc0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

