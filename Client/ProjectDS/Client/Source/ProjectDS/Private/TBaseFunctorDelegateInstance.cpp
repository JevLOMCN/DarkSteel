// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 77

// CreateCopy @ 14bb57cd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UDS_TimeUtilManager::UpdateNPTClient'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UDS_TimeUtilManager::UpdateNPTClient'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bb57d50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UDS_TimeUtilManager::UpdateNPTClient'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UDS_TimeUtilManager::UpdateNPTClient'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14bb57d90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UDS_TimeUtilManager::UpdateNPTClient'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UDS_TimeUtilManager::UpdateNPTClient'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bb5e340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UDS_TimeUtilManager::UpdateNPTClient'::__l2::<lambda_1>_>
::Execute(void *this,bool param_1)

{
  if ((param_1) && (4 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_NTP_____0T_D__1527843b8,(FLogCategoryBase *)&LogTemp)
    ;
    return;
  }
  return;
}

// ExecuteIfSafe @ 14bb5f4e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UDS_TimeUtilManager::UpdateNPTClient'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,bool param_1)

{
  if ((param_1) && (4 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_NTP_____0T_D__1527843b8,(FLogCategoryBase *)&LogTemp)
    ;
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14bb63730

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UDS_TimeUtilManager::UpdateNPTClient'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14bb67060

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UDS_TimeUtilManager::UpdateNPTClient'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14bb68210

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UDS_TimeUtilManager::UpdateNPTClient'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14bb69b20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UDS_TimeUtilManager::UpdateNPTClient'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14bb6f290

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UDS_TimeUtilManager::UpdateNPTClient'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14bb93350

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UDS_TimeUtilManager::UpdateNPTClient'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14bbaf720

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_DungeonService::OnExitDungeon'::__l2::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_DungeonService::OnExitDungeon'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbaf7a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_DungeonService::OnExitDungeon'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_DungeonService::OnExitDungeon'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14bbaf7e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_DungeonService::OnExitDungeon'::__l2::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_DungeonService::OnExitDungeon'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bbb50a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_DungeonService::OnExitDungeon'::__l2::<lambda_1>_>
::Execute(void *this)

{
  UDS_WindowManager *this_00;
  void *local_res8;
  uint local_res10 [6];
  
  local_res8 = this;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res8 = (void *)((ulonglong)local_res8 & 0xffffffff00000000);
    local_res10[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,BtnDungeonExit,local_res10,(float *)&local_res8);
  }
  return;
}

// ExecuteIfSafe @ 14bbb5b20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_DungeonService::OnExitDungeon'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  UDS_WindowManager *this_00;
  void *local_res8;
  uint local_res10 [6];
  
  local_res8 = this;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res8 = (void *)((ulonglong)local_res8 & 0xffffffff00000000);
    local_res10[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,BtnDungeonExit,local_res10,(float *)&local_res8);
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14bbbb7c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_DungeonService::OnExitDungeon'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14bbbcdb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_DungeonService::OnExitDungeon'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14bbbe3a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_DungeonService::OnExitDungeon'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14bbbfc50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_DungeonService::OnExitDungeon'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14bbc4af0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_DungeonService::OnExitDungeon'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14bbe2f50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_DungeonService::OnExitDungeon'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14bbed930

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`UDS_PostProcessEffectBase::SetPostProcessMaterialParameter'::__l2::<lambda_1>_>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`UDS_PostProcessEffectBase::SetPostProcessMaterialParameter'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbed9c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`UDS_PostProcessEffectBase::SetPostProcessMaterialParameter'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`UDS_PostProcessEffectBase::SetPostProcessMaterialParameter'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  return;
}

// CreateCopy @ 14bbeda20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`UDS_PostProcessEffectBase::SetPostProcessMaterialParameter'::__l2::<lambda_1>_>
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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`UDS_PostProcessEffectBase::SetPostProcessMaterialParameter'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
    puVar6[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bbf0870

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`UDS_PostProcessEffectBase::SetPostProcessMaterialParameter'::__l2::<lambda_1>_>
::Execute(void *this,float param_1)

{
  bool bVar1;
  UMaterialParameterCollectionInstance *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x20));
  if (bVar1) {
    this_00 = (UMaterialParameterCollectionInstance *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x20));
    UMaterialParameterCollectionInstance::SetScalarParameterValue
              (this_00,*(FName *)((longlong)this + 0x28),param_1);
  }
  return;
}

// ExecuteIfSafe @ 14bbf0e10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`UDS_PostProcessEffectBase::SetPostProcessMaterialParameter'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,float param_1)

