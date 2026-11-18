// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 44

// TryGetBoundFunctionName @ 14648eba0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14648ebb0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14648ebc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14648ebd0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14648ebe0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14648ebf0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14648ec00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14648eca0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14648ed20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14648ed60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
          *this,IConsoleVariable *param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if (TransformableHandleUtils::SkeletalMeshTickingMode < 2) {
    iVar1 = TransformableHandleUtils::SkeletalMeshTickingMode;
  }
  TransformableHandleUtils::SkeletalMeshTickingMode = 0;
  if (0 < iVar1) {
    TransformableHandleUtils::SkeletalMeshTickingMode = iVar1;
  }
  return;
}

// ExecuteIfSafe @ 14648ed90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
                *this,IConsoleVariable *param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if (TransformableHandleUtils::SkeletalMeshTickingMode < 2) {
    iVar1 = TransformableHandleUtils::SkeletalMeshTickingMode;
  }
  TransformableHandleUtils::SkeletalMeshTickingMode = 0;
  if (0 < iVar1) {
    TransformableHandleUtils::SkeletalMeshTickingMode = iVar1;
  }
  return true;
}

// TryGetBoundFunctionName @ 14648edf0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14648ee00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14648ee10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14648ee20

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14648ee30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14648ee40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14648ee50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14648eef0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14648ef70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14648efb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
          *this,IConsoleVariable *param_1)

{
  if (2 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Constraints__ne_1512bb350,
               (FLogCategoryBase *)&LogTemp);
  }
  TransformableHandleUtils::SkeletalMeshTickingMode = 2;
  if (TransformableHandleUtils::bNewEvaluation != false) {
    TransformableHandleUtils::SkeletalMeshTickingMode = 0;
  }
  return;
}

// ExecuteIfSafe @ 14648f010

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
                *this,IConsoleVariable *param_1)

{
  if (2 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Constraints__ne_1512bb350,
               (FLogCategoryBase *)&LogTemp);
  }
  TransformableHandleUtils::SkeletalMeshTickingMode = 2;
  if (TransformableHandleUtils::bNewEvaluation != false) {
    TransformableHandleUtils::SkeletalMeshTickingMode = 0;
  }
  return true;
}

// CreateCopy @ 1464ab280

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::__l5::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EConstraintsManagerNotifyType__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1464ab300

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConstraintsManagerNotifyType__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1464ab350

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::__l5::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EConstraintsManagerNotifyType__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1464ab3f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::__l5::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EConstraintsManagerNotifyType__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1464ab470

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConstraintsManagerNotifyType__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1464ab4c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::__l5::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EConstraintsManagerNotifyType__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1464af2f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::__l5::<lambda_1>_>
::Execute(void *this,EConstraintsManagerNotifyType param_1,UObject *param_2)

{
  if (param_1 == GraphUpdated) {
    TSet<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>,FDefaultSetAllocator>
    ::Reset(*(TSet<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>,FDefaultSetAllocator>
              **)((longlong)this + 0x18));
    return;
  }
  return;
}

// Execute @ 1464af310

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::__l5::<lambda_1>_>
::Execute(void *this,EConstraintsManagerNotifyType param_1,UObject *param_2)

{
  TSet<TTuple<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  
  if (param_1 == GraphUpdated) {
    this_00 = *(TSet<TTuple<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                **)((longlong)this + 0x18);
    TSet<TTuple<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset(this_00);
    TSet<TTuple<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)(this_00 + 1));
    return;
  }
  return;
}

// ExecuteIfSafe @ 1464af4a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this,EConstraintsManagerNotifyType param_1,UObject *param_2)

{
  if (param_1 == GraphUpdated) {
    TSet<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>,FDefaultSetAllocator>
    ::Reset(*(TSet<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>,FDefaultSetAllocator>
              **)((longlong)this + 0x18));
  }
  return true;
}

// ExecuteIfSafe @ 1464af4c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this,EConstraintsManagerNotifyType param_1,UObject *param_2)

{
  TSet<TTuple<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  
  if (param_1 == GraphUpdated) {
    this_00 = *(TSet<TTuple<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                **)((longlong)this + 0x18);
    TSet<TTuple<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset(this_00);
    TSet<TTuple<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)(this_00 + 1));
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1464b1360

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1464b1370

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1464b4de0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1464b4df0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1464b7040

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1464b7050

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1464b8340

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1464b8350

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1464b9450

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1464b9460

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1464c2730

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1464c2740

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

