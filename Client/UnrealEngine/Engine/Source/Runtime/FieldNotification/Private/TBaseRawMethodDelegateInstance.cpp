// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldNotification
// Functions: 11

// CreateCopy @ 1441c1640

void __thiscall
TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::`2'::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1441c16d0

void __thiscall
TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::`2'::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 1441c1720

void __thiscall
TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::`2'::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1441c19b0

void __thiscall
TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(void *this,UObject *param_1,FFieldId *param_2)

{
  FLocal *pFVar1;
  code *pcVar2;
  FLocal *local_res8 [4];
  FName local_18;
  int local_10;
  
  local_res8[0] = *(FLocal **)((longlong)this + 0x18);
  pcVar2 = *(code **)((longlong)this + 0x20);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<_FFieldNotificationMulticastDelegateTest::RunTest_::__l2::FLocal,_FFieldNotificationMulticastDelegateTest::RunTest_::__l2::FLocal_*_&>
                     (local_res8);
  local_18 = param_2->FieldName;
  local_10 = param_2->BitNumber;
  (*pcVar2)(pFVar1,param_1,&local_18);
  return;
}

// ExecuteIfSafe @ 1441c1ac0

bool __thiscall
TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(void *this,UObject *param_1,FFieldId *param_2)

{
  FLocal *pFVar1;
  code *pcVar2;
  FLocal *local_res8 [4];
  FName local_18;
  int local_10;
  
  local_res8[0] = *(FLocal **)((longlong)this + 0x18);
  pcVar2 = *(code **)((longlong)this + 0x20);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<_FFieldNotificationMulticastDelegateTest::RunTest_::__l2::FLocal,_FFieldNotificationMulticastDelegateTest::RunTest_::__l2::FLocal_*_&>
                     (local_res8);
  local_18 = param_2->FieldName;
  local_10 = param_2->BitNumber;
  (*pcVar2)(pFVar1,param_1,&local_18);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1441c2310

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 1441c2360

void * __thiscall
TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetUObject @ 1441c2450

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1441c2600

bool __thiscall
TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// IsSafeToExecute @ 1441c26f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1441c3a80

FName __thiscall
TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