{
  bool bVar1;
  UMaterialParameterCollectionInstance *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x20));
  if (bVar1) {
    this_00 = (UMaterialParameterCollectionInstance *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x20));
    UMaterialParameterCollectionInstance::SetScalarParameterValue
              (this_00,*(FName *)((longlong)this + 0x28),param_1);
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14bbf7af0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`UDS_PostProcessEffectBase::SetPostProcessMaterialParameter'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14bbf85e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`UDS_PostProcessEffectBase::SetPostProcessMaterialParameter'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14bbf87a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`UDS_PostProcessEffectBase::SetPostProcessMaterialParameter'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14bbf8b60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`UDS_PostProcessEffectBase::SetPostProcessMaterialParameter'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14bbf9fc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`UDS_PostProcessEffectBase::SetPostProcessMaterialParameter'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14bc20600

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`UDS_PostProcessEffectBase::SetPostProcessMaterialParameter'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14bcec1d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,``UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
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
              ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr______6B_
    ;
    puVar1[1] = *(undefined8 *)((longlong)this + 8);
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,``UDS_M_Inventory::OpenFunctionList'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bcec260

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,``UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr______6B_
    ;
    puVar1[1] = *(undefined8 *)((longlong)this + 8);
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,``UDS_M_Inventory::OpenFunctionList'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14bcec2b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,``UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
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
              ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr______6B_
    ;
    puVar3[1] = *(undefined8 *)((longlong)this + 8);
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,``UDS_M_Inventory::OpenFunctionList'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bcec360

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr______6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x10);
    puVar2[1] = *(undefined8 *)((longlong)this + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::`2'::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
               ::_vftable_;
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bcec3f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr______6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x10);
    puVar2[1] = *(undefined8 *)((longlong)this + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::`2'::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
               ::_vftable_;
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14bcec440

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr______6B_
    ;
    uVar2 = *(undefined4 *)((longlong)this + 0xc);
    uVar3 = *(undefined4 *)((longlong)this + 0x10);
    uVar4 = *(undefined4 *)((longlong)this + 0x14);
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)this + 8);
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar2;
    *(undefined4 *)(puVar6 + 2) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar4;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::`2'::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
               ::_vftable_;
    puVar6[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bcefd80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,``UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::Execute(void *this,int param_1)

{
  int local_res10 [6];
  
  local_res10[0] = param_1;
  ``UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),local_res10,
             (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*(FWeakObjectPtr *)((longlong)this + 8));
  return;
}

// Execute @ 14bcefdb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
::Execute(void *this,UDS_UserWidget *param_1)

{
  `UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x20),param_1,
             (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*(FWeakObjectPtr *)((longlong)this + 8),
             (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)
             *(FWeakObjectPtr *)((longlong)this + 0x10));
  return;
}

// ExecuteIfSafe @ 14bcf05c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,``UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::ExecuteIfSafe(void *this,int param_1)

{
  int local_res10 [6];
  
  local_res10[0] = param_1;
  ``UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),local_res10,
             (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*(FWeakObjectPtr *)((longlong)this + 8));
  return true;
}

// ExecuteIfSafe @ 14bcf05f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
::ExecuteIfSafe(void *this,UDS_UserWidget *param_1)

{
  `UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x20),param_1,
             (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*(FWeakObjectPtr *)((longlong)this + 8),
             (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)
             *(FWeakObjectPtr *)((longlong)this + 0x10));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14bcf59c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,``UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14bcf59d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14bcf97d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,``UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14bcf97e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14bcfeaf0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,``UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bcfeb00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14bd006a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,``UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14bd006b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14bd05e20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,``UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14bd05e30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14bd23740

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,``UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bd23750

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14beda590

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_VM_AsyncSlotTest::OnSetViewModel'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_VM_AsyncSlotTest::OnSetViewModel'::`2'::<lambda_1>_>
               ::_vftable_;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(puVar1 + 3),(FSoftObjectPath *)((longlong)this + 0x18));
    puVar1[7] = *(undefined8 *)((longlong)this + 0x38);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14beda640

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_VM_AsyncSlotTest::OnSetViewModel'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_VM_AsyncSlotTest::OnSetViewModel'::`2'::<lambda_1>_>
               ::_vftable_;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(puVar1 + 3),(FSoftObjectPath *)((longlong)this + 0x18));
    puVar1[7] = *(undefined8 *)((longlong)this + 0x38);
  }
  return;
}

// CreateCopy @ 14beda6b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_VM_AsyncSlotTest::OnSetViewModel'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_VM_AsyncSlotTest::OnSetViewModel'::`2'::<lambda_1>_>
               ::_vftable_;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(puVar3 + 3),(FSoftObjectPath *)((longlong)this + 0x18));
    puVar3[7] = *(undefined8 *)((longlong)this + 0x38);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014beda758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
    return;
  }
  return;
}

// Execute @ 14bee4870

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_VM_AsyncSlotTest::OnSetViewModel'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `UDS_VM_AsyncSlotTest::OnSetViewModel'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 14bee6970

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_VM_AsyncSlotTest::OnSetViewModel'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `UDS_VM_AsyncSlotTest::OnSetViewModel'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14beed5b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_VM_AsyncSlotTest::OnSetViewModel'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14beef3e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_VM_AsyncSlotTest::OnSetViewModel'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14bef0b30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_VM_AsyncSlotTest::OnSetViewModel'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14bef1200

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_VM_AsyncSlotTest::OnSetViewModel'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14bef5520

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_VM_AsyncSlotTest::OnSetViewModel'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14bf1d480

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_VM_AsyncSlotTest::OnSetViewModel'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14c071050

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_HUD_Detection::AddIndicator'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_UDS_HUD_Detection::AddIndicator_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14c0710c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_HUD_Detection::AddIndicator'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_UDS_HUD_Detection::AddIndicator_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14c071100

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_HUD_Detection::AddIndicator'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_UDS_HUD_Detection::AddIndicator_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14c07e240

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_HUD_Detection::AddIndicator'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `UDS_HUD_Detection::AddIndicator'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 14c07ff00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_HUD_Detection::AddIndicator'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `UDS_HUD_Detection::AddIndicator'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14c085120

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_HUD_Detection::AddIndicator'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14c088450

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_HUD_Detection::AddIndicator'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14c0892c0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_HUD_Detection::AddIndicator'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14c08a540

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_HUD_Detection::AddIndicator'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14c08f890

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_HUD_Detection::AddIndicator'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14c0ad100

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_HUD_Detection::AddIndicator'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

