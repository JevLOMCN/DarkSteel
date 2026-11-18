// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 55

// CreateCopy @ 14e6988f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x78,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,_UInterchangeFbxTranslator::GetMeshPayloadData_::__l7::<lambda_2>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e698960

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x78,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,_UInterchangeFbxTranslator::GetMeshPayloadData_::__l7::<lambda_2>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14e6989a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>_>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x78,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,_UInterchangeFbxTranslator::GetMeshPayloadData_::__l7::<lambda_2>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e698a30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,_UInterchangeFbxTranslator::GetAnimationPayloadData_::__l18::<lambda_2>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e698aa0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,_UInterchangeFbxTranslator::GetAnimationPayloadData_::__l18::<lambda_2>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14e698ae0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>_>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,_UInterchangeFbxTranslator::GetAnimationPayloadData_::__l18::<lambda_2>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e698b70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l22::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x80,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::`22'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    UE::Interchange::FAnimationPayloadQuery::FAnimationPayloadQuery
              ((FAnimationPayloadQuery *)(puVar1 + 4),
               (FAnimationPayloadQuery *)((longlong)this + 0x20));
    puVar1[0xf] = *(undefined8 *)((longlong)this + 0x78);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e698c10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l22::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x80,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::`22'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    UE::Interchange::FAnimationPayloadQuery::FAnimationPayloadQuery
              ((FAnimationPayloadQuery *)(puVar1 + 4),
               (FAnimationPayloadQuery *)((longlong)this + 0x20));
    puVar1[0xf] = *(undefined8 *)((longlong)this + 0x78);
  }
  return;
}

// CreateCopy @ 14e698c80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l22::<lambda_3>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x80,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::`22'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    UE::Interchange::FAnimationPayloadQuery::FAnimationPayloadQuery
              ((FAnimationPayloadQuery *)(puVar3 + 4),
               (FAnimationPayloadQuery *)((longlong)this + 0x20));
    puVar3[0xf] = *(undefined8 *)((longlong)this + 0x78);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14e69b1f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>_>
::Execute(void *this,int param_1)

{
  `UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e69b200

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>_>
::Execute(void *this,int param_1)

{
  `UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14e69b210

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l22::<lambda_3>_>
::Execute(void *this,int param_1)

{
  `UInterchangeFbxTranslator::GetAnimationPayloadData'::__l22::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// ExecuteIfSafe @ 14e69b270

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>_>
::ExecuteIfSafe(void *this,int param_1)

{
  `UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e69b290

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>_>
::ExecuteIfSafe(void *this,int param_1)

{
  `UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14e69b2b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l22::<lambda_3>_>
::ExecuteIfSafe(void *this,int param_1)

{
  `UInterchangeFbxTranslator::GetAnimationPayloadData'::__l22::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14e69e360

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e69e370

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e69e380

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l22::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14e69fb50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e69fb60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e69fb70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l22::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14e6a2860

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e6a2870

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e6a2880

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l22::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14e6a2aa0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e6a2ab0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e6a2ac0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l22::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14e6a3800

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e6a3810

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e6a3820

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l22::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14e6a9030

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e6a9040

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e6a9050

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l22::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14e6c1a60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeImportModule::StartupModule'::__l2::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeImportModule::StartupModule'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e6c1ae0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeImportModule::StartupModule'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeImportModule::StartupModule'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14e6c1b20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeImportModule::StartupModule'::__l2::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeImportModule::StartupModule'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14e6c2740

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeImportModule::StartupModule'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FInterchangeImportModule::StartupModule'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 14e6c2750

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeImportModule::StartupModule'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FInterchangeImportModule::StartupModule'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14e6c38a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeImportModule::StartupModule'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14e6c4b90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeImportModule::StartupModule'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14e6c9b20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeImportModule::StartupModule'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14e6ce8e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeImportModule::StartupModule'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14e6ce930

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeImportModule::StartupModule'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14e6d6070

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeImportModule::StartupModule'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14e711ec0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMeshDescription_const_&,FMeshDescription_&,TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>_&),FDefaultDelegateUserPolicy,`UInterchangeStaticMeshFactory::ImportAsset_Async'::__l160::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMeshDescription__AEAU1_AEAV__TMap_UFPolygonGroupID__U1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_UFPolygonGroupID__U1__0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FMeshDescription_const_&,FMeshDescription_&,TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>_&),FDefaultDelegateUserPolicy,`UInterchangeStaticMeshFactory::ImportAsset_Async'::`160'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e711f40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMeshDescription_const_&,FMeshDescription_&,TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>_&),FDefaultDelegateUserPolicy,`UInterchangeStaticMeshFactory::ImportAsset_Async'::__l160::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMeshDescription__AEAU1_AEAV__TMap_UFPolygonGroupID__U1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_UFPolygonGroupID__U1__0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FMeshDescription_const_&,FMeshDescription_&,TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>_&),FDefaultDelegateUserPolicy,`UInterchangeStaticMeshFactory::ImportAsset_Async'::`160'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14e711f80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMeshDescription_const_&,FMeshDescription_&,TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>_&),FDefaultDelegateUserPolicy,`UInterchangeStaticMeshFactory::ImportAsset_Async'::__l160::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMeshDescription__AEAU1_AEAV__TMap_UFPolygonGroupID__U1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_UFPolygonGroupID__U1__0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FMeshDescription_const_&,FMeshDescription_&,TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>_&),FDefaultDelegateUserPolicy,`UInterchangeStaticMeshFactory::ImportAsset_Async'::`160'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14e713f20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMeshDescription_const_&,FMeshDescription_&,TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>_&),FDefaultDelegateUserPolicy,`UInterchangeStaticMeshFactory::ImportAsset_Async'::__l160::<lambda_1>_>
::Execute(void *this,FMeshDescription *param_1,FMeshDescription *param_2,
         TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>
         *param_3)

{
  UE::Interchange::Private::MeshHelper::RemapPolygonGroups(param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 14e713f40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMeshDescription_const_&,FMeshDescription_&,TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>_&),FDefaultDelegateUserPolicy,`UInterchangeStaticMeshFactory::ImportAsset_Async'::__l160::<lambda_1>_>
::ExecuteIfSafe(void *this,FMeshDescription *param_1,FMeshDescription *param_2,
               TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>
               *param_3)

{
  UE::Interchange::Private::MeshHelper::RemapPolygonGroups(param_1,param_2,param_3);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14e718120

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMeshDescription_const_&,FMeshDescription_&,TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>_&),FDefaultDelegateUserPolicy,`UInterchangeStaticMeshFactory::ImportAsset_Async'::__l160::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14e719510

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMeshDescription_const_&,FMeshDescription_&,TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>_&),FDefaultDelegateUserPolicy,`UInterchangeStaticMeshFactory::ImportAsset_Async'::__l160::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14e71f610

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMeshDescription_const_&,FMeshDescription_&,TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>_&),FDefaultDelegateUserPolicy,`UInterchangeStaticMeshFactory::ImportAsset_Async'::__l160::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14e71fa50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMeshDescription_const_&,FMeshDescription_&,TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>_&),FDefaultDelegateUserPolicy,`UInterchangeStaticMeshFactory::ImportAsset_Async'::__l160::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14e7235a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMeshDescription_const_&,FMeshDescription_&,TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>_&),FDefaultDelegateUserPolicy,`UInterchangeStaticMeshFactory::ImportAsset_Async'::__l160::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14e72a9e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMeshDescription_const_&,FMeshDescription_&,TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>_&),FDefaultDelegateUserPolicy,`UInterchangeStaticMeshFactory::ImportAsset_Async'::__l160::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

